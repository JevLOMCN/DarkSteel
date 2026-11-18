// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// ~FTriangleSubMesh @ 143a3adc0

void __thiscall
Chaos::Softs::FPBDTriangleMeshCollisions::FTriangleSubMesh::~FTriangleSubMesh
          (FTriangleSubMesh *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DynamicVertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->KinematicColliderSubMeshToFullMeshIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DynamicSubMeshToFullMeshIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FullMeshToSubMeshIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FTriangleMesh::~FTriangleMesh(&this->KinematicColliderSubMesh);
  FTriangleMesh::~FTriangleMesh(&this->DynamicSubMesh);
  return;
}

// GetFullMeshElementIndexFromDynamicElement @ 143c69060

int __thiscall
Chaos::Softs::FPBDTriangleMeshCollisions::FTriangleSubMesh::
GetFullMeshElementIndexFromDynamicElement(FTriangleSubMesh *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (this->DynamicSubMeshToFullMeshIndices).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
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
  return *(int *)((this->DynamicSubMeshToFullMeshIndices).AllocatorInstance.Data +
                 (longlong)param_1 * 4);
}

// Init<Chaos::Softs::FSolverParticles> @ 143d8ce10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDTriangleMeshCollisions::FTriangleSubMesh::Init<Chaos::Softs::FSolverParticles>
          (FTriangleSubMesh *this,FSolverParticles *param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2,bool param_3,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_4,bool param_5)

