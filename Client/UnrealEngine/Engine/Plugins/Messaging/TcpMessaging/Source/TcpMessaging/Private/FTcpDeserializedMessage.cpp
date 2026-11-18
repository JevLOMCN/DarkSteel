// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TcpMessaging
// Functions: 17

// FTcpDeserializedMessage @ 14eac7710

FTcpDeserializedMessage * __thiscall
FTcpDeserializedMessage::FTcpDeserializedMessage
          (FTcpDeserializedMessage *this,TSharedPtr<IMessageAttachment,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FTcpDeserializedMessage__6B_;
  *(undefined8 *)&this->Annotations = 0;
  *(undefined8 *)&(this->Annotations).field_0x8 = 0;
  *(undefined8 *)&(this->Annotations).field_0x20 = 0;
  *(undefined4 *)&(this->Annotations).field_0x28 = 0;
  *(undefined4 *)&(this->Annotations).field_0x2c = 0x80;
  *(undefined4 *)&(this->Annotations).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Annotations).field_0x34 = 0;
  *(undefined8 *)&(this->Annotations).field_0x40 = 0;
  *(undefined4 *)&(this->Annotations).field_0x48 = 0;
  (this->Attachment).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Attachment).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->Expiration).Ticks = 0;
  this->MessageData = (void *)0x0;
  (this->Recipients).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Recipients).ArrayNum = 0;
  (this->Recipients).ArrayMax = 0;
  (this->Sender).UniqueId.A = 0;
  (this->Sender).UniqueId.B = 0;
  (this->Sender).UniqueId.C = 0;
  (this->Sender).UniqueId.D = 0;
  (this->TimeSent).Ticks = 0;
  (this->TypeInfo).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~FTcpDeserializedMessage @ 14eac7cb0

