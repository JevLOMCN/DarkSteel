// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 103

// ResetFunction @ 14adcf4f0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
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
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)param_1[7]
             ,(TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)
              param_1[3]);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14adcf550

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
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

// ResetFunction @ 14adcf5a0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::Frontend::FAnalyzerAddress>_>
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
  *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)((longlong)IVar1 + 8);
  uVar4 = *(undefined8 *)((longlong)IVar1 + 0x18);
  *(undefined8 *)((longlong)IVar2 + 0x10) = *(undefined8 *)((longlong)IVar1 + 0x10);
  *(undefined8 *)((longlong)IVar2 + 0x18) = uVar4;
  *(undefined8 *)((longlong)IVar2 + 0x20) = *(undefined8 *)((longlong)IVar1 + 0x20);
  *(undefined8 *)((longlong)IVar2 + 0x28) = *(undefined8 *)((longlong)IVar1 + 0x28);
  *(undefined8 *)((longlong)IVar2 + 0x30) = *(undefined8 *)((longlong)IVar1 + 0x30);
  uVar4 = *(undefined8 *)((longlong)IVar1 + 0x40);
  *(undefined8 *)((longlong)IVar2 + 0x38) = *(undefined8 *)((longlong)IVar1 + 0x38);
  *(undefined8 *)((longlong)IVar2 + 0x40) = uVar4;
  *(undefined8 *)((longlong)IVar2 + 0x48) = *(undefined8 *)((longlong)IVar1 + 0x48);
  *(undefined1 *)((longlong)IVar2 + 0x50) = *(undefined1 *)((longlong)IVar1 + 0x50);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14adcf630

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>_>
  TVar5;
  TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *pTVar6;
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
  SendNodePrivate::
  TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
  ResetSenderAndCleanupChannel
            ((TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
              *)param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::
          TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
          ::CreateNewSender((TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                             *)param_1);
  pTVar6 = (TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *)
           (param_1 + 0x10);
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

// ResetFunction @ 14adcf710

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar6;
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
  SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
  ResetSenderAndCleanupChannel(param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::
          TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
          CreateNewSender(param_1);
  pTVar6 = (TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)(param_1 + 0x10);
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

// ResetFunction @ 14adcf7f0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::Frontend::FAnalyzerAddress>,TDefaultDelete<Metasound::TSender<Metasound::Frontend::FAnalyzerAddress>_>_>
  TVar5;
  TSender<Metasound::Frontend::FAnalyzerAddress> *pTVar6;
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
  SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::
  ResetSenderAndCleanupChannel((TSendOperator<Metasound::Frontend::FAnalyzerAddress> *)param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::CreateNewSender
                    ((TSendOperator<Metasound::Frontend::FAnalyzerAddress> *)param_1);
  pTVar6 = (TSender<Metasound::Frontend::FAnalyzerAddress> *)(param_1 + 0x10);
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

// ResetFunction @ 14adcf8d0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::FConverterOperator>
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
  TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
  FConverterOperator::Execute(param_1);
  return;
}

// ResetFunction @ 14adcf930

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,int>::FConverterOperator>
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

// ResetFunction @ 14adcf990

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::FConverterOperator>
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
  TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::FConverterOperator::Execute
            ((FConverterOperator *)param_1);
  return;
}

// ResetFunction @ 14afb9570

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayConcatOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
ResetFunction(IOperator *param_1,FResetParams *param_2)

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
  IVar2 = param_1[0xe];
  iVar1 = *(int *)((longlong)IVar2 + 0xc);
  *(undefined4 *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)IVar2,0,(int *)((longlong)IVar2 + 0xc));
  }
  return;
}

// ResetFunction @ 14afb95e0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayConcatOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

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
  IVar2 = param_1[0xe];
  iVar1 = *(int *)((longlong)IVar2 + 0xc);
  *(undefined4 *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)IVar2,0,(int *)((longlong)IVar2 + 0xc));
  }
  return;
}

