// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 4

// Create @ 141dd13a0

TSharedRef<TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>,1> * __cdecl
TJsonWriterFactory<char,TCondensedJsonPrintPolicy<char>_>::Create
          (TSharedRef<TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>,1> *__return_storage_ptr__,
          FAnsiString *param_1,int param_2)

{
  TJsonStringWriter<TCondensedJsonPrintPolicy<char>_> *pTVar1;
  FArchiveState *this;
  FArchiveState *pFVar2;
  TRawPtrProxy<TJsonStringWriter<TCondensedJsonPrintPolicy<char>_>_> local_res8;
  TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<char>_>,1> local_38;
  
  pTVar1 = ::operator_new(0x40);
  if (pTVar1 == (TJsonStringWriter<TCondensedJsonPrintPolicy<char>_> *)0x0) {
    pTVar1 = (TJsonStringWriter<TCondensedJsonPrintPolicy<char>_> *)0x0;
  }
  else {
    this = ::operator_new(0xa8);
    pFVar2 = (FArchiveState *)0x0;
    if (this != (FArchiveState *)0x0) {
      local_res8.Object = (TJsonStringWriter<TCondensedJsonPrintPolicy<char>_> *)0x0;
      this->_padding_ = 0;
      this->ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      (this->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
      (this->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
      (this->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
      *(undefined8 *)&this->field_0x28 = 0;
      this->ArSerializingDefaults = 0;
      this->ArPortFlags = 0;
      this->ArMaxSerializeSize = 0;
      (this->ArUEVer).FileVersionUE4 = 0;
      (this->ArUEVer).FileVersionUE5 = 0;
      this->ArLicenseeUEVer = 0;
      (this->ArEngineVer).Major = 0;
      (this->ArEngineVer).Minor = 0;
      (this->ArEngineVer).Patch = 0;
      *(undefined2 *)&(this->ArEngineVer).field_0x6 = 0;
      (this->ArEngineVer).Changelist = 0;
      this->CustomVersionContainer = (FCustomVersionContainer *)0x0;
      this->ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      this->SavePackageData = (FArchiveSavePackageData *)0x0;
      this->SerializedProperty = (FProperty *)0x0;
      this->SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      *(undefined8 *)&this->bCustomVersionsAreReset = 0;
      this->NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(this);
      this[1]._padding_ = 0;
      this->_padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
      this[1].ActiveFPLB = (FFastPathLoadBuffer *)&pTVar1->Bytes;
      this[1].InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
      FArchiveState::SetIsSaving(this,true);
      (**(code **)(this->_padding_ + 0x108))(this,0);
      this->_padding_ = (longlong)&___7FMemoryWriter__6B_;
      pFVar2 = this;
    }
    pTVar1->_padding_ = (longlong)pFVar2;
    (pTVar1->Bytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->Bytes).ArrayNum = 0;
    (pTVar1->Bytes).ArrayMax = 0;
    pTVar1->_padding_ = (longlong)&___7__TJsonStringWriter_U__TCondensedJsonPrintPolicy_D____6B_;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    *(undefined4 *)&pTVar1->_padding_ = 0;
    *(int *)((longlong)&pTVar1->_padding_ + 4) = param_2;
    pTVar1->OutString = param_1;
  }
  local_res8.Object = pTVar1;
  TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<char>_>,1>::
  TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<char>_>,1><TJsonStringWriter<TCondensedJsonPrintPolicy<char>_>_>
            (&local_38,&local_res8);
  __return_storage_ptr__->Object =
       (TJsonWriter<char,TCondensedJsonPrintPolicy<char>_> *)local_38.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_38.SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Create @ 141dd1510

TSharedRef<TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>,1> * __cdecl
TJsonWriterFactory<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Create
          (TSharedRef<TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>,1>
           *__return_storage_ptr__,FUtf8String *param_1,int param_2)

{
  TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_> *pTVar1;
  FArchiveState *this;
  FArchiveState *pFVar2;
  TRawPtrProxy<TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_>_> local_res8;
  TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_>,1> local_38;
  
  pTVar1 = ::operator_new(0x40);
  if (pTVar1 == (TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_> *)0x0) {
    pTVar1 = (TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_> *)0x0;
  }
  else {
    this = ::operator_new(0xa8);
    pFVar2 = (FArchiveState *)0x0;
    if (this != (FArchiveState *)0x0) {
      local_res8.Object = (TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_> *)0x0;
      this->_padding_ = 0;
      this->ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      (this->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
      (this->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
      (this->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
      *(undefined8 *)&this->field_0x28 = 0;
      this->ArSerializingDefaults = 0;
      this->ArPortFlags = 0;
      this->ArMaxSerializeSize = 0;
      (this->ArUEVer).FileVersionUE4 = 0;
      (this->ArUEVer).FileVersionUE5 = 0;
      this->ArLicenseeUEVer = 0;
      (this->ArEngineVer).Major = 0;
      (this->ArEngineVer).Minor = 0;
      (this->ArEngineVer).Patch = 0;
      *(undefined2 *)&(this->ArEngineVer).field_0x6 = 0;
      (this->ArEngineVer).Changelist = 0;
      this->CustomVersionContainer = (FCustomVersionContainer *)0x0;
      this->ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      this->SavePackageData = (FArchiveSavePackageData *)0x0;
      this->SerializedProperty = (FProperty *)0x0;
      this->SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      *(undefined8 *)&this->bCustomVersionsAreReset = 0;
      this->NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(this);
      this[1]._padding_ = 0;
      this->_padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
      this[1].ActiveFPLB = (FFastPathLoadBuffer *)&pTVar1->Bytes;
      this[1].InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
      FArchiveState::SetIsSaving(this,true);
      (**(code **)(this->_padding_ + 0x108))(this,0);
      this->_padding_ = (longlong)&___7FMemoryWriter__6B_;
      pFVar2 = this;
    }
    pTVar1->_padding_ = (longlong)pFVar2;
    (pTVar1->Bytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->Bytes).ArrayNum = 0;
    (pTVar1->Bytes).ArrayMax = 0;
    pTVar1->_padding_ = (longlong)&___7__TJsonStringWriter_U__TCondensedJsonPrintPolicy__Q____6B_;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    *(undefined4 *)&pTVar1->_padding_ = 0;
    *(int *)((longlong)&pTVar1->_padding_ + 4) = param_2;
    pTVar1->OutString = param_1;
  }
  local_res8.Object = pTVar1;
  TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_>,1>::
  TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_>,1><TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_>_>
            (&local_38,&local_res8);
  __return_storage_ptr__->Object =
       (TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *)local_38.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_38.SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Create @ 141dd1680

TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1> * __cdecl
TJsonWriterFactory<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Create
          (TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1>
           *__return_storage_ptr__,FString *param_1,int param_2)

{
  TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_> *pTVar1;
  FArchiveState *this;
  FArchiveState *pFVar2;
  TRawPtrProxy<TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>_> local_res8;
  TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>,1> local_38;
  
  pTVar1 = ::operator_new(0x40);
  if (pTVar1 == (TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_> *)0x0) {
    pTVar1 = (TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_> *)0x0;
  }
  else {
    this = ::operator_new(0xa8);
    pFVar2 = (FArchiveState *)0x0;
    if (this != (FArchiveState *)0x0) {
      local_res8.Object = (TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_> *)0x0;
      this->_padding_ = 0;
      this->ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      (this->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
      (this->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
      (this->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
      *(undefined8 *)&this->field_0x28 = 0;
      this->ArSerializingDefaults = 0;
      this->ArPortFlags = 0;
      this->ArMaxSerializeSize = 0;
      (this->ArUEVer).FileVersionUE4 = 0;
      (this->ArUEVer).FileVersionUE5 = 0;
      this->ArLicenseeUEVer = 0;
      (this->ArEngineVer).Major = 0;
      (this->ArEngineVer).Minor = 0;
      (this->ArEngineVer).Patch = 0;
      *(undefined2 *)&(this->ArEngineVer).field_0x6 = 0;
      (this->ArEngineVer).Changelist = 0;
      this->CustomVersionContainer = (FCustomVersionContainer *)0x0;
      this->ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      this->SavePackageData = (FArchiveSavePackageData *)0x0;
      this->SerializedProperty = (FProperty *)0x0;
      this->SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      *(undefined8 *)&this->bCustomVersionsAreReset = 0;
      this->NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(this);
      this[1]._padding_ = 0;
      this->_padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
      this[1].ActiveFPLB = (FFastPathLoadBuffer *)&pTVar1->Bytes;
      this[1].InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
      FArchiveState::SetIsSaving(this,true);
      (**(code **)(this->_padding_ + 0x108))(this,0);
      this->_padding_ = (longlong)&___7FMemoryWriter__6B_;
      pFVar2 = this;
    }
    pTVar1->_padding_ = (longlong)pFVar2;
    (pTVar1->Bytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->Bytes).ArrayNum = 0;
    (pTVar1->Bytes).ArrayMax = 0;
    pTVar1->_padding_ = (longlong)&___7__TJsonStringWriter_U__TCondensedJsonPrintPolicy__W____6B_;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    *(undefined4 *)&pTVar1->_padding_ = 0;
    *(int *)((longlong)&pTVar1->_padding_ + 4) = param_2;
    pTVar1->OutString = param_1;
  }
  local_res8.Object = pTVar1;
  TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>,1>::
  TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>,1><TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>_>
            (&local_38,&local_res8);
  __return_storage_ptr__->Object =
       (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_38.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_38.SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Create @ 141dd17f0

TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> * __cdecl
TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create
          (TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1>
           *__return_storage_ptr__,FString *param_1,int param_2)

{
  TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *pTVar1;
  FArchiveState *this;
  FArchiveState *pFVar2;
  TRawPtrProxy<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>_> local_res8;
  TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1> local_38;
  
  pTVar1 = ::operator_new(0x40);
  if (pTVar1 == (TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *)0x0) {
    pTVar1 = (TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *)0x0;
  }
  else {
    this = ::operator_new(0xa8);
    pFVar2 = (FArchiveState *)0x0;
    if (this != (FArchiveState *)0x0) {
      local_res8.Object = (TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *)0x0;
      this->_padding_ = 0;
      this->ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      (this->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
      (this->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
      (this->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
      *(undefined8 *)&this->field_0x28 = 0;
      this->ArSerializingDefaults = 0;
      this->ArPortFlags = 0;
      this->ArMaxSerializeSize = 0;
      (this->ArUEVer).FileVersionUE4 = 0;
      (this->ArUEVer).FileVersionUE5 = 0;
      this->ArLicenseeUEVer = 0;
      (this->ArEngineVer).Major = 0;
      (this->ArEngineVer).Minor = 0;
      (this->ArEngineVer).Patch = 0;
      *(undefined2 *)&(this->ArEngineVer).field_0x6 = 0;
      (this->ArEngineVer).Changelist = 0;
      this->CustomVersionContainer = (FCustomVersionContainer *)0x0;
      this->ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      this->SavePackageData = (FArchiveSavePackageData *)0x0;
      this->SerializedProperty = (FProperty *)0x0;
      this->SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      *(undefined8 *)&this->bCustomVersionsAreReset = 0;
      this->NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(this);
      this[1]._padding_ = 0;
      this->_padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
      this[1].ActiveFPLB = (FFastPathLoadBuffer *)&pTVar1->Bytes;
      this[1].InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
      FArchiveState::SetIsSaving(this,true);
      (**(code **)(this->_padding_ + 0x108))(this,0);
      this->_padding_ = (longlong)&___7FMemoryWriter__6B_;
      pFVar2 = this;
    }
    pTVar1->_padding_ = (longlong)pFVar2;
    (pTVar1->Bytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->Bytes).ArrayNum = 0;
    (pTVar1->Bytes).ArrayMax = 0;
    pTVar1->_padding_ = (longlong)&___7__TJsonStringWriter_U__TPrettyJsonPrintPolicy__W____6B_;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    *(undefined4 *)&pTVar1->_padding_ = 0;
    *(int *)((longlong)&pTVar1->_padding_ + 4) = param_2;
    pTVar1->OutString = param_1;
  }
  local_res8.Object = pTVar1;
  TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1>::
  TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1><TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>_>
            (&local_38,&local_res8);
  __return_storage_ptr__->Object =
       (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)local_38.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_38.SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