{
  int *piVar1;
  TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FTriangleSubMesh::FFullToSubMeshIndex,TSizedDefaultAllocator<32>_>
  *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FTriangleMesh *pFVar3;
  ForElementType<FSetElementId> FVar4;
  code *pcVar5;
  FSolverParticles *pFVar6;
  longlong *plVar7;
  bool bVar8;
  byte bVar9;
  FScriptContainerElement *pFVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint *puVar17;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar18;
  FTriangleMesh *this_01;
  float fVar19;
  undefined1 auStackY_1d8 [32];
  uint local_188;
  char local_184;
  undefined1 local_183 [3];
  uint local_180 [2];
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> local_178;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> local_168;
  FSolverParticles *local_158;
  int local_150;
  int local_14c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_148;
  int local_140;
  int local_13c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_138;
  longlong *local_130;
  int iStack_128;
  uint uStack_124;
  TBitArray<FDefaultBitArrayAllocator> *local_120;
  undefined4 uStack_118;
  uint uStack_114;
  int local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  longlong *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  undefined4 local_b4;
  undefined1 local_a8 [32];
  uint *local_88;
  uint local_80;
  int local_74;
  ForElementType<FSetElementId> local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  this_00 = &this->FullMeshToSubMeshIndices;
  local_148 = param_4;
  (this->FullMeshToSubMeshIndices).ArrayNum = 0;
  local_184 = param_3;
  local_158 = param_1;
  local_138 = param_2;
  if ((this->FullMeshToSubMeshIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&this_00->AllocatorInstance,0,&(this->FullMeshToSubMeshIndices).ArrayMax);
  }
  pTVar18 = &this->DynamicSubMeshToFullMeshIndices;
  piVar1 = &(this->DynamicSubMeshToFullMeshIndices).ArrayMax;
  (this->DynamicSubMeshToFullMeshIndices).ArrayNum = 0;
  if ((this->DynamicSubMeshToFullMeshIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar18->AllocatorInstance,0,piVar1);
  }
  (this->KinematicColliderSubMeshToFullMeshIndices).ArrayNum = 0;
  if ((this->KinematicColliderSubMeshToFullMeshIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->KinematicColliderSubMeshToFullMeshIndices).AllocatorInstance,0,
               &(this->KinematicColliderSubMeshToFullMeshIndices).ArrayMax);
  }
  (this->DynamicVertices).ArrayNum = 0;
  if ((this->DynamicVertices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->DynamicVertices).AllocatorInstance,0,&(this->DynamicVertices).ArrayMax)
    ;
  }
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (!param_5) {
    uVar15 = (this->FullMesh->MElements).ArrayNum;
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    if (0 < (int)uVar15) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar15,&local_168.AllocatorInstance,0,&local_168.ArrayMax);
    }
  }
  uVar15 = *(int *)&(param_4->Elements).field_0x8 - *(int *)&(param_4->Elements).field_0x34;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  if (local_178.ArrayMax < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar15,&local_178.AllocatorInstance,local_178.ArrayNum,&local_178.ArrayMax);
  }
  TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FTriangleSubMesh::FFullToSubMeshIndex,TSizedDefaultAllocator<32>_>
  ::SetNumZeroed(this_00,(this->FullMesh->MElements).ArrayNum,Default);
  uVar15 = (this->FullMesh->MElements).ArrayNum;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  if (*piVar1 < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar15,&pTVar18->AllocatorInstance,
               (this->DynamicSubMeshToFullMeshIndices).ArrayNum,piVar1);
  }
  uVar15 = *(int *)&(param_4->Elements).field_0x8 - *(int *)&(param_4->Elements).field_0x34;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  piVar1 = &(this->KinematicColliderSubMeshToFullMeshIndices).ArrayMax;
  if (*piVar1 < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar15,&(this->KinematicColliderSubMeshToFullMeshIndices).AllocatorInstance,
               (this->KinematicColliderSubMeshToFullMeshIndices).ArrayNum,piVar1);
  }
  pFVar3 = this->FullMesh;
  local_188 = 0;
  this_01 = pFVar3;
  if (0 < (pFVar3->MElements).ArrayNum) {
    uVar16 = 0;
    pTVar2 = &this->KinematicColliderSubMeshToFullMeshIndices;
    do {
      if (*(int *)&(local_138->Elements).field_0x8 != *(int *)&(local_138->Elements).field_0x34) {
        FVar4 = (local_138->Hash).SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&local_138->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar4;
        }
        iVar12 = *(int *)((longlong)FVar11 + (local_138->HashSize - 1 & uVar16) * 4);
        if (iVar12 != -1) {
          do {
            if (*(int *)(*(longlong *)&local_138->Elements + (longlong)iVar12 * 0xc) == (int)uVar16)
            {
              lVar13 = (longlong)(int)local_188;
              uVar15 = 0;
              if ((int)local_188 < (this->FullMeshToSubMeshIndices).ArrayNum) {
                uVar15 = ~local_188 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              goto LAB_143d8d3ac;
            }
            iVar12 = *(int *)(*(longlong *)&local_138->Elements + 4 + (longlong)iVar12 * 0xc);
          } while (iVar12 != -1);
        }
      }
      lVar13 = (longlong)(int)local_188;
      uVar15 = 0;
      if ((int)local_188 < (pFVar3->MElements).ArrayNum) {
        uVar15 = ~local_188 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar15 = *(uint *)((pFVar3->MElements).AllocatorInstance.Data + lVar13 * 0xc);
      uVar14 = 0;
      if ((int)uVar15 < (int)local_158->_padding_) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(float *)(local_158->_padding_ + (longlong)(int)uVar15 * 4) == 0.0) {
        lVar13 = (longlong)(int)local_188;
        uVar15 = 0;
        if ((int)local_188 < (pFVar3->MElements).ArrayNum) {
          uVar15 = ~local_188 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar15 = *(uint *)((pFVar3->MElements).AllocatorInstance.Data + lVar13 * 0xc + 4);
        uVar14 = 0;
        if ((int)uVar15 < (int)local_158->_padding_) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(float *)(local_158->_padding_ + (longlong)(int)uVar15 * 4) != 0.0) goto LAB_143d8d619;
        lVar13 = (longlong)(int)local_188;
        uVar15 = 0;
        if ((int)local_188 < (pFVar3->MElements).ArrayNum) {
          uVar15 = ~local_188 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar19 = TDynamicParticles<float,3>::InvM
                           ((TDynamicParticles<float,3> *)local_158,
                            *(int *)((pFVar3->MElements).AllocatorInstance.Data + lVar13 * 0xc + 8))
        ;
        if (fVar19 != 0.0) goto LAB_143d8d619;
        lVar13 = (longlong)(int)local_188;
        if (local_184 != '\0') {
LAB_143d8d3bb:
          uVar15 = 0;
          if ((int)local_188 < (pFVar3->MElements).ArrayNum) {
            uVar15 = ~local_188 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar10 = (pFVar3->MElements).AllocatorInstance.Data + lVar13 * 0xc;
          if (((local_178.AllocatorInstance.Data <= pFVar10) &&
              (pFVar10 < local_178.AllocatorInstance.Data + (longlong)local_178.ArrayMax * 0xc)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar15 = local_178.ArrayNum;
          if (local_178.ArrayNum == local_178.ArrayMax) {
            uVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&local_178.AllocatorInstance,&local_178.ArrayMax);
          }
          local_178.ArrayNum = uVar15 + 1;
          *(undefined8 *)(local_178.AllocatorInstance.Data + (longlong)(int)uVar15 * 0xc) =
               *(undefined8 *)pFVar10;
          *(undefined4 *)(local_178.AllocatorInstance.Data + (longlong)(int)uVar15 * 0xc + 8) =
               *(undefined4 *)(pFVar10 + 8);
          pFVar10 = (pTVar2->AllocatorInstance).Data;
          if (((pFVar10 <= (FScriptContainerElement *)&local_188) &&
              ((FScriptContainerElement *)&local_188 <
               pFVar10 + (longlong)(this->KinematicColliderSubMeshToFullMeshIndices).ArrayMax * 4))
             && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar12 = (this->KinematicColliderSubMeshToFullMeshIndices).ArrayNum;
          if (iVar12 == (this->KinematicColliderSubMeshToFullMeshIndices).ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar2->AllocatorInstance,
                                &(this->KinematicColliderSubMeshToFullMeshIndices).ArrayMax);
          }
          (this->KinematicColliderSubMeshToFullMeshIndices).ArrayNum = iVar12 + 1;
          *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_188;
          lVar13 = (longlong)(int)local_188;
          uVar14 = 0;
          if ((int)local_188 < (this->FullMeshToSubMeshIndices).ArrayNum) {
            uVar14 = ~local_188 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar10 = (this_00->AllocatorInstance).Data;
          *(uint *)(pFVar10 + lVar13 * 4) =
               (uVar15 ^ *(uint *)(pFVar10 + lVar13 * 4)) & 0xc0000000 ^ uVar15;
          lVar13 = (longlong)(int)local_188;
          uVar15 = 0;
          if ((int)local_188 < (this->FullMeshToSubMeshIndices).ArrayNum) {
            uVar15 = ~local_188 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar10 = (this_00->AllocatorInstance).Data;
          uVar15 = *(uint *)(pFVar10 + lVar13 * 4) & 0x3fffffff | 0x80000000;
          goto LAB_143d8d87b;
        }
        if (*(int *)&(param_4->Elements).field_0x8 != *(int *)&(param_4->Elements).field_0x34) {
          FVar4 = (param_4->Hash).SecondaryData;
          FVar11 = (ForElementType<FSetElementId>)&param_4->Hash;
          if (FVar4 != (ForElementType<FSetElementId>)0x0) {
            FVar11 = FVar4;
          }
          iVar12 = *(int *)((longlong)FVar11 + (ulonglong)(param_4->HashSize - 1U & local_188) * 4);
          if (iVar12 != -1) {
            do {
              if (*(uint *)(*(longlong *)&param_4->Elements + (longlong)iVar12 * 0xc) == local_188)
              goto LAB_143d8d3bb;
              iVar12 = *(int *)(*(longlong *)&param_4->Elements + 4 + (longlong)iVar12 * 0xc);
            } while (iVar12 != -1);
          }
        }
        uVar15 = 0;
        if ((int)local_188 < (this->FullMeshToSubMeshIndices).ArrayNum) {
          uVar15 = ~local_188 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
LAB_143d8d3ac:
        pFVar10 = (this_00->AllocatorInstance).Data + lVar13 * 4;
        *(uint *)pFVar10 = *(uint *)pFVar10 & 0x3fffffff;
      }
      else {
LAB_143d8d619:
        if (!param_5) {
          lVar13 = (longlong)(int)local_188;
          uVar15 = 0;
          if ((int)local_188 < (pFVar3->MElements).ArrayNum) {
            uVar15 = ~local_188 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar10 = (pFVar3->MElements).AllocatorInstance.Data + lVar13 * 0xc;
          if (((local_168.AllocatorInstance.Data <= pFVar10) &&
              (pFVar10 < local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0xc)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar15 = local_168.ArrayNum;
          if (local_168.ArrayNum == local_168.ArrayMax) {
            uVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&local_168.AllocatorInstance,&local_168.ArrayMax);
          }
          local_168.ArrayNum = uVar15 + 1;
          *(undefined8 *)(local_168.AllocatorInstance.Data + (longlong)(int)uVar15 * 0xc) =
               *(undefined8 *)pFVar10;
          *(undefined4 *)(local_168.AllocatorInstance.Data + (longlong)(int)uVar15 * 0xc + 8) =
               *(undefined4 *)(pFVar10 + 8);
          pFVar10 = (pTVar18->AllocatorInstance).Data;
          if (((pFVar10 <= (FScriptContainerElement *)&local_188) &&
              ((FScriptContainerElement *)&local_188 <
               pFVar10 + (longlong)(this->DynamicSubMeshToFullMeshIndices).ArrayMax * 4)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar12 = (this->DynamicSubMeshToFullMeshIndices).ArrayNum;
          if (iVar12 == (this->DynamicSubMeshToFullMeshIndices).ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar18->AllocatorInstance,
                                &(this->DynamicSubMeshToFullMeshIndices).ArrayMax);
          }
          (this->DynamicSubMeshToFullMeshIndices).ArrayNum = iVar12 + 1;
          *(uint *)((pTVar18->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_188;
          lVar13 = (longlong)(int)local_188;
          uVar14 = 0;
          if ((int)local_188 < (this->FullMeshToSubMeshIndices).ArrayNum) {
            uVar14 = ~local_188 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar10 = (this_00->AllocatorInstance).Data;
          *(uint *)(pFVar10 + lVar13 * 4) =
               (uVar15 ^ *(uint *)(pFVar10 + lVar13 * 4)) & 0xc0000000 ^ uVar15;
          lVar13 = (longlong)(int)local_188;
          uVar15 = 0;
          if ((int)local_188 < (this->FullMeshToSubMeshIndices).ArrayNum) {
            uVar15 = ~local_188 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar10 = (this_00->AllocatorInstance).Data;
          uVar15 = *(uint *)(pFVar10 + lVar13 * 4) & 0x3fffffff | 0x40000000;
LAB_143d8d87b:
          *(uint *)(pFVar10 + lVar13 * 4) = uVar15;
          param_4 = local_148;
        }
      }
      this_01 = this->FullMesh;
      local_188 = local_188 + 1;
      uVar16 = (ulonglong)local_188;
    } while ((int)local_188 < (this_01->MElements).ArrayNum);
  }
  pTVar18 = &this->DynamicVertices;
  FTriangleMesh::GetVertexRange(this_01);
  FTriangleMesh::Init(&this->DynamicSubMesh,&local_168,local_150,local_14c,false);
  FTriangleMesh::Init(&this->KinematicColliderSubMesh,&local_178,local_150,local_14c,false);
  if (((this->DynamicSubMesh).MElements.ArrayNum != (this->DynamicSubMeshToFullMeshIndices).ArrayNum
      ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("DynamicSubMesh.GetNumElements() == DynamicSubMeshToFullMeshIndices.Num()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDTriangleMeshCollisions.cpp"
                               ,0x543,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->KinematicColliderSubMesh).MElements.ArrayNum !=
       (this->KinematicColliderSubMeshToFullMeshIndices).ArrayNum) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("KinematicColliderSubMesh.GetNumElements() == KinematicColliderSubMeshToFullMeshIndices.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDTriangleMeshCollisions.cpp"
                         ,0x544,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FTriangleMesh::GetVertices
            (&this->DynamicSubMesh,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_a8
            );
  uVar15 = local_a8._8_4_ - local_74;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  piVar1 = &(this->DynamicVertices).ArrayMax;
  if ((this->DynamicVertices).ArrayMax < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar15,&pTVar18->AllocatorInstance,(this->DynamicVertices).ArrayNum,piVar1);
  }
  uVar15 = local_80;
  iStack_128 = 0;
  local_110 = 0;
  uStack_124 = 1;
  uStack_114 = 0;
  if (local_80 != 0) {
    puVar17 = (uint *)(local_a8 + 0x10);
    if (local_88 != (uint *)0x0) {
      puVar17 = local_88;
    }
    uVar14 = *puVar17;
    while (uVar14 == 0) {
      lVar13 = (longlong)iStack_128;
      local_110 = local_110 + 0x20;
      iStack_128 = iStack_128 + 1;
      uStack_114 = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_128)
      goto LAB_143d8da20;
      uVar14 = puVar17[lVar13 + 1];
    }
    uStack_124 = -uVar14 & uVar14;
    uVar16 = (ulonglong)uStack_124 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_140 = (int)lVar13;
    uStack_114 = local_110 + -1 + local_140;
    if ((int)local_80 < (int)uStack_114) {
      uStack_114 = local_80;
    }
  }
LAB_143d8da20:
  iStack_108 = local_a8._8_4_ - local_74;
  local_130 = (longlong *)local_a8;
  local_120 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
  uStack_118 = 0xffffffff;
  TStack_f8.CurrentBitIndex = uStack_114;
  TStack_f8.UnvisitedBitMask = 0xffffffff;
  uVar14 = local_80 & 0xffffffe0;
  TStack_f8._padding_ = CONCAT44(uStack_124,iStack_128);
  uStack_10c = local_b4;
  iVar12 = (int)local_80 >> 5;
  TStack_f8._28_4_ = local_b4;
  TStack_f8.BaseBitIndex = local_110;
  uStack_d8 = CONCAT44(uStack_104,iStack_108);
  bVar9 = (byte)local_80;
  local_100 = local_130;
  TStack_f8.Array = local_120;
  if (((int)local_80 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar6 = local_158;
  if (uVar15 != local_80) {
    puVar17 = (uint *)(local_a8 + 0x10);
    if (local_88 != (uint *)0x0) {
      puVar17 = local_88;
    }
    uVar15 = -1 << (bVar9 & 0x1f) & puVar17[iVar12];
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar15 = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_143d8db20;
      uVar15 = puVar17[lVar13 + 1];
    }
    uVar16 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_13c = (int)lVar13;
    uVar15 = (uVar14 - 1) + local_13c;
    if ((int)local_80 < (int)uVar15) {
      uVar15 = local_80;
    }
  }
LAB_143d8db20:
  while( true ) {
    plVar7 = local_100;
    if ((int)local_100[1] - *(int *)((longlong)local_100 + 0x34) != (int)uStack_d8) {
      local_183[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_183);
    }
    if (((TStack_f8.CurrentBitIndex == uVar15) &&
        (TStack_f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10))) &&
       (plVar7 == (longlong *)local_a8)) {
      local_60 = 0;
      if (local_68 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_68);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_a8);
      if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.AllocatorInstance.Data);
      }
      if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.AllocatorInstance.Data);
      }
      return;
    }
    local_180[0] = *(uint *)(*plVar7 + (longlong)TStack_f8.CurrentBitIndex * 0xc);
    lVar13 = (longlong)(int)local_180[0];
    uVar14 = 0;
    if ((int)local_180[0] < (int)pFVar6->_padding_) {
      uVar14 = ~local_180[0] >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) break;
    if (0.0 < *(float *)(pFVar6->_padding_ + lVar13 * 4)) {
      pFVar10 = (pTVar18->AllocatorInstance).Data;
      if (((pFVar10 <= (FScriptContainerElement *)local_180) &&
          ((FScriptContainerElement *)local_180 < pFVar10 + (longlong)*piVar1 * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar12 = (this->DynamicVertices).ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar18->AllocatorInstance,piVar1);
      }
      (this->DynamicVertices).ArrayNum = iVar12 + 1;
      *(uint *)((pTVar18->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_180[0];
    }
    TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// Init<Chaos::Softs::FSolverParticlesRange> @ 143d8e290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDTriangleMeshCollisions::FTriangleSubMesh::
Init<Chaos::Softs::FSolverParticlesRange>
          (FTriangleSubMesh *this,FSolverParticlesRange *param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2,bool param_3,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_4,bool param_5)

{
  int *piVar1;
  TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FTriangleSubMesh::FFullToSubMeshIndex,TSizedDefaultAllocator<32>_>
  *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FTriangleMesh *pFVar3;
  ForElementType<FSetElementId> FVar4;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  byte bVar8;
  FScriptContainerElement *pFVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  FTriangleMesh *this_01;
  uint uVar14;
  ulonglong uVar15;
  uint *puVar16;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar17;
  float fVar18;
  undefined1 auStackY_1c8 [32];
  uint local_178;
  char local_174;
  undefined1 local_173 [3];
  int local_170 [2];
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> local_168;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> local_158;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_138;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_130;
  longlong *local_128;
  int iStack_120;
  uint uStack_11c;
  TBitArray<FDefaultBitArrayAllocator> *local_118;
  undefined4 uStack_110;
  uint uStack_10c;
  int local_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  undefined4 local_ac;
  undefined1 local_a8 [32];
  uint *local_88;
  uint local_80;
  int local_74;
  ForElementType<FSetElementId> local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  this_00 = &this->FullMeshToSubMeshIndices;
  local_130 = param_4;
  (this->FullMeshToSubMeshIndices).ArrayNum = 0;
  local_174 = param_3;
  local_138 = param_2;
  if ((this->FullMeshToSubMeshIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&this_00->AllocatorInstance,0,&(this->FullMeshToSubMeshIndices).ArrayMax);
  }
  (this->DynamicSubMeshToFullMeshIndices).ArrayNum = 0;
  if ((this->DynamicSubMeshToFullMeshIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->DynamicSubMeshToFullMeshIndices).AllocatorInstance,0,
               &(this->DynamicSubMeshToFullMeshIndices).ArrayMax);
  }
  (this->KinematicColliderSubMeshToFullMeshIndices).ArrayNum = 0;
  if ((this->KinematicColliderSubMeshToFullMeshIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->KinematicColliderSubMeshToFullMeshIndices).AllocatorInstance,0,
               &(this->KinematicColliderSubMeshToFullMeshIndices).ArrayMax);
  }
  (this->DynamicVertices).ArrayNum = 0;
  if ((this->DynamicVertices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->DynamicVertices).AllocatorInstance,0,&(this->DynamicVertices).ArrayMax)
    ;
  }
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 0;
  local_158.ArrayMax = 0;
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (!param_5) {
    uVar14 = (this->FullMesh->MElements).ArrayNum;
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
    if (0 < (int)uVar14) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar14,&local_158.AllocatorInstance,0,&local_158.ArrayMax);
    }
  }
  uVar14 = *(int *)&(param_4->Elements).field_0x8 - *(int *)&(param_4->Elements).field_0x34;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  if (local_168.ArrayMax < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar14,&local_168.AllocatorInstance,local_168.ArrayNum,&local_168.ArrayMax);
  }
  TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FTriangleSubMesh::FFullToSubMeshIndex,TSizedDefaultAllocator<32>_>
  ::SetNumZeroed(this_00,(this->FullMesh->MElements).ArrayNum,Default);
  uVar14 = (this->FullMesh->MElements).ArrayNum;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  if ((this->DynamicSubMeshToFullMeshIndices).ArrayMax < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar14,&(this->DynamicSubMeshToFullMeshIndices).AllocatorInstance,
               (this->DynamicSubMeshToFullMeshIndices).ArrayNum,
               &(this->DynamicSubMeshToFullMeshIndices).ArrayMax);
  }
  uVar14 = *(int *)&(param_4->Elements).field_0x8 - *(int *)&(param_4->Elements).field_0x34;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  piVar1 = &(this->KinematicColliderSubMeshToFullMeshIndices).ArrayMax;
  if (*piVar1 < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar14,&(this->KinematicColliderSubMeshToFullMeshIndices).AllocatorInstance,
               (this->KinematicColliderSubMeshToFullMeshIndices).ArrayNum,piVar1);
  }
  pFVar3 = this->FullMesh;
  local_178 = 0;
  this_01 = pFVar3;
  if (0 < (pFVar3->MElements).ArrayNum) {
    uVar15 = 0;
    pTVar17 = &this->DynamicSubMeshToFullMeshIndices;
    do {
      uVar14 = local_178;
      if (*(int *)&(local_138->Elements).field_0x8 != *(int *)&(local_138->Elements).field_0x34) {
        FVar4 = (local_138->Hash).SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&local_138->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar4;
        }
        iVar11 = *(int *)((longlong)FVar10 + (local_138->HashSize - 1 & uVar15) * 4);
        if (iVar11 != -1) {
          do {
            if (*(int *)(*(longlong *)&local_138->Elements + (longlong)iVar11 * 0xc) == (int)uVar15)
            {
              uVar13 = 0;
              if ((int)local_178 < (this->FullMeshToSubMeshIndices).ArrayNum) {
                uVar13 = ~local_178 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar9 = (this_00->AllocatorInstance).Data + (longlong)(int)uVar14 * 4;
              *(uint *)pFVar9 = *(uint *)pFVar9 & 0x3fffffff;
              goto LAB_143d8ecef;
            }
            iVar11 = *(int *)(*(longlong *)&local_138->Elements + 4 + (longlong)iVar11 * 0xc);
          } while (iVar11 != -1);
        }
      }
      uVar13 = 0;
      if ((int)local_178 < (pFVar3->MElements).ArrayNum) {
        uVar13 = ~local_178 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar11 = *(int *)((pFVar3->MElements).AllocatorInstance.Data + (longlong)(int)uVar14 * 0xc);
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Particles",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                             ,0x56,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar18 = TDynamicParticles<float,3>::InvM
                         (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                          *(int *)&param_1->field_0x10 + iVar11);
      if (fVar18 == 0.0) {
        lVar12 = (longlong)(int)local_178;
        uVar14 = 0;
        if ((int)local_178 < (pFVar3->MElements).ArrayNum) {
          uVar14 = ~local_178 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar11 = *(int *)((pFVar3->MElements).AllocatorInstance.Data + lVar12 * 0xc + 4);
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Particles",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                               ,0x56,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar18 = TDynamicParticles<float,3>::InvM
                           (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                            *(int *)&param_1->field_0x10 + iVar11);
        if (fVar18 != 0.0) goto LAB_143d8ea82;
        lVar12 = (longlong)(int)local_178;
        uVar14 = 0;
        if ((int)local_178 < (pFVar3->MElements).ArrayNum) {
          uVar14 = ~local_178 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar11 = *(int *)((pFVar3->MElements).AllocatorInstance.Data + lVar12 * 0xc + 8);
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Particles",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                               ,0x56,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar18 = TDynamicParticles<float,3>::InvM
                           (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                            *(int *)&param_1->field_0x10 + iVar11);
        if (fVar18 != 0.0) goto LAB_143d8ea82;
        lVar12 = (longlong)(int)local_178;
        if (local_174 != '\0') {
LAB_143d8e828:
          uVar14 = 0;
          if ((int)local_178 < (pFVar3->MElements).ArrayNum) {
            uVar14 = ~local_178 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar9 = (pFVar3->MElements).AllocatorInstance.Data + lVar12 * 0xc;
          if (((local_168.AllocatorInstance.Data <= pFVar9) &&
              (pFVar9 < local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0xc)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar14 = local_168.ArrayNum;
          if (local_168.ArrayNum == local_168.ArrayMax) {
            uVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&local_168.AllocatorInstance,&local_168.ArrayMax);
          }
          local_168.ArrayNum = uVar14 + 1;
          *(undefined8 *)(local_168.AllocatorInstance.Data + (longlong)(int)uVar14 * 0xc) =
               *(undefined8 *)pFVar9;
          pTVar2 = &this->KinematicColliderSubMeshToFullMeshIndices;
          *(undefined4 *)(local_168.AllocatorInstance.Data + (longlong)(int)uVar14 * 0xc + 8) =
               *(undefined4 *)(pFVar9 + 8);
          pFVar9 = (pTVar2->AllocatorInstance).Data;
          if (((pFVar9 <= (FScriptContainerElement *)&local_178) &&
              ((FScriptContainerElement *)&local_178 <
               pFVar9 + (longlong)(this->KinematicColliderSubMeshToFullMeshIndices).ArrayMax * 4))
             && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar11 = (this->KinematicColliderSubMeshToFullMeshIndices).ArrayNum;
          if (iVar11 == (this->KinematicColliderSubMeshToFullMeshIndices).ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar2->AllocatorInstance,
                                &(this->KinematicColliderSubMeshToFullMeshIndices).ArrayMax);
          }
          (this->KinematicColliderSubMeshToFullMeshIndices).ArrayNum = iVar11 + 1;
          *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_178;
          lVar12 = (longlong)(int)local_178;
          uVar13 = 0;
          if ((int)local_178 < (this->FullMeshToSubMeshIndices).ArrayNum) {
            uVar13 = ~local_178 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar9 = (this_00->AllocatorInstance).Data;
          *(uint *)(pFVar9 + lVar12 * 4) =
               (uVar14 ^ *(uint *)(pFVar9 + lVar12 * 4)) & 0xc0000000 ^ uVar14;
          lVar12 = (longlong)(int)local_178;
          uVar14 = 0;
          if ((int)local_178 < (this->FullMeshToSubMeshIndices).ArrayNum) {
            uVar14 = ~local_178 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar9 = (this_00->AllocatorInstance).Data;
          uVar14 = *(uint *)(pFVar9 + lVar12 * 4) & 0x3fffffff | 0x80000000;
          goto LAB_143d8ecec;
        }
        if (*(int *)&(local_130->Elements).field_0x8 != *(int *)&(local_130->Elements).field_0x34) {
          FVar4 = (local_130->Hash).SecondaryData;
          FVar10 = (ForElementType<FSetElementId>)&local_130->Hash;
          if (FVar4 != (ForElementType<FSetElementId>)0x0) {
            FVar10 = FVar4;
          }
          iVar11 = *(int *)((longlong)FVar10 + (ulonglong)(local_130->HashSize - 1U & local_178) * 4
                           );
          if (iVar11 != -1) {
            do {
              if (*(uint *)(*(longlong *)&local_130->Elements + (longlong)iVar11 * 0xc) == local_178
                 ) goto LAB_143d8e828;
              iVar11 = *(int *)(*(longlong *)&local_130->Elements + 4 + (longlong)iVar11 * 0xc);
            } while (iVar11 != -1);
          }
        }
        uVar14 = 0;
        if ((int)local_178 < (this->FullMeshToSubMeshIndices).ArrayNum) {
          uVar14 = ~local_178 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar9 = (this_00->AllocatorInstance).Data + lVar12 * 4;
        *(uint *)pFVar9 = *(uint *)pFVar9 & 0x3fffffff;
      }
      else {
LAB_143d8ea82:
        if (!param_5) {
          lVar12 = (longlong)(int)local_178;
          uVar14 = 0;
          if ((int)local_178 < (pFVar3->MElements).ArrayNum) {
            uVar14 = ~local_178 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar9 = (pFVar3->MElements).AllocatorInstance.Data + lVar12 * 0xc;
          if (((local_158.AllocatorInstance.Data <= pFVar9) &&
              (pFVar9 < local_158.AllocatorInstance.Data + (longlong)local_158.ArrayMax * 0xc)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar14 = local_158.ArrayNum;
          if (local_158.ArrayNum == local_158.ArrayMax) {
            uVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&local_158.AllocatorInstance,&local_158.ArrayMax);
          }
          local_158.ArrayNum = uVar14 + 1;
          *(undefined8 *)(local_158.AllocatorInstance.Data + (longlong)(int)uVar14 * 0xc) =
               *(undefined8 *)pFVar9;
          *(undefined4 *)(local_158.AllocatorInstance.Data + (longlong)(int)uVar14 * 0xc + 8) =
               *(undefined4 *)(pFVar9 + 8);
          pFVar9 = (pTVar17->AllocatorInstance).Data;
          if (((pFVar9 <= (FScriptContainerElement *)&local_178) &&
              ((FScriptContainerElement *)&local_178 <
               pFVar9 + (longlong)(this->DynamicSubMeshToFullMeshIndices).ArrayMax * 4)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar11 = (this->DynamicSubMeshToFullMeshIndices).ArrayNum;
          if (iVar11 == (this->DynamicSubMeshToFullMeshIndices).ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar17->AllocatorInstance,
                                &(this->DynamicSubMeshToFullMeshIndices).ArrayMax);
          }
          (this->DynamicSubMeshToFullMeshIndices).ArrayNum = iVar11 + 1;
          *(uint *)((pTVar17->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_178;
          lVar12 = (longlong)(int)local_178;
          uVar13 = 0;
          if ((int)local_178 < (this->FullMeshToSubMeshIndices).ArrayNum) {
            uVar13 = ~local_178 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar9 = (this_00->AllocatorInstance).Data;
          *(uint *)(pFVar9 + lVar12 * 4) =
               (uVar14 ^ *(uint *)(pFVar9 + lVar12 * 4)) & 0xc0000000 ^ uVar14;
          lVar12 = (longlong)(int)local_178;
          uVar14 = 0;
          if ((int)local_178 < (this->FullMeshToSubMeshIndices).ArrayNum) {
            uVar14 = ~local_178 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar9 = (this_00->AllocatorInstance).Data;
          uVar14 = *(uint *)(pFVar9 + lVar12 * 4) & 0x3fffffff | 0x40000000;
LAB_143d8ecec:
          *(uint *)(pFVar9 + lVar12 * 4) = uVar14;
        }
      }
LAB_143d8ecef:
      this_01 = this->FullMesh;
      local_178 = local_178 + 1;
      uVar15 = (ulonglong)local_178;
    } while ((int)local_178 < (this_01->MElements).ArrayNum);
  }
  pTVar17 = &this->DynamicVertices;
  FTriangleMesh::GetVertexRange(this_01);
  FTriangleMesh::Init(&this->DynamicSubMesh,&local_158,local_148,local_144,false);
  FTriangleMesh::Init(&this->KinematicColliderSubMesh,&local_168,local_148,local_144,false);
  if (((this->DynamicSubMesh).MElements.ArrayNum != (this->DynamicSubMeshToFullMeshIndices).ArrayNum
      ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("DynamicSubMesh.GetNumElements() == DynamicSubMeshToFullMeshIndices.Num()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDTriangleMeshCollisions.cpp"
                               ,0x543,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->KinematicColliderSubMesh).MElements.ArrayNum !=
       (this->KinematicColliderSubMeshToFullMeshIndices).ArrayNum) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("KinematicColliderSubMesh.GetNumElements() == KinematicColliderSubMeshToFullMeshIndices.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDTriangleMeshCollisions.cpp"
                         ,0x544,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FTriangleMesh::GetVertices
            (&this->DynamicSubMesh,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_a8
            );
  uVar14 = local_a8._8_4_ - local_74;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  if ((this->DynamicVertices).ArrayMax < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar14,&pTVar17->AllocatorInstance,(this->DynamicVertices).ArrayNum,
               &(this->DynamicVertices).ArrayMax);
  }
  uVar14 = local_80;
  iStack_120 = 0;
  local_108 = 0;
  uStack_11c = 1;
  uStack_10c = 0;
  if (local_80 != 0) {
    puVar16 = (uint *)(local_a8 + 0x10);
    if (local_88 != (uint *)0x0) {
      puVar16 = local_88;
    }
    uVar13 = *puVar16;
    while (uVar13 == 0) {
      lVar12 = (longlong)iStack_120;
      local_108 = local_108 + 0x20;
      iStack_120 = iStack_120 + 1;
      uStack_10c = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_120)
      goto LAB_143d8ee90;
      uVar13 = puVar16[lVar12 + 1];
    }
    uStack_11c = -uVar13 & uVar13;
    uVar15 = (ulonglong)uStack_11c * 2 + 1;
    lVar12 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_140 = (int)lVar12;
    uStack_10c = local_108 + -1 + local_140;
    if ((int)local_80 < (int)uStack_10c) {
      uStack_10c = local_80;
    }
  }
LAB_143d8ee90:
  iStack_100 = local_a8._8_4_ - local_74;
  local_128 = (longlong *)local_a8;
  local_118 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
  uStack_110 = 0xffffffff;
  TStack_f0.CurrentBitIndex = uStack_10c;
  TStack_f0.UnvisitedBitMask = 0xffffffff;
  uVar13 = local_80 & 0xffffffe0;
  TStack_f0._padding_ = CONCAT44(uStack_11c,iStack_120);
  uStack_104 = local_ac;
  iVar11 = (int)local_80 >> 5;
  TStack_f0._28_4_ = local_ac;
  TStack_f0.BaseBitIndex = local_108;
  uStack_d0 = CONCAT44(uStack_fc,iStack_100);
  bVar8 = (byte)local_80;
  local_f8 = local_128;
  TStack_f0.Array = local_118;
  if (((int)local_80 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar14 != local_80) {
    puVar16 = (uint *)(local_a8 + 0x10);
    if (local_88 != (uint *)0x0) {
      puVar16 = local_88;
    }
    uVar14 = -1 << (bVar8 & 0x1f) & puVar16[iVar11];
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar11;
      uVar13 = uVar13 + 0x20;
      iVar11 = iVar11 + 1;
      uVar14 = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_143d8ef90;
      uVar14 = puVar16[lVar12 + 1];
    }
    uVar15 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_13c = (int)lVar12;
    uVar14 = (uVar13 - 1) + local_13c;
    if ((int)local_80 < (int)uVar14) {
      uVar14 = local_80;
    }
  }
LAB_143d8ef90:
  while( true ) {
    plVar6 = local_f8;
    if ((int)local_f8[1] - *(int *)((longlong)local_f8 + 0x34) != (int)uStack_d0) {
      local_173[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_173);
    }
    if (((TStack_f0.CurrentBitIndex == uVar14) &&
        (TStack_f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10))) &&
       (plVar6 == (longlong *)local_a8)) break;
    iVar11 = *(int *)(*plVar6 + (longlong)TStack_f0.CurrentBitIndex * 0xc);
    local_170[0] = iVar11;
    if ((*(longlong *)&param_1->field_0x8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x56,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar18 = TDynamicParticles<float,3>::InvM
                       (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                        *(int *)&param_1->field_0x10 + iVar11);
    if (0.0 < fVar18) {
      pFVar9 = (pTVar17->AllocatorInstance).Data;
      if (((pFVar9 <= (FScriptContainerElement *)local_170) &&
          ((FScriptContainerElement *)local_170 <
           pFVar9 + (longlong)(this->DynamicVertices).ArrayMax * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar11 = (this->DynamicVertices).ArrayNum;
      if (iVar11 == (this->DynamicVertices).ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar17->AllocatorInstance,&(this->DynamicVertices).ArrayMax);
      }
      (this->DynamicVertices).ArrayNum = iVar11 + 1;
      *(int *)((pTVar17->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_170[0];
    }
    TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
  }
  local_60 = 0;
  if (local_68 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a8);
  if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.AllocatorInstance.Data);
  }
  return;
}

// InitAllDynamic @ 143dae040

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDTriangleMeshCollisions::FTriangleSubMesh::InitAllDynamic(FTriangleSubMesh *this)

{
  int *piVar1;
  TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FTriangleSubMesh::FFullToSubMeshIndex,TSizedDefaultAllocator<32>_>
  *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TVector<int,2> TVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> local_58;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_48;
  
  TVar9 = FTriangleMesh::GetVertexRange(this->FullMesh);
  iVar7 = *(int *)((longlong)TVar9.field0_0x0 + 4);
  TVar9 = FTriangleMesh::GetVertexRange(this->FullMesh);
  iVar3 = *(int *)TVar9.field0_0x0;
  local_48.DataPtr = (TVector<int,3> *)(this->FullMesh->MElements).AllocatorInstance.Data;
  local_48.ArrayNum = (this->FullMesh->MElements).ArrayNum;
  if ((local_48.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FTriangleMesh::Init(&this->DynamicSubMesh,&local_48,iVar3,iVar7,false);
  uVar10 = 0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  FTriangleMesh::Init(&this->KinematicColliderSubMesh,&local_58,0,-1,true);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  pTVar2 = &this->FullMeshToSubMeshIndices;
  iVar7 = (this->FullMeshToSubMeshIndices).ArrayNum;
  piVar1 = &(this->FullMeshToSubMeshIndices).ArrayNum;
  uVar8 = (this->FullMesh->MElements).ArrayNum;
  if (iVar7 < (int)uVar8) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar8 - iVar7,&pTVar2->AllocatorInstance,piVar1,
               &(this->FullMeshToSubMeshIndices).ArrayMax);
  }
  else {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((int)uVar8 < iVar7) {
      uVar12 = iVar7 - uVar8;
      if (((int)(uVar12 | uVar8) < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar12 != 0) {
        pFVar4 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 4;
        iVar7 = (*piVar1 - uVar8) - uVar12;
        if (iVar7 != 0) {
          memmove(pFVar4,pFVar4 + (longlong)(int)uVar12 * 4,(longlong)iVar7 << 2);
        }
        *piVar1 = *piVar1 - uVar12;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&pTVar2->AllocatorInstance,*piVar1,&(this->FullMeshToSubMeshIndices).ArrayMax
                  );
      }
    }
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->DynamicSubMeshToFullMeshIndices,(this->FullMesh->MElements).ArrayNum,Default);
  (this->KinematicColliderSubMeshToFullMeshIndices).ArrayNum = 0;
  if ((this->KinematicColliderSubMeshToFullMeshIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->KinematicColliderSubMeshToFullMeshIndices).AllocatorInstance,0,
               &(this->KinematicColliderSubMeshToFullMeshIndices).ArrayMax);
  }
  (this->DynamicVertices).ArrayNum = 0;
  if ((this->DynamicVertices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->DynamicVertices).AllocatorInstance,0,&(this->DynamicVertices).ArrayMax)
    ;
  }
  uVar11 = uVar10;
  uVar14 = uVar10;
  if (0 < (this->FullMesh->MElements).ArrayNum) {
    do {
      uVar12 = (uint)uVar10;
      uVar13 = ~uVar12 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar12 < *piVar1) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      *(uint *)(pFVar4 + uVar11 * 4) = (uVar12 ^ *(uint *)(pFVar4 + uVar14)) & 0xc0000000 ^ uVar12;
      uVar8 = 0;
      if ((int)uVar12 < *piVar1) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      *(uint *)(pFVar4 + uVar11 * 4) = *(uint *)(pFVar4 + uVar11 * 4) & 0x3fffffff | 0x40000000;
      uVar8 = 0;
      if ((int)uVar12 < (this->DynamicSubMeshToFullMeshIndices).ArrayNum) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(uint *)((this->DynamicSubMeshToFullMeshIndices).AllocatorInstance.Data + uVar11 * 4) =
           uVar12;
      uVar10 = (ulonglong)(uVar12 + 1);
      uVar11 = uVar11 + 1;
      uVar14 = uVar14 + 4;
    } while ((int)(uVar12 + 1) < (this->FullMesh->MElements).ArrayNum);
  }
  return;
}

