// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 1

// FInstanceImage @ 14aa92d70

FInstanceImage * __thiscall
UE::Mutable::Private::FInstanceSurface::FInstanceImage::FInstanceImage
          (FInstanceImage *this,FInstanceImage *param_1)

{
  TWeakPtr<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>,1>
  *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
  *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  undefined8 local_18 [2];
  
  (this->Id).Id = 0xffffffff;
  pTVar1 = &(param_1->Id).WeakRegistry;
  (this->Id).WeakRegistry.Object =
       (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
        *)0x0;
  (this->Id).WeakRegistry.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Id).Id = (param_1->Id).Id;
  (param_1->Id).Id = 0xffffffff;
  pTVar4 = (param_1->Id).WeakRegistry.WeakReferenceCount.ReferenceController;
  pTVar5 = pTVar1->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (this->Id).WeakRegistry.WeakReferenceCount.ReferenceController;
  (this->Id).WeakRegistry.Object = pTVar5;
  (this->Id).WeakRegistry.WeakReferenceCount.ReferenceController = pTVar4;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar6->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  if (pTVar1 != (TWeakPtr<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>,1>
                 *)local_18) {
    pTVar4 = (param_1->Id).WeakRegistry.WeakReferenceCount.ReferenceController;
    pTVar1->Object =
         (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
          *)0x0;
    (param_1->Id).WeakRegistry.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar4->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  this->Name = param_1->Name;
  return this;
}

