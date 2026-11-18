// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 1

// GetTriangleVertexTangentVectors<UE::Math::TVector<float>_> @ 1496f4130

void __thiscall
UE::Geometry::TMeshTangents<float>::GetTriangleVertexTangentVectors<UE::Math::TVector<float>_>
          (TMeshTangents<float> *this,int param_1,int param_2,TVector<float> *param_3,
          TVector<float> *param_4)

{
  longlong lVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = param_2 + param_1 * 3;
  uVar6 = 0;
  if ((int)uVar7 < (this->Tangents).ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar1 = (longlong)(int)uVar7 * 0xc;
  pFVar3 = (this->Tangents).AllocatorInstance.Data;
  fVar2 = *(float *)(pFVar3 + lVar1 + 8);
  *(undefined8 *)&param_3->field0_0x0 = *(undefined8 *)(pFVar3 + lVar1);
  (param_3->field0_0x0)._s_0.Z = fVar2;
  uVar6 = 0;
  if ((int)uVar7 < (this->Bitangents).ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (this->Bitangents).AllocatorInstance.Data;
  fVar2 = *(float *)(pFVar3 + lVar1 + 8);
  *(undefined8 *)&param_4->field0_0x0 = *(undefined8 *)(pFVar3 + lVar1);
  (param_4->field0_0x0)._s_0.Z = fVar2;
  return;
}

