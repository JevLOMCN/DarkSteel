// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// ~FPhysTestSerializer @ 1477f3a60

void __thiscall FPhysTestSerializer::~FPhysTestSerializer(FPhysTestSerializer *this)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FChaosArchiveContext *this_00;
  ForElementType<unsigned_int> FVar4;
  FPBDRigidsEvolutionGBF *pFVar5;
  FSQCapture *this_01;
  code *pcVar6;
  bool bVar7;
  FUniqueIdx *pFVar8;
  int iVar9;
  
  pFVar3 = (this->ArchiveVersion).Versions.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this_00 = (this->ChaosContext).Ptr;
  if (this_00 != (FChaosArchiveContext *)0x0) {
    Chaos::FChaosArchiveContext::~FChaosArchiveContext(this_00);
    ::operator_delete(this_00,0x158);
  }
  DestructItems<TUniquePtr<Chaos::TGeometryParticle<double,3>,TDefaultDelete<Chaos::TGeometryParticle<double,3>_>_>,int>
            ((TUniquePtr<Chaos::TGeometryParticle<double,3>,TDefaultDelete<Chaos::TGeometryParticle<double,3>_>_>
              *)(this->GTParticles).AllocatorInstance.Data,(this->GTParticles).ArrayNum);
  pFVar3 = (this->GTParticles).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  iVar9 = 0;
  piVar1 = &(this->PhysicalMaterials).NumData;
  if ((this->PhysicalMaterials).Data != (FChaosPhysicsMaterial *)0x0) {
    if (0 < *piVar1) {
      do {
        if (((iVar9 < 0) || ((this->PhysicalMaterials).Validity.NumBits <= iVar9)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *piVar1);
    }
    FMemory::Free((this->PhysicalMaterials).Data);
  }
  (this->PhysicalMaterials).FreeList = 0xffffff;
  piVar2 = &(this->PhysicalMaterials).HandleEntries.ArrayMax;
  (this->PhysicalMaterials).Capacity = 0;
  (this->PhysicalMaterials).NumActive = 0;
  *piVar1 = 0;
  (this->PhysicalMaterials).Data = (FChaosPhysicsMaterial *)0x0;
  (this->PhysicalMaterials).Validity.NumBits = 0;
  iVar9 = *piVar2;
  (this->PhysicalMaterials).HandleEntries.ArrayNum = 0;
  if (iVar9 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PhysicalMaterials).HandleEntries.AllocatorInstance,0,piVar2);
  }
  FVar4 = (this->PhysicalMaterials).Validity.AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  pFVar3 = (this->PhysicalMaterials).HandleEntries.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  Chaos::FPBDRigidsSOAs::~FPBDRigidsSOAs(&this->Particles);
  (this->UniqueIndices)._padding_ = (longlong)&___7FParticleUniqueIndicesMultithreaded_Chaos__6B_;
  do {
    pFVar8 = FLockFreePointerFIFOBase<Chaos::FUniqueIdx,0,1>::Pop
                       ((FLockFreePointerFIFOBase<Chaos::FUniqueIdx,0,1> *)
                        &(this->UniqueIndices).FreeIndices);
  } while (pFVar8 != (FUniqueIdx *)0x0);
  FLockFreePointerFIFOBase<Chaos::FUniqueIdx,0,1>::~FLockFreePointerFIFOBase<Chaos::FUniqueIdx,0,1>
            ((FLockFreePointerFIFOBase<Chaos::FUniqueIdx,0,1> *)&(this->UniqueIndices).FreeIndices);
  DestructItems<TUniquePtr<Chaos::FParticleUniqueIndicesMultithreaded::FUniqueIdxPage,TDefaultDelete<Chaos::FParticleUniqueIndicesMultithreaded::FUniqueIdxPage>_>,int>
            ((TUniquePtr<Chaos::FParticleUniqueIndicesMultithreaded::FUniqueIdxPage,TDefaultDelete<Chaos::FParticleUniqueIndicesMultithreaded::FUniqueIdxPage>_>
              *)(this->UniqueIndices).Pages.AllocatorInstance.Data,
             (this->UniqueIndices).Pages.ArrayNum);
  pFVar3 = (this->UniqueIndices).Pages.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar5 = (this->ChaosEvolution).Ptr;
  if (pFVar5 != (FPBDRigidsEvolutionGBF *)0x0) {
    (**(code **)pFVar5->_padding_)(pFVar5,1);
  }
  this_01 = (this->SQCapture).Ptr;
  if (this_01 != (FSQCapture *)0x0) {
    FSQCapture::~FSQCapture(this_01);
    ::operator_delete(this_01,0x9b20);
  }
  pFVar3 = (this->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// CaptureSQ @ 147810c80

FSQCapture * __thiscall FPhysTestSerializer::CaptureSQ(FPhysTestSerializer *this)

{
  TUniquePtr<FSQCapture,TDefaultDelete<FSQCapture>_> *pTVar1;
  FSQCapture *this_00;
  code *pcVar2;
  bool bVar3;
  FSQCapture *pFVar4;
  undefined8 local_18 [2];
  
  pTVar1 = &this->SQCapture;
  if ((this->SQCapture).Ptr != (FSQCapture *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4426299115214733370>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\PhysTestSerializer.h"
                       ,0x3a,"!SQCapture");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FSQCapture *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar4 = ::operator_new(0x9b20);
  if (pFVar4 == (FSQCapture *)0x0) {
    pFVar4 = (FSQCapture *)0x0;
  }
  else {
    pFVar4 = FSQCapture::FSQCapture(pFVar4,this);
  }
  if (pTVar1 != (TUniquePtr<FSQCapture,TDefaultDelete<FSQCapture>_> *)local_18) {
    this_00 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar4;
    if (this_00 != (FSQCapture *)0x0) {
      FSQCapture::~FSQCapture(this_00);
      ::operator_delete(this_00,0x9b20);
      return pTVar1->Ptr;
    }
    return pFVar4;
  }
  if (pFVar4 != (FSQCapture *)0x0) {
    FSQCapture::~FSQCapture(pFVar4);
    ::operator_delete(pFVar4,0x9b20);
  }
  return pTVar1->Ptr;
}

