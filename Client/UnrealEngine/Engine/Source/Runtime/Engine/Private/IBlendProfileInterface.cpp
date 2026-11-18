// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// ~IBlendProfileInterface @ 147533960

void __thiscall IBlendProfileInterface::~IBlendProfileInterface(IBlendProfileInterface *this)

{
  return;
}

// UpdateBoneWeights @ 147581d60

void __thiscall
IBlendProfileInterface::UpdateBoneWeights
          (IBlendProfileInterface *this,FBlendSampleData *param_1,FAlphaBlend *param_2,float param_3
          ,float param_4,bool param_5)

{
  code *pcVar1;
  EBlendProfileMode EVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  float fVar7;
  
  EVar2 = (**(code **)((longlong)*this + 0x40))();
  uVar5 = 0;
  if (0 < (param_1->PerBoneBlendData).ArrayNum) {
    lVar6 = 0;
    do {
      fVar7 = (float)(**(code **)((longlong)*this + 0x28))(this,uVar5);
      fVar7 = UBlendProfile::CalculateBoneWeight(fVar7,EVar2,param_2,param_3,param_4,param_5);
      uVar4 = 0;
      if ((int)uVar5 < (param_1->PerBoneBlendData).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar5 = uVar5 + 1;
      *(float *)((param_1->PerBoneBlendData).AllocatorInstance.Data + lVar6) = fVar7;
      lVar6 = lVar6 + 4;
    } while ((int)uVar5 < (param_1->PerBoneBlendData).ArrayNum);
  }
  return;
}