// ResetFunction @ 14afb9650

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayConcatOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

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
  IVar2 = param_1[0xe];
  iVar1 = *(int *)((longlong)IVar2 + 0xc);
  *(undefined4 *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)IVar2,0,(int *)((longlong)IVar2 + 0xc));
  }
  return;
}

// ResetFunction @ 14afb96d0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayConcatOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

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
  IVar2 = param_1[0xe];
  iVar1 = *(int *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data;
  if (-1 < *(int *)((longlong)IVar2 + 0xc)) {
    DestructItems<FString,int>((FString *)*(FScriptContainerElement **)IVar2,iVar1);
    *(undefined4 *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data = 0;
    return;
  }
  DestructItems<FString,int>((FString *)*(FScriptContainerElement **)IVar2,iVar1);
  *(undefined4 *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data = 0;
  if (*(int *)((longlong)IVar2 + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)IVar2,0,(int *)((longlong)IVar2 + 0xc));
  }
  return;
}

// ResetFunction @ 14afb9770

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayConcatOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

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
  IVar2 = param_1[0xe];
  iVar1 = *(int *)((longlong)IVar2 + 0xc);
  *(undefined4 *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)IVar2,0,(int *)((longlong)IVar2 + 0xc));
  }
  return;
}

// ResetFunction @ 14afb97e0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayConcatOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
ResetFunction(IOperator *param_1,FResetParams *param_2)

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
  IVar2 = param_1[0xe];
  iVar1 = *(int *)((longlong)IVar2 + 0xc);
  *(undefined4 *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)IVar2,0,(int *)((longlong)IVar2 + 0xc));
  }
  return;
}

// ResetFunction @ 14afb9850

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
ResetFunction(IOperator *param_1,FResetParams *param_2)

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
  iVar1 = *(int *)param_1[10];
  if (-1 < iVar1) {
    IVar2 = param_1[6];
    if (iVar1 < *(int *)((longlong)IVar2 + 8)) {
      if (iVar1 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(undefined4 *)param_1[0xe] = *(undefined4 *)(*(longlong *)IVar2 + (longlong)iVar1 * 4);
      return;
    }
  }
  *(undefined4 *)param_1[0xe] = 0;
  return;
}

// ResetFunction @ 14afb9920

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
ResetFunction(IOperator *param_1,FResetParams *param_2)

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
  iVar1 = *(int *)param_1[10];
  if (-1 < iVar1) {
    IVar2 = param_1[6];
    if (iVar1 < *(int *)((longlong)IVar2 + 8)) {
      if (iVar1 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(undefined4 *)param_1[0xe] = *(undefined4 *)(*(longlong *)IVar2 + (longlong)iVar1 * 4);
      return;
    }
  }
  *(undefined4 *)param_1[0xe] = 0;
  return;
}

// ResetFunction @ 14afb99f0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  IOperator IVar2;
  IOperator IVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar1 = *(int *)param_1[10];
  if (-1 < iVar1) {
    IVar2 = param_1[6];
    if (iVar1 < *(int *)((longlong)IVar2 + 8)) {
      if (iVar1 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      IVar3 = param_1[0xe];
      lVar6 = (longlong)iVar1 * 0x20 + *(longlong *)IVar2;
      *(undefined8 *)((longlong)IVar3 + 8) = *(undefined8 *)(lVar6 + 8);
      *(undefined8 *)((longlong)IVar3 + 0x10) = *(undefined8 *)(lVar6 + 0x10);
      *(undefined8 *)((longlong)IVar3 + 0x18) = *(undefined8 *)(lVar6 + 0x18);
      return;
    }
  }
  IVar2 = param_1[0xe];
  *(undefined8 *)((longlong)IVar2 + 8) = 0;
  *(undefined8 *)((longlong)IVar2 + 0x10) = 0;
  *(undefined8 *)((longlong)IVar2 + 0x18) = 0xffffffffffffffff;
  return;
}

