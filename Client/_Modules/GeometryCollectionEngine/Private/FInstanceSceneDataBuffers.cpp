// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 3

// ~FInstanceSceneDataBuffers @ 1463a5810

void __thiscall
FInstanceSceneDataBuffers::~FInstanceSceneDataBuffers(FInstanceSceneDataBuffers *this)

{
  ForElementType<unsigned_int> FVar1;
  FScriptContainerElement *pFVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Immutable).SharedReferenceCount.ReferenceController);
  FVar1 = (this->VisibleInstances).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  pFVar2 = (this->PrevInstanceToPrimitiveRelative).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InstanceToPrimitiveRelative).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InstancePayloadExtension).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InstanceHierarchyOffset).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InstanceSkinningData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InstanceLightShadowUVBias).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InstanceRandomIDs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InstanceCustomData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InstanceLocalBounds).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// BeginWriteAccess @ 1463ab920

FWriteView * __thiscall
FInstanceSceneDataBuffers::BeginWriteAccess
          (FInstanceSceneDataBuffers *this,FWriteView *__return_storage_ptr__,FAccessTag param_1)

{
  code *pcVar1;
  bool bVar2;
  FWriteView *pFVar3;
  
  if (((param_1.Kind != Writer) ||
      ((atomic<unsigned_int>)param_1.WriterTag == (atomic<unsigned_int>)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("AccessTag.Kind == FAccessTag::EKind::Writer && AccessTag.WriterTag != 0u",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                         ,0xf8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FWriteView *)(*pcVar1)();
    return pFVar3;
  }
  LOCK();
  bVar2 = (this->CurrentWriterTag).Value == (atomic<unsigned_int>)0x0;
  if (bVar2) {
    (this->CurrentWriterTag).Value = (atomic<unsigned_int>)param_1.WriterTag;
  }
  UNLOCK();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentWriterTag.Value.compare_exchange_strong(PrevTagValue, AccessTag.WriterTag)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                         ,0xfb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FWriteView *)(*pcVar1)();
    return pFVar3;
  }
  __return_storage_ptr__->AccessTag = param_1;
  __return_storage_ptr__->PrimitiveWorldSpaceOffset = &this->PrimitiveWorldSpaceOffset;
  __return_storage_ptr__->PrimitiveToRelativeWorld = &this->PrimitiveToRelativeWorld;
  __return_storage_ptr__->InstanceLocalBounds = &this->InstanceLocalBounds;
  __return_storage_ptr__->InstanceCustomData = &this->InstanceCustomData;
  __return_storage_ptr__->InstanceRandomIDs = &this->InstanceRandomIDs;
  __return_storage_ptr__->InstanceLightShadowUVBias = &this->InstanceLightShadowUVBias;
  __return_storage_ptr__->InstanceSkinningData = &this->InstanceSkinningData;
  __return_storage_ptr__->InstanceHierarchyOffset = &this->InstanceHierarchyOffset;
  __return_storage_ptr__->InstancePayloadExtension = &this->InstancePayloadExtension;
  __return_storage_ptr__->InstanceToPrimitiveRelative = &this->InstanceToPrimitiveRelative;
  __return_storage_ptr__->PrevInstanceToPrimitiveRelative = &this->PrevInstanceToPrimitiveRelative;
  __return_storage_ptr__->VisibleInstances = &this->VisibleInstances;
  __return_storage_ptr__->NumInstancesGPUOnly = &this->NumInstancesGPUOnly;
  __return_storage_ptr__->NumCustomDataFloats = &this->NumCustomDataFloats;
  __return_storage_ptr__->Flags = &this->Flags;
  return __return_storage_ptr__;
}

// EndWriteAccess @ 1463b0d30

void __thiscall
FInstanceSceneDataBuffers::EndWriteAccess(FInstanceSceneDataBuffers *this,FAccessTag param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  atomic<unsigned_int> aVar4;
  EKind EStackX_14;
  
  if (this->bInstanceDataIsGPUOnly) {
    iVar1 = (this->InstanceToPrimitiveRelative).ArrayNum;
  }
  else {
    iVar1 = this->NumInstancesGPUOnly;
  }
  if ((iVar1 != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bInstanceDataIsGPUOnly ? InstanceToPrimitiveRelative.IsEmpty() : (NumInstancesGPUOnly == 0)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                         ,0x117,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EStackX_14 = param_1.Kind;
  aVar4 = (atomic<unsigned_int>)param_1.WriterTag;
  if (((EStackX_14 != Writer) || (aVar4 == (atomic<unsigned_int>)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("AccessTag.Kind == FAccessTag::EKind::Writer && AccessTag.WriterTag != 0u",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                         ,0x118,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  LOCK();
  bVar3 = aVar4 == (this->CurrentWriterTag).Value;
  if (bVar3) {
    (this->CurrentWriterTag).Value = (atomic<unsigned_int>)0x0;
  }
  UNLOCK();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentWriterTag.Value.compare_exchange_strong(PrevTagValue, 0U)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                         ,0x11b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

