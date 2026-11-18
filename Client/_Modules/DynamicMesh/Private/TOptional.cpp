// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 3

// operator-> @ 14c6e2210

FMeshConstraints * __thiscall
TOptional<UE::Geometry::FMeshConstraints>::operator->
          (TOptional<UE::Geometry::FMeshConstraints> *this)

{
  code *pcVar1;
  bool bVar2;
  FMeshConstraints *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMeshConstraints *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

// operator= @ 14c89aaf0

TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> * __thiscall
TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::operator=
          (TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *this,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar4;
  
  if (param_1 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this) {
    (this->field0_0x0).TypedValue.HashSize = 0;
    pvVar1 = *(void **)((longlong)&this->field0_0x0 + 0x40);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this);
    *(undefined8 *)&this->field0_0x0 = 0;
    *(undefined8 *)((longlong)&this->field0_0x0 + 8) = 0;
    *(undefined8 *)((longlong)&this->field0_0x0 + 0x20) = 0;
    *(undefined4 *)((longlong)&this->field0_0x0 + 0x28) = 0;
    *(undefined4 *)((longlong)&this->field0_0x0 + 0x2c) = 0x80;
    *(undefined4 *)((longlong)&this->field0_0x0 + 0x30) = 0xffffffff;
    *(undefined4 *)((longlong)&this->field0_0x0 + 0x34) = 0;
    *(undefined8 *)((longlong)&this->field0_0x0 + 0x40) = 0;
    (this->field0_0x0).TypedValue.HashSize = 0;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
    Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this,param_1);
    if (*(int *)((longlong)&this->field0_0x0 + 0xc) == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)(*pcVar2)();
        return pTVar4;
      }
    }
  }
  return this;
}

// GetValue @ 14c8f98d0

Matrix<double,_1,1,0,_1,1> * __thiscall
TOptional<Eigen::Matrix<double,-1,1,0,-1,1>_>::GetValue
          (TOptional<Eigen::Matrix<double,_1,1,0,_1,1>_> *this)

{
  code *pcVar1;
  bool bVar2;
  Matrix<double,_1,1,0,_1,1> *pMVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pMVar3 = (Matrix<double,_1,1,0,_1,1> *)(*pcVar1)();
      return pMVar3;
    }
  }
  return &this->TypedValue;
}

