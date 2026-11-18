// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 3

// FPBDSpringConstraintsBase<2> @ 14db7a8e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPBDSpringConstraintsBase * __thiscall
Chaos::Softs::FPBDSpringConstraintsBase::FPBDSpringConstraintsBase<2>
          (FPBDSpringConstraintsBase *this,FSolverParticles *param_1,int param_2,int param_3,
          TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *param_4,
          TArrayView<float_const_,int> *param_5,TVector<float,2> *param_6,bool param_7,float param_8
          )

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FPBDSpringConstraintsBase *pFVar4;
  undefined7 uStack_5f;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_58;
  TArrayView<float,int> local_48;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_38;
  <lambda_34_> local_28;
  
  this->_padding_ = (longlong)&___7FPBDSpringConstraintsBase_Softs_Chaos__6B_;
  local_28._9_7_ = uStack_5f;
  local_28.bTrimKinematicConstraints = param_7;
  local_28.Particles = param_1;
  TrimConstraints<2,_Chaos::Softs::FPBDSpringConstraintsBase::FPBDSpringConstraintsBase<2>_::__l1::<lambda_34_>_>
            (this,&this->Constraints,param_4,&local_28);
  this->ParticleOffset = param_2;
  (this->Dists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Dists).ArrayNum = 0;
  (this->Dists).ArrayMax = 0;
  this->ParticleCount = param_3;
  local_58.DataPtr = (TVector<int,2> *)(this->Constraints).AllocatorInstance.Data;
  local_58.ArrayNum = (this->Constraints).ArrayNum;
  if (local_58.ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPBDSpringConstraintsBase *)(*pcVar2)();
      return pFVar4;
    }
  }
  FPBDStiffness::FPBDStiffness<2>
            (&this->Stiffness,param_6,param_5,&local_58,param_2,param_3,0x10,__real_447a0000,param_8
            );
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->Dists,(this->Constraints).ArrayNum,Default);
  local_48.DataPtr = (float *)(this->Dists).AllocatorInstance.Data;
  local_48.ArrayNum = (this->Dists).ArrayNum;
  if (local_48.ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPBDSpringConstraintsBase *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_38.DataPtr = (TVector<float,3> *)param_1->_padding_;
  iVar1 = (int)param_1->_padding_;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPBDSpringConstraintsBase *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_38.ArrayNum = iVar1;
  CalculateRestLengths(this,&local_38,&local_48);
  return this;
}

// FPBDSpringConstraintsBase<2> @ 14db7aaa0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPBDSpringConstraintsBase * __thiscall
Chaos::Softs::FPBDSpringConstraintsBase::FPBDSpringConstraintsBase<2>
          (FPBDSpringConstraintsBase *this,FSolverParticlesRange *param_1,
          TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *param_2,
          TArrayView<float_const_,int> *param_3,TVector<float,2> *param_4,bool param_5,float param_6
          )

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FPBDSpringConstraintsBase *pFVar4;
  undefined7 uStack_5f;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_58;
  TArrayView<float,int> local_48;
  <lambda_33_> local_38;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_28;
  
  this->_padding_ = (longlong)&___7FPBDSpringConstraintsBase_Softs_Chaos__6B_;
  local_38._9_7_ = uStack_5f;
  local_38.bTrimKinematicConstraints = param_5;
  local_38.Particles = param_1;
  TrimConstraints<2,_Chaos::Softs::FPBDSpringConstraintsBase::FPBDSpringConstraintsBase<2>_::__l1::<lambda_33_>_>
            (this,&this->Constraints,param_2,&local_38);
  (this->Dists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Dists).ArrayNum = 0;
  (this->Dists).ArrayMax = 0;
  this->ParticleOffset = 0;
  iVar1 = *(int *)&param_1->field_0x14;
  this->ParticleCount = iVar1;
  local_58.DataPtr = (TVector<int,2> *)(this->Constraints).AllocatorInstance.Data;
  local_58.ArrayNum = (this->Constraints).ArrayNum;
  if (local_58.ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPBDSpringConstraintsBase *)(*pcVar2)();
      return pFVar4;
    }
  }
  FPBDStiffness::FPBDStiffness<2>
            (&this->Stiffness,param_4,param_3,&local_58,0,iVar1,0x10,__real_447a0000,param_6);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->Dists,(this->Constraints).ArrayNum,Default);
  local_48.DataPtr = (float *)(this->Dists).AllocatorInstance.Data;
  local_48.ArrayNum = (this->Dists).ArrayNum;
  if (local_48.ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPBDSpringConstraintsBase *)(*pcVar2)();
      return pFVar4;
    }
  }
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x56,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPBDSpringConstraintsBase *)(*pcVar2)();
      return pFVar4;
    }
  }
  TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetConstArrayView<Chaos::TVector<float,3>_>
            ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_28,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)&param_1->field_0x8 + 0x28));
  CalculateRestLengths(this,&local_28,&local_48);
  return this;
}

// ResetRestLengths @ 14dc0f6d0

void __thiscall
Chaos::Softs::FPBDSpringConstraintsBase::ResetRestLengths
          (FPBDSpringConstraintsBase *this,TArrayView<Chaos::TVector<float,3>_const_,int> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float,int> local_18;
  
  local_18.DataPtr = (float *)(this->Dists).AllocatorInstance.Data;
  iVar1 = (this->Dists).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.ArrayNum = iVar1;
  CalculateRestLengths(this,param_1,&local_18);
  return;
}

