// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// ~FLocMetadataValue @ 1416d8e70

void __thiscall FLocMetadataValue::~FLocMetadataValue(FLocMetadataValue *this)

{
  *this = (FLocMetadataValue)&___7FLocMetadataValue__6B_;
  return;
}

// operator< @ 1416daf10

bool __thiscall FLocMetadataValue::operator<(FLocMetadataValue *this,FLocMetadataValue *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)((longlong)*param_1 + 0x38))(param_1);
  iVar3 = (**(code **)((longlong)*this + 0x38))(this);
  if (iVar3 == iVar2) {
                    /* WARNING: Could not recover jumptable at 0x0001416daf56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((longlong)*this + 0x48))(this,param_1);
    return (bool)uVar1;
  }
  iVar2 = (**(code **)((longlong)*this + 0x38))(this);
  iVar3 = (**(code **)((longlong)*param_1 + 0x38))(param_1);
  return iVar2 < iVar3;
}

// AsArray @ 1416e0a40

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TSharedPtr<FLocMetadataValue,1>,TSizedDefaultAllocator<32>_> * __thiscall
FLocMetadataValue::AsArray
          (FLocMetadataValue *this,
          TArray<TSharedPtr<FLocMetadataValue,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FString local_28;
  void *local_18 [2];
  
  ::FString::FString(&local_28,L"Array");
  (**(code **)((longlong)*this + 0x50))(this,local_18);
  UE::Logging::Private::BasicFatalLog
            (&::LOG_Static,(FLogCategoryBase *)&LogInternationalizationMetadata);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// AsBool @ 1416e0b90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FLocMetadataValue::AsBool(FLocMetadataValue *this)

{
  FString local_28;
  void *local_18 [2];
  
  ::FString::FString(&local_28,L"Boolean");
  (**(code **)((longlong)*this + 0x50))(this,local_18);
  UE::Logging::Private::BasicFatalLog
            (&::LOG_Static,(FLogCategoryBase *)&LogInternationalizationMetadata);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return false;
}

// AsObject @ 1416e11d0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FLocMetadataObject,1> * __thiscall
FLocMetadataValue::AsObject
          (FLocMetadataValue *this,TSharedPtr<FLocMetadataObject,1> *__return_storage_ptr__)

{
  FString local_28;
  void *local_18 [2];
  
  ::FString::FString(&local_28,L"Object");
  (**(code **)((longlong)*this + 0x50))(this,local_18);
  UE::Logging::Private::BasicFatalLog
            (&::LOG_Static,(FLogCategoryBase *)&LogInternationalizationMetadata);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  __return_storage_ptr__->Object = (FLocMetadataObject *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// AsString @ 1416e12c0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
FLocMetadataValue::AsString(FLocMetadataValue *this,FString *__return_storage_ptr__)

{
  FString local_28;
  void *local_18 [2];
  
  ::FString::FString(&local_28,L"String");
  (**(code **)((longlong)*this + 0x50))(this,local_18);
  UE::Logging::Private::BasicFatalLog
            (&::LOG_Static,(FLogCategoryBase *)&LogInternationalizationMetadata);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// ErrorMessage @ 1416ecef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLocMetadataValue::ErrorMessage(FLocMetadataValue *this,FString *param_1)

{
  void *local_18 [2];
  
  (**(code **)((longlong)*this + 0x50))(this,local_18);
  UE::Logging::Private::BasicFatalLog
            (&::LOG_Static,(FLogCategoryBase *)&LogInternationalizationMetadata);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return;
}

// operator== @ 141bed360

bool __thiscall FLocMetadataValue::operator==(FLocMetadataValue *this,FLocMetadataValue *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  pcVar1 = *(code **)((longlong)*param_1 + 0x38);
  iVar3 = (**(code **)((longlong)*this + 0x38))();
  iVar4 = (*pcVar1)(param_1);
  if ((iVar3 == iVar4) &&
     (cVar2 = (**(code **)((longlong)*this + 0x40))(this,param_1), cVar2 != '\0')) {
    return true;
  }
  return false;
}

