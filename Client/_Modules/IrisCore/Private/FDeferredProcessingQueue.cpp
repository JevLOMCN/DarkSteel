// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 2

// Enqueue @ 1442085e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FNetObjectAttachmentReceiveQueue::FDeferredProcessingQueue::Enqueue
          (FDeferredProcessingQueue *this,FNetSerializationContext *param_1,FNetRefHandle param_2,
          TRefCountPtr<UE::Net::FNetBlob> *param_3,bool param_4)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  FNetBlob *pFVar4;
  FName FVar5;
  UClass *pUVar6;
  FString *pFVar7;
  FNetBlobAssembler *pFVar8;
  undefined1 uVar9;
  FNetBlobAssembler *pFVar10;
  ulong64 uVar11;
  ulonglong uVar12;
  wchar_t *pwVar13;
  USequentialPartialNetBlobHandlerConfig *pUVar14;
  FDeferredProcessingQueue *pFVar15;
  wchar_t *pwVar16;
  FNetBlobAssemblerInitParams local_res20;
  FString local_50;
  FString local_40;
  
  uVar9 = (char)(param_3->Reference->CreationInfo).Flags & Reliable;
  if ((uVar9 != None) && (this->bOnlyProcessUnreliable != false)) {
    if (1 < (byte)LogIris._0_1_) {
      Logging::Private::BasicLog<2>
                (&`public:_void___cdecl_UE::Net::Private::FNetObjectAttachmentReceiveQueue::FDeferredProcessingQueue::Enqueue(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetRefHandle,TRefCountPtr<UE::Net::FNetBlob>_const&___ptr64,bool)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
    FVar5 = GNetError_UnsupportedNetBlob;
    FNetSerializationContext::SetBitStreamOverflow(param_1);
    FNetErrorContext::SetError(&param_1->ErrorContext,FVar5);
    return;
  }
  if (!param_4) {
    if ((this->bOnlyProcessUnreliable != false) &&
       (pFVar8 = (this->UnreliableNetBlobAssembler).Ptr, pFVar8 != (FNetBlobAssembler *)0x0)) {
      (this->UnreliableNetBlobAssembler).Ptr = (FNetBlobAssembler *)0x0;
      FNetBitStreamWriter::~FNetBitStreamWriter(&pFVar8->BitWriter);
      pFVar3 = (pFVar8->Payload).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      ::operator_delete(pFVar8,0x60);
    }
    uVar11 = (ulonglong)((this->Queue).Head - (this->Queue).Tail) + 1;
    if ((ulonglong)(longlong)(this->Queue).Storage.ArrayNum < uVar11) {
      TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>::
      SetCapacity(&this->Queue,uVar11);
    }
    uVar2 = (this->Queue).Head;
    uVar12 = (ulonglong)((this->Queue).IndexMask & uVar2);
    (this->Queue).Head = uVar2 + 1;
    pFVar3 = (this->Queue).Storage.AllocatorInstance.Data;
    *(undefined8 *)(pFVar3 + uVar12 * 8) = 0;
    pFVar4 = param_3->Reference;
    *(FNetBlob **)(pFVar3 + uVar12 * 8) = pFVar4;
    if (pFVar4 == (FNetBlob *)0x0) {
      return;
    }
    pFVar4->RefCount = pFVar4->RefCount + 1;
    return;
  }
  pFVar15 = this;
  if (uVar9 == None) {
    pFVar15 = (FDeferredProcessingQueue *)&this->UnreliableNetBlobAssembler;
  }
  if ((pFVar15->ReliableNetBlobAssembler).Ptr != (FNetBlobAssembler *)0x0) goto LAB_144208775;
  if ((this->PartialNetObjectAttachmentHandler == (UPartialNetObjectAttachmentHandler *)0x0) ||
     (pUVar14 = (USequentialPartialNetBlobHandlerConfig *)
                this->PartialNetObjectAttachmentHandler->_padding_,
     pUVar14 == (USequentialPartialNetBlobHandlerConfig *)0x0)) {
    pUVar14 = (USequentialPartialNetBlobHandlerConfig *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) {
      pFVar7 = GetTypeName<UPartialNetObjectAttachmentHandlerConfig_const_>(&local_50);
      pwVar13 = L"";
      if ((pFVar7->Data).ArrayNum == 0) {
        pwVar16 = L"";
      }
      else {
        pwVar16 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
      pFVar7 = GetFullNameForCastLogError<USequentialPartialNetBlobHandlerConfig_const_>
                         (&local_40,pUVar14);
      if ((pFVar7->Data).ArrayNum != 0) {
        pwVar13 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar13,pwVar16);
    }
  }
  local_res20.PartialNetBlobHandlerConfig = pUVar14;
  pFVar8 = ::operator_new(0x60);
  if (pFVar8 == (FNetBlobAssembler *)0x0) {
    pFVar8 = (FNetBlobAssembler *)0x0;
  }
  else {
    pFVar8 = FNetBlobAssembler::FNetBlobAssembler(pFVar8);
  }
  if (pFVar15 == (FDeferredProcessingQueue *)&stack0xffffffffffffffa8) {
    if (pFVar8 != (FNetBlobAssembler *)0x0) {
      FNetBitStreamWriter::~FNetBitStreamWriter(&pFVar8->BitWriter);
      pFVar3 = (pFVar8->Payload).AllocatorInstance.Data;
      pFVar10 = pFVar8;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      goto LAB_144208756;
    }
  }
  else {
    pFVar10 = (pFVar15->ReliableNetBlobAssembler).Ptr;
    (pFVar15->ReliableNetBlobAssembler).Ptr = pFVar8;
    if (pFVar10 != (FNetBlobAssembler *)0x0) {
      FNetBitStreamWriter::~FNetBitStreamWriter(&pFVar10->BitWriter);
      pFVar3 = (pFVar10->Payload).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
LAB_144208756:
      ::operator_delete(pFVar10,0x60);
    }
  }
  FNetBlobAssembler::Init((pFVar15->ReliableNetBlobAssembler).Ptr,&local_res20);
LAB_144208775:
  FNetBlobAssembler::AddPartialNetBlob
            ((pFVar15->ReliableNetBlobAssembler).Ptr,param_1,param_2,
             (TRefCountPtr<UE::Net::FPartialNetBlob> *)param_3);
  pFVar8 = (pFVar15->ReliableNetBlobAssembler).Ptr;
  if (pFVar8->bIsReadyToAssemble == false) {
    if (pFVar8->bIsBrokenSequence == false) {
      return;
    }
  }
  else {
    FNetBlobAssembler::Assemble(pFVar8,(FNetSerializationContext *)&local_res20);
    if ((local_res20.PartialNetBlobHandlerConfig != (USequentialPartialNetBlobHandlerConfig *)0x0)
       && (TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>::
           Enqueue(&this->Queue,(TRefCountPtr<UE::Net::FNetBlob> *)&local_res20),
          local_res20.PartialNetBlobHandlerConfig != (USequentialPartialNetBlobHandlerConfig *)0x0))
    {
      FNetBlob::Release((FNetBlob *)local_res20.PartialNetBlobHandlerConfig);
    }
  }
  pFVar8 = (pFVar15->ReliableNetBlobAssembler).Ptr;
  if (pFVar8 != (FNetBlobAssembler *)0x0) {
    (pFVar15->ReliableNetBlobAssembler).Ptr = (FNetBlobAssembler *)0x0;
    FNetBitStreamWriter::~FNetBitStreamWriter(&pFVar8->BitWriter);
    pFVar3 = (pFVar8->Payload).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pFVar8,0x60);
  }
  return;
}

// Peek @ 1442131f0

TRefCountPtr<UE::Net::FNetBlob> * __thiscall
UE::Net::Private::FNetObjectAttachmentReceiveQueue::FDeferredProcessingQueue::Peek
          (FDeferredProcessingQueue *this)

{
  uint *puVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  FNetBlob *this_00;
  code *pcVar5;
  bool bVar6;
  TRefCountPtr<UE::Net::FNetBlob> *pTVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar10 = 0;
  uVar9 = (this->Queue).Head - (this->Queue).Tail;
  if (uVar9 != 0) {
    do {
      if (((this->Queue).Head == (this->Queue).Tail) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Offset < Count()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                             ,0x4f,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TRefCountPtr<UE::Net::FNetBlob> *)(*pcVar5)();
        return pTVar7;
      }
      uVar8 = (ulonglong)((this->Queue).IndexMask & (this->Queue).Tail);
      pFVar3 = (this->Queue).Storage.AllocatorInstance.Data;
      lVar4 = *(longlong *)(pFVar3 + uVar8 * 8);
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x28) != 0) {
          return (TRefCountPtr<UE::Net::FNetBlob> *)(pFVar3 + uVar8 * 8);
        }
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                           ,0x262,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pTVar7 = (TRefCountPtr<UE::Net::FNetBlob> *)(*pcVar5)();
          return pTVar7;
        }
      }
      uVar2 = (this->Queue).Tail;
      if ((this->Queue).Head == uVar2) {
        bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1638566698149740322>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                           ,0xde,"Count() > 0");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pTVar7 = (TRefCountPtr<UE::Net::FNetBlob> *)(*pcVar5)();
          return pTVar7;
        }
      }
      else {
        this_00 = *(FNetBlob **)
                   ((this->Queue).Storage.AllocatorInstance.Data +
                   (ulonglong)(uVar2 & (this->Queue).IndexMask) * 8);
        if (this_00 != (FNetBlob *)0x0) {
          FNetBlob::Release(this_00);
        }
        puVar1 = &(this->Queue).Tail;
        *puVar1 = *puVar1 + 1;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar9);
  }
  return (TRefCountPtr<UE::Net::FNetBlob> *)0x0;
}

