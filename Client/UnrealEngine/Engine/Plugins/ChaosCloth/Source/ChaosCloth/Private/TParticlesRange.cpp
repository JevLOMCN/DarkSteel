// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 4

// GetArrayView<Chaos::TRigidTransform<float,3>_> @ 14db888d0

TArrayView<Chaos::TRigidTransform<float,3>,int> * __thiscall
Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void>::
GetArrayView<Chaos::TRigidTransform<float,3>_>
          (TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void> *this,
          TArrayView<Chaos::TRigidTransform<float,3>,int> *__return_storage_ptr__,
          TArray<Chaos::TRigidTransform<float,3>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<Chaos::TRigidTransform<float,3>,int> *pTVar4;
  
  if (((this->Offset < 0) || (param_1->ArrayNum < this->RangeSize + this->Offset)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x52,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<Chaos::TRigidTransform<float,3>,int> *)(*pcVar2)();
    return pTVar4;
  }
  iVar1 = this->RangeSize;
  __return_storage_ptr__->DataPtr =
       (TRigidTransform<float,3> *)
       ((param_1->AllocatorInstance).Data + (longlong)this->Offset * 0x30);
  __return_storage_ptr__->ArrayNum = iVar1;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<Chaos::TRigidTransform<float,3>,int> *)(*pcVar2)();
    return pTVar4;
  }
  return __return_storage_ptr__;
}

// GetArrayView<Chaos::TVector<float,3>_> @ 14db889a0

TArrayView<Chaos::TVector<float,3>,int> * __thiscall
Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void>::
GetArrayView<Chaos::TVector<float,3>_>
          (TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void> *this,
          TArrayView<Chaos::TVector<float,3>,int> *__return_storage_ptr__,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar4;
  
  if (((this->Offset < 0) || (param_1->ArrayNum < this->RangeSize + this->Offset)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x52,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<Chaos::TVector<float,3>,int> *)(*pcVar2)();
    return pTVar4;
  }
  iVar1 = this->RangeSize;
  __return_storage_ptr__->DataPtr =
       (TVector<float,3> *)((param_1->AllocatorInstance).Data + (longlong)this->Offset * 0xc);
  __return_storage_ptr__->ArrayNum = iVar1;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<Chaos::TVector<float,3>,int> *)(*pcVar2)();
    return pTVar4;
  }
  return __return_storage_ptr__;
}

// GetConstArrayView<UE::Math::TVector<double>_> @ 14db88ef0

TArrayView<UE::Math::TVector<double>_const_,int> * __thiscall
Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
GetConstArrayView<UE::Math::TVector<double>_>
          (TParticlesRange<Chaos::Softs::FSolverParticles,void> *this,
          TArrayView<UE::Math::TVector<double>_const_,int> *__return_storage_ptr__,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Math::TVector<double>_const_,int> *pTVar4;
  
  if (((this->Offset < 0) || (param_1->ArrayNum < this->RangeSize + this->Offset)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x4b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UE::Math::TVector<double>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  iVar1 = this->RangeSize;
  __return_storage_ptr__->DataPtr =
       (TVector<double> *)((param_1->AllocatorInstance).Data + (longlong)this->Offset * 0x18);
  __return_storage_ptr__->ArrayNum = iVar1;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UE::Math::TVector<double>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  return __return_storage_ptr__;
}

// GetConstArrayView<Chaos::TRigidTransform<float,3>_> @ 14db88fc0

TArrayView<Chaos::TRigidTransform<float,3>_const_,int> * __thiscall
Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void>::
GetConstArrayView<Chaos::TRigidTransform<float,3>_>
          (TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void> *this,
          TArrayView<Chaos::TRigidTransform<float,3>_const_,int> *__return_storage_ptr__,
          TArray<Chaos::TRigidTransform<float,3>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<Chaos::TRigidTransform<float,3>_const_,int> *pTVar4;
  
  if (((this->Offset < 0) || (param_1->ArrayNum < this->RangeSize + this->Offset)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x4b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<Chaos::TRigidTransform<float,3>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  iVar1 = this->RangeSize;
  __return_storage_ptr__->DataPtr =
       (TRigidTransform<float,3> *)
       ((param_1->AllocatorInstance).Data + (longlong)this->Offset * 0x30);
  __return_storage_ptr__->ArrayNum = iVar1;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<Chaos::TRigidTransform<float,3>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  return __return_storage_ptr__;
}

