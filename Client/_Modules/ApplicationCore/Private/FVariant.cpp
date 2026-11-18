// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 7

// FVariant<int> @ 1423b8a80

FVariant * __thiscall FVariant::FVariant<int>(FVariant *this,int param_1)

{
  undefined4 in_register_00000014;
  undefined8 uVar1;
  undefined7 uVar2;
  uint local_res10 [2];
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_c8;
  
  uVar1 = CONCAT44(in_register_00000014,param_1);
  (this->Value).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Value).ArrayNum = 0;
  (this->Value).ArrayMax = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_res10[0] = param_1;
  FArchiveState::FArchiveState((FArchiveState *)&local_c8);
  local_c8._padding_ = 0;
  local_c8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  uVar2 = (undefined7)((ulonglong)uVar1 >> 8);
  local_c8.ArchiveName.ComparisonIndex.Value = 0;
  local_c8.ArchiveName.Number = 0;
  local_c8.Bytes = &this->Value;
  FArchiveState::SetIsSaving((FArchiveState *)&local_c8,true);
  (**(code **)(local_c8._padding_ + 0x108))(&local_c8,CONCAT71(uVar2,1));
  local_c8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  if (*(uint **)(local_c8._padding_ + 8) < *(uint **)local_c8._padding_ + 1) {
    if ((local_c8._padding_ & 0x10000U) == 0) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_c8,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_c8,local_res10);
    }
  }
  else {
    local_res10[0] = **(uint **)local_c8._padding_;
    *(longlong *)local_c8._padding_ = *(longlong *)local_c8._padding_ + 4;
  }
  this->Type = Int32;
  FArchive::~FArchive((FArchive *)&local_c8);
  return this;
}

// FVariant<double> @ 1423b8b90

FVariant * __thiscall FVariant::FVariant<double>(FVariant *this,double param_1)

{
  undefined8 in_RDX;
  undefined7 uVar1;
  double local_res10;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_c8;
  
  (this->Value).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Value).ArrayNum = 0;
  (this->Value).ArrayMax = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_res10 = param_1;
  FArchiveState::FArchiveState((FArchiveState *)&local_c8);
  local_c8._padding_ = 0;
  local_c8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  uVar1 = (undefined7)((ulonglong)in_RDX >> 8);
  local_c8.ArchiveName.ComparisonIndex.Value = 0;
  local_c8.ArchiveName.Number = 0;
  local_c8.Bytes = &this->Value;
  FArchiveState::SetIsSaving((FArchiveState *)&local_c8,true);
  (**(code **)(local_c8._padding_ + 0x108))(&local_c8,CONCAT71(uVar1,1));
  local_c8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  if (*(double **)(local_c8._padding_ + 8) < *(double **)local_c8._padding_ + 1) {
    if ((local_c8._padding_ & 0x10000U) == 0) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_c8,&local_res10,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_c8,(ulong64 *)&local_res10);
    }
  }
  else {
    local_res10 = **(double **)local_c8._padding_;
    *(longlong *)local_c8._padding_ = *(longlong *)local_c8._padding_ + 8;
  }
  this->Type = Double;
  FArchive::~FArchive((FArchive *)&local_c8);
  return this;
}

// FVariant<bool> @ 1423b9140

FVariant * __thiscall FVariant::FVariant<bool>(FVariant *this,bool param_1)

