// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 51

// operator<< @ 1418bfc10

FArchive * __thiscall FArchiveProxy::operator<<(FArchiveProxy *this,FField **param_1)

{
  (**(code **)(*(longlong *)this->InnerArchive + 0x160))();
  return (FArchive *)this;
}

// operator<< @ 1418bfc40

FArchive * __thiscall FArchiveProxy::operator<<(FArchiveProxy *this,UObject **param_1)

{
  (**(code **)(*(longlong *)this->InnerArchive + 0x168))();
  return (FArchive *)this;
}

// operator<< @ 1418bfc70

FArchive * __thiscall FArchiveProxy::operator<<(FArchiveProxy *this,FLazyObjectPtr *param_1)

{
  (**(code **)(*(longlong *)this->InnerArchive + 0x158))();
  return (FArchive *)this;
}

// operator<< @ 1418bfca0

FArchive * __thiscall FArchiveProxy::operator<<(FArchiveProxy *this,FObjectPtr *param_1)

{
  (**(code **)(*(longlong *)this->InnerArchive + 0x150))();
  return (FArchive *)this;
}

// operator<< @ 1418bfcd0

FArchive * __thiscall FArchiveProxy::operator<<(FArchiveProxy *this,FSoftObjectPath *param_1)

{
  (**(code **)(*(longlong *)this->InnerArchive + 0x140))();
  return (FArchive *)this;
}

// operator<< @ 1418bfd00

FArchive * __thiscall FArchiveProxy::operator<<(FArchiveProxy *this,FSoftObjectPtr *param_1)

{
  (**(code **)(*(longlong *)this->InnerArchive + 0x148))();
  return (FArchive *)this;
}

// operator<< @ 1418bfd30

FArchive * __thiscall FArchiveProxy::operator<<(FArchiveProxy *this,FWeakObjectPtr *param_1)

{
  (**(code **)(*(longlong *)this->InnerArchive + 0x138))();
  return (FArchive *)this;
}

// operator<< @ 1418bfd60

FArchive * __thiscall FArchiveProxy::operator<<(FArchiveProxy *this,FName *param_1)

{
  (**(code **)(*(longlong *)this->InnerArchive + 0x178))();
  return (FArchive *)this;
}

// operator<< @ 1418bfd90

FArchive * __thiscall FArchiveProxy::operator<<(FArchiveProxy *this,FText *param_1)

{
  (**(code **)(*(longlong *)this->InnerArchive + 0x170))();
  return (FArchive *)this;
}

// AtEnd @ 1418c9330

bool __thiscall FArchiveProxy::AtEnd(FArchiveProxy *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001418c933a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this->InnerArchive + 0x38))();
  return (bool)uVar1;
}

// AttachBulkData @ 1418c9370

void __thiscall
FArchiveProxy::AttachBulkData(FArchiveProxy *this,UObject *param_1,FBulkData *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001418c937a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->InnerArchive + 0x1c8))();
  return;
}

// AttachExternalReadDependency @ 1418c9390

bool __thiscall
FArchiveProxy::AttachExternalReadDependency
          (FArchiveProxy *this,TFunction<bool___cdecl(double)> *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001418c939a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this->InnerArchive + 0x250))();
  return (bool)uVar1;
}

// Close @ 1418ca8d0

bool __thiscall FArchiveProxy::Close(FArchiveProxy *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001418ca8da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this->InnerArchive + 0x210))();
  return (bool)uVar1;
}

// CountBytes @ 1418d2cf0

void __thiscall FArchiveProxy::CountBytes(FArchiveProxy *this,ulong64 param_1,ulong64 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001418d2cfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->InnerArchive + 0x10))();
  return;
}

// DetachBulkData @ 1418d6f40

void __thiscall FArchiveProxy::DetachBulkData(FArchiveProxy *this,FBulkData *param_1,bool param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001418d6f4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->InnerArchive + 0x1d8))();
  return;
}

// Flush @ 1418daa20

void __thiscall FArchiveProxy::Flush(FArchiveProxy *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001418daa2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->InnerArchive + 0x208))();
  return;
}

// FlushCache @ 1418db0b0

void __thiscall FArchiveProxy::FlushCache(FArchiveProxy *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001418db0ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->InnerArchive + 0x1f8))();
  return;
}

// ForceBlueprintFinalization @ 1418db0e0

void __thiscall FArchiveProxy::ForceBlueprintFinalization(FArchiveProxy *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001418db0ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->InnerArchive + 0x180))();
  return;
}

// GetArchetypeFromLoader @ 1418dd840

UObject * __thiscall FArchiveProxy::GetArchetypeFromLoader(FArchiveProxy *this,UObject *param_1)

