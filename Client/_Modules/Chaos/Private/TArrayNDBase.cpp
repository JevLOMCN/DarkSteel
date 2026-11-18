// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// Serialize @ 1437a8740

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::
TArrayNDBase<Chaos::TArrayND<TArray<Chaos::TBVCellElement<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>,TSizedDefaultAllocator<32>_>,3>,TArray<Chaos::TBVCellElement<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>,TSizedDefaultAllocator<32>_>,3>
::Serialize(TArrayNDBase<Chaos::TArrayND<TArray<Chaos::TBVCellElement<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>,TSizedDefaultAllocator<32>_>,3>,TArray<Chaos::TBVCellElement<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>,TSizedDefaultAllocator<32>_>,3>
            *this,FChaosArchive *param_1)

{
  TArray<TArray<Chaos::TBVCellElement<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *this_00;
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint local_res8 [2];
  
  this_00 = &this->MArray;
  operator<<<int,3>((FArchive *)param_1,&this->MCounts);
  piVar1 = &(this->MArray).ArrayMax;
  (**(code **)(param_1->_padding_ + 0x10))
            (param_1,(longlong)(this->MArray).ArrayNum << 4,(longlong)(this->MArray).ArrayMax << 4);
  plVar2 = (longlong *)param_1->_padding_;
  local_res8[0] = (this->MArray).ArrayNum;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (-1 < (int)local_res8[0]) {
    if (*piVar1 < (int)local_res8[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_res8[0],&this_00->AllocatorInstance,(this->MArray).ArrayNum,piVar1);
    }
    TArray<TArray<Chaos::TBVCellElement<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
    ::SetNum(this_00,local_res8[0],Default);
    uVar6 = 0;
    if (0 < (int)local_res8[0]) {
      do {
        uVar5 = 0;
        if ((int)uVar6 < (this->MArray).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        operator<<<Chaos::TBVCellElement<Chaos::
        TGeometryParticleHandleImp<double,3,1>___double_3>_TSizedDefaultAllocator<32>_>
                  (param_1,(TArray<Chaos::TBVCellElement<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>,TSizedDefaultAllocator<32>_>
                            *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x10));
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)local_res8[0]);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
}

// Serialize @ 1437a88a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::
TArrayNDBase<Chaos::TArrayND<TArray<Chaos::TBVCellElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>,TSizedDefaultAllocator<32>_>,3>,TArray<Chaos::TBVCellElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>,TSizedDefaultAllocator<32>_>,3>
::Serialize(TArrayNDBase<Chaos::TArrayND<TArray<Chaos::TBVCellElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>,TSizedDefaultAllocator<32>_>,3>,TArray<Chaos::TBVCellElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>,TSizedDefaultAllocator<32>_>,3>
            *this,FChaosArchive *param_1)

{
  TArray<TArray<Chaos::TBVCellElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *this_00;
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint local_res8 [2];
  
  this_00 = &this->MArray;
  operator<<<int,3>((FArchive *)param_1,&this->MCounts);
  piVar1 = &(this->MArray).ArrayMax;
  (**(code **)(param_1->_padding_ + 0x10))
            (param_1,(longlong)(this->MArray).ArrayNum << 4,(longlong)(this->MArray).ArrayMax << 4);
  plVar2 = (longlong *)param_1->_padding_;
  local_res8[0] = (this->MArray).ArrayNum;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (-1 < (int)local_res8[0]) {
    if (*piVar1 < (int)local_res8[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_res8[0],&this_00->AllocatorInstance,(this->MArray).ArrayNum,piVar1);
    }
    TArray<TArray<Chaos::TBVCellElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
    ::SetNum(this_00,local_res8[0],Default);
    uVar6 = 0;
    if (0 < (int)local_res8[0]) {
      do {
        uVar5 = 0;
        if ((int)uVar6 < (this->MArray).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        operator<<<Chaos::TBVCellElement<Chaos::
        TPBDRigidParticleHandleImp<double,3,1>___double_3>_TSizedDefaultAllocator<32>_>
                  (param_1,(TArray<Chaos::TBVCellElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>,TSizedDefaultAllocator<32>_>
                            *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x10));
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)local_res8[0]);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
}

// Serialize @ 1437a8a00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::
TArrayNDBase<Chaos::TArrayND<TArray<Chaos::TBVCellElement<Chaos::FAccelerationStructureHandle,double,3>,TSizedDefaultAllocator<32>_>,3>,TArray<Chaos::TBVCellElement<Chaos::FAccelerationStructureHandle,double,3>,TSizedDefaultAllocator<32>_>,3>
::Serialize(TArrayNDBase<Chaos::TArrayND<TArray<Chaos::TBVCellElement<Chaos::FAccelerationStructureHandle,double,3>,TSizedDefaultAllocator<32>_>,3>,TArray<Chaos::TBVCellElement<Chaos::FAccelerationStructureHandle,double,3>,TSizedDefaultAllocator<32>_>,3>
            *this,FChaosArchive *param_1)

{
  TArray<TArray<Chaos::TBVCellElement<Chaos::FAccelerationStructureHandle,double,3>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *this_00;
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint local_res8 [2];
  
  this_00 = &this->MArray;
  operator<<<int,3>((FArchive *)param_1,&this->MCounts);
  piVar1 = &(this->MArray).ArrayMax;
  (**(code **)(param_1->_padding_ + 0x10))
            (param_1,(longlong)(this->MArray).ArrayNum << 4,(longlong)(this->MArray).ArrayMax << 4);
  plVar2 = (longlong *)param_1->_padding_;
  local_res8[0] = (this->MArray).ArrayNum;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (-1 < (int)local_res8[0]) {
    if (*piVar1 < (int)local_res8[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_res8[0],&this_00->AllocatorInstance,(this->MArray).ArrayNum,piVar1);
    }
    TArray<TArray<Chaos::TBVCellElement<Chaos::FAccelerationStructureHandle,double,3>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
    ::SetNum(this_00,local_res8[0],Default);
    uVar6 = 0;
    if (0 < (int)local_res8[0]) {
      do {
        uVar5 = 0;
        if ((int)uVar6 < (this->MArray).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        operator<<<Chaos::TBVCellElement<Chaos::
        FAccelerationStructureHandle_double_3>_TSizedDefaultAllocator<32>_>
                  (param_1,(TArray<Chaos::TBVCellElement<Chaos::FAccelerationStructureHandle,double,3>,TSizedDefaultAllocator<32>_>
                            *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x10));
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)local_res8[0]);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
}

// Serialize @ 143e4b1c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::
TArrayNDBase<Chaos::TArrayND<TArray<Chaos::TBVCellElement<int,double,3>,TSizedDefaultAllocator<32>_>,3>,TArray<Chaos::TBVCellElement<int,double,3>,TSizedDefaultAllocator<32>_>,3>
::Serialize(TArrayNDBase<Chaos::TArrayND<TArray<Chaos::TBVCellElement<int,double,3>,TSizedDefaultAllocator<32>_>,3>,TArray<Chaos::TBVCellElement<int,double,3>,TSizedDefaultAllocator<32>_>,3>
            *this,FChaosArchive *param_1)

{
  TArray<TArray<Chaos::TBVCellElement<int,double,3>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *this_00;
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint local_res8 [2];
  
  this_00 = &this->MArray;
  operator<<<int,3>((FArchive *)param_1,&this->MCounts);
  piVar1 = &(this->MArray).ArrayMax;
  (**(code **)(param_1->_padding_ + 0x10))
            (param_1,(longlong)(this->MArray).ArrayNum << 4,(longlong)(this->MArray).ArrayMax << 4);
  plVar2 = (longlong *)param_1->_padding_;
  local_res8[0] = (this->MArray).ArrayNum;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (-1 < (int)local_res8[0]) {
    if (*piVar1 < (int)local_res8[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_res8[0],&this_00->AllocatorInstance,(this->MArray).ArrayNum,piVar1);
    }
    TArray<TArray<Chaos::TBVCellElement<int,double,3>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
    ::SetNum(this_00,local_res8[0],Default);
    uVar6 = 0;
    if (0 < (int)local_res8[0]) {
      do {
        uVar5 = 0;
        if ((int)uVar6 < (this->MArray).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        operator<<<Chaos::TBVCellElement<int,double,3>_TSizedDefaultAllocator<32>_>
                  (param_1,(TArray<Chaos::TBVCellElement<int,double,3>,TSizedDefaultAllocator<32>_>
                            *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x10));
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)local_res8[0]);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
}

