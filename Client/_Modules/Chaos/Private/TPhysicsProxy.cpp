// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// ~TPhysicsProxy<Chaos::FClusterUnionPhysicsProxy,void,FClusterUnionProxyTimestamp> @ 1440cd090

void __thiscall
TPhysicsProxy<Chaos::FClusterUnionPhysicsProxy,void,FClusterUnionProxyTimestamp>::
~TPhysicsProxy<Chaos::FClusterUnionPhysicsProxy,void,FClusterUnionProxyTimestamp>
          (TPhysicsProxy<Chaos::FClusterUnionPhysicsProxy,void,FClusterUnionProxyTimestamp> *this)

{
  *(undefined ***)this =
       &___7__TPhysicsProxy_VFClusterUnionPhysicsProxy_Chaos__XUFClusterUnionProxyTimestamp____6B_;
  IPhysicsProxyBase::~IPhysicsProxyBase((IPhysicsProxyBase *)this);
  return;
}

// ~TPhysicsProxy<FSkeletalMeshPhysicsProxy,FSkeletalMeshPhysicsProxyOutputs,FProxyTimestampBase> @ 1440cd0b0

void __thiscall
TPhysicsProxy<FSkeletalMeshPhysicsProxy,FSkeletalMeshPhysicsProxyOutputs,FProxyTimestampBase>::
~TPhysicsProxy<FSkeletalMeshPhysicsProxy,FSkeletalMeshPhysicsProxyOutputs,FProxyTimestampBase>
          (TPhysicsProxy<FSkeletalMeshPhysicsProxy,FSkeletalMeshPhysicsProxyOutputs,FProxyTimestampBase>
           *this)

{
  *(undefined ***)this =
       &
       ___7__TPhysicsProxy_VFSkeletalMeshPhysicsProxy__UFSkeletalMeshPhysicsProxyOutputs__UFProxyTimestampBase____6B_
  ;
  IPhysicsProxyBase::~IPhysicsProxyBase((IPhysicsProxyBase *)this);
  return;
}

// ~TPhysicsProxy<FStaticMeshPhysicsProxy,FStubSkeletalMeshData,FProxyTimestampBase> @ 1440cd0d0

void __thiscall
TPhysicsProxy<FStaticMeshPhysicsProxy,FStubSkeletalMeshData,FProxyTimestampBase>::
~TPhysicsProxy<FStaticMeshPhysicsProxy,FStubSkeletalMeshData,FProxyTimestampBase>
          (TPhysicsProxy<FStaticMeshPhysicsProxy,FStubSkeletalMeshData,FProxyTimestampBase> *this)

{
  *(undefined ***)this =
       &
       ___7__TPhysicsProxy_VFStaticMeshPhysicsProxy__UFStubSkeletalMeshData__UFProxyTimestampBase____6B_
  ;
  IPhysicsProxyBase::~IPhysicsProxyBase((IPhysicsProxyBase *)this);
  return;
}

// TPhysicsProxy<FGeometryCollectionPhysicsProxy,FStubGeometryCollectionData,FGeometryCollectionProxyTimestamp> @ 1440fc690

TPhysicsProxy<FGeometryCollectionPhysicsProxy,FStubGeometryCollectionData,FGeometryCollectionProxyTimestamp>
* __thiscall
TPhysicsProxy<FGeometryCollectionPhysicsProxy,FStubGeometryCollectionData,FGeometryCollectionProxyTimestamp>
::
TPhysicsProxy<FGeometryCollectionPhysicsProxy,FStubGeometryCollectionData,FGeometryCollectionProxyTimestamp>
          (TPhysicsProxy<FGeometryCollectionPhysicsProxy,FStubGeometryCollectionData,FGeometryCollectionProxyTimestamp>
           *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TPhysicsProxy<FGeometryCollectionPhysicsProxy,FStubGeometryCollectionData,FGeometryCollectionProxyTimestamp>
  *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  atomic<int> *paVar6;
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    pTVar5 = (TReferenceControllerBase<1> *)&DAT_00000010;
    paVar6 = (atomic<int> *)&DAT_00000008;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5 = pTVar3 + 1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFGeometryCollectionProxyTimestamp___00_SharedPointerInternals__6B_
    ;
    *(undefined1 *)&pTVar3[1]._padding_ = 0;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TPhysicsProxy<FGeometryCollectionPhysicsProxy,FStubGeometryCollectionData,FGeometryCollectionProxyTimestamp>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
    paVar6 = &pTVar3->SharedReferenceCount;
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined ***)this = &___7IPhysicsProxyBase__6B_;
  *(TReferenceControllerBase<1> **)&this->field_0x20 = pTVar5;
  *(UObject **)&this->field_0x10 = param_1;
  *(undefined4 *)&this->field_0x18 = 0xffffffff;
  *(undefined4 *)&this->field_0x1c = 2;
  *(TReferenceControllerBase<1> **)&this->field_0x28 = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0xffffffffffffffff;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(undefined ***)this =
       &
       ___7__TPhysicsProxy_VFGeometryCollectionPhysicsProxy__VFStubGeometryCollectionData__UFGeometryCollectionProxyTimestamp____6B_
  ;
  return this;
}

// ~TPhysicsProxy<FGeometryCollectionPhysicsProxy,FStubGeometryCollectionData,FGeometryCollectionProxyTimestamp> @ 1440fdc60

void __thiscall
TPhysicsProxy<FGeometryCollectionPhysicsProxy,FStubGeometryCollectionData,FGeometryCollectionProxyTimestamp>
::
~TPhysicsProxy<FGeometryCollectionPhysicsProxy,FStubGeometryCollectionData,FGeometryCollectionProxyTimestamp>
          (TPhysicsProxy<FGeometryCollectionPhysicsProxy,FStubGeometryCollectionData,FGeometryCollectionProxyTimestamp>
           *this)

{
  *(undefined ***)this =
       &
       ___7__TPhysicsProxy_VFGeometryCollectionPhysicsProxy__VFStubGeometryCollectionData__UFGeometryCollectionProxyTimestamp____6B_
  ;
  IPhysicsProxyBase::~IPhysicsProxyBase((IPhysicsProxyBase *)this);
  return;
}

