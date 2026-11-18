// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// TTypedMeshUvMappingHandle<FStaticMeshUvMapping> @ 148f7e690

TTypedMeshUvMappingHandle<FStaticMeshUvMapping> * __thiscall
TTypedMeshUvMappingHandle<FStaticMeshUvMapping>::TTypedMeshUvMappingHandle<FStaticMeshUvMapping>
          (TTypedMeshUvMappingHandle<FStaticMeshUvMapping> *this,FMeshUvMappingUsage param_1,
          TSharedPtr<FStaticMeshUvMapping,1> *param_2,bool param_3)

{
  FMeshUvMappingUsage FVar1;
  TReferenceControllerBase<1> *pTVar2;
  FStaticMeshUvMapping *pFVar3;
  
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  pFVar3 = param_2->Object;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    this->field_0x0 = param_1.RequiresCpuAccess;
    this->field_0x1 = param_1.RequiresGpuAccess;
    *(FStaticMeshUvMapping **)&this->field_0x8 = pFVar3;
    *(undefined8 *)&this->field_0x10 = 0;
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    this->field_0x0 = param_1.RequiresCpuAccess;
    this->field_0x1 = param_1.RequiresGpuAccess;
    *(FStaticMeshUvMapping **)&this->field_0x8 = pFVar3;
    *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar2;
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (*(FMeshUvMapping **)&this->field_0x8 != (FMeshUvMapping *)0x0) {
    FVar1.RequiresCpuAccess = (bool)this->field_0x0;
    FVar1.RequiresGpuAccess = (bool)this->field_0x1;
    FMeshUvMapping::RegisterUser(*(FMeshUvMapping **)&this->field_0x8,FVar1,param_3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return this;
}

// operator= @ 148f822d0

TTypedMeshUvMappingHandle<FStaticMeshUvMapping> * __thiscall
TTypedMeshUvMappingHandle<FStaticMeshUvMapping>::operator=
          (TTypedMeshUvMappingHandle<FStaticMeshUvMapping> *this,
          TTypedMeshUvMappingHandle<FStaticMeshUvMapping> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if (this != param_1) {
    *(undefined2 *)this = *(undefined2 *)param_1;
    lVar1 = *(longlong *)&param_1->field_0x10;
    uVar2 = *(undefined8 *)&param_1->field_0x8;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    *(undefined8 *)&this->field_0x8 = uVar2;
    *(longlong *)&this->field_0x10 = lVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if ((undefined8 *)&param_1->field_0x8 != &local_18) {
      *(undefined8 *)&param_1->field_0x8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&param_1->field_0x10,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  return this;
}