{
  ulonglong uVar1;
  undefined7 in_register_00000011;
  ulonglong local_res8;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_c8;
  
  (this->Value).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Value).ArrayNum = 0;
  (this->Value).ArrayMax = 0;
  local_res8 = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_c8);
  local_c8._padding_ = 0;
  local_c8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_c8.ArchiveName.ComparisonIndex.Value = 0;
  local_c8.ArchiveName.Number = 0;
  local_c8.Bytes = &this->Value;
  FArchiveState::SetIsSaving((FArchiveState *)&local_c8,true);
  (**(code **)(local_c8._padding_ + 0x108))(&local_c8,CONCAT71(in_register_00000011,1));
  local_c8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  if (*(ulonglong *)(local_c8._padding_ + 8) < *(ulonglong *)local_c8._padding_ + 4) {
    uVar1 = local_res8 >> 0x20;
    local_res8 = local_res8 & 0xffffffff00000000;
    if ((local_c8._padding_ & 1U) == 0) {
      local_res8 = CONCAT44((int)uVar1,(uint)param_1);
    }
    TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_c8,&local_res8,4);
    if (1 < (uint)local_res8) {
      FArchiveState::SetError((FArchiveState *)&local_c8);
    }
  }
  else {
    *(ulonglong *)local_c8._padding_ = *(ulonglong *)local_c8._padding_ + 4;
  }
  this->Type = Bool;
  FArchive::~FArchive((FArchive *)&local_c8);
  return this;
}

// GetValue<int> @ 1423be350

int __thiscall FVariant::GetValue<int>(FVariant *this)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  char *in_RDX;
  undefined7 uVar5;
  uint local_res8 [2];
  FMemoryReader local_b8;
  
  if (this->Type != Int32) {
    in_RDX = "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Variant.h";
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Type == TVariantTraits<T>::GetType()) || ((TVariantTraits<T>::GetType() == EVariantTypes::UInt8) && (Type == EVariantTypes::Enum))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Variant.h"
                       ,0x164,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_b8);
  local_b8._padding_ = 0;
  local_b8._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_b8.Bytes = &this->Value;
  uVar5 = (undefined7)((ulonglong)in_RDX >> 8);
  local_b8.LimitSize = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading((FArchiveState *)&local_b8,true);
  (**(code **)(local_b8._padding_ + 0x108))(&local_b8,CONCAT71(uVar5,1));
  if (*(uint **)(local_b8._padding_ + 8) < *(uint **)local_b8._padding_ + 1) {
    if ((local_b8._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_b8._padding_ + 0x188) == FMemoryReader::Serialize) {
        FMemoryReader::Serialize(&local_b8,local_res8,4);
      }
      else {
        (**(code **)(local_b8._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_b8,local_res8);
    }
  }
  else {
    local_res8[0] = **(uint **)local_b8._padding_;
    *(longlong *)local_b8._padding_ = *(longlong *)local_b8._padding_ + 4;
  }
  uVar2 = local_res8[0];
  FArchive::~FArchive((FArchive *)&local_b8);
  return uVar2;
}

// GetValue<double> @ 1423be490

double __thiscall FVariant::GetValue<double>(FVariant *this)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  char *in_RDX;
  undefined7 uVar4;
  double local_res8;
  FMemoryReader local_c8;
  
  if (this->Type != Double) {
    in_RDX = "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Variant.h";
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Type == TVariantTraits<T>::GetType()) || ((TVariantTraits<T>::GetType() == EVariantTypes::UInt8) && (Type == EVariantTypes::Enum))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Variant.h"
                       ,0x164,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      dVar2 = (double)(*pcVar1)();
      return dVar2;
    }
  }
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_c8);
  local_c8._padding_ = 0;
  local_c8._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_c8.Bytes = &this->Value;
  uVar4 = (undefined7)((ulonglong)in_RDX >> 8);
  local_c8.LimitSize = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading((FArchiveState *)&local_c8,true);
  (**(code **)(local_c8._padding_ + 0x108))(&local_c8,CONCAT71(uVar4,1));
  if (*(double **)(local_c8._padding_ + 8) < *(double **)local_c8._padding_ + 1) {
    if ((local_c8._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_c8._padding_ + 0x188) == FMemoryReader::Serialize) {
        FMemoryReader::Serialize(&local_c8,&local_res8,8);
      }
      else {
        (**(code **)(local_c8._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_c8,(ulong64 *)&local_res8);
    }
  }
  else {
    local_res8 = **(double **)local_c8._padding_;
    *(longlong *)local_c8._padding_ = *(longlong *)local_c8._padding_ + 8;
  }
  dVar2 = local_res8;
  FArchive::~FArchive((FArchive *)&local_c8);
  return dVar2;
}

