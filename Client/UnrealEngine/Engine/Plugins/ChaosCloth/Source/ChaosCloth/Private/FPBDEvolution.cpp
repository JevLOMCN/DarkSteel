// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 3

// GetCollisionParticleRangeSize @ 14dbf9660

int __thiscall
Chaos::Softs::FPBDEvolution::GetCollisionParticleRangeSize(FPBDEvolution *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = TPBDActiveView<Chaos::Softs::FSolverCollisionParticles>::GetRangeIndex
                    (&this->MCollisionParticlesActiveView,param_1);
  uVar5 = 0;
  if ((int)uVar3 < (this->MCollisionParticlesActiveView).Ranges.ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return (*(uint *)((this->MCollisionParticlesActiveView).Ranges.AllocatorInstance.Data +
                   (longlong)(int)uVar3 * 4) >> 1) - param_1;
}

// GetParticleRangeSize @ 14dbfe3f0

int __thiscall Chaos::Softs::FPBDEvolution::GetParticleRangeSize(FPBDEvolution *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = TPBDActiveView<Chaos::Softs::FSolverParticles>::GetRangeIndex
                    (&this->MParticlesActiveView,param_1);
  uVar5 = 0;
  if ((int)uVar3 < (this->MParticlesActiveView).Ranges.ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return (*(uint *)((this->MParticlesActiveView).Ranges.AllocatorInstance.Data +
                   (longlong)(int)uVar3 * 4) >> 1) - param_1;
}

// GetVelocityAndPressureField @ 14dc00af0

FVelocityAndPressureField * __thiscall
Chaos::Softs::FPBDEvolution::GetVelocityAndPressureField(FPBDEvolution *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FVelocityAndPressureField *pFVar4;
  
  if (*(uint *)&this->field_0x18 <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GroupId < TArrayCollection::Size()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDEvolution.h"
                       ,0x94,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVelocityAndPressureField *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 0;
  if ((int)param_1 < *(int *)&(this->MGroupVelocityAndPressureFields).field_0x10) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVelocityAndPressureField *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FVelocityAndPressureField *)
         ((longlong)(int)param_1 * 0x198 +
         *(longlong *)&(this->MGroupVelocityAndPressureFields).field_0x8);
}