void __thiscall FTcpDeserializedMessage::~FTcpDeserializedMessage(FTcpDeserializedMessage *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  UObject *pUVar3;
  
  this->_padding_ = (longlong)&___7FTcpDeserializedMessage__6B_;
  if (this->MessageData != (void *)0x0) {
    pUVar3 = FWeakObjectPtr::Get(&(this->TypeInfo).WeakPtr);
    if (pUVar3 != (UObject *)0x0) {
      (**(code **)(*(longlong *)pUVar3 + 0x300))(pUVar3,this->MessageData,1);
    }
    FMemory::Free(this->MessageData);
    this->MessageData = (void *)0x0;
  }
  pFVar1 = (this->Recipients).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// Deserialize @ 14eac9460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTcpDeserializedMessage::Deserialize
          (FTcpDeserializedMessage *this,TSharedPtr<FArrayReader,1> *param_1)

{
  int iVar1;
  FArrayReader *this_00;
  TReferenceControllerBase<1> *pTVar2;
  EMessageScope *pEVar3;
  code *pcVar4;
  float fVar5;
  FName FVar6;
  FName FVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  longlong *plVar11;
  UClass *pUVar12;
  UStruct *pUVar13;
  void *pvVar14;
  TJsonReader<wchar_t> *pTVar15;
  TJsonReader<wchar_t> *pTVar16;
  uint uVar17;
  TJsonReader<wchar_t> *pTVar18;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  uint local_138;
  uint local_134;
  undefined8 local_130;
  FTopLevelAssetPath local_128;
  FString local_118;
  TPairInitializer<FName_const_&,FString_const_&> local_108;
  TRawPtrProxy<TJsonReader<wchar_t>_> local_f8;
  undefined8 *local_f0;
  FString *local_e8;
  IStructDeserializerBackend local_e0;
  void *local_d8;
  undefined8 local_d0;
  TSharedRef<TJsonReader<wchar_t>,1> local_c0;
  FTopLevelAssetPath local_a8;
  FString local_98;
  undefined1 local_88 [56];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  if ((param_1->Object == (FArrayReader *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  this_00 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this_00 == (FArrayReader *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar16 = (TJsonReader<wchar_t> *)0x0;
  *(undefined8 *)&this_00->field_0x38 = 0x400;
  local_128.PackageName.ComparisonIndex.Value = 0;
  local_128.PackageName.Number = 0;
  local_128.AssetName.ComparisonIndex.Value = 0;
  local_128.AssetName.Number = 0;
  plVar11 = (longlong *)(**(code **)(*(longlong *)this_00 + 0x178))(this_00,&local_128);
  (**(code **)(*plVar11 + 0x178))(plVar11,&local_128.AssetName);
  bVar8 = IsGarbageCollectingAndLockingUObjectHashTables();
  fVar5 = __real_3dcccccd;
  if (bVar8) {
    do {
      FWindowsPlatformProcess::Sleep(fVar5);
      bVar8 = IsGarbageCollectingAndLockingUObjectHashTables();
    } while (bVar8);
  }
  FVar7 = local_128.AssetName;
  FVar6 = local_128.PackageName;
  pUVar12 = Z_Construct_UClass_UScriptStruct_NoRegister();
  local_a8.PackageName = FVar6;
  local_a8.AssetName = FVar7;
  pUVar13 = (UStruct *)StaticFindObjectSafe(pUVar12,&local_a8,None);
  local_108.Value = (FString *)pUVar13;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  FWeakObjectPtr::operator=(&(this->TypeInfo).WeakPtr,(FObjectPtr)&local_108.Value);
  bVar8 = FWeakObjectPtr::IsValid(&(this->TypeInfo).WeakPtr,false,true);
  if (bVar8) {
    if ((pUVar13 == (UStruct *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeInfoPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Messaging\\TcpMessaging\\Source\\TcpMessaging\\Private\\Transport\\TcpDeserializedMessage.cpp"
                           ,0x43,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
    ::operator<<((FArchive *)this_00,&(this->Sender).UniqueId);
    plVar11 = *(longlong **)&this_00->field_0x8;
    local_138 = 0;
    if ((uint *)plVar11[1] < (uint *)*plVar11 + 1) {
      if ((this_00->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)this_00 + 0x188))(this_00,&local_138,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)this_00,&local_138);
      }
    }
    else {
      local_138 = *(uint *)*plVar11;
      *plVar11 = *plVar11 + 4;
    }
    if (local_138 < 0x401) {
      TArray<FMessageAddress,TSizedDefaultAllocator<32>_>::Empty(&this->Recipients,local_138);
      while (0 < (int)local_138) {
        uVar10 = (this->Recipients).ArrayNum;
        local_138 = local_138 - 1;
        if (uVar10 == (this->Recipients).ArrayMax) {
          uVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,&(this->Recipients).AllocatorInstance,
                              &(this->Recipients).ArrayMax);
        }
        iVar1 = uVar10 + 1;
        (this->Recipients).ArrayNum = iVar1;
        uVar17 = 0;
        if ((int)uVar10 < iVar1) {
          uVar17 = ~uVar10 >> 0x1f;
        }
        if (uVar17 == 0) {
          local_140 = (longlong)iVar1;
          local_148 = (longlong)(int)uVar10;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
        }
        pTVar18 = (TJsonReader<wchar_t> *)
                  ((this->Recipients).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10);
        pTVar15 = pTVar16;
        if (pTVar18 != (TJsonReader<wchar_t> *)0x0) {
          pTVar18->_padding_ = 0;
          (pTVar18->ParseState).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pTVar15 = pTVar18;
        }
        ::operator<<((FArchive *)this_00,(FGuid *)pTVar15);
      }
      pEVar3 = (EMessageScope *)**(undefined8 **)&this_00->field_0x8;
      if ((EMessageScope *)(*(undefined8 **)&this_00->field_0x8)[1] < pEVar3 + 1) {
        (**(code **)(*(longlong *)this_00 + 0x188))(this_00,&this->Scope,1);
      }
      else {
        this->Scope = *pEVar3;
        **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 1;
      }
      if (this->Scope < 4) {
        ::operator<<((FArchive *)this_00,&this->TimeSent);
        ::operator<<((FArchive *)this_00,&this->Expiration);
        plVar11 = *(longlong **)&this_00->field_0x8;
        local_134 = 0;
        if ((uint *)plVar11[1] < (uint *)*plVar11 + 1) {
          if ((this_00->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)this_00 + 0x188))(this_00,&local_134,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)this_00,&local_134);
          }
        }
        else {
          local_134 = *(uint *)*plVar11;
          *plVar11 = *plVar11 + 4;
        }
        if ((int)local_134 < 0x81) {
          if (0 < (int)local_134) {
            local_f0 = &local_130;
            local_e8 = &local_118;
            do {
              local_134 = local_134 - 1;
              local_130 = 0;
              local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_118.Data.ArrayNum = 0;
              local_118.Data.ArrayMax = 0;
              (**(code **)(*(longlong *)this_00 + 0x178))(this_00,&local_130);
              ::operator<<((FArchive *)this_00,&local_118);
              TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FName_const_&,FString_const_&>_>
                        ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                          *)&this->Annotations,&local_108,(bool *)&local_f0);
              if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_118.Data.AllocatorInstance.Data);
              }
            } while (0 < (int)local_134);
          }
          pvVar14 = FMemory::Malloc((longlong)
                                    (pUVar13->PropertiesSize + -1 + (int)pUVar13->MinAlignment &
                                    -(int)pUVar13->MinAlignment),0);
          this->MessageData = pvVar14;
          (**(code **)(pUVar13->_padding_ + 0x2f8))(pUVar13,pvVar14,1);
          local_d8 = (void *)0x0;
          local_e0 = (IStructDeserializerBackend)&___7FJsonStructDeserializerBackend__6B_;
          local_d0 = 0;
          pTVar15 = ::operator_new(0x70);
          if (pTVar15 != (TJsonReader<wchar_t> *)0x0) {
            (pTVar15->ParseState).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pTVar15->ParseState).ArrayNum = 0;
            (pTVar15->ParseState).ArrayMax = 0;
            pTVar15->_padding_ = (longlong)&___7__TJsonReader__W__6B_;
            pTVar15->CurrentToken = None;
            pTVar15->Stream = (FArchive *)this_00;
            (pTVar15->Identifier).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pTVar15->Identifier).Data.ArrayNum = 0;
            (pTVar15->Identifier).Data.ArrayMax = 0;
            (pTVar15->ErrorMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pTVar15->ErrorMessage).Data.ArrayNum = 0;
            (pTVar15->ErrorMessage).Data.ArrayMax = 0;
            (pTVar15->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pTVar15->StringValue).Data.ArrayNum = 0;
            (pTVar15->StringValue).Data.ArrayMax = 0;
            pTVar15->NumberValue = 0.0;
            pTVar15->LineNumber = 1;
            pTVar15->CharacterNumber = 0;
            pTVar15->BoolValue = false;
            pTVar15->FinishedReadingRootObject = false;
            pTVar16 = pTVar15;
          }
          local_f8.Object = pTVar16;
          TSharedRef<TJsonReader<wchar_t>,1>::
          TSharedRef<TJsonReader<wchar_t>,1><TJsonReader<wchar_t>_>(&local_c0,&local_f8);
          local_88._0_4_ = Ignore;
          local_88._4_4_ = KeyValuePair;
          local_88._16_8_ = 0;
          local_50 = (longlong *)0x0;
          bVar8 = FStructDeserializer::Deserialize
                            (this->MessageData,pUVar13,&local_e0,
                             (FStructDeserializerPolicies *)local_88);
          if (local_88._16_8_ != 0) {
            plVar11 = (longlong *)(local_88 + 0x20);
            if (local_50 != (longlong *)0x0) {
              plVar11 = local_50;
            }
            (**(code **)(*plVar11 + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_c0.SharedReferenceCount.ReferenceController);
          if (local_d8 == (void *)0x0) {
            return bVar8;
          }
          FMemory::Free(local_d8);
          return bVar8;
        }
      }
    }
  }
  else if (5 < (byte)LogTcpMessaging._0_1_) {
    FTopLevelAssetPath::ToString(&local_128,&local_98);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTcpMessaging);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// GetAnnotations @ 14eaca860

TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> * __thiscall
FTcpDeserializedMessage::GetAnnotations(FTcpDeserializedMessage *this)

{
  return &this->Annotations;
}

// GetAttachment @ 14eaca870

TSharedPtr<IMessageAttachment,1> * __thiscall
FTcpDeserializedMessage::GetAttachment
          (FTcpDeserializedMessage *this,TSharedPtr<IMessageAttachment,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Attachment).Object;
  pTVar1 = (this->Attachment).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetExpiration @ 14eacaaa0

FDateTime * __thiscall FTcpDeserializedMessage::GetExpiration(FTcpDeserializedMessage *this)

{
  return &this->Expiration;
}

// GetFlags @ 14eacaab0

EMessageFlags __thiscall FTcpDeserializedMessage::GetFlags(FTcpDeserializedMessage *this)

{
  return None;
}

// GetForwarder @ 14eacaac0

FMessageAddress * __thiscall FTcpDeserializedMessage::GetForwarder(FTcpDeserializedMessage *this)

{
  return &this->Sender;
}

// GetMessage @ 14eacab60

void * __thiscall FTcpDeserializedMessage::GetMessage(FTcpDeserializedMessage *this)

{
  return this->MessageData;
}

// GetMessageTypeInfo @ 14eacab70

TWeakObjectPtr<UScriptStruct,FWeakObjectPtr> * __thiscall
FTcpDeserializedMessage::GetMessageTypeInfo(FTcpDeserializedMessage *this)

{
  return &this->TypeInfo;
}

// GetOriginalContext @ 14eacabe0

TSharedPtr<IMessageContext,1> * __thiscall
FTcpDeserializedMessage::GetOriginalContext
          (FTcpDeserializedMessage *this,TSharedPtr<IMessageContext,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IMessageContext *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetRecipients @ 14eacacb0

TArray<FMessageAddress,TSizedDefaultAllocator<32>_> * __thiscall
FTcpDeserializedMessage::GetRecipients(FTcpDeserializedMessage *this)

{
  return &this->Recipients;
}

// GetScope @ 14eacace0

EMessageScope __thiscall FTcpDeserializedMessage::GetScope(FTcpDeserializedMessage *this)

{
  return this->Scope;
}

// GetSender @ 14eacacf0

FMessageAddress * __thiscall FTcpDeserializedMessage::GetSender(FTcpDeserializedMessage *this)

{
  return &this->Sender;
}

// GetSenderThread @ 14eacad00

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall FTcpDeserializedMessage::GetSenderThread(FTcpDeserializedMessage *this)

{
  return AnyNormalThreadNormalTask;
}

// GetTimeForwarded @ 14eacae80

FDateTime * __thiscall FTcpDeserializedMessage::GetTimeForwarded(FTcpDeserializedMessage *this)

{
  return &this->TimeSent;
}

// GetTimeSent @ 14eacae90

FDateTime * __thiscall FTcpDeserializedMessage::GetTimeSent(FTcpDeserializedMessage *this)

{
  return &this->TimeSent;
}

