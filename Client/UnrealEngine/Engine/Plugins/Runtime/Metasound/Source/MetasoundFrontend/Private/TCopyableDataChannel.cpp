// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 171

// GetPayloadID @ 14ad6d8f0

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::Frontend::FAnalyzerAddress>::GetPayloadID
          (TCopyableDataChannel<Metasound::Frontend::FAnalyzerAddress> *this)

{
  return this->PayloadID;
}

// CreateNewPayloadID @ 14ad6d930

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::Frontend::FAnalyzerAddress>::CreateNewPayloadID
          (TCopyableDataChannel<Metasound::Frontend::FAnalyzerAddress> *this)

{
  atomic<__int64> *paVar1;
  atomic<__int64> aVar2;
  
  LOCK();
  paVar1 = &this->PayloadIDCounter;
  aVar2 = *paVar1;
  *paVar1 = (atomic<__int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  return (long64)aVar2;
}

// PushOpaque @ 14ad6d950

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::Frontend::FAnalyzerAddress>::PushOpaque
          (TCopyableDataChannel<Metasound::Frontend::FAnalyzerAddress> *this,ISender *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  IDataChannel *pIVar1;
  ulong64 uVar2;
  FAnalyzerAddress *pFVar3;
  code *pcVar4;
  longlong lVar5;
  FThreadSafeCounter FVar6;
  FThreadSafeCounter FVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  FThreadSafeCounter FVar12;
  FThreadSafeCounter FVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  bool bVar21;
  undefined1 uVar22;
  FName *pFVar23;
  long64 lVar24;
  FAnalyzerAddress *pFVar25;
  TUniquePtr<Metasound::Frontend::FAnalyzerAddress,TDefaultDelete<Metasound::Frontend::FAnalyzerAddress>_>
  *pTVar26;
  FName local_res8;
  longlong local_58;
  ISender *local_50;
  FName *pFStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  pFVar23 = GetMetasoundDataTypeName<Metasound::Frontend::FAnalyzerAddress>();
  local_res8 = *pFVar23;
  if ((FName)param_1->_padding_ != local_res8) {
    pFStack_48 = &local_res8;
    local_50 = param_1;
    bVar21 = `Metasound::IDataTransmissionBase::
             CheckType<Metasound::TSender<Metasound::Frontend::FAnalyzerAddress>_>'::__l2::
             <lambda_1>::operator()(&local_50);
    if (!bVar21) {
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("CheckType<TSenderImplementation>()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                          ,0xd5,L"");
      if (bVar21) {
        pcVar4 = (code *)swi(3);
        uVar22 = (*pcVar4)();
        return (bool)uVar22;
      }
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lVar24 = (**(code **)(param_1->_padding_ + 8))(param_1);
    this->PayloadID = lVar24;
    pTVar26 = &this->AtomicData;
    pIVar1 = param_1[2].DataChannel.Object;
    if (pTVar26->Ptr == (FAnalyzerAddress *)0x0) {
      if (pIVar1 == (IDataChannel *)0x0) {
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Payload.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                            ,0x1e7,L"");
        if (bVar21) {
          pcVar4 = (code *)swi(3);
          uVar22 = (*pcVar4)();
          return (bool)uVar22;
        }
      }
      pIVar1 = param_1[2].DataChannel.Object;
      local_50 = (ISender *)pIVar1->_padding_;
      pFStack_48 = (FName *)pIVar1->_padding_;
      uVar2 = pIVar1->_padding_;
      FVar6.Counter = (pIVar1->NumAliveReceivers).Counter;
      FVar7.Counter = (pIVar1->NumAliveSenders).Counter;
      uVar8 = *(undefined4 *)&pIVar1[1]._padding_;
      uVar9 = *(undefined4 *)((longlong)&pIVar1[1]._padding_ + 4);
      uVar10 = *(undefined4 *)&pIVar1[1]._padding_;
      uVar11 = *(undefined4 *)((longlong)&pIVar1[1]._padding_ + 4);
      FVar12.Counter = pIVar1[1].NumAliveReceivers.Counter;
      FVar13.Counter = pIVar1[1].NumAliveSenders.Counter;
      lVar5 = pIVar1[2]._padding_;
      local_40 = pIVar1[1]._padding_;
      uStack_38 = pIVar1[1]._padding_;
      pFVar25 = ::operator_new(0x58);
      if (pFVar25 == (FAnalyzerAddress *)0x0) {
        pFVar25 = (FAnalyzerAddress *)0x0;
      }
      else {
        pFVar25->InstanceID = uVar2;
        pFVar25->_padding_ = (longlong)&___7FAnalyzerAddress_Frontend_Metasound__6B_;
        *(ISender **)&pFVar25->NodeID = local_50;
        *(FName **)&(pFVar25->NodeID).C = pFStack_48;
        (pFVar25->OutputName).ComparisonIndex = (FNameEntryId)FVar6.Counter;
        (pFVar25->OutputName).Number = FVar7.Counter;
        (pFVar25->DataType).ComparisonIndex = (FNameEntryId)uVar8;
        (pFVar25->DataType).Number = uVar9;
        (pFVar25->AnalyzerName).ComparisonIndex = (FNameEntryId)uVar10;
        (pFVar25->AnalyzerName).Number = uVar11;
        (pFVar25->AnalyzerInstanceID).A = (uint)local_40;
        (pFVar25->AnalyzerInstanceID).B = local_40._4_4_;
        (pFVar25->AnalyzerInstanceID).C = (uint)uStack_38;
        (pFVar25->AnalyzerInstanceID).D = uStack_38._4_4_;
        (pFVar25->AnalyzerMemberName).ComparisonIndex = (FNameEntryId)FVar12.Counter;
        (pFVar25->AnalyzerMemberName).Number = FVar13.Counter;
        pFVar25->UseDataTransmissionCenter = SUB81(lVar5,0);
      }
      if (pTVar26 ==
          (TUniquePtr<Metasound::Frontend::FAnalyzerAddress,TDefaultDelete<Metasound::Frontend::FAnalyzerAddress>_>
           *)&local_58) {
        if (pFVar25 != (FAnalyzerAddress *)0x0) {
          (**(code **)pFVar25->_padding_)(pFVar25,1);
        }
      }
      else {
        pFVar3 = pTVar26->Ptr;
        pTVar26->Ptr = pFVar25;
        if (pFVar3 != (FAnalyzerAddress *)0x0) {
          (**(code **)pFVar3->_padding_)(pFVar3,1);
        }
      }
    }
    else {
      if (pIVar1 == (IDataChannel *)0x0) {
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Payload.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                            ,0x1e7,L"");
        if (bVar21) {
          pcVar4 = (code *)swi(3);
          uVar22 = (*pcVar4)();
          return (bool)uVar22;
        }
      }
      pIVar1 = param_1[2].DataChannel.Object;
      pFVar25 = pTVar26->Ptr;
      uVar8 = *(undefined4 *)((longlong)&pIVar1->_padding_ + 4);
      uVar9 = *(undefined4 *)&pIVar1->_padding_;
      uVar10 = *(undefined4 *)((longlong)&pIVar1->_padding_ + 4);
      FVar6.Counter = (pIVar1->NumAliveReceivers).Counter;
      FVar7.Counter = (pIVar1->NumAliveSenders).Counter;
      uVar11 = *(undefined4 *)&pIVar1[1]._padding_;
      uVar14 = *(undefined4 *)((longlong)&pIVar1[1]._padding_ + 4);
      uVar15 = *(undefined4 *)&pIVar1[1]._padding_;
      uVar16 = *(undefined4 *)((longlong)&pIVar1[1]._padding_ + 4);
      uVar17 = *(undefined4 *)&pIVar1[1]._padding_;
      uVar18 = *(undefined4 *)((longlong)&pIVar1[1]._padding_ + 4);
      uVar19 = *(undefined4 *)&pIVar1[1]._padding_;
      uVar20 = *(undefined4 *)((longlong)&pIVar1[1]._padding_ + 4);
      FVar12.Counter = pIVar1[1].NumAliveReceivers.Counter;
      FVar13.Counter = pIVar1[1].NumAliveSenders.Counter;
      lVar5 = pIVar1[2]._padding_;
      uVar2 = pIVar1->_padding_;
      (pFVar25->NodeID).A = *(undefined4 *)&pIVar1->_padding_;
      (pFVar25->NodeID).B = uVar8;
      (pFVar25->NodeID).C = uVar9;
      (pFVar25->NodeID).D = uVar10;
      pFVar25->InstanceID = uVar2;
      (pFVar25->AnalyzerInstanceID).A = uVar11;
      (pFVar25->AnalyzerInstanceID).B = uVar14;
      (pFVar25->AnalyzerInstanceID).C = uVar15;
      (pFVar25->AnalyzerInstanceID).D = uVar16;
      (pFVar25->OutputName).ComparisonIndex = (FNameEntryId)FVar6.Counter;
      (pFVar25->OutputName).Number = FVar7.Counter;
      (pFVar25->DataType).ComparisonIndex = (FNameEntryId)uVar17;
      (pFVar25->DataType).Number = uVar18;
      (pFVar25->AnalyzerName).ComparisonIndex = (FNameEntryId)uVar19;
      (pFVar25->AnalyzerName).Number = uVar20;
      (pFVar25->AnalyzerMemberName).ComparisonIndex = (FNameEntryId)FVar12.Counter;
      (pFVar25->AnalyzerMemberName).Number = FVar13.Counter;
      pFVar25->UseDataTransmissionCenter = SUB81(lVar5,0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// PopOpaque @ 14ad6dbb0

void __thiscall
Metasound::TCopyableDataChannel<Metasound::Frontend::FAnalyzerAddress>::PopOpaque
          (TCopyableDataChannel<Metasound::Frontend::FAnalyzerAddress> *this,IReceiver *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FAnalyzerAddress *pFVar1;
  longlong lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  bool bVar9;
  FName *pFVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  FName local_res8;
  longlong local_28;
  IReceiver *local_20;
  FName *local_18;
  
  pFVar10 = GetMetasoundDataTypeName<Metasound::Frontend::FAnalyzerAddress>();
  local_res8 = *pFVar10;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar9 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<Metasound::Frontend::FAnalyzerAddress>_>'::__l2::
            <lambda_1>::operator()(&local_20);
    if (!bVar9) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("CheckType<TSenderImplementation>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                         ,0xd5,L"");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = (this->AtomicData).Ptr;
    if ((pFVar1 != (FAnalyzerAddress *)0x0) && (this->PayloadID != param_1[1]._padding_)) {
      lVar2 = param_1[1]._padding_;
      param_1[1]._padding_ = this->PayloadID;
      plVar12 = &param_1[1]._padding_;
      if (lVar2 == 0) {
        puVar11 = ::operator_new(0x58);
        if (puVar11 == (undefined8 *)0x0) {
          puVar11 = (undefined8 *)0x0;
        }
        else {
          *puVar11 = &___7FAnalyzerAddress_Frontend_Metasound__6B_;
          puVar11[1] = pFVar1->InstanceID;
          uVar8 = *(undefined8 *)&(pFVar1->NodeID).C;
          puVar11[2] = *(undefined8 *)&pFVar1->NodeID;
          puVar11[3] = uVar8;
          *(FName *)(puVar11 + 4) = pFVar1->OutputName;
          *(FName *)(puVar11 + 5) = pFVar1->DataType;
          *(FName *)(puVar11 + 6) = pFVar1->AnalyzerName;
          uVar5 = (pFVar1->AnalyzerInstanceID).B;
          uVar6 = (pFVar1->AnalyzerInstanceID).C;
          uVar7 = (pFVar1->AnalyzerInstanceID).D;
          *(uint *)(puVar11 + 7) = (pFVar1->AnalyzerInstanceID).A;
          *(uint *)((longlong)puVar11 + 0x3c) = uVar5;
          *(uint *)(puVar11 + 8) = uVar6;
          *(uint *)((longlong)puVar11 + 0x44) = uVar7;
          *(FName *)(puVar11 + 9) = pFVar1->AnalyzerMemberName;
          *(bool *)(puVar11 + 10) = pFVar1->UseDataTransmissionCenter;
        }
        if (plVar12 == &local_28) {
          if (puVar11 != (undefined8 *)0x0) {
            (**(code **)*puVar11)(puVar11,1);
          }
        }
        else {
          puVar3 = (undefined8 *)*plVar12;
          *plVar12 = (longlong)puVar11;
          if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,1);
          }
        }
      }
      else {
        *(ulong64 *)(lVar2 + 8) = pFVar1->InstanceID;
        uVar8 = *(undefined8 *)&(pFVar1->NodeID).C;
        *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)&pFVar1->NodeID;
        *(undefined8 *)(lVar2 + 0x18) = uVar8;
        *(FName *)(lVar2 + 0x20) = pFVar1->OutputName;
        *(FName *)(lVar2 + 0x28) = pFVar1->DataType;
        *(FName *)(lVar2 + 0x30) = pFVar1->AnalyzerName;
        uVar8 = *(undefined8 *)&(pFVar1->AnalyzerInstanceID).C;
        *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)&pFVar1->AnalyzerInstanceID;
        *(undefined8 *)(lVar2 + 0x40) = uVar8;
        *(FName *)(lVar2 + 0x48) = pFVar1->AnalyzerMemberName;
        *(bool *)(lVar2 + 0x50) = pFVar1->UseDataTransmissionCenter;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014ad6dd54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14ad6dd70

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::Frontend::FAnalyzerAddress>::IsEmpty
          (TCopyableDataChannel<Metasound::Frontend::FAnalyzerAddress> *this)

{
  return (this->AtomicData).Ptr == (FAnalyzerAddress *)0x0;
}

// GetDataType @ 14ad6dd80

FName __thiscall
Metasound::TCopyableDataChannel<Metasound::Frontend::FAnalyzerAddress>::GetDataType
          (TCopyableDataChannel<Metasound::Frontend::FAnalyzerAddress> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::Frontend::FAnalyzerAddress>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14ad6ddb0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::Frontend::FAnalyzerAddress>::PushLiteral
          (TCopyableDataChannel<Metasound::Frontend::FAnalyzerAddress> *this,FLiteral *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FAnalyzerAddress *pFVar1;
  bool bVar2;
  FAnalyzerAddress *pFVar3;
  TUniquePtr<Metasound::Frontend::FAnalyzerAddress,TDefaultDelete<Metasound::Frontend::FAnalyzerAddress>_>
  *pTVar4;
  longlong local_78 [2];
  FAnalyzerAddress local_68;
  
  bVar2 = TLiteralTraits<Metasound::Frontend::FAnalyzerAddress>::IsParsable(param_1);
  if (!bVar2) {
    return false;
  }
  TDataLiteralFactory<Metasound::Frontend::FAnalyzerAddress,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::Frontend::FAnalyzerAddress>_>
  ::CreateExplicitArgs(&local_68,&this->OperatorSettings,param_1);
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar3 = (this->AtomicData).Ptr;
    pTVar4 = &this->AtomicData;
    if (pFVar3 == (FAnalyzerAddress *)0x0) {
      pFVar3 = ::operator_new(0x58);
      if (pFVar3 == (FAnalyzerAddress *)0x0) {
        pFVar3 = (FAnalyzerAddress *)0x0;
      }
      else {
        pFVar3->_padding_ = (longlong)&___7FAnalyzerAddress_Frontend_Metasound__6B_;
        pFVar3->AnalyzerName = local_68.AnalyzerName;
        pFVar3->InstanceID = local_68.InstanceID;
        (pFVar3->NodeID).A = local_68.NodeID.A;
        (pFVar3->NodeID).B = local_68.NodeID.B;
        (pFVar3->NodeID).C = local_68.NodeID.C;
        (pFVar3->NodeID).D = local_68.NodeID.D;
        pFVar3->AnalyzerMemberName = local_68.AnalyzerMemberName;
        pFVar3->OutputName = local_68.OutputName;
        pFVar3->UseDataTransmissionCenter = local_68.UseDataTransmissionCenter;
        pFVar3->DataType = local_68.DataType;
        (pFVar3->AnalyzerInstanceID).A = local_68.AnalyzerInstanceID.A;
        (pFVar3->AnalyzerInstanceID).B = local_68.AnalyzerInstanceID.B;
        (pFVar3->AnalyzerInstanceID).C = local_68.AnalyzerInstanceID.C;
        (pFVar3->AnalyzerInstanceID).D = local_68.AnalyzerInstanceID.D;
      }
      if (pTVar4 == (TUniquePtr<Metasound::Frontend::FAnalyzerAddress,TDefaultDelete<Metasound::Frontend::FAnalyzerAddress>_>
                     *)local_78) {
        if (pFVar3 != (FAnalyzerAddress *)0x0) {
          (**(code **)pFVar3->_padding_)(pFVar3,1);
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          return true;
        }
      }
      else {
        pFVar1 = pTVar4->Ptr;
        pTVar4->Ptr = pFVar3;
        if (pFVar1 != (FAnalyzerAddress *)0x0) {
          (**(code **)pFVar1->_padding_)(pFVar1,1);
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          return true;
        }
      }
    }
    else {
      pFVar3->InstanceID = local_68.InstanceID;
      pFVar3->OutputName = local_68.OutputName;
      pFVar3->DataType = local_68.DataType;
      pFVar3->AnalyzerName = local_68.AnalyzerName;
      (pFVar3->NodeID).A = local_68.NodeID.A;
      (pFVar3->NodeID).B = local_68.NodeID.B;
      (pFVar3->NodeID).C = local_68.NodeID.C;
      (pFVar3->NodeID).D = local_68.NodeID.D;
      pFVar3->AnalyzerMemberName = local_68.AnalyzerMemberName;
      pFVar3->UseDataTransmissionCenter = local_68.UseDataTransmissionCenter;
      (pFVar3->AnalyzerInstanceID).A = local_68.AnalyzerInstanceID.A;
      (pFVar3->AnalyzerInstanceID).B = local_68.AnalyzerInstanceID.B;
      (pFVar3->AnalyzerInstanceID).C = local_68.AnalyzerInstanceID.C;
      (pFVar3->AnalyzerInstanceID).D = local_68.AnalyzerInstanceID.D;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ConstructNewReceiverImplementation @ 14ad6dfd0

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::Frontend::FAnalyzerAddress>::
ConstructNewReceiverImplementation
          (TCopyableDataChannel<Metasound::Frontend::FAnalyzerAddress> *this,
          FReceiverInitParams *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IDataChannel *pIVar2;
  FName FVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  TSharedRef<Metasound::IDataChannel,1> *pTVar6;
  FName *pFVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *in_R8;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  puVar8 = (undefined8 *)0x0;
  puVar5 = ::operator_new(0x40);
  puVar9 = puVar8;
  if (puVar5 != (undefined8 *)0x0) {
    pTVar6 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
    pIVar2 = pTVar6->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      pFVar7 = GetMetasoundDataTypeName<Metasound::Frontend::FAnalyzerAddress>();
      FVar3 = *pFVar7;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      *(FName *)(puVar5 + 1) = FVar3;
      puVar5[2] = pIVar2;
      puVar5[3] = 0;
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      pFVar7 = GetMetasoundDataTypeName<Metasound::Frontend::FAnalyzerAddress>();
      FVar3 = *pFVar7;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      *(FName *)(puVar5 + 1) = FVar3;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      puVar5[2] = pIVar2;
      puVar5[3] = pTVar1;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar5[4] = 0xffffffffffffffff;
    *puVar5 = &___7__TReceiver_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
    puVar5[5] = 0;
    uVar4 = in_R8[1];
    puVar5[6] = *in_R8;
    puVar5[7] = uVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar8 = puVar5;
    puVar9 = (undefined8 *)&DAT_00000001;
  }
  *(undefined8 **)&param_1->OperatorSettings = puVar8;
  if (puVar9 != (undefined8 *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_>)
         (IReceiver *)param_1;
}

// ConstructNewSenderImplementation @ 14ad6e0f0

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::Frontend::FAnalyzerAddress>::
ConstructNewSenderImplementation
          (TCopyableDataChannel<Metasound::Frontend::FAnalyzerAddress> *this,
          FSenderInitParams *param_1)

{
  TSender<Metasound::Frontend::FAnalyzerAddress> *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<Metasound::Frontend::FAnalyzerAddress> *pTVar2;
  TSender<Metasound::Frontend::FAnalyzerAddress> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<Metasound::Frontend::FAnalyzerAddress> *)0x0;
  this_00 = ::operator_new(0x70);
  pTVar3 = pTVar2;
  if (this_00 != (TSender<Metasound::Frontend::FAnalyzerAddress> *)0x0) {
    pTVar1 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    local_38.Object = pTVar1->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (pTVar1->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = TSender<Metasound::Frontend::FAnalyzerAddress>::
             TSender<Metasound::Frontend::FAnalyzerAddress>(this_00,in_R8,&local_38);
    pTVar3 = (TSender<Metasound::Frontend::FAnalyzerAddress> *)&DAT_00000001;
  }
  *(TSender<Metasound::Frontend::FAnalyzerAddress> **)&param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<Metasound::Frontend::FAnalyzerAddress> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14ad6f5b0

long64 __thiscall
Metasound::
TCopyableDataChannel<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
GetPayloadID(TCopyableDataChannel<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
             *this)

{
  return this->PayloadID;
}

// CreateNewPayloadID @ 14ad6f5c0

long64 __thiscall
Metasound::
TCopyableDataChannel<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
CreateNewPayloadID(TCopyableDataChannel<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                   *this)

{
  atomic<__int64> *paVar1;
  atomic<__int64> aVar2;
  
  LOCK();
  paVar1 = &this->PayloadIDCounter;
  aVar2 = *paVar1;
  *paVar1 = (atomic<__int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  return (long64)aVar2;
}

// PushOpaque @ 14ad6f5e0

bool __thiscall
Metasound::
TCopyableDataChannel<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
PushOpaque(TCopyableDataChannel<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           *this,ISender *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  IDataChannel *pIVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 uVar7;
  FName *pFVar8;
  long64 lVar9;
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *pTVar12;
  TUniquePtr<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
  *pTVar13;
  FName local_res8;
  longlong local_58;
  ISender *local_50;
  FName *local_48;
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> local_40;
  
  pFVar8 = GetMetasoundDataTypeName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                     ();
  local_res8 = *pFVar8;
  if ((FName)param_1->_padding_ != local_res8) {
    local_48 = &local_res8;
    local_50 = param_1;
    bVar6 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>'
            ::__l2::<lambda_1>::operator()(&local_50);
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CheckType<TSenderImplementation>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0xd5,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lVar9 = (**(code **)(param_1->_padding_ + 8))(param_1);
  this->PayloadID = lVar9;
  pTVar13 = &this->AtomicData;
  pIVar2 = param_1[2].DataChannel.Object;
  if (pTVar13->Ptr ==
      (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)0x0) {
    if ((pIVar2 == (IDataChannel *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    pIVar2 = param_1[2].DataChannel.Object;
    pTVar12 = (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)
              pIVar2->_padding_;
    pIVar2->_padding_ = 0;
    lVar5 = pIVar2->_padding_;
    iVar1 = *(int *)((longlong)&pIVar2->_padding_ + 4);
    pIVar2->_padding_ = 0;
    pTVar10 = ::operator_new(0x10);
    pTVar11 = (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)0x0;
    if (pTVar10 != (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)0x0)
    {
      (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)pTVar12;
      pTVar10->ArrayNum = (int)lVar5;
      pTVar10->ArrayMax = iVar1;
      pTVar11 = pTVar10;
      pTVar12 = (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)0x0;
    }
    if (pTVar13 ==
        (TUniquePtr<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
         *)&local_58) {
      if (pTVar11 ==
          (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)0x0)
      goto joined_r0x00014ad6f7bf;
      pFVar3 = (pTVar11->AllocatorInstance).Data;
      pTVar10 = pTVar11;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
    }
    else {
      pTVar10 = pTVar13->Ptr;
      pTVar13->Ptr = pTVar11;
      if (pTVar10 ==
          (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)0x0)
      goto joined_r0x00014ad6f7bf;
      pFVar3 = (pTVar10->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
    }
    ::operator_delete(pTVar10,0x10);
  }
  else {
    if ((pIVar2 == (IDataChannel *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    pIVar2 = param_1[2].DataChannel.Object;
    pTVar12 = (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)
              pIVar2->_padding_;
    pIVar2->_padding_ = 0;
    lVar5 = pIVar2->_padding_;
    iVar1 = *(int *)((longlong)&pIVar2->_padding_ + 4);
    pIVar2->_padding_ = 0;
    pTVar11 = pTVar13->Ptr;
    if (pTVar11 != &local_40) {
      pFVar3 = (pTVar11->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)pTVar12;
      pTVar11->ArrayNum = (int)lVar5;
      pTVar11->ArrayMax = iVar1;
      pTVar12 = (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)0x0;
    }
  }
joined_r0x00014ad6f7bf:
  if (pTVar12 != (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(pTVar12);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return true;
}

// PopOpaque @ 14ad6f810

void __thiscall
Metasound::
TCopyableDataChannel<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
PopOpaque(TCopyableDataChannel<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
          *this,IReceiver *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *pTVar2;
  FAnalyzerAddress *pFVar3;
  FScriptContainerElement *pFVar4;
  TReceiver<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *pTVar5;
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *pTVar6;
  TUniquePtr<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
  *pTVar7;
  undefined8 local_18 [2];
  
  pTVar5 = IDataTransmissionBase::
           GetAs<Metasound::TReceiver<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
                     ((IDataTransmissionBase *)param_1);
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar2 = (this->AtomicData).Ptr;
    if ((pTVar2 != (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)0x0)
       && (this->PayloadID != pTVar5->LastPayloadID)) {
      pTVar6 = (pTVar5->Payload).Ptr;
      pTVar5->LastPayloadID = this->PayloadID;
      pTVar7 = &pTVar5->Payload;
      if (pTVar6 == (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)0x0
         ) {
        pTVar6 = ::operator_new(0x10);
        if (pTVar6 == (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)
                      0x0) {
          pTVar6 = (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)0x0;
        }
        else {
          (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          iVar1 = pTVar2->ArrayNum;
          pFVar3 = (FAnalyzerAddress *)(pTVar2->AllocatorInstance).Data;
          pTVar6->ArrayNum = iVar1;
          if (iVar1 == 0) {
            pTVar6->ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x58,8,iVar1,0,&pTVar6->AllocatorInstance,iVar1,&pTVar6->ArrayMax);
            ConstructItems<Metasound::Frontend::FAnalyzerAddress,Metasound::Frontend::FAnalyzerAddress,int>
                      ((pTVar6->AllocatorInstance).Data,pFVar3,iVar1);
          }
        }
        if (pTVar7 == (TUniquePtr<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
                       *)local_18) {
          if (pTVar6 != (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *
                        )0x0) {
            pFVar4 = (pTVar6->AllocatorInstance).Data;
            if (pFVar4 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar4);
            }
            ::operator_delete(pTVar6,0x10);
          }
        }
        else {
          pTVar2 = pTVar7->Ptr;
          pTVar7->Ptr = pTVar6;
          if (pTVar2 != (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *
                        )0x0) {
            pFVar4 = (pTVar2->AllocatorInstance).Data;
            if (pFVar4 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar4);
            }
            ::operator_delete(pTVar2,0x10);
          }
        }
      }
      else {
        TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>::operator=
                  (pTVar6,pTVar2);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014ad6f95d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14ad6f970

bool __thiscall
Metasound::
TCopyableDataChannel<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
IsEmpty(TCopyableDataChannel<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
        *this)

{
  return (this->AtomicData).Ptr ==
         (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)0x0;
}

// GetDataType @ 14ad6f980

FName __thiscall
Metasound::
TCopyableDataChannel<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
GetDataType(TCopyableDataChannel<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
            *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                     ();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14ad6f9e0

bool __thiscall
Metasound::
TCopyableDataChannel<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
PushLiteral(TCopyableDataChannel<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
            *this,FLiteral *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *pTVar5;
  TUniquePtr<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
  *pTVar6;
  undefined8 local_28;
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> local_20;
  
  bVar4 = TLiteralTraits<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
          ::IsParsable(param_1);
  if (!bVar4) {
    return false;
  }
  TDataLiteralFactory<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
  ::CreateExplicitArgs(&local_20,&this->OperatorSettings,param_1);
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar5 = (this->AtomicData).Ptr;
    pTVar6 = &this->AtomicData;
    if (pTVar5 == (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)0x0)
    {
      pTVar5 = ::operator_new(0x10);
      if (pTVar5 == (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)0x0
         ) {
        pTVar5 = (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)0x0;
      }
      else {
        (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        pTVar5->ArrayNum = local_20.ArrayNum;
        if (local_20.ArrayNum == 0) {
          pTVar5->ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x58,8,local_20.ArrayNum,0,&pTVar5->AllocatorInstance,local_20.ArrayNum,
                     &pTVar5->ArrayMax);
          ConstructItems<Metasound::Frontend::FAnalyzerAddress,Metasound::Frontend::FAnalyzerAddress,int>
                    ((pTVar5->AllocatorInstance).Data,
                     (FAnalyzerAddress *)local_20.AllocatorInstance.Data,local_20.ArrayNum);
        }
      }
      if (pTVar6 == (TUniquePtr<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
                     *)&local_28) {
        if (pTVar5 != (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)
                      0x0) {
          pFVar3 = (pTVar5->AllocatorInstance).Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          ::operator_delete(pTVar5,0x10);
        }
      }
      else {
        pTVar2 = pTVar6->Ptr;
        pTVar6->Ptr = pTVar5;
        if (pTVar2 != (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)
                      0x0) {
          pFVar3 = (pTVar2->AllocatorInstance).Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          ::operator_delete(pTVar2,0x10);
        }
      }
    }
    else if (pTVar5 != &local_20) {
      piVar1 = &pTVar5->ArrayMax;
      pTVar5->ArrayNum = local_20.ArrayNum;
      if ((local_20.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,local_20.ArrayNum,*piVar1,&pTVar5->AllocatorInstance,local_20.ArrayNum,
                   piVar1);
        ConstructItems<Metasound::Frontend::FAnalyzerAddress,Metasound::Frontend::FAnalyzerAddress,int>
                  ((pTVar5->AllocatorInstance).Data,
                   (FAnalyzerAddress *)local_20.AllocatorInstance.Data,local_20.ArrayNum);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((FAnalyzerAddress *)local_20.AllocatorInstance.Data != (FAnalyzerAddress *)0x0) {
      FMemory::Free(local_20.AllocatorInstance.Data);
    }
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ConstructNewReceiverImplementation @ 14ad6fbb0

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::
TCopyableDataChannel<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
ConstructNewReceiverImplementation
          (TCopyableDataChannel<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           *this,FReceiverInitParams *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IDataChannel *pIVar2;
  FName FVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  TSharedRef<Metasound::IDataChannel,1> *pTVar6;
  FName *pFVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *in_R8;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  puVar8 = (undefined8 *)0x0;
  puVar5 = ::operator_new(0x40);
  puVar9 = puVar8;
  if (puVar5 != (undefined8 *)0x0) {
    pTVar6 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
    pIVar2 = pTVar6->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      pFVar7 = GetMetasoundDataTypeName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                         ();
      FVar3 = *pFVar7;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      *(FName *)(puVar5 + 1) = FVar3;
      puVar5[2] = pIVar2;
      puVar5[3] = 0;
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      pFVar7 = GetMetasoundDataTypeName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                         ();
      FVar3 = *pFVar7;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      *(FName *)(puVar5 + 1) = FVar3;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      puVar5[2] = pIVar2;
      puVar5[3] = pTVar1;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar5[4] = 0xffffffffffffffff;
    *puVar5 = &
              ___7__TReceiver_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    puVar5[5] = 0;
    uVar4 = in_R8[1];
    puVar5[6] = *in_R8;
    puVar5[7] = uVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar8 = puVar5;
    puVar9 = (undefined8 *)&DAT_00000001;
  }
  *(undefined8 **)&param_1->OperatorSettings = puVar8;
  if (puVar9 != (undefined8 *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_>)
         (IReceiver *)param_1;
}

// ConstructNewSenderImplementation @ 14ad6fcd0

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::
TCopyableDataChannel<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
ConstructNewSenderImplementation
          (TCopyableDataChannel<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           *this,FSenderInitParams *param_1)

{
  TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *pTVar2;
  TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *)
           0x0;
  this_00 = ::operator_new(0x70);
  pTVar3 = pTVar2;
  if (this_00 !=
      (TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *)0x0) {
    pTVar1 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    local_38.Object = pTVar1->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (pTVar1->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
             TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                       (this_00,in_R8,&local_38);
    pTVar3 = (TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *)
             &DAT_00000001;
  }
  *(TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> **)
   &param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14ad78020

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
GetPayloadID(void *this)

{
  return *(long64 *)((longlong)this + 0x58);
}

// CreateNewPayloadID @ 14ad78030

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
CreateNewPayloadID(void *this)

{
  longlong *plVar1;
  longlong lVar2;
  
  LOCK();
  plVar1 = (longlong *)((longlong)this + 0x70);
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  return lVar2;
}

// PushOpaque @ 14ad78050

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
PushOpaque(void *this,ISender *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  IDataChannel *pIVar1;
  void *pvVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  FName *pFVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  FName local_res8;
  longlong local_28;
  ISender *local_20;
  FName *local_18;
  
  pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>()
  ;
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>'
            ::__l2::<lambda_1>::operator()(&local_20);
    if (!bVar5) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CheckType<TSenderImplementation>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                         ,0xd5,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((longlong)this + 0x30);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    uVar8 = (**(code **)(param_1->_padding_ + 8))(param_1);
    *(undefined8 *)((longlong)this + 0x58) = uVar8;
    plVar10 = (longlong *)((longlong)this + 0x28);
    pIVar1 = param_1[2].DataChannel.Object;
    if (*plVar10 == 0) {
      if (pIVar1 == (IDataChannel *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      lVar4 = (param_1[2].DataChannel.Object)->_padding_;
      puVar9 = ::operator_new(4);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        *puVar9 = (int)lVar4;
      }
      if (plVar10 != &local_28) {
        pvVar2 = (void *)*plVar10;
        *plVar10 = (longlong)puVar9;
        puVar9 = (undefined4 *)0x0;
        ::operator_delete(pvVar2,4);
      }
      ::operator_delete(puVar9,4);
    }
    else {
      if (pIVar1 == (IDataChannel *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      *(int *)*plVar10 = (int)(param_1[2].DataChannel.Object)->_padding_;
    }
    LeaveCriticalSection(lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// PopOpaque @ 14ad781d0

void __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
PopOpaque(void *this,IReceiver *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  undefined4 *puVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  undefined4 *puVar7;
  FName local_res8;
  undefined8 local_28;
  IReceiver *local_20;
  FName *local_18;
  
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>()
  ;
  local_res8 = *pFVar6;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>'
            ::__l2::<lambda_1>::operator()(&local_20);
    if (!bVar5) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CheckType<TSenderImplementation>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                         ,0xd5,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((longlong)this + 0x30);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    puVar2 = *(undefined4 **)((longlong)this + 0x28);
    if ((puVar2 != (undefined4 *)0x0) &&
       (*(longlong *)((longlong)this + 0x58) != param_1[1]._padding_)) {
      plVar1 = &param_1[1]._padding_;
      param_1[1]._padding_ = *(longlong *)((longlong)this + 0x58);
      if ((undefined4 *)param_1[1]._padding_ == (undefined4 *)0x0) {
        puVar7 = ::operator_new(4);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          *puVar7 = *puVar2;
        }
        if (plVar1 != &local_28) {
          pvVar3 = (void *)*plVar1;
          *plVar1 = (longlong)puVar7;
          puVar7 = (undefined4 *)0x0;
          ::operator_delete(pvVar3,4);
        }
        ::operator_delete(puVar7,4);
      }
      else {
        *(undefined4 *)param_1[1]._padding_ = *puVar2;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014ad782dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14ad782f0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
IsEmpty(void *this)

{
  return *(longlong *)((longlong)this + 0x28) == 0;
}

// GetDataType @ 14ad78300

FName __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
GetDataType(void *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>()
  ;
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14ad78330

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
PushLiteral(void *this,FLiteral *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  void *pvVar2;
  bool bVar3;
  int *piVar4;
  FOperatorSettings local_res18;
  undefined8 local_18 [2];
  
  bVar3 = TLiteralTraits<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::IsParsable
                    (param_1);
  if (!bVar3) {
    return false;
  }
  TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
  ::CreateExplicitArgs(&local_res18,(FLiteral *)((longlong)this + 0x60));
  lpCriticalSection = (LPCRITICAL_SECTION)((longlong)this + 0x30);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    puVar1 = (undefined8 *)((longlong)this + 0x28);
    if (*(int **)((longlong)this + 0x28) == (int *)0x0) {
      piVar4 = ::operator_new(4);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        *piVar4 = local_res18.SampleRate;
      }
      if (puVar1 != local_18) {
        pvVar2 = (void *)*puVar1;
        *puVar1 = piVar4;
        piVar4 = (int *)0x0;
        ::operator_delete(pvVar2,4);
      }
      ::operator_delete(piVar4,4);
    }
    else {
      **(int **)((longlong)this + 0x28) = local_res18.SampleRate;
    }
    LeaveCriticalSection(lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ConstructNewReceiverImplementation @ 14ad78410

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
ConstructNewReceiverImplementation(void *this,FReceiverInitParams *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IDataChannel *pIVar2;
  FName FVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  TSharedRef<Metasound::IDataChannel,1> *pTVar6;
  FName *pFVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *in_R8;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  puVar8 = (undefined8 *)0x0;
  puVar5 = ::operator_new(0x40);
  puVar9 = puVar8;
  if (puVar5 != (undefined8 *)0x0) {
    pTVar6 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)((longlong)this + 0x10),
                        &local_28);
    pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
    pIVar2 = pTVar6->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
                         ();
      FVar3 = *pFVar7;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      *(FName *)(puVar5 + 1) = FVar3;
      puVar5[2] = pIVar2;
      puVar5[3] = 0;
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
                         ();
      FVar3 = *pFVar7;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      *(FName *)(puVar5 + 1) = FVar3;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      puVar5[2] = pIVar2;
      puVar5[3] = pTVar1;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar5[4] = 0xffffffffffffffff;
    *puVar5 = &
              ___7__TReceiver_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
    ;
    puVar5[5] = 0;
    uVar4 = in_R8[1];
    puVar5[6] = *in_R8;
    puVar5[7] = uVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar8 = puVar5;
    puVar9 = (undefined8 *)&DAT_00000001;
  }
  *(undefined8 **)&param_1->OperatorSettings = puVar8;
  if (puVar9 != (undefined8 *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_>)
         (IReceiver *)param_1;
}

// ConstructNewSenderImplementation @ 14ad78530

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
ConstructNewSenderImplementation(void *this,FSenderInitParams *param_1)

{
  void *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar2;
  TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)0x0;
  this_00 = ::operator_new(0x70);
  pTVar3 = pTVar2;
  if (this_00 != (void *)0x0) {
    pTVar1 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)((longlong)this + 0x10),
                        &local_28);
    local_38.Object = pTVar1->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (pTVar1->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = TSender<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
             TSender<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
                       (this_00,in_R8,&local_38);
    pTVar3 = (TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)&DAT_00000001;
  }
  *(TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> **)&param_1->OperatorSettings
       = pTVar2;
  if (pTVar3 != (TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14ae91590

long64 __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
GetPayloadID(TCopyableDataChannel<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
             *this)

{
  return this->PayloadID;
}

// CreateNewPayloadID @ 14ae915a0

long64 __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
CreateNewPayloadID(TCopyableDataChannel<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                   *this)

{
  atomic<__int64> *paVar1;
  atomic<__int64> aVar2;
  
  LOCK();
  paVar1 = &this->PayloadIDCounter;
  aVar2 = *paVar1;
  *paVar1 = (atomic<__int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  return (long64)aVar2;
}

// PushOpaque @ 14ae915c0

bool __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
PushOpaque(TCopyableDataChannel<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
          ISender *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  IDataChannel *pIVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 uVar7;
  FName *pFVar8;
  long64 lVar9;
  TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *pTVar12;
  TUniquePtr<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
  *pTVar13;
  FName local_res8;
  longlong local_58;
  ISender *local_50;
  FName *local_48;
  TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> local_40;
  
  pFVar8 = GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>();
  local_res8 = *pFVar8;
  if ((FName)param_1->_padding_ != local_res8) {
    local_48 = &local_res8;
    local_50 = param_1;
    bVar6 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>'
            ::__l2::<lambda_1>::operator()(&local_50);
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CheckType<TSenderImplementation>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0xd5,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lVar9 = (**(code **)(param_1->_padding_ + 8))(param_1);
  this->PayloadID = lVar9;
  pTVar13 = &this->AtomicData;
  pIVar2 = param_1[2].DataChannel.Object;
  if (pTVar13->Ptr == (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)0x0) {
    if ((pIVar2 == (IDataChannel *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    pIVar2 = param_1[2].DataChannel.Object;
    pTVar12 = (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)pIVar2->_padding_;
    pIVar2->_padding_ = 0;
    lVar5 = pIVar2->_padding_;
    iVar1 = *(int *)((longlong)&pIVar2->_padding_ + 4);
    pIVar2->_padding_ = 0;
    pTVar10 = ::operator_new(0x10);
    pTVar11 = (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)0x0;
    if (pTVar10 != (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)0x0) {
      (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)pTVar12;
      pTVar10->ArrayNum = (int)lVar5;
      pTVar10->ArrayMax = iVar1;
      pTVar11 = pTVar10;
      pTVar12 = (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)0x0;
    }
    if (pTVar13 ==
        (TUniquePtr<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
         *)&local_58) {
      if (pTVar11 == (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)0x0)
      goto joined_r0x00014ae9179f;
      pFVar3 = (pTVar11->AllocatorInstance).Data;
      pTVar10 = pTVar11;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
    }
    else {
      pTVar10 = pTVar13->Ptr;
      pTVar13->Ptr = pTVar11;
      if (pTVar10 == (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)0x0)
      goto joined_r0x00014ae9179f;
      pFVar3 = (pTVar10->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
    }
    ::operator_delete(pTVar10,0x10);
  }
  else {
    if ((pIVar2 == (IDataChannel *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    pIVar2 = param_1[2].DataChannel.Object;
    pTVar12 = (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)pIVar2->_padding_;
    pIVar2->_padding_ = 0;
    lVar5 = pIVar2->_padding_;
    iVar1 = *(int *)((longlong)&pIVar2->_padding_ + 4);
    pIVar2->_padding_ = 0;
    pTVar11 = pTVar13->Ptr;
    if (pTVar11 != &local_40) {
      pFVar3 = (pTVar11->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)pTVar12;
      pTVar11->ArrayNum = (int)lVar5;
      pTVar11->ArrayMax = iVar1;
      pTVar12 = (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)0x0;
    }
  }
joined_r0x00014ae9179f:
  if (pTVar12 != (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(pTVar12);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return true;
}

// PopOpaque @ 14ae917f0

void __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
PopOpaque(TCopyableDataChannel<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
         IReceiver *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  int iVar2;
  TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *pTVar3;
  FSendAddress *pFVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  FName *pFVar8;
  ForAnyElementType *pFVar9;
  int *piVar10;
  FName local_res8;
  undefined8 local_38;
  IReceiver *local_30;
  FName *local_28;
  
  pFVar8 = GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>();
  local_res8 = *pFVar8;
  if ((FName)param_1->_padding_ != local_res8) {
    local_28 = &local_res8;
    local_30 = param_1;
    bVar7 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>'
            ::__l2::<lambda_1>::operator()(&local_30);
    if (!bVar7) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CheckType<TSenderImplementation>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                         ,0xd5,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar3 = (this->AtomicData).Ptr;
    if ((pTVar3 != (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)0x0) &&
       (this->PayloadID != param_1[1]._padding_)) {
      plVar1 = &param_1[1]._padding_;
      param_1[1]._padding_ = this->PayloadID;
      if ((TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)param_1[1]._padding_ ==
          (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar9 = ::operator_new(0x10);
        if (pFVar9 == (ForAnyElementType *)0x0) {
          pFVar9 = (ForAnyElementType *)0x0;
        }
        else {
          pFVar9->Data = (FScriptContainerElement *)0x0;
          iVar2 = pTVar3->ArrayNum;
          pFVar4 = (FSendAddress *)(pTVar3->AllocatorInstance).Data;
          *(int *)&pFVar9[1].Data = iVar2;
          piVar10 = (int *)((longlong)&pFVar9[1].Data + 4);
          if (iVar2 == 0) {
            *piVar10 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,iVar2,0,pFVar9,iVar2,piVar10);
            ConstructItems<Metasound::FSendAddress,Metasound::FSendAddress,int>
                      (pFVar9->Data,pFVar4,iVar2);
          }
        }
        if (plVar1 == &local_38) {
          if (pFVar9 != (ForAnyElementType *)0x0) {
            if (pFVar9->Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar9->Data);
            }
            ::operator_delete(pFVar9,0x10);
          }
        }
        else {
          puVar5 = (undefined8 *)*plVar1;
          *plVar1 = (longlong)pFVar9;
          if (puVar5 != (undefined8 *)0x0) {
            if ((void *)*puVar5 != (void *)0x0) {
              FMemory::Free((void *)*puVar5);
            }
            ::operator_delete(puVar5,0x10);
          }
        }
      }
      else {
        TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)
                   param_1[1]._padding_,pTVar3);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014ae91994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14ae919b0

bool __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
IsEmpty(TCopyableDataChannel<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this)

{
  return (this->AtomicData).Ptr ==
         (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)0x0;
}

// GetDataType @ 14ae919c0

FName __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
GetDataType(TCopyableDataChannel<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this
           )

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14ae91a50

bool __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
PushLiteral(TCopyableDataChannel<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this
           ,FLiteral *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *pTVar5;
  TUniquePtr<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
  *pTVar6;
  undefined8 local_28;
  TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> local_20;
  
  bVar4 = TLiteralTraits<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::IsParsable
                    (param_1);
  if (!bVar4) {
    return false;
  }
  TDataLiteralFactory<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
  ::CreateExplicitArgs(&local_20,&this->OperatorSettings,param_1);
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar5 = (this->AtomicData).Ptr;
    pTVar6 = &this->AtomicData;
    if (pTVar5 == (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)0x0) {
      pTVar5 = ::operator_new(0x10);
      if (pTVar5 == (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)0x0) {
        pTVar5 = (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)0x0;
      }
      else {
        (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        pTVar5->ArrayNum = local_20.ArrayNum;
        if (local_20.ArrayNum == 0) {
          pTVar5->ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,local_20.ArrayNum,0,&pTVar5->AllocatorInstance,local_20.ArrayNum,
                     &pTVar5->ArrayMax);
          ConstructItems<Metasound::FSendAddress,Metasound::FSendAddress,int>
                    ((pTVar5->AllocatorInstance).Data,
                     (FSendAddress *)local_20.AllocatorInstance.Data,local_20.ArrayNum);
        }
      }
      if (pTVar6 == (TUniquePtr<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
                     *)&local_28) {
        if (pTVar5 != (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)0x0) {
          pFVar3 = (pTVar5->AllocatorInstance).Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          ::operator_delete(pTVar5,0x10);
        }
      }
      else {
        pTVar2 = pTVar6->Ptr;
        pTVar6->Ptr = pTVar5;
        if (pTVar2 != (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)0x0) {
          pFVar3 = (pTVar2->AllocatorInstance).Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          ::operator_delete(pTVar2,0x10);
        }
      }
    }
    else if (pTVar5 != &local_20) {
      piVar1 = &pTVar5->ArrayMax;
      pTVar5->ArrayNum = local_20.ArrayNum;
      if ((local_20.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,local_20.ArrayNum,*piVar1,&pTVar5->AllocatorInstance,local_20.ArrayNum,
                   piVar1);
        ConstructItems<Metasound::FSendAddress,Metasound::FSendAddress,int>
                  ((pTVar5->AllocatorInstance).Data,(FSendAddress *)local_20.AllocatorInstance.Data,
                   local_20.ArrayNum);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((FSendAddress *)local_20.AllocatorInstance.Data != (FSendAddress *)0x0) {
      FMemory::Free(local_20.AllocatorInstance.Data);
    }
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ConstructNewReceiverImplementation @ 14ae91ca0

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
ConstructNewReceiverImplementation
          (TCopyableDataChannel<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
          FReceiverInitParams *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IDataChannel *pIVar2;
  FName FVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  TSharedRef<Metasound::IDataChannel,1> *pTVar6;
  FName *pFVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *in_R8;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  puVar8 = (undefined8 *)0x0;
  puVar5 = ::operator_new(0x40);
  puVar9 = puVar8;
  if (puVar5 != (undefined8 *)0x0) {
    pTVar6 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
    pIVar2 = pTVar6->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      pFVar7 = GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                         ();
      FVar3 = *pFVar7;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      *(FName *)(puVar5 + 1) = FVar3;
      puVar5[2] = pIVar2;
      puVar5[3] = 0;
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      pFVar7 = GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                         ();
      FVar3 = *pFVar7;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      *(FName *)(puVar5 + 1) = FVar3;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      puVar5[2] = pIVar2;
      puVar5[3] = pTVar1;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar5[4] = 0xffffffffffffffff;
    *puVar5 = &
              ___7__TReceiver_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    puVar5[5] = 0;
    uVar4 = in_R8[1];
    puVar5[6] = *in_R8;
    puVar5[7] = uVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar8 = puVar5;
    puVar9 = (undefined8 *)&DAT_00000001;
  }
  *(undefined8 **)&param_1->OperatorSettings = puVar8;
  if (puVar9 != (undefined8 *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_>)
         (IReceiver *)param_1;
}

// ConstructNewSenderImplementation @ 14ae91e00

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
ConstructNewSenderImplementation
          (TCopyableDataChannel<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
          FSenderInitParams *param_1)

{
  TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar2;
  TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)0x0;
  this_00 = ::operator_new(0x70);
  pTVar3 = pTVar2;
  if (this_00 != (TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)0x0) {
    pTVar1 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    local_38.Object = pTVar1->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (pTVar1->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
             TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                       (this_00,in_R8,&local_38);
    pTVar3 = (TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)&DAT_00000001;
  }
  *(TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> **)
   &param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14ae94810

long64 __thiscall
Metasound::TCopyableDataChannel<bool>::GetPayloadID(TCopyableDataChannel<bool> *this)

{
  return this->PayloadID;
}

// CreateNewPayloadID @ 14ae94820

long64 __thiscall
Metasound::TCopyableDataChannel<bool>::CreateNewPayloadID(TCopyableDataChannel<bool> *this)

{
  atomic<__int64> *paVar1;
  atomic<__int64> aVar2;
  
  LOCK();
  paVar1 = &this->PayloadIDCounter;
  aVar2 = *paVar1;
  *paVar1 = (atomic<__int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  return (long64)aVar2;
}

// PushOpaque @ 14ae948c0

bool __thiscall
Metasound::TCopyableDataChannel<bool>::PushOpaque(TCopyableDataChannel<bool> *this,ISender *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  IDataChannel *pIVar1;
  bool *pbVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  FName *pFVar7;
  long64 lVar8;
  bool *pbVar9;
  TUniquePtr<bool,TDefaultDelete<bool>_> *pTVar10;
  FName local_res8;
  longlong local_28;
  ISender *local_20;
  FName *local_18;
  
  pFVar7 = GetMetasoundDataTypeName<bool>();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<bool>_>'::__l2::
            <lambda_1>::operator()(&local_20);
    if (!bVar5) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CheckType<TSenderImplementation>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                         ,0xd5,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lVar8 = (**(code **)(param_1->_padding_ + 8))(param_1);
    this->PayloadID = lVar8;
    pTVar10 = &this->AtomicData;
    pIVar1 = param_1[2].DataChannel.Object;
    if (pTVar10->Ptr == (bool *)0x0) {
      if (pIVar1 == (IDataChannel *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      lVar4 = (param_1[2].DataChannel.Object)->_padding_;
      pbVar9 = ::operator_new(1);
      if (pbVar9 == (bool *)0x0) {
        pbVar9 = (bool *)0x0;
      }
      else {
        *pbVar9 = SUB81(lVar4,0);
      }
      if (pTVar10 != (TUniquePtr<bool,TDefaultDelete<bool>_> *)&local_28) {
        pbVar2 = pTVar10->Ptr;
        pTVar10->Ptr = pbVar9;
        pbVar9 = (bool *)0x0;
        ::operator_delete(pbVar2,1);
      }
      ::operator_delete(pbVar9,1);
    }
    else {
      if (pIVar1 == (IDataChannel *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      *pTVar10->Ptr = SUB81((param_1[2].DataChannel.Object)->_padding_,0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// PopOpaque @ 14ae94a40

void __thiscall
Metasound::TCopyableDataChannel<bool>::PopOpaque
          (TCopyableDataChannel<bool> *this,IReceiver *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  bool *pbVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  undefined1 *puVar7;
  FName local_res8;
  undefined8 local_28;
  IReceiver *local_20;
  FName *local_18;
  
  pFVar6 = GetMetasoundDataTypeName<bool>();
  local_res8 = *pFVar6;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::CheckType<Metasound::TReceiver<bool>_>'::__l2::
            <lambda_1>::operator()(&local_20);
    if (!bVar5) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CheckType<TSenderImplementation>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                         ,0xd5,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pbVar2 = (this->AtomicData).Ptr;
    if ((pbVar2 != (bool *)0x0) && (this->PayloadID != param_1[1]._padding_)) {
      plVar1 = &param_1[1]._padding_;
      param_1[1]._padding_ = this->PayloadID;
      if ((undefined1 *)param_1[1]._padding_ == (undefined1 *)0x0) {
        puVar7 = ::operator_new(1);
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = (undefined1 *)0x0;
        }
        else {
          *puVar7 = *pbVar2;
        }
        if (plVar1 != &local_28) {
          pvVar3 = (void *)*plVar1;
          *plVar1 = (longlong)puVar7;
          puVar7 = (undefined1 *)0x0;
          ::operator_delete(pvVar3,1);
        }
        ::operator_delete(puVar7,1);
      }
      else {
        *(undefined1 *)param_1[1]._padding_ = *pbVar2;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014ae94b4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14ae94bb0

bool __thiscall Metasound::TCopyableDataChannel<bool>::IsEmpty(TCopyableDataChannel<bool> *this)

{
  return (this->AtomicData).Ptr == (bool *)0x0;
}

// GetDataType @ 14ae94bc0

FName __thiscall
Metasound::TCopyableDataChannel<bool>::GetDataType(TCopyableDataChannel<bool> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<bool>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14ae94bf0

bool __thiscall
Metasound::TCopyableDataChannel<bool>::PushLiteral
          (TCopyableDataChannel<bool> *this,FLiteral *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TUniquePtr<bool,TDefaultDelete<bool>_> *pTVar1;
  bool *pbVar2;
  bool bVar3;
  bool *pbVar4;
  undefined8 local_18 [2];
  
  bVar3 = TLiteralTraits<bool>::IsParsable(param_1);
  if (!bVar3) {
    return false;
  }
  bVar3 = TDataLiteralFactory<bool,Metasound::DataFactoryPrivate::TDataTypeCreator<bool>_>::
          CreateExplicitArgs(&this->OperatorSettings,param_1);
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pbVar4 = (this->AtomicData).Ptr;
    pTVar1 = &this->AtomicData;
    if (pbVar4 == (bool *)0x0) {
      pbVar4 = ::operator_new(1);
      if (pbVar4 == (bool *)0x0) {
        pbVar4 = (bool *)0x0;
      }
      else {
        *pbVar4 = bVar3;
      }
      if (pTVar1 != (TUniquePtr<bool,TDefaultDelete<bool>_> *)local_18) {
        pbVar2 = pTVar1->Ptr;
        pTVar1->Ptr = pbVar4;
        pbVar4 = (bool *)0x0;
        ::operator_delete(pbVar2,1);
      }
      ::operator_delete(pbVar4,1);
    }
    else {
      *pbVar4 = bVar3;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ConstructNewReceiverImplementation @ 14ae94cd0

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<bool>::ConstructNewReceiverImplementation
          (TCopyableDataChannel<bool> *this,FReceiverInitParams *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IDataChannel *pIVar2;
  FName FVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  TSharedRef<Metasound::IDataChannel,1> *pTVar6;
  FName *pFVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *in_R8;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  puVar8 = (undefined8 *)0x0;
  puVar5 = ::operator_new(0x40);
  puVar9 = puVar8;
  if (puVar5 != (undefined8 *)0x0) {
    pTVar6 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
    pIVar2 = pTVar6->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      pFVar7 = GetMetasoundDataTypeName<bool>();
      FVar3 = *pFVar7;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      *(FName *)(puVar5 + 1) = FVar3;
      puVar5[2] = pIVar2;
      puVar5[3] = 0;
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      pFVar7 = GetMetasoundDataTypeName<bool>();
      FVar3 = *pFVar7;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      *(FName *)(puVar5 + 1) = FVar3;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      puVar5[2] = pIVar2;
      puVar5[3] = pTVar1;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar5[4] = 0xffffffffffffffff;
    *puVar5 = &___7__TReceiver__N_Metasound__6B_;
    puVar5[5] = 0;
    uVar4 = in_R8[1];
    puVar5[6] = *in_R8;
    puVar5[7] = uVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar8 = puVar5;
    puVar9 = (undefined8 *)&DAT_00000001;
  }
  *(undefined8 **)&param_1->OperatorSettings = puVar8;
  if (puVar9 != (undefined8 *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_>)
         (IReceiver *)param_1;
}

// ConstructNewSenderImplementation @ 14ae94df0

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<bool>::ConstructNewSenderImplementation
          (TCopyableDataChannel<bool> *this,FSenderInitParams *param_1)

{
  TSender<bool> *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<bool> *pTVar2;
  TSender<bool> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<bool> *)0x0;
  this_00 = ::operator_new(0x70);
  pTVar3 = pTVar2;
  if (this_00 != (TSender<bool> *)0x0) {
    pTVar1 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    local_38.Object = pTVar1->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (pTVar1->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = TSender<bool>::TSender<bool>(this_00,in_R8,&local_38);
    pTVar3 = (TSender<bool> *)&DAT_00000001;
  }
  *(TSender<bool> **)&param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<bool> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14ae95120

long64 __thiscall
Metasound::TCopyableDataChannel<TArray<float,TSizedDefaultAllocator<32>_>_>::GetPayloadID
          (TCopyableDataChannel<TArray<float,TSizedDefaultAllocator<32>_>_> *this)

{
  return this->PayloadID;
}

// CreateNewPayloadID @ 14ae95190

long64 __thiscall
Metasound::TCopyableDataChannel<TArray<float,TSizedDefaultAllocator<32>_>_>::CreateNewPayloadID
          (TCopyableDataChannel<TArray<float,TSizedDefaultAllocator<32>_>_> *this)

{
  atomic<__int64> *paVar1;
  atomic<__int64> aVar2;
  
  LOCK();
  paVar1 = &this->PayloadIDCounter;
  aVar2 = *paVar1;
  *paVar1 = (atomic<__int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  return (long64)aVar2;
}

// PushOpaque @ 14ae951b0

bool __thiscall
Metasound::TCopyableDataChannel<TArray<float,TSizedDefaultAllocator<32>_>_>::PushOpaque
          (TCopyableDataChannel<TArray<float,TSizedDefaultAllocator<32>_>_> *this,ISender *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  IDataChannel *pIVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 uVar7;
  FName *pFVar8;
  long64 lVar9;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar12;
  TUniquePtr<TArray<float,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<float,TSizedDefaultAllocator<32>_>_>_>
  *pTVar13;
  FName local_res8;
  longlong local_58;
  ISender *local_50;
  FName *local_48;
  TArray<float,TSizedDefaultAllocator<32>_> local_40;
  
  pFVar8 = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
  local_res8 = *pFVar8;
  if ((FName)param_1->_padding_ != local_res8) {
    local_48 = &local_res8;
    local_50 = param_1;
    bVar6 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<TArray<float,TSizedDefaultAllocator<32>_>_>_>'::__l2::
            <lambda_1>::operator()(&local_50);
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CheckType<TSenderImplementation>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0xd5,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lVar9 = (**(code **)(param_1->_padding_ + 8))(param_1);
  this->PayloadID = lVar9;
  pTVar13 = &this->AtomicData;
  pIVar2 = param_1[2].DataChannel.Object;
  if (pTVar13->Ptr == (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
    if ((pIVar2 == (IDataChannel *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    pIVar2 = param_1[2].DataChannel.Object;
    pTVar12 = (TArray<float,TSizedDefaultAllocator<32>_> *)pIVar2->_padding_;
    pIVar2->_padding_ = 0;
    lVar5 = pIVar2->_padding_;
    iVar1 = *(int *)((longlong)&pIVar2->_padding_ + 4);
    pIVar2->_padding_ = 0;
    pTVar10 = ::operator_new(0x10);
    pTVar11 = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
    if (pTVar10 != (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
      (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)pTVar12;
      pTVar10->ArrayNum = (int)lVar5;
      pTVar10->ArrayMax = iVar1;
      pTVar11 = pTVar10;
      pTVar12 = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
    }
    if (pTVar13 ==
        (TUniquePtr<TArray<float,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<float,TSizedDefaultAllocator<32>_>_>_>
         *)&local_58) {
      if (pTVar11 == (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) goto joined_r0x00014ae9538f;
      pFVar3 = (pTVar11->AllocatorInstance).Data;
      pTVar10 = pTVar11;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
    }
    else {
      pTVar10 = pTVar13->Ptr;
      pTVar13->Ptr = pTVar11;
      if (pTVar10 == (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) goto joined_r0x00014ae9538f;
      pFVar3 = (pTVar10->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
    }
    ::operator_delete(pTVar10,0x10);
  }
  else {
    if ((pIVar2 == (IDataChannel *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    pIVar2 = param_1[2].DataChannel.Object;
    pTVar12 = (TArray<float,TSizedDefaultAllocator<32>_> *)pIVar2->_padding_;
    pIVar2->_padding_ = 0;
    lVar5 = pIVar2->_padding_;
    iVar1 = *(int *)((longlong)&pIVar2->_padding_ + 4);
    pIVar2->_padding_ = 0;
    pTVar11 = pTVar13->Ptr;
    if (pTVar11 != &local_40) {
      pFVar3 = (pTVar11->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)pTVar12;
      pTVar11->ArrayNum = (int)lVar5;
      pTVar11->ArrayMax = iVar1;
      pTVar12 = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
    }
  }
joined_r0x00014ae9538f:
  if (pTVar12 != (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(pTVar12);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return true;
}

// PopOpaque @ 14ae95420

void __thiscall
Metasound::TCopyableDataChannel<TArray<float,TSizedDefaultAllocator<32>_>_>::PopOpaque
          (TCopyableDataChannel<TArray<float,TSizedDefaultAllocator<32>_>_> *this,IReceiver *param_1
          )

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  int iVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *_Src;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  FName *pFVar7;
  ForAnyElementType *pFVar8;
  int *piVar9;
  FName local_res8;
  undefined8 local_38;
  IReceiver *local_30;
  FName *local_28;
  
  pFVar7 = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_28 = &local_res8;
    local_30 = param_1;
    bVar6 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<TArray<float,TSizedDefaultAllocator<32>_>_>_>'::__l2::
            <lambda_1>::operator()(&local_30);
    if (!bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CheckType<TSenderImplementation>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                         ,0xd5,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar3 = (this->AtomicData).Ptr;
    if ((pTVar3 != (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) &&
       (this->PayloadID != param_1[1]._padding_)) {
      plVar1 = &param_1[1]._padding_;
      param_1[1]._padding_ = this->PayloadID;
      if ((TArray<float,TSizedDefaultAllocator<32>_> *)param_1[1]._padding_ ==
          (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar8 = ::operator_new(0x10);
        if (pFVar8 == (ForAnyElementType *)0x0) {
          pFVar8 = (ForAnyElementType *)0x0;
        }
        else {
          pFVar8->Data = (FScriptContainerElement *)0x0;
          iVar2 = pTVar3->ArrayNum;
          _Src = (pTVar3->AllocatorInstance).Data;
          *(int *)&pFVar8[1].Data = iVar2;
          piVar9 = (int *)((longlong)&pFVar8[1].Data + 4);
          if (iVar2 == 0) {
            *piVar9 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar2,0,pFVar8,iVar2,piVar9);
            memcpy(pFVar8->Data,_Src,(longlong)iVar2 << 2);
          }
        }
        if (plVar1 == &local_38) {
          if (pFVar8 != (ForAnyElementType *)0x0) {
            if (pFVar8->Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar8->Data);
            }
            ::operator_delete(pFVar8,0x10);
          }
        }
        else {
          puVar4 = (undefined8 *)*plVar1;
          *plVar1 = (longlong)pFVar8;
          if (puVar4 != (undefined8 *)0x0) {
            if ((void *)*puVar4 != (void *)0x0) {
              FMemory::Free((void *)*puVar4);
            }
            ::operator_delete(puVar4,0x10);
          }
        }
      }
      else {
        TArray<float,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<float,TSizedDefaultAllocator<32>_> *)param_1[1]._padding_,pTVar3);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014ae955c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14ae955e0

bool __thiscall
Metasound::TCopyableDataChannel<TArray<float,TSizedDefaultAllocator<32>_>_>::IsEmpty
          (TCopyableDataChannel<TArray<float,TSizedDefaultAllocator<32>_>_> *this)

{
  return (this->AtomicData).Ptr == (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
}

// GetDataType @ 14ae955f0

FName __thiscall
Metasound::TCopyableDataChannel<TArray<float,TSizedDefaultAllocator<32>_>_>::GetDataType
          (TCopyableDataChannel<TArray<float,TSizedDefaultAllocator<32>_>_> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14ae95620

bool __thiscall
Metasound::TCopyableDataChannel<TArray<float,TSizedDefaultAllocator<32>_>_>::PushLiteral
          (TCopyableDataChannel<TArray<float,TSizedDefaultAllocator<32>_>_> *this,FLiteral *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  TUniquePtr<TArray<float,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<float,TSizedDefaultAllocator<32>_>_>_>
  *pTVar6;
  undefined8 local_28;
  TArray<float,TSizedDefaultAllocator<32>_> local_20;
  
  bVar4 = TLiteralTraits<TArray<float,TSizedDefaultAllocator<32>_>_>::IsParsable(param_1);
  if (!bVar4) {
    return false;
  }
  TDataLiteralFactory<TArray<float,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
  ::CreateExplicitArgs(&local_20,&this->OperatorSettings,param_1);
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar5 = (this->AtomicData).Ptr;
    pTVar6 = &this->AtomicData;
    if (pTVar5 == (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
      pTVar5 = ::operator_new(0x10);
      if (pTVar5 == (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
        pTVar5 = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
      }
      else {
        (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        pTVar5->ArrayNum = local_20.ArrayNum;
        if (local_20.ArrayNum == 0) {
          pTVar5->ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_20.ArrayNum,0,&pTVar5->AllocatorInstance,local_20.ArrayNum,
                     &pTVar5->ArrayMax);
          memcpy((pTVar5->AllocatorInstance).Data,local_20.AllocatorInstance.Data,
                 (longlong)local_20.ArrayNum << 2);
        }
      }
      if (pTVar6 == (TUniquePtr<TArray<float,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<float,TSizedDefaultAllocator<32>_>_>_>
                     *)&local_28) {
        if (pTVar5 != (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
          pFVar3 = (pTVar5->AllocatorInstance).Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          ::operator_delete(pTVar5,0x10);
        }
      }
      else {
        pTVar2 = pTVar6->Ptr;
        pTVar6->Ptr = pTVar5;
        if (pTVar2 != (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
          pFVar3 = (pTVar2->AllocatorInstance).Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          ::operator_delete(pTVar2,0x10);
        }
      }
    }
    else if (pTVar5 != &local_20) {
      piVar1 = &pTVar5->ArrayMax;
      pTVar5->ArrayNum = local_20.ArrayNum;
      if ((local_20.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_20.ArrayNum,*piVar1,&pTVar5->AllocatorInstance,local_20.ArrayNum,piVar1
                  );
        if (local_20.ArrayNum != 0) {
          memcpy((pTVar5->AllocatorInstance).Data,local_20.AllocatorInstance.Data,
                 (longlong)local_20.ArrayNum << 2);
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.AllocatorInstance.Data);
    }
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ConstructNewReceiverImplementation @ 14ae95800

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<TArray<float,TSizedDefaultAllocator<32>_>_>::
ConstructNewReceiverImplementation
          (TCopyableDataChannel<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          FReceiverInitParams *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IDataChannel *pIVar2;
  FName FVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  TSharedRef<Metasound::IDataChannel,1> *pTVar6;
  FName *pFVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *in_R8;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  puVar8 = (undefined8 *)0x0;
  puVar5 = ::operator_new(0x40);
  puVar9 = puVar8;
  if (puVar5 != (undefined8 *)0x0) {
    pTVar6 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
    pIVar2 = pTVar6->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      pFVar7 = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
      FVar3 = *pFVar7;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      *(FName *)(puVar5 + 1) = FVar3;
      puVar5[2] = pIVar2;
      puVar5[3] = 0;
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      pFVar7 = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
      FVar3 = *pFVar7;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      *(FName *)(puVar5 + 1) = FVar3;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      puVar5[2] = pIVar2;
      puVar5[3] = pTVar1;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar5[4] = 0xffffffffffffffff;
    *puVar5 = &___7__TReceiver_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    puVar5[5] = 0;
    uVar4 = in_R8[1];
    puVar5[6] = *in_R8;
    puVar5[7] = uVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar8 = puVar5;
    puVar9 = (undefined8 *)&DAT_00000001;
  }
  *(undefined8 **)&param_1->OperatorSettings = puVar8;
  if (puVar9 != (undefined8 *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_>)
         (IReceiver *)param_1;
}

// ConstructNewSenderImplementation @ 14ae95920

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<TArray<float,TSizedDefaultAllocator<32>_>_>::
ConstructNewSenderImplementation
          (TCopyableDataChannel<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          FSenderInitParams *param_1)

{
  TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar2;
  TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
  this_00 = ::operator_new(0x70);
  pTVar3 = pTVar2;
  if (this_00 != (TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
    pTVar1 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    local_38.Object = pTVar1->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (pTVar1->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = TSender<TArray<float,TSizedDefaultAllocator<32>_>_>::
             TSender<TArray<float,TSizedDefaultAllocator<32>_>_>(this_00,in_R8,&local_38);
    pTVar3 = (TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *)&DAT_00000001;
  }
  *(TSender<TArray<float,TSizedDefaultAllocator<32>_>_> **)&param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14ae97d70

long64 __thiscall
Metasound::
TCopyableDataChannel<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
GetPayloadID(TCopyableDataChannel<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
             *this)

{
  return this->PayloadID;
}

// CreateNewPayloadID @ 14ae97d80

long64 __thiscall
Metasound::
TCopyableDataChannel<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
CreateNewPayloadID(TCopyableDataChannel<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                   *this)

{
  atomic<__int64> *paVar1;
  atomic<__int64> aVar2;
  
  LOCK();
  paVar1 = &this->PayloadIDCounter;
  aVar2 = *paVar1;
  *paVar1 = (atomic<__int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  return (long64)aVar2;
}

// PushOpaque @ 14ae97e20

bool __thiscall
Metasound::
TCopyableDataChannel<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
PushOpaque(TCopyableDataChannel<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           *this,ISender *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  IDataChannel *pIVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FName *pFVar7;
  long64 lVar8;
  TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *pTVar10;
  int iVar11;
  TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *pTVar12;
  TUniquePtr<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
  *pTVar13;
  FName local_res8;
  longlong local_58;
  ISender *local_50;
  FName *local_48;
  TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> local_40;
  
  pFVar7 = GetMetasoundDataTypeName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                     ();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_48 = &local_res8;
    local_50 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>'
            ::__l2::<lambda_1>::operator()(&local_50);
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CheckType<TSenderImplementation>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0xd5,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lVar8 = (**(code **)(param_1->_padding_ + 8))(param_1);
  this->PayloadID = lVar8;
  pTVar13 = &this->AtomicData;
  pIVar2 = param_1[2].DataChannel.Object;
  if (pTVar13->Ptr == (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)0x0)
  {
    if ((pIVar2 == (IDataChannel *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pIVar2 = param_1[2].DataChannel.Object;
    pTVar12 = (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)
              pIVar2->_padding_;
    pIVar2->_padding_ = 0;
    iVar11 = (int)pIVar2->_padding_;
    iVar1 = *(int *)((longlong)&pIVar2->_padding_ + 4);
    pIVar2->_padding_ = 0;
    pTVar9 = ::operator_new(0x10);
    pTVar10 = (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)0x0;
    if (pTVar9 != (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)0x0) {
      (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)pTVar12;
      pTVar9->ArrayNum = iVar11;
      pTVar9->ArrayMax = iVar1;
      pTVar10 = pTVar9;
      pTVar12 = (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)0x0;
      iVar11 = 0;
    }
    if (pTVar13 ==
        (TUniquePtr<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
         *)&local_58) {
      if (pTVar10 != (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)0x0) {
        DestructItems<FMetasoundParameterStorageWrapper,int>
                  ((FMetasoundParameterStorageWrapper *)(pTVar10->AllocatorInstance).Data,
                   pTVar10->ArrayNum);
        pFVar3 = (pTVar10->AllocatorInstance).Data;
        pTVar9 = pTVar10;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        goto LAB_14ae97f94;
      }
    }
    else {
      pTVar9 = pTVar13->Ptr;
      pTVar13->Ptr = pTVar10;
      if (pTVar9 != (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)0x0) {
        DestructItems<FMetasoundParameterStorageWrapper,int>
                  ((FMetasoundParameterStorageWrapper *)(pTVar9->AllocatorInstance).Data,
                   pTVar9->ArrayNum);
        pFVar3 = (pTVar9->AllocatorInstance).Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
LAB_14ae97f94:
        ::operator_delete(pTVar9,0x10);
      }
    }
  }
  else {
    if ((pIVar2 == (IDataChannel *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pIVar2 = param_1[2].DataChannel.Object;
    pTVar12 = (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)
              pIVar2->_padding_;
    pIVar2->_padding_ = 0;
    iVar11 = (int)pIVar2->_padding_;
    iVar1 = *(int *)((longlong)&pIVar2->_padding_ + 4);
    pIVar2->_padding_ = 0;
    pTVar10 = pTVar13->Ptr;
    if (pTVar10 != &local_40) {
      DestructItems<FMetasoundParameterStorageWrapper,int>
                ((FMetasoundParameterStorageWrapper *)(pTVar10->AllocatorInstance).Data,
                 pTVar10->ArrayNum);
      pFVar3 = (pTVar10->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)pTVar12;
      pTVar10->ArrayNum = iVar11;
      pTVar10->ArrayMax = iVar1;
      DestructItems<FMetasoundParameterStorageWrapper,int>
                ((FMetasoundParameterStorageWrapper *)0x0,0);
      goto LAB_14ae97fb5;
    }
  }
  DestructItems<FMetasoundParameterStorageWrapper,int>
            ((FMetasoundParameterStorageWrapper *)pTVar12,iVar11);
  if (pTVar12 != (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(pTVar12);
  }
LAB_14ae97fb5:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return true;
}

// PopOpaque @ 14ae98080

void __thiscall
Metasound::
TCopyableDataChannel<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
PopOpaque(TCopyableDataChannel<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
          *this,IReceiver *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  int iVar2;
  TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  FName *pFVar8;
  ForAnyElementType *pFVar9;
  int *piVar10;
  FName local_res8;
  undefined8 local_38;
  IReceiver *local_30;
  FName *local_28;
  
  pFVar8 = GetMetasoundDataTypeName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                     ();
  local_res8 = *pFVar8;
  if ((FName)param_1->_padding_ != local_res8) {
    local_28 = &local_res8;
    local_30 = param_1;
    bVar7 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>'
            ::__l2::<lambda_1>::operator()(&local_30);
    if (!bVar7) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CheckType<TSenderImplementation>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                         ,0xd5,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar3 = (this->AtomicData).Ptr;
    if ((pTVar3 != (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)0x0) &&
       (this->PayloadID != param_1[1]._padding_)) {
      plVar1 = &param_1[1]._padding_;
      param_1[1]._padding_ = this->PayloadID;
      if ((TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)
          param_1[1]._padding_ ==
          (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar9 = ::operator_new(0x10);
        if (pFVar9 == (ForAnyElementType *)0x0) {
          pFVar9 = (ForAnyElementType *)0x0;
        }
        else {
          pFVar9->Data = (FScriptContainerElement *)0x0;
          iVar2 = pTVar3->ArrayNum;
          pFVar4 = (pTVar3->AllocatorInstance).Data;
          *(int *)&pFVar9[1].Data = iVar2;
          piVar10 = (int *)((longlong)&pFVar9[1].Data + 4);
          if (iVar2 == 0) {
            *piVar10 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar2,0,pFVar9,iVar2,piVar10);
            ConstructItems<FMetasoundParameterStorageWrapper,FMetasoundParameterStorageWrapper,int>
                      (pFVar9->Data,(FMetasoundParameterStorageWrapper *)pFVar4,iVar2);
          }
        }
        if (plVar1 == &local_38) {
          if (pFVar9 != (ForAnyElementType *)0x0) {
            DestructItems<FMetasoundParameterStorageWrapper,int>
                      ((FMetasoundParameterStorageWrapper *)pFVar9->Data,*(int *)&pFVar9[1].Data);
            if (pFVar9->Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar9->Data);
            }
            ::operator_delete(pFVar9,0x10);
          }
        }
        else {
          puVar5 = (undefined8 *)*plVar1;
          *plVar1 = (longlong)pFVar9;
          if (puVar5 != (undefined8 *)0x0) {
            DestructItems<FMetasoundParameterStorageWrapper,int>
                      ((FMetasoundParameterStorageWrapper *)*puVar5,*(int *)(puVar5 + 1));
            if ((void *)*puVar5 != (void *)0x0) {
              FMemory::Free((void *)*puVar5);
            }
            ::operator_delete(puVar5,0x10);
          }
        }
      }
      else {
        TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)
                   param_1[1]._padding_,pTVar3);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014ae9823a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14ae98250

bool __thiscall
Metasound::
TCopyableDataChannel<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
IsEmpty(TCopyableDataChannel<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
        *this)

{
  return (this->AtomicData).Ptr ==
         (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)0x0;
}

// GetDataType @ 14ae98280

FName __thiscall
Metasound::
TCopyableDataChannel<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
GetDataType(TCopyableDataChannel<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
            *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                     ();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14ae98370

bool __thiscall
Metasound::
TCopyableDataChannel<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
PushLiteral(TCopyableDataChannel<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
            *this,FLiteral *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TUniquePtr<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 local_38;
  TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> local_30;
  
  bVar4 = TLiteralTraits<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
          IsParsable(param_1);
  if (!bVar4) {
    return false;
  }
  TDataLiteralFactory<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
  ::CreateExplicitArgs(&local_30,&this->OperatorSettings,param_1);
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar5 = (this->AtomicData).Ptr;
    pTVar1 = &this->AtomicData;
    if (pTVar5 == (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)0x0) {
      pTVar5 = ::operator_new(0x10);
      if (pTVar5 == (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)0x0) {
        pTVar5 = (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)0x0;
      }
      else {
        (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        pTVar5->ArrayNum = local_30.ArrayNum;
        if (local_30.ArrayNum == 0) {
          pTVar5->ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,local_30.ArrayNum,0,&pTVar5->AllocatorInstance,local_30.ArrayNum,
                     &pTVar5->ArrayMax);
          ConstructItems<FMetasoundParameterStorageWrapper,FMetasoundParameterStorageWrapper,int>
                    ((pTVar5->AllocatorInstance).Data,
                     (FMetasoundParameterStorageWrapper *)local_30.AllocatorInstance.Data,
                     local_30.ArrayNum);
        }
      }
      if (pTVar1 == (TUniquePtr<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
                     *)&local_38) {
        if (pTVar5 != (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)0x0)
        {
          DestructItems<FMetasoundParameterStorageWrapper,int>
                    ((FMetasoundParameterStorageWrapper *)(pTVar5->AllocatorInstance).Data,
                     pTVar5->ArrayNum);
          pFVar3 = (pTVar5->AllocatorInstance).Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          ::operator_delete(pTVar5,0x10);
        }
      }
      else {
        pTVar2 = pTVar1->Ptr;
        pTVar1->Ptr = pTVar5;
        if (pTVar2 != (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)0x0)
        {
          DestructItems<FMetasoundParameterStorageWrapper,int>
                    ((FMetasoundParameterStorageWrapper *)(pTVar2->AllocatorInstance).Data,
                     pTVar2->ArrayNum);
          pFVar3 = (pTVar2->AllocatorInstance).Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          ::operator_delete(pTVar2,0x10);
        }
      }
    }
    else {
      TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>::operator=
                (pTVar5,&local_30);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    DestructItems<FMetasoundParameterStorageWrapper,int>
              ((FMetasoundParameterStorageWrapper *)local_30.AllocatorInstance.Data,
               local_30.ArrayNum);
    if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.AllocatorInstance.Data);
    }
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ConstructNewReceiverImplementation @ 14ae98660

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::
TCopyableDataChannel<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
ConstructNewReceiverImplementation
          (TCopyableDataChannel<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           *this,FReceiverInitParams *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IDataChannel *pIVar2;
  FName FVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  TSharedRef<Metasound::IDataChannel,1> *pTVar6;
  FName *pFVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *in_R8;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  puVar8 = (undefined8 *)0x0;
  puVar5 = ::operator_new(0x40);
  puVar9 = puVar8;
  if (puVar5 != (undefined8 *)0x0) {
    pTVar6 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
    pIVar2 = pTVar6->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      pFVar7 = GetMetasoundDataTypeName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                         ();
      FVar3 = *pFVar7;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      *(FName *)(puVar5 + 1) = FVar3;
      puVar5[2] = pIVar2;
      puVar5[3] = 0;
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      pFVar7 = GetMetasoundDataTypeName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                         ();
      FVar3 = *pFVar7;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      *(FName *)(puVar5 + 1) = FVar3;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      puVar5[2] = pIVar2;
      puVar5[3] = pTVar1;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar5[4] = 0xffffffffffffffff;
    *puVar5 = &
              ___7__TReceiver_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    puVar5[5] = 0;
    uVar4 = in_R8[1];
    puVar5[6] = *in_R8;
    puVar5[7] = uVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar8 = puVar5;
    puVar9 = (undefined8 *)&DAT_00000001;
  }
  *(undefined8 **)&param_1->OperatorSettings = puVar8;
  if (puVar9 != (undefined8 *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_>)
         (IReceiver *)param_1;
}

// ConstructNewSenderImplementation @ 14ae98780

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::
TCopyableDataChannel<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
ConstructNewSenderImplementation
          (TCopyableDataChannel<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           *this,FSenderInitParams *param_1)

{
  TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *pTVar2;
  TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *)0x0;
  this_00 = ::operator_new(0x70);
  pTVar3 = pTVar2;
  if (this_00 !=
      (TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *)0x0) {
    pTVar1 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    local_38.Object = pTVar1->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (pTVar1->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
             TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                       (this_00,in_R8,&local_38);
    pTVar3 = (TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *)
             &DAT_00000001;
  }
  *(TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> **)
   &param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *)
                0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14aea38c0

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::FSendAddress>::GetPayloadID
          (TCopyableDataChannel<Metasound::FSendAddress> *this)

{
  return this->PayloadID;
}

// CreateNewPayloadID @ 14aea3960

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::FSendAddress>::CreateNewPayloadID
          (TCopyableDataChannel<Metasound::FSendAddress> *this)

{
  atomic<__int64> *paVar1;
  atomic<__int64> aVar2;
  
  LOCK();
  paVar1 = &this->PayloadIDCounter;
  aVar2 = *paVar1;
  *paVar1 = (atomic<__int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  return (long64)aVar2;
}

// PushOpaque @ 14aea3990

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::FSendAddress>::PushOpaque
          (TCopyableDataChannel<Metasound::FSendAddress> *this,ISender *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  IDataChannel *pIVar1;
  ulong64 uVar2;
  FSendAddress *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined1 uVar10;
  FName *pFVar11;
  long64 lVar12;
  FSendAddress *pFVar13;
  TUniquePtr<Metasound::FSendAddress,TDefaultDelete<Metasound::FSendAddress>_> *pTVar14;
  FName local_res8;
  longlong local_38;
  ISender *local_30;
  FName *local_28;
  
  pFVar11 = GetMetasoundDataTypeName<Metasound::FSendAddress>();
  local_res8 = *pFVar11;
  if ((FName)param_1->_padding_ != local_res8) {
    local_28 = &local_res8;
    local_30 = param_1;
    bVar9 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<Metasound::FSendAddress>_>'::__l2::<lambda_1>::operator()
                      (&local_30);
    if (!bVar9) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("CheckType<TSenderImplementation>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                         ,0xd5,L"");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lVar12 = (**(code **)(param_1->_padding_ + 8))(param_1);
    this->PayloadID = lVar12;
    pTVar14 = &this->AtomicData;
    pIVar1 = param_1[2].DataChannel.Object;
    if (pTVar14->Ptr == (FSendAddress *)0x0) {
      if (pIVar1 == (IDataChannel *)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
      }
      pIVar1 = param_1[2].DataChannel.Object;
      uVar5 = *(undefined4 *)&pIVar1->_padding_;
      uVar6 = *(undefined4 *)((longlong)&pIVar1->_padding_ + 4);
      uVar7 = *(undefined4 *)&pIVar1->_padding_;
      uVar8 = *(undefined4 *)((longlong)&pIVar1->_padding_ + 4);
      uVar2 = pIVar1->_padding_;
      pFVar13 = ::operator_new(0x20);
      if (pFVar13 == (FSendAddress *)0x0) {
        pFVar13 = (FSendAddress *)0x0;
      }
      else {
        (pFVar13->ChannelName).ComparisonIndex = (FNameEntryId)uVar5;
        (pFVar13->ChannelName).Number = uVar6;
        pFVar13->_padding_ = (longlong)&___7FSendAddress_Metasound__6B_;
        (pFVar13->DataType).ComparisonIndex = (FNameEntryId)uVar7;
        (pFVar13->DataType).Number = uVar8;
        pFVar13->InstanceID = uVar2;
      }
      if (pTVar14 ==
          (TUniquePtr<Metasound::FSendAddress,TDefaultDelete<Metasound::FSendAddress>_> *)&local_38)
      {
        if (pFVar13 != (FSendAddress *)0x0) {
          (**(code **)pFVar13->_padding_)(pFVar13,1);
        }
      }
      else {
        pFVar3 = pTVar14->Ptr;
        pTVar14->Ptr = pFVar13;
        if (pFVar3 != (FSendAddress *)0x0) {
          (**(code **)pFVar3->_padding_)(pFVar3,1);
        }
      }
    }
    else {
      if (pIVar1 == (IDataChannel *)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
      }
      pIVar1 = param_1[2].DataChannel.Object;
      pFVar13 = pTVar14->Ptr;
      uVar6 = *(undefined4 *)&pIVar1->_padding_;
      uVar7 = *(undefined4 *)((longlong)&pIVar1->_padding_ + 4);
      uVar2 = pIVar1->_padding_;
      uVar5 = *(undefined4 *)((longlong)&pIVar1->_padding_ + 4);
      (pFVar13->ChannelName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&pIVar1->_padding_;
      (pFVar13->ChannelName).Number = uVar5;
      (pFVar13->DataType).ComparisonIndex = (FNameEntryId)uVar6;
      (pFVar13->DataType).Number = uVar7;
      pFVar13->InstanceID = uVar2;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// PopOpaque @ 14aea3bc0

void __thiscall
Metasound::TCopyableDataChannel<Metasound::FSendAddress>::PopOpaque
          (TCopyableDataChannel<Metasound::FSendAddress> *this,IReceiver *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FSendAddress *pFVar1;
  longlong lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  FName local_res8;
  longlong local_28;
  IReceiver *local_20;
  FName *local_18;
  
  pFVar6 = GetMetasoundDataTypeName<Metasound::FSendAddress>();
  local_res8 = *pFVar6;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<Metasound::FSendAddress>_>'::__l2::<lambda_1>::operator()
                      (&local_20);
    if (!bVar5) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CheckType<TSenderImplementation>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                         ,0xd5,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = (this->AtomicData).Ptr;
    if ((pFVar1 != (FSendAddress *)0x0) && (this->PayloadID != param_1[1]._padding_)) {
      lVar2 = param_1[1]._padding_;
      param_1[1]._padding_ = this->PayloadID;
      plVar8 = &param_1[1]._padding_;
      if (lVar2 == 0) {
        puVar7 = ::operator_new(0x20);
        if (puVar7 == (undefined8 *)0x0) {
          puVar7 = (undefined8 *)0x0;
        }
        else {
          *puVar7 = &___7FSendAddress_Metasound__6B_;
          *(FName *)(puVar7 + 1) = pFVar1->ChannelName;
          *(FName *)(puVar7 + 2) = pFVar1->DataType;
          puVar7[3] = pFVar1->InstanceID;
        }
        if (plVar8 == &local_28) {
          if (puVar7 != (undefined8 *)0x0) {
            (**(code **)*puVar7)(puVar7,1);
          }
        }
        else {
          puVar3 = (undefined8 *)*plVar8;
          *plVar8 = (longlong)puVar7;
          if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,1);
          }
        }
      }
      else {
        *(FName *)(lVar2 + 8) = pFVar1->ChannelName;
        *(FName *)(lVar2 + 0x10) = pFVar1->DataType;
        *(ulong64 *)(lVar2 + 0x18) = pFVar1->InstanceID;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014aea3d0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14aea3d60

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::FSendAddress>::IsEmpty
          (TCopyableDataChannel<Metasound::FSendAddress> *this)

{
  return (this->AtomicData).Ptr == (FSendAddress *)0x0;
}

// GetDataType @ 14aea3da0

FName __thiscall
Metasound::TCopyableDataChannel<Metasound::FSendAddress>::GetDataType
          (TCopyableDataChannel<Metasound::FSendAddress> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::FSendAddress>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14aea3dd0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::FSendAddress>::PushLiteral
          (TCopyableDataChannel<Metasound::FSendAddress> *this,FLiteral *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FSendAddress *pFVar1;
  bool bVar2;
  FSendAddress *pFVar3;
  TUniquePtr<Metasound::FSendAddress,TDefaultDelete<Metasound::FSendAddress>_> *pTVar4;
  longlong local_38;
  FSendAddress local_30;
  
  bVar2 = TLiteralTraits<Metasound::FSendAddress>::IsParsable(param_1);
  if (!bVar2) {
    return false;
  }
  TDataLiteralFactory<Metasound::FSendAddress,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FSendAddress>_>
  ::CreateExplicitArgs(&local_30,&this->OperatorSettings,param_1);
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar3 = (this->AtomicData).Ptr;
    pTVar4 = &this->AtomicData;
    if (pFVar3 == (FSendAddress *)0x0) {
      pFVar3 = ::operator_new(0x20);
      if (pFVar3 == (FSendAddress *)0x0) {
        pFVar3 = (FSendAddress *)0x0;
      }
      else {
        pFVar3->_padding_ = (longlong)&___7FSendAddress_Metasound__6B_;
        pFVar3->ChannelName = local_30.ChannelName;
        pFVar3->DataType = local_30.DataType;
        pFVar3->InstanceID = local_30.InstanceID;
      }
      if (pTVar4 == (TUniquePtr<Metasound::FSendAddress,TDefaultDelete<Metasound::FSendAddress>_> *)
                    &local_38) {
        if (pFVar3 != (FSendAddress *)0x0) {
          (**(code **)pFVar3->_padding_)(pFVar3,1);
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          return true;
        }
      }
      else {
        pFVar1 = pTVar4->Ptr;
        pTVar4->Ptr = pFVar3;
        if (pFVar1 != (FSendAddress *)0x0) {
          (**(code **)pFVar1->_padding_)(pFVar1,1);
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          return true;
        }
      }
    }
    else {
      pFVar3->ChannelName = local_30.ChannelName;
      pFVar3->DataType = local_30.DataType;
      pFVar3->InstanceID = local_30.InstanceID;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ConstructNewReceiverImplementation @ 14aea3f10

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::FSendAddress>::ConstructNewReceiverImplementation
          (TCopyableDataChannel<Metasound::FSendAddress> *this,FReceiverInitParams *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IDataChannel *pIVar2;
  FName FVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  TSharedRef<Metasound::IDataChannel,1> *pTVar6;
  FName *pFVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *in_R8;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  puVar8 = (undefined8 *)0x0;
  puVar5 = ::operator_new(0x40);
  puVar9 = puVar8;
  if (puVar5 != (undefined8 *)0x0) {
    pTVar6 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
    pIVar2 = pTVar6->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      pFVar7 = GetMetasoundDataTypeName<Metasound::FSendAddress>();
      FVar3 = *pFVar7;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      *(FName *)(puVar5 + 1) = FVar3;
      puVar5[2] = pIVar2;
      puVar5[3] = 0;
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      pFVar7 = GetMetasoundDataTypeName<Metasound::FSendAddress>();
      FVar3 = *pFVar7;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      *(FName *)(puVar5 + 1) = FVar3;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      puVar5[2] = pIVar2;
      puVar5[3] = pTVar1;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar5[4] = 0xffffffffffffffff;
    *puVar5 = &___7__TReceiver_VFSendAddress_Metasound___Metasound__6B_;
    puVar5[5] = 0;
    uVar4 = in_R8[1];
    puVar5[6] = *in_R8;
    puVar5[7] = uVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar8 = puVar5;
    puVar9 = (undefined8 *)&DAT_00000001;
  }
  *(undefined8 **)&param_1->OperatorSettings = puVar8;
  if (puVar9 != (undefined8 *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_>)
         (IReceiver *)param_1;
}

// ConstructNewSenderImplementation @ 14aea4030

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::FSendAddress>::ConstructNewSenderImplementation
          (TCopyableDataChannel<Metasound::FSendAddress> *this,FSenderInitParams *param_1)

{
  TSender<Metasound::FSendAddress> *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<Metasound::FSendAddress> *pTVar2;
  TSender<Metasound::FSendAddress> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<Metasound::FSendAddress> *)0x0;
  this_00 = ::operator_new(0x70);
  pTVar3 = pTVar2;
  if (this_00 != (TSender<Metasound::FSendAddress> *)0x0) {
    pTVar1 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    local_38.Object = pTVar1->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (pTVar1->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = TSender<Metasound::FSendAddress>::TSender<Metasound::FSendAddress>
                       (this_00,in_R8,&local_38);
    pTVar3 = (TSender<Metasound::FSendAddress> *)&DAT_00000001;
  }
  *(TSender<Metasound::FSendAddress> **)&param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<Metasound::FSendAddress> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14aeaa290

long64 __thiscall
Metasound::TCopyableDataChannel<FString>::GetPayloadID(TCopyableDataChannel<FString> *this)

{
  return this->PayloadID;
}

// CreateNewPayloadID @ 14aeaa2a0

long64 __thiscall
Metasound::TCopyableDataChannel<FString>::CreateNewPayloadID(TCopyableDataChannel<FString> *this)

{
  atomic<__int64> *paVar1;
  atomic<__int64> aVar2;
  
  LOCK();
  paVar1 = &this->PayloadIDCounter;
  aVar2 = *paVar1;
  *paVar1 = (atomic<__int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  return (long64)aVar2;
}

// PushOpaque @ 14aeaa330

bool __thiscall
Metasound::TCopyableDataChannel<FString>::PushOpaque
          (TCopyableDataChannel<FString> *this,ISender *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  IDataChannel *pIVar2;
  FScriptContainerElement *pFVar3;
  FString *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 uVar8;
  FName *pFVar9;
  long64 lVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  TUniquePtr<FString,TDefaultDelete<FString>_> *pTVar14;
  FName local_res8;
  longlong local_58;
  ISender *local_50;
  FName *local_48;
  FString local_40;
  
  pFVar9 = GetMetasoundDataTypeName<FString>();
  local_res8 = *pFVar9;
  if ((FName)param_1->_padding_ != local_res8) {
    local_48 = &local_res8;
    local_50 = param_1;
    bVar7 = `Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<FString>_>'::__l2::
            <lambda_1>::operator()(&local_50);
    if ((!bVar7) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("CheckType<TSenderImplementation>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0xd5,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lVar10 = (**(code **)(param_1->_padding_ + 8))(param_1);
  this->PayloadID = lVar10;
  pTVar14 = &this->AtomicData;
  pIVar2 = param_1[2].DataChannel.Object;
  if (pTVar14->Ptr == (FString *)0x0) {
    if ((pIVar2 == (IDataChannel *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    pIVar2 = param_1[2].DataChannel.Object;
    pFVar13 = (FScriptContainerElement *)pIVar2->_padding_;
    pIVar2->_padding_ = 0;
    lVar6 = pIVar2->_padding_;
    iVar1 = *(int *)((longlong)&pIVar2->_padding_ + 4);
    pIVar2->_padding_ = 0;
    pFVar11 = ::operator_new(0x10);
    pFVar12 = (FScriptContainerElement *)0x0;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar11->field_0x0)->AllocatorInstance).Data
           = pFVar13;
      *(int *)&pFVar11[8].field_0x0 = (int)lVar6;
      *(int *)&pFVar11[0xc].field_0x0 = iVar1;
      pFVar12 = pFVar11;
      pFVar13 = (FScriptContainerElement *)0x0;
    }
    if (pTVar14 == (TUniquePtr<FString,TDefaultDelete<FString>_> *)&local_58) {
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        pFVar3 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar12->field_0x0)->
                 AllocatorInstance).Data;
        pFVar11 = pFVar12;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        goto LAB_14aeaa48d;
      }
    }
    else {
      pFVar11 = (FScriptContainerElement *)pTVar14->Ptr;
      pTVar14->Ptr = (FString *)pFVar12;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        pFVar12 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar11->field_0x0)->
                  AllocatorInstance).Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
LAB_14aeaa48d:
        ::operator_delete(pFVar11,0x10);
      }
    }
  }
  else {
    if ((pIVar2 == (IDataChannel *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    pIVar2 = param_1[2].DataChannel.Object;
    pFVar13 = (FScriptContainerElement *)pIVar2->_padding_;
    pIVar2->_padding_ = 0;
    lVar6 = pIVar2->_padding_;
    iVar1 = *(int *)((longlong)&pIVar2->_padding_ + 4);
    pIVar2->_padding_ = 0;
    pFVar4 = pTVar14->Ptr;
    if (pFVar4 != &local_40) {
      pFVar12 = (pFVar4->Data).AllocatorInstance.Data;
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar12);
      }
      (pFVar4->Data).AllocatorInstance.Data = pFVar13;
      (pFVar4->Data).ArrayNum = (int)lVar6;
      (pFVar4->Data).ArrayMax = iVar1;
      goto LAB_14aeaa4a4;
    }
  }
  if (pFVar13 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar13);
  }