// ResetFunction @ 14afb9af0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 local_18 [16];
  
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
  iVar1 = *(int *)param_1[10];
  if (-1 < iVar1) {
    IVar2 = param_1[6];
    if (iVar1 < *(int *)((longlong)IVar2 + 8)) {
      if (iVar1 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      ::FString::operator=
                ((FString *)param_1[0xe],(FString *)((longlong)iVar1 * 0x10 + *(longlong *)IVar2));
      return;
    }
  }
  IVar2 = param_1[0xe];
  if (IVar2 != (IOperator)local_18) {
    if (*(void **)IVar2 != (void *)0x0) {
      FMemory::Free(*(void **)IVar2);
    }
    *(undefined8 *)IVar2 = 0;
    *(undefined8 *)((longlong)IVar2 + 8) = 0;
  }
  return;
}

// ResetFunction @ 14afb9be0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

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
  iVar1 = *(int *)param_1[10];
  if (-1 < iVar1) {
    IVar2 = param_1[6];
    if (iVar1 < *(int *)((longlong)IVar2 + 8)) {
      if (iVar1 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(undefined8 *)param_1[0xe] = *(undefined8 *)(*(longlong *)IVar2 + (longlong)iVar1 * 8);
      return;
    }
  }
  *(undefined8 *)param_1[0xe] = 0;
  return;
}

// ResetFunction @ 14afb9cb0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
ResetFunction(IOperator *param_1,FResetParams *param_2)

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
  iVar1 = *(int *)param_1[10];
  if (-1 < iVar1) {
    IVar2 = param_1[6];
    if (iVar1 < *(int *)((longlong)IVar2 + 8)) {
      if (iVar1 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(undefined1 *)param_1[0xe] = *(undefined1 *)((longlong)iVar1 + *(longlong *)IVar2);
      return;
    }
  }
  *(undefined1 *)param_1[0xe] = 0;
  return;
}

// ResetFunction @ 14afb9d80

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayLastIndexOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
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
  *(int *)param_1[6] = *(int *)((longlong)param_1[2] + 8) + -1;
  return;
}

// ResetFunction @ 14afb9dd0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayLastIndexOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
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
  *(int *)param_1[6] = *(int *)((longlong)param_1[2] + 8) + -1;
  return;
}

// ResetFunction @ 14afb9e20

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayLastIndexOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
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
  *(int *)param_1[6] = *(int *)((longlong)param_1[2] + 8) + -1;
  return;
}

// ResetFunction @ 14afb9e70

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayLastIndexOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
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
  *(int *)param_1[6] = *(int *)((longlong)param_1[2] + 8) + -1;
  return;
}

// ResetFunction @ 14afb9ec0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayLastIndexOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
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
  *(int *)param_1[6] = *(int *)((longlong)param_1[2] + 8) + -1;
  return;
}

// ResetFunction @ 14afb9f10

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayLastIndexOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
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
  *(int *)param_1[6] = *(int *)((longlong)param_1[2] + 8) + -1;
  return;
}

// ResetFunction @ 14afb9f60

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
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
  *(undefined4 *)param_1[6] = *(undefined4 *)((longlong)param_1[2] + 8);
  return;
}

// ResetFunction @ 14afb9fb0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
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
  *(undefined4 *)param_1[6] = *(undefined4 *)((longlong)param_1[2] + 8);
  return;
}

// ResetFunction @ 14afba000

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
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
  *(undefined4 *)param_1[6] = *(undefined4 *)((longlong)param_1[2] + 8);
  return;
}

// ResetFunction @ 14afba050

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
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
  *(undefined4 *)param_1[6] = *(undefined4 *)((longlong)param_1[2] + 8);
  return;
}

// ResetFunction @ 14afba0a0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
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
  *(undefined4 *)param_1[6] = *(undefined4 *)((longlong)param_1[2] + 8);
  return;
}

