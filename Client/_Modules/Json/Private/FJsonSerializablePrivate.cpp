// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 2

// ToJsonStringWithType<FString> @ 141db5010

FString * __cdecl
FJsonSerializablePrivate::ToJsonStringWithType<FString>
          (FString *__return_storage_ptr__,FJsonSerializable *param_1,bool param_2)

{
  atomic<int> *paVar1;
  undefined **ppuVar2;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_38;
  undefined **local_28;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *local_20;
  TReferenceControllerBase<1> *local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (param_2) {
    TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create
              (&local_38,__return_storage_ptr__,0);
    if (local_38.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      paVar1 = (atomic<int> *)&DAT_00000008;
      ppuVar2 = &___7__FJsonSerializerWriter__WU__TPrettyJsonPrintPolicy__W____6B_;
    }
    else {
      paVar1 = &(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
      ppuVar2 = &___7__FJsonSerializerWriter__WU__TPrettyJsonPrintPolicy__W____6B_;
    }
  }
  else {
    TJsonWriterFactory<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Create
              ((TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1> *)&local_38,
               __return_storage_ptr__,0);
    if (local_38.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      paVar1 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar1 = &(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
    ppuVar2 = &___7__FJsonSerializerWriter__WU__TCondensedJsonPrintPolicy__W____6B_;
  }
  local_20 = local_38.Object;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  local_28 = ppuVar2;
  local_18 = local_38.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  (**(code **)((longlong)*param_1 + 0x50))(param_1,&local_28,0);
  (**(code **)((local_38.Object)->_padding_ + 8))(local_38.Object);
  local_28 = ppuVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ToJsonStringWithType<FUtf8String> @ 141db5120

FUtf8String * __cdecl
FJsonSerializablePrivate::ToJsonStringWithType<FUtf8String>
          (FUtf8String *__return_storage_ptr__,FJsonSerializable *param_1,bool param_2)

{
  FArchiveState *pFVar1;
  FArchiveState *this;
  FArchiveState *pFVar2;
  atomic<int> *paVar3;
  undefined **ppuVar4;
  FSharedReferencer<1> FVar5;
  TRawPtrProxy<TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_>_> local_res8;
  TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_>,1> local_48;
  undefined **local_38;
  TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_> *local_30;
  TReferenceControllerBase<1> *local_28;
  
  pFVar2 = (FArchiveState *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (param_2) {
    pFVar1 = ::operator_new(0x40);
    if (pFVar1 != (FArchiveState *)0x0) {
      this = ::operator_new(0xa8);
      if (this != (FArchiveState *)0x0) {
        local_res8.Object = (TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_> *)0x0;
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
        this[1].ActiveFPLB = (FFastPathLoadBuffer *)&pFVar1->field_0x28;
        this[1].InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
        FArchiveState::SetIsSaving(this,true);
        (**(code **)(this->_padding_ + 0x108))(this,0);
        this->_padding_ = (longlong)&___7FMemoryWriter__6B_;
        pFVar2 = this;
      }
      pFVar1->ActiveFPLB = (FFastPathLoadBuffer *)pFVar2;
      pFVar1->_padding_ = (longlong)&___7__TJsonStringWriter_U__TPrettyJsonPrintPolicy__Q____6B_;
      (pFVar1->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
      (pFVar1->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
      (pFVar1->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
      *(undefined8 *)&pFVar1->field_0x28 = 0;
      pFVar1->ArSerializingDefaults = 0;
      pFVar1->ArPortFlags = 0;
      pFVar1->ArMaxSerializeSize = (long64)__return_storage_ptr__;
      pFVar2 = pFVar1;
    }
    local_res8.Object = (TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_> *)pFVar2;
    TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_>,1>::
    TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_>,1><TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_>_>
              (&local_48,&local_res8);
    if (local_48.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      paVar3 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar3 = &(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar3 = (atomic<int>)((int)*paVar3 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar3 = (atomic<int>)((int)*paVar3 + 1);
      UNLOCK();
    }
    ppuVar4 = &___7__FJsonSerializerWriter__QU__TPrettyJsonPrintPolicy__Q____6B_;
    FVar5.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
  }
  else {
    TJsonWriterFactory<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Create
              ((TSharedRef<TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>,1> *)&local_48,
               __return_storage_ptr__,0);
    if (local_48.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      paVar3 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar3 = &(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar3 = (atomic<int>)((int)*paVar3 + 1);
      UNLOCK();
    }
    ppuVar4 = &___7__FJsonSerializerWriter__QU__TCondensedJsonPrintPolicy__Q____6B_;
    FVar5.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
  }
  local_30 = local_48.Object;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar3 = (atomic<int>)((int)*paVar3 + 1);
    UNLOCK();
  }
  local_38 = ppuVar4;
  local_28 = FVar5.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  (**(code **)((longlong)*param_1 + 0x50))(param_1,&local_38,0);
  (**(code **)((local_48.Object)->_padding_ + 8))(local_48.Object);
  local_38 = ppuVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  return __return_storage_ptr__;
}