{
  UObject *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001418dd84a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UObject *)(**(code **)(*(longlong *)this->InnerArchive + 0x40))();
  return pUVar1;
}

// GetCacheableArchive @ 1418dd9e0

FArchive * __thiscall FArchiveProxy::GetCacheableArchive(FArchiveProxy *this)

{
  FArchive *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001418dd9ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FArchive *)(**(code **)(*(longlong *)this->InnerArchive + 0x238))();
  return pFVar1;
}

// GetCustomVersions @ 1418de130

FCustomVersionContainer * __thiscall FArchiveProxy::GetCustomVersions(FArchiveProxy *this)

{
  FCustomVersionContainer *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001418de13a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FCustomVersionContainer *)(**(code **)(*(longlong *)this->InnerArchive + 0x60))();
  return pFVar1;
}

// GetInnermostState @ 1418df6f0

FArchiveState * __thiscall FArchiveProxy::GetInnermostState(FArchiveProxy *this)

{
  FArchiveState *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001418df6fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FArchiveState *)(**(code **)(*(longlong *)this->InnerArchive + 8))();
  return pFVar1;
}

// GetLinker @ 1418df870

FLinker * __thiscall FArchiveProxy::GetLinker(FArchiveProxy *this)

{
  FLinker *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001418df87a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FLinker *)(**(code **)(*(longlong *)this->InnerArchive + 0x20))();
  return pFVar1;
}

// IsProxyOf @ 1418e3510

bool __thiscall FArchiveProxy::IsProxyOf(FArchiveProxy *this,FArchive *param_1)

{
  char cVar1;
  
  if (((FArchiveProxy *)param_1 != this) && (param_1 != this->InnerArchive)) {
    cVar1 = (**(code **)(*(longlong *)this->InnerArchive + 0x1e8))();
    if (cVar1 == '\0') {
      return false;
    }
  }
  return true;
}

// MarkScriptSerializationEnd @ 1418e8fe0

void __thiscall FArchiveProxy::MarkScriptSerializationEnd(FArchiveProxy *this,UObject *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001418e8fea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->InnerArchive + 0x220))();
  return;
}

// MarkScriptSerializationStart @ 1418e9000

void __thiscall FArchiveProxy::MarkScriptSerializationStart(FArchiveProxy *this,UObject *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001418e900a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->InnerArchive + 0x218))();
  return;
}

// MarkSearchableName @ 1418e9020

void __thiscall
FArchiveProxy::MarkSearchableName
          (FArchiveProxy *this,TObjectPtr<UObject_const_> *param_1,FName *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001418e902a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->InnerArchive + 0x228))();
  return;
}

// PopSerializedProperty @ 1418f0900

void __thiscall
FArchiveProxy::PopSerializedProperty(FArchiveProxy *this,FProperty *param_1,bool param_2)

{
  FArchive::PopSerializedProperty((FArchive *)this,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001418f093e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->InnerArchive + 0x248))(this->InnerArchive,param_1,param_2);
  return;
}

// Precache @ 1418f0950

bool __thiscall FArchiveProxy::Precache(FArchiveProxy *this,long64 param_1,long64 param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001418f095a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this->InnerArchive + 0x1f0))();
  return (bool)uVar1;
}

// Preload @ 1418f0970

void __thiscall FArchiveProxy::Preload(FArchiveProxy *this,UObject *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001418f097a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->InnerArchive + 0x1b0))();
  return;
}

// PushSerializedProperty @ 1418f0f60

void __thiscall
FArchiveProxy::PushSerializedProperty(FArchiveProxy *this,FProperty *param_1,bool param_2)

{
  FArchive::PushSerializedProperty((FArchive *)this,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001418f0f9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->InnerArchive + 0x240))(this->InnerArchive,param_1,param_2);
  return;
}

// ResetCustomVersions @ 1418f32c0

void __thiscall FArchiveProxy::ResetCustomVersions(FArchiveProxy *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001418f32ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->InnerArchive + 0x70))();
  return;
}

// Seek @ 1418f4230

void __thiscall FArchiveProxy::Seek(FArchiveProxy *this,long64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001418f423a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->InnerArchive + 0x1b8))();
  return;
}

// Serialize @ 1418f4740

void __thiscall FArchiveProxy::Serialize(FArchiveProxy *this,void *param_1,long64 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001418f474a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->InnerArchive + 0x188))();
  return;
}

// SerializeBits @ 1418f6c40

void __thiscall FArchiveProxy::SerializeBits(FArchiveProxy *this,void *param_1,long64 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001418f6c4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->InnerArchive + 400))();
  return;
}

// SerializeBulkData @ 1418f71a0