// ResetFunction @ 14afba0f0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
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
  *(undefined4 *)param_1[6] = *(undefined4 *)((longlong)param_1[2] + 8);
  return;
}

// ResetFunction @ 14afba140

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayRandomGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
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
  TArrayRandomGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::Reset
            ((TArrayRandomGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)param_1,param_2);
  return;
}

// ResetFunction @ 14afba1a0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayRandomGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
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
  TArrayRandomGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::Reset
            ((TArrayRandomGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)param_1,param_2)
  ;
  return;
}

// ResetFunction @ 14afba200

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayRandomGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
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
  TArrayRandomGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::Reset
            ((TArrayRandomGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
              *)param_1,param_2);
  return;
}

// ResetFunction @ 14afba260

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayRandomGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
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
  TArrayRandomGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::Reset
            ((TArrayRandomGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)param_1,
             param_2);
  return;
}

// ResetFunction @ 14afba2c0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayRandomGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
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
  TArrayRandomGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::Reset
            ((TArrayRandomGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
             param_1,param_2);
  return;
}

// ResetFunction @ 14afba320

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayRandomGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
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
  TArrayRandomGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::Reset
            ((TArrayRandomGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)param_1,param_2);
  return;
}

// ResetFunction @ 14afba380

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
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
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int,TSizedDefaultAllocator<32>_> *)param_1[0xc],
             (TArray<int,TSizedDefaultAllocator<32>_> *)param_1[8]);
  return;
}

// ResetFunction @ 14afba3d0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
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
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<float,TSizedDefaultAllocator<32>_> *)param_1[0xc],
             (TArray<float,TSizedDefaultAllocator<32>_> *)param_1[8]);
  return;
}

// ResetFunction @ 14afba420

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
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
  TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)param_1[0xc],
             (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)param_1[8]);
  return;
}

// ResetFunction @ 14afba470

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
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
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_1[0xc],
             (TArray<FString,TSizedDefaultAllocator<32>_> *)param_1[8]);
  return;
}

// ResetFunction @ 14afba4c0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
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
  TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)param_1[0xc],
             (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)param_1[8]);
  return;
}

// ResetFunction @ 14afba510

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
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
  TArray<bool,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<bool,TSizedDefaultAllocator<32>_> *)param_1[0xc],
             (TArray<bool,TSizedDefaultAllocator<32>_> *)param_1[8]);
  return;
}

// ResetFunction @ 14afba560

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
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
  TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::Reset
            ((TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)param_1,param_2);
  return;
}

// ResetFunction @ 14afba5c0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
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
  TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::Reset
            ((TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)param_1,param_2);
  return;
}

// ResetFunction @ 14afba620

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
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
  TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::Reset
            ((TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
             param_1,param_2);
  return;
}

// ResetFunction @ 14afba680

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
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
  TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::Reset
            ((TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)param_1,param_2)
  ;
  return;
}

// ResetFunction @ 14afba6e0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
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
  TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::Reset
            ((TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)param_1
             ,param_2);
  return;
}

// ResetFunction @ 14afba740

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
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
  TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::Reset
            ((TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)param_1,param_2);
  return;
}

// ResetFunction @ 14afba7a0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArraySubsetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
ResetFunction(IOperator *param_1,FResetParams *param_2)

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
  IVar2 = param_1[0x12];
  iVar1 = *(int *)((longlong)IVar2 + 0xc);
  *(undefined4 *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)IVar2,0,(int *)((longlong)IVar2 + 0xc));
  }
  return;
}

// ResetFunction @ 14afba820

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArraySubsetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

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
  IVar2 = param_1[0x12];
  iVar1 = *(int *)((longlong)IVar2 + 0xc);
  *(undefined4 *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)IVar2,0,(int *)((longlong)IVar2 + 0xc));
  }
  return;
}

