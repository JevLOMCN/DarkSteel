// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// operator()<TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_>_> @ 143e71040

TAABB<float,3> * __thiscall
`Chaos::FTriangleMeshImplicitObject::FBvEntry<0>::BoundingBox'::__l2::<lambda_1>::
operator()<TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_>_>
          (void *this,TAABB<float,3> *__return_storage_ptr__,
          TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TAABB<float,3> *pTVar5;
  TVector<float,3> *pTVar6;
  TVector<float,3> *pTVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar1 = *(uint *)(*(longlong **)this + 1);
  lVar2 = **(longlong **)this;
  uVar8 = 0;
  if ((int)uVar1 < param_1->ArrayNum) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TAABB<float,3> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pTVar6 = Chaos::TParticles<float,3>::GetX
                     ((TParticles<float,3> *)(lVar2 + 0x20),
                      (uint)*(ushort *)
                             ((param_1->AllocatorInstance).Data + (longlong)(int)uVar1 * 6));
  uVar1 = *(uint *)(*(longlong **)this + 1);
  lVar2 = **(longlong **)this;
  uVar8 = 0;
  if ((int)uVar1 < param_1->ArrayNum) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TAABB<float,3> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pTVar7 = Chaos::TParticles<float,3>::GetX
                     ((TParticles<float,3> *)(lVar2 + 0x20),
                      (uint)*(ushort *)
                             ((param_1->AllocatorInstance).Data + (longlong)(int)uVar1 * 6));
  *(undefined8 *)&__return_storage_ptr__->MMin = *(undefined8 *)pTVar7;
  *(undefined4 *)&(__return_storage_ptr__->MMin).field_0x8 = *(undefined4 *)&pTVar7->field_0x8;
  *(undefined8 *)&__return_storage_ptr__->MMax = *(undefined8 *)pTVar6;
  *(undefined4 *)&(__return_storage_ptr__->MMax).field_0x8 = *(undefined4 *)&pTVar6->field_0x8;
  uVar1 = *(uint *)(*(longlong **)this + 1);
  lVar2 = **(longlong **)this;
  uVar8 = 0;
  if ((int)uVar1 < param_1->ArrayNum) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TAABB<float,3> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pTVar6 = Chaos::TParticles<float,3>::GetX
                     ((TParticles<float,3> *)(lVar2 + 0x20),
                      (uint)*(ushort *)
                             ((param_1->AllocatorInstance).Data + (longlong)(int)uVar1 * 6 + 2));
  fVar12 = *(float *)&__return_storage_ptr__->MMin;
  if (*(float *)pTVar6 <= *(float *)&__return_storage_ptr__->MMin) {
    fVar12 = *(float *)pTVar6;
  }
  fVar9 = *(float *)&(__return_storage_ptr__->MMin).field_0x4;
  fVar11 = *(float *)&pTVar6->field_0x4;
  if (fVar9 <= *(float *)&pTVar6->field_0x4) {
    fVar11 = fVar9;
  }
  fVar9 = *(float *)&(__return_storage_ptr__->MMin).field_0x8;
  fVar10 = *(float *)&pTVar6->field_0x8;
  if (fVar9 <= *(float *)&pTVar6->field_0x8) {
    fVar10 = fVar9;
  }
  *(float *)&__return_storage_ptr__->MMin = fVar12;
  *(float *)&(__return_storage_ptr__->MMin).field_0x4 = fVar11;
  *(float *)&(__return_storage_ptr__->MMin).field_0x8 = fVar10;
  fVar12 = *(float *)&__return_storage_ptr__->MMax;
  if (*(float *)&__return_storage_ptr__->MMax <= *(float *)pTVar6) {
    fVar12 = *(float *)pTVar6;
  }
  fVar9 = *(float *)&(__return_storage_ptr__->MMax).field_0x4;
  if (fVar9 <= *(float *)&pTVar6->field_0x4) {
    fVar9 = *(float *)&pTVar6->field_0x4;
  }
  fVar11 = *(float *)&(__return_storage_ptr__->MMax).field_0x8;
  fVar10 = *(float *)&pTVar6->field_0x8;
  if (*(float *)&pTVar6->field_0x8 <= fVar11) {
    fVar10 = fVar11;
  }
  *(float *)&__return_storage_ptr__->MMax = fVar12;
  *(float *)&(__return_storage_ptr__->MMax).field_0x4 = fVar9;
  *(float *)&(__return_storage_ptr__->MMax).field_0x8 = fVar10;
  uVar1 = *(uint *)(*(longlong **)this + 1);
  lVar2 = **(longlong **)this;
  uVar8 = 0;
  if ((int)uVar1 < param_1->ArrayNum) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TAABB<float,3> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pTVar6 = Chaos::TParticles<float,3>::GetX
                     ((TParticles<float,3> *)(lVar2 + 0x20),
                      (uint)*(ushort *)
                             ((param_1->AllocatorInstance).Data + (longlong)(int)uVar1 * 6 + 4));
  fVar12 = *(float *)&(__return_storage_ptr__->MMin).field_0x8;
  fVar9 = *(float *)&__return_storage_ptr__->MMin;
  if (*(float *)pTVar6 <= *(float *)&__return_storage_ptr__->MMin) {
    fVar9 = *(float *)pTVar6;
  }
  fVar11 = *(float *)&(__return_storage_ptr__->MMin).field_0x4;
  fVar10 = *(float *)&pTVar6->field_0x4;
  if (fVar11 <= *(float *)&pTVar6->field_0x4) {
    fVar10 = fVar11;
  }
  if (*(float *)&pTVar6->field_0x8 <= fVar12) {
    fVar12 = *(float *)&pTVar6->field_0x8;
  }
  *(float *)&__return_storage_ptr__->MMin = fVar9;
  *(float *)&(__return_storage_ptr__->MMin).field_0x4 = fVar10;
  *(float *)&(__return_storage_ptr__->MMin).field_0x8 = fVar12;
  fVar12 = *(float *)&__return_storage_ptr__->MMax;
  if (*(float *)&__return_storage_ptr__->MMax <= *(float *)pTVar6) {
    fVar12 = *(float *)pTVar6;
  }
  fVar9 = *(float *)&(__return_storage_ptr__->MMax).field_0x4;
  fVar11 = *(float *)&pTVar6->field_0x4;
  if (*(float *)&pTVar6->field_0x4 <= fVar9) {
    fVar11 = fVar9;
  }
  fVar9 = *(float *)&(__return_storage_ptr__->MMax).field_0x8;
  fVar10 = *(float *)&pTVar6->field_0x8;
  if (*(float *)&pTVar6->field_0x8 <= fVar9) {
    fVar10 = fVar9;
  }
  *(float *)&__return_storage_ptr__->MMax = fVar12;
  *(float *)&(__return_storage_ptr__->MMax).field_0x4 = fVar11;
  *(float *)&(__return_storage_ptr__->MMax).field_0x8 = fVar10;
  return __return_storage_ptr__;
}

// operator()<TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>_> @ 143e81e20

TAABB<float,3> * __thiscall
`Chaos::FTriangleMeshImplicitObject::FBvEntry<1>::BoundingBox'::__l2::<lambda_1>::
operator()<TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>_>
          (void *this,TAABB<float,3> *__return_storage_ptr__,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TAABB<float,3> *pTVar5;
  TVector<float,3> *pTVar6;
  TVector<float,3> *pTVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar1 = *(uint *)(*(longlong **)this + 1);
  lVar2 = **(longlong **)this;
  uVar8 = 0;
  if ((int)uVar1 < param_1->ArrayNum) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TAABB<float,3> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pTVar6 = Chaos::TParticles<float,3>::GetX
                     ((TParticles<float,3> *)(lVar2 + 0x20),
                      *(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar1 * 0xc));
  uVar1 = *(uint *)(*(longlong **)this + 1);
  lVar2 = **(longlong **)this;
  uVar8 = 0;
  if ((int)uVar1 < param_1->ArrayNum) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TAABB<float,3> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pTVar7 = Chaos::TParticles<float,3>::GetX
                     ((TParticles<float,3> *)(lVar2 + 0x20),
                      *(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar1 * 0xc));
  *(undefined8 *)&__return_storage_ptr__->MMin = *(undefined8 *)pTVar7;
  *(undefined4 *)&(__return_storage_ptr__->MMin).field_0x8 = *(undefined4 *)&pTVar7->field_0x8;
  *(undefined8 *)&__return_storage_ptr__->MMax = *(undefined8 *)pTVar6;
  *(undefined4 *)&(__return_storage_ptr__->MMax).field_0x8 = *(undefined4 *)&pTVar6->field_0x8;
  uVar1 = *(uint *)(*(longlong **)this + 1);
  lVar2 = **(longlong **)this;
  uVar8 = 0;
  if ((int)uVar1 < param_1->ArrayNum) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TAABB<float,3> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pTVar6 = Chaos::TParticles<float,3>::GetX
                     ((TParticles<float,3> *)(lVar2 + 0x20),
                      *(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar1 * 0xc + 4));
  fVar12 = *(float *)&__return_storage_ptr__->MMin;
  if (*(float *)pTVar6 <= *(float *)&__return_storage_ptr__->MMin) {
    fVar12 = *(float *)pTVar6;
  }
  fVar9 = *(float *)&(__return_storage_ptr__->MMin).field_0x4;
  fVar10 = *(float *)&pTVar6->field_0x4;
  if (fVar9 <= *(float *)&pTVar6->field_0x4) {
    fVar10 = fVar9;
  }
  fVar9 = *(float *)&(__return_storage_ptr__->MMin).field_0x8;
  fVar11 = *(float *)&pTVar6->field_0x8;
  if (fVar9 <= *(float *)&pTVar6->field_0x8) {
    fVar11 = fVar9;
  }
  *(float *)&__return_storage_ptr__->MMin = fVar12;
  *(float *)&(__return_storage_ptr__->MMin).field_0x4 = fVar10;
  *(float *)&(__return_storage_ptr__->MMin).field_0x8 = fVar11;
  fVar12 = *(float *)&__return_storage_ptr__->MMax;
  if (*(float *)&__return_storage_ptr__->MMax <= *(float *)pTVar6) {
    fVar12 = *(float *)pTVar6;
  }
  fVar9 = *(float *)&(__return_storage_ptr__->MMax).field_0x4;
  fVar10 = *(float *)&pTVar6->field_0x4;
  if (*(float *)&pTVar6->field_0x4 <= fVar9) {
    fVar10 = fVar9;
  }
  fVar9 = *(float *)&(__return_storage_ptr__->MMax).field_0x8;
  fVar11 = *(float *)&pTVar6->field_0x8;
  if (*(float *)&pTVar6->field_0x8 <= fVar9) {
    fVar11 = fVar9;
  }
  *(float *)&__return_storage_ptr__->MMax = fVar12;
  *(float *)&(__return_storage_ptr__->MMax).field_0x4 = fVar10;
  *(float *)&(__return_storage_ptr__->MMax).field_0x8 = fVar11;
  uVar1 = *(uint *)(*(longlong **)this + 1);
  lVar2 = **(longlong **)this;
  uVar8 = 0;
  if ((int)uVar1 < param_1->ArrayNum) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TAABB<float,3> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pTVar6 = Chaos::TParticles<float,3>::GetX
                     ((TParticles<float,3> *)(lVar2 + 0x20),
                      *(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar1 * 0xc + 8));
  fVar12 = *(float *)&(__return_storage_ptr__->MMin).field_0x8;
  fVar9 = *(float *)&__return_storage_ptr__->MMin;
  if (*(float *)pTVar6 <= *(float *)&__return_storage_ptr__->MMin) {
    fVar9 = *(float *)pTVar6;
  }
  fVar10 = *(float *)&(__return_storage_ptr__->MMin).field_0x4;
  fVar11 = *(float *)&pTVar6->field_0x4;
  if (fVar10 <= *(float *)&pTVar6->field_0x4) {
    fVar11 = fVar10;
  }
  if (*(float *)&pTVar6->field_0x8 <= fVar12) {
    fVar12 = *(float *)&pTVar6->field_0x8;
  }
  *(float *)&__return_storage_ptr__->MMin = fVar9;
  *(float *)&(__return_storage_ptr__->MMin).field_0x4 = fVar11;
  *(float *)&(__return_storage_ptr__->MMin).field_0x8 = fVar12;
  fVar12 = *(float *)&(__return_storage_ptr__->MMax).field_0x8;
  fVar9 = *(float *)&__return_storage_ptr__->MMax;
  if (*(float *)&__return_storage_ptr__->MMax <= *(float *)pTVar6) {
    fVar9 = *(float *)pTVar6;
  }
  fVar10 = *(float *)&(__return_storage_ptr__->MMax).field_0x4;
  fVar11 = *(float *)&pTVar6->field_0x4;
  if (*(float *)&pTVar6->field_0x4 <= fVar10) {
    fVar11 = fVar10;
  }
  if (fVar12 <= *(float *)&pTVar6->field_0x8) {
    fVar12 = *(float *)&pTVar6->field_0x8;
  }
  *(float *)&__return_storage_ptr__->MMax = fVar9;
  *(float *)&(__return_storage_ptr__->MMax).field_0x4 = fVar11;
  *(float *)&(__return_storage_ptr__->MMax).field_0x8 = fVar12;
  return __return_storage_ptr__;
}

