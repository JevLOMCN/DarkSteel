// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 14

// ~FJsonSerializable @ 141dc6470

void __thiscall FJsonSerializable::~FJsonSerializable(FJsonSerializable *this)

{
  *this = (FJsonSerializable)&___7FJsonSerializable__6B_;
  return;
}

// FromJson @ 141dd48e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FJsonSerializable::FromJson(FJsonSerializable *this,FString *param_1)

{
  bool bVar1;
  FSharedReferencer<1> FVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<TJsonReader<wchar_t>,1> local_78;
  undefined **local_68;
  TReferenceControllerBase<1> *local_60;
  TReferenceControllerBase<1> *local_58;
  StackState local_50;
  
  pTVar3 = (TReferenceControllerBase<1> *)0x0;
  TJsonReaderFactory<wchar_t>::Create(&local_78,param_1);
  local_50.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Identifier.Data.ArrayNum = 0;
  local_50.Identifier.Data.ArrayMax = 0;
  local_50.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Array.ArrayNum = 0;
  local_50.Array.ArrayMax = 0;
  local_50.Object.Object = (FJsonObject *)0x0;
  local_50.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar1 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    (local_78.Object,&local_50,None);
  FVar2.ReferenceController = local_50.Object.SharedReferenceCount.ReferenceController;
  pTVar4 = (TReferenceControllerBase<1> *)local_50.Object.Object;
  if (bVar1) {
    if ((TReferenceControllerBase<1> *)local_50.Object.Object == (TReferenceControllerBase<1> *)0x0)
    {
      bVar1 = false;
      FVar2.ReferenceController = pTVar3;
      pTVar4 = pTVar3;
    }
    else {
      if (local_50.Object.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_50.Object.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_50.Object.SharedReferenceCount.ReferenceController)->SharedReferenceCount
             + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      bVar1 = true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_50.Array.AllocatorInstance.Data,
               local_50.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_50.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_50.Array.AllocatorInstance.Data);
    }
    if (local_50.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Identifier.Data.AllocatorInstance.Data);
    }
    if ((bVar1) && (pTVar4 != (TReferenceControllerBase<1> *)0x0)) {
      if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar2.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar2.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        (FVar2.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar2.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68 = &___7FJsonSerializerReader__6B_;
      local_60 = pTVar4;
      local_58 = FVar2.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar2.ReferenceController);
      (**(code **)((longlong)*this + 0x50))(this,&local_68,0);
      local_68 = &___7FJsonSerializerReader__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
      bVar1 = true;
      goto LAB_141dd4a6b;
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_50.Array.AllocatorInstance.Data,
               local_50.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_50.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_50.Array.AllocatorInstance.Data);
    }
    FVar2.ReferenceController = pTVar3;
    if (local_50.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Identifier.Data.AllocatorInstance.Data);
      FVar2.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
  }
  if (2 < (byte)LogJson._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogJson);
  }
  bVar1 = false;
LAB_141dd4a6b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  return bVar1;
}

// FromJson @ 141dd4ab0

