// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 171

// GetPayloadID @ 14afd9330

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
GetPayloadID(void *this)

{
  return *(long64 *)((longlong)this + 0x58);
}

// CreateNewPayloadID @ 14afd9340

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
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

// PushOpaque @ 14afd9360

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
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
  
  pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>()
  ;
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>'
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

// PopOpaque @ 14afd94e0

void __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
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
  
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>()
  ;
  local_res8 = *pFVar6;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>'
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
                    /* WARNING: Could not recover jumptable at 0x00014afd95ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14afd9600

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
IsEmpty(void *this)

{
  return *(longlong *)((longlong)this + 0x28) == 0;
}

// GetDataType @ 14afd9610

FName __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
GetDataType(void *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>()
  ;
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14afd9640

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
PushLiteral(void *this,FLiteral *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  void *pvVar2;
  bool bVar3;
  int *piVar4;
  FOperatorSettings local_res18;
  undefined8 local_18 [2];
  
  bVar3 = TLiteralTraits<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::IsParsable
                    (param_1);
  if (!bVar3) {
    return false;
  }
  TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
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

// ConstructNewReceiverImplementation @ 14afd9720

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
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
              ___7__TReceiver_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
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

// ConstructNewSenderImplementation @ 14afd9840

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
ConstructNewSenderImplementation(void *this,FSenderInitParams *param_1)

{
  void *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar2;
  TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)0x0;
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
    pTVar2 = TSender<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
             TSender<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
                       (this_00,in_R8,&local_38);
    pTVar3 = (TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)&DAT_00000001;
  }
  *(TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> **)&param_1->OperatorSettings
       = pTVar2;
  if (pTVar3 != (TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14afdbf80

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::GetPayloadID
          (void *this)

{
  return *(long64 *)((longlong)this + 0x58);
}

// CreateNewPayloadID @ 14afdbf90

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
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

// PushOpaque @ 14afdbfb0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::PushOpaque
          (void *this,ISender *param_1)

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
  
  pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>'::
            __l2::<lambda_1>::operator()(&local_20);
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

// PopOpaque @ 14afdc130

void __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::PopOpaque
          (void *this,IReceiver *param_1)

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
  
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>();
  local_res8 = *pFVar6;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>'
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
                    /* WARNING: Could not recover jumptable at 0x00014afdc23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14afdc250

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::IsEmpty
          (void *this)

{
  return *(longlong *)((longlong)this + 0x28) == 0;
}

// GetDataType @ 14afdc260

FName __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::GetDataType
          (void *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14afdc290

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::PushLiteral
          (void *this,FLiteral *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  void *pvVar2;
  bool bVar3;
  int *piVar4;
  FOperatorSettings local_res18;
  undefined8 local_18 [2];
  
  bVar3 = TLiteralTraits<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::IsParsable(param_1);
  if (!bVar3) {
    return false;
  }
  TDataLiteralFactory<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
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

// ConstructNewReceiverImplementation @ 14afdc370

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>();
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>();
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
    *puVar5 = &___7__TReceiver_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_;
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

// ConstructNewSenderImplementation @ 14afdc490

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
ConstructNewSenderImplementation(void *this,FSenderInitParams *param_1)

{
  void *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar2;
  TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)0x0;
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
    pTVar2 = TSender<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
             TSender<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>(this_00,in_R8,&local_38);
    pTVar3 = (TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)&DAT_00000001;
  }
  *(TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> **)&param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14b040ba0

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::GetPayloadID
          (void *this)

{
  return *(long64 *)((longlong)this + 0x58);
}

// CreateNewPayloadID @ 14b040bb0

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
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

// PushOpaque @ 14b040bd0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::PushOpaque
          (void *this,ISender *param_1)

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
  
  pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>'::
            __l2::<lambda_1>::operator()(&local_20);
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

// PopOpaque @ 14b040d50

void __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::PopOpaque
          (void *this,IReceiver *param_1)

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
  
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
  local_res8 = *pFVar6;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>'::
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
                    /* WARNING: Could not recover jumptable at 0x00014b040e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14b040e70

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::IsEmpty
          (void *this)

{
  return *(longlong *)((longlong)this + 0x28) == 0;
}

// GetDataType @ 14b040e80

FName __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::GetDataType
          (void *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14b040eb0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::PushLiteral
          (void *this,FLiteral *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  void *pvVar2;
  bool bVar3;
  int *piVar4;
  FOperatorSettings local_res18;
  undefined8 local_18 [2];
  
  bVar3 = TLiteralTraits<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::IsParsable(param_1);
  if (!bVar3) {
    return false;
  }
  TDataLiteralFactory<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
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

// ConstructNewReceiverImplementation @ 14b041020

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
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
    *puVar5 = &___7__TReceiver_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_;
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

// ConstructNewSenderImplementation @ 14b041140

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
ConstructNewSenderImplementation(void *this,FSenderInitParams *param_1)

{
  void *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar2;
  TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)0x0;
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
    pTVar2 = TSender<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
             TSender<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>(this_00,in_R8,&local_38);
    pTVar3 = (TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)&DAT_00000001;
  }
  *(TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_> **)&param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14b081790

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
GetPayloadID(void *this)

{
  return *(long64 *)((longlong)this + 0x58);
}

// CreateNewPayloadID @ 14b0817a0

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
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

// PushOpaque @ 14b0817c0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::PushOpaque
          (void *this,ISender *param_1)

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
  
  pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>'
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

// PopOpaque @ 14b081940

void __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::PopOpaque
          (void *this,IReceiver *param_1)

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
  
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>();
  local_res8 = *pFVar6;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>'
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
                    /* WARNING: Could not recover jumptable at 0x00014b081a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14b081a60

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::IsEmpty
          (void *this)

{
  return *(longlong *)((longlong)this + 0x28) == 0;
}

// GetDataType @ 14b081a70

FName __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::GetDataType
          (void *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14b081aa0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::PushLiteral
          (void *this,FLiteral *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  void *pvVar2;
  bool bVar3;
  int *piVar4;
  FOperatorSettings local_res18;
  undefined8 local_18 [2];
  
  bVar3 = TLiteralTraits<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::IsParsable
                    (param_1);
  if (!bVar3) {
    return false;
  }
  TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
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

// ConstructNewReceiverImplementation @ 14b081c10

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>();
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>();
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
              ___7__TReceiver_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
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

// ConstructNewSenderImplementation @ 14b081d30

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
ConstructNewSenderImplementation(void *this,FSenderInitParams *param_1)

{
  void *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar2;
  TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)0x0;
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
    pTVar2 = TSender<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
             TSender<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
                       (this_00,in_R8,&local_38);
    pTVar3 = (TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)&DAT_00000001;
  }
  *(TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> **)&param_1->OperatorSettings =
       pTVar2;
  if (pTVar3 != (TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14b0854f0

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::GetPayloadID
          (void *this)

{
  return *(long64 *)((longlong)this + 0x58);
}

// CreateNewPayloadID @ 14b085500

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
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

// PushOpaque @ 14b085520

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::PushOpaque
          (void *this,ISender *param_1)

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
  
  pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>'::__l2
            ::<lambda_1>::operator()(&local_20);
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

// PopOpaque @ 14b0856a0

void __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::PopOpaque
          (void *this,IReceiver *param_1)

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
  
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>();
  local_res8 = *pFVar6;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>'::
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
                    /* WARNING: Could not recover jumptable at 0x00014b0857ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14b0857c0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::IsEmpty
          (void *this)

{
  return *(longlong *)((longlong)this + 0x28) == 0;
}

// GetDataType @ 14b0857d0

FName __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::GetDataType
          (void *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14b085800

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::PushLiteral
          (void *this,FLiteral *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  void *pvVar2;
  bool bVar3;
  int *piVar4;
  FOperatorSettings local_res18;
  undefined8 local_18 [2];
  
  bVar3 = TLiteralTraits<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::IsParsable(param_1);
  if (!bVar3) {
    return false;
  }
  TDataLiteralFactory<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
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

// ConstructNewReceiverImplementation @ 14b0858e0

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>();
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>();
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
    *puVar5 = &___7__TReceiver_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
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

// ConstructNewSenderImplementation @ 14b085a00

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
ConstructNewSenderImplementation(void *this,FSenderInitParams *param_1)

{
  void *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar2;
  TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)0x0;
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
    pTVar2 = TSender<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
             TSender<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>(this_00,in_R8,&local_38);
    pTVar3 = (TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)&DAT_00000001;
  }
  *(TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> **)&param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14b088b30

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::GetPayloadID
          (void *this)

{
  return *(long64 *)((longlong)this + 0x58);
}

// CreateNewPayloadID @ 14b088b40

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::CreateNewPayloadID
          (void *this)

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

// PushOpaque @ 14b088b60

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::PushOpaque
          (void *this,ISender *param_1)

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
  
  pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>'::__l2::
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

// PopOpaque @ 14b088ce0

void __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::PopOpaque
          (void *this,IReceiver *param_1)

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
  
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>();
  local_res8 = *pFVar6;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>'::__l2
            ::<lambda_1>::operator()(&local_20);
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
                    /* WARNING: Could not recover jumptable at 0x00014b088dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14b088e00

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::IsEmpty(void *this)

{
  return *(longlong *)((longlong)this + 0x28) == 0;
}

// GetDataType @ 14b088e10

FName __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::GetDataType
          (void *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14b088e40

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::PushLiteral
          (void *this,FLiteral *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  void *pvVar2;
  bool bVar3;
  int *piVar4;
  FOperatorSettings local_res18;
  undefined8 local_18 [2];
  
  bVar3 = TLiteralTraits<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::IsParsable(param_1);
  if (!bVar3) {
    return false;
  }
  TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EKneeMode,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
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

// ConstructNewReceiverImplementation @ 14b088f20

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>();
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>();
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
    *puVar5 = &___7__TReceiver_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
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

// ConstructNewSenderImplementation @ 14b089040

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
ConstructNewSenderImplementation(void *this,FSenderInitParams *param_1)

{
  void *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar2;
  TSender<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<Metasound::TEnum<Metasound::EKneeMode,0>_> *)0x0;
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
    pTVar2 = TSender<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
             TSender<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>(this_00,in_R8,&local_38);
    pTVar3 = (TSender<Metasound::TEnum<Metasound::EKneeMode,0>_> *)&DAT_00000001;
  }
  *(TSender<Metasound::TEnum<Metasound::EKneeMode,0>_> **)&param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<Metasound::TEnum<Metasound::EKneeMode,0>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14b08c020

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
GetPayloadID(void *this)

{
  return *(long64 *)((longlong)this + 0x58);
}

// CreateNewPayloadID @ 14b08c050

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
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

// PushOpaque @ 14b08c0a0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
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
  
  pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                     ();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>'
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

// PopOpaque @ 14b08c250

void __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
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
  
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                     ();
  local_res8 = *pFVar6;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>'
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
                    /* WARNING: Could not recover jumptable at 0x00014b08c35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14b08c370

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
IsEmpty(void *this)

{
  return *(longlong *)((longlong)this + 0x28) == 0;
}

// GetDataType @ 14b08c3c0

FName __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
GetDataType(void *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                     ();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14b08c420

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
PushLiteral(void *this,FLiteral *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  void *pvVar2;
  bool bVar3;
  int *piVar4;
  FOperatorSettings local_res18;
  undefined8 local_18 [2];
  
  bVar3 = TLiteralTraits<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
          IsParsable(param_1);
  if (!bVar3) {
    return false;
  }
  TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
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

// ConstructNewReceiverImplementation @ 14b08c550

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
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
              ___7__TReceiver_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
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

// ConstructNewSenderImplementation @ 14b08c690

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
ConstructNewSenderImplementation(void *this,FSenderInitParams *param_1)

{
  void *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar2;
  TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)0x0;
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
    pTVar2 = TSender<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
             TSender<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                       (this_00,in_R8,&local_38);
    pTVar3 = (TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)&DAT_00000001;
  }
  *(TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> **)
   &param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14b0e8590

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
GetPayloadID(void *this)

{
  return *(long64 *)((longlong)this + 0x58);
}

// CreateNewPayloadID @ 14b0e85a0

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
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

// PushOpaque @ 14b0e85e0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
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
  
  pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>'
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

// PopOpaque @ 14b0e8790

void __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
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
  
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>();
  local_res8 = *pFVar6;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>'
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
                    /* WARNING: Could not recover jumptable at 0x00014b0e889c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14b0e88b0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
IsEmpty(void *this)

{
  return *(longlong *)((longlong)this + 0x28) == 0;
}

// GetDataType @ 14b0e88c0

FName __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
GetDataType(void *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14b0e8910

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
PushLiteral(void *this,FLiteral *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  void *pvVar2;
  bool bVar3;
  int *piVar4;
  FOperatorSettings local_res18;
  undefined8 local_18 [2];
  
  bVar3 = TLiteralTraits<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::IsParsable
                    (param_1);
  if (!bVar3) {
    return false;
  }
  TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
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

// ConstructNewReceiverImplementation @ 14b0e8a20

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
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
              ___7__TReceiver_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
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

// ConstructNewSenderImplementation @ 14b0e8b60

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
ConstructNewSenderImplementation(void *this,FSenderInitParams *param_1)

{
  void *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar2;
  TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)0x0;
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
    pTVar2 = TSender<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
             TSender<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
                       (this_00,in_R8,&local_38);
    pTVar3 = (TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)&DAT_00000001;
  }
  *(TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> **)&param_1->OperatorSettings =
       pTVar2;
  if (pTVar3 != (TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14b0ed180

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
GetPayloadID(void *this)

{
  return *(long64 *)((longlong)this + 0x58);
}

// CreateNewPayloadID @ 14b0ed190

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
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

// PushOpaque @ 14b0ed1c0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::PushOpaque
          (void *this,ISender *param_1)

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
  
  pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>'
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

// PopOpaque @ 14b0ed3a0

void __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::PopOpaque
          (void *this,IReceiver *param_1)

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
  
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>();
  local_res8 = *pFVar6;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>'
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
                    /* WARNING: Could not recover jumptable at 0x00014b0ed4ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14b0ed520

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::IsEmpty
          (void *this)

{
  return *(longlong *)((longlong)this + 0x28) == 0;
}

// GetDataType @ 14b0ed530

FName __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::GetDataType
          (void *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14b0ed6f0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::PushLiteral
          (void *this,FLiteral *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  void *pvVar2;
  bool bVar3;
  int *piVar4;
  FOperatorSettings local_res18;
  undefined8 local_18 [2];
  
  bVar3 = TLiteralTraits<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::IsParsable
                    (param_1);
  if (!bVar3) {
    return false;
  }
  TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
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

// ConstructNewReceiverImplementation @ 14b0ed8b0

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>();
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>();
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
              ___7__TReceiver_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
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

// ConstructNewSenderImplementation @ 14b0edbe0

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
ConstructNewSenderImplementation(void *this,FSenderInitParams *param_1)

{
  void *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar2;
  TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)0x0;
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
    pTVar2 = TSender<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
             TSender<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
                       (this_00,in_R8,&local_38);
    pTVar3 = (TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)&DAT_00000001;
  }
  *(TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> **)&param_1->OperatorSettings =
       pTVar2;
  if (pTVar3 != (TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14b0f6e30

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::GetPayloadID
          (void *this)

{
  return *(long64 *)((longlong)this + 0x58);
}

// CreateNewPayloadID @ 14b0f6e40

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
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

// PushOpaque @ 14b0f6f50

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::PushOpaque
          (void *this,ISender *param_1)

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
  
  pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>'::
            __l2::<lambda_1>::operator()(&local_20);
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

// PopOpaque @ 14b0f70d0

void __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::PopOpaque
          (void *this,IReceiver *param_1)

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
  
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>();
  local_res8 = *pFVar6;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>'
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
                    /* WARNING: Could not recover jumptable at 0x00014b0f71dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14b0f7280

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::IsEmpty
          (void *this)

{
  return *(longlong *)((longlong)this + 0x28) == 0;
}

// GetDataType @ 14b0f7290

FName __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::GetDataType
          (void *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14b0f7420

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::PushLiteral
          (void *this,FLiteral *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  void *pvVar2;
  bool bVar3;
  int *piVar4;
  FOperatorSettings local_res18;
  undefined8 local_18 [2];
  
  bVar3 = TLiteralTraits<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::IsParsable(param_1)
  ;
  if (!bVar3) {
    return false;
  }
  TDataLiteralFactory<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
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

// ConstructNewReceiverImplementation @ 14b0f7640

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>();
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>();
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
    *puVar5 = &___7__TReceiver_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
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

// ConstructNewSenderImplementation @ 14b0f7850

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
ConstructNewSenderImplementation(void *this,FSenderInitParams *param_1)

{
  void *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar2;
  TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)0x0;
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
    pTVar2 = TSender<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
             TSender<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>(this_00,in_R8,&local_38)
    ;
    pTVar3 = (TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)&DAT_00000001;
  }
  *(TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> **)&param_1->OperatorSettings = pTVar2
  ;
  if (pTVar3 != (TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14b0ff360

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::GetPayloadID
          (void *this)

{
  return *(long64 *)((longlong)this + 0x58);
}

// CreateNewPayloadID @ 14b0ff370

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::CreateNewPayloadID
          (void *this)

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

// PushOpaque @ 14b0ff3d0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::PushOpaque
          (void *this,ISender *param_1)

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
  
  pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>'::__l2::
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

// PopOpaque @ 14b0ff550

void __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::PopOpaque
          (void *this,IReceiver *param_1)

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
  
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>();
  local_res8 = *pFVar6;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>'::__l2
            ::<lambda_1>::operator()(&local_20);
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
                    /* WARNING: Could not recover jumptable at 0x00014b0ff65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14b0ff670

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::IsEmpty
          (void *this)

{
  return *(longlong *)((longlong)this + 0x28) == 0;
}

// GetDataType @ 14b0ff680

FName __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::GetDataType
          (void *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14b0ff750

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::PushLiteral
          (void *this,FLiteral *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  void *pvVar2;
  bool bVar3;
  int *piVar4;
  FOperatorSettings local_res18;
  undefined8 local_18 [2];
  
  bVar3 = TLiteralTraits<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::IsParsable(param_1);
  if (!bVar3) {
    return false;
  }
  TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ENoiseType,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
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

// ConstructNewReceiverImplementation @ 14b0ff8c0

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>();
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>();
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
    *puVar5 = &___7__TReceiver_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
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

// ConstructNewSenderImplementation @ 14b0ffb40

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
ConstructNewSenderImplementation(void *this,FSenderInitParams *param_1)

{
  void *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar2;
  TSender<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<Metasound::TEnum<Metasound::ENoiseType,0>_> *)0x0;
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
    pTVar2 = TSender<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
             TSender<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>(this_00,in_R8,&local_38);
    pTVar3 = (TSender<Metasound::TEnum<Metasound::ENoiseType,0>_> *)&DAT_00000001;
  }
  *(TSender<Metasound::TEnum<Metasound::ENoiseType,0>_> **)&param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<Metasound::TEnum<Metasound::ENoiseType,0>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14b107bf0

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
GetPayloadID(void *this)

{
  return *(long64 *)((longlong)this + 0x58);
}

// CreateNewPayloadID @ 14b107c10

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
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

// PushOpaque @ 14b107c30

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
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
  
  pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>'
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

// PopOpaque @ 14b107db0

void __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::PopOpaque
          (void *this,IReceiver *param_1)

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
  
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>();
  local_res8 = *pFVar6;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>'
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
                    /* WARNING: Could not recover jumptable at 0x00014b107ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14b107ed0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::IsEmpty
          (void *this)

{
  return *(longlong *)((longlong)this + 0x28) == 0;
}

// GetDataType @ 14b107ee0

FName __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
GetDataType(void *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14b108080

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
PushLiteral(void *this,FLiteral *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  void *pvVar2;
  bool bVar3;
  int *piVar4;
  FOperatorSettings local_res18;
  undefined8 local_18 [2];
  
  bVar3 = TLiteralTraits<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::IsParsable
                    (param_1);
  if (!bVar3) {
    return false;
  }
  TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
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

// ConstructNewReceiverImplementation @ 14b1081a0

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>();
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>();
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
              ___7__TReceiver_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
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

// ConstructNewSenderImplementation @ 14b1082c0

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
ConstructNewSenderImplementation(void *this,FSenderInitParams *param_1)

{
  void *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar2;
  TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)0x0;
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
    pTVar2 = TSender<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
             TSender<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
                       (this_00,in_R8,&local_38);
    pTVar3 = (TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)&DAT_00000001;
  }
  *(TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_> **)&param_1->OperatorSettings =
       pTVar2;
  if (pTVar3 != (TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14b10bef0

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
GetPayloadID(void *this)

{
  return *(long64 *)((longlong)this + 0x58);
}

// CreateNewPayloadID @ 14b10bf00

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
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

// PushOpaque @ 14b10bf20

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::PushOpaque
          (void *this,ISender *param_1)

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
  
  pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>'
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

// PopOpaque @ 14b10c0a0

void __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::PopOpaque
          (void *this,IReceiver *param_1)

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
  
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>();
  local_res8 = *pFVar6;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>'
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
                    /* WARNING: Could not recover jumptable at 0x00014b10c1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14b10c1c0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::IsEmpty
          (void *this)

{
  return *(longlong *)((longlong)this + 0x28) == 0;
}

// GetDataType @ 14b10c1d0

FName __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
GetDataType(void *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14b10c200

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
PushLiteral(void *this,FLiteral *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  void *pvVar2;
  bool bVar3;
  int *piVar4;
  FOperatorSettings local_res18;
  undefined8 local_18 [2];
  
  bVar3 = TLiteralTraits<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::IsParsable
                    (param_1);
  if (!bVar3) {
    return false;
  }
  TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
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

// ConstructNewReceiverImplementation @ 14b10c2e0

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>();
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>();
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
              ___7__TReceiver_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
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

// ConstructNewSenderImplementation @ 14b10c400

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
ConstructNewSenderImplementation(void *this,FSenderInitParams *param_1)

{
  void *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar2;
  TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)0x0;
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
    pTVar2 = TSender<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
             TSender<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
                       (this_00,in_R8,&local_38);
    pTVar3 = (TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)&DAT_00000001;
  }
  *(TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_> **)&param_1->OperatorSettings =
       pTVar2;
  if (pTVar3 != (TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14b110090

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
GetPayloadID(void *this)

{
  return *(long64 *)((longlong)this + 0x58);
}

// CreateNewPayloadID @ 14b1100a0

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
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

// PushOpaque @ 14b1100c0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
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
  
  pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>'
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

// PopOpaque @ 14b110240

void __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
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
  
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>();
  local_res8 = *pFVar6;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>'
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
                    /* WARNING: Could not recover jumptable at 0x00014b11034c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14b110360

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::IsEmpty
          (void *this)

{
  return *(longlong *)((longlong)this + 0x28) == 0;
}

// GetDataType @ 14b110370

FName __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
GetDataType(void *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14b1103a0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
PushLiteral(void *this,FLiteral *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  void *pvVar2;
  bool bVar3;
  int *piVar4;
  FOperatorSettings local_res18;
  undefined8 local_18 [2];
  
  bVar3 = TLiteralTraits<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::IsParsable
                    (param_1);
  if (!bVar3) {
    return false;
  }
  TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
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

// ConstructNewReceiverImplementation @ 14b1104f0

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
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
              ___7__TReceiver_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
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

// ConstructNewSenderImplementation @ 14b110610

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
ConstructNewSenderImplementation(void *this,FSenderInitParams *param_1)

{
  void *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar2;
  TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)0x0;
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
    pTVar2 = TSender<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
             TSender<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
                       (this_00,in_R8,&local_38);
    pTVar3 = (TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)&DAT_00000001;
  }
  *(TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> **)&param_1->OperatorSettings =
       pTVar2;
  if (pTVar3 != (TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14b1b8df0

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::GetPayloadID
          (void *this)

{
  return *(long64 *)((longlong)this + 0x58);
}

// CreateNewPayloadID @ 14b1b8e00

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
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

// PushOpaque @ 14b1b8eb0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::PushOpaque
          (void *this,ISender *param_1)

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
  
  pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>'::
            __l2::<lambda_1>::operator()(&local_20);
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

// PopOpaque @ 14b1b9070

void __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::PopOpaque
          (void *this,IReceiver *param_1)

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
  
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
  local_res8 = *pFVar6;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>'
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
                    /* WARNING: Could not recover jumptable at 0x00014b1b917c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14b1b9190

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::IsEmpty
          (void *this)

{
  return *(longlong *)((longlong)this + 0x28) == 0;
}

// GetDataType @ 14b1b91a0

FName __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::GetDataType
          (void *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14b1b91d0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::PushLiteral
          (void *this,FLiteral *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  void *pvVar2;
  bool bVar3;
  int *piVar4;
  FOperatorSettings local_res18;
  undefined8 local_18 [2];
  
  bVar3 = TLiteralTraits<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::IsParsable(param_1)
  ;
  if (!bVar3) {
    return false;
  }
  TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
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

// ConstructNewReceiverImplementation @ 14b1b92b0

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
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
              ___7__TReceiver_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
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

// ConstructNewSenderImplementation @ 14b1b93d0

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
ConstructNewSenderImplementation(void *this,FSenderInitParams *param_1)

{
  void *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar2;
  TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)0x0;
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
    pTVar2 = TSender<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
             TSender<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>(this_00,in_R8,&local_38)
    ;
    pTVar3 = (TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)&DAT_00000001;
  }
  *(TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> **)&param_1->OperatorSettings = pTVar2
  ;
  if (pTVar3 != (TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14b1baf90

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::GetPayloadID
          (void *this)

{
  return *(long64 *)((longlong)this + 0x58);
}

// CreateNewPayloadID @ 14b1bafa0

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
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

// PushOpaque @ 14b1bafc0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::PushOpaque
          (void *this,ISender *param_1)

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
  
  pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>'::__l2
            ::<lambda_1>::operator()(&local_20);
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

// PopOpaque @ 14b1bb1c0

void __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::PopOpaque
          (void *this,IReceiver *param_1)

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
  
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
  local_res8 = *pFVar6;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>'::
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
                    /* WARNING: Could not recover jumptable at 0x00014b1bb2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14b1bb2e0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::IsEmpty
          (void *this)

{
  return *(longlong *)((longlong)this + 0x28) == 0;
}

// GetDataType @ 14b1bb2f0

FName __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::GetDataType
          (void *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14b1bb320

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::PushLiteral
          (void *this,FLiteral *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  void *pvVar2;
  bool bVar3;
  int *piVar4;
  FOperatorSettings local_res18;
  undefined8 local_18 [2];
  
  bVar3 = TLiteralTraits<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::IsParsable(param_1);
  if (!bVar3) {
    return false;
  }
  TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
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

// ConstructNewReceiverImplementation @ 14b1bb400

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
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
    *puVar5 = &___7__TReceiver_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
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

// ConstructNewSenderImplementation @ 14b1bb520

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
ConstructNewSenderImplementation(void *this,FSenderInitParams *param_1)

{
  void *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar2;
  TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)0x0;
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
    pTVar2 = TSender<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
             TSender<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>(this_00,in_R8,&local_38);
    pTVar3 = (TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)&DAT_00000001;
  }
  *(TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_> **)&param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14b1f7b70

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
GetPayloadID(void *this)

{
  return *(long64 *)((longlong)this + 0x58);
}

// CreateNewPayloadID @ 14b1f7b80

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
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

// PushOpaque @ 14b1f7ba0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
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
  
  pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>'
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

// PopOpaque @ 14b1f7ea0

void __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
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
  
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>();
  local_res8 = *pFVar6;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>'
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
                    /* WARNING: Could not recover jumptable at 0x00014b1f7fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14b1f80b0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
IsEmpty(void *this)

{
  return *(longlong *)((longlong)this + 0x28) == 0;
}

// GetDataType @ 14b1f80c0

FName __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
GetDataType(void *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14b1f80f0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
PushLiteral(void *this,FLiteral *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  void *pvVar2;
  bool bVar3;
  int *piVar4;
  FOperatorSettings local_res18;
  undefined8 local_18 [2];
  
  bVar3 = TLiteralTraits<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::IsParsable
                    (param_1);
  if (!bVar3) {
    return false;
  }
  TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
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

// ConstructNewReceiverImplementation @ 14b1f81d0

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
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
              ___7__TReceiver_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
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

// ConstructNewSenderImplementation @ 14b1f82f0

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
ConstructNewSenderImplementation(void *this,FSenderInitParams *param_1)

{
  void *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar2;
  TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)0x0;
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
    pTVar2 = TSender<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
             TSender<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
                       (this_00,in_R8,&local_38);
    pTVar3 = (TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)&DAT_00000001;
  }
  *(TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> **)&param_1->OperatorSettings =
       pTVar2;
  if (pTVar3 != (TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14b1ffc10

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
GetPayloadID(void *this)

{
  return *(long64 *)((longlong)this + 0x58);
}

// CreateNewPayloadID @ 14b1ffc20

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
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

// PushOpaque @ 14b1ffc40

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::PushOpaque
          (void *this,ISender *param_1)

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
  
  pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>'
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

// PopOpaque @ 14b1ffdc0

void __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::PopOpaque
          (void *this,IReceiver *param_1)

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
  
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>();
  local_res8 = *pFVar6;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>'
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
                    /* WARNING: Could not recover jumptable at 0x00014b1ffecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14b1ffee0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::IsEmpty
          (void *this)

{
  return *(longlong *)((longlong)this + 0x28) == 0;
}

// GetDataType @ 14b1ffef0

FName __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
GetDataType(void *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14b1fff20

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
PushLiteral(void *this,FLiteral *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  void *pvVar2;
  bool bVar3;
  int *piVar4;
  FOperatorSettings local_res18;
  undefined8 local_18 [2];
  
  bVar3 = TLiteralTraits<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::IsParsable
                    (param_1);
  if (!bVar3) {
    return false;
  }
  TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
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

// ConstructNewReceiverImplementation @ 14b200080

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>();
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>();
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
              ___7__TReceiver_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
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

// ConstructNewSenderImplementation @ 14b200230

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
ConstructNewSenderImplementation(void *this,FSenderInitParams *param_1)

{
  void *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar2;
  TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)0x0;
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
    pTVar2 = TSender<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
             TSender<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
                       (this_00,in_R8,&local_38);
    pTVar3 = (TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)&DAT_00000001;
  }
  *(TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> **)&param_1->OperatorSettings =
       pTVar2;
  if (pTVar3 != (TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14b20b4b0

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::GetPayloadID
          (void *this)

{
  return *(long64 *)((longlong)this + 0x58);
}

// CreateNewPayloadID @ 14b20b5b0

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
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

// PushOpaque @ 14b20b7b0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::PushOpaque
          (void *this,ISender *param_1)

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
  
  pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>'::__l2
            ::<lambda_1>::operator()(&local_20);
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

// PopOpaque @ 14b20b960

void __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::PopOpaque
          (void *this,IReceiver *param_1)

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
  
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>();
  local_res8 = *pFVar6;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>'::
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
                    /* WARNING: Could not recover jumptable at 0x00014b20ba6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14b20ba80

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::IsEmpty
          (void *this)

{
  return *(longlong *)((longlong)this + 0x28) == 0;
}

// GetDataType @ 14b20ba90

FName __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::GetDataType
          (void *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14b20bac0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::PushLiteral
          (void *this,FLiteral *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  void *pvVar2;
  bool bVar3;
  int *piVar4;
  FOperatorSettings local_res18;
  undefined8 local_18 [2];
  
  bVar3 = TLiteralTraits<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::IsParsable(param_1);
  if (!bVar3) {
    return false;
  }
  TDataLiteralFactory<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
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

// ConstructNewReceiverImplementation @ 14b20bc30

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>();
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>();
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
    *puVar5 = &___7__TReceiver_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
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

// ConstructNewSenderImplementation @ 14b20bd50

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
ConstructNewSenderImplementation(void *this,FSenderInitParams *param_1)

{
  void *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar2;
  TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)0x0;
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
    pTVar2 = TSender<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
             TSender<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>(this_00,in_R8,&local_38);
    pTVar3 = (TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)&DAT_00000001;
  }
  *(TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_> **)&param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