// ResetFunction @ 14afba8a0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArraySubsetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

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
  IVar2 = param_1[0x12];
  iVar1 = *(int *)((longlong)IVar2 + 0xc);
  *(undefined4 *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)IVar2,0,(int *)((longlong)IVar2 + 0xc));
  }
  return;
}

// ResetFunction @ 14afba920

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArraySubsetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

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
  IVar2 = param_1[0x12];
  iVar1 = *(int *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data;
  if (-1 < *(int *)((longlong)IVar2 + 0xc)) {
    DestructItems<FString,int>((FString *)*(FScriptContainerElement **)IVar2,iVar1);
    *(undefined4 *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data = 0;
    return;
  }
  DestructItems<FString,int>((FString *)*(FScriptContainerElement **)IVar2,iVar1);
  *(undefined4 *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data = 0;
  if (*(int *)((longlong)IVar2 + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)IVar2,0,(int *)((longlong)IVar2 + 0xc));
  }
  return;
}

// ResetFunction @ 14afba9d0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArraySubsetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

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
  IVar2 = param_1[0x12];
  iVar1 = *(int *)((longlong)IVar2 + 0xc);
  *(undefined4 *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)IVar2,0,(int *)((longlong)IVar2 + 0xc));
  }
  return;
}

// ResetFunction @ 14afbaa50

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArraySubsetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
ResetFunction(IOperator *param_1,FResetParams *param_2)

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
  IVar2 = param_1[0x12];
  iVar1 = *(int *)((longlong)IVar2 + 0xc);
  *(undefined4 *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)IVar2,0,(int *)((longlong)IVar2 + 0xc));
  }
  return;
}

