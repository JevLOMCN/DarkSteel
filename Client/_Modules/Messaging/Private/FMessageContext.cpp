// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Messaging
// Functions: 16

// FMessageContext @ 142d3d740

/* WARNING: Enum "Type": Some values do not have unique names */

FMessageContext * __thiscall
FMessageContext::FMessageContext
          (FMessageContext *this,void *param_1,UScriptStruct *param_2,
          TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
          *param_3,TSharedPtr<IMessageAttachment,1> *param_4,FMessageAddress *param_5,
          TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *param_6,EMessageScope param_7,
          EMessageFlags param_8,FDateTime *param_9,FDateTime *param_10,Type param_11)

{
  int *piVar1;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *_Src;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  this->_padding_ = (longlong)&___7FMessageContext__6B_;
  *(undefined8 *)&(this->Annotations).field_0x0 = 0;
  *(undefined8 *)&(this->Annotations).field_0x8 = 0;
  *(undefined8 *)&(this->Annotations).field_0x20 = 0;
  *(undefined4 *)&(this->Annotations).field_0x28 = 0;
  *(undefined4 *)&(this->Annotations).field_0x2c = 0x80;
  *(undefined4 *)&(this->Annotations).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Annotations).field_0x34 = 0;
  *(undefined8 *)&(this->Annotations).field_0x40 = 0;
  *(undefined4 *)&(this->Annotations).field_0x48 = 0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)&this->Annotations,
            (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)param_3);
  (this->Attachment).Object = param_4->Object;
  pTVar4 = (param_4->SharedReferenceCount).ReferenceController;
  (this->Attachment).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->Expiration).Ticks = param_10->Ticks;
  this->Message = param_1;
  pTVar2 = &this->Recipients;
  (this->OriginalContext).Object = (IMessageContext *)0x0;
  (this->OriginalContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_6->ArrayNum;
  _Src = (param_6->AllocatorInstance).Data;
  piVar1 = &(this->Recipients).ArrayMax;
  (this->Recipients).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 << 4);
  }
  this->Scope = param_7;
  this->Flags = param_8;
  uVar5 = (param_5->UniqueId).A;
  uVar6 = (param_5->UniqueId).B;
  uVar7 = (param_5->UniqueId).C;
  uVar8 = (param_5->UniqueId).D;
  this->SenderThread = param_11;
  (this->Sender).UniqueId.A = uVar5;
  (this->Sender).UniqueId.B = uVar6;
  (this->Sender).UniqueId.C = uVar7;
  (this->Sender).UniqueId.D = uVar8;
  (this->TimeSent).Ticks = param_9->Ticks;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->TypeInfo).WeakPtr = (FWeakObjectPtr)0x0;
  param_4 = (TSharedPtr<IMessageAttachment,1> *)param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(this->TypeInfo).WeakPtr,(FObjectPtr)&param_4);
  return this;
}

// ~FMessageContext @ 142d3ec90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMessageContext::~FMessageContext(FMessageContext *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  UObject *pUVar3;
  
  this->_padding_ = (longlong)&___7FMessageContext__6B_;
  if (this->Message != (void *)0x0) {
    pUVar3 = FWeakObjectPtr::Get(&(this->TypeInfo).WeakPtr);
    if (pUVar3 != (UObject *)0x0) {
      (**(code **)(*(longlong *)pUVar3 + 0x300))(pUVar3,this->Message,1);
    }
    FMemory::Free(this->Message);
  }
  pFVar1 = (this->Recipients).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalContext).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Attachment).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->Annotations).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Annotations).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Annotations);
  this->_padding_ = (longlong)&___7IMessageContext__6B_;
  return;
}

// GetAnnotations @ 142d47460

/* WARNING: Enum "Type": Some values do not have unique names */

TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> * __thiscall
FMessageContext::GetAnnotations(FMessageContext *this)

