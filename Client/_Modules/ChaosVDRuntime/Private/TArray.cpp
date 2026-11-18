// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 11

// operator= @ 1436d5b70

TArray<FChaosVDQueryVisitStep,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FChaosVDQueryVisitStep,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FChaosVDQueryVisitStep,TSizedDefaultAllocator<32>_> *this,
          TArray<FChaosVDQueryVisitStep,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FChaosVDQueryVisitStep *pFVar2;
  
  if (this != param_1) {
    pFVar2 = (FChaosVDQueryVisitStep *)(param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x150,0x10,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    ConstructItems<FChaosVDQueryVisitStep,FChaosVDQueryVisitStep,int>
              ((this->AllocatorInstance).Data,pFVar2,iVar1);
  }
  return this;
}

// Empty @ 1436d86b0

void __thiscall
TArray<FChaosVDAABBTreeLeafDataWrapper,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FChaosVDAABBTreeLeafDataWrapper,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<FChaosVDAABBTreeLeafDataWrapper,int>
              ((FChaosVDAABBTreeLeafDataWrapper *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1436d8720

void __thiscall
TArray<FChaosVDAABBTreeNodeDataWrapper,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FChaosVDAABBTreeNodeDataWrapper,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x90,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1436d8770

void __thiscall
TArray<FChaosVDAABBTreePayloadBoundsElement,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FChaosVDAABBTreePayloadBoundsElement,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x88,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1436d87c0

void __thiscall
TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1436d8810

void __thiscall
TArray<FChaosVDBoundingVolumeDataWrapper,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FChaosVDBoundingVolumeDataWrapper,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<FChaosVDBoundingVolumeDataWrapper,int>
              ((FChaosVDBoundingVolumeDataWrapper *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1436d8880

void __thiscall
TArray<FChaosVDConnectivityEdge,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FChaosVDConnectivityEdge,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1436d88d0

void __thiscall
TArray<FChaosVDConstraint,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FChaosVDConstraint,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<FChaosVDConstraint,int>
              ((FChaosVDConstraint *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x280,0x10,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1436d8940

void __thiscall
TArray<FChaosVDManifoldPoint,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FChaosVDManifoldPoint,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x130,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1436d8990

void __thiscall
TArray<FChaosVDShapeCollisionData,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FChaosVDShapeCollisionData,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x2c,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1436d89e0

void __thiscall
TArray<TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
::Empty(TArray<TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_>,int>
              ((TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_> *)
               (this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