// GetValue<FString> @ 1423be5e0

FString * __thiscall FVariant::GetValue<FString>(FVariant *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  char *pcVar4;
  undefined7 uVar5;
  FArchiveState local_b8;
  undefined8 local_28;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_20;
  undefined8 local_18;
  
  pcVar4 = (char *)__return_storage_ptr__;
  if (this->Type != String) {
    pcVar4 = "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Variant.h";
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Type == TVariantTraits<T>::GetType()) || ((TVariantTraits<T>::GetType() == EVariantTypes::UInt8) && (Type == EVariantTypes::Enum))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Variant.h"
                       ,0x164,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_b8._padding_ = 0;
  local_b8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_b8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_b8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_b8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_b8._40_8_ = 0;
  local_b8.ArSerializingDefaults = 0;
  local_b8.ArPortFlags = 0;
  local_b8.ArMaxSerializeSize = 0;
  local_b8.ArUEVer.FileVersionUE4 = 0;
  local_b8.ArUEVer.FileVersionUE5 = 0;
  local_b8.ArLicenseeUEVer = 0;
  local_b8.ArEngineVer.Major = 0;
  local_b8.ArEngineVer.Minor = 0;
  local_b8.ArEngineVer.Patch = 0;
  local_b8.ArEngineVer._6_2_ = 0;
  local_b8.ArEngineVer.Changelist = 0;
  local_b8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_b8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_b8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_b8.SerializedProperty = (FProperty *)0x0;
  local_b8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_b8.bCustomVersionsAreReset = false;
  local_b8._129_7_ = 0;
  local_b8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_b8);
  local_28 = 0;
  local_b8._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_20 = &this->Value;
  uVar5 = (undefined7)((ulonglong)pcVar4 >> 8);
  local_18 = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading(&local_b8,true);
  (**(code **)(local_b8._padding_ + 0x108))(&local_b8,CONCAT71(uVar5,1));
  ::operator<<((FArchive *)&local_b8,__return_storage_ptr__);
  FArchive::~FArchive((FArchive *)&local_b8);
  return __return_storage_ptr__;
}

// GetValue<bool> @ 1423be700

bool __thiscall FVariant::GetValue<bool>(FVariant *this)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char *in_RDX;
  undefined7 uVar6;
  uint local_res8 [2];
  FMemoryReader local_b8;
  
  if (this->Type != Bool) {
    in_RDX = "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Variant.h";
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Type == TVariantTraits<T>::GetType()) || ((TVariantTraits<T>::GetType() == EVariantTypes::UInt8) && (Type == EVariantTypes::Enum))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Variant.h"
                       ,0x164,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_b8);
  local_b8._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_b8.Bytes = &this->Value;
  local_b8._padding_ = 0;
  uVar6 = (undefined7)((ulonglong)in_RDX >> 8);
  local_b8.LimitSize = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading((FArchiveState *)&local_b8,true);
  (**(code **)(local_b8._padding_ + 0x108))(&local_b8,CONCAT71(uVar6,1));
  puVar1 = *(uint **)local_b8._padding_ + 1;
  if (*(uint **)(local_b8._padding_ + 8) < puVar1) {
    local_res8[0]._0_1_ = false;
    bVar4 = local_res8[0]._0_1_;
    local_res8[0] = 0;
    if (*(code **)(local_b8._padding_ + 0x188) == FMemoryReader::Serialize) {
      FMemoryReader::Serialize(&local_b8,local_res8,4);
    }
    else {
      (**(code **)(local_b8._padding_ + 0x188))();
    }
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)&local_b8);
    }
    uVar2 = local_res8[0];
    if ((local_b8._padding_ & 1U) == 0) goto LAB_1423be833;
  }
  else {
    uVar2 = **(uint **)local_b8._padding_;
    *(uint **)local_b8._padding_ = puVar1;
  }
  bVar4 = uVar2 != 0;
LAB_1423be833:
  FArchive::~FArchive((FArchive *)&local_b8);
  return bVar4;
}