{
  IMessageContext *pIVar1;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *pTVar2;
  
  pIVar1 = (this->OriginalContext).Object;
  if (pIVar1 != (IMessageContext *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142d4746f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pTVar2 = (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              *)(**(code **)*pIVar1)(pIVar1);
    return pTVar2;
  }
  return &this->Annotations;
}

// GetAttachment @ 142d47480

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageAttachment,1> * __thiscall
FMessageContext::GetAttachment
          (FMessageContext *this,TSharedPtr<IMessageAttachment,1> *__return_storage_ptr__)

{
  IMessageContext *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pIVar1 = (this->OriginalContext).Object;
  if (pIVar1 != (IMessageContext *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (this->Attachment).Object;
  pTVar2 = (this->Attachment).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetExpiration @ 142d47670

/* WARNING: Enum "Type": Some values do not have unique names */

FDateTime * __thiscall FMessageContext::GetExpiration(FMessageContext *this)

{
  IMessageContext *pIVar1;
  FDateTime *pFVar2;
  
  pIVar1 = (this->OriginalContext).Object;
  if (pIVar1 != (IMessageContext *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142d4767f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar2 = (FDateTime *)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    return pFVar2;
  }
  return &this->Expiration;
}

// GetFlags @ 142d47690

/* WARNING: Enum "Type": Some values do not have unique names */

EMessageFlags __thiscall FMessageContext::GetFlags(FMessageContext *this)

{
  IMessageContext *pIVar1;
  EMessageFlags EVar2;
  
  pIVar1 = (this->OriginalContext).Object;
  if (pIVar1 != (IMessageContext *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142d4769f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EVar2 = (**(code **)((longlong)*pIVar1 + 0x40))(pIVar1);
    return EVar2;
  }
  return this->Flags;
}

// GetForwarder @ 142d476b0

/* WARNING: Enum "Type": Some values do not have unique names */

FMessageAddress * __thiscall FMessageContext::GetForwarder(FMessageContext *this)

{
  return &this->Sender;
}

// GetMessage @ 142d477a0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FMessageContext::GetMessage(FMessageContext *this)

{
  IMessageContext *pIVar1;
  void *pvVar2;
  
  pIVar1 = (this->OriginalContext).Object;
  if (pIVar1 != (IMessageContext *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142d477af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar2 = (void *)(**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
    return pvVar2;
  }
  return this->Message;
}

// GetMessageTypeInfo @ 142d477c0

/* WARNING: Enum "Type": Some values do not have unique names */

TWeakObjectPtr<UScriptStruct,FWeakObjectPtr> * __thiscall
FMessageContext::GetMessageTypeInfo(FMessageContext *this)

{
  IMessageContext *pIVar1;
  TWeakObjectPtr<UScriptStruct,FWeakObjectPtr> *pTVar2;
  
  pIVar1 = (this->OriginalContext).Object;
  if (pIVar1 != (IMessageContext *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142d477cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pTVar2 = (TWeakObjectPtr<UScriptStruct,FWeakObjectPtr> *)
             (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
    return pTVar2;
  }
  return &this->TypeInfo;
}

// GetOriginalContext @ 142d47a90

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageContext,1> * __thiscall
FMessageContext::GetOriginalContext
          (FMessageContext *this,TSharedPtr<IMessageContext,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->OriginalContext).Object;
  pTVar1 = (this->OriginalContext).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetRecipients @ 142d47ae0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FMessageAddress,TSizedDefaultAllocator<32>_> * __thiscall
FMessageContext::GetRecipients(FMessageContext *this)

{
  return &this->Recipients;
}

// GetScope @ 142d47af0

/* WARNING: Enum "Type": Some values do not have unique names */

EMessageScope __thiscall FMessageContext::GetScope(FMessageContext *this)

{
  return this->Scope;
}

// GetSender @ 142d47b10

/* WARNING: Enum "Type": Some values do not have unique names */

FMessageAddress * __thiscall FMessageContext::GetSender(FMessageContext *this)

{
  IMessageContext *pIVar1;
  FMessageAddress *pFVar2;
  
  pIVar1 = (this->OriginalContext).Object;
  if (pIVar1 != (IMessageContext *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142d47b1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar2 = (FMessageAddress *)(**(code **)((longlong)*pIVar1 + 0x48))(pIVar1);
    return pFVar2;
  }
  return &this->Sender;
}

// GetSenderThread @ 142d47b60

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall FMessageContext::GetSenderThread(FMessageContext *this)

{
  return this->SenderThread;
}

// GetTimeForwarded @ 142d47e60

/* WARNING: Enum "Type": Some values do not have unique names */

FDateTime * __thiscall FMessageContext::GetTimeForwarded(FMessageContext *this)

{
  return &this->TimeSent;
}

// GetTimeSent @ 142d47e70

/* WARNING: Enum "Type": Some values do not have unique names */

FDateTime * __thiscall FMessageContext::GetTimeSent(FMessageContext *this)

{
  IMessageContext *pIVar1;
  FDateTime *pFVar2;
  
  pIVar1 = (this->OriginalContext).Object;
  if (pIVar1 != (IMessageContext *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142d47e7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar2 = (FDateTime *)(**(code **)((longlong)*pIVar1 + 0x68))(pIVar1);
    return pFVar2;
  }
  return &this->TimeSent;
}