bool __thiscall
FArchiveProxy::SerializeBulkData
          (FArchiveProxy *this,FBulkData *param_1,FBulkDataSerializationParams *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001418f71aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this->InnerArchive + 0x1e0))();
  return (bool)uVar1;
}

// SerializeInt @ 1418f71c0

void __thiscall FArchiveProxy::SerializeInt(FArchiveProxy *this,uint *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001418f71ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->InnerArchive + 0x198))();
  return;
}

// SerializeIntPacked @ 1418f71e0

void __thiscall FArchiveProxy::SerializeIntPacked(FArchiveProxy *this,uint *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001418f71ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->InnerArchive + 0x1a0))();
  return;
}

// SetCompressionMap @ 1418f8bf0

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

bool __thiscall
FArchiveProxy::SetCompressionMap
          (FArchiveProxy *this,TArray<FCompressedChunk,TSizedDefaultAllocator<32>_> *param_1,
          ECompressionFlags param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001418f8bfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this->InnerArchive + 0x200))();
  return (bool)uVar1;
}

// SetCustomVersions @ 1418f8d20

void __thiscall
FArchiveProxy::SetCustomVersions(FArchiveProxy *this,FCustomVersionContainer *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001418f8d2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->InnerArchive + 0x68))();
  return;
}

// SetDebugSerializationFlags @ 1418f8d40

void __thiscall FArchiveProxy::SetDebugSerializationFlags(FArchiveProxy *this,uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001418f8d4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->InnerArchive + 0x78))();
  return;
}

// SetFilterEditorOnly @ 1418f8db0

void __thiscall FArchiveProxy::SetFilterEditorOnly(FArchiveProxy *this,bool param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 & 0xef;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | param_1 << 4;
                    /* WARNING: Could not recover jumptable at 0x0001418f8dc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->InnerArchive + 0x80))();
  return;
}

// SetSerializedProperty @ 1418f9130

void __thiscall FArchiveProxy::SetSerializedProperty(FArchiveProxy *this,FProperty *param_1)

{
  this->_padding_ = (longlong)param_1;
                    /* WARNING: Could not recover jumptable at 0x0001418f913e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->InnerArchive + 0xa0))();
  return;
}

// SetSerializedPropertyChain @ 1418f9150

void __thiscall
FArchiveProxy::SetSerializedPropertyChain
          (FArchiveProxy *this,FArchiveSerializedPropertyChain *param_1,FProperty *param_2)

{
  FArchiveState::SetSerializedPropertyChain((FArchiveState *)this,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001418f918c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->InnerArchive + 0xa8))(this->InnerArchive,param_1,param_2);
  return;
}

// ShouldSkipProperty @ 1418f9530

bool __thiscall FArchiveProxy::ShouldSkipProperty(FArchiveProxy *this,FProperty *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001418f953a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this->InnerArchive + 0x98))();
  return (bool)uVar1;
}

// Tell @ 1418fa4f0

long64 __thiscall FArchiveProxy::Tell(FArchiveProxy *this)

{
  long64 lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001418fa4fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)(*(longlong *)this->InnerArchive + 0x28))();
  return lVar1;
}

// TotalSize @ 1418fca60

long64 __thiscall FArchiveProxy::TotalSize(FArchiveProxy *this)

{
  long64 lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001418fca6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)(*(longlong *)this->InnerArchive + 0x30))();
  return lVar1;
}

// UseToResolveEnumerators @ 1418fec70

bool __thiscall FArchiveProxy::UseToResolveEnumerators(FArchiveProxy *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001418fec7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this->InnerArchive + 0x90))();
  return (bool)uVar1;
}

// GetArchiveName @ 1419948e0

FString * __thiscall
FArchiveProxy::GetArchiveName(FArchiveProxy *this,FString *__return_storage_ptr__)

{
  (**(code **)(*(longlong *)this->InnerArchive + 0x18))();
  return __return_storage_ptr__;
}

// FArchiveProxy @ 1419cc5d0

FArchiveProxy * __thiscall FArchiveProxy::FArchiveProxy(FArchiveProxy *this,FArchive *param_1)

{
  FArchiveState::FArchiveState((FArchiveState *)this,(FArchiveState *)param_1);
  this->InnerArchive = param_1;
  this->_padding_ = (longlong)&___7FArchiveProxy__6B_;
  FArchiveState::LinkProxy((FArchiveState *)param_1,(FArchiveState *)this);
  return this;
}

// ~FArchiveProxy @ 1419d1e60

void __thiscall FArchiveProxy::~FArchiveProxy(FArchiveProxy *this)

{
  this->_padding_ = (longlong)&___7FArchiveProxy__6B_;
  FArchiveState::UnlinkProxy((FArchiveState *)this->InnerArchive,(FArchiveState *)this);
  FArchive::~FArchive((FArchive *)this);
  return;
}

