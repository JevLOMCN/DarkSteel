// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 81

// GetPayloadID @ 14b2cfd00

long64 __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
GetPayloadID(TCopyableDataChannel<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
             *this)

{
  return this->PayloadID;
}

// CreateNewPayloadID @ 14b2cfd10

long64 __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
CreateNewPayloadID(TCopyableDataChannel<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
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

// PushOpaque @ 14b2cfd30

bool __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
PushOpaque(TCopyableDataChannel<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
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
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *pTVar10;
  int iVar11;
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *pTVar12;
  TUniquePtr<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar13;
  FName local_res8;
  longlong local_58;
  ISender *local_50;
  FName *local_48;
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> local_40;
  
  pFVar7 = GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                     ();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_48 = &local_res8;
    local_50 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>'
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
  if (pTVar13->Ptr == (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)0x0) {
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
    pTVar12 = (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)pIVar2->_padding_;
    pIVar2->_padding_ = 0;
    iVar11 = (int)pIVar2->_padding_;
    iVar1 = *(int *)((longlong)&pIVar2->_padding_ + 4);
    pIVar2->_padding_ = 0;
    pTVar9 = ::operator_new(0x10);
    pTVar10 = (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)0x0;
    if (pTVar9 != (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)0x0) {
      (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)pTVar12;
      pTVar9->ArrayNum = iVar11;
      pTVar9->ArrayMax = iVar1;
      pTVar10 = pTVar9;
      pTVar12 = (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)0x0;
      iVar11 = 0;
    }
    if (pTVar13 ==
        (TUniquePtr<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
         *)&local_58) {
      if (pTVar10 != (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)0x0) {
        DestructItems<Metasound::FAudioBusAsset,int>
                  ((FAudioBusAsset *)(pTVar10->AllocatorInstance).Data,pTVar10->ArrayNum);
        pFVar3 = (pTVar10->AllocatorInstance).Data;
        pTVar9 = pTVar10;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        goto LAB_14b2cfea4;
      }
    }
    else {
      pTVar9 = pTVar13->Ptr;
      pTVar13->Ptr = pTVar10;
      if (pTVar9 != (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)0x0) {
        DestructItems<Metasound::FAudioBusAsset,int>
                  ((FAudioBusAsset *)(pTVar9->AllocatorInstance).Data,pTVar9->ArrayNum);
        pFVar3 = (pTVar9->AllocatorInstance).Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
LAB_14b2cfea4:
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
    pTVar12 = (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)pIVar2->_padding_;
    pIVar2->_padding_ = 0;
    iVar11 = (int)pIVar2->_padding_;
    iVar1 = *(int *)((longlong)&pIVar2->_padding_ + 4);
    pIVar2->_padding_ = 0;
    pTVar10 = pTVar13->Ptr;
    if (pTVar10 != &local_40) {
      DestructItems<Metasound::FAudioBusAsset,int>
                ((FAudioBusAsset *)(pTVar10->AllocatorInstance).Data,pTVar10->ArrayNum);
      pFVar3 = (pTVar10->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)pTVar12;
      pTVar10->ArrayNum = iVar11;
      pTVar10->ArrayMax = iVar1;
      DestructItems<Metasound::FAudioBusAsset,int>((FAudioBusAsset *)0x0,0);
      goto LAB_14b2cfec5;
    }
  }
  DestructItems<Metasound::FAudioBusAsset,int>((FAudioBusAsset *)pTVar12,iVar11);
  if (pTVar12 != (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(pTVar12);
  }
LAB_14b2cfec5:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return true;
}

// PopOpaque @ 14b2cff90

void __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
PopOpaque(TCopyableDataChannel<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this
         ,IReceiver *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  int iVar2;
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *pTVar3;
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
  
  pFVar8 = GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                     ();
  local_res8 = *pFVar8;
  if ((FName)param_1->_padding_ != local_res8) {
    local_28 = &local_res8;
    local_30 = param_1;
    bVar7 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>'
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
    if ((pTVar3 != (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)0x0) &&
       (this->PayloadID != param_1[1]._padding_)) {
      plVar1 = &param_1[1]._padding_;
      param_1[1]._padding_ = this->PayloadID;
      if ((TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)param_1[1]._padding_ ==
          (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)0x0) {
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
            ConstructItems<Metasound::FAudioBusAsset,Metasound::FAudioBusAsset,int>
                      (pFVar9->Data,(FAudioBusAsset *)pFVar4,iVar2);
          }
        }
        if (plVar1 == &local_38) {
          if (pFVar9 != (ForAnyElementType *)0x0) {
            DestructItems<Metasound::FAudioBusAsset,int>
                      ((FAudioBusAsset *)pFVar9->Data,*(int *)&pFVar9[1].Data);
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
            DestructItems<Metasound::FAudioBusAsset,int>
                      ((FAudioBusAsset *)*puVar5,*(int *)(puVar5 + 1));
            if ((void *)*puVar5 != (void *)0x0) {
              FMemory::Free((void *)*puVar5);
            }
            ::operator_delete(puVar5,0x10);
          }
        }
      }
      else {
        TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)
                   param_1[1]._padding_,pTVar3);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014b2d014a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14b2d0160

bool __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
IsEmpty(TCopyableDataChannel<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  return (this->AtomicData).Ptr ==
         (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)0x0;
}

// GetDataType @ 14b2d0170

FName __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
GetDataType(TCopyableDataChannel<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
            *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                     ();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14b2d01a0

bool __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
PushLiteral(TCopyableDataChannel<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
            *this,FLiteral *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TUniquePtr<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 local_38;
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> local_30;
  
  bVar4 = TLiteralTraits<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::IsParsable
                    (param_1);
  if (!bVar4) {
    return false;
  }
  TDataLiteralFactory<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  ::CreateExplicitArgs(&local_30,&this->OperatorSettings,param_1);
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar5 = (this->AtomicData).Ptr;
    pTVar1 = &this->AtomicData;
    if (pTVar5 == (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)0x0) {
      pTVar5 = ::operator_new(0x10);
      if (pTVar5 == (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)0x0) {
        pTVar5 = (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)0x0;
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
          ConstructItems<Metasound::FAudioBusAsset,Metasound::FAudioBusAsset,int>
                    ((pTVar5->AllocatorInstance).Data,
                     (FAudioBusAsset *)local_30.AllocatorInstance.Data,local_30.ArrayNum);
        }
      }
      if (pTVar1 == (TUniquePtr<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
                     *)&local_38) {
        if (pTVar5 != (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)0x0) {
          DestructItems<Metasound::FAudioBusAsset,int>
                    ((FAudioBusAsset *)(pTVar5->AllocatorInstance).Data,pTVar5->ArrayNum);
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
        if (pTVar2 != (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)0x0) {
          DestructItems<Metasound::FAudioBusAsset,int>
                    ((FAudioBusAsset *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
          pFVar3 = (pTVar2->AllocatorInstance).Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          ::operator_delete(pTVar2,0x10);
        }
      }
    }
    else {
      TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>::operator=(pTVar5,&local_30);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    DestructItems<Metasound::FAudioBusAsset,int>
              ((FAudioBusAsset *)local_30.AllocatorInstance.Data,local_30.ArrayNum);
    if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.AllocatorInstance.Data);
    }
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ConstructNewReceiverImplementation @ 14b2d0410

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
ConstructNewReceiverImplementation
          (TCopyableDataChannel<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
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
      pFVar7 = GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
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
      pFVar7 = GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
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
              ___7__TReceiver_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
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

// ConstructNewSenderImplementation @ 14b2d0530

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
ConstructNewSenderImplementation
          (TCopyableDataChannel<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
           *this,FSenderInitParams *param_1)

{
  TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar2;
  TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0;
  this_00 = ::operator_new(0x70);
  pTVar3 = pTVar2;
  if (this_00 != (TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
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
    pTVar2 = TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
             TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                       (this_00,in_R8,&local_38);
    pTVar3 = (TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
             &DAT_00000001;
  }
  *(TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> **)
   &param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14b2d4640

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::FWaveAsset>::GetPayloadID
          (TCopyableDataChannel<Metasound::FWaveAsset> *this)

{
  return this->PayloadID;
}

// CreateNewPayloadID @ 14b2d4650

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::FWaveAsset>::CreateNewPayloadID
          (TCopyableDataChannel<Metasound::FWaveAsset> *this)

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

// PushOpaque @ 14b2d4670

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::FWaveAsset>::PushOpaque
          (TCopyableDataChannel<Metasound::FWaveAsset> *this,ISender *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  IDataChannel *pIVar1;
  FSoundWaveProxy *pFVar2;
  FWaveAsset *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FName *pFVar7;
  long64 lVar8;
  FWaveAsset *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  atomic<int> *paVar11;
  TUniquePtr<Metasound::FWaveAsset,TDefaultDelete<Metasound::FWaveAsset>_> *pTVar12;
  FName local_res8;
  longlong local_48;
  ISender *local_40;
  FName *local_38;
  FSoundWaveProxy *local_30;
  TReferenceControllerBase<1> *pTStack_28;
  
  pFVar7 = GetMetasoundDataTypeName<Metasound::FWaveAsset>();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_38 = &local_res8;
    local_40 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<Metasound::FWaveAsset>_>'::__l2::<lambda_1>::operator()
                      (&local_40);
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
  if (pTVar12->Ptr == (FWaveAsset *)0x0) {
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
    pFVar2 = (FSoundWaveProxy *)pIVar1->_padding_;
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
    if (pFVar9 == (FWaveAsset *)0x0) {
      pFVar9 = (FWaveAsset *)0x0;
    }
    else {
      (pFVar9->SoundWaveProxy).Object = pFVar2;
      (pFVar9->SoundWaveProxy).SharedReferenceCount.ReferenceController = pTVar10;
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar11 = (atomic<int>)((int)*paVar11 + 1);
        UNLOCK();
      }
    }
    if (pTVar12 ==
        (TUniquePtr<Metasound::FWaveAsset,TDefaultDelete<Metasound::FWaveAsset>_> *)&local_48) {
      if (pFVar9 == (FWaveAsset *)0x0) goto LAB_14b2d4849;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar9->SoundWaveProxy).SharedReferenceCount.ReferenceController);
    }
    else {
      pFVar3 = pTVar12->Ptr;
      pTVar12->Ptr = pFVar9;
      if (pFVar3 == (FWaveAsset *)0x0) goto LAB_14b2d4849;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar3->SoundWaveProxy).SharedReferenceCount.ReferenceController);
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
    pFVar2 = (FSoundWaveProxy *)pIVar1->_padding_;
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
    local_30 = (pFVar9->SoundWaveProxy).Object;
    pTStack_28 = (pFVar9->SoundWaveProxy).SharedReferenceCount.ReferenceController;
    (pFVar9->SoundWaveProxy).Object = pFVar2;
    (pFVar9->SoundWaveProxy).SharedReferenceCount.ReferenceController = pTVar10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_28);
  }
LAB_14b2d4849:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return true;
}

// PopOpaque @ 14b2d4880

void __thiscall
Metasound::TCopyableDataChannel<Metasound::FWaveAsset>::PopOpaque
          (TCopyableDataChannel<Metasound::FWaveAsset> *this,IReceiver *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  FWaveAsset *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  FSoundWaveProxy *pFVar5;
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
  
  pFVar8 = GetMetasoundDataTypeName<Metasound::FWaveAsset>();
  local_res8 = *pFVar8;
  if ((FName)param_1->_padding_ != local_res8) {
    local_28 = &local_res8;
    local_30 = param_1;
    bVar7 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<Metasound::FWaveAsset>_>'::__l2::<lambda_1>::operator()
                      (&local_30);
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
    if ((pFVar2 != (FWaveAsset *)0x0) && (this->PayloadID != param_1[1]._padding_)) {
      puVar9 = (undefined8 *)param_1[1]._padding_;
      plVar1 = &param_1[1]._padding_;
      param_1[1]._padding_ = this->PayloadID;
      if (puVar9 == (undefined8 *)0x0) {
        puVar9 = ::operator_new(0x10);
        if (puVar9 == (undefined8 *)0x0) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          *puVar9 = (pFVar2->SoundWaveProxy).Object;
          pTVar3 = (pFVar2->SoundWaveProxy).SharedReferenceCount.ReferenceController;
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
        pTVar3 = (pFVar2->SoundWaveProxy).SharedReferenceCount.ReferenceController;
        pFVar5 = (pFVar2->SoundWaveProxy).Object;
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
                    /* WARNING: Could not recover jumptable at 0x00014b2d49e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14b2d4a00

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::FWaveAsset>::IsEmpty
          (TCopyableDataChannel<Metasound::FWaveAsset> *this)

{
  return (this->AtomicData).Ptr == (FWaveAsset *)0x0;
}

// GetDataType @ 14b2d4a10

FName __thiscall
Metasound::TCopyableDataChannel<Metasound::FWaveAsset>::GetDataType
          (TCopyableDataChannel<Metasound::FWaveAsset> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::FWaveAsset>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14b2d4a40

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::FWaveAsset>::PushLiteral
          (TCopyableDataChannel<Metasound::FWaveAsset> *this,FLiteral *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWaveAsset *pFVar1;
  bool bVar2;
  FWaveAsset *pFVar3;
  TUniquePtr<Metasound::FWaveAsset,TDefaultDelete<Metasound::FWaveAsset>_> *pTVar4;
  undefined8 local_38;
  FWaveAsset local_30;
  FSoundWaveProxy *local_20;
  TReferenceControllerBase<1> *pTStack_18;
  
  bVar2 = TLiteralTraits<Metasound::FWaveAsset>::IsParsable(param_1);
  if (!bVar2) {
    return false;
  }
  TDataLiteralFactory<Metasound::FWaveAsset,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FWaveAsset>_>
  ::CreateExplicitArgs(&local_30,&this->OperatorSettings,param_1);
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar3 = (this->AtomicData).Ptr;
    pTVar4 = &this->AtomicData;
    if (pFVar3 == (FWaveAsset *)0x0) {
      pFVar3 = ::operator_new(0x10);
      if (pFVar3 == (FWaveAsset *)0x0) {
        pFVar3 = (FWaveAsset *)0x0;
      }
      else {
        (pFVar3->SoundWaveProxy).Object = local_30.SoundWaveProxy.Object;
        (pFVar3->SoundWaveProxy).SharedReferenceCount.ReferenceController =
             local_30.SoundWaveProxy.SharedReferenceCount.ReferenceController;
        if (local_30.SoundWaveProxy.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_30.SoundWaveProxy.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_30.SoundWaveProxy.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      if (pTVar4 == (TUniquePtr<Metasound::FWaveAsset,TDefaultDelete<Metasound::FWaveAsset>_> *)
                    &local_38) {
        if (pFVar3 != (FWaveAsset *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar3->SoundWaveProxy).SharedReferenceCount.ReferenceController);
          ::operator_delete(pFVar3,0x10);
        }
      }
      else {
        pFVar1 = pTVar4->Ptr;
        pTVar4->Ptr = pFVar3;
        if (pFVar1 != (FWaveAsset *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar1->SoundWaveProxy).SharedReferenceCount.ReferenceController);
          ::operator_delete(pFVar1,0x10);
        }
      }
    }
    else {
      if (local_30.SoundWaveProxy.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_30.SoundWaveProxy.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_30.SoundWaveProxy.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      local_20 = (pFVar3->SoundWaveProxy).Object;
      pTStack_18 = (pFVar3->SoundWaveProxy).SharedReferenceCount.ReferenceController;
      (pFVar3->SoundWaveProxy).Object = local_30.SoundWaveProxy.Object;
      (pFVar3->SoundWaveProxy).SharedReferenceCount.ReferenceController =
           local_30.SoundWaveProxy.SharedReferenceCount.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_18);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30.SoundWaveProxy.SharedReferenceCount.ReferenceController);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ConstructNewReceiverImplementation @ 14b2d4bd0

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::FWaveAsset>::ConstructNewReceiverImplementation
          (TCopyableDataChannel<Metasound::FWaveAsset> *this,FReceiverInitParams *param_1)

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
      pFVar7 = GetMetasoundDataTypeName<Metasound::FWaveAsset>();
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::FWaveAsset>();
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
    *puVar5 = &___7__TReceiver_VFWaveAsset_Metasound___Metasound__6B_;
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

// ConstructNewSenderImplementation @ 14b2d4cf0

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::FWaveAsset>::ConstructNewSenderImplementation
          (TCopyableDataChannel<Metasound::FWaveAsset> *this,FSenderInitParams *param_1)

{
  TSender<Metasound::FWaveAsset> *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<Metasound::FWaveAsset> *pTVar2;
  TSender<Metasound::FWaveAsset> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<Metasound::FWaveAsset> *)0x0;
  this_00 = ::operator_new(0x70);
  pTVar3 = pTVar2;
  if (this_00 != (TSender<Metasound::FWaveAsset> *)0x0) {
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
    pTVar2 = TSender<Metasound::FWaveAsset>::TSender<Metasound::FWaveAsset>(this_00,in_R8,&local_38)
    ;
    pTVar3 = (TSender<Metasound::FWaveAsset> *)&DAT_00000001;
  }
  *(TSender<Metasound::FWaveAsset> **)&param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<Metasound::FWaveAsset> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14b2def10

long64 __thiscall
Metasound::
TCopyableDataChannel<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
GetPayloadID(void *this)

{
  return *(long64 *)((longlong)this + 0x58);
}

// CreateNewPayloadID @ 14b2def90

long64 __thiscall
Metasound::
TCopyableDataChannel<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
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

// PushOpaque @ 14b2defd0

bool __thiscall
Metasound::
TCopyableDataChannel<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
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
  
  pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                     ();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>'
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

// PopOpaque @ 14b2df150

void __thiscall
Metasound::
TCopyableDataChannel<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
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
  
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                     ();
  local_res8 = *pFVar6;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>'
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
                    /* WARNING: Could not recover jumptable at 0x00014b2df25c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14b2df270

bool __thiscall
Metasound::
TCopyableDataChannel<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
IsEmpty(void *this)

{
  return *(longlong *)((longlong)this + 0x28) == 0;
}

// GetDataType @ 14b2df280

FName __thiscall
Metasound::
TCopyableDataChannel<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
GetDataType(void *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                     ();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14b2df2b0

bool __thiscall
Metasound::
TCopyableDataChannel<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
PushLiteral(void *this,FLiteral *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  void *pvVar2;
  bool bVar3;
  int *piVar4;
  FOperatorSettings local_res18;
  undefined8 local_18 [2];
  
  bVar3 = TLiteralTraits<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
          ::IsParsable(param_1);
  if (!bVar3) {
    return false;
  }
  TDataLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
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

// ConstructNewReceiverImplementation @ 14b2df390

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::
TCopyableDataChannel<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
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
              ___7__TReceiver_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
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

// ConstructNewSenderImplementation @ 14b2df4f0

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::
TCopyableDataChannel<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
ConstructNewSenderImplementation(void *this,FSenderInitParams *param_1)

{
  void *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar2;
  TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *)0x0;
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
    pTVar2 = TSender<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
             TSender<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                       (this_00,in_R8,&local_38);
    pTVar3 = (TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *)
             &DAT_00000001;
  }
  *(TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> **)
   &param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *)0x0
     ) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14b2e0070

long64 __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
GetPayloadID(TCopyableDataChannel<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  return this->PayloadID;
}

// CreateNewPayloadID @ 14b2e0080

long64 __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
CreateNewPayloadID(TCopyableDataChannel<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
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

// PushOpaque @ 14b2e0150

bool __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
PushOpaque(TCopyableDataChannel<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          ISender *param_1)

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
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *pTVar10;
  int iVar11;
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *pTVar12;
  TUniquePtr<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar13;
  FName local_res8;
  longlong local_58;
  ISender *local_50;
  FName *local_48;
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> local_40;
  
  pFVar7 = GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_48 = &local_res8;
    local_50 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>'
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
  if (pTVar13->Ptr == (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)0x0) {
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
    pTVar12 = (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)pIVar2->_padding_;
    pIVar2->_padding_ = 0;
    iVar11 = (int)pIVar2->_padding_;
    iVar1 = *(int *)((longlong)&pIVar2->_padding_ + 4);
    pIVar2->_padding_ = 0;
    pTVar9 = ::operator_new(0x10);
    pTVar10 = (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)0x0;
    if (pTVar9 != (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)0x0) {
      (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)pTVar12;
      pTVar9->ArrayNum = iVar11;
      pTVar9->ArrayMax = iVar1;
      pTVar10 = pTVar9;
      pTVar12 = (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)0x0;
      iVar11 = 0;
    }
    if (pTVar13 ==
        (TUniquePtr<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
         *)&local_58) {
      if (pTVar10 != (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)0x0) {
        DestructItems<Metasound::FWaveAsset,int>
                  ((FWaveAsset *)(pTVar10->AllocatorInstance).Data,pTVar10->ArrayNum);
        pFVar3 = (pTVar10->AllocatorInstance).Data;
        pTVar9 = pTVar10;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        goto LAB_14b2e02c4;
      }
    }
    else {
      pTVar9 = pTVar13->Ptr;
      pTVar13->Ptr = pTVar10;
      if (pTVar9 != (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)0x0) {
        DestructItems<Metasound::FWaveAsset,int>
                  ((FWaveAsset *)(pTVar9->AllocatorInstance).Data,pTVar9->ArrayNum);
        pFVar3 = (pTVar9->AllocatorInstance).Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
LAB_14b2e02c4:
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
    pTVar12 = (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)pIVar2->_padding_;
    pIVar2->_padding_ = 0;
    iVar11 = (int)pIVar2->_padding_;
    iVar1 = *(int *)((longlong)&pIVar2->_padding_ + 4);
    pIVar2->_padding_ = 0;
    pTVar10 = pTVar13->Ptr;
    if (pTVar10 != &local_40) {
      DestructItems<Metasound::FWaveAsset,int>
                ((FWaveAsset *)(pTVar10->AllocatorInstance).Data,pTVar10->ArrayNum);
      pFVar3 = (pTVar10->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)pTVar12;
      pTVar10->ArrayNum = iVar11;
      pTVar10->ArrayMax = iVar1;
      DestructItems<Metasound::FWaveAsset,int>((FWaveAsset *)0x0,0);
      goto LAB_14b2e02e5;
    }
  }
  DestructItems<Metasound::FWaveAsset,int>((FWaveAsset *)pTVar12,iVar11);
  if (pTVar12 != (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(pTVar12);
  }
LAB_14b2e02e5:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return true;
}

// PopOpaque @ 14b2e03b0

void __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
PopOpaque(TCopyableDataChannel<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
         IReceiver *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  int iVar2;
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *pTVar3;
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
  
  pFVar8 = GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>();
  local_res8 = *pFVar8;
  if ((FName)param_1->_padding_ != local_res8) {
    local_28 = &local_res8;
    local_30 = param_1;
    bVar7 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>'
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
    if ((pTVar3 != (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)0x0) &&
       (this->PayloadID != param_1[1]._padding_)) {
      plVar1 = &param_1[1]._padding_;
      param_1[1]._padding_ = this->PayloadID;
      if ((TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)param_1[1]._padding_ ==
          (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)0x0) {
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
            ConstructItems<Metasound::FWaveAsset,Metasound::FWaveAsset,int>
                      (pFVar9->Data,(FWaveAsset *)pFVar4,iVar2);
          }
        }
        if (plVar1 == &local_38) {
          if (pFVar9 != (ForAnyElementType *)0x0) {
            DestructItems<Metasound::FWaveAsset,int>
                      ((FWaveAsset *)pFVar9->Data,*(int *)&pFVar9[1].Data);
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
            DestructItems<Metasound::FWaveAsset,int>((FWaveAsset *)*puVar5,*(int *)(puVar5 + 1));
            if ((void *)*puVar5 != (void *)0x0) {
              FMemory::Free((void *)*puVar5);
            }
            ::operator_delete(puVar5,0x10);
          }
        }
      }
      else {
        TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)param_1[1]._padding_
                   ,pTVar3);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014b2e056a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14b2e0580

bool __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::IsEmpty
          (TCopyableDataChannel<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  return (this->AtomicData).Ptr == (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)0x0;
}

// GetDataType @ 14b2e0590

FName __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
GetDataType(TCopyableDataChannel<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14b2e0600

bool __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
PushLiteral(TCopyableDataChannel<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
           FLiteral *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TUniquePtr<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 local_38;
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> local_30;
  
  bVar4 = TLiteralTraits<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::IsParsable
                    (param_1);
  if (!bVar4) {
    return false;
  }
  TDataLiteralFactory<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  ::CreateExplicitArgs(&local_30,&this->OperatorSettings,param_1);
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar5 = (this->AtomicData).Ptr;
    pTVar1 = &this->AtomicData;
    if (pTVar5 == (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)0x0) {
      pTVar5 = ::operator_new(0x10);
      if (pTVar5 == (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)0x0) {
        pTVar5 = (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)0x0;
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
          ConstructItems<Metasound::FWaveAsset,Metasound::FWaveAsset,int>
                    ((pTVar5->AllocatorInstance).Data,(FWaveAsset *)local_30.AllocatorInstance.Data,
                     local_30.ArrayNum);
        }
      }
      if (pTVar1 == (TUniquePtr<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
                     *)&local_38) {
        if (pTVar5 != (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)0x0) {
          DestructItems<Metasound::FWaveAsset,int>
                    ((FWaveAsset *)(pTVar5->AllocatorInstance).Data,pTVar5->ArrayNum);
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
        if (pTVar2 != (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)0x0) {
          DestructItems<Metasound::FWaveAsset,int>
                    ((FWaveAsset *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
          pFVar3 = (pTVar2->AllocatorInstance).Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          ::operator_delete(pTVar2,0x10);
        }
      }
    }
    else {
      TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>::operator=(pTVar5,&local_30);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    DestructItems<Metasound::FWaveAsset,int>
              ((FWaveAsset *)local_30.AllocatorInstance.Data,local_30.ArrayNum);
    if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.AllocatorInstance.Data);
    }
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ConstructNewReceiverImplementation @ 14b2e0930

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
ConstructNewReceiverImplementation
          (TCopyableDataChannel<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
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
      pFVar7 = GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
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
      pFVar7 = GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
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
              ___7__TReceiver_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
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

// ConstructNewSenderImplementation @ 14b2e0a90

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
ConstructNewSenderImplementation
          (TCopyableDataChannel<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          FSenderInitParams *param_1)

{
  TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar2;
  TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0;
  this_00 = ::operator_new(0x70);
  pTVar3 = pTVar2;
  if (this_00 != (TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
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
    pTVar2 = TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
             TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                       (this_00,in_R8,&local_38);
    pTVar3 = (TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)&DAT_00000001;
  }
  *(TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> **)
   &param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14b2e6350

long64 __thiscall
Metasound::
TCopyableDataChannel<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
GetPayloadID(void *this)

{
  return *(long64 *)((longlong)this + 0x58);
}

// CreateNewPayloadID @ 14b2e6360

long64 __thiscall
Metasound::
TCopyableDataChannel<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
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

// PushOpaque @ 14b2e64d0

bool __thiscall
Metasound::
TCopyableDataChannel<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
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
  
  pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                     ();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>'
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

// PopOpaque @ 14b2e66e0

void __thiscall
Metasound::
TCopyableDataChannel<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
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
  
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                     ();
  local_res8 = *pFVar6;
  if ((FName)param_1->_padding_ != local_res8) {
    local_18 = &local_res8;
    local_20 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>'
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
                    /* WARNING: Could not recover jumptable at 0x00014b2e67ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14b2e6800

bool __thiscall
Metasound::
TCopyableDataChannel<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
IsEmpty(void *this)

{
  return *(longlong *)((longlong)this + 0x28) == 0;
}

// GetDataType @ 14b2e6810

FName __thiscall
Metasound::
TCopyableDataChannel<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
GetDataType(void *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                     ();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14b2e6840

bool __thiscall
Metasound::
TCopyableDataChannel<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
PushLiteral(void *this,FLiteral *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  void *pvVar2;
  bool bVar3;
  int *piVar4;
  FOperatorSettings local_res18;
  undefined8 local_18 [2];
  
  bVar3 = TLiteralTraits<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          ::IsParsable(param_1);
  if (!bVar3) {
    return false;
  }
  TDataLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
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

// ConstructNewReceiverImplementation @ 14b2e6920

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::
TCopyableDataChannel<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
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
              ___7__TReceiver_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
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

// ConstructNewSenderImplementation @ 14b2e6ad0

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::
TCopyableDataChannel<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
ConstructNewSenderImplementation(void *this,FSenderInitParams *param_1)

{
  void *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar2;
  TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *)0x0;
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
    pTVar2 = TSender<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
             TSender<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                       (this_00,in_R8,&local_38);
    pTVar3 = (TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *)
             &DAT_00000001;
  }
  *(TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> **)
   &param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *)
                0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14b2eed60

long64 __thiscall
Metasound::TCopyableDataChannel<WaveTable::FWaveTable>::GetPayloadID
          (TCopyableDataChannel<WaveTable::FWaveTable> *this)

{
  return this->PayloadID;
}

// CreateNewPayloadID @ 14b2eed70

long64 __thiscall
Metasound::TCopyableDataChannel<WaveTable::FWaveTable>::CreateNewPayloadID
          (TCopyableDataChannel<WaveTable::FWaveTable> *this)

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

// PushOpaque @ 14b2eed90

bool __thiscall
Metasound::TCopyableDataChannel<WaveTable::FWaveTable>::PushOpaque
          (TCopyableDataChannel<WaveTable::FWaveTable> *this,ISender *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  int iVar2;
  IDataChannel *pIVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 uVar8;
  FName *pFVar9;
  long64 lVar10;
  FWaveTable *pFVar11;
  FWaveTable *pFVar12;
  FWaveTable *pFVar13;
  TUniquePtr<WaveTable::FWaveTable,TDefaultDelete<WaveTable::FWaveTable>_> *pTVar14;
  FName local_res8;
  longlong local_68;
  ISender *local_60;
  FName *local_58;
  FWaveTable local_50;
  
  pFVar9 = GetMetasoundDataTypeName<WaveTable::FWaveTable>();
  local_res8 = *pFVar9;
  if ((FName)param_1->_padding_ != local_res8) {
    local_58 = &local_res8;
    local_60 = param_1;
    bVar7 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<WaveTable::FWaveTable>_>'::__l2::<lambda_1>::operator()
                      (&local_60);
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
  pIVar3 = param_1[2].DataChannel.Object;
  if (pTVar14->Ptr == (FWaveTable *)0x0) {
    if ((pIVar3 == (IDataChannel *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    pIVar3 = param_1[2].DataChannel.Object;
    pFVar13 = (FWaveTable *)pIVar3->_padding_;
    pIVar3->_padding_ = 0;
    lVar6 = pIVar3->_padding_;
    iVar2 = *(int *)((longlong)&pIVar3->_padding_ + 4);
    pIVar3->_padding_ = 0;
    fVar1 = *(float *)&pIVar3->_padding_;
    pFVar11 = ::operator_new(0x18);
    pFVar12 = (FWaveTable *)0x0;
    if (pFVar11 != (FWaveTable *)0x0) {
      (pFVar11->Samples).AllocatorInstance.Data = (FScriptContainerElement *)pFVar13;
      (pFVar11->Samples).ArrayNum = (int)lVar6;
      (pFVar11->Samples).ArrayMax = iVar2;
      pFVar11->FinalValue = fVar1;
      pFVar12 = pFVar11;
      pFVar13 = (FWaveTable *)0x0;
    }
    if (pTVar14 ==
        (TUniquePtr<WaveTable::FWaveTable,TDefaultDelete<WaveTable::FWaveTable>_> *)&local_68) {
      if (pFVar12 != (FWaveTable *)0x0) {
        pFVar4 = (pFVar12->Samples).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        ::operator_delete(pFVar12,0x18);
      }
    }
    else {
      pFVar11 = pTVar14->Ptr;
      pTVar14->Ptr = pFVar12;
      if (pFVar11 != (FWaveTable *)0x0) {
        pFVar4 = (pFVar11->Samples).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        ::operator_delete(pFVar11,0x18);
      }
    }
  }
  else {
    if ((pIVar3 == (IDataChannel *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x1e7,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    pIVar3 = param_1[2].DataChannel.Object;
    pFVar13 = (FWaveTable *)pIVar3->_padding_;
    pIVar3->_padding_ = 0;
    lVar6 = pIVar3->_padding_;
    iVar2 = *(int *)((longlong)&pIVar3->_padding_ + 4);
    pIVar3->_padding_ = 0;
    fVar1 = *(float *)&pIVar3->_padding_;
    pFVar12 = pTVar14->Ptr;
    if (pFVar12 != &local_50) {
      pFVar4 = (pFVar12->Samples).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pFVar12->Samples).AllocatorInstance.Data = (FScriptContainerElement *)pFVar13;
      (pFVar12->Samples).ArrayNum = (int)lVar6;
      (pFVar12->Samples).ArrayMax = iVar2;
      pFVar13 = (FWaveTable *)0x0;
    }
    pFVar12->FinalValue = fVar1;
  }
  if (pFVar13 != (FWaveTable *)0x0) {
    FMemory::Free(pFVar13);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return true;
}

// PopOpaque @ 14b2eefe0

void __thiscall
Metasound::TCopyableDataChannel<WaveTable::FWaveTable>::PopOpaque
          (TCopyableDataChannel<WaveTable::FWaveTable> *this,IReceiver *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *this_00;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  FWaveTable *this_01;
  FWaveTable *pFVar7;
  FName local_res8;
  undefined8 local_38;
  IReceiver *local_30;
  FName *local_28;
  
  pFVar6 = GetMetasoundDataTypeName<WaveTable::FWaveTable>();
  local_res8 = *pFVar6;
  if ((FName)param_1->_padding_ != local_res8) {
    local_28 = &local_res8;
    local_30 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<WaveTable::FWaveTable>_>'::__l2::<lambda_1>::operator()
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
  if ((pFVar7 != (FWaveTable *)0x0) && (this->PayloadID != param_1[1]._padding_)) {
    plVar1 = &param_1[1]._padding_;
    param_1[1]._padding_ = this->PayloadID;
    this_00 = (TArray<float,TSizedDefaultAllocator<32>_> *)*plVar1;
    if (this_00 == (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
      this_01 = ::operator_new(0x18);
      if (this_01 == (FWaveTable *)0x0) {
        pFVar7 = (FWaveTable *)0x0;
      }
      else {
        pFVar7 = WaveTable::FWaveTable::FWaveTable(this_01,pFVar7);
      }
      if (plVar1 == &local_38) {
        if (pFVar7 != (FWaveTable *)0x0) {
          pFVar3 = (pFVar7->Samples).AllocatorInstance.Data;
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
      TArray<float,TSizedDefaultAllocator<32>_>::operator=(this_00,&pFVar7->Samples);
      *(float *)&this_00[1].AllocatorInstance.Data = pFVar7->FinalValue;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014b2ef127. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// IsEmpty @ 14b2ef140

bool __thiscall
Metasound::TCopyableDataChannel<WaveTable::FWaveTable>::IsEmpty
          (TCopyableDataChannel<WaveTable::FWaveTable> *this)

{
  return (this->AtomicData).Ptr == (FWaveTable *)0x0;
}

// GetDataType @ 14b2ef160

FName __thiscall
Metasound::TCopyableDataChannel<WaveTable::FWaveTable>::GetDataType
          (TCopyableDataChannel<WaveTable::FWaveTable> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<WaveTable::FWaveTable>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14b2ef190

bool __thiscall
Metasound::TCopyableDataChannel<WaveTable::FWaveTable>::PushLiteral
          (TCopyableDataChannel<WaveTable::FWaveTable> *this,FLiteral *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWaveTable *pFVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FWaveTable *pFVar4;
  int *piVar5;
  TUniquePtr<WaveTable::FWaveTable,TDefaultDelete<WaveTable::FWaveTable>_> *pTVar6;
  undefined8 local_28;
  FWaveTable local_20;
  
  bVar3 = TLiteralTraits<WaveTable::FWaveTable>::IsParsable(param_1);
  if (!bVar3) {
    return false;
  }
  TDataLiteralFactory<WaveTable::FWaveTable,Metasound::DataFactoryPrivate::TDataTypeCreator<WaveTable::FWaveTable>_>
  ::CreateExplicitArgs(&local_20,&this->OperatorSettings,param_1);
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar4 = (this->AtomicData).Ptr;
    pTVar6 = &this->AtomicData;
    if (pFVar4 == (FWaveTable *)0x0) {
      pFVar4 = ::operator_new(0x18);
      _Src.Data = local_20.Samples.AllocatorInstance.Data;
      if (pFVar4 == (FWaveTable *)0x0) {
        pFVar4 = (FWaveTable *)0x0;
      }
      else {
        (pFVar4->Samples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar4->Samples).ArrayNum = local_20.Samples.ArrayNum;
        piVar5 = &(pFVar4->Samples).ArrayMax;
        if (local_20.Samples.ArrayNum == 0) {
          *piVar5 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_20.Samples.ArrayNum,0,(ForAnyElementType *)pFVar4,
                     local_20.Samples.ArrayNum,piVar5);
          memcpy((pFVar4->Samples).AllocatorInstance.Data,_Src.Data,
                 (longlong)local_20.Samples.ArrayNum << 2);
        }
        pFVar4->FinalValue = local_20.FinalValue;
      }
      if (pTVar6 == (TUniquePtr<WaveTable::FWaveTable,TDefaultDelete<WaveTable::FWaveTable>_> *)
                    &local_28) {
        if (pFVar4 != (FWaveTable *)0x0) {
          pFVar2 = (pFVar4->Samples).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          ::operator_delete(pFVar4,0x18);
        }
      }
      else {
        pFVar1 = pTVar6->Ptr;
        pTVar6->Ptr = pFVar4;
        if (pFVar1 != (FWaveTable *)0x0) {
          pFVar2 = (pFVar1->Samples).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          ::operator_delete(pFVar1,0x18);
        }
      }
    }
    else {
      TArray<float,TSizedDefaultAllocator<32>_>::operator=(&pFVar4->Samples,&local_20.Samples);
      pFVar4->FinalValue = local_20.FinalValue;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_20.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Samples.AllocatorInstance.Data);
    }
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ConstructNewReceiverImplementation @ 14b2ef330

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<WaveTable::FWaveTable>::ConstructNewReceiverImplementation
          (TCopyableDataChannel<WaveTable::FWaveTable> *this,FReceiverInitParams *param_1)

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
      pFVar7 = GetMetasoundDataTypeName<WaveTable::FWaveTable>();
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
      pFVar7 = GetMetasoundDataTypeName<WaveTable::FWaveTable>();
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
    *puVar5 = &___7__TReceiver_UFWaveTable_WaveTable___Metasound__6B_;
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

// ConstructNewSenderImplementation @ 14b2ef450

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<WaveTable::FWaveTable>::ConstructNewSenderImplementation
          (TCopyableDataChannel<WaveTable::FWaveTable> *this,FSenderInitParams *param_1)

{
  TSender<WaveTable::FWaveTable> *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<WaveTable::FWaveTable> *pTVar2;
  TSender<WaveTable::FWaveTable> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<WaveTable::FWaveTable> *)0x0;
  this_00 = ::operator_new(0x70);
  pTVar3 = pTVar2;
  if (this_00 != (TSender<WaveTable::FWaveTable> *)0x0) {
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
    pTVar2 = TSender<WaveTable::FWaveTable>::TSender<WaveTable::FWaveTable>(this_00,in_R8,&local_38)
    ;
    pTVar3 = (TSender<WaveTable::FWaveTable> *)&DAT_00000001;
  }
  *(TSender<WaveTable::FWaveTable> **)&param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<WaveTable::FWaveTable> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14b2f29a0

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::FWaveTableBankAsset>::GetPayloadID
          (TCopyableDataChannel<Metasound::FWaveTableBankAsset> *this)

{
  return this->PayloadID;
}

// CreateNewPayloadID @ 14b2f29d0

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::FWaveTableBankAsset>::CreateNewPayloadID
          (TCopyableDataChannel<Metasound::FWaveTableBankAsset> *this)

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

// PushOpaque @ 14b2f29f0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::FWaveTableBankAsset>::PushOpaque
          (TCopyableDataChannel<Metasound::FWaveTableBankAsset> *this,ISender *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  IDataChannel *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  FWaveTableBankAssetProxy *pFVar3;
  FWaveTableBankAsset *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  FName *pFVar8;
  long64 lVar9;
  FWaveTableBankAsset *pFVar10;
  atomic<int> *paVar11;
  TUniquePtr<Metasound::FWaveTableBankAsset,TDefaultDelete<Metasound::FWaveTableBankAsset>_>
  *pTVar12;
  FName local_res8;
  longlong local_48;
  FWaveTableBankAsset local_40;
  ISender *local_30;
  FName *local_28;
  
  pFVar8 = GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
  local_res8 = *pFVar8;
  if ((FName)param_1->_padding_ != local_res8) {
    local_28 = &local_res8;
    local_30 = param_1;
    bVar6 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<Metasound::FWaveTableBankAsset>_>'::__l2::<lambda_1>::
            operator()(&local_30);
    if (!bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CheckType<TSenderImplementation>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                         ,0xd5,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
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
  pTVar12 = &this->AtomicData;
  pIVar1 = param_1[2].DataChannel.Object;
  if (pTVar12->Ptr != (FWaveTableBankAsset *)0x0) {
    if (pIVar1 == (IDataChannel *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Payload.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                         ,0x1e7,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    pIVar1 = param_1[2].DataChannel.Object;
    local_40.Proxy.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)pIVar1->_padding_;
    local_40.Proxy.Object = (FWaveTableBankAssetProxy *)pIVar1->_padding_;
    if (local_40.Proxy.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.Proxy.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_40.Proxy.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
           );
      UNLOCK();
    }
    pFVar10 = pTVar12->Ptr;
    if (pFVar10 != &local_40) {
      (pFVar10->Proxy).Object = local_40.Proxy.Object;
      local_40.Proxy.Object = (FWaveTableBankAssetProxy *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar10->Proxy).SharedReferenceCount,&local_40.Proxy.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.Proxy.SharedReferenceCount.ReferenceController);
    goto LAB_14b2f2be2;
  }
  if (pIVar1 == (IDataChannel *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Payload.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                       ,0x1e7,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  pIVar1 = param_1[2].DataChannel.Object;
  pTVar2 = (TReferenceControllerBase<1> *)pIVar1->_padding_;
  pFVar3 = (FWaveTableBankAssetProxy *)pIVar1->_padding_;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    paVar11 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar11 = &pTVar2->SharedReferenceCount;
    LOCK();
    *paVar11 = (atomic<int>)((int)*paVar11 + 1);
    UNLOCK();
  }
  pFVar10 = ::operator_new(0x10);
  if (pFVar10 == (FWaveTableBankAsset *)0x0) {
    pFVar10 = (FWaveTableBankAsset *)0x0;
  }
  else {
    (pFVar10->Proxy).Object = pFVar3;
    (pFVar10->Proxy).SharedReferenceCount.ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar11 = (atomic<int>)((int)*paVar11 + 1);
      UNLOCK();
    }
  }
  if (pTVar12 ==
      (TUniquePtr<Metasound::FWaveTableBankAsset,TDefaultDelete<Metasound::FWaveTableBankAsset>_> *)
      &local_48) {
    if (pFVar10 != (FWaveTableBankAsset *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar10->Proxy).SharedReferenceCount.ReferenceController);
      goto LAB_14b2f2b49;
    }
  }
  else {
    pFVar4 = pTVar12->Ptr;
    pTVar12->Ptr = pFVar10;
    if (pFVar4 != (FWaveTableBankAsset *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar4->Proxy).SharedReferenceCount.ReferenceController);
      pFVar10 = pFVar4;
LAB_14b2f2b49:
      ::operator_delete(pFVar10,0x10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
LAB_14b2f2be2:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return true;
}

// PopOpaque @ 14b2f2c40

void __thiscall
Metasound::TCopyableDataChannel<Metasound::FWaveTableBankAsset>::PopOpaque
          (TCopyableDataChannel<Metasound::FWaveTableBankAsset> *this,IReceiver *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  FWaveTableBankAsset *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  FWaveTableBankAssetProxy *pFVar5;
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
  
  pFVar8 = GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
  local_res8 = *pFVar8;
  if ((FName)param_1->_padding_ != local_res8) {
    local_28 = &local_res8;
    local_30 = param_1;
    bVar7 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<Metasound::FWaveTableBankAsset>_>'::__l2::<lambda_1>::
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
    if ((pFVar2 != (FWaveTableBankAsset *)0x0) && (this->PayloadID != param_1[1]._padding_)) {
      puVar9 = (undefined8 *)param_1[1]._padding_;
      plVar1 = &param_1[1]._padding_;
      param_1[1]._padding_ = this->PayloadID;
      if (puVar9 == (undefined8 *)0x0) {
        puVar9 = ::operator_new(0x10);
        if (puVar9 == (undefined8 *)0x0) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          *puVar9 = (pFVar2->Proxy).Object;
          pTVar3 = (pFVar2->Proxy).SharedReferenceCount.ReferenceController;
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
        pTVar3 = (pFVar2->Proxy).SharedReferenceCount.ReferenceController;
        pFVar5 = (pFVar2->Proxy).Object;
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
                    /* WARNING: Could not recover jumptable at 0x00014b2f2da9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14b2f2dc0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::FWaveTableBankAsset>::IsEmpty
          (TCopyableDataChannel<Metasound::FWaveTableBankAsset> *this)

{
  return (this->AtomicData).Ptr == (FWaveTableBankAsset *)0x0;
}

// GetDataType @ 14b2f2e30

FName __thiscall
Metasound::TCopyableDataChannel<Metasound::FWaveTableBankAsset>::GetDataType
          (TCopyableDataChannel<Metasound::FWaveTableBankAsset> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14b2f2e60

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::FWaveTableBankAsset>::PushLiteral
          (TCopyableDataChannel<Metasound::FWaveTableBankAsset> *this,FLiteral *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TUniquePtr<Metasound::FWaveTableBankAsset,TDefaultDelete<Metasound::FWaveTableBankAsset>_> *pTVar1
  ;
  FWaveTableBankAsset *pFVar2;
  bool bVar3;
  FWaveTableBankAsset *pFVar4;
  FSharedReferencer<1> FVar5;
  undefined8 local_38;
  FWaveTableBankAsset local_30;
  FWaveTableBankAssetProxy *local_20;
  TReferenceControllerBase<1> *pTStack_18;
  
  bVar3 = TLiteralTraits<Metasound::FWaveTableBankAsset>::IsParsable(param_1);
  if (!bVar3) {
    return false;
  }
  TDataLiteralFactory<Metasound::FWaveTableBankAsset,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FWaveTableBankAsset>_>
  ::CreateExplicitArgs(&local_30,&this->OperatorSettings,param_1);
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar4 = (this->AtomicData).Ptr;
    pTVar1 = &this->AtomicData;
    if (pFVar4 == (FWaveTableBankAsset *)0x0) {
      pFVar4 = ::operator_new(0x10);
      if (pFVar4 == (FWaveTableBankAsset *)0x0) {
        pFVar4 = (FWaveTableBankAsset *)0x0;
      }
      else {
        (pFVar4->Proxy).Object = local_30.Proxy.Object;
        (pFVar4->Proxy).SharedReferenceCount.ReferenceController =
             local_30.Proxy.SharedReferenceCount.ReferenceController;
        if (local_30.Proxy.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_30.Proxy.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_30.Proxy.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               + 1);
          UNLOCK();
        }
      }
      FVar5.ReferenceController = local_30.Proxy.SharedReferenceCount.ReferenceController;
      if (pTVar1 == (TUniquePtr<Metasound::FWaveTableBankAsset,TDefaultDelete<Metasound::FWaveTableBankAsset>_>
                     *)&local_38) {
        if (pFVar4 != (FWaveTableBankAsset *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar4->Proxy).SharedReferenceCount.ReferenceController);
          ::operator_delete(pFVar4,0x10);
        }
      }
      else {
        pFVar2 = pTVar1->Ptr;
        pTVar1->Ptr = pFVar4;
        if (pFVar2 != (FWaveTableBankAsset *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar2->Proxy).SharedReferenceCount.ReferenceController);
          ::operator_delete(pFVar2,0x10);
        }
      }
    }
    else {
      if (local_30.Proxy.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_30.Proxy.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_30.Proxy.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
             1);
        UNLOCK();
      }
      local_20 = (pFVar4->Proxy).Object;
      pTStack_18 = (pFVar4->Proxy).SharedReferenceCount.ReferenceController;
      (pFVar4->Proxy).Object = local_30.Proxy.Object;
      (pFVar4->Proxy).SharedReferenceCount.ReferenceController =
           local_30.Proxy.SharedReferenceCount.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_18);
      FVar5.ReferenceController = local_30.Proxy.SharedReferenceCount.ReferenceController;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar5.ReferenceController);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ConstructNewReceiverImplementation @ 14b2f2ff0

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::FWaveTableBankAsset>::ConstructNewReceiverImplementation
          (TCopyableDataChannel<Metasound::FWaveTableBankAsset> *this,FReceiverInitParams *param_1)

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
      pFVar7 = GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
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
    *puVar5 = &___7__TReceiver_VFWaveTableBankAsset_Metasound___Metasound__6B_;
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

// ConstructNewSenderImplementation @ 14b2f3130

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::FWaveTableBankAsset>::ConstructNewSenderImplementation
          (TCopyableDataChannel<Metasound::FWaveTableBankAsset> *this,FSenderInitParams *param_1)

{
  TSender<Metasound::FWaveTableBankAsset> *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<Metasound::FWaveTableBankAsset> *pTVar2;
  TSender<Metasound::FWaveTableBankAsset> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<Metasound::FWaveTableBankAsset> *)0x0;
  this_00 = ::operator_new(0x70);
  pTVar3 = pTVar2;
  if (this_00 != (TSender<Metasound::FWaveTableBankAsset> *)0x0) {
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
    pTVar2 = TSender<Metasound::FWaveTableBankAsset>::TSender<Metasound::FWaveTableBankAsset>
                       (this_00,in_R8,&local_38);
    pTVar3 = (TSender<Metasound::FWaveTableBankAsset> *)&DAT_00000001;
  }
  *(TSender<Metasound::FWaveTableBankAsset> **)&param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<Metasound::FWaveTableBankAsset> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14b2f35f0

long64 __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
::GetPayloadID(TCopyableDataChannel<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
               *this)

{
  return this->PayloadID;
}

// CreateNewPayloadID @ 14b2f3610

long64 __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
::CreateNewPayloadID
          (TCopyableDataChannel<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
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

// PushOpaque @ 14b2f3710

bool __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
::PushOpaque(TCopyableDataChannel<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
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
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *pTVar10;
  int iVar11;
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *pTVar12;
  TUniquePtr<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar13;
  FName local_res8;
  longlong local_58;
  ISender *local_50;
  FName *local_48;
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> local_40;
  
  pFVar7 = GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                     ();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_48 = &local_res8;
    local_50 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>'
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
  if (pTVar13->Ptr == (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)0x0) {
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
    pTVar12 = (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)
              pIVar2->_padding_;
    pIVar2->_padding_ = 0;
    iVar11 = (int)pIVar2->_padding_;
    iVar1 = *(int *)((longlong)&pIVar2->_padding_ + 4);
    pIVar2->_padding_ = 0;
    pTVar9 = ::operator_new(0x10);
    pTVar10 = (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)0x0;
    if (pTVar9 != (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)0x0) {
      (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)pTVar12;
      pTVar9->ArrayNum = iVar11;
      pTVar9->ArrayMax = iVar1;
      pTVar10 = pTVar9;
      pTVar12 = (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)0x0;
      iVar11 = 0;
    }
    if (pTVar13 ==
        (TUniquePtr<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
         *)&local_58) {
      if (pTVar10 != (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)0x0) {
        DestructItems<Metasound::FWaveTableBankAsset,int>
                  ((FWaveTableBankAsset *)(pTVar10->AllocatorInstance).Data,pTVar10->ArrayNum);
        pFVar3 = (pTVar10->AllocatorInstance).Data;
        pTVar9 = pTVar10;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        goto LAB_14b2f3884;
      }
    }
    else {
      pTVar9 = pTVar13->Ptr;
      pTVar13->Ptr = pTVar10;
      if (pTVar9 != (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)0x0) {
        DestructItems<Metasound::FWaveTableBankAsset,int>
                  ((FWaveTableBankAsset *)(pTVar9->AllocatorInstance).Data,pTVar9->ArrayNum);
        pFVar3 = (pTVar9->AllocatorInstance).Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
LAB_14b2f3884:
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
    pTVar12 = (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)
              pIVar2->_padding_;
    pIVar2->_padding_ = 0;
    iVar11 = (int)pIVar2->_padding_;
    iVar1 = *(int *)((longlong)&pIVar2->_padding_ + 4);
    pIVar2->_padding_ = 0;
    pTVar10 = pTVar13->Ptr;
    if (pTVar10 != &local_40) {
      DestructItems<Metasound::FWaveTableBankAsset,int>
                ((FWaveTableBankAsset *)(pTVar10->AllocatorInstance).Data,pTVar10->ArrayNum);
      pFVar3 = (pTVar10->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)pTVar12;
      pTVar10->ArrayNum = iVar11;
      pTVar10->ArrayMax = iVar1;
      DestructItems<Metasound::FWaveTableBankAsset,int>((FWaveTableBankAsset *)0x0,0);
      goto LAB_14b2f38a5;
    }
  }
  DestructItems<Metasound::FWaveTableBankAsset,int>((FWaveTableBankAsset *)pTVar12,iVar11);
  if (pTVar12 != (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(pTVar12);
  }
LAB_14b2f38a5:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return true;
}

// PopOpaque @ 14b2f3970

void __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
::PopOpaque(TCopyableDataChannel<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
            *this,IReceiver *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  int iVar2;
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *pTVar3;
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
  
  pFVar8 = GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                     ();
  local_res8 = *pFVar8;
  if ((FName)param_1->_padding_ != local_res8) {
    local_28 = &local_res8;
    local_30 = param_1;
    bVar7 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>'
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
    if ((pTVar3 != (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)0x0) &&
       (this->PayloadID != param_1[1]._padding_)) {
      plVar1 = &param_1[1]._padding_;
      param_1[1]._padding_ = this->PayloadID;
      if ((TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)param_1[1]._padding_
          == (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)0x0) {
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
            ConstructItems<Metasound::FWaveTableBankAsset,Metasound::FWaveTableBankAsset,int>
                      (pFVar9->Data,(FWaveTableBankAsset *)pFVar4,iVar2);
          }
        }
        if (plVar1 == &local_38) {
          if (pFVar9 != (ForAnyElementType *)0x0) {
            DestructItems<Metasound::FWaveTableBankAsset,int>
                      ((FWaveTableBankAsset *)pFVar9->Data,*(int *)&pFVar9[1].Data);
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
            DestructItems<Metasound::FWaveTableBankAsset,int>
                      ((FWaveTableBankAsset *)*puVar5,*(int *)(puVar5 + 1));
            if ((void *)*puVar5 != (void *)0x0) {
              FMemory::Free((void *)*puVar5);
            }
            ::operator_delete(puVar5,0x10);
          }
        }
      }
      else {
        TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)
                   param_1[1]._padding_,pTVar3);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014b2f3b2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14b2f3b60

bool __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
::IsEmpty(TCopyableDataChannel<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          *this)

{
  return (this->AtomicData).Ptr ==
         (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)0x0;
}

// GetDataType @ 14b2f3b70

FName __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
::GetDataType(TCopyableDataChannel<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
              *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                     ();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14b2f3ba0

bool __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
::PushLiteral(TCopyableDataChannel<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
              *this,FLiteral *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TUniquePtr<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 local_38;
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> local_30;
  
  bVar4 = TLiteralTraits<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
          IsParsable(param_1);
  if (!bVar4) {
    return false;
  }
  TDataLiteralFactory<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  ::CreateExplicitArgs(&local_30,&this->OperatorSettings,param_1);
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar5 = (this->AtomicData).Ptr;
    pTVar1 = &this->AtomicData;
    if (pTVar5 == (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)0x0) {
      pTVar5 = ::operator_new(0x10);
      if (pTVar5 == (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)0x0) {
        pTVar5 = (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)0x0;
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
          ConstructItems<Metasound::FWaveTableBankAsset,Metasound::FWaveTableBankAsset,int>
                    ((pTVar5->AllocatorInstance).Data,
                     (FWaveTableBankAsset *)local_30.AllocatorInstance.Data,local_30.ArrayNum);
        }
      }
      if (pTVar1 == (TUniquePtr<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
                     *)&local_38) {
        if (pTVar5 != (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)0x0) {
          DestructItems<Metasound::FWaveTableBankAsset,int>
                    ((FWaveTableBankAsset *)(pTVar5->AllocatorInstance).Data,pTVar5->ArrayNum);
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
        if (pTVar2 != (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)0x0) {
          DestructItems<Metasound::FWaveTableBankAsset,int>
                    ((FWaveTableBankAsset *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
          pFVar3 = (pTVar2->AllocatorInstance).Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          ::operator_delete(pTVar2,0x10);
        }
      }
    }
    else {
      TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>::operator=
                (pTVar5,&local_30);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    DestructItems<Metasound::FWaveTableBankAsset,int>
              ((FWaveTableBankAsset *)local_30.AllocatorInstance.Data,local_30.ArrayNum);
    if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.AllocatorInstance.Data);
    }
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ConstructNewReceiverImplementation @ 14b2f3d60

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
::ConstructNewReceiverImplementation
          (TCopyableDataChannel<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
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
      pFVar7 = GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
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
      pFVar7 = GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
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
              ___7__TReceiver_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
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

// ConstructNewSenderImplementation @ 14b2f3e80

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
::ConstructNewSenderImplementation
          (TCopyableDataChannel<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this,FSenderInitParams *param_1)

{
  TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar2;
  TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)0x0;
  this_00 = ::operator_new(0x70);
  pTVar3 = pTVar2;
  if (this_00 != (TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)0x0
     ) {
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
    pTVar2 = TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
             TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                       (this_00,in_R8,&local_38);
    pTVar3 = (TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)
             &DAT_00000001;
  }
  *(TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> **)
   &param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)0x0)
  {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// GetPayloadID @ 14b2f9050

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::FAudioBusAsset>::GetPayloadID
          (TCopyableDataChannel<Metasound::FAudioBusAsset> *this)

{
  return this->PayloadID;
}

// CreateNewPayloadID @ 14b2f9070

long64 __thiscall
Metasound::TCopyableDataChannel<Metasound::FAudioBusAsset>::CreateNewPayloadID
          (TCopyableDataChannel<Metasound::FAudioBusAsset> *this)

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

// PushOpaque @ 14b2f90d0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::FAudioBusAsset>::PushOpaque
          (TCopyableDataChannel<Metasound::FAudioBusAsset> *this,ISender *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  IDataChannel *pIVar1;
  FAudioBusProxy *pFVar2;
  FAudioBusAsset *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FName *pFVar7;
  long64 lVar8;
  FAudioBusAsset *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  atomic<int> *paVar11;
  TUniquePtr<Metasound::FAudioBusAsset,TDefaultDelete<Metasound::FAudioBusAsset>_> *pTVar12;
  FName local_res8;
  longlong local_48;
  ISender *local_40;
  FName *local_38;
  FAudioBusProxy *local_30;
  TReferenceControllerBase<1> *pTStack_28;
  
  pFVar7 = GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
  local_res8 = *pFVar7;
  if ((FName)param_1->_padding_ != local_res8) {
    local_38 = &local_res8;
    local_40 = param_1;
    bVar5 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<Metasound::FAudioBusAsset>_>'::__l2::<lambda_1>::operator()
                      (&local_40);
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
  if (pTVar12->Ptr == (FAudioBusAsset *)0x0) {
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
    pFVar2 = (FAudioBusProxy *)pIVar1->_padding_;
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
    if (pFVar9 == (FAudioBusAsset *)0x0) {
      pFVar9 = (FAudioBusAsset *)0x0;
    }
    else {
      (pFVar9->AudioBusProxy).Object = pFVar2;
      (pFVar9->AudioBusProxy).SharedReferenceCount.ReferenceController = pTVar10;
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar11 = (atomic<int>)((int)*paVar11 + 1);
        UNLOCK();
      }
    }
    if (pTVar12 ==
        (TUniquePtr<Metasound::FAudioBusAsset,TDefaultDelete<Metasound::FAudioBusAsset>_> *)
        &local_48) {
      if (pFVar9 == (FAudioBusAsset *)0x0) goto LAB_14b2f92a9;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar9->AudioBusProxy).SharedReferenceCount.ReferenceController);
    }
    else {
      pFVar3 = pTVar12->Ptr;
      pTVar12->Ptr = pFVar9;
      if (pFVar3 == (FAudioBusAsset *)0x0) goto LAB_14b2f92a9;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar3->AudioBusProxy).SharedReferenceCount.ReferenceController);
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
    pFVar2 = (FAudioBusProxy *)pIVar1->_padding_;
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
    local_30 = (pFVar9->AudioBusProxy).Object;
    pTStack_28 = (pFVar9->AudioBusProxy).SharedReferenceCount.ReferenceController;
    (pFVar9->AudioBusProxy).Object = pFVar2;
    (pFVar9->AudioBusProxy).SharedReferenceCount.ReferenceController = pTVar10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_28);
  }
LAB_14b2f92a9:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return true;
}

// PopOpaque @ 14b2f9340

void __thiscall
Metasound::TCopyableDataChannel<Metasound::FAudioBusAsset>::PopOpaque
          (TCopyableDataChannel<Metasound::FAudioBusAsset> *this,IReceiver *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  FAudioBusAsset *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  FAudioBusProxy *pFVar5;
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
  
  pFVar8 = GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
  local_res8 = *pFVar8;
  if ((FName)param_1->_padding_ != local_res8) {
    local_28 = &local_res8;
    local_30 = param_1;
    bVar7 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<Metasound::FAudioBusAsset>_>'::__l2::<lambda_1>::
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
    if ((pFVar2 != (FAudioBusAsset *)0x0) && (this->PayloadID != param_1[1]._padding_)) {
      puVar9 = (undefined8 *)param_1[1]._padding_;
      plVar1 = &param_1[1]._padding_;
      param_1[1]._padding_ = this->PayloadID;
      if (puVar9 == (undefined8 *)0x0) {
        puVar9 = ::operator_new(0x10);
        if (puVar9 == (undefined8 *)0x0) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          *puVar9 = (pFVar2->AudioBusProxy).Object;
          pTVar3 = (pFVar2->AudioBusProxy).SharedReferenceCount.ReferenceController;
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
        pTVar3 = (pFVar2->AudioBusProxy).SharedReferenceCount.ReferenceController;
        pFVar5 = (pFVar2->AudioBusProxy).Object;
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
                    /* WARNING: Could not recover jumptable at 0x00014b2f94a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEmpty @ 14b2f94c0

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::FAudioBusAsset>::IsEmpty
          (TCopyableDataChannel<Metasound::FAudioBusAsset> *this)

{
  return (this->AtomicData).Ptr == (FAudioBusAsset *)0x0;
}

// GetDataType @ 14b2f94d0

FName __thiscall
Metasound::TCopyableDataChannel<Metasound::FAudioBusAsset>::GetDataType
          (TCopyableDataChannel<Metasound::FAudioBusAsset> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// PushLiteral @ 14b2f9540

bool __thiscall
Metasound::TCopyableDataChannel<Metasound::FAudioBusAsset>::PushLiteral
          (TCopyableDataChannel<Metasound::FAudioBusAsset> *this,FLiteral *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TUniquePtr<Metasound::FAudioBusAsset,TDefaultDelete<Metasound::FAudioBusAsset>_> *pTVar1;
  FAudioBusAsset *pFVar2;
  bool bVar3;
  FAudioBusAsset *pFVar4;
  FSharedReferencer<1> FVar5;
  undefined8 local_38;
  FAudioBusAsset local_30;
  FAudioBusProxy *local_20;
  TReferenceControllerBase<1> *pTStack_18;
  
  bVar3 = TLiteralTraits<Metasound::FAudioBusAsset>::IsParsable(param_1);
  if (!bVar3) {
    return false;
  }
  TDataLiteralFactory<Metasound::FAudioBusAsset,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FAudioBusAsset>_>
  ::CreateExplicitArgs(&local_30,&this->OperatorSettings,param_1);
  lpCriticalSection = &this->AtomicDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar4 = (this->AtomicData).Ptr;
    pTVar1 = &this->AtomicData;
    if (pFVar4 == (FAudioBusAsset *)0x0) {
      pFVar4 = ::operator_new(0x10);
      if (pFVar4 == (FAudioBusAsset *)0x0) {
        pFVar4 = (FAudioBusAsset *)0x0;
      }
      else {
        (pFVar4->AudioBusProxy).Object = local_30.AudioBusProxy.Object;
        (pFVar4->AudioBusProxy).SharedReferenceCount.ReferenceController =
             local_30.AudioBusProxy.SharedReferenceCount.ReferenceController;
        if (local_30.AudioBusProxy.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_30.AudioBusProxy.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_30.AudioBusProxy.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      FVar5.ReferenceController = local_30.AudioBusProxy.SharedReferenceCount.ReferenceController;
      if (pTVar1 == (TUniquePtr<Metasound::FAudioBusAsset,TDefaultDelete<Metasound::FAudioBusAsset>_>
                     *)&local_38) {
        if (pFVar4 != (FAudioBusAsset *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar4->AudioBusProxy).SharedReferenceCount.ReferenceController);
          ::operator_delete(pFVar4,0x10);
        }
      }
      else {
        pFVar2 = pTVar1->Ptr;
        pTVar1->Ptr = pFVar4;
        if (pFVar2 != (FAudioBusAsset *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar2->AudioBusProxy).SharedReferenceCount.ReferenceController);
          ::operator_delete(pFVar2,0x10);
        }
      }
    }
    else {
      if (local_30.AudioBusProxy.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_30.AudioBusProxy.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_30.AudioBusProxy.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      local_20 = (pFVar4->AudioBusProxy).Object;
      pTStack_18 = (pFVar4->AudioBusProxy).SharedReferenceCount.ReferenceController;
      (pFVar4->AudioBusProxy).Object = local_30.AudioBusProxy.Object;
      (pFVar4->AudioBusProxy).SharedReferenceCount.ReferenceController =
           local_30.AudioBusProxy.SharedReferenceCount.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_18);
      FVar5.ReferenceController = local_30.AudioBusProxy.SharedReferenceCount.ReferenceController;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar5.ReferenceController);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ConstructNewReceiverImplementation @ 14b2f9700

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::FAudioBusAsset>::ConstructNewReceiverImplementation
          (TCopyableDataChannel<Metasound::FAudioBusAsset> *this,FReceiverInitParams *param_1)

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
      pFVar7 = GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
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
      pFVar7 = GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
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
    *puVar5 = &___7__TReceiver_VFAudioBusAsset_Metasound___Metasound__6B_;
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

// ConstructNewSenderImplementation @ 14b2f9820

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TCopyableDataChannel<Metasound::FAudioBusAsset>::ConstructNewSenderImplementation
          (TCopyableDataChannel<Metasound::FAudioBusAsset> *this,FSenderInitParams *param_1)

{
  TSender<Metasound::FAudioBusAsset> *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar1;
  TSender<Metasound::FAudioBusAsset> *pTVar2;
  TSender<Metasound::FAudioBusAsset> *pTVar3;
  FSenderInitParams *in_R8;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  TSharedRef<Metasound::IDataChannel,1> local_28;
  
  pTVar2 = (TSender<Metasound::FAudioBusAsset> *)0x0;
  this_00 = ::operator_new(0x70);
  pTVar3 = pTVar2;
  if (this_00 != (TSender<Metasound::FAudioBusAsset> *)0x0) {
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
    pTVar2 = TSender<Metasound::FAudioBusAsset>::TSender<Metasound::FAudioBusAsset>
                       (this_00,in_R8,&local_38);
    pTVar3 = (TSender<Metasound::FAudioBusAsset> *)&DAT_00000001;
  }
  *(TSender<Metasound::FAudioBusAsset> **)&param_1->OperatorSettings = pTVar2;
  if (pTVar3 != (TSender<Metasound::FAudioBusAsset> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

