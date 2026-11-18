// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 10

// GetConstArrayView<Chaos::TVector<float,3>_> @ 143c2dbd0

TArrayView<Chaos::TVector<float,3>_const_,int> * __thiscall
Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
GetConstArrayView<Chaos::TVector<float,3>_>
          (TParticlesRange<Chaos::Softs::FSolverParticles,void> *this,
          TArrayView<Chaos::TVector<float,3>_const_,int> *__return_storage_ptr__,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar4;
  
  if (((this->Offset < 0) || (param_1->ArrayNum < this->RangeSize + this->Offset)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x4b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar2)();
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
    pTVar4 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  return __return_storage_ptr__;
}

// GetParticles @ 143c69720

FSolverParticles * __thiscall
Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetParticles
          (TParticlesRange<Chaos::Softs::FSolverParticles,void> *this)

{
  code *pcVar1;
  bool bVar2;
  FSolverParticles *pFVar3;
  
  if (this->Particles != (FSolverParticles *)0x0) {
    return this->Particles;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Particles",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                     ,0x56,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSolverParticles *)(*pcVar1)();
    return pFVar3;
  }
  return this->Particles;
}

// GetConstArrayView<Chaos::TVector<float,3>_> @ 143ce1550

TArrayView<Chaos::TVector<float,3>_const_,int> * __thiscall
Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void>::
GetConstArrayView<Chaos::TVector<float,3>_>
          (TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void> *this,
          TArrayView<Chaos::TVector<float,3>_const_,int> *__return_storage_ptr__,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar4;
  
  if (((this->Offset < 0) || (param_1->ArrayNum < this->RangeSize + this->Offset)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x4b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar2)();
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
    pTVar4 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  return __return_storage_ptr__;
}

// GetParticles @ 143d56390

FSolverCollisionParticles * __thiscall
Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void>::GetParticles
          (TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void> *this)

{
  code *pcVar1;
  bool bVar2;
  FSolverCollisionParticles *pFVar3;
  
  if (this->Particles != (FSolverCollisionParticles *)0x0) {
    return this->Particles;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Particles",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                     ,0x56,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSolverCollisionParticles *)(*pcVar1)();
    return pFVar3;
  }
  return this->Particles;
}

// GetConstArrayView<float> @ 143d8bba0

TArrayView<float_const_,int> * __thiscall
Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetConstArrayView<float>
          (TParticlesRange<Chaos::Softs::FSolverParticles,void> *this,
          TArrayView<float_const_,int> *__return_storage_ptr__,
          TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  
  if (((this->Offset < 0) || (param_1->ArrayNum < this->RangeSize + this->Offset)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x4b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  iVar1 = this->RangeSize;
  __return_storage_ptr__->DataPtr =
       (float *)((param_1->AllocatorInstance).Data + (longlong)this->Offset * 4);
  __return_storage_ptr__->ArrayNum = iVar1;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  return __return_storage_ptr__;
}

// ~TParticlesRange<Chaos::Softs::FSolverParticles,void> @ 143d92660

void __thiscall
Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
~TParticlesRange<Chaos::Softs::FSolverParticles,void>
          (TParticlesRange<Chaos::Softs::FSolverParticles,void> *this)

{
  return;
}

// GetArrayView<float> @ 143dd95a0

TArrayView<float,int> * __thiscall
Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetArrayView<float>
          (TParticlesRange<Chaos::Softs::FSolverParticles,void> *this,
          TArrayView<float,int> *__return_storage_ptr__,
          TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float,int> *pTVar4;
  
  if (((this->Offset < 0) || (param_1->ArrayNum < this->RangeSize + this->Offset)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x52,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<float,int> *)(*pcVar2)();
    return pTVar4;
  }
  iVar1 = this->RangeSize;
  __return_storage_ptr__->DataPtr =
       (float *)((param_1->AllocatorInstance).Data + (longlong)this->Offset * 4);
  __return_storage_ptr__->ArrayNum = iVar1;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<float,int> *)(*pcVar2)();
    return pTVar4;
  }
  return __return_storage_ptr__;
}

// GetArrayView<Chaos::TVector<float,3>_> @ 143dd9660

TArrayView<Chaos::TVector<float,3>,int> * __thiscall
Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
GetArrayView<Chaos::TVector<float,3>_>
          (TParticlesRange<Chaos::Softs::FSolverParticles,void> *this,
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

// ~TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void> @ 143dfd8a0

void __thiscall
Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void>::
~TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void>
          (TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void> *this)

{
  return;
}

// GetParticles @ 143ec36f0

FSolverParticles * __thiscall
Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetParticles
          (TParticlesRange<Chaos::Softs::FSolverParticles,void> *this)

{
  code *pcVar1;
  bool bVar2;
  FSolverParticles *pFVar3;
  
  if (this->Particles != (FSolverParticles *)0x0) {
    return this->Particles;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Particles",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                     ,0x57,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSolverParticles *)(*pcVar1)();
    return pFVar3;
  }
  return this->Particles;
}

