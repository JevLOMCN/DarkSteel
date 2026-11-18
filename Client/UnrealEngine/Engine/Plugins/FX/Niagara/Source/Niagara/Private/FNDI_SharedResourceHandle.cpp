// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// operator= @ 14916b580

FNDI_SharedResourceHandle<FNDI_Landscape_SharedResource,FNDI_SharedResourceUsage> * __thiscall
FNDI_SharedResourceHandle<FNDI_Landscape_SharedResource,FNDI_SharedResourceUsage>::operator=
          (FNDI_SharedResourceHandle<FNDI_Landscape_SharedResource,FNDI_SharedResourceUsage> *this,
          FNDI_SharedResourceHandle<FNDI_Landscape_SharedResource,FNDI_SharedResourceUsage> *param_1
          )

{
  FNDI_Landscape_SharedResource *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<FNDI_Landscape_SharedResource,1> *pTVar4;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if (this != param_1) {
    pFVar1 = (this->Resource).Object;
    if (pFVar1 != (FNDI_Landscape_SharedResource *)0x0) {
      FNDI_Landscape_SharedResource::UnregisterUser(pFVar1,&this->Usage);
    }
    pTVar4 = &param_1->Resource;
    this->Usage = param_1->Usage;
    pTVar2 = (param_1->Resource).SharedReferenceCount.ReferenceController;
    pFVar1 = pTVar4->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (this->Resource).SharedReferenceCount.ReferenceController;
    (this->Resource).Object = pFVar1;
    (this->Resource).SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TSharedPtr<FNDI_Landscape_SharedResource,1> *)&local_18) {
      pTVar4->Object = (FNDI_Landscape_SharedResource *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_1->Resource).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  return this;
}

// ReadResource @ 149189640

FNDI_Landscape_SharedResource * __thiscall
FNDI_SharedResourceHandle<FNDI_Landscape_SharedResource,FNDI_SharedResourceUsage>::ReadResource
          (FNDI_SharedResourceHandle<FNDI_Landscape_SharedResource,FNDI_SharedResourceUsage> *this)

{
  code *pcVar1;
  bool bVar2;
  FNDI_Landscape_SharedResource *pFVar3;
  
  if ((this->Resource).Object != (FNDI_Landscape_SharedResource *)0x0) {
    return (this->Resource).Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNDI_Landscape_SharedResource *)(*pcVar1)();
    return pFVar3;
  }
  return (this->Resource).Object;
}