LAB_14aeaa4a4:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return true;
}

// PopOpaque @ 14aeaa6e0

void __thiscall
Metasound::TCopyableDataChannel<FString>::PopOpaque
          (TCopyableDataChannel<FString> *this,IReceiver *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  FString *this_00;
  FString *pFVar7;
  FName local_res8;
  undefined8 local_38;
  IReceiver *local_30;
  FName *local_28;
  
  pFVar6 = GetMetasoundDataTypeName<FString>();
  local_res8 = *pFVar6;
  if ((FName)param_1->_padding_ != local_res8) {
    local_28 = &local_res8;
    local_30 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::CheckType<Metasound::TReceiver<FString>_>'::__l2::
            <lambda_1>::operator()(&local_30);
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CheckType<TSenderImplementation>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0xd5,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar7 = (this->AtomicData).Ptr;
  if ((pFVar7 != (FString *)0x0) && (this->PayloadID != param_1[1]._padding_)) {
    plVar1 = &param_1[1]._padding_;
    param_1[1]._padding_ = this->PayloadID;
    if ((FString *)param_1[1]._padding_ == (FString *)0x0) {
      this_00 = ::operator_new(0x10);
      if (this_00 == (FString *)0x0) {
        pFVar7 = (FString *)0x0;
      }
      else {
        pFVar7 = ::FString::FString(this_00,pFVar7);
      }
      if (plVar1 == &local_38) {
        if (pFVar7 != (FString *)0x0) {
          pFVar3 = (pFVar7->Data).AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          ::operator_delete(pFVar7,0x10);
        }
      }
      else {
        puVar2 = (undefined8 *)*plVar1;
        *plVar1 = (longlong)pFVar7;
        if (puVar2 != (undefined8 *)0x0) {
          if ((void *)*puVar2 != (void *)0x0) {
            FMemory::Free((void *)*puVar2);
          }
          ::operator_delete(puVar2,0x10);
        }
      }
    }
    else {
      ::FString::operator=((FString *)param_1[1]._padding_,pFVar7);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014aeaa81f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// IsEmpty @ 14aeaa840

bool __thiscall
Metasound::TCopyableDataChannel<FString>::IsEmpty(TCopyableDataChannel<FString> *this)

{
  return (this->AtomicData).Ptr == (FString *)0x0;
}

// GetDataType @ 14aeaa850

FName __thiscall
Metasound::TCopyableDataChannel<FString>::GetDataType(TCopyableDataChannel<FString> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<FString>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14aeaa910

bool __thiscall
Metasound::TCopyableDataChannel<FString>::PushLiteral
          (TCopyableDataChannel<FString> *this,FLiteral *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  int *piVar5;
  TUniquePtr<FString,TDefaultDelete<FString>_> *pTVar6;
  int iVar7;
  undefined8 local_28;
  FString local_20;
  
  bVar3 = TLiteralTraits<FString>::IsParsable(param_1);
  if (!bVar3) {
    return false;
  }
  TDataLiteralFactory<FString,Metasound::DataFactoryPrivate::TDataTypeCreator<FString>_>::
  CreateExplicitArgs(&local_20,&this->OperatorSettings,param_1);
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar4 = (this->AtomicData).Ptr;
    pTVar6 = &this->AtomicData;
    if (pFVar4 == (FString *)0x0) {
      pFVar4 = ::operator_new(0x10);
      _Src.Data = local_20.Data.AllocatorInstance.Data;
      if (pFVar4 == (FString *)0x0) {
        pFVar4 = (FString *)0x0;
      }
      else {
        (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar4->Data).ArrayNum = local_20.Data.ArrayNum;
        piVar5 = &(pFVar4->Data).ArrayMax;
        if (local_20.Data.ArrayNum == 0) {
          *piVar5 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_20.Data.ArrayNum,0,(ForAnyElementType *)pFVar4,local_20.Data.ArrayNum
                     ,piVar5);
          memcpy((pFVar4->Data).AllocatorInstance.Data,_Src.Data,
                 (longlong)local_20.Data.ArrayNum * 2);
        }
      }
      if (pTVar6 == (TUniquePtr<FString,TDefaultDelete<FString>_> *)&local_28) {
        if (pFVar4 != (FString *)0x0) {
          pFVar2 = (pFVar4->Data).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          ::operator_delete(pFVar4,0x10);
        }
      }
      else {
        pFVar1 = pTVar6->Ptr;
        pTVar6->Ptr = pFVar4;
        if (pFVar1 != (FString *)0x0) {
          pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          ::operator_delete(pFVar1,0x10);
        }
      }
    }
    else {
      iVar7 = local_20.Data.ArrayNum + -1;
      if (local_20.Data.ArrayNum == 0) {
        iVar7 = 0;
      }
      ::FString::AssignRange(pFVar4,(wchar_t *)local_20.Data.AllocatorInstance.Data,iVar7);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ConstructNewReceiverImplementation @ 14aeaad10

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<FString>::ConstructNewReceiverImplementation
          (TCopyableDataChannel<FString> *this,FReceiverInitParams *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IDataChannel *pIVar2;
  FName FVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  TSharedRef<Metasound::IDataChannel,1> *pTVar6;
  FName *pFVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *in_R8;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  puVar8 = (undefined8 *)0x0;
  puVar5 = ::operator_new(0x40);
  puVar9 = puVar8;
  if (puVar5 != (undefined8 *)0x0) {
    pTVar6 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
    pIVar2 = pTVar6->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      pFVar7 = GetMetasoundDataTypeName<FString>();
      FVar3 = *pFVar7;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      *(FName *)(puVar5 + 1) = FVar3;
      puVar5[2] = pIVar2;
      puVar5[3] = 0;
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      pFVar7 = GetMetasoundDataTypeName<FString>();
      FVar3 = *pFVar7;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      *(FName *)(puVar5 + 1) = FVar3;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      puVar5[2] = pIVar2;
      puVar5[3] = pTVar1;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar5[4] = 0xffffffffffffffff;
    *puVar5 = &___7__TReceiver_VFString___Metasound__6B_;
    puVar5[5] = 0;
    uVar4 = in_R8[1];
    puVar5[6] = *in_R8;
    puVar5[7] = uVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar8 = puVar5;
    puVar9 = (undefined8 *)&DAT_00000001;
  }
  *(undefined8 **)&param_1->OperatorSettings = puVar8;
  if (puVar9 != (undefined8 *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_>)
         (IReceiver *)param_1;
}

// ConstructNewSenderImplementation @ 14aeaaf60

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<FString>::ConstructNewSenderImplementation
          (TCopyableDataChannel<FString> *this,FSenderInitParams *param_1)

{
  TSender<FString> *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<FString> *pTVar2;
  TSender<FString> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<FString> *)0x0;
  this_00 = ::operator_new(0x70);
  pTVar3 = pTVar2;
  if (this_00 != (TSender<FString> *)0x0) {
    pTVar1 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    local_38.Object = pTVar1->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (pTVar1->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = TSender<FString>::TSender<FString>(this_00,in_R8,&local_38);
    pTVar3 = (TSender<FString> *)&DAT_00000001;
  }
  *(TSender<FString> **)&param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<FString> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14aeab470

long64 __thiscall
Metasound::TCopyableDataChannel<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetPayloadID
          (TCopyableDataChannel<TArray<FString,TSizedDefaultAllocator<32>_>_> *this)

{
  return this->PayloadID;
}

// CreateNewPayloadID @ 14aeab480

long64 __thiscall
Metasound::TCopyableDataChannel<TArray<FString,TSizedDefaultAllocator<32>_>_>::CreateNewPayloadID
          (TCopyableDataChannel<TArray<FString,TSizedDefaultAllocator<32>_>_> *this)

{
  atomic<__int64> *paVar1;
  atomic<__int64> aVar2;
  
  LOCK();
  paVar1 = &this->PayloadIDCounter;
  aVar2 = *paVar1;
  *paVar1 = (atomic<__int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  return (long64)aVar2;
}

// PushOpaque @ 14aeab590

bool __thiscall
Metasound::TCopyableDataChannel<TArray<FString,TSizedDefaultAllocator<32>_>_>::PushOpaque
          (TCopyableDataChannel<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,ISender *param_1
          )

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  IDataChannel *pIVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FName *pFVar7;
  long64 lVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar10;
  int iVar11;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar12;
  TUniquePtr<TArray<FString,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
  *pTVar13;
  FName local_res8;
  longlong local_58;
  ISender *local_50;
  FName *local_48;
  TArray<FString,TSizedDefaultAllocator<32>_> local_40;
  
  pFVar7 = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_48 = &local_res8;
    local_50 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>_>'::__l2::
            <lambda_1>::operator()(&local_50);
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CheckType<TSenderImplementation>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0xd5,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lVar8 = (**(code **)(param_1->_padding_ + 8))(param_1);
  this->PayloadID = lVar8;
  pTVar13 = &this->AtomicData;
  pIVar2 = param_1[2].DataChannel.Object;
  if (pTVar13->Ptr == (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    if ((pIVar2 == (IDataChannel *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pIVar2 = param_1[2].DataChannel.Object;
    pTVar12 = (TArray<FString,TSizedDefaultAllocator<32>_> *)pIVar2->_padding_;
    pIVar2->_padding_ = 0;
    iVar11 = (int)pIVar2->_padding_;
    iVar1 = *(int *)((longlong)&pIVar2->_padding_ + 4);
    pIVar2->_padding_ = 0;
    pTVar9 = ::operator_new(0x10);
    pTVar10 = (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0;
    if (pTVar9 != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
      (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)pTVar12;
      pTVar9->ArrayNum = iVar11;
      pTVar9->ArrayMax = iVar1;
      pTVar10 = pTVar9;
      pTVar12 = (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0;
      iVar11 = 0;
    }
    if (pTVar13 ==
        (TUniquePtr<TArray<FString,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
         *)&local_58) {
      if (pTVar10 != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
        DestructItems<FString,int>((FString *)(pTVar10->AllocatorInstance).Data,pTVar10->ArrayNum);
        pFVar3 = (pTVar10->AllocatorInstance).Data;
        pTVar9 = pTVar10;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        goto LAB_14aeab704;
      }
    }
    else {
      pTVar9 = pTVar13->Ptr;
      pTVar13->Ptr = pTVar10;
      if (pTVar9 != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
        DestructItems<FString,int>((FString *)(pTVar9->AllocatorInstance).Data,pTVar9->ArrayNum);
        pFVar3 = (pTVar9->AllocatorInstance).Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
LAB_14aeab704:
        ::operator_delete(pTVar9,0x10);
      }
    }
  }
  else {
    if ((pIVar2 == (IDataChannel *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pIVar2 = param_1[2].DataChannel.Object;
    pTVar12 = (TArray<FString,TSizedDefaultAllocator<32>_> *)pIVar2->_padding_;
    pIVar2->_padding_ = 0;
    iVar11 = (int)pIVar2->_padding_;
    iVar1 = *(int *)((longlong)&pIVar2->_padding_ + 4);
    pIVar2->_padding_ = 0;
    pTVar10 = pTVar13->Ptr;
    if (pTVar10 != &local_40) {
      DestructItems<FString,int>((FString *)(pTVar10->AllocatorInstance).Data,pTVar10->ArrayNum);
      pFVar3 = (pTVar10->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)pTVar12;
      pTVar10->ArrayNum = iVar11;
      pTVar10->ArrayMax = iVar1;
      DestructItems<FString,int>((FString *)0x0,0);
      goto LAB_14aeab725;
    }
  }
  DestructItems<FString,int>((FString *)pTVar12,iVar11);
  if (pTVar12 != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(pTVar12);
  }
LAB_14aeab725:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return true;
}

// PopOpaque @ 14aeab880

void __thiscall
Metasound::TCopyableDataChannel<TArray<FString,TSizedDefaultAllocator<32>_>_>::PopOpaque
          (TCopyableDataChannel<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          IReceiver *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  int iVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  FName *pFVar8;
  ForAnyElementType *pFVar9;
  int *piVar10;
  FName local_res8;
  undefined8 local_38;
  IReceiver *local_30;
  FName *local_28;
  
  pFVar8 = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
  local_res8 = *pFVar8;
  if ((FName)param_1->_padding_ != local_res8) {
    local_28 = &local_res8;
    local_30 = param_1;
    bVar7 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<TArray<FString,TSizedDefaultAllocator<32>_>_>_>'::__l2::
            <lambda_1>::operator()(&local_30);
    if (!bVar7) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CheckType<TSenderImplementation>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                         ,0xd5,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar3 = (this->AtomicData).Ptr;
    if ((pTVar3 != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) &&
       (this->PayloadID != param_1[1]._padding_)) {
      plVar1 = &param_1[1]._padding_;
      param_1[1]._padding_ = this->PayloadID;
      if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_1[1]._padding_ ==
          (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar9 = ::operator_new(0x10);
        if (pFVar9 == (ForAnyElementType *)0x0) {
          pFVar9 = (ForAnyElementType *)0x0;
        }
        else {
          pFVar9->Data = (FScriptContainerElement *)0x0;
          iVar2 = pTVar3->ArrayNum;
          pFVar4 = (pTVar3->AllocatorInstance).Data;
          *(int *)&pFVar9[1].Data = iVar2;
          piVar10 = (int *)((longlong)&pFVar9[1].Data + 4);
          if (iVar2 == 0) {
            *piVar10 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar2,0,pFVar9,iVar2,piVar10);
            ConstructItems<FString,FString,int>(pFVar9->Data,(FString *)pFVar4,iVar2);
          }
        }
        if (plVar1 == &local_38) {
          if (pFVar9 != (ForAnyElementType *)0x0) {
            DestructItems<FString,int>((FString *)pFVar9->Data,*(int *)&pFVar9[1].Data);
            if (pFVar9->Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar9->Data);
            }
            ::operator_delete(pFVar9,0x10);
          }
        }
        else {
          puVar5 = (undefined8 *)*plVar1;
          *plVar1 = (longlong)pFVar9;
          if (puVar5 != (undefined8 *)0x0) {
            DestructItems<FString,int>((FString *)*puVar5,*(int *)(puVar5 + 1));
            if ((void *)*puVar5 != (void *)0x0) {
              FMemory::Free((void *)*puVar5);
            }
            ::operator_delete(puVar5,0x10);
          }
        }
      }
      else {
        TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_1[1]._padding_,pTVar3);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014aeaba3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14aeabae0

bool __thiscall
Metasound::TCopyableDataChannel<TArray<FString,TSizedDefaultAllocator<32>_>_>::IsEmpty
          (TCopyableDataChannel<TArray<FString,TSizedDefaultAllocator<32>_>_> *this)

{
  return (this->AtomicData).Ptr == (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0;
}

// GetDataType @ 14aeabaf0

FName __thiscall
Metasound::TCopyableDataChannel<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetDataType
          (TCopyableDataChannel<TArray<FString,TSizedDefaultAllocator<32>_>_> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14aeabc10

bool __thiscall
Metasound::TCopyableDataChannel<TArray<FString,TSizedDefaultAllocator<32>_>_>::PushLiteral
          (TCopyableDataChannel<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          FLiteral *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TUniquePtr<TArray<FString,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 local_38;
  TArray<FString,TSizedDefaultAllocator<32>_> local_30;
  
  bVar4 = TLiteralTraits<TArray<FString,TSizedDefaultAllocator<32>_>_>::IsParsable(param_1);
  if (!bVar4) {
    return false;
  }
  TDataLiteralFactory<TArray<FString,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
  ::CreateExplicitArgs(&local_30,&this->OperatorSettings,param_1);
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar5 = (this->AtomicData).Ptr;
    pTVar1 = &this->AtomicData;
    if (pTVar5 == (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
      pTVar5 = ::operator_new(0x10);
      if (pTVar5 == (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
        pTVar5 = (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0;
      }
      else {
        (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        pTVar5->ArrayNum = local_30.ArrayNum;
        if (local_30.ArrayNum == 0) {
          pTVar5->ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,local_30.ArrayNum,0,&pTVar5->AllocatorInstance,local_30.ArrayNum,
                     &pTVar5->ArrayMax);
          ConstructItems<FString,FString,int>
                    ((pTVar5->AllocatorInstance).Data,(FString *)local_30.AllocatorInstance.Data,
                     local_30.ArrayNum);
        }
      }
      if (pTVar1 == (TUniquePtr<TArray<FString,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
                     *)&local_38) {
        if (pTVar5 != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
          DestructItems<FString,int>((FString *)(pTVar5->AllocatorInstance).Data,pTVar5->ArrayNum);
          pFVar3 = (pTVar5->AllocatorInstance).Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          ::operator_delete(pTVar5,0x10);
        }
      }
      else {
        pTVar2 = pTVar1->Ptr;
        pTVar1->Ptr = pTVar5;
        if (pTVar2 != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
          DestructItems<FString,int>((FString *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
          pFVar3 = (pTVar2->AllocatorInstance).Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          ::operator_delete(pTVar2,0x10);
        }
      }
    }
    else {
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=(pTVar5,&local_30);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    DestructItems<FString,int>((FString *)local_30.AllocatorInstance.Data,local_30.ArrayNum);
    if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.AllocatorInstance.Data);
    }
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ConstructNewReceiverImplementation @ 14aeabe50

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<TArray<FString,TSizedDefaultAllocator<32>_>_>::
ConstructNewReceiverImplementation
          (TCopyableDataChannel<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          FReceiverInitParams *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IDataChannel *pIVar2;
  FName FVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  TSharedRef<Metasound::IDataChannel,1> *pTVar6;
  FName *pFVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *in_R8;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  puVar8 = (undefined8 *)0x0;
  puVar5 = ::operator_new(0x40);
  puVar9 = puVar8;
  if (puVar5 != (undefined8 *)0x0) {
    pTVar6 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
    pIVar2 = pTVar6->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      pFVar7 = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
      FVar3 = *pFVar7;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      *(FName *)(puVar5 + 1) = FVar3;
      puVar5[2] = pIVar2;
      puVar5[3] = 0;
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      pFVar7 = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
      FVar3 = *pFVar7;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      *(FName *)(puVar5 + 1) = FVar3;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      puVar5[2] = pIVar2;
      puVar5[3] = pTVar1;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar5[4] = 0xffffffffffffffff;
    *puVar5 = &
              ___7__TReceiver_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    puVar5[5] = 0;
    uVar4 = in_R8[1];
    puVar5[6] = *in_R8;
    puVar5[7] = uVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar8 = puVar5;
    puVar9 = (undefined8 *)&DAT_00000001;
  }
  *(undefined8 **)&param_1->OperatorSettings = puVar8;
  if (puVar9 != (undefined8 *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_>)
         (IReceiver *)param_1;
}

// ConstructNewSenderImplementation @ 14aeac060

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<TArray<FString,TSizedDefaultAllocator<32>_>_>::
ConstructNewSenderImplementation
          (TCopyableDataChannel<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          FSenderInitParams *param_1)

{
  TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar2;
  TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0;
  this_00 = ::operator_new(0x70);
  pTVar3 = pTVar2;
  if (this_00 != (TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0) {
    pTVar1 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    local_38.Object = pTVar1->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (pTVar1->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>::
             TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>(this_00,in_R8,&local_38);
    pTVar3 = (TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *)&DAT_00000001;
  }
  *(TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> **)&param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14aeb3c70

long64 __thiscall
Metasound::TCopyableDataChannel<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetPayloadID
          (TCopyableDataChannel<TArray<bool,TSizedDefaultAllocator<32>_>_> *this)

{
  return this->PayloadID;
}

// CreateNewPayloadID @ 14aeb3cf0

long64 __thiscall
Metasound::TCopyableDataChannel<TArray<bool,TSizedDefaultAllocator<32>_>_>::CreateNewPayloadID
          (TCopyableDataChannel<TArray<bool,TSizedDefaultAllocator<32>_>_> *this)

{
  atomic<__int64> *paVar1;
  atomic<__int64> aVar2;
  
  LOCK();
  paVar1 = &this->PayloadIDCounter;
  aVar2 = *paVar1;
  *paVar1 = (atomic<__int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  return (long64)aVar2;
}

// PushOpaque @ 14aeb3d10

bool __thiscall
Metasound::TCopyableDataChannel<TArray<bool,TSizedDefaultAllocator<32>_>_>::PushOpaque
          (TCopyableDataChannel<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,ISender *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  IDataChannel *pIVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 uVar7;
  FName *pFVar8;
  long64 lVar9;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar12;
  TUniquePtr<TArray<bool,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
  *pTVar13;
  FName local_res8;
  longlong local_58;
  ISender *local_50;
  FName *local_48;
  TArray<bool,TSizedDefaultAllocator<32>_> local_40;
  
  pFVar8 = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
  local_res8 = *pFVar8;
  if ((FName)param_1->_padding_ != local_res8) {
    local_48 = &local_res8;
    local_50 = param_1;
    bVar6 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>_>'::__l2::
            <lambda_1>::operator()(&local_50);
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CheckType<TSenderImplementation>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0xd5,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lVar9 = (**(code **)(param_1->_padding_ + 8))(param_1);
  this->PayloadID = lVar9;
  pTVar13 = &this->AtomicData;
  pIVar2 = param_1[2].DataChannel.Object;
  if (pTVar13->Ptr == (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) {
    if ((pIVar2 == (IDataChannel *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    pIVar2 = param_1[2].DataChannel.Object;
    pTVar12 = (TArray<bool,TSizedDefaultAllocator<32>_> *)pIVar2->_padding_;
    pIVar2->_padding_ = 0;
    lVar5 = pIVar2->_padding_;
    iVar1 = *(int *)((longlong)&pIVar2->_padding_ + 4);
    pIVar2->_padding_ = 0;
    pTVar10 = ::operator_new(0x10);
    pTVar11 = (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0;
    if (pTVar10 != (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) {
      (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)pTVar12;
      pTVar10->ArrayNum = (int)lVar5;
      pTVar10->ArrayMax = iVar1;
      pTVar11 = pTVar10;
      pTVar12 = (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0;
    }
    if (pTVar13 ==
        (TUniquePtr<TArray<bool,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
         *)&local_58) {
      if (pTVar11 == (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) goto joined_r0x00014aeb3eef;
      pFVar3 = (pTVar11->AllocatorInstance).Data;
      pTVar10 = pTVar11;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
    }
    else {
      pTVar10 = pTVar13->Ptr;
      pTVar13->Ptr = pTVar11;
      if (pTVar10 == (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) goto joined_r0x00014aeb3eef;
      pFVar3 = (pTVar10->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
    }
    ::operator_delete(pTVar10,0x10);
  }
  else {
    if ((pIVar2 == (IDataChannel *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    pIVar2 = param_1[2].DataChannel.Object;
    pTVar12 = (TArray<bool,TSizedDefaultAllocator<32>_> *)pIVar2->_padding_;
    pIVar2->_padding_ = 0;
    lVar5 = pIVar2->_padding_;
    iVar1 = *(int *)((longlong)&pIVar2->_padding_ + 4);
    pIVar2->_padding_ = 0;
    pTVar11 = pTVar13->Ptr;
    if (pTVar11 != &local_40) {
      pFVar3 = (pTVar11->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)pTVar12;
      pTVar11->ArrayNum = (int)lVar5;
      pTVar11->ArrayMax = iVar1;
      pTVar12 = (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0;
    }
  }
joined_r0x00014aeb3eef:
  if (pTVar12 != (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(pTVar12);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return true;
}

// PopOpaque @ 14aeb3fb0

void __thiscall
Metasound::TCopyableDataChannel<TArray<bool,TSizedDefaultAllocator<32>_>_>::PopOpaque
          (TCopyableDataChannel<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,IReceiver *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  int iVar2;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *_Src;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  FName *pFVar7;
  ForAnyElementType *pFVar8;
  int *piVar9;
  FName local_res8;
  undefined8 local_38;
  IReceiver *local_30;
  FName *local_28;
  
  pFVar7 = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_28 = &local_res8;
    local_30 = param_1;
    bVar6 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<TArray<bool,TSizedDefaultAllocator<32>_>_>_>'::__l2::
            <lambda_1>::operator()(&local_30);
    if (!bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CheckType<TSenderImplementation>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                         ,0xd5,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar3 = (this->AtomicData).Ptr;
    if ((pTVar3 != (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) &&
       (this->PayloadID != param_1[1]._padding_)) {
      plVar1 = &param_1[1]._padding_;
      param_1[1]._padding_ = this->PayloadID;
      if ((TArray<bool,TSizedDefaultAllocator<32>_> *)param_1[1]._padding_ ==
          (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar8 = ::operator_new(0x10);
        if (pFVar8 == (ForAnyElementType *)0x0) {
          pFVar8 = (ForAnyElementType *)0x0;
        }
        else {
          pFVar8->Data = (FScriptContainerElement *)0x0;
          iVar2 = pTVar3->ArrayNum;
          _Src = (pTVar3->AllocatorInstance).Data;
          *(int *)&pFVar8[1].Data = iVar2;
          piVar9 = (int *)((longlong)&pFVar8[1].Data + 4);
          if (iVar2 == 0) {
            *piVar9 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar2,0,pFVar8,iVar2,piVar9);
            memcpy(pFVar8->Data,_Src,(longlong)iVar2);
          }
        }
        if (plVar1 == &local_38) {
          if (pFVar8 != (ForAnyElementType *)0x0) {
            if (pFVar8->Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar8->Data);
            }
            ::operator_delete(pFVar8,0x10);
          }
        }
        else {
          puVar4 = (undefined8 *)*plVar1;
          *plVar1 = (longlong)pFVar8;
          if (puVar4 != (undefined8 *)0x0) {
            if ((void *)*puVar4 != (void *)0x0) {
              FMemory::Free((void *)*puVar4);
            }
            ::operator_delete(puVar4,0x10);
          }
        }
      }
      else {
        TArray<bool,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<bool,TSizedDefaultAllocator<32>_> *)param_1[1]._padding_,pTVar3);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014aeb4151. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14aeb4170

bool __thiscall
Metasound::TCopyableDataChannel<TArray<bool,TSizedDefaultAllocator<32>_>_>::IsEmpty
          (TCopyableDataChannel<TArray<bool,TSizedDefaultAllocator<32>_>_> *this)

{
  return (this->AtomicData).Ptr == (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0;
}

// GetDataType @ 14aeb4210

FName __thiscall
Metasound::TCopyableDataChannel<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetDataType
          (TCopyableDataChannel<TArray<bool,TSizedDefaultAllocator<32>_>_> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14aeb4240

bool __thiscall
Metasound::TCopyableDataChannel<TArray<bool,TSizedDefaultAllocator<32>_>_>::PushLiteral
          (TCopyableDataChannel<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,FLiteral *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar5;
  TUniquePtr<TArray<bool,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
  *pTVar6;
  undefined8 local_28;
  TArray<bool,TSizedDefaultAllocator<32>_> local_20;
  
  bVar4 = TLiteralTraits<TArray<bool,TSizedDefaultAllocator<32>_>_>::IsParsable(param_1);
  if (!bVar4) {
    return false;
  }
  TDataLiteralFactory<TArray<bool,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
  ::CreateExplicitArgs(&local_20,&this->OperatorSettings,param_1);
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar5 = (this->AtomicData).Ptr;
    pTVar6 = &this->AtomicData;
    if (pTVar5 == (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) {
      pTVar5 = ::operator_new(0x10);
      if (pTVar5 == (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) {
        pTVar5 = (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0;
      }
      else {
        (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        pTVar5->ArrayNum = local_20.ArrayNum;
        if (local_20.ArrayNum == 0) {
          pTVar5->ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,local_20.ArrayNum,0,&pTVar5->AllocatorInstance,local_20.ArrayNum,
                     &pTVar5->ArrayMax);
          memcpy((pTVar5->AllocatorInstance).Data,local_20.AllocatorInstance.Data,
                 (longlong)local_20.ArrayNum);
        }
      }
      if (pTVar6 == (TUniquePtr<TArray<bool,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
                     *)&local_28) {
        if (pTVar5 != (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) {
          pFVar3 = (pTVar5->AllocatorInstance).Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          ::operator_delete(pTVar5,0x10);
        }
      }
      else {
        pTVar2 = pTVar6->Ptr;
        pTVar6->Ptr = pTVar5;
        if (pTVar2 != (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) {
          pFVar3 = (pTVar2->AllocatorInstance).Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          ::operator_delete(pTVar2,0x10);
        }
      }
    }
    else if (pTVar5 != &local_20) {
      piVar1 = &pTVar5->ArrayMax;
      pTVar5->ArrayNum = local_20.ArrayNum;
      if ((local_20.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_20.ArrayNum,*piVar1,&pTVar5->AllocatorInstance,local_20.ArrayNum,piVar1
                  );
        if (local_20.ArrayNum != 0) {
          memcpy((pTVar5->AllocatorInstance).Data,local_20.AllocatorInstance.Data,
                 (longlong)local_20.ArrayNum);
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.AllocatorInstance.Data);
    }
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ConstructNewReceiverImplementation @ 14aeb4480

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<TArray<bool,TSizedDefaultAllocator<32>_>_>::
ConstructNewReceiverImplementation
          (TCopyableDataChannel<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          FReceiverInitParams *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IDataChannel *pIVar2;
  FName FVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  TSharedRef<Metasound::IDataChannel,1> *pTVar6;
  FName *pFVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *in_R8;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  puVar8 = (undefined8 *)0x0;
  puVar5 = ::operator_new(0x40);
  puVar9 = puVar8;
  if (puVar5 != (undefined8 *)0x0) {
    pTVar6 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
    pIVar2 = pTVar6->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      pFVar7 = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
      FVar3 = *pFVar7;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      *(FName *)(puVar5 + 1) = FVar3;
      puVar5[2] = pIVar2;
      puVar5[3] = 0;
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      pFVar7 = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
      FVar3 = *pFVar7;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      *(FName *)(puVar5 + 1) = FVar3;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      puVar5[2] = pIVar2;
      puVar5[3] = pTVar1;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar5[4] = 0xffffffffffffffff;
    *puVar5 = &___7__TReceiver_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    puVar5[5] = 0;
    uVar4 = in_R8[1];
    puVar5[6] = *in_R8;
    puVar5[7] = uVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar8 = puVar5;
    puVar9 = (undefined8 *)&DAT_00000001;
  }
  *(undefined8 **)&param_1->OperatorSettings = puVar8;
  if (puVar9 != (undefined8 *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_>)
         (IReceiver *)param_1;
}

// ConstructNewSenderImplementation @ 14aeb45d0

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<TArray<bool,TSizedDefaultAllocator<32>_>_>::
ConstructNewSenderImplementation
          (TCopyableDataChannel<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          FSenderInitParams *param_1)

{
  TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar2;
  TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *)0x0;
  this_00 = ::operator_new(0x70);
  pTVar3 = pTVar2;
  if (this_00 != (TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *)0x0) {
    pTVar1 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    local_38.Object = pTVar1->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (pTVar1->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>::
             TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>(this_00,in_R8,&local_38);
    pTVar3 = (TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *)&DAT_00000001;
  }
  *(TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> **)&param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14aeb9450

long64 __thiscall
Metasound::TCopyableDataChannel<int>::GetPayloadID(TCopyableDataChannel<int> *this)

{
  return this->PayloadID;
}

// CreateNewPayloadID @ 14aeb9610

long64 __thiscall
Metasound::TCopyableDataChannel<int>::CreateNewPayloadID(TCopyableDataChannel<int> *this)

{
  atomic<__int64> *paVar1;
  atomic<__int64> aVar2;
  
  LOCK();
  paVar1 = &this->PayloadIDCounter;
  aVar2 = *paVar1;
  *paVar1 = (atomic<__int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  return (long64)aVar2;
}

// PushOpaque @ 14aeb9810

bool __thiscall
Metasound::TCopyableDataChannel<int>::PushOpaque(TCopyableDataChannel<int> *this,ISender *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  IDataChannel *pIVar1;
  int *piVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  FName *pFVar7;
  long64 lVar8;
  int *piVar9;
  TUniquePtr<int,TDefaultDelete<int>_> *pTVar10;
  FName local_res8;
  longlong local_28;
  ISender *local_20;
  FName *local_18;
  
  pFVar7 = GetMetasoundDataTypeName<int>();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<int>_>'::__l2::
            <lambda_1>::operator()(&local_20);
    if (!bVar5) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CheckType<TSenderImplementation>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                         ,0xd5,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lVar8 = (**(code **)(param_1->_padding_ + 8))(param_1);
    this->PayloadID = lVar8;
    pTVar10 = &this->AtomicData;
    pIVar1 = param_1[2].DataChannel.Object;
    if (pTVar10->Ptr == (int *)0x0) {
      if (pIVar1 == (IDataChannel *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      lVar4 = (param_1[2].DataChannel.Object)->_padding_;
      piVar9 = ::operator_new(4);
      if (piVar9 == (int *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        *piVar9 = (int)lVar4;
      }
      if (pTVar10 != (TUniquePtr<int,TDefaultDelete<int>_> *)&local_28) {
        piVar2 = pTVar10->Ptr;
        pTVar10->Ptr = piVar9;
        piVar9 = (int *)0x0;
        ::operator_delete(piVar2,4);
      }
      ::operator_delete(piVar9,4);
    }
    else {
      if (pIVar1 == (IDataChannel *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      *pTVar10->Ptr = (int)(param_1[2].DataChannel.Object)->_padding_;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// PopOpaque @ 14aeb9990

void __thiscall
Metasound::TCopyableDataChannel<int>::PopOpaque(TCopyableDataChannel<int> *this,IReceiver *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  int *piVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  int *piVar7;
  FName local_res8;
  undefined8 local_28;
  IReceiver *local_20;
  FName *local_18;
  
  pFVar6 = GetMetasoundDataTypeName<int>();
  local_res8 = *pFVar6;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::CheckType<Metasound::TReceiver<int>_>'::__l2::
            <lambda_1>::operator()(&local_20);
    if (!bVar5) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CheckType<TSenderImplementation>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                         ,0xd5,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    piVar2 = (this->AtomicData).Ptr;
    if ((piVar2 != (int *)0x0) && (this->PayloadID != param_1[1]._padding_)) {
      plVar1 = &param_1[1]._padding_;
      param_1[1]._padding_ = this->PayloadID;
      if ((int *)param_1[1]._padding_ == (int *)0x0) {
        piVar7 = ::operator_new(4);
        if (piVar7 == (int *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          *piVar7 = *piVar2;
        }
        if (plVar1 != &local_28) {
          pvVar3 = (void *)*plVar1;
          *plVar1 = (longlong)piVar7;
          piVar7 = (int *)0x0;
          ::operator_delete(pvVar3,4);
        }
        ::operator_delete(piVar7,4);
      }
      else {
        *(int *)param_1[1]._padding_ = *piVar2;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014aeb9a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14aeb9ab0

bool __thiscall Metasound::TCopyableDataChannel<int>::IsEmpty(TCopyableDataChannel<int> *this)

{
  return (this->AtomicData).Ptr == (int *)0x0;
}

// GetDataType @ 14aeb9b20

FName __thiscall Metasound::TCopyableDataChannel<int>::GetDataType(TCopyableDataChannel<int> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<int>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14aeb9b60

bool __thiscall
Metasound::TCopyableDataChannel<int>::PushLiteral(TCopyableDataChannel<int> *this,FLiteral *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TUniquePtr<int,TDefaultDelete<int>_> *pTVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined8 local_18 [2];
  
  bVar3 = TLiteralTraits<int>::IsParsable(param_1);
  if (!bVar3) {
    return false;
  }
  iVar4 = TDataLiteralFactory<int,Metasound::DataFactoryPrivate::TDataTypeCreator<int>_>::
          CreateExplicitArgs(&this->OperatorSettings,param_1);
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    piVar5 = (this->AtomicData).Ptr;
    pTVar1 = &this->AtomicData;
    if (piVar5 == (int *)0x0) {
      piVar5 = ::operator_new(4);
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        *piVar5 = iVar4;
      }
      if (pTVar1 != (TUniquePtr<int,TDefaultDelete<int>_> *)local_18) {
        piVar2 = pTVar1->Ptr;
        pTVar1->Ptr = piVar5;
        piVar5 = (int *)0x0;
        ::operator_delete(piVar2,4);
      }
      ::operator_delete(piVar5,4);
    }
    else {
      *piVar5 = iVar4;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ConstructNewReceiverImplementation @ 14aeb9c80

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<int>::ConstructNewReceiverImplementation
          (TCopyableDataChannel<int> *this,FReceiverInitParams *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IDataChannel *pIVar2;
  FName FVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  TSharedRef<Metasound::IDataChannel,1> *pTVar6;
  FName *pFVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *in_R8;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  puVar8 = (undefined8 *)0x0;
  puVar5 = ::operator_new(0x40);
  puVar9 = puVar8;
  if (puVar5 != (undefined8 *)0x0) {
    pTVar6 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
    pIVar2 = pTVar6->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      pFVar7 = GetMetasoundDataTypeName<int>();
      FVar3 = *pFVar7;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      *(FName *)(puVar5 + 1) = FVar3;
      puVar5[2] = pIVar2;
      puVar5[3] = 0;
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      pFVar7 = GetMetasoundDataTypeName<int>();
      FVar3 = *pFVar7;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      *(FName *)(puVar5 + 1) = FVar3;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      puVar5[2] = pIVar2;
      puVar5[3] = pTVar1;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar5[4] = 0xffffffffffffffff;
    *puVar5 = &___7__TReceiver_H_Metasound__6B_;
    puVar5[5] = 0;
    uVar4 = in_R8[1];
    puVar5[6] = *in_R8;
    puVar5[7] = uVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar8 = puVar5;
    puVar9 = (undefined8 *)&DAT_00000001;
  }
  *(undefined8 **)&param_1->OperatorSettings = puVar8;
  if (puVar9 != (undefined8 *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_>)
         (IReceiver *)param_1;
}

// ConstructNewSenderImplementation @ 14aeb9de0

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<int>::ConstructNewSenderImplementation
          (TCopyableDataChannel<int> *this,FSenderInitParams *param_1)

{
  TSender<int> *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<int> *pTVar2;
  TSender<int> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<int> *)0x0;
  this_00 = ::operator_new(0x70);
  pTVar3 = pTVar2;
  if (this_00 != (TSender<int> *)0x0) {
    pTVar1 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    local_38.Object = pTVar1->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (pTVar1->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = TSender<int>::TSender<int>(this_00,in_R8,&local_38);
    pTVar3 = (TSender<int> *)&DAT_00000001;
  }
  *(TSender<int> **)&param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<int> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14aec7580

long64 __thiscall
Metasound::TCopyableDataChannel<FMetasoundParameterStorageWrapper>::GetPayloadID
          (TCopyableDataChannel<FMetasoundParameterStorageWrapper> *this)

{
  return this->PayloadID;
}

// CreateNewPayloadID @ 14aec7590

long64 __thiscall
Metasound::TCopyableDataChannel<FMetasoundParameterStorageWrapper>::CreateNewPayloadID
          (TCopyableDataChannel<FMetasoundParameterStorageWrapper> *this)

{
  atomic<__int64> *paVar1;
  atomic<__int64> aVar2;
  
  LOCK();
  paVar1 = &this->PayloadIDCounter;
  aVar2 = *paVar1;
  *paVar1 = (atomic<__int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  return (long64)aVar2;
}

// PushOpaque @ 14aec76a0

bool __thiscall
Metasound::TCopyableDataChannel<FMetasoundParameterStorageWrapper>::PushOpaque
          (TCopyableDataChannel<FMetasoundParameterStorageWrapper> *this,ISender *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  IDataChannel *pIVar1;
  FMetasoundParameterPackStorage *pFVar2;
  FMetasoundParameterStorageWrapper *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FName *pFVar7;
  long64 lVar8;
  FMetasoundParameterStorageWrapper *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  atomic<int> *paVar11;
  TUniquePtr<FMetasoundParameterStorageWrapper,TDefaultDelete<FMetasoundParameterStorageWrapper>_>
  *pTVar12;
  FName local_res8;
  longlong local_48;
  ISender *local_40;
  FName *local_38;
  FMetasoundParameterPackStorage *local_30;
  TReferenceControllerBase<1> *pTStack_28;
  
  pFVar7 = GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_38 = &local_res8;
    local_40 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<FMetasoundParameterStorageWrapper>_>'::__l2::<lambda_1>::
            operator()(&local_40);
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CheckType<TSenderImplementation>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0xd5,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lVar8 = (**(code **)(param_1->_padding_ + 8))(param_1);
  this->PayloadID = lVar8;
  pTVar12 = &this->AtomicData;
  pIVar1 = param_1[2].DataChannel.Object;
  if (pTVar12->Ptr == (FMetasoundParameterStorageWrapper *)0x0) {
    if ((pIVar1 == (IDataChannel *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pIVar1 = param_1[2].DataChannel.Object;
    pTVar10 = (TReferenceControllerBase<1> *)pIVar1->_padding_;
    pFVar2 = (FMetasoundParameterPackStorage *)pIVar1->_padding_;
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
      paVar11 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar11 = &pTVar10->SharedReferenceCount;
      LOCK();
      *paVar11 = (atomic<int>)((int)*paVar11 + 1);
      UNLOCK();
    }
    pFVar9 = ::operator_new(0x10);
    if (pFVar9 == (FMetasoundParameterStorageWrapper *)0x0) {
      pFVar9 = (FMetasoundParameterStorageWrapper *)0x0;
    }
    else {
      (pFVar9->ParameterStoragePtr).Object = pFVar2;
      (pFVar9->ParameterStoragePtr).SharedReferenceCount.ReferenceController = pTVar10;
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar11 = (atomic<int>)((int)*paVar11 + 1);
        UNLOCK();
      }
    }
    if (pTVar12 ==
        (TUniquePtr<FMetasoundParameterStorageWrapper,TDefaultDelete<FMetasoundParameterStorageWrapper>_>
         *)&local_48) {
      if (pFVar9 == (FMetasoundParameterStorageWrapper *)0x0) goto LAB_14aec7879;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar9->ParameterStoragePtr).SharedReferenceCount.ReferenceController);
    }
    else {
      pFVar3 = pTVar12->Ptr;
      pTVar12->Ptr = pFVar9;
      if (pFVar3 == (FMetasoundParameterStorageWrapper *)0x0) goto LAB_14aec7879;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar3->ParameterStoragePtr).SharedReferenceCount.ReferenceController);
      pFVar9 = pFVar3;
    }
    ::operator_delete(pFVar9,0x10);
  }
  else {
    if ((pIVar1 == (IDataChannel *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pIVar1 = param_1[2].DataChannel.Object;
    pTVar10 = (TReferenceControllerBase<1> *)pIVar1->_padding_;
    pFVar2 = (FMetasoundParameterPackStorage *)pIVar1->_padding_;
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
      pFVar9 = pTVar12->Ptr;
    }
    else {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      pFVar9 = pTVar12->Ptr;
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_30 = (pFVar9->ParameterStoragePtr).Object;
    pTStack_28 = (pFVar9->ParameterStoragePtr).SharedReferenceCount.ReferenceController;
    (pFVar9->ParameterStoragePtr).Object = pFVar2;
    (pFVar9->ParameterStoragePtr).SharedReferenceCount.ReferenceController = pTVar10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_28);
  }
LAB_14aec7879:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return true;
}

// PopOpaque @ 14aec78b0

void __thiscall
Metasound::TCopyableDataChannel<FMetasoundParameterStorageWrapper>::PopOpaque
          (TCopyableDataChannel<FMetasoundParameterStorageWrapper> *this,IReceiver *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  FMetasoundParameterStorageWrapper *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  FMetasoundParameterPackStorage *pFVar5;
  code *pcVar6;
  bool bVar7;
  FName *pFVar8;
  undefined8 *puVar9;
  FName local_res8;
  undefined8 local_38;
  IReceiver *local_30;
  FName *local_28;
  undefined8 local_20;
  TReferenceControllerBase<1> *pTStack_18;
  
  pFVar8 = GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>();
  local_res8 = *pFVar8;
  if ((FName)param_1->_padding_ != local_res8) {
    local_28 = &local_res8;
    local_30 = param_1;
    bVar7 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<FMetasoundParameterStorageWrapper>_>'::__l2::<lambda_1>::
            operator()(&local_30);
    if (!bVar7) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CheckType<TSenderImplementation>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                         ,0xd5,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar2 = (this->AtomicData).Ptr;
    if ((pFVar2 != (FMetasoundParameterStorageWrapper *)0x0) &&
       (this->PayloadID != param_1[1]._padding_)) {
      puVar9 = (undefined8 *)param_1[1]._padding_;
      plVar1 = &param_1[1]._padding_;
      param_1[1]._padding_ = this->PayloadID;
      if (puVar9 == (undefined8 *)0x0) {
        puVar9 = ::operator_new(0x10);
        if (puVar9 == (undefined8 *)0x0) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          *puVar9 = (pFVar2->ParameterStoragePtr).Object;
          pTVar3 = (pFVar2->ParameterStoragePtr).SharedReferenceCount.ReferenceController;
          puVar9[1] = pTVar3;
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        if (plVar1 == &local_38) {
          if (puVar9 != (undefined8 *)0x0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)puVar9[1]);
            ::operator_delete(puVar9,0x10);
          }
        }
        else {
          pvVar4 = (void *)*plVar1;
          *plVar1 = (longlong)puVar9;
          if (pvVar4 != (void *)0x0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)((longlong)pvVar4 + 8));
            ::operator_delete(pvVar4,0x10);
          }
        }
      }
      else {
        pTVar3 = (pFVar2->ParameterStoragePtr).SharedReferenceCount.ReferenceController;
        pFVar5 = (pFVar2->ParameterStoragePtr).Object;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_20 = *puVar9;
        pTStack_18 = (TReferenceControllerBase<1> *)puVar9[1];
        *puVar9 = pFVar5;
        puVar9[1] = pTVar3;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_18);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014aec7a19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14aec7a60

bool __thiscall
Metasound::TCopyableDataChannel<FMetasoundParameterStorageWrapper>::IsEmpty
          (TCopyableDataChannel<FMetasoundParameterStorageWrapper> *this)

{
  return (this->AtomicData).Ptr == (FMetasoundParameterStorageWrapper *)0x0;
}

// GetDataType @ 14aec7b00

FName __thiscall
Metasound::TCopyableDataChannel<FMetasoundParameterStorageWrapper>::GetDataType
          (TCopyableDataChannel<FMetasoundParameterStorageWrapper> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14aec7c20

bool __thiscall
Metasound::TCopyableDataChannel<FMetasoundParameterStorageWrapper>::PushLiteral
          (TCopyableDataChannel<FMetasoundParameterStorageWrapper> *this,FLiteral *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TUniquePtr<FMetasoundParameterStorageWrapper,TDefaultDelete<FMetasoundParameterStorageWrapper>_>
  *pTVar1;
  FMetasoundParameterStorageWrapper *pFVar2;
  bool bVar3;
  FMetasoundParameterStorageWrapper *pFVar4;
  FSharedReferencer<1> FVar5;
  undefined8 local_38;
  FMetasoundParameterStorageWrapper local_30;
  FMetasoundParameterPackStorage *local_20;
  TReferenceControllerBase<1> *pTStack_18;
  
  bVar3 = TLiteralTraits<FMetasoundParameterStorageWrapper>::IsParsable(param_1);
  if (!bVar3) {
    return false;
  }
  TDataLiteralFactory<FMetasoundParameterStorageWrapper,Metasound::DataFactoryPrivate::TDataTypeCreator<FMetasoundParameterStorageWrapper>_>
  ::CreateExplicitArgs(&local_30,&this->OperatorSettings,param_1);
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar4 = (this->AtomicData).Ptr;
    pTVar1 = &this->AtomicData;
    if (pFVar4 == (FMetasoundParameterStorageWrapper *)0x0) {
      pFVar4 = ::operator_new(0x10);
      if (pFVar4 == (FMetasoundParameterStorageWrapper *)0x0) {
        pFVar4 = (FMetasoundParameterStorageWrapper *)0x0;
      }
      else {
        (pFVar4->ParameterStoragePtr).Object = local_30.ParameterStoragePtr.Object;
        (pFVar4->ParameterStoragePtr).SharedReferenceCount.ReferenceController =
             local_30.ParameterStoragePtr.SharedReferenceCount.ReferenceController;
        if (local_30.ParameterStoragePtr.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_30.ParameterStoragePtr.SharedReferenceCount.ReferenceController)->
          SharedReferenceCount =
               (atomic<int>)
               ((int)(local_30.ParameterStoragePtr.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      FVar5.ReferenceController =
           local_30.ParameterStoragePtr.SharedReferenceCount.ReferenceController;
      if (pTVar1 == (TUniquePtr<FMetasoundParameterStorageWrapper,TDefaultDelete<FMetasoundParameterStorageWrapper>_>
                     *)&local_38) {
        if (pFVar4 != (FMetasoundParameterStorageWrapper *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar4->ParameterStoragePtr).SharedReferenceCount.ReferenceController);
          ::operator_delete(pFVar4,0x10);
        }
      }
      else {
        pFVar2 = pTVar1->Ptr;
        pTVar1->Ptr = pFVar4;
        if (pFVar2 != (FMetasoundParameterStorageWrapper *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar2->ParameterStoragePtr).SharedReferenceCount.ReferenceController);
          ::operator_delete(pFVar2,0x10);
        }
      }
    }
    else {
      if (local_30.ParameterStoragePtr.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_30.ParameterStoragePtr.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(local_30.ParameterStoragePtr.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      local_20 = (pFVar4->ParameterStoragePtr).Object;
      pTStack_18 = (pFVar4->ParameterStoragePtr).SharedReferenceCount.ReferenceController;
      (pFVar4->ParameterStoragePtr).Object = local_30.ParameterStoragePtr.Object;
      (pFVar4->ParameterStoragePtr).SharedReferenceCount.ReferenceController =
           local_30.ParameterStoragePtr.SharedReferenceCount.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_18);
      FVar5.ReferenceController =
           local_30.ParameterStoragePtr.SharedReferenceCount.ReferenceController;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar5.ReferenceController);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ConstructNewReceiverImplementation @ 14aec7e30

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<FMetasoundParameterStorageWrapper>::
ConstructNewReceiverImplementation
          (TCopyableDataChannel<FMetasoundParameterStorageWrapper> *this,
          FReceiverInitParams *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IDataChannel *pIVar2;
  FName FVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  TSharedRef<Metasound::IDataChannel,1> *pTVar6;
  FName *pFVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *in_R8;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  puVar8 = (undefined8 *)0x0;
  puVar5 = ::operator_new(0x40);
  puVar9 = puVar8;
  if (puVar5 != (undefined8 *)0x0) {
    pTVar6 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
    pIVar2 = pTVar6->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      pFVar7 = GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>();
      FVar3 = *pFVar7;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      *(FName *)(puVar5 + 1) = FVar3;
      puVar5[2] = pIVar2;
      puVar5[3] = 0;
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      pFVar7 = GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>();
      FVar3 = *pFVar7;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      *(FName *)(puVar5 + 1) = FVar3;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      puVar5[2] = pIVar2;
      puVar5[3] = pTVar1;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar5[4] = 0xffffffffffffffff;
    *puVar5 = &___7__TReceiver_VFMetasoundParameterStorageWrapper___Metasound__6B_;
    puVar5[5] = 0;
    uVar4 = in_R8[1];
    puVar5[6] = *in_R8;
    puVar5[7] = uVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar8 = puVar5;
    puVar9 = (undefined8 *)&DAT_00000001;
  }
  *(undefined8 **)&param_1->OperatorSettings = puVar8;
  if (puVar9 != (undefined8 *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_>)
         (IReceiver *)param_1;
}

// ConstructNewSenderImplementation @ 14aec8340

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<FMetasoundParameterStorageWrapper>::ConstructNewSenderImplementation
          (TCopyableDataChannel<FMetasoundParameterStorageWrapper> *this,FSenderInitParams *param_1)

{
  TSender<FMetasoundParameterStorageWrapper> *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<FMetasoundParameterStorageWrapper> *pTVar2;
  TSender<FMetasoundParameterStorageWrapper> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<FMetasoundParameterStorageWrapper> *)0x0;
  this_00 = ::operator_new(0x70);
  pTVar3 = pTVar2;
  if (this_00 != (TSender<FMetasoundParameterStorageWrapper> *)0x0) {
    pTVar1 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    local_38.Object = pTVar1->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (pTVar1->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = TSender<FMetasoundParameterStorageWrapper>::TSender<FMetasoundParameterStorageWrapper>
                       (this_00,in_R8,&local_38);
    pTVar3 = (TSender<FMetasoundParameterStorageWrapper> *)&DAT_00000001;
  }
  *(TSender<FMetasoundParameterStorageWrapper> **)&param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<FMetasoundParameterStorageWrapper> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14aec89c0

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::FAudioBuffer>::GetPayloadID
          (TCopyableDataChannel<Metasound::FAudioBuffer> *this)

{
  return this->PayloadID;
}

// CreateNewPayloadID @ 14aec89d0

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::FAudioBuffer>::CreateNewPayloadID
          (TCopyableDataChannel<Metasound::FAudioBuffer> *this)

{
  atomic<__int64> *paVar1;
  atomic<__int64> aVar2;
  
  LOCK();
  paVar1 = &this->PayloadIDCounter;
  aVar2 = *paVar1;
  *paVar1 = (atomic<__int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  return (long64)aVar2;
}

// PushOpaque @ 14aec89f0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::FAudioBuffer>::PushOpaque
          (TCopyableDataChannel<Metasound::FAudioBuffer> *this,ISender *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  IDataChannel *pIVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 uVar8;
  FName *pFVar9;
  long64 lVar10;
  FAudioBuffer *pFVar11;
  FAudioBuffer *pFVar12;
  FAudioBuffer *pFVar13;
  TUniquePtr<Metasound::FAudioBuffer,TDefaultDelete<Metasound::FAudioBuffer>_> *pTVar14;
  FName local_res8;
  longlong local_58;
  ISender *local_50;
  FName *local_48;
  FAudioBuffer local_40;
  
  pFVar9 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_res8 = *pFVar9;
  if ((FName)param_1->_padding_ != local_res8) {
    local_48 = &local_res8;
    local_50 = param_1;
    bVar7 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<Metasound::FAudioBuffer>_>'::__l2::<lambda_1>::operator()
                      (&local_50);
    if ((!bVar7) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("CheckType<TSenderImplementation>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0xd5,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lVar10 = (**(code **)(param_1->_padding_ + 8))(param_1);
  this->PayloadID = lVar10;
  pTVar14 = &this->AtomicData;
  pIVar2 = param_1[2].DataChannel.Object;
  if (pTVar14->Ptr == (FAudioBuffer *)0x0) {
    if ((pIVar2 == (IDataChannel *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    pIVar2 = param_1[2].DataChannel.Object;
    pFVar13 = (FAudioBuffer *)pIVar2->_padding_;
    pIVar2->_padding_ = 0;
    lVar5 = pIVar2->_padding_;
    iVar1 = *(int *)((longlong)&pIVar2->_padding_ + 4);
    pIVar2->_padding_ = 0;
    lVar6 = pIVar2->_padding_;
    pFVar11 = ::operator_new(0x18);
    pFVar12 = (FAudioBuffer *)0x0;
    if (pFVar11 != (FAudioBuffer *)0x0) {
      (pFVar11->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)pFVar13;
      (pFVar11->Buffer).ArrayNum = (int)lVar5;
      (pFVar11->Buffer).ArrayMax = iVar1;
      pFVar11->InitialNum = (int)lVar6;
      pFVar12 = pFVar11;
      pFVar13 = (FAudioBuffer *)0x0;
    }
    if (pTVar14 ==
        (TUniquePtr<Metasound::FAudioBuffer,TDefaultDelete<Metasound::FAudioBuffer>_> *)&local_58) {
      if (pFVar12 != (FAudioBuffer *)0x0) {
        pFVar3 = (pFVar12->Buffer).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        ::operator_delete(pFVar12,0x18);
      }
    }
    else {
      pFVar11 = pTVar14->Ptr;
      pTVar14->Ptr = pFVar12;
      if (pFVar11 != (FAudioBuffer *)0x0) {
        pFVar3 = (pFVar11->Buffer).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        ::operator_delete(pFVar11,0x18);
      }
    }
  }
  else {
    if ((pIVar2 == (IDataChannel *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    pIVar2 = param_1[2].DataChannel.Object;
    pFVar13 = (FAudioBuffer *)pIVar2->_padding_;
    pIVar2->_padding_ = 0;
    lVar5 = pIVar2->_padding_;
    iVar1 = *(int *)((longlong)&pIVar2->_padding_ + 4);
    pIVar2->_padding_ = 0;
    lVar6 = pIVar2->_padding_;
    pFVar12 = pTVar14->Ptr;
    if (pFVar12 != &local_40) {
      pFVar3 = (pFVar12->Buffer).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar12->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)pFVar13;
      (pFVar12->Buffer).ArrayNum = (int)lVar5;
      (pFVar12->Buffer).ArrayMax = iVar1;
      pFVar13 = (FAudioBuffer *)0x0;
    }
    pFVar12->InitialNum = (int)lVar6;
  }
  if (pFVar13 != (FAudioBuffer *)0x0) {
    FMemory::Free(pFVar13);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return true;
}

// PopOpaque @ 14aec8c40

void __thiscall
Metasound::TCopyableDataChannel<Metasound::FAudioBuffer>::PopOpaque
          (TCopyableDataChannel<Metasound::FAudioBuffer> *this,IReceiver *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  FAudioBuffer *this_00;
  FAudioBuffer *pFVar7;
  FName local_res8;
  undefined8 local_38;
  IReceiver *local_30;
  FName *local_28;
  
  pFVar6 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_res8 = *pFVar6;
  if ((FName)param_1->_padding_ != local_res8) {
    local_28 = &local_res8;
    local_30 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<Metasound::FAudioBuffer>_>'::__l2::<lambda_1>::operator()
                      (&local_30);
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CheckType<TSenderImplementation>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0xd5,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar7 = (this->AtomicData).Ptr;
  if ((pFVar7 != (FAudioBuffer *)0x0) && (this->PayloadID != param_1[1]._padding_)) {
    plVar1 = &param_1[1]._padding_;
    param_1[1]._padding_ = this->PayloadID;
    if ((FAudioBuffer *)param_1[1]._padding_ == (FAudioBuffer *)0x0) {
      this_00 = ::operator_new(0x18);
      if (this_00 == (FAudioBuffer *)0x0) {
        pFVar7 = (FAudioBuffer *)0x0;
      }
      else {
        pFVar7 = FAudioBuffer::FAudioBuffer(this_00,pFVar7);
      }
      if (plVar1 == &local_38) {
        if (pFVar7 != (FAudioBuffer *)0x0) {
          pFVar3 = (pFVar7->Buffer).AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          ::operator_delete(pFVar7,0x18);
        }
      }
      else {
        puVar2 = (undefined8 *)*plVar1;
        *plVar1 = (longlong)pFVar7;
        if (puVar2 != (undefined8 *)0x0) {
          if ((void *)*puVar2 != (void *)0x0) {
            FMemory::Free((void *)*puVar2);
          }
          ::operator_delete(puVar2,0x18);
        }
      }
    }
    else {
      FAudioBuffer::operator=((FAudioBuffer *)param_1[1]._padding_,pFVar7);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014aec8d7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// IsEmpty @ 14aec8dd0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::FAudioBuffer>::IsEmpty
          (TCopyableDataChannel<Metasound::FAudioBuffer> *this)

{
  return (this->AtomicData).Ptr == (FAudioBuffer *)0x0;
}

// GetDataType @ 14aec90e0

FName __thiscall
Metasound::TCopyableDataChannel<Metasound::FAudioBuffer>::GetDataType
          (TCopyableDataChannel<Metasound::FAudioBuffer> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14aec9340

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::FAudioBuffer>::PushLiteral
          (TCopyableDataChannel<Metasound::FAudioBuffer> *this,FLiteral *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FAudioBuffer *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FAudioBuffer *pFVar4;
  int *piVar5;
  TUniquePtr<Metasound::FAudioBuffer,TDefaultDelete<Metasound::FAudioBuffer>_> *pTVar6;
  undefined8 local_38;
  FAudioBuffer local_30;
  
  bVar3 = TLiteralTraits<Metasound::FAudioBuffer>::IsParsable(param_1);
  if (!bVar3) {
    return false;
  }
  TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FAudioBuffer>_>
  ::CreateExplicitArgs(&local_30,&this->OperatorSettings,param_1);
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar4 = (this->AtomicData).Ptr;
    pTVar6 = &this->AtomicData;
    if (pFVar4 == (FAudioBuffer *)0x0) {
      pFVar4 = ::operator_new(0x18);
      if (pFVar4 == (FAudioBuffer *)0x0) {
        pFVar4 = (FAudioBuffer *)0x0;
      }
      else {
        (pFVar4->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar4->Buffer).ArrayNum = local_30.Buffer.ArrayNum;
        piVar5 = &(pFVar4->Buffer).ArrayMax;
        if (local_30.Buffer.ArrayNum == 0) {
          *piVar5 = 0;
          pFVar4->InitialNum = local_30.InitialNum;
        }
        else {
          UE::Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,local_30.Buffer.ArrayNum,0,(ForAnyElementType *)pFVar4,
                     local_30.Buffer.ArrayNum,piVar5);
          memcpy((pFVar4->Buffer).AllocatorInstance.Data,local_30.Buffer.AllocatorInstance.Data,
                 (longlong)local_30.Buffer.ArrayNum << 2);
          pFVar4->InitialNum = local_30.InitialNum;
        }
      }
      if (pTVar6 == (TUniquePtr<Metasound::FAudioBuffer,TDefaultDelete<Metasound::FAudioBuffer>_> *)
                    &local_38) {
        if (pFVar4 != (FAudioBuffer *)0x0) {
          pFVar2 = (pFVar4->Buffer).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          ::operator_delete(pFVar4,0x18);
        }
      }
      else {
        pFVar1 = pTVar6->Ptr;
        pTVar6->Ptr = pFVar4;
        if (pFVar1 != (FAudioBuffer *)0x0) {
          pFVar2 = (pFVar1->Buffer).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          ::operator_delete(pFVar1,0x18);
        }
      }
    }
    else {
      if (pFVar4 != &local_30) {
        piVar5 = &(pFVar4->Buffer).ArrayMax;
        (pFVar4->Buffer).ArrayNum = local_30.Buffer.ArrayNum;
        if ((local_30.Buffer.ArrayNum == 0) && (*piVar5 == 0)) {
          *piVar5 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,local_30.Buffer.ArrayNum,*piVar5,(ForAnyElementType *)pFVar4,
                     local_30.Buffer.ArrayNum,piVar5);
          if (local_30.Buffer.ArrayNum != 0) {
            memcpy((pFVar4->Buffer).AllocatorInstance.Data,local_30.Buffer.AllocatorInstance.Data,
                   (longlong)local_30.Buffer.ArrayNum << 2);
          }
        }
      }
      pFVar4->InitialNum = local_30.InitialNum;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_30.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Buffer.AllocatorInstance.Data);
    }
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ConstructNewReceiverImplementation @ 14aec95d0

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::FAudioBuffer>::ConstructNewReceiverImplementation
          (TCopyableDataChannel<Metasound::FAudioBuffer> *this,FReceiverInitParams *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IDataChannel *pIVar2;
  FName FVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  TSharedRef<Metasound::IDataChannel,1> *pTVar6;
  FName *pFVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *in_R8;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  puVar8 = (undefined8 *)0x0;
  puVar5 = ::operator_new(0x40);
  puVar9 = puVar8;
  if (puVar5 != (undefined8 *)0x0) {
    pTVar6 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
    pIVar2 = pTVar6->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      pFVar7 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
      FVar3 = *pFVar7;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      *(FName *)(puVar5 + 1) = FVar3;
      puVar5[2] = pIVar2;
      puVar5[3] = 0;
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      pFVar7 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
      FVar3 = *pFVar7;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      *(FName *)(puVar5 + 1) = FVar3;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      puVar5[2] = pIVar2;
      puVar5[3] = pTVar1;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar5[4] = 0xffffffffffffffff;
    *puVar5 = &___7__TReceiver_VFAudioBuffer_Metasound___Metasound__6B_;
    puVar5[5] = 0;
    uVar4 = in_R8[1];
    puVar5[6] = *in_R8;
    puVar5[7] = uVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar8 = puVar5;
    puVar9 = (undefined8 *)&DAT_00000001;
  }
  *(undefined8 **)&param_1->OperatorSettings = puVar8;
  if (puVar9 != (undefined8 *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_>)
         (IReceiver *)param_1;
}

// ConstructNewSenderImplementation @ 14aec97b0

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::FAudioBuffer>::ConstructNewSenderImplementation
          (TCopyableDataChannel<Metasound::FAudioBuffer> *this,FSenderInitParams *param_1)

{
  TSender<Metasound::FAudioBuffer> *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<Metasound::FAudioBuffer> *pTVar2;
  TSender<Metasound::FAudioBuffer> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<Metasound::FAudioBuffer> *)0x0;
  this_00 = ::operator_new(0x70);
  pTVar3 = pTVar2;
  if (this_00 != (TSender<Metasound::FAudioBuffer> *)0x0) {
    pTVar1 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    local_38.Object = pTVar1->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (pTVar1->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = TSender<Metasound::FAudioBuffer>::TSender<Metasound::FAudioBuffer>
                       (this_00,in_R8,&local_38);
    pTVar3 = (TSender<Metasound::FAudioBuffer> *)&DAT_00000001;
  }
  *(TSender<Metasound::FAudioBuffer> **)&param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<Metasound::FAudioBuffer> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14aed0730

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::FTrigger>::GetPayloadID
          (TCopyableDataChannel<Metasound::FTrigger> *this)

{
  return this->PayloadID;
}

// CreateNewPayloadID @ 14aed0740

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::FTrigger>::CreateNewPayloadID
          (TCopyableDataChannel<Metasound::FTrigger> *this)

{
  atomic<__int64> *paVar1;
  atomic<__int64> aVar2;
  
  LOCK();
  paVar1 = &this->PayloadIDCounter;
  aVar2 = *paVar1;
  *paVar1 = (atomic<__int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  return (long64)aVar2;
}

// PushOpaque @ 14aed0760

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::FTrigger>::PushOpaque
          (TCopyableDataChannel<Metasound::FTrigger> *this,ISender *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  int iVar2;
  IDataChannel *pIVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 uVar9;
  FName *pFVar10;
  long64 lVar11;
  FTrigger *pFVar12;
  FTrigger *pFVar13;
  ForAnyElementType FVar14;
  TUniquePtr<Metasound::FTrigger,TDefaultDelete<Metasound::FTrigger>_> *pTVar15;
  FName local_res8;
  bool local_res10;
  int local_res18;
  int local_res20;
  longlong local_80;
  ISender *local_78;
  FName *local_70;
  FTrigger local_68;
  
  pFVar10 = GetMetasoundDataTypeName<Metasound::FTrigger>();
  local_res8 = *pFVar10;
  if ((FName)param_1->_padding_ != local_res8) {
    local_70 = &local_res8;
    local_78 = param_1;
    bVar8 = `Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<Metasound::FTrigger>_>'
            ::__l2::<lambda_1>::operator()(&local_78);
    if ((!bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("CheckType<TSenderImplementation>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0xd5,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lVar11 = (**(code **)(param_1->_padding_ + 8))(param_1);
  this->PayloadID = lVar11;
  pTVar15 = &this->AtomicData;
  pIVar3 = param_1[2].DataChannel.Object;
  if (pTVar15->Ptr == (FTrigger *)0x0) {
    if ((pIVar3 == (IDataChannel *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    pIVar3 = param_1[2].DataChannel.Object;
    FVar14.Data = (FScriptContainerElement *)pIVar3->_padding_;
    pIVar3->_padding_ = 0;
    lVar6 = pIVar3->_padding_;
    iVar1 = *(int *)((longlong)&pIVar3->_padding_ + 4);
    pIVar3->_padding_ = 0;
    lVar7 = pIVar3->_padding_;
    local_res8.ComparisonIndex.Value._0_1_ = *(undefined1 *)((longlong)&pIVar3->_padding_ + 1);
    local_res10 = *(bool *)((longlong)&pIVar3->_padding_ + 2);
    local_res18 = *(int *)((longlong)&pIVar3->_padding_ + 4);
    local_res20 = (int)pIVar3->_padding_;
    iVar2 = *(int *)((longlong)&pIVar3->_padding_ + 4);
    pFVar12 = ::operator_new(0x20);
    pFVar13 = (FTrigger *)0x0;
    if (pFVar12 != (FTrigger *)0x0) {
      (pFVar12->TriggeredFrames).AllocatorInstance.Data = FVar14.Data;
      (pFVar12->TriggeredFrames).ArrayNum = (int)lVar6;
      (pFVar12->TriggeredFrames).ArrayMax = iVar1;
      pFVar12->bHasAdvanced = SUB81(lVar7,0);
      pFVar12->bTriggeredFromInit = (bool)(undefined1)local_res8.ComparisonIndex.Value;
      pFVar12->bHasTrigger = local_res10;
      pFVar12->NumFramesPerBlock = local_res18;
      pFVar12->SampleRate = local_res20;
      pFVar12->LastTriggerIndexInBlock = iVar2;
      pFVar13 = pFVar12;
      FVar14.Data = (FScriptContainerElement *)(FTrigger *)0x0;
    }
    if (pTVar15 == (TUniquePtr<Metasound::FTrigger,TDefaultDelete<Metasound::FTrigger>_> *)&local_80
       ) {
      if (pFVar13 == (FTrigger *)0x0) goto joined_r0x00014aed09ea;
      pFVar4 = (pFVar13->TriggeredFrames).AllocatorInstance.Data;
      pFVar12 = pFVar13;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
    }
    else {
      pFVar12 = pTVar15->Ptr;
      pTVar15->Ptr = pFVar13;
      if (pFVar12 == (FTrigger *)0x0) goto joined_r0x00014aed09ea;
      pFVar4 = (pFVar12->TriggeredFrames).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
    }
    ::operator_delete(pFVar12,0x20);
  }
  else {
    if ((pIVar3 == (IDataChannel *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    pIVar3 = param_1[2].DataChannel.Object;
    local_68.TriggeredFrames.AllocatorInstance.Data = (FScriptContainerElement *)pIVar3->_padding_;
    pIVar3->_padding_ = 0;
    local_68.TriggeredFrames.ArrayNum = (int)pIVar3->_padding_;
    local_68.TriggeredFrames.ArrayMax = *(int *)((longlong)&pIVar3->_padding_ + 4);
    pIVar3->_padding_ = 0;
    local_68.bHasAdvanced = SUB81(pIVar3->_padding_,0);
    local_68.bTriggeredFromInit = *(bool *)((longlong)&pIVar3->_padding_ + 1);
    local_68.bHasTrigger = *(bool *)((longlong)&pIVar3->_padding_ + 2);
    local_68.NumFramesPerBlock = *(int *)((longlong)&pIVar3->_padding_ + 4);
    local_68.SampleRate = (int)pIVar3->_padding_;
    local_68.LastTriggerIndexInBlock = *(int *)((longlong)&pIVar3->_padding_ + 4);
    FTrigger::operator=(pTVar15->Ptr,&local_68);
    FVar14.Data = local_68.TriggeredFrames.AllocatorInstance.Data;
  }
joined_r0x00014aed09ea:
  if ((FTrigger *)FVar14.Data != (FTrigger *)0x0) {
    FMemory::Free(FVar14.Data);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return true;
}

// PopOpaque @ 14aed0a90

void __thiscall
Metasound::TCopyableDataChannel<Metasound::FTrigger>::PopOpaque
          (TCopyableDataChannel<Metasound::FTrigger> *this,IReceiver *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  FTrigger *this_01;
  FTrigger *pFVar7;
  FName local_res8;
  undefined8 local_28;
  IReceiver *local_20;
  FName *local_18;
  
  pFVar6 = GetMetasoundDataTypeName<Metasound::FTrigger>();
  local_res8 = *pFVar6;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<Metasound::FTrigger>_>'::__l2::<lambda_1>::operator()
                      (&local_20);
    if (!bVar5) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CheckType<TSenderImplementation>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                         ,0xd5,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar7 = (this->AtomicData).Ptr;
    if ((pFVar7 != (FTrigger *)0x0) && (this->PayloadID != param_1[1]._padding_)) {
      plVar1 = &param_1[1]._padding_;
      param_1[1]._padding_ = this->PayloadID;
      this_00 = (TArray<int,TSizedDefaultAllocator<32>_> *)*plVar1;
      if (this_00 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        this_01 = ::operator_new(0x20);
        if (this_01 == (FTrigger *)0x0) {
          pFVar7 = (FTrigger *)0x0;
        }
        else {
          pFVar7 = FTrigger::FTrigger(this_01,pFVar7);
        }
        if (plVar1 == &local_28) {
          if (pFVar7 != (FTrigger *)0x0) {
            pFVar3 = (pFVar7->TriggeredFrames).AllocatorInstance.Data;
            if (pFVar3 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar3);
            }
            ::operator_delete(pFVar7,0x20);
          }
        }
        else {
          puVar2 = (undefined8 *)*plVar1;
          *plVar1 = (longlong)pFVar7;
          if (puVar2 != (undefined8 *)0x0) {
            if ((void *)*puVar2 != (void *)0x0) {
              FMemory::Free((void *)*puVar2);
            }
            ::operator_delete(puVar2,0x20);
          }
        }
      }
      else {
        TArray<int,TSizedDefaultAllocator<32>_>::operator=(this_00,&pFVar7->TriggeredFrames);
        *(bool *)&this_00[1].AllocatorInstance.Data = pFVar7->bHasAdvanced;
        *(bool *)((longlong)&this_00[1].AllocatorInstance.Data + 1) = pFVar7->bTriggeredFromInit;
        *(bool *)((longlong)&this_00[1].AllocatorInstance.Data + 2) = pFVar7->bHasTrigger;
        *(int *)((longlong)&this_00[1].AllocatorInstance.Data + 4) = pFVar7->NumFramesPerBlock;
        this_00[1].ArrayNum = pFVar7->SampleRate;
        this_00[1].ArrayMax = pFVar7->LastTriggerIndexInBlock;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014aed0bfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14aed0c10

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::FTrigger>::IsEmpty
          (TCopyableDataChannel<Metasound::FTrigger> *this)

{
  return (this->AtomicData).Ptr == (FTrigger *)0x0;
}

// GetDataType @ 14aed0c20

FName __thiscall
Metasound::TCopyableDataChannel<Metasound::FTrigger>::GetDataType
          (TCopyableDataChannel<Metasound::FTrigger> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::FTrigger>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14aed0c50

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::FTrigger>::PushLiteral
          (TCopyableDataChannel<Metasound::FTrigger> *this,FLiteral *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FTrigger *pFVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FTrigger *pFVar4;
  int *piVar5;
  TUniquePtr<Metasound::FTrigger,TDefaultDelete<Metasound::FTrigger>_> *pTVar6;
  undefined8 local_38;
  FTrigger local_30;
  
  bVar3 = TLiteralTraits<Metasound::FTrigger>::IsParsable(param_1);
  if (!bVar3) {
    return false;
  }
  TDataLiteralFactory<Metasound::FTrigger,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FTrigger>_>
  ::CreateExplicitArgs(&local_30,&this->OperatorSettings,param_1);
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar4 = (this->AtomicData).Ptr;
    pTVar6 = &this->AtomicData;
    if (pFVar4 == (FTrigger *)0x0) {
      pFVar4 = ::operator_new(0x20);
      _Src.Data = local_30.TriggeredFrames.AllocatorInstance.Data;
      if (pFVar4 == (FTrigger *)0x0) {
        pFVar4 = (FTrigger *)0x0;
      }
      else {
        (pFVar4->TriggeredFrames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar4->TriggeredFrames).ArrayNum = local_30.TriggeredFrames.ArrayNum;
        piVar5 = &(pFVar4->TriggeredFrames).ArrayMax;
        if (local_30.TriggeredFrames.ArrayNum == 0) {
          *piVar5 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_30.TriggeredFrames.ArrayNum,0,(ForAnyElementType *)pFVar4,
                     local_30.TriggeredFrames.ArrayNum,piVar5);
          memcpy((pFVar4->TriggeredFrames).AllocatorInstance.Data,_Src.Data,
                 (longlong)local_30.TriggeredFrames.ArrayNum << 2);
        }
        pFVar4->bHasAdvanced = local_30.bHasAdvanced;
        pFVar4->bTriggeredFromInit = local_30.bTriggeredFromInit;
        pFVar4->bHasTrigger = local_30.bHasTrigger;
        pFVar4->NumFramesPerBlock = local_30.NumFramesPerBlock;
        pFVar4->SampleRate = local_30.SampleRate;
        pFVar4->LastTriggerIndexInBlock = local_30.LastTriggerIndexInBlock;
      }
      if (pTVar6 == (TUniquePtr<Metasound::FTrigger,TDefaultDelete<Metasound::FTrigger>_> *)
                    &local_38) {
        if (pFVar4 != (FTrigger *)0x0) {
          pFVar2 = (pFVar4->TriggeredFrames).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          ::operator_delete(pFVar4,0x20);
        }
      }
      else {
        pFVar1 = pTVar6->Ptr;
        pTVar6->Ptr = pFVar4;
        if (pFVar1 != (FTrigger *)0x0) {
          pFVar2 = (pFVar1->TriggeredFrames).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          ::operator_delete(pFVar1,0x20);
        }
      }
    }
    else {
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                (&pFVar4->TriggeredFrames,&local_30.TriggeredFrames);
      pFVar4->bHasAdvanced = local_30.bHasAdvanced;
      pFVar4->bTriggeredFromInit = local_30.bTriggeredFromInit;
      pFVar4->bHasTrigger = local_30.bHasTrigger;
      pFVar4->NumFramesPerBlock = local_30.NumFramesPerBlock;
      pFVar4->SampleRate = local_30.SampleRate;
      pFVar4->LastTriggerIndexInBlock = local_30.LastTriggerIndexInBlock;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_30.TriggeredFrames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.TriggeredFrames.AllocatorInstance.Data);
    }
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ConstructNewReceiverImplementation @ 14aed0eb0

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::FTrigger>::ConstructNewReceiverImplementation
          (TCopyableDataChannel<Metasound::FTrigger> *this,FReceiverInitParams *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IDataChannel *pIVar2;
  FName FVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  TSharedRef<Metasound::IDataChannel,1> *pTVar6;
  FName *pFVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *in_R8;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  puVar8 = (undefined8 *)0x0;
  puVar5 = ::operator_new(0x40);
  puVar9 = puVar8;
  if (puVar5 != (undefined8 *)0x0) {
    pTVar6 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
    pIVar2 = pTVar6->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      pFVar7 = GetMetasoundDataTypeName<Metasound::FTrigger>();
      FVar3 = *pFVar7;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      *(FName *)(puVar5 + 1) = FVar3;
      puVar5[2] = pIVar2;
      puVar5[3] = 0;
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      pFVar7 = GetMetasoundDataTypeName<Metasound::FTrigger>();
      FVar3 = *pFVar7;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      *(FName *)(puVar5 + 1) = FVar3;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      puVar5[2] = pIVar2;
      puVar5[3] = pTVar1;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar5[4] = 0xffffffffffffffff;
    *puVar5 = &___7__TReceiver_VFTrigger_Metasound___Metasound__6B_;
    puVar5[5] = 0;
    uVar4 = in_R8[1];
    puVar5[6] = *in_R8;
    puVar5[7] = uVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar8 = puVar5;
    puVar9 = (undefined8 *)&DAT_00000001;
  }
  *(undefined8 **)&param_1->OperatorSettings = puVar8;
  if (puVar9 != (undefined8 *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_>)
         (IReceiver *)param_1;
}

// ConstructNewSenderImplementation @ 14aed1030

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::FTrigger>::ConstructNewSenderImplementation
          (TCopyableDataChannel<Metasound::FTrigger> *this,FSenderInitParams *param_1)

{
  TSender<Metasound::FTrigger> *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<Metasound::FTrigger> *pTVar2;
  TSender<Metasound::FTrigger> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<Metasound::FTrigger> *)0x0;
  this_00 = ::operator_new(0x70);
  pTVar3 = pTVar2;
  if (this_00 != (TSender<Metasound::FTrigger> *)0x0) {
    pTVar1 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    local_38.Object = pTVar1->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (pTVar1->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = TSender<Metasound::FTrigger>::TSender<Metasound::FTrigger>(this_00,in_R8,&local_38);
    pTVar3 = (TSender<Metasound::FTrigger> *)&DAT_00000001;
  }
  *(TSender<Metasound::FTrigger> **)&param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<Metasound::FTrigger> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14aed34e0

long64 __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetPayloadID
          (TCopyableDataChannel<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this)

{
  return this->PayloadID;
}

// CreateNewPayloadID @ 14aed34f0

long64 __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
CreateNewPayloadID(TCopyableDataChannel<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this
                  )

{
  atomic<__int64> *paVar1;
  atomic<__int64> aVar2;
  
  LOCK();
  paVar1 = &this->PayloadIDCounter;
  aVar2 = *paVar1;
  *paVar1 = (atomic<__int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  return (long64)aVar2;
}

// PushOpaque @ 14aed3510

bool __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::PushOpaque
          (TCopyableDataChannel<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          ISender *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  IDataChannel *pIVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 uVar7;
  FName *pFVar8;
  long64 lVar9;
  TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *pTVar12;
  TUniquePtr<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
  *pTVar13;
  FName local_res8;
  longlong local_58;
  ISender *local_50;
  FName *local_48;
  TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> local_40;
  
  pFVar8 = GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
  local_res8 = *pFVar8;
  if ((FName)param_1->_padding_ != local_res8) {
    local_48 = &local_res8;
    local_50 = param_1;
    bVar6 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>'::
            __l2::<lambda_1>::operator()(&local_50);
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CheckType<TSenderImplementation>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0xd5,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lVar9 = (**(code **)(param_1->_padding_ + 8))(param_1);
  this->PayloadID = lVar9;
  pTVar13 = &this->AtomicData;
  pIVar2 = param_1[2].DataChannel.Object;
  if (pTVar13->Ptr == (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)0x0) {
    if ((pIVar2 == (IDataChannel *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    pIVar2 = param_1[2].DataChannel.Object;
    pTVar12 = (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)pIVar2->_padding_;
    pIVar2->_padding_ = 0;
    lVar5 = pIVar2->_padding_;
    iVar1 = *(int *)((longlong)&pIVar2->_padding_ + 4);
    pIVar2->_padding_ = 0;
    pTVar10 = ::operator_new(0x10);
    pTVar11 = (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)0x0;
    if (pTVar10 != (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)0x0) {
      (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)pTVar12;
      pTVar10->ArrayNum = (int)lVar5;
      pTVar10->ArrayMax = iVar1;
      pTVar11 = pTVar10;
      pTVar12 = (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)0x0;
    }
    if (pTVar13 ==
        (TUniquePtr<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
         *)&local_58) {
      if (pTVar11 == (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)0x0)
      goto joined_r0x00014aed36ef;
      pFVar3 = (pTVar11->AllocatorInstance).Data;
      pTVar10 = pTVar11;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
    }
    else {
      pTVar10 = pTVar13->Ptr;
      pTVar13->Ptr = pTVar11;
      if (pTVar10 == (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)0x0)
      goto joined_r0x00014aed36ef;
      pFVar3 = (pTVar10->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
    }
    ::operator_delete(pTVar10,0x10);
  }
  else {
    if ((pIVar2 == (IDataChannel *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    pIVar2 = param_1[2].DataChannel.Object;
    pTVar12 = (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)pIVar2->_padding_;
    pIVar2->_padding_ = 0;
    lVar5 = pIVar2->_padding_;
    iVar1 = *(int *)((longlong)&pIVar2->_padding_ + 4);
    pIVar2->_padding_ = 0;
    pTVar11 = pTVar13->Ptr;
    if (pTVar11 != &local_40) {
      pFVar3 = (pTVar11->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)pTVar12;
      pTVar11->ArrayNum = (int)lVar5;
      pTVar11->ArrayMax = iVar1;
      pTVar12 = (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)0x0;
    }
  }
joined_r0x00014aed36ef:
  if (pTVar12 != (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(pTVar12);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return true;
}

// PopOpaque @ 14aed3750

void __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::PopOpaque
          (TCopyableDataChannel<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          IReceiver *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  int iVar2;
  TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  FName *pFVar8;
  ForAnyElementType *pFVar9;
  int *piVar10;
  FName local_res8;
  undefined8 local_38;
  IReceiver *local_30;
  FName *local_28;
  
  pFVar8 = GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
  local_res8 = *pFVar8;
  if ((FName)param_1->_padding_ != local_res8) {
    local_28 = &local_res8;
    local_30 = param_1;
    bVar7 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>'
            ::__l2::<lambda_1>::operator()(&local_30);
    if (!bVar7) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CheckType<TSenderImplementation>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                         ,0xd5,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar3 = (this->AtomicData).Ptr;
    if ((pTVar3 != (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)0x0) &&
       (this->PayloadID != param_1[1]._padding_)) {
      plVar1 = &param_1[1]._padding_;
      param_1[1]._padding_ = this->PayloadID;
      if ((TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)param_1[1]._padding_ ==
          (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar9 = ::operator_new(0x10);
        if (pFVar9 == (ForAnyElementType *)0x0) {
          pFVar9 = (ForAnyElementType *)0x0;
        }
        else {
          pFVar9->Data = (FScriptContainerElement *)0x0;
          iVar2 = pTVar3->ArrayNum;
          pFVar4 = (pTVar3->AllocatorInstance).Data;
          *(int *)&pFVar9[1].Data = iVar2;
          piVar10 = (int *)((longlong)&pFVar9[1].Data + 4);
          if (iVar2 == 0) {
            *piVar10 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar2,0,pFVar9,iVar2,piVar10);
            ConstructItems<Metasound::FTime,Metasound::FTime,int>
                      (pFVar9->Data,(FTime *)pFVar4,iVar2);
          }
        }
        if (plVar1 == &local_38) {
          if (pFVar9 != (ForAnyElementType *)0x0) {
            if (pFVar9->Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar9->Data);
            }
            ::operator_delete(pFVar9,0x10);
          }
        }
        else {
          puVar5 = (undefined8 *)*plVar1;
          *plVar1 = (longlong)pFVar9;
          if (puVar5 != (undefined8 *)0x0) {
            if ((void *)*puVar5 != (void *)0x0) {
              FMemory::Free((void *)*puVar5);
            }
            ::operator_delete(puVar5,0x10);
          }
        }
      }
      else {
        TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)param_1[1]._padding_,
                   pTVar3);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014aed38f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14aed3920

bool __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::IsEmpty
          (TCopyableDataChannel<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this)

{
  return (this->AtomicData).Ptr == (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)0x0;
}

// GetDataType @ 14aed3940

FName __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetDataType
          (TCopyableDataChannel<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14aed3970

bool __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::PushLiteral
          (TCopyableDataChannel<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          FLiteral *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *pTVar5;
  TUniquePtr<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
  *pTVar6;
  undefined8 local_28;
  TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> local_20;
  
  bVar4 = TLiteralTraits<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::IsParsable(param_1)
  ;
  if (!bVar4) {
    return false;
  }
  TDataLiteralFactory<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
  ::CreateExplicitArgs(&local_20,&this->OperatorSettings,param_1);
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar5 = (this->AtomicData).Ptr;
    pTVar6 = &this->AtomicData;
    if (pTVar5 == (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)0x0) {
      pTVar5 = ::operator_new(0x10);
      if (pTVar5 == (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)0x0) {
        pTVar5 = (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)0x0;
      }
      else {
        (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        pTVar5->ArrayNum = local_20.ArrayNum;
        if (local_20.ArrayNum == 0) {
          pTVar5->ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,local_20.ArrayNum,0,&pTVar5->AllocatorInstance,local_20.ArrayNum,
                     &pTVar5->ArrayMax);
          ConstructItems<Metasound::FTime,Metasound::FTime,int>
                    ((pTVar5->AllocatorInstance).Data,(FTime *)local_20.AllocatorInstance.Data,
                     local_20.ArrayNum);
        }
      }
      if (pTVar6 == (TUniquePtr<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
                     *)&local_28) {
        if (pTVar5 != (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)0x0) {
          pFVar3 = (pTVar5->AllocatorInstance).Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          ::operator_delete(pTVar5,0x10);
        }
      }
      else {
        pTVar2 = pTVar6->Ptr;
        pTVar6->Ptr = pTVar5;
        if (pTVar2 != (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)0x0) {
          pFVar3 = (pTVar2->AllocatorInstance).Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          ::operator_delete(pTVar2,0x10);
        }
      }
    }
    else if (pTVar5 != &local_20) {
      piVar1 = &pTVar5->ArrayMax;
      pTVar5->ArrayNum = local_20.ArrayNum;
      if ((local_20.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_20.ArrayNum,*piVar1,&pTVar5->AllocatorInstance,local_20.ArrayNum,piVar1
                  );
        ConstructItems<Metasound::FTime,Metasound::FTime,int>
                  ((pTVar5->AllocatorInstance).Data,(FTime *)local_20.AllocatorInstance.Data,
                   local_20.ArrayNum);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.AllocatorInstance.Data);
    }
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ConstructNewReceiverImplementation @ 14aed3bc0

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
ConstructNewReceiverImplementation
          (TCopyableDataChannel<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          FReceiverInitParams *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IDataChannel *pIVar2;
  FName FVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  TSharedRef<Metasound::IDataChannel,1> *pTVar6;
  FName *pFVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *in_R8;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  puVar8 = (undefined8 *)0x0;
  puVar5 = ::operator_new(0x40);
  puVar9 = puVar8;
  if (puVar5 != (undefined8 *)0x0) {
    pTVar6 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
    pIVar2 = pTVar6->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      pFVar7 = GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
      FVar3 = *pFVar7;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      *(FName *)(puVar5 + 1) = FVar3;
      puVar5[2] = pIVar2;
      puVar5[3] = 0;
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      pFVar7 = GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
      FVar3 = *pFVar7;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      *(FName *)(puVar5 + 1) = FVar3;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      puVar5[2] = pIVar2;
      puVar5[3] = pTVar1;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar5[4] = 0xffffffffffffffff;
    *puVar5 = &
              ___7__TReceiver_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    puVar5[5] = 0;
    uVar4 = in_R8[1];
    puVar5[6] = *in_R8;
    puVar5[7] = uVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar8 = puVar5;
    puVar9 = (undefined8 *)&DAT_00000001;
  }
  *(undefined8 **)&param_1->OperatorSettings = puVar8;
  if (puVar9 != (undefined8 *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_>)
         (IReceiver *)param_1;
}

// ConstructNewSenderImplementation @ 14aed3ce0

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
ConstructNewSenderImplementation
          (TCopyableDataChannel<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          FSenderInitParams *param_1)

{
  TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar2;
  TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)0x0;
  this_00 = ::operator_new(0x70);
  pTVar3 = pTVar2;
  if (this_00 != (TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)0x0) {
    pTVar1 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    local_38.Object = pTVar1->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (pTVar1->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
             TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(this_00,in_R8,&local_38)
    ;
    pTVar3 = (TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)&DAT_00000001;
  }
  *(TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> **)&param_1->OperatorSettings =
       pTVar2;
  if (pTVar3 != (TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14aed5910

long64 __thiscall
Metasound::TCopyableDataChannel<TArray<int,TSizedDefaultAllocator<32>_>_>::GetPayloadID
          (TCopyableDataChannel<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  return this->PayloadID;
}

// CreateNewPayloadID @ 14aed5920

long64 __thiscall
Metasound::TCopyableDataChannel<TArray<int,TSizedDefaultAllocator<32>_>_>::CreateNewPayloadID
          (TCopyableDataChannel<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  atomic<__int64> *paVar1;
  atomic<__int64> aVar2;
  
  LOCK();
  paVar1 = &this->PayloadIDCounter;
  aVar2 = *paVar1;
  *paVar1 = (atomic<__int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  return (long64)aVar2;
}

// PushOpaque @ 14aed5940

bool __thiscall
Metasound::TCopyableDataChannel<TArray<int,TSizedDefaultAllocator<32>_>_>::PushOpaque
          (TCopyableDataChannel<TArray<int,TSizedDefaultAllocator<32>_>_> *this,ISender *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  IDataChannel *pIVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 uVar7;
  FName *pFVar8;
  long64 lVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  TUniquePtr<TArray<int,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<int,TSizedDefaultAllocator<32>_>_>_>
  *pTVar13;
  FName local_res8;
  longlong local_58;
  ISender *local_50;
  FName *local_48;
  TArray<int,TSizedDefaultAllocator<32>_> local_40;
  
  pFVar8 = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
  local_res8 = *pFVar8;
  if ((FName)param_1->_padding_ != local_res8) {
    local_48 = &local_res8;
    local_50 = param_1;
    bVar6 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<TArray<int,TSizedDefaultAllocator<32>_>_>_>'::__l2::
            <lambda_1>::operator()(&local_50);
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CheckType<TSenderImplementation>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0xd5,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lVar9 = (**(code **)(param_1->_padding_ + 8))(param_1);
  this->PayloadID = lVar9;
  pTVar13 = &this->AtomicData;
  pIVar2 = param_1[2].DataChannel.Object;
  if (pTVar13->Ptr == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    if ((pIVar2 == (IDataChannel *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    pIVar2 = param_1[2].DataChannel.Object;
    pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)pIVar2->_padding_;
    pIVar2->_padding_ = 0;
    lVar5 = pIVar2->_padding_;
    iVar1 = *(int *)((longlong)&pIVar2->_padding_ + 4);
    pIVar2->_padding_ = 0;
    pTVar10 = ::operator_new(0x10);
    pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    if (pTVar10 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)pTVar12;
      pTVar10->ArrayNum = (int)lVar5;
      pTVar10->ArrayMax = iVar1;
      pTVar11 = pTVar10;
      pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    }
    if (pTVar13 ==
        (TUniquePtr<TArray<int,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<int,TSizedDefaultAllocator<32>_>_>_>
         *)&local_58) {
      if (pTVar11 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) goto joined_r0x00014aed5b1f;
      pFVar3 = (pTVar11->AllocatorInstance).Data;
      pTVar10 = pTVar11;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
    }
    else {
      pTVar10 = pTVar13->Ptr;
      pTVar13->Ptr = pTVar11;
      if (pTVar10 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) goto joined_r0x00014aed5b1f;
      pFVar3 = (pTVar10->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
    }
    ::operator_delete(pTVar10,0x10);
  }
  else {
    if ((pIVar2 == (IDataChannel *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    pIVar2 = param_1[2].DataChannel.Object;
    pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)pIVar2->_padding_;
    pIVar2->_padding_ = 0;
    lVar5 = pIVar2->_padding_;
    iVar1 = *(int *)((longlong)&pIVar2->_padding_ + 4);
    pIVar2->_padding_ = 0;
    pTVar11 = pTVar13->Ptr;
    if (pTVar11 != &local_40) {
      pFVar3 = (pTVar11->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)pTVar12;
      pTVar11->ArrayNum = (int)lVar5;
      pTVar11->ArrayMax = iVar1;
      pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    }
  }
joined_r0x00014aed5b1f:
  if (pTVar12 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(pTVar12);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return true;
}

// PopOpaque @ 14aed5b70

void __thiscall
Metasound::TCopyableDataChannel<TArray<int,TSizedDefaultAllocator<32>_>_>::PopOpaque
          (TCopyableDataChannel<TArray<int,TSizedDefaultAllocator<32>_>_> *this,IReceiver *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  int iVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *_Src;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  FName *pFVar7;
  ForAnyElementType *pFVar8;
  int *piVar9;
  FName local_res8;
  undefined8 local_38;
  IReceiver *local_30;
  FName *local_28;
  
  pFVar7 = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_28 = &local_res8;
    local_30 = param_1;
    bVar6 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<TArray<int,TSizedDefaultAllocator<32>_>_>_>'::__l2::
            <lambda_1>::operator()(&local_30);
    if (!bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CheckType<TSenderImplementation>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                         ,0xd5,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar3 = (this->AtomicData).Ptr;
    if ((pTVar3 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
       (this->PayloadID != param_1[1]._padding_)) {
      plVar1 = &param_1[1]._padding_;
      param_1[1]._padding_ = this->PayloadID;
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)param_1[1]._padding_ ==
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar8 = ::operator_new(0x10);
        if (pFVar8 == (ForAnyElementType *)0x0) {
          pFVar8 = (ForAnyElementType *)0x0;
        }
        else {
          pFVar8->Data = (FScriptContainerElement *)0x0;
          iVar2 = pTVar3->ArrayNum;
          _Src = (pTVar3->AllocatorInstance).Data;
          *(int *)&pFVar8[1].Data = iVar2;
          piVar9 = (int *)((longlong)&pFVar8[1].Data + 4);
          if (iVar2 == 0) {
            *piVar9 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar2,0,pFVar8,iVar2,piVar9);
            memcpy(pFVar8->Data,_Src,(longlong)iVar2 << 2);
          }
        }
        if (plVar1 == &local_38) {
          if (pFVar8 != (ForAnyElementType *)0x0) {
            if (pFVar8->Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar8->Data);
            }
            ::operator_delete(pFVar8,0x10);
          }
        }
        else {
          puVar4 = (undefined8 *)*plVar1;
          *plVar1 = (longlong)pFVar8;
          if (puVar4 != (undefined8 *)0x0) {
            if ((void *)*puVar4 != (void *)0x0) {
              FMemory::Free((void *)*puVar4);
            }
            ::operator_delete(puVar4,0x10);
          }
        }
      }
      else {
        TArray<int,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)param_1[1]._padding_,pTVar3);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014aed5d15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14aed5d30

bool __thiscall
Metasound::TCopyableDataChannel<TArray<int,TSizedDefaultAllocator<32>_>_>::IsEmpty
          (TCopyableDataChannel<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  return (this->AtomicData).Ptr == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
}

// GetDataType @ 14aed5dc0

FName __thiscall
Metasound::TCopyableDataChannel<TArray<int,TSizedDefaultAllocator<32>_>_>::GetDataType
          (TCopyableDataChannel<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14aed5e50

bool __thiscall
Metasound::TCopyableDataChannel<TArray<int,TSizedDefaultAllocator<32>_>_>::PushLiteral
          (TCopyableDataChannel<TArray<int,TSizedDefaultAllocator<32>_>_> *this,FLiteral *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  TUniquePtr<TArray<int,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<int,TSizedDefaultAllocator<32>_>_>_>
  *pTVar6;
  undefined8 local_28;
  TArray<int,TSizedDefaultAllocator<32>_> local_20;
  
  bVar4 = TLiteralTraits<TArray<int,TSizedDefaultAllocator<32>_>_>::IsParsable(param_1);
  if (!bVar4) {
    return false;
  }
  TDataLiteralFactory<TArray<int,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
  ::CreateExplicitArgs(&local_20,&this->OperatorSettings,param_1);
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar5 = (this->AtomicData).Ptr;
    pTVar6 = &this->AtomicData;
    if (pTVar5 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      pTVar5 = ::operator_new(0x10);
      if (pTVar5 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
      }
      else {
        (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        pTVar5->ArrayNum = local_20.ArrayNum;
        if (local_20.ArrayNum == 0) {
          pTVar5->ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_20.ArrayNum,0,&pTVar5->AllocatorInstance,local_20.ArrayNum,
                     &pTVar5->ArrayMax);
          memcpy((pTVar5->AllocatorInstance).Data,local_20.AllocatorInstance.Data,
                 (longlong)local_20.ArrayNum << 2);
        }
      }
      if (pTVar6 == (TUniquePtr<TArray<int,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                     *)&local_28) {
        if (pTVar5 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          pFVar3 = (pTVar5->AllocatorInstance).Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          ::operator_delete(pTVar5,0x10);
        }
      }
      else {
        pTVar2 = pTVar6->Ptr;
        pTVar6->Ptr = pTVar5;
        if (pTVar2 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          pFVar3 = (pTVar2->AllocatorInstance).Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          ::operator_delete(pTVar2,0x10);
        }
      }
    }
    else if (pTVar5 != &local_20) {
      piVar1 = &pTVar5->ArrayMax;
      pTVar5->ArrayNum = local_20.ArrayNum;
      if ((local_20.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_20.ArrayNum,*piVar1,&pTVar5->AllocatorInstance,local_20.ArrayNum,piVar1
                  );
        if (local_20.ArrayNum != 0) {
          memcpy((pTVar5->AllocatorInstance).Data,local_20.AllocatorInstance.Data,
                 (longlong)local_20.ArrayNum << 2);
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.AllocatorInstance.Data);
    }
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ConstructNewReceiverImplementation @ 14aed6190

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<TArray<int,TSizedDefaultAllocator<32>_>_>::
ConstructNewReceiverImplementation
          (TCopyableDataChannel<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          FReceiverInitParams *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IDataChannel *pIVar2;
  FName FVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  TSharedRef<Metasound::IDataChannel,1> *pTVar6;
  FName *pFVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *in_R8;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  puVar8 = (undefined8 *)0x0;
  puVar5 = ::operator_new(0x40);
  puVar9 = puVar8;
  if (puVar5 != (undefined8 *)0x0) {
    pTVar6 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
    pIVar2 = pTVar6->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      pFVar7 = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
      FVar3 = *pFVar7;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      *(FName *)(puVar5 + 1) = FVar3;
      puVar5[2] = pIVar2;
      puVar5[3] = 0;
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      pFVar7 = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
      FVar3 = *pFVar7;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      *(FName *)(puVar5 + 1) = FVar3;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      puVar5[2] = pIVar2;
      puVar5[3] = pTVar1;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar5[4] = 0xffffffffffffffff;
    *puVar5 = &___7__TReceiver_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    puVar5[5] = 0;
    uVar4 = in_R8[1];
    puVar5[6] = *in_R8;
    puVar5[7] = uVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar8 = puVar5;
    puVar9 = (undefined8 *)&DAT_00000001;
  }
  *(undefined8 **)&param_1->OperatorSettings = puVar8;
  if (puVar9 != (undefined8 *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_>)
         (IReceiver *)param_1;
}

// ConstructNewSenderImplementation @ 14aed62e0

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<TArray<int,TSizedDefaultAllocator<32>_>_>::
ConstructNewSenderImplementation
          (TCopyableDataChannel<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          FSenderInitParams *param_1)

{
  TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar2;
  TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
  this_00 = ::operator_new(0x70);
  pTVar3 = pTVar2;
  if (this_00 != (TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    pTVar1 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    local_38.Object = pTVar1->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (pTVar1->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = TSender<TArray<int,TSizedDefaultAllocator<32>_>_>::
             TSender<TArray<int,TSizedDefaultAllocator<32>_>_>(this_00,in_R8,&local_38);
    pTVar3 = (TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *)&DAT_00000001;
  }
  *(TSender<TArray<int,TSizedDefaultAllocator<32>_>_> **)&param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14aedb320

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::FTime>::GetPayloadID
          (TCopyableDataChannel<Metasound::FTime> *this)

{
  return this->PayloadID;
}

// CreateNewPayloadID @ 14aedb370

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::FTime>::CreateNewPayloadID
          (TCopyableDataChannel<Metasound::FTime> *this)

{
  atomic<__int64> *paVar1;
  atomic<__int64> aVar2;
  
  LOCK();
  paVar1 = &this->PayloadIDCounter;
  aVar2 = *paVar1;
  *paVar1 = (atomic<__int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  return (long64)aVar2;
}

// PushOpaque @ 14aedb3b0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::FTime>::PushOpaque
          (TCopyableDataChannel<Metasound::FTime> *this,ISender *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  double dVar1;
  IDataChannel *pIVar2;
  FTime *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FName *pFVar7;
  long64 lVar8;
  FTime *pFVar9;
  TUniquePtr<Metasound::FTime,TDefaultDelete<Metasound::FTime>_> *pTVar10;
  FName local_res8;
  longlong local_38;
  ISender *local_30;
  FName *local_28;
  
  pFVar7 = GetMetasoundDataTypeName<Metasound::FTime>();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_28 = &local_res8;
    local_30 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<Metasound::FTime>_>'::
            __l2::<lambda_1>::operator()(&local_30);
    if (!bVar5) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CheckType<TSenderImplementation>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                         ,0xd5,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lVar8 = (**(code **)(param_1->_padding_ + 8))(param_1);
    this->PayloadID = lVar8;
    pTVar10 = &this->AtomicData;
    pIVar2 = param_1[2].DataChannel.Object;
    if (pTVar10->Ptr == (FTime *)0x0) {
      if (pIVar2 == (IDataChannel *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      dVar1 = (double)(param_1[2].DataChannel.Object)->_padding_;
      pFVar9 = ::operator_new(8);
      if (pFVar9 == (FTime *)0x0) {
        pFVar9 = (FTime *)0x0;
      }
      else {
        pFVar9->Time = dVar1;
      }
      if (pTVar10 != (TUniquePtr<Metasound::FTime,TDefaultDelete<Metasound::FTime>_> *)&local_38) {
        pFVar3 = pTVar10->Ptr;
        pTVar10->Ptr = pFVar9;
        pFVar9 = (FTime *)0x0;
        ::operator_delete(pFVar3,8);
      }
      ::operator_delete(pFVar9,8);
    }
    else {
      if (pIVar2 == (IDataChannel *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      pTVar10->Ptr->Time = (double)(param_1[2].DataChannel.Object)->_padding_;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// PopOpaque @ 14aedb550

void __thiscall
Metasound::TCopyableDataChannel<Metasound::FTime>::PopOpaque
          (TCopyableDataChannel<Metasound::FTime> *this,IReceiver *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  FTime *pFVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  double *pdVar7;
  FName local_res8;
  undefined8 local_28;
  IReceiver *local_20;
  FName *local_18;
  
  pFVar6 = GetMetasoundDataTypeName<Metasound::FTime>();
  local_res8 = *pFVar6;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::CheckType<Metasound::TReceiver<Metasound::FTime>_>'::
            __l2::<lambda_1>::operator()(&local_20);
    if (!bVar5) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CheckType<TSenderImplementation>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                         ,0xd5,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar2 = (this->AtomicData).Ptr;
    if ((pFVar2 != (FTime *)0x0) && (this->PayloadID != param_1[1]._padding_)) {
      plVar1 = &param_1[1]._padding_;
      param_1[1]._padding_ = this->PayloadID;
      if ((double *)param_1[1]._padding_ == (double *)0x0) {
        pdVar7 = ::operator_new(8);
        if (pdVar7 == (double *)0x0) {
          pdVar7 = (double *)0x0;
        }
        else {
          *pdVar7 = pFVar2->Time;
        }
        if (plVar1 != &local_28) {
          pvVar3 = (void *)*plVar1;
          *plVar1 = (longlong)pdVar7;
          pdVar7 = (double *)0x0;
          ::operator_delete(pvVar3,8);
        }
        ::operator_delete(pdVar7,8);
      }
      else {
        *(double *)param_1[1]._padding_ = pFVar2->Time;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014aedb65e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14aedb680

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::FTime>::IsEmpty
          (TCopyableDataChannel<Metasound::FTime> *this)

{
  return (this->AtomicData).Ptr == (FTime *)0x0;
}

// GetDataType @ 14aedb690

FName __thiscall
Metasound::TCopyableDataChannel<Metasound::FTime>::GetDataType
          (TCopyableDataChannel<Metasound::FTime> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::FTime>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14aedb6c0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::FTime>::PushLiteral
          (TCopyableDataChannel<Metasound::FTime> *this,FLiteral *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TUniquePtr<Metasound::FTime,TDefaultDelete<Metasound::FTime>_> *pTVar1;
  FTime *pFVar2;
  bool bVar3;
  FTime *pFVar4;
  double local_res18 [2];
  undefined8 local_18 [2];
  
  bVar3 = TLiteralTraits<Metasound::FTime>::IsParsable(param_1);
  if (!bVar3) {
    return false;
  }
  TDataLiteralFactory<Metasound::FTime,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FTime>_>
  ::CreateExplicitArgs((FOperatorSettings *)local_res18,(FLiteral *)&this->OperatorSettings);
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar4 = (this->AtomicData).Ptr;
    pTVar1 = &this->AtomicData;
    if (pFVar4 == (FTime *)0x0) {
      pFVar4 = ::operator_new(8);
      if (pFVar4 == (FTime *)0x0) {
        pFVar4 = (FTime *)0x0;
      }
      else {
        pFVar4->Time = local_res18[0];
      }
      if (pTVar1 != (TUniquePtr<Metasound::FTime,TDefaultDelete<Metasound::FTime>_> *)local_18) {
        pFVar2 = pTVar1->Ptr;
        pTVar1->Ptr = pFVar4;
        pFVar4 = (FTime *)0x0;
        ::operator_delete(pFVar2,8);
      }
      ::operator_delete(pFVar4,8);
    }
    else {
      pFVar4->Time = local_res18[0];
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ConstructNewReceiverImplementation @ 14aedb7b0

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::FTime>::ConstructNewReceiverImplementation
          (TCopyableDataChannel<Metasound::FTime> *this,FReceiverInitParams *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IDataChannel *pIVar2;
  FName FVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  TSharedRef<Metasound::IDataChannel,1> *pTVar6;
  FName *pFVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *in_R8;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  puVar8 = (undefined8 *)0x0;
  puVar5 = ::operator_new(0x40);
  puVar9 = puVar8;
  if (puVar5 != (undefined8 *)0x0) {
    pTVar6 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
    pIVar2 = pTVar6->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      pFVar7 = GetMetasoundDataTypeName<Metasound::FTime>();
      FVar3 = *pFVar7;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      *(FName *)(puVar5 + 1) = FVar3;
      puVar5[2] = pIVar2;
      puVar5[3] = 0;
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      pFVar7 = GetMetasoundDataTypeName<Metasound::FTime>();
      FVar3 = *pFVar7;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      *(FName *)(puVar5 + 1) = FVar3;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      puVar5[2] = pIVar2;
      puVar5[3] = pTVar1;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar5[4] = 0xffffffffffffffff;
    *puVar5 = &___7__TReceiver_VFTime_Metasound___Metasound__6B_;
    puVar5[5] = 0;
    uVar4 = in_R8[1];
    puVar5[6] = *in_R8;
    puVar5[7] = uVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar8 = puVar5;
    puVar9 = (undefined8 *)&DAT_00000001;
  }
  *(undefined8 **)&param_1->OperatorSettings = puVar8;
  if (puVar9 != (undefined8 *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_>)
         (IReceiver *)param_1;
}

// ConstructNewSenderImplementation @ 14aedb970

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::FTime>::ConstructNewSenderImplementation
          (TCopyableDataChannel<Metasound::FTime> *this,FSenderInitParams *param_1)

{
  TSender<Metasound::FTime> *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<Metasound::FTime> *pTVar2;
  TSender<Metasound::FTime> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<Metasound::FTime> *)0x0;
  this_00 = ::operator_new(0x70);
  pTVar3 = pTVar2;
  if (this_00 != (TSender<Metasound::FTime> *)0x0) {
    pTVar1 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    local_38.Object = pTVar1->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (pTVar1->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = TSender<Metasound::FTime>::TSender<Metasound::FTime>(this_00,in_R8,&local_38);
    pTVar3 = (TSender<Metasound::FTime> *)&DAT_00000001;
  }
  *(TSender<Metasound::FTime> **)&param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<Metasound::FTime> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14aee0c40

long64 __thiscall
Metasound::TCopyableDataChannel<float>::GetPayloadID(TCopyableDataChannel<float> *this)

{
  return this->PayloadID;
}

// CreateNewPayloadID @ 14aee0c50

long64 __thiscall
Metasound::TCopyableDataChannel<float>::CreateNewPayloadID(TCopyableDataChannel<float> *this)

{
  atomic<__int64> *paVar1;
  atomic<__int64> aVar2;
  
  LOCK();
  paVar1 = &this->PayloadIDCounter;
  aVar2 = *paVar1;
  *paVar1 = (atomic<__int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  return (long64)aVar2;
}

// PushOpaque @ 14aee0c70

bool __thiscall
Metasound::TCopyableDataChannel<float>::PushOpaque
          (TCopyableDataChannel<float> *this,ISender *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  IDataChannel *pIVar2;
  float *pfVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FName *pFVar7;
  long64 lVar8;
  float *pfVar9;
  TUniquePtr<float,TDefaultDelete<float>_> *pTVar10;
  FName local_res8;
  longlong local_38;
  ISender *local_30;
  FName *local_28;
  
  pFVar7 = GetMetasoundDataTypeName<float>();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_28 = &local_res8;
    local_30 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<float>_>'::__l2::
            <lambda_1>::operator()(&local_30);
    if (!bVar5) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CheckType<TSenderImplementation>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                         ,0xd5,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lVar8 = (**(code **)(param_1->_padding_ + 8))(param_1);
    this->PayloadID = lVar8;
    pTVar10 = &this->AtomicData;
    pIVar2 = param_1[2].DataChannel.Object;
    if (pTVar10->Ptr == (float *)0x0) {
      if (pIVar2 == (IDataChannel *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      fVar1 = *(float *)&(param_1[2].DataChannel.Object)->_padding_;
      pfVar9 = ::operator_new(4);
      if (pfVar9 == (float *)0x0) {
        pfVar9 = (float *)0x0;
      }
      else {
        *pfVar9 = fVar1;
      }
      if (pTVar10 != (TUniquePtr<float,TDefaultDelete<float>_> *)&local_38) {
        pfVar3 = pTVar10->Ptr;
        pTVar10->Ptr = pfVar9;
        pfVar9 = (float *)0x0;
        ::operator_delete(pfVar3,4);
      }
      ::operator_delete(pfVar9,4);
    }
    else {
      if (pIVar2 == (IDataChannel *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      *pTVar10->Ptr = *(float *)&(param_1[2].DataChannel.Object)->_padding_;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// PopOpaque @ 14aee0e10

void __thiscall
Metasound::TCopyableDataChannel<float>::PopOpaque
          (TCopyableDataChannel<float> *this,IReceiver *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  float *pfVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  float *pfVar7;
  FName local_res8;
  undefined8 local_28;
  IReceiver *local_20;
  FName *local_18;
  
  pFVar6 = GetMetasoundDataTypeName<float>();
  local_res8 = *pFVar6;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::CheckType<Metasound::TReceiver<float>_>'::__l2::
            <lambda_1>::operator()(&local_20);
    if (!bVar5) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CheckType<TSenderImplementation>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                         ,0xd5,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pfVar2 = (this->AtomicData).Ptr;
    if ((pfVar2 != (float *)0x0) && (this->PayloadID != param_1[1]._padding_)) {
      plVar1 = &param_1[1]._padding_;
      param_1[1]._padding_ = this->PayloadID;
      if ((float *)param_1[1]._padding_ == (float *)0x0) {
        pfVar7 = ::operator_new(4);
        if (pfVar7 == (float *)0x0) {
          pfVar7 = (float *)0x0;
        }
        else {
          *pfVar7 = *pfVar2;
        }
        if (plVar1 != &local_28) {
          pvVar3 = (void *)*plVar1;
          *plVar1 = (longlong)pfVar7;
          pfVar7 = (float *)0x0;
          ::operator_delete(pvVar3,4);
        }
        ::operator_delete(pfVar7,4);
      }
      else {
        *(float *)param_1[1]._padding_ = *pfVar2;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014aee0f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14aee0f30

bool __thiscall Metasound::TCopyableDataChannel<float>::IsEmpty(TCopyableDataChannel<float> *this)

{
  return (this->AtomicData).Ptr == (float *)0x0;
}

// GetDataType @ 14aee0f60

FName __thiscall
Metasound::TCopyableDataChannel<float>::GetDataType(TCopyableDataChannel<float> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<float>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14aee0f90

bool __thiscall
Metasound::TCopyableDataChannel<float>::PushLiteral
          (TCopyableDataChannel<float> *this,FLiteral *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TUniquePtr<float,TDefaultDelete<float>_> *pTVar1;
  float *pfVar2;
  bool bVar3;
  float *pfVar4;
  float fVar5;
  undefined8 local_28 [4];
  
  bVar3 = TLiteralTraits<float>::IsParsable(param_1);
  if (!bVar3) {
    return false;
  }
  fVar5 = TDataLiteralFactory<float,Metasound::DataFactoryPrivate::TDataTypeCreator<float>_>::
          CreateExplicitArgs(&this->OperatorSettings,param_1);
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pfVar4 = (this->AtomicData).Ptr;
    pTVar1 = &this->AtomicData;
    if (pfVar4 == (float *)0x0) {
      pfVar4 = ::operator_new(4);
      if (pfVar4 == (float *)0x0) {
        pfVar4 = (float *)0x0;
      }
      else {
        *pfVar4 = fVar5;
      }
      if (pTVar1 != (TUniquePtr<float,TDefaultDelete<float>_> *)local_28) {
        pfVar2 = pTVar1->Ptr;
        pTVar1->Ptr = pfVar4;
        pfVar4 = (float *)0x0;
        ::operator_delete(pfVar2,4);
      }
      ::operator_delete(pfVar4,4);
    }
    else {
      *pfVar4 = fVar5;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ConstructNewReceiverImplementation @ 14aee1090

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<float>::ConstructNewReceiverImplementation
          (TCopyableDataChannel<float> *this,FReceiverInitParams *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IDataChannel *pIVar2;
  FName FVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  TSharedRef<Metasound::IDataChannel,1> *pTVar6;
  FName *pFVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *in_R8;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  puVar8 = (undefined8 *)0x0;
  puVar5 = ::operator_new(0x40);
  puVar9 = puVar8;
  if (puVar5 != (undefined8 *)0x0) {
    pTVar6 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
    pIVar2 = pTVar6->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      pFVar7 = GetMetasoundDataTypeName<float>();
      FVar3 = *pFVar7;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      *(FName *)(puVar5 + 1) = FVar3;
      puVar5[2] = pIVar2;
      puVar5[3] = 0;
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      pFVar7 = GetMetasoundDataTypeName<float>();
      FVar3 = *pFVar7;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      *(FName *)(puVar5 + 1) = FVar3;
      *puVar5 = &___7IReceiver_Metasound__6B_;
      puVar5[2] = pIVar2;
      puVar5[3] = pTVar1;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar5[4] = 0xffffffffffffffff;
    *puVar5 = &___7__TReceiver_M_Metasound__6B_;
    puVar5[5] = 0;
    uVar4 = in_R8[1];
    puVar5[6] = *in_R8;
    puVar5[7] = uVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar8 = puVar5;
    puVar9 = (undefined8 *)&DAT_00000001;
  }
  *(undefined8 **)&param_1->OperatorSettings = puVar8;
  if (puVar9 != (undefined8 *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_>)
         (IReceiver *)param_1;
}

// ConstructNewSenderImplementation @ 14aee1230

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<float>::ConstructNewSenderImplementation
          (TCopyableDataChannel<float> *this,FSenderInitParams *param_1)

{
  TSender<float> *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<float> *pTVar2;
  TSender<float> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<float> *)0x0;
  this_00 = ::operator_new(0x70);
  pTVar3 = pTVar2;
  if (this_00 != (TSender<float> *)0x0) {
    pTVar1 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                       ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_28);
    local_38.Object = pTVar1->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (pTVar1->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = TSender<float>::TSender<float>(this_00,in_R8,&local_38);
    pTVar3 = (TSender<float> *)&DAT_00000001;
  }
  *(TSender<float> **)&param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<float> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