// ResetFunction @ 14afbaad0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<int>_>::ResetFunction
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
  *(undefined4 *)param_1[7] = *(undefined4 *)param_1[3];
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14afbab20

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<float>_>::ResetFunction
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
  *(undefined4 *)param_1[7] = *(undefined4 *)param_1[3];
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14afbab70

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
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
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int,TSizedDefaultAllocator<32>_> *)param_1[7],
             (TArray<int,TSizedDefaultAllocator<32>_> *)param_1[3]);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14afbabd0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
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
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<float,TSizedDefaultAllocator<32>_> *)param_1[7],
             (TArray<float,TSizedDefaultAllocator<32>_> *)param_1[3]);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14afbac30

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
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
  TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)param_1[7],
             (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)param_1[3]);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14afbac90

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
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
  TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)param_1[7],
             (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)param_1[3]);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14afbacf0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
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
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_1[7],
             (TArray<FString,TSizedDefaultAllocator<32>_> *)param_1[3]);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14afbad50

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
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
  TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)param_1[7],
             (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)param_1[3]);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14afbadb0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
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
  TArray<bool,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<bool,TSizedDefaultAllocator<32>_> *)param_1[7],
             (TArray<bool,TSizedDefaultAllocator<32>_> *)param_1[3]);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14afbae10

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBuffer>_>::
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
  FAudioBuffer::operator=((FAudioBuffer *)param_1[7],(FAudioBuffer *)param_1[3]);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14afbae70

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<FMetasoundParameterStorageWrapper>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  if (param_1 == (IOperator *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  IVar1 = param_1[7];
  lVar2 = *(longlong *)((longlong)param_1[3] + 8);
  uVar3 = *(undefined8 *)param_1[3];
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  pTVar5 = *(TReferenceControllerBase<1> **)((longlong)IVar1 + 8);
  *(undefined8 *)IVar1 = uVar3;
  *(longlong *)((longlong)IVar1 + 8) = lVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14afbaef0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FSendAddress>_>::
ResetFunction(IOperator *param_1,FResetParams *param_2)

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
  IVar1 = param_1[3];
  IVar2 = param_1[7];
  *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)((longlong)IVar1 + 8);
  *(undefined8 *)((longlong)IVar2 + 0x10) = *(undefined8 *)((longlong)IVar1 + 0x10);
  *(undefined8 *)((longlong)IVar2 + 0x18) = *(undefined8 *)((longlong)IVar1 + 0x18);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14afbaf60

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<FString>_>::ResetFunction
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
  ::FString::operator=((FString *)param_1[7],(FString *)param_1[3]);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14afbafc0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FTime>_>::
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
  *(undefined8 *)param_1[7] = *(undefined8 *)param_1[3];
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14afbb020

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FTrigger>_>::
ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  IOperator this;
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
  IVar1 = param_1[3];
  this = param_1[7];
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int,TSizedDefaultAllocator<32>_> *)this,
             (TArray<int,TSizedDefaultAllocator<32>_> *)IVar1);
  *(undefined1 *)
   &(((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)this + 0x10))->AllocatorInstance).Data =
       *(undefined1 *)
        &(((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)IVar1 + 0x10))->AllocatorInstance).
         Data;
  *(undefined1 *)((longlong)this + 0x11) = *(undefined1 *)((longlong)IVar1 + 0x11);
  *(undefined1 *)((longlong)this + 0x12) = *(undefined1 *)((longlong)IVar1 + 0x12);
  *(undefined4 *)((longlong)this + 0x14) = *(undefined4 *)((longlong)IVar1 + 0x14);
  *(int *)((longlong)this + 0x18) = *(int *)((longlong)IVar1 + 0x18);
  *(int *)((longlong)this + 0x1c) = *(int *)((longlong)IVar1 + 0x1c);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14afbb0c0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<bool>_>::ResetFunction
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
  *(undefined1 *)param_1[7] = *(undefined1 *)param_1[3];
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14afbb120

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<int>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<int>,TDefaultDelete<Metasound::TSender<int>_>_> TVar5;
  TSender<int> *pTVar6;
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
  SendNodePrivate::TSendOperator<int>::ResetSenderAndCleanupChannel((TSendOperator<int> *)param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<int>::CreateNewSender((TSendOperator<int> *)param_1);
  pTVar6 = (TSender<int> *)(param_1 + 0x10);
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

// ResetFunction @ 14afbb200

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<float>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<float>,TDefaultDelete<Metasound::TSender<float>_>_> TVar5;
  TSender<float> *pTVar6;
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
  SendNodePrivate::TSendOperator<float>::ResetSenderAndCleanupChannel
            ((TSendOperator<float> *)param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<float>::CreateNewSender((TSendOperator<float> *)param_1);
  pTVar6 = (TSender<float> *)(param_1 + 0x10);
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

// ResetFunction @ 14afbb2e0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
  TVar5;
  TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar6;
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
  SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
  ResetSenderAndCleanupChannel((TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::CreateNewSender
                    ((TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)param_1);
  pTVar6 = (TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *)(param_1 + 0x10);
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

// ResetFunction @ 14afbb3c0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
  TVar5;
  TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar6;
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
  SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
  ResetSenderAndCleanupChannel((TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)param_1)
  ;
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
          CreateNewSender((TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)param_1);
  pTVar6 = (TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *)(param_1 + 0x10);
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

// ResetFunction @ 14afbb4a0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>_>
  TVar5;
  TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *pTVar6;
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
  SendNodePrivate::
  TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
  ResetSenderAndCleanupChannel
            ((TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
              *)param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::
          TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
          CreateNewSender((TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                           *)param_1);
  pTVar6 = (TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *)
           (param_1 + 0x10);
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

// ResetFunction @ 14afbb580

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
  TVar5;
  TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar6;
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
  SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
  ResetSenderAndCleanupChannel
            ((TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)param_1)
  ;
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::
          TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
          CreateNewSender((TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                           *)param_1);
  pTVar6 = (TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)(param_1 + 0x10)
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

// ResetFunction @ 14afbb660

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
  TVar5;
  TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar6;
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
  SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
  ResetSenderAndCleanupChannel
            ((TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
          CreateNewSender((TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)param_1);
  pTVar6 = (TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(param_1 + 0x10);
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

// ResetFunction @ 14afbb740

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
  TVar5;
  TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar6;
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
  SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
  ResetSenderAndCleanupChannel
            ((TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
          CreateNewSender((TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
                          param_1);
  pTVar6 = (TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)(param_1 + 0x10);
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

// ResetFunction @ 14afbb820

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
  TVar5;
  TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar6;
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
  SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
  ResetSenderAndCleanupChannel((TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::CreateNewSender
                    ((TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)param_1);
  pTVar6 = (TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(param_1 + 0x10);
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

// ResetFunction @ 14afbb900

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>_>::
ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::FAudioBuffer>,TDefaultDelete<Metasound::TSender<Metasound::FAudioBuffer>_>_>
  TVar5;
  TSender<Metasound::FAudioBuffer> *pTVar6;
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
  SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::ResetSenderAndCleanupChannel
            ((TSendOperator<Metasound::FAudioBuffer> *)param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::CreateNewSender
                    ((TSendOperator<Metasound::FAudioBuffer> *)param_1);
  pTVar6 = (TSender<Metasound::FAudioBuffer> *)(param_1 + 0x10);
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

// ResetFunction @ 14afbb9e0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<FMetasoundParameterStorageWrapper>,TDefaultDelete<Metasound::TSender<FMetasoundParameterStorageWrapper>_>_>
  TVar5;
  TSender<FMetasoundParameterStorageWrapper> *pTVar6;
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
  SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::ResetSenderAndCleanupChannel
            ((TSendOperator<FMetasoundParameterStorageWrapper> *)param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::CreateNewSender
                    ((TSendOperator<FMetasoundParameterStorageWrapper> *)param_1);
  pTVar6 = (TSender<FMetasoundParameterStorageWrapper> *)(param_1 + 0x10);
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

// ResetFunction @ 14afbbac0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>_>::
ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::FSendAddress>,TDefaultDelete<Metasound::TSender<Metasound::FSendAddress>_>_>
  TVar5;
  TSender<Metasound::FSendAddress> *pTVar6;
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
  SendNodePrivate::TSendOperator<Metasound::FSendAddress>::ResetSenderAndCleanupChannel
            ((TSendOperator<Metasound::FSendAddress> *)param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<Metasound::FSendAddress>::CreateNewSender
                    ((TSendOperator<Metasound::FSendAddress> *)param_1);
  pTVar6 = (TSender<Metasound::FSendAddress> *)(param_1 + 0x10);
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

// ResetFunction @ 14afbbba0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<FString>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<FString>,TDefaultDelete<Metasound::TSender<FString>_>_> TVar5;
  TSender<FString> *pTVar6;
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
  SendNodePrivate::TSendOperator<FString>::ResetSenderAndCleanupChannel
            ((TSendOperator<FString> *)param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<FString>::CreateNewSender
                    ((TSendOperator<FString> *)param_1);
  pTVar6 = (TSender<FString> *)(param_1 + 0x10);
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

// ResetFunction @ 14afbbc80

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::FTime>,TDefaultDelete<Metasound::TSender<Metasound::FTime>_>_>
  TVar5;
  TSender<Metasound::FTime> *pTVar6;
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
  SendNodePrivate::TSendOperator<Metasound::FTime>::ResetSenderAndCleanupChannel
            ((TSendOperator<Metasound::FTime> *)param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<Metasound::FTime>::CreateNewSender
                    ((TSendOperator<Metasound::FTime> *)param_1);
  pTVar6 = (TSender<Metasound::FTime> *)(param_1 + 0x10);
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

// ResetFunction @ 14afbbd60

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>_>::
ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::FTrigger>,TDefaultDelete<Metasound::TSender<Metasound::FTrigger>_>_>
  TVar5;
  TSender<Metasound::FTrigger> *pTVar6;
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
  SendNodePrivate::TSendOperator<Metasound::FTrigger>::ResetSenderAndCleanupChannel
            ((TSendOperator<Metasound::FTrigger> *)param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<Metasound::FTrigger>::CreateNewSender
                    ((TSendOperator<Metasound::FTrigger> *)param_1);
  pTVar6 = (TSender<Metasound::FTrigger> *)(param_1 + 0x10);
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

// ResetFunction @ 14afbbe40

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<bool>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<bool>,TDefaultDelete<Metasound::TSender<bool>_>_> TVar5;
  TSender<bool> *pTVar6;
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
  SendNodePrivate::TSendOperator<bool>::ResetSenderAndCleanupChannel((TSendOperator<bool> *)param_1)
  ;
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<bool>::CreateNewSender((TSendOperator<bool> *)param_1);
  pTVar6 = (TSender<bool> *)(param_1 + 0x10);
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

// ResetFunction @ 14afbbf20

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<int,int>::FConverterOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

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

// ResetFunction @ 14afbbf80

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<int,float>::FConverterOperator>::ResetFunction
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
  IVar1 = param_1[2];
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(float *)param_1[6] = (float)*(int *)IVar1;
  return;
}

// ResetFunction @ 14afbbfe0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<int,bool>::FConverterOperator>::ResetFunction
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
  IVar1 = param_1[2];
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(bool *)param_1[6] = *(int *)IVar1 != 0;
  return;
}

// ResetFunction @ 14afbc040

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<float,int>::FConverterOperator>::ResetFunction
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
  IVar1 = param_1[2];
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(int *)param_1[6] = (int)*(float *)IVar1;
  return;
}

// ResetFunction @ 14afbc0a0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<float,float>::FConverterOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

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

// ResetFunction @ 14afbc100

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<float,bool>::FConverterOperator>::ResetFunction
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
  IVar1 = param_1[2];
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  if (*(float *)IVar1 != 0.0) {
    *(undefined1 *)param_1[6] = 1;
    return;
  }
  *(undefined1 *)param_1[6] = 0;
  return;
}

// ResetFunction @ 14afbc170

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<FString,FString>::FConverterOperator>::
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
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  TAutoConverterNode<FString,FString>::FConverterOperator::Execute((FConverterOperator *)param_1);
  return;
}

// ResetFunction @ 14afbc1d0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::FConverterOperator>
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
  TAutoConverterNode<FString,Metasound::FSendAddress>::FConverterOperator::Execute
            ((FConverterOperator *)param_1);
  return;
}

// ResetFunction @ 14afbc230

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::FTrigger,int>::FConverterOperator>::
ResetFunction(IOperator *param_1,FResetParams *param_2)

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
  *(uint *)param_1[6] = (uint)(0 < *(int *)((longlong)IVar1 + 0x1c));
  return;
}

// ResetFunction @ 14afbc290

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::FTrigger,float>::FConverterOperator>
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
  *(float *)param_1[6] = (float)(0 < *(int *)((longlong)IVar1 + 0x1c));
  return;
}

// ResetFunction @ 14afbc300

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::FConverterOperator>::
ResetFunction(IOperator *param_1,FResetParams *param_2)

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
  *(bool *)param_1[6] = 0 < *(int *)((longlong)IVar1 + 0x1c);
  return;
}

// ResetFunction @ 14afbc360

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<bool,int>::FConverterOperator>::ResetFunction
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
  IVar1 = param_1[2];
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(uint *)param_1[6] = (uint)*(byte *)IVar1;
  return;
}

// ResetFunction @ 14afbc3c0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<bool,float>::FConverterOperator>::ResetFunction
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
  IVar1 = param_1[2];
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(float *)param_1[6] = (float)*(byte *)IVar1;
  return;
}

// ResetFunction @ 14afbc430

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<bool,bool>::FConverterOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

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
  *(undefined1 *)IVar2 = *(undefined1 *)IVar1;
  return;
}

