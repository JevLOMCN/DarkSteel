// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// GetNumInstances @ 14491c5f0

int __thiscall
FInstanceSceneDataBuffers::GetNumInstances(FInstanceSceneDataBuffers *this,FAccessTag param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (((param_1.Kind != Reader) || ((this->CurrentWriterTag).Value != (atomic<unsigned_int>)0x0)) &&
     ((param_1.Kind != Writer ||
      ((this->CurrentWriterTag).Value != (atomic<unsigned_int>)param_1.WriterTag)))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                       ,0x182,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if (this->bInstanceDataIsGPUOnly) {
    return this->NumInstancesGPUOnly;
  }
  return (this->InstanceToPrimitiveRelative).ArrayNum;
}

// GetReadView @ 14491d610

FReadView * __thiscall
FInstanceSceneDataBuffers::GetReadView
          (FInstanceSceneDataBuffers *this,FReadView *__return_storage_ptr__,FAccessTag param_1)

{
  code *pcVar1;
  bool bVar2;
  EKind EVar3;
  FReadView *pFVar4;
  
  EVar3 = param_1.Kind;
  if ((EVar3 != Reader) || ((atomic<unsigned_int>)param_1.WriterTag != (atomic<unsigned_int>)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AccessTag.Kind == FAccessTag::EKind::Reader && AccessTag.WriterTag == 0u",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                       ,0x13b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FReadView *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (EVar3 == Reader) {
    bVar2 = (this->CurrentWriterTag).Value == (atomic<unsigned_int>)0x0;
code_r0x00014491d682:
    if (bVar2) goto LAB_14491d6aa;
  }
  else if (EVar3 == Writer) {
    bVar2 = (this->CurrentWriterTag).Value == (atomic<unsigned_int>)param_1.WriterTag;
    goto code_r0x00014491d682;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                     ,0x182,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FReadView *)(*pcVar1)();
    return pFVar4;
  }
LAB_14491d6aa:
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
  __return_storage_ptr__->NumInstancesGPUOnly = this->NumInstancesGPUOnly;
  __return_storage_ptr__->NumCustomDataFloats = this->NumCustomDataFloats;
  __return_storage_ptr__->Flags = this->Flags;
  __return_storage_ptr__->bInstanceDataIsGPUOnly = this->bInstanceDataIsGPUOnly;
  return __return_storage_ptr__;
}

// IsInstanceDataGPUOnly @ 144c53200

bool __thiscall
FInstanceSceneDataBuffers::IsInstanceDataGPUOnly(FInstanceSceneDataBuffers *this,FAccessTag param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (((param_1.Kind != Reader) || ((this->CurrentWriterTag).Value != (atomic<unsigned_int>)0x0)) &&
     ((param_1.Kind != Writer ||
      ((this->CurrentWriterTag).Value != (atomic<unsigned_int>)param_1.WriterTag)))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                       ,0x182,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return this->bInstanceDataIsGPUOnly;
}

// ValidateAccess @ 144db1fc0

void __thiscall
FInstanceSceneDataBuffers::ValidateAccess(FInstanceSceneDataBuffers *this,FAccessTag *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (((param_1->Kind != Reader) || ((this->CurrentWriterTag).Value != (atomic<unsigned_int>)0x0))
     && ((param_1->Kind != Writer ||
         ((this->CurrentWriterTag).Value != (atomic<unsigned_int>)param_1->WriterTag)))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                       ,0x182,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GetImmutable @ 1454a7890

TSharedPtr<FInstanceSceneDataImmutable,1> * __thiscall
FInstanceSceneDataBuffers::GetImmutable
          (FInstanceSceneDataBuffers *this,
          TSharedPtr<FInstanceSceneDataImmutable,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Immutable).Object;
  pTVar1 = (this->Immutable).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetPrimitiveWorldSpaceOffset @ 1454a7cc0

TVector<double> * __thiscall
FInstanceSceneDataBuffers::GetPrimitiveWorldSpaceOffset
          (FInstanceSceneDataBuffers *this,FAccessTag param_1)

{
  code *pcVar1;
  bool bVar2;
  TVector<double> *pTVar3;
  
  if (((param_1.Kind != Reader) || ((this->CurrentWriterTag).Value != (atomic<unsigned_int>)0x0)) &&
     ((param_1.Kind != Writer ||
      ((this->CurrentWriterTag).Value != (atomic<unsigned_int>)param_1.WriterTag)))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                       ,0x182,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TVector<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &this->PrimitiveWorldSpaceOffset;
}