bool __thiscall FJsonSerializable::FromJson(FJsonSerializable *this,FUtf8String *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  TStringView<char8_t> local_18;
  
  local_18.DataPtr = (uchar *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  local_18.Size = iVar3;
  bVar2 = UE::JsonSerializable::Private::FromJsonStringView<char8_t>(this,&local_18);
  return bVar2;
}

// FromJson @ 141dd4af0

bool __thiscall FJsonSerializable::FromJson(FJsonSerializable *this,FString *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  local_18.Size = iVar3;
  bVar2 = UE::JsonSerializable::Private::FromJsonStringView<wchar_t>(this,&local_18);
  return bVar2;
}

// FromJson @ 141dd4b30

bool __thiscall FJsonSerializable::FromJson(FJsonSerializable *this,FUtf8String *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  TStringView<char8_t> local_18;
  
  local_18.DataPtr = (uchar *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  local_18.Size = iVar3;
  bVar2 = UE::JsonSerializable::Private::FromJsonStringView<char8_t>(this,&local_18);
  return bVar2;
}

// FromJson @ 141dd4b70

bool __thiscall FJsonSerializable::FromJson(FJsonSerializable *this,uchar *param_1)

{
  bool bVar1;
  size_t sVar2;
  TStringView<char8_t> local_18;
  
  local_18.Size = 0;
  local_18.DataPtr = param_1;
  if (param_1 != (uchar *)0x0) {
    sVar2 = strlen((char *)param_1);
    local_18.Size = (int)sVar2;
  }
  bVar1 = UE::JsonSerializable::Private::FromJsonStringView<char8_t>(this,&local_18);
  return bVar1;
}

// FromJson @ 141dd4bc0

bool __thiscall FJsonSerializable::FromJson(FJsonSerializable *this,wchar_t *param_1)

{
  bool bVar1;
  size_t sVar2;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 0;
  local_18.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_1);
    local_18.Size = (int)sVar2;
  }
  bVar1 = UE::JsonSerializable::Private::FromJsonStringView<wchar_t>(this,&local_18);
  return bVar1;
}

// FromJson @ 141dd4c10

bool __thiscall
FJsonSerializable::FromJson(FJsonSerializable *this,TSharedPtr<FJsonObject,1> *param_1)

{
  undefined **local_28;
  FJsonObject *local_20;
  TReferenceControllerBase<1> *local_18;
  
  local_20 = param_1->Object;
  local_18 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_20 == (FJsonObject *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
    return false;
  }
  if (local_18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_18->SharedReferenceCount = (atomic<int>)((int)local_18->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    local_18->SharedReferenceCount = (atomic<int>)((int)local_18->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = &___7FJsonSerializerReader__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  (**(code **)((longlong)*this + 0x50))(this,&local_28,0);
  local_28 = &___7FJsonSerializerReader__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// FromJsonStringView @ 141dd4cc0

bool __thiscall
FJsonSerializable::FromJsonStringView(FJsonSerializable *this,TStringView<char8_t> *param_1)

{
  bool bVar1;
  TStringView<char8_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar1 = UE::JsonSerializable::Private::FromJsonStringView<char8_t>(this,&local_18);
  return bVar1;
}

// FromJsonStringView @ 141dd4cf0

bool __thiscall
FJsonSerializable::FromJsonStringView(FJsonSerializable *this,TStringView<wchar_t> *param_1)

{
  bool bVar1;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar1 = UE::JsonSerializable::Private::FromJsonStringView<wchar_t>(this,&local_18);
  return bVar1;
}

// ToJson @ 141df91a0

FString * __thiscall
FJsonSerializable::ToJson(FJsonSerializable *this,FString *__return_storage_ptr__,bool param_1)

{
  (**(code **)((longlong)*this + 8))();
  return __return_storage_ptr__;
}

// ToJson @ 141df91c0

FString * __thiscall
FJsonSerializable::ToJson(FJsonSerializable *this,FString *__return_storage_ptr__,bool param_1)

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
  if (param_1) {
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
  (**(code **)((longlong)*this + 0x50))(this,&local_28,0);
  (**(code **)((local_38.Object)->_padding_ + 8))(local_38.Object);
  local_28 = ppuVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ToJsonUtf8 @ 141df92d0

FUtf8String * __thiscall
FJsonSerializable::ToJsonUtf8
          (FJsonSerializable *this,FUtf8String *__return_storage_ptr__,bool param_1)

{
  (**(code **)((longlong)*this + 0x10))();
  return __return_storage_ptr__;
}

// ToJsonUtf8 @ 141df92f0

FUtf8String * __thiscall
FJsonSerializable::ToJsonUtf8
          (FJsonSerializable *this,FUtf8String *__return_storage_ptr__,bool param_1)

{
  FJsonSerializablePrivate::ToJsonStringWithType<FUtf8String>(__return_storage_ptr__,this,param_1);
  return __return_storage_ptr__;
}

