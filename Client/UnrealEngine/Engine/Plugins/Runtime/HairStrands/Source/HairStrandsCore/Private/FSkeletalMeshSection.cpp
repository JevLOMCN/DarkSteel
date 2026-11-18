// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 5

// GetBaseIndex @ 14dfc5eb0

uint __thiscall GroomBinding_Mesh::FSkeletalMeshSection::GetBaseIndex(FSkeletalMeshSection *this)

{
  FSkeletalMeshRenderData **ppFVar1;
  FSkeletalMeshRenderData *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  
  ppFVar1 = &this->MeshData;
  if (((this->LODIndex < 0) || (((*ppFVar1)->LODRenderData).Array.ArrayNum <= this->LODIndex)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MeshData->LODRenderData.IsValidIndex(LODIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                         ,0x13c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  uVar6 = this->LODIndex;
  pFVar2 = *ppFVar1;
  uVar7 = 0;
  if ((int)uVar6 < (pFVar2->LODRenderData).Array.ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  if (((this->SectionIndex < 0) ||
      (*(int *)(*(longlong *)
                 ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar6 * 8) +
               0x18) <= this->SectionIndex)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MeshData->LODRenderData[LODIndex].RenderSections.IsValidIndex(SectionIndex)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                         ,0x13d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  uVar6 = this->LODIndex;
  pFVar2 = *ppFVar1;
  uVar7 = 0;
  if ((int)uVar6 < (pFVar2->LODRenderData).Array.ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  uVar7 = this->SectionIndex;
  lVar3 = *(longlong *)
           ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
  uVar6 = 0;
  if ((int)uVar7 < *(int *)(lVar3 + 0x18)) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  return *(uint *)((longlong)(int)uVar7 * 0x118 + 4 + *(longlong *)(lVar3 + 0x10));
}

// GetBaseVertexIndex @ 14dfc60a0

uint __thiscall
GroomBinding_Mesh::FSkeletalMeshSection::GetBaseVertexIndex(FSkeletalMeshSection *this)

{
  FSkeletalMeshRenderData **ppFVar1;
  FSkeletalMeshRenderData *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  
  ppFVar1 = &this->MeshData;
  if (((this->LODIndex < 0) || (((*ppFVar1)->LODRenderData).Array.ArrayNum <= this->LODIndex)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MeshData->LODRenderData.IsValidIndex(LODIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                         ,0x143,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  uVar6 = this->LODIndex;
  pFVar2 = *ppFVar1;
  uVar7 = 0;
  if ((int)uVar6 < (pFVar2->LODRenderData).Array.ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  if (((this->SectionIndex < 0) ||
      (*(int *)(*(longlong *)
                 ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar6 * 8) +
               0x18) <= this->SectionIndex)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MeshData->LODRenderData[LODIndex].RenderSections.IsValidIndex(SectionIndex)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                         ,0x144,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  uVar6 = this->LODIndex;
  pFVar2 = *ppFVar1;
  uVar7 = 0;
  if ((int)uVar6 < (pFVar2->LODRenderData).Array.ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  uVar7 = this->SectionIndex;
  lVar3 = *(longlong *)
           ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
  uVar6 = 0;
  if ((int)uVar7 < *(int *)(lVar3 + 0x18)) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  return *(uint *)((longlong)(int)uVar7 * 0x118 + 0x10 + *(longlong *)(lVar3 + 0x10));
}

// GetMaterialIndex @ 14dfc7620

uint __thiscall
GroomBinding_Mesh::FSkeletalMeshSection::GetMaterialIndex(FSkeletalMeshSection *this)

{
  FSkeletalMeshRenderData **ppFVar1;
  FSkeletalMeshRenderData *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  
  ppFVar1 = &this->MeshData;
  if (((this->LODIndex < 0) || (((*ppFVar1)->LODRenderData).Array.ArrayNum <= this->LODIndex)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MeshData->LODRenderData.IsValidIndex(LODIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                         ,0x14a,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  uVar6 = this->LODIndex;
  pFVar2 = *ppFVar1;
  uVar7 = 0;
  if ((int)uVar6 < (pFVar2->LODRenderData).Array.ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  if (((this->SectionIndex < 0) ||
      (*(int *)(*(longlong *)
                 ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar6 * 8) +
               0x18) <= this->SectionIndex)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MeshData->LODRenderData[LODIndex].RenderSections.IsValidIndex(SectionIndex)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                         ,0x14b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  uVar6 = this->LODIndex;
  pFVar2 = *ppFVar1;
  uVar7 = 0;
  if ((int)uVar6 < (pFVar2->LODRenderData).Array.ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  uVar7 = this->SectionIndex;
  lVar3 = *(longlong *)
           ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
  uVar6 = 0;
  if ((int)uVar7 < *(int *)(lVar3 + 0x18)) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  return (uint)*(ushort *)((longlong)(int)uVar7 * 0x118 + *(longlong *)(lVar3 + 0x10));
}

// GetNumTriangles @ 14dfc7cc0

uint __thiscall GroomBinding_Mesh::FSkeletalMeshSection::GetNumTriangles(FSkeletalMeshSection *this)

{
  FSkeletalMeshRenderData **ppFVar1;
  FSkeletalMeshRenderData *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  
  ppFVar1 = &this->MeshData;
  if (((this->LODIndex < 0) || (((*ppFVar1)->LODRenderData).Array.ArrayNum <= this->LODIndex)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MeshData->LODRenderData.IsValidIndex(LODIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                         ,0x135,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  uVar6 = this->LODIndex;
  pFVar2 = *ppFVar1;
  uVar7 = 0;
  if ((int)uVar6 < (pFVar2->LODRenderData).Array.ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  if (((this->SectionIndex < 0) ||
      (*(int *)(*(longlong *)
                 ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar6 * 8) +
               0x18) <= this->SectionIndex)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MeshData->LODRenderData[LODIndex].RenderSections.IsValidIndex(SectionIndex)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                         ,0x136,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  uVar6 = this->LODIndex;
  pFVar2 = *ppFVar1;
  uVar7 = 0;
  if ((int)uVar6 < (pFVar2->LODRenderData).Array.ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  uVar7 = this->SectionIndex;
  lVar3 = *(longlong *)
           ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
  uVar6 = 0;
  if ((int)uVar7 < *(int *)(lVar3 + 0x18)) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  return *(uint *)((longlong)(int)uVar7 * 0x118 + 8 + *(longlong *)(lVar3 + 0x10));
}

// GetNumVertices @ 14dfc7fa0

uint __thiscall GroomBinding_Mesh::FSkeletalMeshSection::GetNumVertices(FSkeletalMeshSection *this)

{
  FSkeletalMeshRenderData **ppFVar1;
  FSkeletalMeshRenderData *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  
  ppFVar1 = &this->MeshData;
  if (((this->LODIndex < 0) || (((*ppFVar1)->LODRenderData).Array.ArrayNum <= this->LODIndex)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MeshData->LODRenderData.IsValidIndex(LODIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                         ,0x12e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  uVar6 = this->LODIndex;
  pFVar2 = *ppFVar1;
  uVar7 = 0;
  if ((int)uVar6 < (pFVar2->LODRenderData).Array.ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  if (((this->SectionIndex < 0) ||
      (*(int *)(*(longlong *)
                 ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar6 * 8) +
               0x18) <= this->SectionIndex)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MeshData->LODRenderData[LODIndex].RenderSections.IsValidIndex(SectionIndex)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                         ,0x12f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  uVar6 = this->LODIndex;
  pFVar2 = *ppFVar1;
  uVar7 = 0;
  if ((int)uVar6 < (pFVar2->LODRenderData).Array.ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  uVar7 = this->SectionIndex;
  lVar3 = *(longlong *)
           ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
  uVar6 = 0;
  if ((int)uVar7 < *(int *)(lVar3 + 0x18)) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  return *(uint *)((longlong)(int)uVar7 * 0x118 + 0x48 + *(longlong *)(lVar3 + 0x10));
}

