// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// Create @ 143e18870

ISpatialAcceleration<int,double,3> * __cdecl
Chaos::TSpatialAccelerationSerializationFactory<1,int,double,3>::Create(void)

{
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *pTVar1;
  
  pTVar1 = ::operator_new(0x1d8);
  if (pTVar1 != (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                 *)0x0) {
    pTVar1 = TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
             ::
             TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                       (pTVar1);
    return (ISpatialAcceleration<int,double,3> *)pTVar1;
  }
  return (ISpatialAcceleration<int,double,3> *)0x0;
}

// Create @ 143e188a0

ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> * __cdecl
Chaos::TSpatialAccelerationSerializationFactory<1,Chaos::FAccelerationStructureHandle,double,3>::
Create(void)

{
  TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
  *pTVar1;
  
  pTVar1 = ::operator_new(0x1e0);
  if (pTVar1 != (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                 *)0x0) {
    pTVar1 = TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
             ::
             TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                       (pTVar1);
    return (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)pTVar1;
  }
  return (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
}

// Create @ 143e188d0

ISpatialAcceleration<int,double,3> * __cdecl
Chaos::TSpatialAccelerationSerializationFactory<2,int,double,3>::Create(void)

{
  TAABBTree<int,Chaos::TBoundingVolume<int,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *pTVar1;
  
  pTVar1 = ::operator_new(0x1d8);
  if (pTVar1 != (TAABBTree<int,Chaos::TBoundingVolume<int,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                 *)0x0) {
    pTVar1 = TAABBTree<int,Chaos::TBoundingVolume<int,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
             ::
             TAABBTree<int,Chaos::TBoundingVolume<int,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                       (pTVar1);
    return (ISpatialAcceleration<int,double,3> *)pTVar1;
  }
  return (ISpatialAcceleration<int,double,3> *)0x0;
}

// Create @ 143e18900

ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> * __cdecl
Chaos::TSpatialAccelerationSerializationFactory<2,Chaos::FAccelerationStructureHandle,double,3>::
Create(void)

{
  TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
  *pTVar1;
  
  pTVar1 = ::operator_new(0x1d8);
  if (pTVar1 != (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                 *)0x0) {
    pTVar1 = TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
             ::
             TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                       (pTVar1);
    return (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)pTVar1;
  }
  return (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
}

// Create @ 143e18930

ISpatialAcceleration<int,double,3> * __cdecl
Chaos::TSpatialAccelerationSerializationFactory<0,int,double,3>::Create(void)

{
  ISpatialAcceleration<int,double,3> *pIVar1;
  
  pIVar1 = ::operator_new(200);
  if (pIVar1 != (ISpatialAcceleration<int,double,3> *)0x0) {
    pIVar1[1]._padding_ = 0;
    pIVar1[1].SyncTimestamp = 0;
    pIVar1[1].AsyncTimeSlicingComplete = false;
    pIVar1[1].Type = '\0';
    *(undefined2 *)&pIVar1[1].field_0xe = 0;
    pIVar1[8].SyncTimestamp = 0;
    pIVar1[8].AsyncTimeSlicingComplete = false;
    pIVar1[8].Type = '\0';
    *(undefined2 *)&pIVar1[8].field_0xe = 0;
    pIVar1[9]._padding_ = 0;
    pIVar1->SyncTimestamp = 0;
    pIVar1->_padding_ = (longlong)&___7__TBoundingVolume_HN_02_Chaos__6B_;
    pIVar1->AsyncTimeSlicingComplete = true;
    pIVar1->Type = '\0';
    pIVar1[7].SyncTimestamp = 0;
    pIVar1[7].AsyncTimeSlicingComplete = false;
    pIVar1[7].Type = '\0';
    *(undefined2 *)&pIVar1[7].field_0xe = 0;
    *(undefined4 *)&pIVar1[8]._padding_ = 0;
    pIVar1[9].SyncTimestamp = 0;
    pIVar1[9].AsyncTimeSlicingComplete = false;
    pIVar1[9].Type = '\0';
    *(undefined2 *)&pIVar1[9].field_0xe = 0;
    pIVar1[10]._padding_ = 0;
    pIVar1[10].SyncTimestamp = 0;
    pIVar1[10].AsyncTimeSlicingComplete = false;
    pIVar1[10].Type = '\0';
    *(undefined2 *)&pIVar1[10].field_0xe = 0;
    pIVar1[0xb]._padding_ = 0;
    pIVar1[0xb].SyncTimestamp = 0;
    pIVar1[0xb].AsyncTimeSlicingComplete = false;
    pIVar1[0xb].Type = 'j';
    *(undefined2 *)&pIVar1[0xb].field_0xe = 0x40f8;
    return pIVar1;
  }
  return (ISpatialAcceleration<int,double,3> *)0x0;
}

// Create @ 143e189c0

ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> * __cdecl
Chaos::TSpatialAccelerationSerializationFactory<0,Chaos::FAccelerationStructureHandle,double,3>::
Create(void)

{
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *pIVar1;
  
  pIVar1 = ::operator_new(200);
  if (pIVar1 != (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0) {
    pIVar1[1]._padding_ = 0;
    pIVar1[1].SyncTimestamp = 0;
    pIVar1[1].AsyncTimeSlicingComplete = false;
    pIVar1[1].Type = '\0';
    *(undefined2 *)&pIVar1[1].field_0xe = 0;
    pIVar1[8].SyncTimestamp = 0;
    pIVar1[8].AsyncTimeSlicingComplete = false;
    pIVar1[8].Type = '\0';
    *(undefined2 *)&pIVar1[8].field_0xe = 0;
    pIVar1[9]._padding_ = 0;
    pIVar1->SyncTimestamp = 0;
    pIVar1->_padding_ =
         (longlong)&___7__TBoundingVolume_VFAccelerationStructureHandle_Chaos__N_02_Chaos__6B_;
    pIVar1->AsyncTimeSlicingComplete = true;
    pIVar1->Type = '\0';
    pIVar1[7].SyncTimestamp = 0;
    pIVar1[7].AsyncTimeSlicingComplete = false;
    pIVar1[7].Type = '\0';
    *(undefined2 *)&pIVar1[7].field_0xe = 0;
    *(undefined4 *)&pIVar1[8]._padding_ = 0;
    pIVar1[9].SyncTimestamp = 0;
    pIVar1[9].AsyncTimeSlicingComplete = false;
    pIVar1[9].Type = '\0';
    *(undefined2 *)&pIVar1[9].field_0xe = 0;
    pIVar1[10]._padding_ = 0;
    pIVar1[10].SyncTimestamp = 0;
    pIVar1[10].AsyncTimeSlicingComplete = false;
    pIVar1[10].Type = '\0';
    *(undefined2 *)&pIVar1[10].field_0xe = 0;
    pIVar1[0xb]._padding_ = 0;
    pIVar1[0xb].SyncTimestamp = 0;
    pIVar1[0xb].AsyncTimeSlicingComplete = false;
    pIVar1[0xb].Type = 'j';
    *(undefined2 *)&pIVar1[0xb].field_0xe = 0x40f8;
    return pIVar1;
  }
  return (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
}

