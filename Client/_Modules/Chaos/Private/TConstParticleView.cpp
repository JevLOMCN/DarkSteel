// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// TConstParticleView<Chaos::TGeometryParticlesImp<double,3,0>_> @ 143cff8d0

TConstParticleView<Chaos::TGeometryParticlesImp<double,3,0>_> * __thiscall
Chaos::TConstParticleView<Chaos::TGeometryParticlesImp<double,3,0>_>::
TConstParticleView<Chaos::TGeometryParticlesImp<double,3,0>_>
          (TConstParticleView<Chaos::TGeometryParticlesImp<double,3,0>_> *this,
          TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  (this->SOAViews).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SOAViews).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->SOAViews).ArrayNum = param_1->ArrayNum;
  (this->SOAViews).ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  this->Size = 0;
  iVar1 = (this->SOAViews).ArrayNum;
  pFVar2 = (this->SOAViews).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->SOAViews).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(longlong *)(pFVar2 + 8) == 0) {
      this->Size = this->Size + *(int *)(*(longlong *)pFVar2 + 0x18);
      pFVar2 = pFVar2 + 0x10;
    }
    else {
      this->Size = this->Size + *(int *)(*(longlong *)(pFVar2 + 8) + 8);
      pFVar2 = pFVar2 + 0x10;
    }
  }
  return this;
}

// begin @ 143d83480

TConstParticleIterator<Chaos::FSpatialAccelerationCache> * __thiscall
Chaos::TConstParticleView<Chaos::FSpatialAccelerationCache>::begin
          (TConstParticleView<Chaos::FSpatialAccelerationCache> *this,
          TConstParticleIterator<Chaos::FSpatialAccelerationCache> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TConstParticleIterator<Chaos::FSpatialAccelerationCache> *pTVar3;
  
  __return_storage_ptr__->SOAViews = &this->SOAViews;
  __return_storage_ptr__->CurHandlesArray =
       (TArray<Chaos::FSpatialAccelerationCacheHandle_*,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->TransientHandle).field0_0x0.GeometryParticles =
       (FSpatialAccelerationCache *)0x0;
  (__return_storage_ptr__->TransientHandle).field1_0x8.ParticleIdx = -1;
  __return_storage_ptr__->SOAIdx = 0;
  __return_storage_ptr__->DirtyValidationCount = -1;
  TConstParticleIterator<Chaos::FSpatialAccelerationCache>::SeekNonEmptySOA(__return_storage_ptr__);
  if ((__return_storage_ptr__->TransientHandle).field0_0x0.GeometryParticles !=
      (FSpatialAccelerationCache *)0x0) {
    if (__return_storage_ptr__->CurHandlesArray ==
        (TArray<Chaos::FSpatialAccelerationCacheHandle_*,TSizedDefaultAllocator<32>_> *)0x0) {
      if (__return_storage_ptr__->DirtyValidationCount == -1) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("DirtyValidationCount != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                           ,0x1f0,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar3 = (TConstParticleIterator<Chaos::FSpatialAccelerationCache> *)(*pcVar1)();
          return pTVar3;
        }
      }
      if (((__return_storage_ptr__->TransientHandle).field0_0x0.GeometryParticles)->
          MDirtyValidationCount != __return_storage_ptr__->DirtyValidationCount) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TransientHandle.GeometryParticles->DirtyValidationCount() == DirtyValidationCount && L\"Iterating over particles while modifying the underlying SOA. Consider delaying any operations that require a Handle*\""
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                           ,0x1f1,L"");
        if (bVar2) goto code_r0x000143d83558;
      }
    }
    else if (__return_storage_ptr__->DirtyValidationCount !=
             __return_storage_ptr__->CurHandlesArray->ArrayNum) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DirtyValidationCount == CurHandlesArray->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                         ,0x1ec,L"");
      if (!bVar2) {
        return __return_storage_ptr__;
      }
code_r0x000143d83558:
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConstParticleIterator<Chaos::FSpatialAccelerationCache> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

