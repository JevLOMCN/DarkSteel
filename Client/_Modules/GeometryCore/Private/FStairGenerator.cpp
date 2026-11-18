// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 6

// ~FStairGenerator @ 1435693d0

void __thiscall UE::Geometry::FStairGenerator::~FStairGenerator(FStairGenerator *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FStairGenerator_Geometry_UE__6B_;
  pFVar1 = (this->UVDesc).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NormalDesc).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FaceDesc).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VertexIdsToColumnRow).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(this->VertexIds).AllocatorInstance.Data,
             (this->VertexIds).ArrayNum);
  pFVar1 = (this->VertexIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMeshShapeGenerator::~FMeshShapeGenerator((FMeshShapeGenerator *)this);
  return;
}

// FaceToSide @ 143590ea0

ESide __thiscall UE::Geometry::FStairGenerator::FaceToSide(FStairGenerator *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  ESide EVar3;
  int iVar4;
  
  iVar4 = param_1 * 4;
  if (iVar4 < this->RightStartFaceId) {
    if (this->LeftStartFaceId <= iVar4) goto LAB_143590eca;
    if (this->FrontStartFaceId <= iVar4) goto LAB_143590ee4;
    if (this->TopStartFaceId <= iVar4) goto LAB_143590efe;
    if (this->BackStartFaceId <= iVar4) goto LAB_143590f18;
    if (iVar4 < this->BottomStartFaceId) goto LAB_143590f44;
  }
  else {
    if (iVar4 < this->LeftStartFaceId) {
      return Right;
    }
LAB_143590eca:
    if (iVar4 < this->FrontStartFaceId) {
      return Left;
    }
LAB_143590ee4:
    if (iVar4 < this->TopStartFaceId) {
      return Front;
    }
LAB_143590efe:
    if (iVar4 < this->BackStartFaceId) {
      return Top;
    }
LAB_143590f18:
    if (iVar4 < this->BottomStartFaceId) {
      return Back;
    }
  }
  if (iVar4 < this->LastFaceId) {
    return Bottom;
  }
LAB_143590f44:
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\StairGenerator.cpp"
                     ,0x332,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  return Right;
}

// Generate @ 1435a02e0

FMeshShapeGenerator * __thiscall UE::Geometry::FStairGenerator::Generate(FStairGenerator *this)

{
  FMeshShapeGenerator *pFVar1;
  bool bVar2;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId16,"StairGenerator_Generate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\StairGenerator.cpp"
               ,0x10);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId16);
  }
  (**(code **)(this->_padding_ + 0x10))(this);
  if ((this->StairStyle == Solid) || (this->StairStyle != Floating)) {
    pFVar1 = GenerateSolidStairs(this);
  }
  else {
    pFVar1 = GenerateFloatingStairs(this);
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pFVar1;
}

// GenerateFloatingStairs @ 1435a2280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FMeshShapeGenerator * __thiscall
UE::Geometry::FStairGenerator::GenerateFloatingStairs(FStairGenerator *this)

{
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  ESide EVar19;
  ESide EVar20;
  FMeshShapeGenerator *pFVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint *puVar28;
  ulonglong uVar29;
  int *piVar30;
  ulonglong uVar31;
  uint uVar32;
  uint uVar33;
  longlong lVar34;
  ulonglong uVar35;
  int iVar36;
  FScriptContainerElement *pFVar37;
  undefined8 uVar38;
  ulonglong uVar39;
  code *pcVar40;
  int iVar41;
  uint uVar42;
  uint uVar43;
  int iVar44;
  ulonglong uVar45;
  undefined4 uVar46;
  longlong lVar47;
  uint uVar48;
  float fVar49;
  float fVar50;
  uint local_208;
  uint local_200;
  longlong local_1f8;
  int local_1f0;
  uint local_1ec;
  int local_1e8;
  longlong local_1e0;
  uint local_1d4;
  longlong local_1d0;
  undefined8 local_1c8;
  longlong local_1b8;
  undefined8 local_1a8;
  undefined8 local_188;
  int local_168 [2];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined1 local_130 [8];
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  undefined1 local_e8 [8];
  undefined1 local_e0 [12];
  undefined1 local_d4 [12];
  undefined1 local_c8 [12];
  undefined1 local_bc [12];
  undefined1 local_b0 [12];
  undefined1 local_a4 [12];
  undefined1 local_98 [12];
  undefined1 local_8c [12];
  undefined1 local_80 [12];
  undefined1 local_74 [12];
  undefined1 local_68 [64];
  
  iVar24 = this->NumSteps;
  this->NumVertsPerSide = iVar24 * 4;
  this->NumVerts = iVar24 * 8;
  this->NumQuadsPerSide = iVar24 * 2 + -1;
  this->NumQuads = iVar24 * 8 + -2;
  uVar42 = iVar24 * 0x18 - 4;
  this->NumAttrs = uVar42;
  uVar23 = (ulonglong)uVar42;
  FMeshShapeGenerator::SetBufferSizes
            ((FMeshShapeGenerator *)this,iVar24 * 8,iVar24 * 0x10 + -4,uVar42,uVar42);
  uStack_158 = _UNK_150631e08;
  local_160 = __xmm_00000003000000020000000100000000;
  this_00 = &this->VertexIds;
  iVar24 = this->NumSteps + 1;
  this->LeftSideColumnId = iVar24;
  local_168[0] = 0;
  local_168[1] = 1;
  local_150 = 4;
  local_14c = 5;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (this_00,iVar24 * 2,Default);
  TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>::SetNum
            (&this->VertexIdsToColumnRow,this->NumVerts,Default);
  iVar24 = this->NumSteps;
  piVar30 = local_168;
  uVar42 = 0;
  local_1d0 = 0;
  iVar17 = 0;
  do {
    if (iVar17 == 0) {
      uVar33 = 0;
    }
    else {
      uVar33 = this->LeftSideColumnId;
    }
    local_208 = 0;
    if (0 < iVar24 + 1) {
      lVar34 = (longlong)(int)uVar33 << 4;
      uVar43 = uVar33;
      do {
        local_200 = 4;
        if (local_208 == 0) {
          local_200 = 2;
        }
        else if ((local_208 == 1) || (local_208 == iVar24)) {
          local_200 = 3;
        }
        uVar18 = 0;
        if ((int)uVar43 < (this->VertexIds).ArrayNum) {
          uVar18 = ~uVar43 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar40 = (code *)swi(3);
          pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
          return pFVar21;
        }
        pFVar37 = (this_00->AllocatorInstance).Data + lVar34;
        iVar24 = *(int *)&pFVar37[8].field_0x0;
        pFVar12 = pFVar37 + 8;
        if (iVar24 < (int)local_200) {
          iVar17 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (4,4,local_200 - iVar24,(ForAnyElementType *)pFVar37,(int *)pFVar12,
                              (int *)(pFVar37 + 0xc));
          memset((void *)(*(longlong *)&pFVar37->field_0x0 + (longlong)iVar17 * 4),0,
                 (longlong)(int)(local_200 - iVar24) << 2);
        }
        else if ((int)local_200 < iVar24) {
          iVar24 = iVar24 - local_200;
          if (iVar24 < 0) {
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            if (bVar15) {
              pcVar40 = (code *)swi(3);
              pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
              return pFVar21;
            }
          }
          else if (iVar24 == 0) goto LAB_1435a254e;
          _Dst = (void *)(*(longlong *)&pFVar37->field_0x0 + (ulonglong)local_200 * 4);
          iVar17 = (*(int *)&pFVar12->field_0x0 - iVar24) - local_200;
          if (iVar17 != 0) {
            memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar24 * 4),(longlong)iVar17 << 2);
          }
          *(int *)&pFVar12->field_0x0 = *(int *)&pFVar12->field_0x0 - iVar24;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,(ForAnyElementType *)pFVar37,*(int *)&pFVar12->field_0x0,
                     (int *)(pFVar37 + 0xc));
        }
LAB_1435a254e:
        uVar32 = 0;
        uVar18 = uVar33 + local_208;
        local_1b8 = 0;
        local_1c8 = local_1d0 * 8;
        lVar47 = local_1d0 * 0x18;
        do {
          uVar23 = (ulonglong)uVar32;
          puVar22 = (undefined8 *)
                    (**(code **)(this->_padding_ + 0x18))(this,local_68,*piVar30,local_208,uVar23);
          uVar13 = *puVar22;
          uVar14 = puVar22[1];
          uVar38 = puVar22[2];
          uVar26 = 0;
          if ((int)uVar42 < (int)this->_padding_) {
            uVar26 = ~uVar42 >> 0x1f;
          }
          if (uVar26 == 0) {
            uVar23 = (ulonglong)(int)uVar42;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar15) {
              pcVar40 = (code *)swi(3);
              pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
              return pFVar21;
            }
          }
          lVar11 = this->_padding_;
          puVar22 = (undefined8 *)(lVar11 + lVar47);
          *puVar22 = uVar13;
          puVar22[1] = uVar14;
          *(undefined8 *)(lVar11 + 0x10 + lVar47) = uVar38;
          uVar26 = 0;
          if ((int)uVar18 < (this->VertexIds).ArrayNum) {
            uVar26 = ~uVar18 >> 0x1f;
          }
          if (uVar26 == 0) {
            uVar23 = (ulonglong)(int)uVar18;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar15) {
              pcVar40 = (code *)swi(3);
              pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
              return pFVar21;
            }
          }
          pFVar12 = (this_00->AllocatorInstance).Data;
          uVar26 = 0;
          if ((int)uVar32 < *(int *)(pFVar12 + lVar34 + 8)) {
            uVar26 = ~uVar32 >> 0x1f;
          }
          if (uVar26 == 0) {
            uVar23 = (ulonglong)(int)uVar32;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar15) {
              pcVar40 = (code *)swi(3);
              pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
              return pFVar21;
            }
          }
          uVar38 = CONCAT44(uVar32,uVar18);
          *(uint *)(local_1b8 + *(longlong *)(pFVar12 + lVar34)) = uVar42;
          uVar26 = 0;
          if ((int)uVar42 < (this->VertexIdsToColumnRow).ArrayNum) {
            uVar26 = ~uVar42 >> 0x1f;
          }
          if (uVar26 == 0) {
            uVar23 = (ulonglong)(int)uVar42;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar15) {
              pcVar40 = (code *)swi(3);
              pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
              return pFVar21;
            }
          }
          uVar42 = uVar42 + 1;
          lVar47 = lVar47 + 0x18;
          local_1d0 = local_1d0 + 1;
          uVar32 = uVar32 + 1;
          local_1b8 = local_1b8 + 4;
          *(undefined8 *)((this->VertexIdsToColumnRow).AllocatorInstance.Data + local_1c8) = uVar38;
          local_1c8 = local_1c8 + 8;
        } while ((int)uVar32 < (int)local_200);
        local_208 = local_208 + 1;
        iVar24 = this->NumSteps;
        lVar34 = lVar34 + 0x10;
        uVar43 = uVar43 + 1;
      } while ((int)local_208 < iVar24 + 1);
    }
    piVar30 = piVar30 + 1;
    if (piVar30 == (int *)&local_160) break;
    iVar17 = *piVar30;
  } while( true );
  pTVar1 = &this->FaceDesc;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(pTVar1,this->NumQuads << 2,Default);
  puVar28 = (uint *)&local_160;
  uVar42 = 0;
  do {
    uVar33 = *puVar28;
    if (uVar33 < 6) {
      lVar34 = (longlong)(int)uVar42;
      switch(uVar33) {
      default:
        if (uVar33 == 0) {
          uVar33 = 0;
          this->RightStartFaceId = uVar42;
        }
        else {
          uVar33 = this->LeftSideColumnId;
          this->LeftStartFaceId = uVar42;
        }
        if (0 < this->NumSteps) {
          local_1d0 = 0;
          lVar47 = (longlong)(int)uVar33 << 4;
          uVar43 = uVar33;
          do {
            uVar18 = ~uVar43 >> 0x1f;
            if (local_1d0 < 2) {
              uVar32 = 0;
              local_1e0 = 0;
              while( true ) {
                uVar26 = 0;
                if ((int)uVar43 < (this->VertexIds).ArrayNum) {
                  uVar26 = uVar18;
                }
                if (uVar26 == 0) {
                  uVar23 = (ulonglong)(int)uVar43;
                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar15) {
                    pcVar40 = (code *)swi(3);
                    pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                    return pFVar21;
                  }
                }
                if (*(int *)((this_00->AllocatorInstance).Data + lVar47 + 8) + -1 <= (int)uVar32)
                break;
                uVar26 = 0;
                if ((int)uVar43 < (this->VertexIds).ArrayNum) {
                  uVar26 = uVar18;
                }
                if (uVar26 == 0) {
                  uVar23 = (ulonglong)(int)uVar43;
                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar15) {
                    pcVar40 = (code *)swi(3);
                    pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                    return pFVar21;
                  }
                }
                pFVar12 = (this_00->AllocatorInstance).Data;
                uVar26 = 0;
                if ((int)uVar32 < *(int *)(pFVar12 + lVar47 + 8)) {
                  uVar26 = ~uVar32 >> 0x1f;
                }
                if (uVar26 == 0) {
                  uVar23 = (ulonglong)(int)uVar32;
                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar15) {
                    pcVar40 = (code *)swi(3);
                    pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                    return pFVar21;
                  }
                }
                uVar8 = *(undefined4 *)(local_1e0 + *(longlong *)(pFVar12 + lVar47));
                uVar26 = 0;
                if ((int)uVar42 < (this->FaceDesc).ArrayNum) {
                  uVar26 = ~uVar42 >> 0x1f;
                }
                if (uVar26 == 0) {
                  uVar23 = (ulonglong)(int)uVar42;
                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar15) {
                    pcVar40 = (code *)swi(3);
                    pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                    return pFVar21;
                  }
                }
                uVar48 = uVar42 + 1;
                *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar34 * 4) = uVar8;
                uVar26 = 0;
                if ((int)uVar43 < (this->VertexIds).ArrayNum) {
                  uVar26 = uVar18;
                }
                if (uVar26 == 0) {
                  uVar23 = (ulonglong)(int)uVar43;
                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar15) {
                    pcVar40 = (code *)swi(3);
                    pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                    return pFVar21;
                  }
                }
                pFVar12 = (this_00->AllocatorInstance).Data;
                uVar25 = uVar32 + 1;
                uVar26 = 0;
                if ((int)uVar25 < *(int *)(pFVar12 + lVar47 + 8)) {
                  uVar26 = ~uVar25 >> 0x1f;
                }
                if (uVar26 == 0) {
                  uVar23 = (ulonglong)(int)uVar25;
                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar15) {
                    pcVar40 = (code *)swi(3);
                    pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                    return pFVar21;
                  }
                }
                uVar8 = *(undefined4 *)(*(longlong *)(pFVar12 + lVar47) + 4 + local_1e0);
                uVar26 = 0;
                if ((int)uVar48 < (this->FaceDesc).ArrayNum) {
                  uVar26 = ~uVar48 >> 0x1f;
                }
                if (uVar26 == 0) {
                  uVar23 = (ulonglong)(int)uVar48;
                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar15) {
                    pcVar40 = (code *)swi(3);
                    pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                    return pFVar21;
                  }
                }
                uVar48 = uVar43 + 1;
                uVar25 = uVar42 + 2;
                *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar34 * 4 + 4) = uVar8;
                uVar26 = 0;
                if ((int)uVar48 < (this->VertexIds).ArrayNum) {
                  uVar26 = ~uVar48 >> 0x1f;
                }
                if (uVar26 == 0) {
                  uVar23 = (ulonglong)(int)uVar48;
                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar15) {
                    pcVar40 = (code *)swi(3);
                    pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                    return pFVar21;
                  }
                }
                pFVar12 = (this_00->AllocatorInstance).Data;
                uVar26 = 0;
                if ((int)(uVar32 + 1) < *(int *)(pFVar12 + lVar47 + 0x18)) {
                  uVar26 = ~(uVar32 + 1) >> 0x1f;
                }
                if (uVar26 == 0) {
                  uVar23 = (ulonglong)(int)(uVar32 + 1);
                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar15) {
                    pcVar40 = (code *)swi(3);
                    pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                    return pFVar21;
                  }
                }
                uVar8 = *(undefined4 *)(*(longlong *)(pFVar12 + lVar47 + 0x10) + 4 + local_1e0);
                uVar26 = 0;
                if ((int)uVar25 < (this->FaceDesc).ArrayNum) {
                  uVar26 = ~uVar25 >> 0x1f;
                }
                if (uVar26 == 0) {
                  uVar23 = (ulonglong)(int)uVar25;
                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar15) {
                    pcVar40 = (code *)swi(3);
                    pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                    return pFVar21;
                  }
                }
                uVar48 = uVar42 + 3;
                *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar34 * 4 + 8) = uVar8;
                uVar26 = 0;
                if ((int)(uVar43 + 1) < (this->VertexIds).ArrayNum) {
                  uVar26 = ~(uVar43 + 1) >> 0x1f;
                }
                if (uVar26 == 0) {
                  uVar23 = (ulonglong)(int)(uVar43 + 1);
                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar15) {
                    pcVar40 = (code *)swi(3);
                    pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                    return pFVar21;
                  }
                }
                pFVar12 = (this_00->AllocatorInstance).Data;
                uVar26 = 0;
                if ((int)uVar32 < *(int *)(pFVar12 + lVar47 + 0x18)) {
                  uVar26 = ~uVar32 >> 0x1f;
                }
                if (uVar26 == 0) {
                  uVar23 = (ulonglong)(int)uVar32;
                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar15) {
                    pcVar40 = (code *)swi(3);
                    pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                    return pFVar21;
                  }
                }
                uVar8 = *(undefined4 *)(local_1e0 + *(longlong *)(pFVar12 + lVar47 + 0x10));
                uVar26 = 0;
                if ((int)uVar48 < (this->FaceDesc).ArrayNum) {
                  uVar26 = ~uVar48 >> 0x1f;
                }
                if (uVar26 == 0) {
                  uVar23 = (ulonglong)(int)uVar48;
                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar15) {
                    pcVar40 = (code *)swi(3);
                    pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                    return pFVar21;
                  }
                }
                uVar42 = uVar42 + 4;
                uVar32 = uVar32 + 1;
                local_1e0 = local_1e0 + 4;
                *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar34 * 4 + 0xc) = uVar8;
                lVar34 = lVar34 + 4;
              }
            }
            else {
              uVar32 = 1;
              local_1e0 = 4;
              while( true ) {
                uVar26 = 0;
                if ((int)uVar43 < (this->VertexIds).ArrayNum) {
                  uVar26 = uVar18;
                }
                if (uVar26 == 0) {
                  uVar23 = (ulonglong)(int)uVar43;
                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar15) {
                    pcVar40 = (code *)swi(3);
                    pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                    return pFVar21;
                  }
                }
                if (*(int *)((this_00->AllocatorInstance).Data + lVar47 + 8) + -1 <= (int)uVar32)
                break;
                uVar26 = 0;
                if ((int)uVar43 < (this->VertexIds).ArrayNum) {
                  uVar26 = uVar18;
                }
                if (uVar26 == 0) {
                  uVar23 = (ulonglong)(int)uVar43;
                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar15) {
                    pcVar40 = (code *)swi(3);
                    pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                    return pFVar21;
                  }
                }
                pFVar12 = (this_00->AllocatorInstance).Data;
                uVar26 = 0;
                if ((int)uVar32 < *(int *)(pFVar12 + lVar47 + 8)) {
                  uVar26 = ~uVar32 >> 0x1f;
                }
                if (uVar26 == 0) {
                  uVar23 = (ulonglong)(int)uVar32;
                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar15) {
                    pcVar40 = (code *)swi(3);
                    pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                    return pFVar21;
                  }
                }
                uVar8 = *(undefined4 *)(local_1e0 + *(longlong *)(pFVar12 + lVar47));
                uVar26 = 0;
                if ((int)uVar42 < (this->FaceDesc).ArrayNum) {
                  uVar26 = ~uVar42 >> 0x1f;
                }
                if (uVar26 == 0) {
                  uVar23 = (ulonglong)(int)uVar42;
                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar15) {
                    pcVar40 = (code *)swi(3);
                    pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                    return pFVar21;
                  }
                }
                uVar48 = uVar42 + 1;
                *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar34 * 4) = uVar8;
                uVar26 = 0;
                if ((int)uVar43 < (this->VertexIds).ArrayNum) {
                  uVar26 = uVar18;
                }
                if (uVar26 == 0) {
                  uVar23 = (ulonglong)(int)uVar43;
                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar15) {
                    pcVar40 = (code *)swi(3);
                    pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                    return pFVar21;
                  }
                }
                pFVar12 = (this_00->AllocatorInstance).Data;
                uVar25 = uVar32 + 1;
                uVar26 = 0;
                if ((int)uVar25 < *(int *)(pFVar12 + lVar47 + 8)) {
                  uVar26 = ~uVar25 >> 0x1f;
                }
                if (uVar26 == 0) {
                  uVar23 = (ulonglong)(int)uVar25;
                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar15) {
                    pcVar40 = (code *)swi(3);
                    pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                    return pFVar21;
                  }
                }
                uVar8 = *(undefined4 *)(local_1e0 + 4 + *(longlong *)(pFVar12 + lVar47));
                uVar26 = 0;
                if ((int)uVar48 < (this->FaceDesc).ArrayNum) {
                  uVar26 = ~uVar48 >> 0x1f;
                }
                if (uVar26 == 0) {
                  uVar23 = (ulonglong)(int)uVar48;
                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar15) {
                    pcVar40 = (code *)swi(3);
                    pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                    return pFVar21;
                  }
                }
                uVar48 = uVar43 + 1;
                uVar25 = uVar42 + 2;
                *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar34 * 4 + 4) = uVar8;
                uVar26 = 0;
                if ((int)uVar48 < (this->VertexIds).ArrayNum) {
                  uVar26 = ~uVar48 >> 0x1f;
                }
                if (uVar26 == 0) {
                  uVar23 = (ulonglong)(int)uVar48;
                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar15) {
                    pcVar40 = (code *)swi(3);
                    pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                    return pFVar21;
                  }
                }
                pFVar12 = (this_00->AllocatorInstance).Data;
                uVar26 = 0;
                if ((int)uVar32 < *(int *)(pFVar12 + lVar47 + 0x18)) {
                  uVar26 = ~uVar32 >> 0x1f;
                }
                if (uVar26 == 0) {
                  uVar23 = (ulonglong)(int)uVar32;
                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar15) {
                    pcVar40 = (code *)swi(3);
                    pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                    return pFVar21;
                  }
                }
                uVar8 = *(undefined4 *)(local_1e0 + *(longlong *)(pFVar12 + lVar47 + 0x10));
                uVar26 = 0;
                if ((int)uVar25 < (this->FaceDesc).ArrayNum) {
                  uVar26 = ~uVar25 >> 0x1f;
                }
                if (uVar26 == 0) {
                  uVar23 = (ulonglong)(int)uVar25;
                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar15) {
                    pcVar40 = (code *)swi(3);
                    pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                    return pFVar21;
                  }
                }
                uVar48 = uVar42 + 3;
                *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar34 * 4 + 8) = uVar8;
                uVar26 = 0;
                if ((int)(uVar43 + 1) < (this->VertexIds).ArrayNum) {
                  uVar26 = ~(uVar43 + 1) >> 0x1f;
                }
                if (uVar26 == 0) {
                  uVar23 = (ulonglong)(int)(uVar43 + 1);
                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar15) {
                    pcVar40 = (code *)swi(3);
                    pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                    return pFVar21;
                  }
                }
                pFVar12 = (this_00->AllocatorInstance).Data;
                uVar26 = 0;
                if ((int)(uVar32 - 1) < *(int *)(pFVar12 + lVar47 + 0x18)) {
                  uVar26 = -uVar32 >> 0x1f;
                }
                if (uVar26 == 0) {
                  uVar23 = (ulonglong)(int)(uVar32 - 1);
                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar15) {
                    pcVar40 = (code *)swi(3);
                    pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                    return pFVar21;
                  }
                }
                uVar8 = *(undefined4 *)(*(longlong *)(pFVar12 + lVar47 + 0x10) + -4 + local_1e0);
                uVar26 = 0;
                if ((int)uVar48 < (this->FaceDesc).ArrayNum) {
                  uVar26 = ~uVar48 >> 0x1f;
                }
                if (uVar26 == 0) {
                  uVar23 = (ulonglong)(int)uVar48;
                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar15) {
                    pcVar40 = (code *)swi(3);
                    pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                    return pFVar21;
                  }
                }
                uVar42 = uVar42 + 4;
                uVar32 = uVar32 + 1;
                local_1e0 = local_1e0 + 4;
                *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar34 * 4 + 0xc) = uVar8;
                lVar34 = lVar34 + 4;
              }
            }
            uVar43 = uVar43 + 1;
            local_1d0 = local_1d0 + 1;
            lVar47 = lVar47 + 0x10;
          } while ((int)(uVar43 - uVar33) < this->NumSteps);
        }
        break;
      case 2:
        uVar33 = 0;
        this->FrontStartFaceId = uVar42;
        if (0 < this->NumSteps) {
          local_1e0 = 0;
          do {
            uVar43 = 0;
            if ((int)uVar33 < (this->VertexIds).ArrayNum) {
              uVar43 = ~uVar33 >> 0x1f;
            }
            if (uVar43 == 0) {
              uVar23 = (ulonglong)(int)uVar33;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            uVar18 = this->LeftSideColumnId + uVar33;
            iVar24 = *(int *)((this_00->AllocatorInstance).Data + local_1e0 + 8);
            uVar32 = iVar24 - 1;
            uVar43 = 0;
            if ((int)uVar18 < (this->VertexIds).ArrayNum) {
              uVar43 = ~uVar18 >> 0x1f;
            }
            if (uVar43 == 0) {
              uVar23 = (ulonglong)(int)uVar18;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            pFVar12 = (this_00->AllocatorInstance).Data;
            uVar43 = iVar24 - 2;
            uVar26 = 0;
            if ((int)uVar43 < *(int *)(pFVar12 + (longlong)(int)uVar18 * 0x10 + 8)) {
              uVar26 = ~uVar43 >> 0x1f;
            }
            if (uVar26 == 0) {
              uVar23 = (ulonglong)(int)uVar43;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            uVar8 = *(undefined4 *)
                     (*(longlong *)(pFVar12 + (longlong)(int)uVar18 * 0x10) +
                     (longlong)(iVar24 + -2) * 4);
            uVar43 = 0;
            if ((int)uVar42 < (this->FaceDesc).ArrayNum) {
              uVar43 = ~uVar42 >> 0x1f;
            }
            if (uVar43 == 0) {
              uVar23 = (ulonglong)(int)uVar42;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            uVar18 = uVar42 + 1;
            *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar34 * 4) = uVar8;
            uVar26 = this->LeftSideColumnId + uVar33;
            uVar43 = 0;
            if ((int)uVar26 < (this->VertexIds).ArrayNum) {
              uVar43 = ~uVar26 >> 0x1f;
            }
            if (uVar43 == 0) {
              uVar23 = (ulonglong)(int)uVar26;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            pFVar12 = (this_00->AllocatorInstance).Data;
            uVar43 = 0;
            if ((int)uVar32 < *(int *)(pFVar12 + (longlong)(int)uVar26 * 0x10 + 8)) {
              uVar43 = ~uVar32 >> 0x1f;
            }
            if (uVar43 == 0) {
              uVar23 = (ulonglong)(int)uVar32;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            uVar29 = (ulonglong)(int)uVar18;
            uVar8 = *(undefined4 *)
                     (*(longlong *)(pFVar12 + (longlong)(int)uVar26 * 0x10) +
                     (longlong)(int)uVar32 * 4);
            uVar43 = 0;
            if ((int)uVar18 < (this->FaceDesc).ArrayNum) {
              uVar43 = ~uVar18 >> 0x1f;
            }
            if ((uVar43 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               uVar23 = uVar29, bVar15)) {
              pcVar40 = (code *)swi(3);
              pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
              return pFVar21;
            }
            uVar18 = uVar42 + 2;
            *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar34 * 4 + 4) = uVar8;
            uVar43 = 0;
            if ((int)uVar33 < (this->VertexIds).ArrayNum) {
              uVar43 = ~uVar33 >> 0x1f;
            }
            if (uVar43 == 0) {
              uVar23 = (ulonglong)(int)uVar33;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            pFVar12 = (this_00->AllocatorInstance).Data;
            uVar43 = 0;
            if ((int)uVar32 < *(int *)(pFVar12 + local_1e0 + 8)) {
              uVar43 = ~uVar32 >> 0x1f;
            }
            if (uVar43 == 0) {
              uVar23 = (ulonglong)(int)uVar32;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            uVar8 = *(undefined4 *)(*(longlong *)(pFVar12 + local_1e0) + (longlong)(int)uVar32 * 4);
            uVar43 = 0;
            if ((int)uVar18 < (this->FaceDesc).ArrayNum) {
              uVar43 = ~uVar18 >> 0x1f;
            }
            if (uVar43 == 0) {
              uVar23 = (ulonglong)(int)uVar18;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            uVar18 = uVar42 + 3;
            *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar34 * 4 + 8) = uVar8;
            uVar43 = 0;
            if ((int)uVar33 < (this->VertexIds).ArrayNum) {
              uVar43 = ~uVar33 >> 0x1f;
            }
            if (uVar43 == 0) {
              uVar23 = (ulonglong)(int)uVar33;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            pFVar12 = (this_00->AllocatorInstance).Data;
            uVar43 = 0;
            if (iVar24 + -2 < *(int *)(pFVar12 + local_1e0 + 8)) {
              uVar43 = -uVar32 >> 0x1f;
            }
            if (uVar43 == 0) {
              uVar23 = (longlong)(int)uVar32 - 1;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            uVar8 = *(undefined4 *)
                     (*(longlong *)(pFVar12 + local_1e0) + -4 + (longlong)(int)uVar32 * 4);
            uVar43 = 0;
            if ((int)uVar18 < (this->FaceDesc).ArrayNum) {
              uVar43 = ~uVar18 >> 0x1f;
            }
            if (uVar43 == 0) {
              uVar23 = (ulonglong)(int)uVar18;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            local_1e0 = local_1e0 + 0x10;
            uVar42 = uVar42 + 4;
            uVar33 = uVar33 + 1;
            *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar34 * 4 + 0xc) = uVar8;
            lVar34 = lVar34 + 4;
          } while ((int)uVar33 < this->NumSteps);
        }
        break;
      case 3:
        uVar33 = 0;
        this->TopStartFaceId = uVar42;
        if (0 < this->NumSteps) {
          local_1d0 = 0x10;
          local_200 = 1;
          do {
            uVar43 = 0;
            if ((int)uVar33 < (this->VertexIds).ArrayNum) {
              uVar43 = ~uVar33 >> 0x1f;
            }
            if (uVar43 == 0) {
              uVar23 = (ulonglong)(int)uVar33;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            uVar18 = uVar33 + 1;
            iVar24 = (this->VertexIds).ArrayNum;
            uVar43 = *(int *)((this_00->AllocatorInstance).Data + local_1d0 + -8) - 1;
            if ((int)uVar33 < this->NumSteps + -1) {
              uVar32 = 0;
              if ((int)local_200 < iVar24) {
                uVar32 = ~uVar18 >> 0x1f;
              }
              if (uVar32 == 0) {
                uVar23 = (ulonglong)(int)uVar18;
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar15) {
                  pcVar40 = (code *)swi(3);
                  pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                  return pFVar21;
                }
              }
              uVar18 = *(int *)((this->VertexIds).AllocatorInstance.Data + local_1d0 + 8) - 2;
            }
            else {
              uVar32 = 0;
              if ((int)uVar18 < iVar24) {
                uVar32 = ~uVar18 >> 0x1f;
              }
              if (uVar32 == 0) {
                uVar23 = (ulonglong)(int)uVar18;
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar15) {
                  pcVar40 = (code *)swi(3);
                  pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                  return pFVar21;
                }
              }
              uVar18 = *(int *)((this->VertexIds).AllocatorInstance.Data + local_1d0 + 8) - 1;
            }
            uVar26 = this->LeftSideColumnId + uVar33;
            uVar32 = 0;
            if ((int)uVar26 < (this->VertexIds).ArrayNum) {
              uVar32 = ~uVar26 >> 0x1f;
            }
            if (uVar32 == 0) {
              uVar23 = (ulonglong)(int)uVar26;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            pFVar12 = (this_00->AllocatorInstance).Data;
            uVar29 = (ulonglong)(int)uVar43;
            uVar32 = 0;
            if ((int)uVar43 < *(int *)(pFVar12 + (longlong)(int)uVar26 * 0x10 + 8)) {
              uVar32 = ~uVar43 >> 0x1f;
            }
            if ((uVar32 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               uVar23 = uVar29, bVar15)) {
              pcVar40 = (code *)swi(3);
              pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
              return pFVar21;
            }
            uVar8 = *(undefined4 *)
                     (*(longlong *)(pFVar12 + (longlong)(int)uVar26 * 0x10) +
                     (longlong)(int)uVar43 * 4);
            uVar32 = 0;
            if ((int)uVar42 < (this->FaceDesc).ArrayNum) {
              uVar32 = ~uVar42 >> 0x1f;
            }
            if (uVar32 == 0) {
              uVar23 = (ulonglong)(int)uVar42;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            uVar26 = uVar42 + 1;
            *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar34 * 4) = uVar8;
            uVar48 = this->LeftSideColumnId + 1 + uVar33;
            uVar32 = 0;
            if ((int)uVar48 < (this->VertexIds).ArrayNum) {
              uVar32 = ~uVar48 >> 0x1f;
            }
            if (uVar32 == 0) {
              uVar23 = (ulonglong)(int)uVar48;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            pFVar12 = (this_00->AllocatorInstance).Data;
            uVar32 = 0;
            if ((int)uVar18 < *(int *)(pFVar12 + (longlong)(int)uVar48 * 0x10 + 8)) {
              uVar32 = ~uVar18 >> 0x1f;
            }
            if (uVar32 == 0) {
              uVar23 = (ulonglong)(int)uVar18;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            uVar29 = (ulonglong)(int)uVar26;
            uVar8 = *(undefined4 *)
                     (*(longlong *)(pFVar12 + (longlong)(int)uVar48 * 0x10) +
                     (longlong)(int)uVar18 * 4);
            uVar32 = 0;
            if ((int)uVar26 < (this->FaceDesc).ArrayNum) {
              uVar32 = ~uVar26 >> 0x1f;
            }
            if ((uVar32 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               uVar23 = uVar29, bVar15)) {
              pcVar40 = (code *)swi(3);
              pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
              return pFVar21;
            }
            uVar26 = uVar42 + 2;
            *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar34 * 4 + 4) = uVar8;
            uVar32 = 0;
            if ((int)(uVar33 + 1) < (this->VertexIds).ArrayNum) {
              uVar32 = ~(uVar33 + 1) >> 0x1f;
            }
            if (uVar32 == 0) {
              uVar23 = (ulonglong)(int)(uVar33 + 1);
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            pFVar12 = (this_00->AllocatorInstance).Data;
            uVar32 = 0;
            if ((int)uVar18 < *(int *)(pFVar12 + local_1d0 + 8)) {
              uVar32 = ~uVar18 >> 0x1f;
            }
            if (uVar32 == 0) {
              uVar23 = (ulonglong)(int)uVar18;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            uVar8 = *(undefined4 *)(*(longlong *)(pFVar12 + local_1d0) + (longlong)(int)uVar18 * 4);
            uVar18 = 0;
            if ((int)uVar26 < (this->FaceDesc).ArrayNum) {
              uVar18 = ~uVar26 >> 0x1f;
            }
            if (uVar18 == 0) {
              uVar23 = (ulonglong)(int)uVar26;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            uVar32 = uVar42 + 3;
            *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar34 * 4 + 8) = uVar8;
            uVar18 = 0;
            if ((int)uVar33 < (this->VertexIds).ArrayNum) {
              uVar18 = ~uVar33 >> 0x1f;
            }
            if (uVar18 == 0) {
              uVar23 = (ulonglong)(int)uVar33;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            pFVar12 = (this_00->AllocatorInstance).Data;
            uVar29 = (ulonglong)(int)uVar43;
            uVar18 = 0;
            if ((int)uVar43 < *(int *)(pFVar12 + local_1d0 + -8)) {
              uVar18 = ~uVar43 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               uVar23 = uVar29, bVar15)) {
              pcVar40 = (code *)swi(3);
              pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
              return pFVar21;
            }
            uVar8 = *(undefined4 *)
                     (*(longlong *)(pFVar12 + local_1d0 + -0x10) + (longlong)(int)uVar43 * 4);
            uVar43 = 0;
            if ((int)uVar32 < (this->FaceDesc).ArrayNum) {
              uVar43 = ~uVar32 >> 0x1f;
            }
            if (uVar43 == 0) {
              uVar23 = (ulonglong)(int)uVar32;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            local_1d0 = local_1d0 + 0x10;
            uVar42 = uVar42 + 4;
            uVar33 = uVar33 + 1;
            *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar34 * 4 + 0xc) = uVar8;
            lVar34 = lVar34 + 4;
            local_200 = local_200 + 1;
          } while ((int)uVar33 < this->NumSteps);
        }
        break;
      case 4:
        uVar33 = this->NumSteps;
        iVar24 = 0;
        this->BackStartFaceId = uVar42;
        if (0 < (int)uVar33) {
          do {
            iVar17 = uVar33 - 1;
            uVar43 = iVar24 + 2U;
            if ((int)uVar33 <= (int)(iVar24 + 2U)) {
              uVar43 = uVar33;
            }
            uVar33 = 0;
            if ((int)uVar43 < (this->VertexIds).ArrayNum) {
              uVar33 = ~uVar43 >> 0x1f;
            }
            if (uVar33 == 0) {
              uVar23 = (ulonglong)(int)uVar43;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            pFVar12 = (this_00->AllocatorInstance).Data;
            if (*(int *)(pFVar12 + (longlong)(int)uVar43 * 0x10 + 8) <=
                (int)(uint)(iVar17 <= iVar24)) {
              uVar23 = (ulonglong)(iVar17 <= iVar24);
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            lVar47 = 0;
            if (iVar17 <= iVar24) {
              lVar47 = 4;
            }
            uVar8 = *(undefined4 *)(lVar47 + *(longlong *)(pFVar12 + (longlong)(int)uVar43 * 0x10));
            uVar33 = 0;
            if ((int)uVar42 < (this->FaceDesc).ArrayNum) {
              uVar33 = ~uVar42 >> 0x1f;
            }
            if (uVar33 == 0) {
              uVar23 = (ulonglong)(int)uVar42;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar34 * 4) = uVar8;
            uVar33 = uVar42 + 1;
            uVar18 = 0;
            if ((int)uVar43 < (this->VertexIds).ArrayNum) {
              uVar18 = ~uVar43 >> 0x1f;
            }
            if (uVar18 == 0) {
              uVar23 = (ulonglong)(int)uVar43;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            pFVar12 = (this_00->AllocatorInstance).Data;
            uVar18 = (iVar17 <= iVar24) + 1;
            uVar29 = (ulonglong)uVar18;
            if ((*(int *)(pFVar12 + (longlong)(int)uVar43 * 0x10 + 8) <= (int)uVar18) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               uVar23 = uVar29, bVar15)) {
              pcVar40 = (code *)swi(3);
              pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
              return pFVar21;
            }
            lVar47 = 4;
            if (iVar17 <= iVar24) {
              lVar47 = 8;
            }
            uVar29 = (ulonglong)(int)uVar33;
            uVar8 = *(undefined4 *)(lVar47 + *(longlong *)(pFVar12 + (longlong)(int)uVar43 * 0x10));
            uVar18 = 0;
            if ((int)uVar33 < (this->FaceDesc).ArrayNum) {
              uVar18 = ~uVar33 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               uVar23 = uVar29, bVar15)) {
              pcVar40 = (code *)swi(3);
              pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
              return pFVar21;
            }
            *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar34 * 4 + 4) = uVar8;
            uVar18 = uVar42 + 2;
            uVar32 = this->LeftSideColumnId + uVar43;
            uVar33 = 0;
            if ((int)uVar32 < (this->VertexIds).ArrayNum) {
              uVar33 = ~uVar32 >> 0x1f;
            }
            if (uVar33 == 0) {
              uVar23 = (ulonglong)(int)uVar32;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            pFVar12 = (this_00->AllocatorInstance).Data;
            if (*(int *)(pFVar12 + (longlong)(int)uVar32 * 0x10 + 8) <=
                (int)((iVar17 <= iVar24) + 1)) {
              uVar23 = (ulonglong)(iVar17 <= iVar24) + 1;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            lVar47 = 4;
            if (iVar17 <= iVar24) {
              lVar47 = 8;
            }
            uVar29 = (ulonglong)(int)uVar18;
            uVar8 = *(undefined4 *)(lVar47 + *(longlong *)(pFVar12 + (longlong)(int)uVar32 * 0x10));
            uVar33 = 0;
            if ((int)uVar18 < (this->FaceDesc).ArrayNum) {
              uVar33 = ~uVar18 >> 0x1f;
            }
            if ((uVar33 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               uVar23 = uVar29, bVar15)) {
              pcVar40 = (code *)swi(3);
              pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
              return pFVar21;
            }
            *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar34 * 4 + 8) = uVar8;
            uVar43 = uVar43 + this->LeftSideColumnId;
            uVar33 = 0;
            if ((int)uVar43 < (this->VertexIds).ArrayNum) {
              uVar33 = ~uVar43 >> 0x1f;
            }
            if (uVar33 == 0) {
              uVar23 = (ulonglong)(int)uVar43;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            pFVar12 = (this_00->AllocatorInstance).Data;
            if (*(int *)(pFVar12 + (longlong)(int)uVar43 * 0x10 + 8) <=
                (int)(uint)(iVar17 <= iVar24)) {
              uVar23 = (ulonglong)(iVar17 <= iVar24);
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            lVar47 = 0;
            if (iVar17 <= iVar24) {
              lVar47 = 4;
            }
            uVar18 = uVar42 + 3;
            uVar8 = *(undefined4 *)(lVar47 + *(longlong *)(pFVar12 + (longlong)(int)uVar43 * 0x10));
            uVar33 = 0;
            if ((int)uVar18 < (this->FaceDesc).ArrayNum) {
              uVar33 = ~uVar18 >> 0x1f;
            }
            if (uVar33 == 0) {
              uVar23 = (ulonglong)(int)uVar18;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            uVar42 = uVar42 + 4;
            iVar24 = iVar24 + 1;
            *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar34 * 4 + 0xc) = uVar8;
            lVar34 = lVar34 + 4;
            uVar33 = this->NumSteps;
          } while (iVar24 < (int)uVar33);
        }
        break;
      case 5:
        uVar33 = 0;
        this->BottomStartFaceId = uVar42;
        if (0 < this->NumSteps) {
          local_1d0 = 0;
          do {
            uVar43 = 0;
            if ((int)uVar33 < (this->VertexIds).ArrayNum) {
              uVar43 = ~uVar33 >> 0x1f;
            }
            if (uVar43 == 0) {
              uVar23 = (ulonglong)(int)uVar33;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            pFVar12 = (this_00->AllocatorInstance).Data;
            if (*(int *)(pFVar12 + local_1d0 + 8) <= (int)(uint)(1 < (int)uVar33)) {
              uVar23 = (ulonglong)(1 < (int)uVar33);
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            lVar47 = 0;
            if (1 < (int)uVar33) {
              lVar47 = 4;
            }
            uVar8 = *(undefined4 *)(lVar47 + *(longlong *)(pFVar12 + local_1d0));
            uVar43 = 0;
            if ((int)uVar42 < (this->FaceDesc).ArrayNum) {
              uVar43 = ~uVar42 >> 0x1f;
            }
            if (uVar43 == 0) {
              uVar23 = (ulonglong)(int)uVar42;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            uVar18 = uVar33 + 1;
            uVar32 = uVar42 + 1;
            *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar34 * 4) = uVar8;
            uVar43 = 0;
            if ((int)uVar18 < (this->VertexIds).ArrayNum) {
              uVar43 = ~uVar18 >> 0x1f;
            }
            if (uVar43 == 0) {
              uVar23 = (ulonglong)(int)uVar18;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            pFVar12 = (this_00->AllocatorInstance).Data;
            if (*(int *)(pFVar12 + local_1d0 + 0x18) < 1) {
              uVar23 = 0;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            uVar8 = **(undefined4 **)(pFVar12 + local_1d0 + 0x10);
            uVar43 = 0;
            if ((int)uVar32 < (this->FaceDesc).ArrayNum) {
              uVar43 = ~uVar32 >> 0x1f;
            }
            if (uVar43 == 0) {
              uVar23 = (ulonglong)(int)uVar32;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar34 * 4 + 4) = uVar8;
            uVar43 = uVar42 + 2;
            uVar32 = this->LeftSideColumnId + 1 + uVar33;
            uVar18 = 0;
            if ((int)uVar32 < (this->VertexIds).ArrayNum) {
              uVar18 = ~uVar32 >> 0x1f;
            }
            if (uVar18 == 0) {
              uVar23 = (ulonglong)(int)uVar32;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            pFVar12 = (this_00->AllocatorInstance).Data;
            if (*(int *)(pFVar12 + (longlong)(int)uVar32 * 0x10 + 8) < 1) {
              uVar23 = 0;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            uVar8 = **(undefined4 **)(pFVar12 + (longlong)(int)uVar32 * 0x10);
            uVar18 = 0;
            if ((int)uVar43 < (this->FaceDesc).ArrayNum) {
              uVar18 = ~uVar43 >> 0x1f;
            }
            if (uVar18 == 0) {
              uVar23 = (ulonglong)(int)uVar43;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            uVar18 = uVar42 + 3;
            *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar34 * 4 + 8) = uVar8;
            uVar32 = this->LeftSideColumnId + uVar33;
            uVar43 = 0;
            if ((int)uVar32 < (this->VertexIds).ArrayNum) {
              uVar43 = ~uVar32 >> 0x1f;
            }
            if (uVar43 == 0) {
              uVar23 = (ulonglong)(int)uVar32;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            pFVar12 = (this_00->AllocatorInstance).Data;
            if (*(int *)(pFVar12 + (longlong)(int)uVar32 * 0x10 + 8) <= (int)(uint)(1 < (int)uVar33)
               ) {
              uVar23 = (ulonglong)(1 < (int)uVar33);
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            lVar47 = 0;
            if (1 < (int)uVar33) {
              lVar47 = 4;
            }
            uVar8 = *(undefined4 *)(lVar47 + *(longlong *)(pFVar12 + (longlong)(int)uVar32 * 0x10));
            uVar43 = 0;
            if ((int)uVar18 < (this->FaceDesc).ArrayNum) {
              uVar43 = ~uVar18 >> 0x1f;
            }
            if (uVar43 == 0) {
              uVar23 = (ulonglong)(int)uVar18;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            uVar33 = uVar33 + 1;
            *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar34 * 4 + 0xc) = uVar8;
            uVar42 = uVar42 + 4;
            lVar34 = lVar34 + 4;
            local_1d0 = local_1d0 + 0x10;
          } while ((int)uVar33 < this->NumSteps);
        }
      }
    }
    puVar28 = puVar28 + 1;
  } while (puVar28 != (uint *)&local_148);
  this->LastFaceId = uVar42;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->NormalDesc,this->NumQuads << 2,Default);
  uVar42 = 0;
  local_1ec = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->UVDesc,this->NumQuads << 2,Default);
  local_1d4 = 0;
  fVar49 = (float)(**(code **)(this->_padding_ + 0x30))(this);
  fVar50 = __real_3f800000;
  if (this->bScaleUVByAspectRatio != false) {
    fVar50 = __real_3f800000 / fVar49;
  }
  iVar24 = this->BackStartFaceId;
  iVar17 = this->TopStartFaceId;
  iVar2 = this->TopStartFaceId;
  puVar28 = (uint *)&local_160;
  iVar3 = this->FrontStartFaceId;
  iVar4 = this->BottomStartFaceId;
  iVar5 = this->BackStartFaceId;
  iVar6 = this->LastFaceId;
  iVar7 = this->BottomStartFaceId;
  do {
    uVar43 = local_1d4;
    uVar33 = *puVar28;
    if (uVar33 < 6) {
      local_1e0 = (longlong)(int)local_1d4;
      local_1d0 = (longlong)(int)uVar42;
      switch(uVar33) {
      default:
        if (uVar33 == 0) {
          iVar36 = 0;
        }
        else {
          iVar36 = this->NumVertsPerSide;
        }
        iVar41 = 0;
        if (0 < this->NumVertsPerSide) {
          local_1e0 = local_1e0 * 8;
          local_1d0 = local_1d0 * 0xc;
          do {
            puVar22 = (undefined8 *)
                      (**(code **)(this->_padding_ + 0x20))(this,local_80,*puVar28,iVar41 + iVar36);
            uVar38 = *puVar22;
            uVar8 = *(undefined4 *)(puVar22 + 1);
            uVar42 = 0;
            if ((int)local_1ec < (int)this->_padding_) {
              uVar42 = ~local_1ec >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar40 = (code *)swi(3);
              pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
              return pFVar21;
            }
            lVar34 = this->_padding_;
            local_1ec = local_1ec + 1;
            *(undefined8 *)(local_1d0 + lVar34) = uVar38;
            uVar42 = *puVar28;
            *(undefined4 *)(local_1d0 + 8 + lVar34) = uVar8;
            local_1d0 = local_1d0 + 0xc;
            uVar23 = (ulonglong)(uint)(iVar41 + iVar36);
            puVar22 = (undefined8 *)
                      (**(code **)(this->_padding_ + 0x28))
                                (this,local_f0,uVar42,iVar41,uVar23,fVar50);
            uVar29 = (ulonglong)(int)local_1d4;
            uVar38 = *puVar22;
            uVar42 = 0;
            if ((int)local_1d4 < (int)this->_padding_) {
              uVar42 = ~local_1d4 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               uVar23 = uVar29, bVar15)) {
              pcVar40 = (code *)swi(3);
              pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
              return pFVar21;
            }
            local_1d4 = local_1d4 + 1;
            iVar41 = iVar41 + 1;
            *(undefined8 *)(local_1e0 + this->_padding_) = uVar38;
            local_1e0 = local_1e0 + 8;
          } while (iVar41 < this->NumVertsPerSide);
        }
        if (*puVar28 == 0) {
          uVar33 = 0;
        }
        else {
          uVar33 = this->NumQuadsPerSide << 2;
        }
        lVar34 = (longlong)(this->NumQuadsPerSide << 2);
        uVar42 = local_1ec;
        if (0 < this->NumQuadsPerSide << 2) {
          lVar47 = (longlong)(int)uVar33 * 4;
          do {
            uVar18 = ~uVar33 >> 0x1f;
            uVar43 = 0;
            if ((int)uVar33 < (this->FaceDesc).ArrayNum) {
              uVar43 = uVar18;
            }
            if (uVar43 == 0) {
              uVar23 = (ulonglong)(int)uVar33;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            uVar8 = *(undefined4 *)((this->FaceDesc).AllocatorInstance.Data + lVar47);
            uVar43 = 0;
            if ((int)uVar33 < (this->NormalDesc).ArrayNum) {
              uVar43 = uVar18;
            }
            if (uVar43 == 0) {
              uVar23 = (ulonglong)(int)uVar33;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            *(undefined4 *)((this->NormalDesc).AllocatorInstance.Data + lVar47) = uVar8;
            uVar43 = 0;
            if ((int)uVar33 < (this->FaceDesc).ArrayNum) {
              uVar43 = uVar18;
            }
            if (uVar43 == 0) {
              uVar23 = (ulonglong)(int)uVar33;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            uVar8 = *(undefined4 *)((this->FaceDesc).AllocatorInstance.Data + lVar47);
            uVar43 = 0;
            if ((int)uVar33 < (this->UVDesc).ArrayNum) {
              uVar43 = ~uVar33 >> 0x1f;
            }
            if (uVar43 == 0) {
              uVar23 = (ulonglong)(int)uVar33;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            uVar33 = uVar33 + 1;
            *(undefined4 *)((this->UVDesc).AllocatorInstance.Data + lVar47) = uVar8;
            lVar47 = lVar47 + 4;
            lVar34 = lVar34 + -1;
          } while (lVar34 != 0);
        }
        break;
      case 2:
      case 3:
        iVar36 = iVar24 - iVar17;
        piVar30 = &this->TopStartFaceId;
        if (uVar33 == 2) {
          iVar36 = iVar2 - iVar3;
          piVar30 = &this->FrontStartFaceId;
        }
        iVar41 = 0;
        uVar33 = *piVar30;
        local_1b8 = (longlong)iVar36;
        uVar42 = local_1ec;
        if (0 < iVar36) {
          local_1d0 = local_1d0 * 0xc;
          local_1e0 = local_1e0 * 8;
          lVar34 = (longlong)(int)uVar33 * 4;
          uVar43 = uVar33;
          do {
            uVar42 = 0;
            if ((int)uVar43 < (this->FaceDesc).ArrayNum) {
              uVar42 = ~uVar43 >> 0x1f;
            }
            if (uVar42 == 0) {
              uVar23 = (ulonglong)(int)uVar43;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            uVar18 = *(uint *)((this->FaceDesc).AllocatorInstance.Data + lVar34);
            puVar22 = (undefined8 *)
                      (**(code **)(this->_padding_ + 0x20))(this,local_74,*puVar28,uVar18,uVar23);
            uVar38 = *puVar22;
            uVar8 = *(undefined4 *)(puVar22 + 1);
            uVar42 = 0;
            if ((int)local_1ec < (int)this->_padding_) {
              uVar42 = ~local_1ec >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar40 = (code *)swi(3);
              pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
              return pFVar21;
            }
            lVar47 = this->_padding_;
            *(undefined8 *)(local_1d0 + lVar47) = uVar38;
            *(undefined4 *)(local_1d0 + 8 + lVar47) = uVar8;
            uVar42 = 0;
            if ((int)uVar43 < (this->NormalDesc).ArrayNum) {
              uVar42 = ~uVar43 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar40 = (code *)swi(3);
              pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
              return pFVar21;
            }
            local_1d0 = local_1d0 + 0xc;
            *(uint *)((this->NormalDesc).AllocatorInstance.Data + lVar34) = local_1ec;
            uVar42 = local_1ec + 1;
            uVar23 = (ulonglong)uVar18;
            puVar22 = (undefined8 *)
                      (**(code **)(this->_padding_ + 0x28))
                                (this,local_e8,*puVar28,(int)((iVar41 >> 0x1f & 3U) + iVar41) >> 2,
                                 uVar23,fVar50);
            uVar29 = (ulonglong)(int)local_1d4;
            uVar38 = *puVar22;
            uVar18 = 0;
            if ((int)local_1d4 < (int)this->_padding_) {
              uVar18 = ~local_1d4 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               uVar23 = uVar29, bVar15)) {
              pcVar40 = (code *)swi(3);
              pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
              return pFVar21;
            }
            uVar32 = uVar33 + iVar41;
            *(undefined8 *)(local_1e0 + this->_padding_) = uVar38;
            uVar18 = 0;
            if ((int)uVar32 < (this->UVDesc).ArrayNum) {
              uVar18 = ~uVar32 >> 0x1f;
            }
            if (uVar18 == 0) {
              uVar23 = (ulonglong)(int)uVar32;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            uVar43 = uVar43 + 1;
            local_1e0 = local_1e0 + 8;
            iVar41 = iVar41 + 1;
            *(uint *)((this->UVDesc).AllocatorInstance.Data + lVar34) = local_1d4;
            local_1d4 = local_1d4 + 1;
            lVar34 = lVar34 + 4;
            local_1b8 = local_1b8 + -1;
            local_1ec = uVar42;
          } while (local_1b8 != 0);
        }
        break;
      case 4:
      case 5:
        local_208 = local_1ec;
        iVar36 = iVar6 - iVar7;
        piVar30 = &this->BottomStartFaceId;
        if (uVar33 == 4) {
          iVar36 = iVar4 - iVar5;
          piVar30 = &this->BackStartFaceId;
        }
        local_1e8 = 0;
        uVar42 = *piVar30;
        uVar45 = (ulonglong)(int)uVar42;
        uVar29 = uVar45;
        if (0 < iVar36) {
          local_1a8 = 0;
          uVar35 = uVar45;
          uVar33 = uVar42;
          local_1b8 = local_1d0;
          do {
            iVar41 = (int)((local_1e8 >> 0x1f & 3U) + local_1e8) >> 2;
            iVar44 = (int)uVar29;
            switch(*puVar28) {
            case 0:
            case 1:
              iVar27 = (this->FaceDesc).ArrayNum;
              uVar18 = ~uVar33 >> 0x1f;
              pcVar40 = *(code **)(this->_padding_ + 0x20);
              goto LAB_1435a5061;
            default:
              iVar27 = (this->FaceDesc).ArrayNum;
              uVar18 = ~uVar33 >> 0x1f;
              pcVar40 = *(code **)(this->_padding_ + 0x20);
              goto LAB_1435a5bd7;
            case 4:
              bVar15 = iVar41 < this->NumSteps + -2;
              break;
            case 5:
              bVar15 = 1 < iVar41;
            }
            iVar27 = (this->FaceDesc).ArrayNum;
            uVar18 = ~uVar33 >> 0x1f;
            pcVar40 = *(code **)(this->_padding_ + 0x20);
            if (bVar15) {
LAB_1435a5bd7:
              uVar32 = 0;
              if ((int)uVar33 < iVar27) {
                uVar32 = uVar18;
              }
              if (uVar32 == 0) {
                uVar23 = (ulonglong)(int)uVar33;
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar15) {
                  pcVar40 = (code *)swi(3);
                  pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                  return pFVar21;
                }
              }
              puVar22 = (undefined8 *)
                        (*pcVar40)(this,local_b0,*puVar28,
                                   *(undefined4 *)
                                    ((this->FaceDesc).AllocatorInstance.Data + uVar35 * 4),uVar23);
              uVar38 = *puVar22;
              uVar8 = *(undefined4 *)(puVar22 + 1);
              uVar18 = 0;
              if ((int)local_1ec < (int)this->_padding_) {
                uVar18 = ~local_1ec >> 0x1f;
              }
              if (uVar18 == 0) {
                uVar23 = (ulonglong)(int)local_1ec;
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar15) {
                  pcVar40 = (code *)swi(3);
                  pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                  return pFVar21;
                }
              }
              lVar34 = this->_padding_;
              *(undefined8 *)(lVar34 + local_1b8 * 0xc) = uVar38;
              *(undefined4 *)(lVar34 + 8 + local_1b8 * 0xc) = uVar8;
              uVar18 = local_1e8 + iVar44 + 3;
              uVar26 = local_1ec + 1;
              pcVar40 = *(code **)(this->_padding_ + 0x20);
              uVar32 = 0;
              if ((int)uVar18 < (this->FaceDesc).ArrayNum) {
                uVar32 = ~uVar18 >> 0x1f;
              }
              if (uVar32 == 0) {
                uVar23 = (ulonglong)(int)uVar18;
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar15) {
                  pcVar40 = (code *)swi(3);
                  pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                  return pFVar21;
                }
              }
              puVar22 = (undefined8 *)
                        (*pcVar40)(this,local_a4,*puVar28,
                                   *(undefined4 *)
                                    ((this->FaceDesc).AllocatorInstance.Data +
                                    (local_1a8 + iVar44) * 4 + 0xc),uVar23);
              uVar38 = *puVar22;
              uVar8 = *(undefined4 *)(puVar22 + 1);
              uVar18 = 0;
              if ((int)uVar26 < (int)this->_padding_) {
                uVar18 = ~uVar26 >> 0x1f;
              }
              if (uVar18 == 0) {
                uVar23 = (ulonglong)(int)uVar26;
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar15) {
                  pcVar40 = (code *)swi(3);
                  pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                  return pFVar21;
                }
              }
              lVar34 = this->_padding_;
              uVar18 = local_1e8 + iVar44 + 1;
              uVar26 = local_1ec + 2;
              lVar47 = local_1b8 + 2;
              *(undefined8 *)(lVar34 + 0xc + local_1b8 * 0xc) = uVar38;
              *(undefined4 *)(lVar34 + 0x14 + local_1b8 * 0xc) = uVar8;
              pcVar40 = *(code **)(this->_padding_ + 0x20);
              uVar32 = 0;
              if ((int)uVar18 < (this->FaceDesc).ArrayNum) {
                uVar32 = ~uVar18 >> 0x1f;
              }
              if (uVar32 == 0) {
                uVar23 = (ulonglong)(int)uVar18;
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar15) {
                  pcVar40 = (code *)swi(3);
                  pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                  return pFVar21;
                }
              }
              puVar22 = (undefined8 *)
                        (*pcVar40)(this,local_98,*puVar28,
                                   *(undefined4 *)
                                    ((this->FaceDesc).AllocatorInstance.Data +
                                    (local_1a8 + uVar45) * 4 + 4),uVar23);
              uVar38 = *puVar22;
              uVar8 = *(undefined4 *)(puVar22 + 1);
              uVar18 = 0;
              if ((int)uVar26 < (int)this->_padding_) {
                uVar18 = ~uVar26 >> 0x1f;
              }
              if (uVar18 == 0) {
                uVar23 = (ulonglong)(int)uVar26;
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar15) {
                  pcVar40 = (code *)swi(3);
                  pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                  return pFVar21;
                }
              }
              lVar34 = this->_padding_;
              *(undefined8 *)(lVar34 + lVar47 * 0xc) = uVar38;
              *(undefined4 *)(lVar34 + 8 + lVar47 * 0xc) = uVar8;
              uVar32 = uVar42 + 2 + local_1e8;
              pcVar40 = *(code **)(this->_padding_ + 0x20);
              uVar18 = 0;
              if ((int)uVar32 < (this->FaceDesc).ArrayNum) {
                uVar18 = ~uVar32 >> 0x1f;
              }
              if (uVar18 == 0) {
                uVar23 = (ulonglong)(int)uVar32;
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar15) {
                  pcVar40 = (code *)swi(3);
                  pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                  return pFVar21;
                }
              }
              puVar22 = (undefined8 *)
                        (*pcVar40)(this,local_8c,*puVar28,
                                   *(undefined4 *)
                                    ((this->FaceDesc).AllocatorInstance.Data +
                                    ((int)uVar42 + local_1a8) * 4 + 8),uVar23);
              uVar38 = *puVar22;
              uVar8 = *(undefined4 *)(puVar22 + 1);
              uVar18 = 0;
              if ((int)(local_1ec + 3) < (int)this->_padding_) {
                uVar18 = ~(local_1ec + 3) >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
              lVar34 = this->_padding_;
              uVar29 = (ulonglong)(int)uVar42;
              *(undefined8 *)(lVar34 + 0xc + lVar47 * 0xc) = uVar38;
              *(undefined4 *)(lVar34 + 0x14 + lVar47 * 0xc) = uVar8;
              pcVar40 = *(code **)(this->_padding_ + 0x28);
              uVar18 = 0;
              if ((int)(uVar42 + local_1e8) < (this->FaceDesc).ArrayNum) {
                uVar18 = ~(uVar42 + local_1e8) >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
              puVar22 = (undefined8 *)
                        (*pcVar40)(this,local_110,*puVar28,iVar41,
                                   *(undefined4 *)
                                    ((this->FaceDesc).AllocatorInstance.Data +
                                    (uVar45 + local_1a8) * 4),fVar50);
              uVar38 = *puVar22;
              uVar18 = 0;
              if ((int)local_1d4 < (int)this->_padding_) {
                uVar18 = ~local_1d4 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
              *(undefined8 *)(this->_padding_ + local_1e0 * 8) = uVar38;
              pcVar40 = *(code **)(this->_padding_ + 0x28);
              uVar18 = 0;
              if ((int)(uVar42 + 3 + local_1e8) < (this->FaceDesc).ArrayNum) {
                uVar18 = ~(uVar42 + 3 + local_1e8) >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
              puVar22 = (undefined8 *)
                        (*pcVar40)(this,local_108,*puVar28,iVar41,
                                   *(undefined4 *)
                                    ((this->FaceDesc).AllocatorInstance.Data +
                                    (local_1a8 + uVar29) * 4 + 0xc),fVar50);
              uVar38 = *puVar22;
              uVar18 = 0;
              if ((int)(local_1d4 + 1) < (int)this->_padding_) {
                uVar18 = ~(local_1d4 + 1) >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
              *(undefined8 *)(this->_padding_ + 8 + local_1e0 * 8) = uVar38;
              pcVar40 = *(code **)(this->_padding_ + 0x28);
              uVar18 = 0;
              if ((int)(uVar42 + 1 + local_1e8) < (this->FaceDesc).ArrayNum) {
                uVar18 = ~(uVar42 + 1 + local_1e8) >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
              puVar22 = (undefined8 *)
                        (*pcVar40)(this,local_100,*puVar28,iVar41,
                                   *(undefined4 *)
                                    ((this->FaceDesc).AllocatorInstance.Data +
                                    (local_1a8 + uVar29) * 4 + 4),fVar50);
              uVar38 = *puVar22;
              uVar18 = 0;
              if ((int)(local_1d4 + 2) < (int)this->_padding_) {
                uVar18 = ~(local_1d4 + 2) >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
              uVar32 = local_1d4 + 3;
              *(undefined8 *)(this->_padding_ + (local_1e0 + 2) * 8) = uVar38;
              pcVar40 = *(code **)(this->_padding_ + 0x28);
              uVar18 = 0;
              if ((int)(uVar42 + 2 + local_1e8) < (this->FaceDesc).ArrayNum) {
                uVar18 = ~(uVar42 + 2 + local_1e8) >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
              uVar23 = (ulonglong)
                       *(uint *)((this->FaceDesc).AllocatorInstance.Data +
                                (local_1a8 + uVar29) * 4 + 8);
              puVar22 = (undefined8 *)(*pcVar40)(this,local_f8,*puVar28,iVar41,uVar23,fVar50);
              uVar38 = *puVar22;
              uVar18 = 0;
              if ((int)uVar32 < (int)this->_padding_) {
                uVar18 = ~uVar32 >> 0x1f;
              }
              if (uVar18 == 0) {
                uVar23 = (ulonglong)(int)uVar32;
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar15) {
                  pcVar40 = (code *)swi(3);
                  pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                  return pFVar21;
                }
              }
              *(undefined8 *)(this->_padding_ + 8 + (local_1e0 + 2) * 8) = uVar38;
              local_1ec = local_1ec + 4;
              local_1e0 = local_1e0 + 4;
              local_1d4 = local_1d4 + 4;
              local_1b8 = local_1b8 + 4;
            }
            else {
LAB_1435a5061:
              uVar32 = 0;
              if ((int)uVar33 < iVar27) {
                uVar32 = uVar18;
              }
              if (uVar32 == 0) {
                uVar23 = (ulonglong)(int)uVar33;
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar15) {
                  pcVar40 = (code *)swi(3);
                  pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                  return pFVar21;
                }
              }
              puVar22 = (undefined8 *)
                        (*pcVar40)(this,local_e0,*puVar28,
                                   *(undefined4 *)
                                    ((this->FaceDesc).AllocatorInstance.Data + uVar35 * 4),uVar23);
              uVar38 = *puVar22;
              uVar8 = *(undefined4 *)(puVar22 + 1);
              uVar18 = 0;
              if ((int)local_1ec < (int)this->_padding_) {
                uVar18 = ~local_1ec >> 0x1f;
              }
              if (uVar18 == 0) {
                uVar23 = (ulonglong)(int)local_1ec;
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar15) {
                  pcVar40 = (code *)swi(3);
                  pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                  return pFVar21;
                }
              }
              lVar34 = this->_padding_;
              *(undefined8 *)(lVar34 + local_1b8 * 0xc) = uVar38;
              *(undefined4 *)(lVar34 + 8 + local_1b8 * 0xc) = uVar8;
              uVar26 = iVar44 + local_1e8;
              uVar18 = uVar26 + 3;
              pcVar40 = *(code **)(this->_padding_ + 0x20);
              uVar32 = 0;
              if ((int)uVar18 < (this->FaceDesc).ArrayNum) {
                uVar32 = ~uVar18 >> 0x1f;
              }
              if (uVar32 == 0) {
                uVar23 = (ulonglong)(int)uVar18;
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar15) {
                  pcVar40 = (code *)swi(3);
                  pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                  return pFVar21;
                }
              }
              puVar22 = (undefined8 *)
                        (*pcVar40)(this,local_d4,*puVar28,
                                   *(undefined4 *)
                                    ((this->FaceDesc).AllocatorInstance.Data +
                                    (iVar44 + local_1a8) * 4 + 0xc),uVar23);
              uVar38 = *puVar22;
              uVar8 = *(undefined4 *)(puVar22 + 1);
              uVar18 = 0;
              if ((int)(local_1ec + 1) < (int)this->_padding_) {
                uVar18 = ~(local_1ec + 1) >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
              lVar34 = this->_padding_;
              uVar32 = local_1ec + 2;
              *(undefined8 *)(lVar34 + 0xc + local_1b8 * 0xc) = uVar38;
              *(undefined4 *)(lVar34 + 0x14 + local_1b8 * 0xc) = uVar8;
              lVar34 = local_1b8 + 2;
              pcVar40 = *(code **)(this->_padding_ + 0x28);
              uVar18 = 0;
              if ((int)uVar26 < (this->FaceDesc).ArrayNum) {
                uVar18 = ~uVar26 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
              puVar22 = (undefined8 *)
                        (*pcVar40)(this,local_130,*puVar28,iVar41,
                                   *(undefined4 *)
                                    ((this->FaceDesc).AllocatorInstance.Data +
                                    (iVar44 + local_1a8) * 4),fVar50);
              uVar38 = *puVar22;
              uVar18 = 0;
              if ((int)local_1d4 < (int)this->_padding_) {
                uVar18 = ~local_1d4 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
              uVar26 = local_1d4 + 1;
              *(undefined8 *)(this->_padding_ + local_1e0 * 8) = uVar38;
              pcVar40 = *(code **)(this->_padding_ + 0x28);
              uVar18 = 0;
              if ((int)(uVar42 + 3 + local_1e8) < (this->FaceDesc).ArrayNum) {
                uVar18 = ~(uVar42 + 3 + local_1e8) >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
              uVar29 = (ulonglong)(uint)fVar50;
              uVar23 = (ulonglong)
                       *(uint *)((this->FaceDesc).AllocatorInstance.Data +
                                (local_1a8 + uVar45) * 4 + 0xc);
              puVar22 = (undefined8 *)(*pcVar40)(this,local_128,*puVar28,iVar41,uVar23,uVar29);
              iVar44 = (int)this->_padding_;
              uVar31 = (ulonglong)iVar44;
              uVar38 = *puVar22;
              uVar18 = 0;
              if ((int)uVar26 < iVar44) {
                uVar18 = ~uVar26 >> 0x1f;
              }
              if (uVar18 == 0) {
                uVar23 = (ulonglong)(int)uVar26;
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                uVar29 = uVar31;
                if (bVar15) {
                  pcVar40 = (code *)swi(3);
                  pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                  return pFVar21;
                }
              }
              uVar18 = local_1d4 + 2;
              lVar47 = local_1e0 + 2;
              *(undefined8 *)(this->_padding_ + 8 + local_1e0 * 8) = uVar38;
              if (*puVar28 == 4) {
                if (iVar41 != this->NumSteps + -1) {
LAB_1435a5832:
                  uVar29 = (ulonglong)uVar42;
                  local_1ec = uVar32;
                  local_1e0 = lVar47;
                  local_1d4 = uVar18;
                  local_1b8 = lVar34;
                  goto LAB_1435a5837;
                }
              }
              else if ((*puVar28 != 5) || (iVar41 != 1)) goto LAB_1435a5832;
              iVar44 = (this->FaceDesc).ArrayNum;
              uVar31 = (ulonglong)iVar44;
              uVar48 = local_1e8 + 1 + uVar42;
              pcVar40 = *(code **)(this->_padding_ + 0x20);
              uVar26 = 0;
              if ((int)uVar48 < iVar44) {
                uVar26 = ~uVar48 >> 0x1f;
              }
              if (uVar26 == 0) {
                uVar23 = (ulonglong)(int)uVar48;
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                uVar29 = uVar31;
                if (bVar15) {
                  pcVar40 = (code *)swi(3);
                  pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                  return pFVar21;
                }
              }
              puVar22 = (undefined8 *)
                        (*pcVar40)(this,local_c8,*puVar28,
                                   *(undefined4 *)
                                    ((this->FaceDesc).AllocatorInstance.Data +
                                    (local_1a8 + (int)uVar42) * 4 + 4),uVar23,uVar29);
              uVar39 = (ulonglong)(int)uVar32;
              iVar44 = (int)this->_padding_;
              uVar31 = (ulonglong)iVar44;
              uVar38 = *puVar22;
              uVar8 = *(undefined4 *)(puVar22 + 1);
              uVar26 = 0;
              if ((int)uVar32 < iVar44) {
                uVar26 = ~uVar32 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , uVar23 = uVar39, uVar29 = uVar31, bVar15)) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
              lVar11 = this->_padding_;
              uVar26 = local_1e8 + 2 + uVar42;
              *(undefined8 *)(lVar11 + lVar34 * 0xc) = uVar38;
              *(undefined4 *)(lVar11 + 8 + lVar34 * 0xc) = uVar8;
              iVar44 = (this->FaceDesc).ArrayNum;
              uVar31 = (ulonglong)iVar44;
              pcVar40 = *(code **)(this->_padding_ + 0x20);
              uVar32 = 0;
              if ((int)uVar26 < iVar44) {
                uVar32 = ~uVar26 >> 0x1f;
              }
              if (uVar32 == 0) {
                uVar23 = (ulonglong)(int)uVar26;
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                uVar29 = uVar31;
                if (bVar15) {
                  pcVar40 = (code *)swi(3);
                  pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                  return pFVar21;
                }
              }
              puVar22 = (undefined8 *)
                        (*pcVar40)(this,local_bc,*puVar28,
                                   *(undefined4 *)
                                    ((this->FaceDesc).AllocatorInstance.Data +
                                    ((int)uVar42 + local_1a8) * 4 + 8),uVar23,uVar29);
              uVar38 = *puVar22;
              uVar8 = *(undefined4 *)(puVar22 + 1);
              uVar32 = 0;
              if ((int)(local_1ec + 3) < (int)this->_padding_) {
                uVar32 = ~(local_1ec + 3) >> 0x1f;
              }
              if ((uVar32 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
              lVar11 = this->_padding_;
              uVar29 = (ulonglong)(int)uVar42;
              *(undefined8 *)(lVar11 + 0xc + lVar34 * 0xc) = uVar38;
              *(undefined4 *)(lVar11 + 0x14 + lVar34 * 0xc) = uVar8;
              pcVar40 = *(code **)(this->_padding_ + 0x28);
              uVar32 = 0;
              if ((int)(uVar42 + 1 + local_1e8) < (this->FaceDesc).ArrayNum) {
                uVar32 = ~(uVar42 + 1 + local_1e8) >> 0x1f;
              }
              if ((uVar32 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
              puVar22 = (undefined8 *)
                        (*pcVar40)(this,local_120,*puVar28,iVar41,
                                   *(undefined4 *)
                                    ((this->FaceDesc).AllocatorInstance.Data +
                                    (uVar45 + local_1a8) * 4 + 4),fVar50);
              uVar38 = *puVar22;
              uVar32 = 0;
              if ((int)uVar18 < (int)this->_padding_) {
                uVar32 = ~uVar18 >> 0x1f;
              }
              if ((uVar32 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
              uVar32 = local_1d4 + 3;
              *(undefined8 *)(this->_padding_ + lVar47 * 8) = uVar38;
              pcVar40 = *(code **)(this->_padding_ + 0x28);
              uVar18 = 0;
              if ((int)(uVar42 + 2 + local_1e8) < (this->FaceDesc).ArrayNum) {
                uVar18 = ~(uVar42 + 2 + local_1e8) >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
              uVar23 = (ulonglong)
                       *(uint *)((this->FaceDesc).AllocatorInstance.Data +
                                (local_1a8 + uVar29) * 4 + 8);
              puVar22 = (undefined8 *)(*pcVar40)(this,local_118,*puVar28,iVar41,uVar23,fVar50);
              uVar38 = *puVar22;
              uVar18 = 0;
              if ((int)uVar32 < (int)this->_padding_) {
                uVar18 = ~uVar32 >> 0x1f;
              }
              if (uVar18 == 0) {
                uVar23 = (ulonglong)(int)uVar32;
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar15) {
                  pcVar40 = (code *)swi(3);
                  pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                  return pFVar21;
                }
              }
              *(undefined8 *)(this->_padding_ + 8 + lVar47 * 8) = uVar38;
              local_1ec = local_1ec + 4;
              local_1e0 = local_1e0 + 4;
              local_1d4 = local_1d4 + 4;
              local_1b8 = local_1b8 + 4;
            }
LAB_1435a5837:
            local_1e8 = local_1e8 + 4;
            local_1a8 = local_1a8 + 4;
            uVar33 = uVar33 + 4;
            uVar35 = uVar35 + 4;
          } while (local_1a8 < iVar36);
        }
        iVar36 = 0;
        uVar42 = local_1ec;
        if (0 < this->NumSteps) {
          uVar33 = (int)uVar29 + 2;
          pTVar1 = &this->UVDesc;
          lVar34 = (longlong)(int)uVar29 * 4 + 8;
          do {
            uVar32 = (uint)uVar29;
            uVar18 = 0;
            if ((int)uVar32 < (this->NormalDesc).ArrayNum) {
              uVar18 = ~uVar32 >> 0x1f;
            }
            if (uVar18 == 0) {
              uVar23 = (ulonglong)(int)uVar32;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            *(uint *)((this->NormalDesc).AllocatorInstance.Data + lVar34 + -8) = local_208;
            uVar18 = 0;
            if ((int)(uVar33 - 1) < (this->NormalDesc).ArrayNum) {
              uVar18 = ~(uVar33 - 1) >> 0x1f;
            }
            if (uVar18 == 0) {
              uVar23 = (ulonglong)(int)(uVar33 - 1);
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            *(uint *)((this->NormalDesc).AllocatorInstance.Data + lVar34 + -4) = local_208 + 2;
            uVar18 = 0;
            if ((int)uVar33 < (this->NormalDesc).ArrayNum) {
              uVar18 = ~uVar33 >> 0x1f;
            }
            if (uVar18 == 0) {
              uVar23 = (ulonglong)(int)uVar33;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            uVar18 = uVar33 + 1;
            *(uint *)((this->NormalDesc).AllocatorInstance.Data + lVar34) = local_208 + 3;
            uVar26 = 0;
            if ((int)uVar18 < (this->NormalDesc).ArrayNum) {
              uVar26 = ~uVar18 >> 0x1f;
            }
            if (uVar26 == 0) {
              uVar23 = (ulonglong)(int)uVar18;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            *(uint *)((this->NormalDesc).AllocatorInstance.Data + lVar34 + 4) = local_208 + 1;
            uVar18 = 0;
            if ((int)uVar32 < (this->UVDesc).ArrayNum) {
              uVar18 = ~uVar32 >> 0x1f;
            }
            if (uVar18 == 0) {
              uVar23 = (ulonglong)(int)uVar32;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            *(uint *)((pTVar1->AllocatorInstance).Data + lVar34 + -8) = uVar43;
            uVar18 = 0;
            if ((int)(uVar33 - 1) < (this->UVDesc).ArrayNum) {
              uVar18 = ~(uVar33 - 1) >> 0x1f;
            }
            if (uVar18 == 0) {
              uVar23 = (ulonglong)(int)(uVar33 - 1);
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            *(uint *)((pTVar1->AllocatorInstance).Data + lVar34 + -4) = uVar43 + 2;
            uVar18 = 0;
            if ((int)uVar33 < (this->UVDesc).ArrayNum) {
              uVar18 = ~uVar33 >> 0x1f;
            }
            if (uVar18 == 0) {
              uVar23 = (ulonglong)(int)uVar33;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            *(uint *)((pTVar1->AllocatorInstance).Data + lVar34) = uVar43 + 3;
            uVar18 = 0;
            if ((int)(uVar33 + 1) < (this->UVDesc).ArrayNum) {
              uVar18 = ~(uVar33 + 1) >> 0x1f;
            }
            if (uVar18 == 0) {
              uVar23 = (ulonglong)(int)(uVar33 + 1);
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar40 = (code *)swi(3);
                pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
                return pFVar21;
              }
            }
            uVar29 = (ulonglong)(uVar32 + 4);
            uVar33 = uVar33 + 4;
            *(uint *)((pTVar1->AllocatorInstance).Data + lVar34 + 4) = uVar43 + 1;
            lVar34 = lVar34 + 0x10;
            switch(*puVar28) {
            case 0:
            case 1:
              goto switchD_1435a5bb9_caseD_0;
            default:
              goto switchD_1435a5bb9_caseD_2;
            case 4:
              bVar15 = iVar36 < this->NumSteps + -2;
              break;
            case 5:
              bVar15 = 1 < iVar36;
            }
            if (bVar15) {
switchD_1435a5bb9_caseD_2:
              local_208 = local_208 + 4;
              uVar43 = uVar43 + 4;
            }
            else {
switchD_1435a5bb9_caseD_0:
              if ((*puVar28 == 5) && (iVar36 == 1)) goto switchD_1435a5bb9_caseD_2;
              local_208 = local_208 + 2;
              uVar43 = uVar43 + 2;
            }
            iVar36 = iVar36 + 1;
          } while (iVar36 < this->NumSteps);
        }
      }
    }
    puVar28 = puVar28 + 1;
  } while (puVar28 != (uint *)&local_148);
  uVar42 = 0;
  local_138 = 1;
  local_148 = ___xmm_00000002000000020000000300000000;
  uStack_140 = _UNK_150aa6a08;
  local_208 = 0;
  local_200 = 0;
  if (0 < this->NumQuads) {
    local_1f8 = 0;
    local_1f0 = 0;
    do {
      EVar19 = FaceToSide(this,local_200);
      bVar15 = EVar19 == Left;
      local_1e0 = 2;
      piVar30 = (int *)((longlong)&local_148 + 4);
      local_1d0 = local_1f8 * 0xc;
      local_1b8 = local_1f8 * 4;
      do {
        uVar32 = piVar30[-1] + local_1f0;
        uVar18 = *piVar30 + local_1f0;
        uVar43 = local_1f0 + piVar30[1];
        uVar33 = 0;
        if ((int)uVar32 < (this->FaceDesc).ArrayNum) {
          uVar33 = ~uVar32 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar40 = (code *)swi(3);
          pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
          return pFVar21;
        }
        uVar8 = *(undefined4 *)((this->FaceDesc).AllocatorInstance.Data + (longlong)(int)uVar32 * 4)
        ;
        uVar33 = 0;
        if ((int)uVar18 < (this->FaceDesc).ArrayNum) {
          uVar33 = ~uVar18 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar40 = (code *)swi(3);
          pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
          return pFVar21;
        }
        uVar9 = *(undefined4 *)((this->FaceDesc).AllocatorInstance.Data + (longlong)(int)uVar18 * 4)
        ;
        uVar33 = 0;
        if ((int)uVar43 < (this->FaceDesc).ArrayNum) {
          uVar33 = ~uVar43 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar40 = (code *)swi(3);
          pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
          return pFVar21;
        }
        uVar10 = *(undefined4 *)
                  ((this->FaceDesc).AllocatorInstance.Data + (longlong)(int)uVar43 * 4);
        uVar46 = uVar10;
        if ((bool)(char)this->_padding_ != bVar15) {
          uVar46 = uVar8;
          uVar8 = uVar10;
        }
        local_188 = CONCAT44(uVar9,uVar8);
        uVar33 = 0;
        if ((int)uVar42 < (int)this->_padding_) {
          uVar33 = ~uVar42 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar40 = (code *)swi(3);
          pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
          return pFVar21;
        }
        lVar34 = this->_padding_;
        *(undefined8 *)(lVar34 + local_1d0) = local_188;
        *(undefined4 *)(lVar34 + 8 + local_1d0) = uVar46;
        uVar33 = 0;
        if ((int)uVar32 < (this->NormalDesc).ArrayNum) {
          uVar33 = ~uVar32 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar40 = (code *)swi(3);
          pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
          return pFVar21;
        }
        uVar8 = *(undefined4 *)
                 ((this->NormalDesc).AllocatorInstance.Data + (longlong)(int)uVar32 * 4);
        uVar33 = 0;
        if ((int)uVar18 < (this->NormalDesc).ArrayNum) {
          uVar33 = ~uVar18 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar40 = (code *)swi(3);
          pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
          return pFVar21;
        }
        uVar9 = *(undefined4 *)
                 ((this->NormalDesc).AllocatorInstance.Data + (longlong)(int)uVar18 * 4);
        uVar33 = 0;
        if ((int)uVar43 < (this->NormalDesc).ArrayNum) {
          uVar33 = ~uVar43 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar40 = (code *)swi(3);
          pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
          return pFVar21;
        }
        uVar10 = *(undefined4 *)
                  ((this->NormalDesc).AllocatorInstance.Data + (longlong)(int)uVar43 * 4);
        uVar46 = uVar10;
        if ((bool)(char)this->_padding_ != bVar15) {
          uVar46 = uVar8;
          uVar8 = uVar10;
        }
        local_1a8 = CONCAT44(uVar9,uVar8);
        uVar33 = 0;
        if ((int)uVar42 < (int)this->_padding_) {
          uVar33 = ~uVar42 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar40 = (code *)swi(3);
          pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
          return pFVar21;
        }
        lVar34 = this->_padding_;
        *(longlong *)(lVar34 + local_1d0) = local_1a8;
        *(undefined4 *)(lVar34 + 8 + local_1d0) = uVar46;
        uVar33 = 0;
        if ((int)uVar32 < (this->UVDesc).ArrayNum) {
          uVar33 = ~uVar32 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar40 = (code *)swi(3);
          pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
          return pFVar21;
        }
        uVar8 = *(undefined4 *)((this->UVDesc).AllocatorInstance.Data + (longlong)(int)uVar32 * 4);
        uVar33 = 0;
        if ((int)uVar18 < (this->UVDesc).ArrayNum) {
          uVar33 = ~uVar18 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar40 = (code *)swi(3);
          pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
          return pFVar21;
        }
        uVar9 = *(undefined4 *)((this->UVDesc).AllocatorInstance.Data + (longlong)(int)uVar18 * 4);
        uVar33 = 0;
        if ((int)uVar43 < (this->UVDesc).ArrayNum) {
          uVar33 = ~uVar43 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar40 = (code *)swi(3);
          pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
          return pFVar21;
        }
        uVar10 = *(undefined4 *)((this->UVDesc).AllocatorInstance.Data + (longlong)(int)uVar43 * 4);
        uVar46 = uVar10;
        if ((bool)(char)this->_padding_ != bVar15) {
          uVar46 = uVar8;
          uVar8 = uVar10;
        }
        local_1c8 = CONCAT44(uVar9,uVar8);
        uVar33 = 0;
        if ((int)uVar42 < (int)this->_padding_) {
          uVar33 = ~uVar42 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar40 = (code *)swi(3);
          pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
          return pFVar21;
        }
        lVar34 = this->_padding_;
        *(longlong *)(lVar34 + local_1d0) = local_1c8;
        *(undefined4 *)(lVar34 + 8 + local_1d0) = uVar46;
        uVar33 = 0;
        if ((int)uVar42 < (int)this->_padding_) {
          uVar33 = ~uVar42 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar40 = (code *)swi(3);
          pFVar21 = (FMeshShapeGenerator *)(*pcVar40)();
          return pFVar21;
        }
        local_1d0 = local_1d0 + 0xc;
        uVar42 = uVar42 + 1;
        local_1f8 = local_1f8 + 1;
        piVar30 = piVar30 + 3;
        local_1e0 = local_1e0 + -1;
        *(uint *)(local_1b8 + this->_padding_) = local_208;
        local_1b8 = local_1b8 + 4;
      } while (local_1e0 != 0);
      if (this->bPolygroupPerQuad == false) {
        switch(EVar19) {
        case Right:
        case Left:
          uVar33 = local_200;
          if ((int)(local_200 + 1) < this->NumQuads) {
            uVar33 = local_200 + 1;
          }
          EVar20 = FaceToSide(this,uVar33);
          local_208 = local_208 + (EVar20 != EVar19);
          break;
        case Front:
        case Top:
        case Back:
        case Bottom:
          goto switchD_1435a67df_caseD_2;
        }
      }
      else {
switchD_1435a67df_caseD_2:
        local_208 = local_208 + 1;
      }
      local_200 = local_200 + 1;
      local_1f0 = local_1f0 + 4;
    } while ((int)local_200 < this->NumQuads);
  }
  return (FMeshShapeGenerator *)this;
}

// GenerateSolidStairs @ 1435a9e00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FMeshShapeGenerator * __thiscall
UE::Geometry::FStairGenerator::GenerateSolidStairs(FStairGenerator *this)

{
  int iVar1;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *this_01;
  void *_Dst;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ESide EVar18;
  ESide EVar19;
  FMeshShapeGenerator *pFVar20;
  undefined8 *puVar21;
  int *piVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  int iVar25;
  uint *puVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong lVar29;
  uint uVar30;
  uint uVar31;
  ulonglong uVar32;
  FScriptContainerElement *pFVar33;
  int iVar34;
  int iVar35;
  uint uVar36;
  int iVar37;
  uint uVar38;
  undefined4 uVar39;
  FScriptContainerElement *pFVar40;
  longlong lVar41;
  longlong lVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  undefined4 uVar46;
  ulonglong uVar47;
  float fVar48;
  float fVar49;
  int local_1a8;
  longlong local_1a0;
  uint local_194;
  longlong local_190;
  uint local_188;
  int local_184;
  longlong local_180;
  uint local_178;
  longlong local_170;
  undefined8 local_158;
  undefined8 local_138;
  int local_128 [3];
  undefined4 uStack_11c;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  undefined1 local_b0 [12];
  undefined1 local_a4 [12];
  undefined1 local_98 [12];
  undefined1 local_8c [12];
  undefined1 local_80 [12];
  undefined1 local_74 [12];
  undefined1 local_68 [64];
  
  iVar16 = this->NumSteps;
  iVar25 = ((iVar16 + 2) * (iVar16 + 1)) / 2 + iVar16;
  this->NumVertsPerSide = iVar25;
  iVar15 = ((iVar16 + 1) * iVar16) / 2;
  this->NumQuadsPerSide = iVar15;
  this->NumVerts = iVar25 * 2;
  iVar15 = iVar15 + iVar16 * 2;
  this->NumQuads = iVar15 * 2;
  uVar44 = (iVar25 + iVar16 * 6) * 2 + 4;
  this->NumAttrs = uVar44;
  pFVar24 = (FScriptContainerElement *)(ulonglong)uVar44;
  FMeshShapeGenerator::SetBufferSizes
            ((FMeshShapeGenerator *)this,iVar25 * 2,iVar15 * 4,uVar44,uVar44);
  uStack_108 = _UNK_150631e08;
  local_110 = __xmm_00000003000000020000000100000000;
  this_00 = &this->VertexIds;
  iVar25 = this->NumSteps + 1;
  this->LeftSideColumnId = iVar25;
  local_128[0] = 0;
  local_128[1] = 1;
  local_100 = 4;
  local_fc = 5;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (this_00,iVar25 * 2,Default);
  TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>::SetNum
            (&this->VertexIdsToColumnRow,this->NumVerts,Default);
  iVar25 = this->NumSteps;
  piVar22 = local_128;
  uVar44 = 0;
  local_170 = 0;
  iVar15 = 0;
  while( true ) {
    if (iVar15 == 0) {
      uVar47 = 0;
    }
    else {
      uVar47 = (ulonglong)(uint)this->LeftSideColumnId;
    }
    local_194 = (uint)uVar47;
    if (0 < iVar25 + 1) {
      lVar29 = (longlong)(int)local_194 << 4;
      iVar15 = -local_194;
      do {
        uVar38 = (uint)uVar47;
        uVar36 = (iVar15 + uVar38 != iVar25) + 1 + iVar15 + uVar38;
        uVar31 = 0;
        if ((int)uVar38 < (this->VertexIds).ArrayNum) {
          uVar31 = ~uVar38 >> 0x1f;
        }
        if (uVar31 == 0) {
          pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar38;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar10 = (code *)swi(3);
            pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
            return pFVar20;
          }
        }
        pFVar40 = (this_00->AllocatorInstance).Data + lVar29;
        iVar25 = *(int *)&pFVar40[8].field_0x0;
        pFVar33 = pFVar40 + 8;
        if (iVar25 < (int)uVar36) {
          iVar16 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (4,4,uVar36 - iVar25,(ForAnyElementType *)pFVar40,(int *)pFVar33,
                              (int *)(pFVar40 + 0xc));
          memset((void *)(*(longlong *)&pFVar40->field_0x0 + (longlong)iVar16 * 4),0,
                 (longlong)(int)(uVar36 - iVar25) << 2);
          pFVar24 = pFVar33;
        }
        else {
          if ((int)uVar36 < 0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::OnInvalidArrayNum((ulonglong)uVar36);
          }
          if ((int)uVar36 < iVar25) {
            uVar31 = iVar25 - uVar36;
            if ((int)(uVar31 | uVar36) < 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar36;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 );
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            if (uVar31 != 0) {
              _Dst = (void *)(*(longlong *)&pFVar40->field_0x0 + (longlong)(int)uVar36 * 4);
              iVar25 = (*(int *)&pFVar40[8].field_0x0 - uVar31) - uVar36;
              if (iVar25 != 0) {
                memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar31 * 4),
                        (longlong)iVar25 << 2);
              }
              pFVar33 = pFVar40 + 8;
              *(uint *)&pFVar33->field_0x0 = *(int *)&pFVar33->field_0x0 - uVar31;
              pFVar24 = pFVar40 + 0xc;
              Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,(ForAnyElementType *)pFVar40,*(int *)&pFVar33->field_0x0,(int *)pFVar24
                        );
            }
          }
        }
        pFVar33 = (FScriptContainerElement *)0x0;
        uVar31 = uVar38;
        if (0 < (int)uVar36) {
          local_190 = 0;
          local_158 = local_170 * 8;
          lVar41 = local_170 * 0x18;
          uVar32 = uVar47;
          do {
            iVar25 = (int)uVar32;
            uVar45 = (uint)pFVar33;
            pFVar24 = pFVar33;
            puVar21 = (undefined8 *)
                      (**(code **)(this->_padding_ + 0x18))
                                (this,local_68,*piVar22,iVar15 + iVar25,pFVar33);
            uVar11 = *puVar21;
            uVar12 = puVar21[1];
            uVar2 = puVar21[2];
            uVar31 = 0;
            if ((int)uVar44 < (int)this->_padding_) {
              uVar31 = ~uVar44 >> 0x1f;
            }
            if (uVar31 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar44;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            lVar27 = this->_padding_;
            puVar21 = (undefined8 *)(lVar27 + lVar41);
            *puVar21 = uVar11;
            puVar21[1] = uVar12;
            *(undefined8 *)(lVar27 + 0x10 + lVar41) = uVar2;
            uVar31 = 0;
            if (iVar25 < (this->VertexIds).ArrayNum) {
              uVar31 = ~uVar38 >> 0x1f;
            }
            if (uVar31 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)iVar25;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            pFVar40 = (this_00->AllocatorInstance).Data;
            uVar31 = 0;
            if ((int)uVar45 < *(int *)(pFVar40 + lVar29 + 8)) {
              uVar31 = ~uVar45 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (pFVar24 = pFVar33,
               bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar10 = (code *)swi(3);
              pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
              return pFVar20;
            }
            uVar32 = (longlong)pFVar33 << 0x20;
            *(uint *)(local_190 + *(longlong *)(pFVar40 + lVar29)) = uVar44;
            uVar31 = 0;
            if ((int)uVar44 < (this->VertexIdsToColumnRow).ArrayNum) {
              uVar31 = ~uVar44 >> 0x1f;
            }
            if (uVar31 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar44;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            uVar44 = uVar44 + 1;
            lVar41 = lVar41 + 0x18;
            local_170 = local_170 + 1;
            pFVar33 = (FScriptContainerElement *)(ulonglong)(uVar45 + 1);
            local_190 = local_190 + 4;
            *(ulonglong *)((this->VertexIdsToColumnRow).AllocatorInstance.Data + local_158) =
                 uVar32 | uVar47;
            local_158 = local_158 + 8;
            uVar32 = (ulonglong)local_194;
            uVar31 = local_194;
          } while ((int)(uVar45 + 1) < (int)uVar36);
        }
        local_194 = uVar31 + 1;
        uVar47 = (ulonglong)local_194;
        iVar25 = this->NumSteps;
        lVar29 = lVar29 + 0x10;
      } while ((int)(iVar15 + local_194) < iVar25 + 1);
    }
    piVar22 = piVar22 + 1;
    if (piVar22 == local_128 + 2) break;
    iVar15 = *piVar22;
  }
  this_01 = &this->FaceDesc;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(this_01,this->NumQuads << 2,Default);
  puVar26 = (uint *)&local_110;
  uVar44 = 0;
  do {
    uVar38 = *puVar26;
    if (uVar38 < 6) {
      lVar29 = (longlong)(int)uVar44;
      switch(uVar38) {
      default:
        if (uVar38 == 0) {
          uVar38 = 0;
          this->RightStartFaceId = uVar44;
        }
        else {
          uVar38 = this->LeftSideColumnId;
          this->LeftStartFaceId = uVar44;
        }
        if (0 < this->NumSteps) {
          lVar41 = (longlong)(int)uVar38 << 4;
          uVar31 = uVar38;
          do {
            local_180 = 0;
            uVar45 = ~uVar31 >> 0x1f;
            uVar36 = 0;
            while( true ) {
              uVar30 = 0;
              if ((int)uVar31 < (this->VertexIds).ArrayNum) {
                uVar30 = uVar45;
              }
              if (uVar30 == 0) {
                pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar31;
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar13) {
                  pcVar10 = (code *)swi(3);
                  pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                  return pFVar20;
                }
              }
              uVar30 = uVar31 + 1;
              if (*(int *)((this_00->AllocatorInstance).Data + lVar41 + 8) + -1 <= (int)uVar36)
              break;
              uVar30 = 0;
              if ((int)uVar31 < (this->VertexIds).ArrayNum) {
                uVar30 = uVar45;
              }
              if (uVar30 == 0) {
                pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar31;
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar13) {
                  pcVar10 = (code *)swi(3);
                  pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                  return pFVar20;
                }
              }
              pFVar33 = (this_00->AllocatorInstance).Data;
              uVar30 = 0;
              if ((int)uVar36 < *(int *)(pFVar33 + lVar41 + 8)) {
                uVar30 = ~uVar36 >> 0x1f;
              }
              if (uVar30 == 0) {
                pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar36;
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar13) {
                  pcVar10 = (code *)swi(3);
                  pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                  return pFVar20;
                }
              }
              uVar8 = *(undefined4 *)(local_180 + *(longlong *)(pFVar33 + lVar41));
              uVar30 = 0;
              if ((int)uVar44 < (this->FaceDesc).ArrayNum) {
                uVar30 = ~uVar44 >> 0x1f;
              }
              if (uVar30 == 0) {
                pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar44;
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar13) {
                  pcVar10 = (code *)swi(3);
                  pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                  return pFVar20;
                }
              }
              *(undefined4 *)((this_01->AllocatorInstance).Data + lVar29 * 4) = uVar8;
              uVar30 = uVar44 + 1;
              uVar17 = 0;
              if ((int)uVar31 < (this->VertexIds).ArrayNum) {
                uVar17 = uVar45;
              }
              if (uVar17 == 0) {
                pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar31;
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar13) {
                  pcVar10 = (code *)swi(3);
                  pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                  return pFVar20;
                }
              }
              pFVar33 = (this_00->AllocatorInstance).Data;
              uVar23 = uVar36 + 1;
              uVar17 = 0;
              if ((int)uVar23 < *(int *)(pFVar33 + lVar41 + 8)) {
                uVar17 = ~uVar23 >> 0x1f;
              }
              if (uVar17 == 0) {
                pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar23;
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar13) {
                  pcVar10 = (code *)swi(3);
                  pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                  return pFVar20;
                }
              }
              lVar27 = local_180 + 4;
              uVar8 = *(undefined4 *)(lVar27 + *(longlong *)(pFVar33 + lVar41));
              uVar17 = 0;
              if ((int)uVar30 < (this->FaceDesc).ArrayNum) {
                uVar17 = ~uVar30 >> 0x1f;
              }
              if (uVar17 == 0) {
                pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar30;
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar13) {
                  pcVar10 = (code *)swi(3);
                  pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                  return pFVar20;
                }
              }
              uVar43 = uVar31 + 1;
              *(undefined4 *)((this_01->AllocatorInstance).Data + lVar29 * 4 + 4) = uVar8;
              uVar17 = uVar44 + 2;
              uVar30 = 0;
              if ((int)uVar43 < (this->VertexIds).ArrayNum) {
                uVar30 = ~uVar43 >> 0x1f;
              }
              if (uVar30 == 0) {
                pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar43;
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar13) {
                  pcVar10 = (code *)swi(3);
                  pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                  return pFVar20;
                }
              }
              pFVar33 = (this_00->AllocatorInstance).Data;
              pFVar40 = (FScriptContainerElement *)(longlong)(int)uVar23;
              uVar30 = 0;
              if ((int)uVar23 < *(int *)(pFVar33 + lVar41 + 0x18)) {
                uVar30 = ~uVar23 >> 0x1f;
              }
              if ((uVar30 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , pFVar24 = pFVar40, bVar13)) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
              pFVar40 = (FScriptContainerElement *)(longlong)(int)uVar17;
              uVar8 = *(undefined4 *)(lVar27 + *(longlong *)(pFVar33 + lVar41 + 0x10));
              uVar30 = 0;
              if ((int)uVar17 < (this->FaceDesc).ArrayNum) {
                uVar30 = ~uVar17 >> 0x1f;
              }
              if ((uVar30 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , pFVar24 = pFVar40, bVar13)) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
              *(undefined4 *)((this_01->AllocatorInstance).Data + lVar29 * 4 + 8) = uVar8;
              uVar30 = 0;
              if ((int)uVar43 < (this->VertexIds).ArrayNum) {
                uVar30 = ~uVar43 >> 0x1f;
              }
              if (uVar30 == 0) {
                pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar43;
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar13) {
                  pcVar10 = (code *)swi(3);
                  pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                  return pFVar20;
                }
              }
              pFVar33 = (this_00->AllocatorInstance).Data;
              uVar30 = 0;
              if ((int)uVar36 < *(int *)(pFVar33 + lVar41 + 0x18)) {
                uVar30 = ~uVar36 >> 0x1f;
              }
              if (uVar30 == 0) {
                pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar36;
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar13) {
                  pcVar10 = (code *)swi(3);
                  pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                  return pFVar20;
                }
              }
              uVar30 = uVar44 + 3;
              uVar8 = *(undefined4 *)(local_180 + *(longlong *)(pFVar33 + lVar41 + 0x10));
              uVar36 = 0;
              if ((int)uVar30 < (this->FaceDesc).ArrayNum) {
                uVar36 = ~uVar30 >> 0x1f;
              }
              if (uVar36 == 0) {
                pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar30;
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar13) {
                  pcVar10 = (code *)swi(3);
                  pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                  return pFVar20;
                }
              }
              uVar44 = uVar44 + 4;
              *(undefined4 *)((this_01->AllocatorInstance).Data + lVar29 * 4 + 0xc) = uVar8;
              lVar29 = lVar29 + 4;
              local_180 = lVar27;
              uVar36 = uVar23;
            }
            lVar41 = lVar41 + 0x10;
            uVar31 = uVar30;
          } while ((int)(uVar30 - uVar38) < this->NumSteps);
        }
        break;
      case 2:
        uVar38 = 0;
        this->FrontStartFaceId = uVar44;
        if (0 < this->NumSteps) {
          local_180 = 0;
          do {
            uVar31 = 0;
            if ((int)uVar38 < (this->VertexIds).ArrayNum) {
              uVar31 = ~uVar38 >> 0x1f;
            }
            if (uVar31 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar38;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            uVar36 = this->LeftSideColumnId + uVar38;
            iVar25 = *(int *)((this_00->AllocatorInstance).Data + local_180 + 8);
            uVar45 = iVar25 - 1;
            uVar31 = 0;
            if ((int)uVar36 < (this->VertexIds).ArrayNum) {
              uVar31 = ~uVar36 >> 0x1f;
            }
            if (uVar31 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar36;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            pFVar33 = (this_00->AllocatorInstance).Data;
            uVar31 = iVar25 - 2;
            uVar30 = 0;
            if ((int)uVar31 < *(int *)(pFVar33 + (longlong)(int)uVar36 * 0x10 + 8)) {
              uVar30 = ~uVar31 >> 0x1f;
            }
            if (uVar30 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar31;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            uVar8 = *(undefined4 *)
                     (*(longlong *)(pFVar33 + (longlong)(int)uVar36 * 0x10) +
                     (longlong)(iVar25 + -2) * 4);
            uVar31 = 0;
            if ((int)uVar44 < (this->FaceDesc).ArrayNum) {
              uVar31 = ~uVar44 >> 0x1f;
            }
            if (uVar31 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar44;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            *(undefined4 *)((this_01->AllocatorInstance).Data + lVar29 * 4) = uVar8;
            uVar31 = uVar44 + 1;
            uVar30 = this->LeftSideColumnId + uVar38;
            uVar36 = 0;
            if ((int)uVar30 < (this->VertexIds).ArrayNum) {
              uVar36 = ~uVar30 >> 0x1f;
            }
            if (uVar36 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar30;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            pFVar33 = (this_00->AllocatorInstance).Data;
            uVar36 = 0;
            if ((int)uVar45 < *(int *)(pFVar33 + (longlong)(int)uVar30 * 0x10 + 8)) {
              uVar36 = ~uVar45 >> 0x1f;
            }
            if (uVar36 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar45;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            pFVar40 = (FScriptContainerElement *)(longlong)(int)uVar31;
            uVar8 = *(undefined4 *)
                     (*(longlong *)(pFVar33 + (longlong)(int)uVar30 * 0x10) +
                     (longlong)(int)uVar45 * 4);
            uVar36 = 0;
            if ((int)uVar31 < (this->FaceDesc).ArrayNum) {
              uVar36 = ~uVar31 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               pFVar24 = pFVar40, bVar13)) {
              pcVar10 = (code *)swi(3);
              pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
              return pFVar20;
            }
            *(undefined4 *)((this_01->AllocatorInstance).Data + lVar29 * 4 + 4) = uVar8;
            uVar31 = 0;
            if ((int)uVar38 < (this->VertexIds).ArrayNum) {
              uVar31 = ~uVar38 >> 0x1f;
            }
            if (uVar31 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar38;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            pFVar33 = (this_00->AllocatorInstance).Data;
            uVar31 = 0;
            if ((int)uVar45 < *(int *)(pFVar33 + local_180 + 8)) {
              uVar31 = ~uVar45 >> 0x1f;
            }
            if (uVar31 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar45;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            uVar36 = uVar44 + 2;
            uVar8 = *(undefined4 *)(*(longlong *)(pFVar33 + local_180) + (longlong)(int)uVar45 * 4);
            uVar31 = 0;
            if ((int)uVar36 < (this->FaceDesc).ArrayNum) {
              uVar31 = ~uVar36 >> 0x1f;
            }
            if (uVar31 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar36;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            uVar36 = uVar44 + 3;
            *(undefined4 *)((this_01->AllocatorInstance).Data + lVar29 * 4 + 8) = uVar8;
            uVar31 = 0;
            if ((int)uVar38 < (this->VertexIds).ArrayNum) {
              uVar31 = ~uVar38 >> 0x1f;
            }
            if (uVar31 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar38;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            pFVar33 = (this_00->AllocatorInstance).Data;
            uVar31 = 0;
            if (iVar25 + -2 < *(int *)(pFVar33 + local_180 + 8)) {
              uVar31 = -uVar45 >> 0x1f;
            }
            if (uVar31 == 0) {
              pFVar24 = (FScriptContainerElement *)((longlong)(int)uVar45 + -1);
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            uVar8 = *(undefined4 *)
                     (*(longlong *)(pFVar33 + local_180) + -4 + (longlong)(int)uVar45 * 4);
            uVar31 = 0;
            if ((int)uVar36 < (this->FaceDesc).ArrayNum) {
              uVar31 = ~uVar36 >> 0x1f;
            }
            if (uVar31 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar36;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            local_180 = local_180 + 0x10;
            uVar44 = uVar44 + 4;
            uVar38 = uVar38 + 1;
            *(undefined4 *)((this_01->AllocatorInstance).Data + lVar29 * 4 + 0xc) = uVar8;
            lVar29 = lVar29 + 4;
          } while ((int)uVar38 < this->NumSteps);
        }
        break;
      case 3:
        uVar38 = 0;
        this->TopStartFaceId = uVar44;
        if (0 < this->NumSteps) {
          local_180 = 0;
          do {
            uVar31 = 0;
            if ((int)uVar38 < (this->VertexIds).ArrayNum) {
              uVar31 = ~uVar38 >> 0x1f;
            }
            if (uVar31 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar38;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            uVar36 = this->LeftSideColumnId + uVar38;
            uVar45 = *(int *)((this_00->AllocatorInstance).Data + local_180 + 8) - 1;
            uVar31 = 0;
            if ((int)uVar36 < (this->VertexIds).ArrayNum) {
              uVar31 = ~uVar36 >> 0x1f;
            }
            if (uVar31 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar36;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            pFVar33 = (this_00->AllocatorInstance).Data;
            uVar31 = 0;
            if ((int)uVar45 < *(int *)(pFVar33 + (longlong)(int)uVar36 * 0x10 + 8)) {
              uVar31 = ~uVar45 >> 0x1f;
            }
            if (uVar31 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar45;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            uVar8 = *(undefined4 *)
                     (*(longlong *)(pFVar33 + (longlong)(int)uVar36 * 0x10) +
                     (longlong)(int)uVar45 * 4);
            uVar31 = 0;
            if ((int)uVar44 < (this->FaceDesc).ArrayNum) {
              uVar31 = ~uVar44 >> 0x1f;
            }
            if (uVar31 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar44;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            *(undefined4 *)((this_01->AllocatorInstance).Data + lVar29 * 4) = uVar8;
            uVar31 = uVar44 + 1;
            uVar30 = this->LeftSideColumnId + 1 + uVar38;
            uVar36 = 0;
            if ((int)uVar30 < (this->VertexIds).ArrayNum) {
              uVar36 = ~uVar30 >> 0x1f;
            }
            if (uVar36 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar30;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            pFVar33 = (this_00->AllocatorInstance).Data;
            uVar36 = 0;
            if ((int)uVar45 < *(int *)(pFVar33 + (longlong)(int)uVar30 * 0x10 + 8)) {
              uVar36 = ~uVar45 >> 0x1f;
            }
            if (uVar36 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar45;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            pFVar40 = (FScriptContainerElement *)(longlong)(int)uVar31;
            uVar8 = *(undefined4 *)
                     (*(longlong *)(pFVar33 + (longlong)(int)uVar30 * 0x10) +
                     (longlong)(int)uVar45 * 4);
            uVar36 = 0;
            if ((int)uVar31 < (this->FaceDesc).ArrayNum) {
              uVar36 = ~uVar31 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               pFVar24 = pFVar40, bVar13)) {
              pcVar10 = (code *)swi(3);
              pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
              return pFVar20;
            }
            uVar36 = uVar38 + 1;
            *(undefined4 *)((this_01->AllocatorInstance).Data + lVar29 * 4 + 4) = uVar8;
            uVar31 = 0;
            if ((int)uVar36 < (this->VertexIds).ArrayNum) {
              uVar31 = ~uVar36 >> 0x1f;
            }
            if (uVar31 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar36;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            pFVar33 = (this_00->AllocatorInstance).Data;
            uVar31 = 0;
            if ((int)uVar45 < *(int *)(pFVar33 + local_180 + 0x18)) {
              uVar31 = ~uVar45 >> 0x1f;
            }
            if (uVar31 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar45;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            uVar36 = uVar44 + 2;
            uVar8 = *(undefined4 *)
                     (*(longlong *)(pFVar33 + local_180 + 0x10) + (longlong)(int)uVar45 * 4);
            uVar31 = 0;
            if ((int)uVar36 < (this->FaceDesc).ArrayNum) {
              uVar31 = ~uVar36 >> 0x1f;
            }
            if (uVar31 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar36;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            uVar36 = uVar44 + 3;
            *(undefined4 *)((this_01->AllocatorInstance).Data + lVar29 * 4 + 8) = uVar8;
            uVar31 = 0;
            if ((int)uVar38 < (this->VertexIds).ArrayNum) {
              uVar31 = ~uVar38 >> 0x1f;
            }
            if (uVar31 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar38;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            pFVar33 = (this_00->AllocatorInstance).Data;
            uVar31 = 0;
            if ((int)uVar45 < *(int *)(pFVar33 + local_180 + 8)) {
              uVar31 = ~uVar45 >> 0x1f;
            }
            if (uVar31 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar45;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            uVar8 = *(undefined4 *)(*(longlong *)(pFVar33 + local_180) + (longlong)(int)uVar45 * 4);
            uVar31 = 0;
            if ((int)uVar36 < (this->FaceDesc).ArrayNum) {
              uVar31 = ~uVar36 >> 0x1f;
            }
            if (uVar31 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar36;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            local_180 = local_180 + 0x10;
            uVar44 = uVar44 + 4;
            uVar38 = uVar38 + 1;
            *(undefined4 *)((this_01->AllocatorInstance).Data + lVar29 * 4 + 0xc) = uVar8;
            lVar29 = lVar29 + 4;
          } while ((int)uVar38 < this->NumSteps);
        }
        break;
      case 4:
        uVar38 = this->NumSteps;
        uVar31 = 0;
        this->BackStartFaceId = uVar44;
        if (0 < (int)uVar38) {
          local_190 = 0;
          do {
            uVar36 = 0;
            if ((int)uVar38 < (this->VertexIds).ArrayNum) {
              uVar36 = ~uVar38 >> 0x1f;
            }
            if (uVar36 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar38;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            pFVar33 = (this_00->AllocatorInstance).Data;
            uVar36 = 0;
            if ((int)uVar31 < *(int *)(pFVar33 + (longlong)(int)uVar38 * 0x10 + 8)) {
              uVar36 = ~uVar31 >> 0x1f;
            }
            if (uVar36 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar31;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            uVar8 = *(undefined4 *)
                     (local_190 + *(longlong *)(pFVar33 + (longlong)(int)uVar38 * 0x10));
            uVar38 = 0;
            if ((int)uVar44 < (this->FaceDesc).ArrayNum) {
              uVar38 = ~uVar44 >> 0x1f;
            }
            if (uVar38 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar44;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            *(undefined4 *)((this_01->AllocatorInstance).Data + lVar29 * 4) = uVar8;
            uVar38 = uVar44 + 1;
            uVar36 = this->NumSteps;
            pFVar33 = (FScriptContainerElement *)(longlong)(int)uVar36;
            uVar45 = 0;
            if ((int)uVar36 < (this->VertexIds).ArrayNum) {
              uVar45 = ~uVar36 >> 0x1f;
            }
            if ((uVar45 == 0) &&
               (pFVar24 = pFVar33,
               bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar10 = (code *)swi(3);
              pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
              return pFVar20;
            }
            pFVar40 = (this_00->AllocatorInstance).Data;
            uVar45 = uVar31 + 1;
            uVar36 = 0;
            if ((int)uVar45 < *(int *)(pFVar40 + (longlong)pFVar33 * 0x10 + 8)) {
              uVar36 = ~uVar45 >> 0x1f;
            }
            if (uVar36 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar45;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            uVar8 = *(undefined4 *)
                     (local_190 + 4 + *(longlong *)(pFVar40 + (longlong)pFVar33 * 0x10));
            uVar36 = 0;
            if ((int)uVar38 < (this->FaceDesc).ArrayNum) {
              uVar36 = ~uVar38 >> 0x1f;
            }
            if (uVar36 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar38;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            uVar45 = uVar44 + 2;
            *(undefined4 *)((this_01->AllocatorInstance).Data + lVar29 * 4 + 4) = uVar8;
            uVar36 = this->LeftSideColumnId + this->NumSteps;
            uVar38 = 0;
            if ((int)uVar36 < (this->VertexIds).ArrayNum) {
              uVar38 = ~uVar36 >> 0x1f;
            }
            if (uVar38 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar36;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            pFVar33 = (this_00->AllocatorInstance).Data;
            uVar38 = 0;
            if ((int)(uVar31 + 1) < *(int *)(pFVar33 + (longlong)(int)uVar36 * 0x10 + 8)) {
              uVar38 = ~(uVar31 + 1) >> 0x1f;
            }
            if (uVar38 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)(uVar31 + 1);
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            uVar8 = *(undefined4 *)
                     (local_190 + 4 + *(longlong *)(pFVar33 + (longlong)(int)uVar36 * 0x10));
            uVar38 = 0;
            if ((int)uVar45 < (this->FaceDesc).ArrayNum) {
              uVar38 = ~uVar45 >> 0x1f;
            }
            if (uVar38 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar45;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            uVar45 = uVar44 + 3;
            *(undefined4 *)((this_01->AllocatorInstance).Data + lVar29 * 4 + 8) = uVar8;
            uVar36 = this->LeftSideColumnId + this->NumSteps;
            uVar38 = 0;
            if ((int)uVar36 < (this->VertexIds).ArrayNum) {
              uVar38 = ~uVar36 >> 0x1f;
            }
            if (uVar38 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar36;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            pFVar33 = (this_00->AllocatorInstance).Data;
            uVar38 = 0;
            if ((int)uVar31 < *(int *)(pFVar33 + (longlong)(int)uVar36 * 0x10 + 8)) {
              uVar38 = ~uVar31 >> 0x1f;
            }
            if (uVar38 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar31;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            uVar8 = *(undefined4 *)
                     (local_190 + *(longlong *)(pFVar33 + (longlong)(int)uVar36 * 0x10));
            uVar38 = 0;
            if ((int)uVar45 < (this->FaceDesc).ArrayNum) {
              uVar38 = ~uVar45 >> 0x1f;
            }
            if (uVar38 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar45;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            uVar31 = uVar31 + 1;
            local_190 = local_190 + 4;
            *(undefined4 *)((this_01->AllocatorInstance).Data + lVar29 * 4 + 0xc) = uVar8;
            uVar44 = uVar44 + 4;
            uVar38 = this->NumSteps;
            lVar29 = lVar29 + 4;
          } while ((int)uVar31 < (int)uVar38);
        }
        break;
      case 5:
        uVar38 = 0;
        this->BottomStartFaceId = uVar44;
        if (0 < this->NumSteps) {
          local_180 = 0;
          do {
            uVar31 = 0;
            if ((int)uVar38 < (this->VertexIds).ArrayNum) {
              uVar31 = ~uVar38 >> 0x1f;
            }
            if (uVar31 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar38;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            pFVar33 = (this_00->AllocatorInstance).Data;
            if (*(int *)(pFVar33 + local_180 + 8) < 1) {
              pFVar24 = (FScriptContainerElement *)0x0;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            uVar8 = **(undefined4 **)(pFVar33 + local_180);
            uVar31 = 0;
            if ((int)uVar44 < (this->FaceDesc).ArrayNum) {
              uVar31 = ~uVar44 >> 0x1f;
            }
            if (uVar31 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar44;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            uVar36 = uVar38 + 1;
            uVar45 = uVar44 + 1;
            *(undefined4 *)((this_01->AllocatorInstance).Data + lVar29 * 4) = uVar8;
            uVar31 = 0;
            if ((int)uVar36 < (this->VertexIds).ArrayNum) {
              uVar31 = ~uVar36 >> 0x1f;
            }
            if (uVar31 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar36;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            pFVar33 = (this_00->AllocatorInstance).Data;
            if (*(int *)(pFVar33 + local_180 + 0x18) < 1) {
              pFVar24 = (FScriptContainerElement *)0x0;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            uVar8 = **(undefined4 **)(pFVar33 + local_180 + 0x10);
            uVar31 = 0;
            if ((int)uVar45 < (this->FaceDesc).ArrayNum) {
              uVar31 = ~uVar45 >> 0x1f;
            }
            if (uVar31 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar45;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            *(undefined4 *)((this_01->AllocatorInstance).Data + lVar29 * 4 + 4) = uVar8;
            uVar31 = uVar44 + 2;
            uVar45 = this->LeftSideColumnId + 1 + uVar38;
            uVar36 = 0;
            if ((int)uVar45 < (this->VertexIds).ArrayNum) {
              uVar36 = ~uVar45 >> 0x1f;
            }
            if (uVar36 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar45;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            pFVar33 = (this_00->AllocatorInstance).Data;
            if (*(int *)(pFVar33 + (longlong)(int)uVar45 * 0x10 + 8) < 1) {
              pFVar24 = (FScriptContainerElement *)0x0;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            uVar8 = **(undefined4 **)(pFVar33 + (longlong)(int)uVar45 * 0x10);
            uVar36 = 0;
            if ((int)uVar31 < (this->FaceDesc).ArrayNum) {
              uVar36 = ~uVar31 >> 0x1f;
            }
            if (uVar36 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar31;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            uVar45 = uVar44 + 3;
            *(undefined4 *)((this_01->AllocatorInstance).Data + lVar29 * 4 + 8) = uVar8;
            uVar36 = this->LeftSideColumnId + uVar38;
            uVar31 = 0;
            if ((int)uVar36 < (this->VertexIds).ArrayNum) {
              uVar31 = ~uVar36 >> 0x1f;
            }
            if (uVar31 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar36;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            pFVar33 = (this_00->AllocatorInstance).Data;
            if (*(int *)(pFVar33 + (longlong)(int)uVar36 * 0x10 + 8) < 1) {
              pFVar24 = (FScriptContainerElement *)0x0;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            uVar8 = **(undefined4 **)(pFVar33 + (longlong)(int)uVar36 * 0x10);
            uVar31 = 0;
            if ((int)uVar45 < (this->FaceDesc).ArrayNum) {
              uVar31 = ~uVar45 >> 0x1f;
            }
            if (uVar31 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar45;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            uVar38 = uVar38 + 1;
            *(undefined4 *)((this_01->AllocatorInstance).Data + lVar29 * 4 + 0xc) = uVar8;
            uVar44 = uVar44 + 4;
            lVar29 = lVar29 + 4;
            local_180 = local_180 + 0x10;
          } while ((int)uVar38 < this->NumSteps);
        }
      }
    }
    puVar26 = puVar26 + 1;
  } while (puVar26 != (uint *)&local_f8);
  this->LastFaceId = uVar44;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->NormalDesc,this->NumQuads << 2,Default);
  local_178 = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->UVDesc,this->NumQuads << 2,Default);
  local_188 = 0;
  fVar48 = (float)(**(code **)(this->_padding_ + 0x30))(this);
  fVar49 = __real_3f800000;
  if (this->bScaleUVByAspectRatio != false) {
    fVar49 = __real_3f800000 / fVar48;
  }
  iVar25 = this->BackStartFaceId;
  iVar15 = this->TopStartFaceId;
  puVar26 = (uint *)&local_110;
  iVar16 = this->TopStartFaceId;
  iVar3 = this->FrontStartFaceId;
  iVar4 = this->BottomStartFaceId;
  iVar5 = this->BackStartFaceId;
  iVar6 = this->LastFaceId;
  iVar7 = this->BottomStartFaceId;
  do {
    uVar31 = local_178;
    uVar38 = local_188;
    uVar44 = *puVar26;
    if (uVar44 < 6) {
      local_170 = (longlong)(int)local_178;
      lVar29 = (longlong)(int)local_188;
      switch(uVar44) {
      default:
        if (uVar44 == 0) {
          iVar37 = 0;
        }
        else {
          iVar37 = this->NumVertsPerSide;
        }
        iVar34 = 0;
        if (0 < this->NumVertsPerSide) {
          local_170 = local_170 * 0xc;
          lVar29 = lVar29 * 8;
          do {
            puVar21 = (undefined8 *)
                      (**(code **)(this->_padding_ + 0x20))(this,local_b0,*puVar26,iVar34 + iVar37);
            uVar2 = *puVar21;
            uVar8 = *(undefined4 *)(puVar21 + 1);
            uVar44 = 0;
            if ((int)local_178 < (int)this->_padding_) {
              uVar44 = ~local_178 >> 0x1f;
            }
            if ((uVar44 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar10 = (code *)swi(3);
              pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
              return pFVar20;
            }
            lVar41 = this->_padding_;
            local_178 = local_178 + 1;
            *(undefined8 *)(lVar41 + local_170) = uVar2;
            uVar44 = *puVar26;
            *(undefined4 *)(lVar41 + 8 + local_170) = uVar8;
            local_170 = local_170 + 0xc;
            pFVar24 = (FScriptContainerElement *)(ulonglong)(uint)(iVar34 + iVar37);
            puVar21 = (undefined8 *)
                      (**(code **)(this->_padding_ + 0x28))
                                (this,local_e0,uVar44,iVar34,pFVar24,fVar49);
            pFVar33 = (FScriptContainerElement *)(longlong)(int)local_188;
            uVar2 = *puVar21;
            uVar44 = 0;
            if ((int)local_188 < (int)this->_padding_) {
              uVar44 = ~local_188 >> 0x1f;
            }
            if ((uVar44 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               pFVar24 = pFVar33, bVar13)) {
              pcVar10 = (code *)swi(3);
              pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
              return pFVar20;
            }
            local_188 = local_188 + 1;
            iVar34 = iVar34 + 1;
            *(undefined8 *)(lVar29 + this->_padding_) = uVar2;
            lVar29 = lVar29 + 8;
          } while (iVar34 < this->NumVertsPerSide);
        }
        if (*puVar26 == 0) {
          uVar44 = 0;
        }
        else {
          uVar44 = this->NumQuadsPerSide << 2;
        }
        lVar29 = (longlong)(this->NumQuadsPerSide << 2);
        if (0 < this->NumQuadsPerSide << 2) {
          lVar41 = (longlong)(int)uVar44 * 4;
          do {
            uVar31 = ~uVar44 >> 0x1f;
            uVar38 = 0;
            if ((int)uVar44 < (this->FaceDesc).ArrayNum) {
              uVar38 = uVar31;
            }
            if (uVar38 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar44;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            uVar8 = *(undefined4 *)((this->FaceDesc).AllocatorInstance.Data + lVar41);
            uVar38 = 0;
            if ((int)uVar44 < (this->NormalDesc).ArrayNum) {
              uVar38 = uVar31;
            }
            if (uVar38 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar44;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            *(undefined4 *)((this->NormalDesc).AllocatorInstance.Data + lVar41) = uVar8;
            uVar38 = 0;
            if ((int)uVar44 < (this->FaceDesc).ArrayNum) {
              uVar38 = uVar31;
            }
            if (uVar38 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar44;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            uVar8 = *(undefined4 *)((this->FaceDesc).AllocatorInstance.Data + lVar41);
            uVar38 = 0;
            if ((int)uVar44 < (this->UVDesc).ArrayNum) {
              uVar38 = ~uVar44 >> 0x1f;
            }
            if (uVar38 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar44;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            uVar44 = uVar44 + 1;
            *(undefined4 *)((this->UVDesc).AllocatorInstance.Data + lVar41) = uVar8;
            lVar41 = lVar41 + 4;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
        }
        break;
      case 2:
      case 3:
        iVar37 = iVar25 - iVar15;
        piVar22 = &this->TopStartFaceId;
        if (uVar44 == 2) {
          iVar37 = iVar16 - iVar3;
          piVar22 = &this->FrontStartFaceId;
        }
        iVar34 = 0;
        uVar44 = *piVar22;
        if (0 < iVar37) {
          local_180 = local_170 * 0xc;
          lVar29 = lVar29 * 8;
          lVar41 = (longlong)(int)uVar44 * 4;
          uVar38 = uVar44;
          local_170 = (longlong)iVar37;
          do {
            uVar31 = 0;
            if ((int)uVar38 < (this->FaceDesc).ArrayNum) {
              uVar31 = ~uVar38 >> 0x1f;
            }
            if (uVar31 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar38;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            uVar31 = *(uint *)((this->FaceDesc).AllocatorInstance.Data + lVar41);
            puVar21 = (undefined8 *)
                      (**(code **)(this->_padding_ + 0x20))(this,local_a4,*puVar26,uVar31,pFVar24);
            uVar2 = *puVar21;
            uVar8 = *(undefined4 *)(puVar21 + 1);
            uVar36 = 0;
            if ((int)local_178 < (int)this->_padding_) {
              uVar36 = ~local_178 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar10 = (code *)swi(3);
              pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
              return pFVar20;
            }
            lVar27 = this->_padding_;
            *(undefined8 *)(lVar27 + local_180) = uVar2;
            *(undefined4 *)(lVar27 + 8 + local_180) = uVar8;
            uVar36 = 0;
            if ((int)uVar38 < (this->NormalDesc).ArrayNum) {
              uVar36 = ~uVar38 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar10 = (code *)swi(3);
              pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
              return pFVar20;
            }
            local_180 = local_180 + 0xc;
            *(uint *)((this->NormalDesc).AllocatorInstance.Data + lVar41) = local_178;
            local_178 = local_178 + 1;
            pFVar24 = (FScriptContainerElement *)(ulonglong)uVar31;
            puVar21 = (undefined8 *)
                      (**(code **)(this->_padding_ + 0x28))
                                (this,local_d8,*puVar26,(int)((iVar34 >> 0x1f & 3U) + iVar34) >> 2,
                                 pFVar24,fVar49);
            pFVar33 = (FScriptContainerElement *)(longlong)(int)local_188;
            uVar2 = *puVar21;
            uVar31 = 0;
            if ((int)local_188 < (int)this->_padding_) {
              uVar31 = ~local_188 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               pFVar24 = pFVar33, bVar13)) {
              pcVar10 = (code *)swi(3);
              pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
              return pFVar20;
            }
            uVar36 = uVar44 + iVar34;
            *(undefined8 *)(this->_padding_ + lVar29) = uVar2;
            uVar31 = 0;
            if ((int)uVar36 < (this->UVDesc).ArrayNum) {
              uVar31 = ~uVar36 >> 0x1f;
            }
            if (uVar31 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar36;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            uVar38 = uVar38 + 1;
            lVar29 = lVar29 + 8;
            iVar34 = iVar34 + 1;
            *(uint *)((this->UVDesc).AllocatorInstance.Data + lVar41) = local_188;
            local_188 = local_188 + 1;
            lVar41 = lVar41 + 4;
            local_170 = local_170 + -1;
          } while (local_170 != 0);
        }
        break;
      case 4:
      case 5:
        piVar22 = &this->BottomStartFaceId;
        iVar37 = iVar6 - iVar7;
        if (uVar44 == 4) {
          piVar22 = &this->BackStartFaceId;
          iVar37 = iVar4 - iVar5;
        }
        uVar44 = *piVar22;
        uVar47 = (ulonglong)(int)uVar44;
        local_184 = 0;
        if (0 < (longlong)iVar37) {
          lVar41 = uVar47 * 4 + 4;
          local_1a0 = ((longlong)iVar37 - 1U >> 2) + 1;
          uVar36 = uVar44;
          do {
            pcVar10 = *(code **)(this->_padding_ + 0x20);
            uVar45 = 0;
            if ((int)uVar36 < (this->FaceDesc).ArrayNum) {
              uVar45 = ~uVar36 >> 0x1f;
            }
            if (uVar45 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar36;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            puVar21 = (undefined8 *)
                      (*pcVar10)(this,local_98,*puVar26,
                                 *(undefined4 *)
                                  ((this->FaceDesc).AllocatorInstance.Data + lVar41 + -4),pFVar24);
            uVar2 = *puVar21;
            uVar8 = *(undefined4 *)(puVar21 + 1);
            uVar45 = 0;
            if ((int)local_178 < (int)this->_padding_) {
              uVar45 = ~local_178 >> 0x1f;
            }
            if (uVar45 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)local_178;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            uVar30 = uVar36 + 3;
            lVar27 = this->_padding_;
            *(undefined8 *)(lVar27 + local_170 * 0xc) = uVar2;
            *(undefined4 *)(lVar27 + 8 + local_170 * 0xc) = uVar8;
            pcVar10 = *(code **)(this->_padding_ + 0x20);
            uVar45 = 0;
            if ((int)uVar30 < (this->FaceDesc).ArrayNum) {
              uVar45 = ~uVar30 >> 0x1f;
            }
            if (uVar45 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar30;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            puVar21 = (undefined8 *)
                      (*pcVar10)(this,local_8c,*puVar26,
                                 *(undefined4 *)
                                  ((this->FaceDesc).AllocatorInstance.Data + lVar41 + 8),pFVar24);
            uVar2 = *puVar21;
            uVar8 = *(undefined4 *)(puVar21 + 1);
            uVar45 = 0;
            if ((int)(local_178 + 1) < (int)this->_padding_) {
              uVar45 = ~(local_178 + 1) >> 0x1f;
            }
            if ((uVar45 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar10 = (code *)swi(3);
              pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
              return pFVar20;
            }
            lVar42 = this->_padding_;
            uVar30 = local_178 + 2;
            lVar27 = local_170 + 2;
            *(undefined8 *)(lVar42 + 0xc + local_170 * 0xc) = uVar2;
            *(undefined4 *)(lVar42 + 0x14 + local_170 * 0xc) = uVar8;
            uVar17 = local_184 + uVar44;
            iVar34 = (int)((local_184 >> 0x1f & 3U) + local_184) >> 2;
            pcVar10 = *(code **)(this->_padding_ + 0x28);
            uVar45 = 0;
            if ((int)uVar17 < (this->FaceDesc).ArrayNum) {
              uVar45 = ~uVar17 >> 0x1f;
            }
            if ((uVar45 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar10 = (code *)swi(3);
              pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
              return pFVar20;
            }
            puVar21 = (undefined8 *)
                      (*pcVar10)(this,local_d0,*puVar26,iVar34,
                                 *(undefined4 *)
                                  ((this->FaceDesc).AllocatorInstance.Data + lVar41 + -4),fVar49);
            uVar2 = *puVar21;
            uVar45 = 0;
            if ((int)local_188 < (int)this->_padding_) {
              uVar45 = ~local_188 >> 0x1f;
            }
            if ((uVar45 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar10 = (code *)swi(3);
              pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
              return pFVar20;
            }
            uVar45 = local_188 + 1;
            *(undefined8 *)(this->_padding_ + lVar29 * 8) = uVar2;
            pcVar10 = *(code **)(this->_padding_ + 0x28);
            uVar23 = 0;
            if ((int)(uVar17 + 3) < (this->FaceDesc).ArrayNum) {
              uVar23 = ~(uVar17 + 3) >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar10 = (code *)swi(3);
              pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
              return pFVar20;
            }
            uVar32 = (ulonglong)(uint)fVar49;
            pFVar24 = (FScriptContainerElement *)
                      (ulonglong)*(uint *)((this->FaceDesc).AllocatorInstance.Data + lVar41 + 8);
            puVar21 = (undefined8 *)(*pcVar10)(this,local_c8,*puVar26,iVar34,pFVar24,uVar32);
            iVar35 = (int)this->_padding_;
            uVar28 = (ulonglong)iVar35;
            uVar2 = *puVar21;
            uVar17 = 0;
            if ((int)uVar45 < iVar35) {
              uVar17 = ~uVar45 >> 0x1f;
            }
            if (uVar17 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar45;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              uVar32 = uVar28;
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            uVar45 = local_188 + 2;
            *(undefined8 *)(this->_padding_ + 8 + lVar29 * 8) = uVar2;
            lVar42 = lVar29 + 2;
            if (iVar37 <= local_184 + 4) {
              iVar35 = (this->FaceDesc).ArrayNum;
              uVar28 = (ulonglong)iVar35;
              uVar23 = local_184 + 1 + uVar44;
              pcVar10 = *(code **)(this->_padding_ + 0x20);
              uVar17 = 0;
              if ((int)uVar23 < iVar35) {
                uVar17 = ~uVar23 >> 0x1f;
              }
              if (uVar17 == 0) {
                pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar23;
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                uVar32 = uVar28;
                if (bVar13) {
                  pcVar10 = (code *)swi(3);
                  pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                  return pFVar20;
                }
              }
              puVar21 = (undefined8 *)
                        (*pcVar10)(this,local_80,*puVar26,
                                   *(undefined4 *)((this->FaceDesc).AllocatorInstance.Data + lVar41)
                                   ,pFVar24,uVar32);
              pFVar33 = (FScriptContainerElement *)(longlong)(int)uVar30;
              iVar35 = (int)this->_padding_;
              uVar28 = (ulonglong)iVar35;
              uVar2 = *puVar21;
              uVar8 = *(undefined4 *)(puVar21 + 1);
              uVar17 = 0;
              if ((int)uVar30 < iVar35) {
                uVar17 = ~uVar30 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , pFVar24 = pFVar33, uVar32 = uVar28, bVar13)) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
              uVar17 = local_184 + 2 + uVar44;
              lVar42 = this->_padding_;
              *(undefined8 *)(lVar42 + lVar27 * 0xc) = uVar2;
              *(undefined4 *)(lVar42 + 8 + lVar27 * 0xc) = uVar8;
              iVar35 = (this->FaceDesc).ArrayNum;
              uVar28 = (ulonglong)iVar35;
              pcVar10 = *(code **)(this->_padding_ + 0x20);
              uVar30 = 0;
              if ((int)uVar17 < iVar35) {
                uVar30 = ~uVar17 >> 0x1f;
              }
              if (uVar30 == 0) {
                pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar17;
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                uVar32 = uVar28;
                if (bVar13) {
                  pcVar10 = (code *)swi(3);
                  pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                  return pFVar20;
                }
              }
              puVar21 = (undefined8 *)
                        (*pcVar10)(this,local_74,*puVar26,
                                   *(undefined4 *)
                                    ((this->FaceDesc).AllocatorInstance.Data + lVar41 + 4),pFVar24,
                                   uVar32);
              uVar2 = *puVar21;
              uVar8 = *(undefined4 *)(puVar21 + 1);
              uVar30 = 0;
              if ((int)(local_178 + 3) < (int)this->_padding_) {
                uVar30 = ~(local_178 + 3) >> 0x1f;
              }
              if ((uVar30 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
              lVar42 = this->_padding_;
              *(undefined8 *)(lVar42 + 0xc + lVar27 * 0xc) = uVar2;
              *(undefined4 *)(lVar42 + 0x14 + lVar27 * 0xc) = uVar8;
              pcVar10 = *(code **)(this->_padding_ + 0x28);
              uVar30 = 0;
              if ((int)(local_184 + 1 + uVar44) < (this->FaceDesc).ArrayNum) {
                uVar30 = ~(local_184 + 1 + uVar44) >> 0x1f;
              }
              if ((uVar30 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
              puVar21 = (undefined8 *)
                        (*pcVar10)(this,local_c0,*puVar26,iVar34,
                                   *(undefined4 *)((this->FaceDesc).AllocatorInstance.Data + lVar41)
                                   ,fVar49);
              uVar2 = *puVar21;
              uVar30 = 0;
              if ((int)uVar45 < (int)this->_padding_) {
                uVar30 = ~uVar45 >> 0x1f;
              }
              if ((uVar30 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
              uVar45 = local_188 + 3;
              *(undefined8 *)(this->_padding_ + 0x10 + lVar29 * 8) = uVar2;
              pcVar10 = *(code **)(this->_padding_ + 0x28);
              uVar30 = 0;
              if ((int)(local_184 + 2 + uVar44) < (this->FaceDesc).ArrayNum) {
                uVar30 = ~(local_184 + 2 + uVar44) >> 0x1f;
              }
              if ((uVar30 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
              pFVar24 = (FScriptContainerElement *)
                        (ulonglong)*(uint *)((this->FaceDesc).AllocatorInstance.Data + lVar41 + 4);
              puVar21 = (undefined8 *)(*pcVar10)(this,local_b8,*puVar26,iVar34,pFVar24,fVar49);
              uVar2 = *puVar21;
              uVar30 = 0;
              if ((int)uVar45 < (int)this->_padding_) {
                uVar30 = ~uVar45 >> 0x1f;
              }
              if (uVar30 == 0) {
                pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar45;
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar13) {
                  pcVar10 = (code *)swi(3);
                  pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                  return pFVar20;
                }
              }
              lVar42 = lVar29 + 4;
              *(undefined8 *)(this->_padding_ + 0x18 + lVar29 * 8) = uVar2;
              uVar45 = local_188 + 4;
              uVar30 = local_178 + 4;
              lVar27 = local_170 + 4;
            }
            local_170 = lVar27;
            local_178 = uVar30;
            local_188 = uVar45;
            local_184 = local_184 + 4;
            lVar41 = lVar41 + 0x10;
            local_1a0 = local_1a0 + -1;
            uVar36 = uVar36 + 4;
            lVar29 = lVar42;
          } while (local_1a0 != 0);
        }
        iVar37 = 0;
        if (0 < this->NumSteps) {
          uVar44 = uVar44 + 2;
          iVar34 = uVar31 - uVar38;
          iVar35 = uVar38 + 3;
          lVar29 = uVar47 * 4 + 8;
          do {
            uVar31 = (uint)uVar47;
            uVar38 = 0;
            if ((int)uVar31 < (this->NormalDesc).ArrayNum) {
              uVar38 = ~uVar31 >> 0x1f;
            }
            if (uVar38 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar31;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            *(int *)((this->NormalDesc).AllocatorInstance.Data + lVar29 + -8) = iVar34 + -3 + iVar35
            ;
            uVar38 = 0;
            if ((int)(uVar44 - 1) < (this->NormalDesc).ArrayNum) {
              uVar38 = ~(uVar44 - 1) >> 0x1f;
            }
            if (uVar38 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)(uVar44 - 1);
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            *(int *)((this->NormalDesc).AllocatorInstance.Data + lVar29 + -4) = iVar35 + iVar34 + -1
            ;
            uVar38 = 0;
            if ((int)uVar44 < (this->NormalDesc).ArrayNum) {
              uVar38 = ~uVar44 >> 0x1f;
            }
            if (uVar38 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar44;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            uVar38 = uVar44 + 1;
            *(int *)((this->NormalDesc).AllocatorInstance.Data + lVar29) = iVar34 + iVar35;
            uVar36 = 0;
            if ((int)uVar38 < (this->NormalDesc).ArrayNum) {
              uVar36 = ~uVar38 >> 0x1f;
            }
            if (uVar36 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar38;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            *(int *)((this->NormalDesc).AllocatorInstance.Data + lVar29 + 4) = iVar34 + -2 + iVar35;
            uVar38 = 0;
            if ((int)uVar31 < (this->UVDesc).ArrayNum) {
              uVar38 = ~uVar31 >> 0x1f;
            }
            if (uVar38 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar31;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            *(int *)((this->UVDesc).AllocatorInstance.Data + lVar29 + -8) = iVar35 + -3;
            uVar38 = 0;
            if ((int)(uVar44 - 1) < (this->UVDesc).ArrayNum) {
              uVar38 = ~(uVar44 - 1) >> 0x1f;
            }
            if (uVar38 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)(uVar44 - 1);
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            *(int *)((this->UVDesc).AllocatorInstance.Data + lVar29 + -4) = iVar35 + -1;
            uVar38 = 0;
            if ((int)uVar44 < (this->UVDesc).ArrayNum) {
              uVar38 = ~uVar44 >> 0x1f;
            }
            if (uVar38 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar44;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            *(int *)((this->UVDesc).AllocatorInstance.Data + lVar29) = iVar35;
            uVar38 = 0;
            if ((int)(uVar44 + 1) < (this->UVDesc).ArrayNum) {
              uVar38 = ~(uVar44 + 1) >> 0x1f;
            }
            if (uVar38 == 0) {
              pFVar24 = (FScriptContainerElement *)(longlong)(int)(uVar44 + 1);
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
                return pFVar20;
              }
            }
            iVar1 = iVar35 + -2;
            uVar47 = (ulonglong)(uVar31 + 4);
            uVar44 = uVar44 + 4;
            iVar35 = iVar35 + 2;
            iVar37 = iVar37 + 1;
            *(int *)((this->UVDesc).AllocatorInstance.Data + lVar29 + 4) = iVar1;
            lVar29 = lVar29 + 0x10;
          } while (iVar37 < this->NumSteps);
        }
      }
    }
    puVar26 = puVar26 + 1;
  } while (puVar26 != (uint *)&local_f8);
  uVar44 = 0;
  local_e8 = 1;
  local_f8 = ___xmm_00000002000000020000000300000000;
  uStack_f0 = _UNK_150aa6a08;
  local_194 = 0;
  local_1a8 = 0;
  if (0 < this->NumQuads) {
    local_1a0 = 0;
    local_184 = 0;
    do {
      EVar18 = FaceToSide(this,local_1a8);
      bVar13 = EVar18 == Left;
      local_170 = 2;
      local_180 = local_1a0 * 0xc;
      piVar22 = (int *)((longlong)&local_f8 + 4);
      local_190 = local_1a0 * 4;
      do {
        uVar45 = piVar22[-1] + local_184;
        uVar36 = *piVar22 + local_184;
        uVar31 = local_184 + piVar22[1];
        uVar38 = 0;
        if ((int)uVar45 < (this->FaceDesc).ArrayNum) {
          uVar38 = ~uVar45 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
          return pFVar20;
        }
        uVar8 = *(undefined4 *)((this->FaceDesc).AllocatorInstance.Data + (longlong)(int)uVar45 * 4)
        ;
        uVar38 = 0;
        if ((int)uVar36 < (this->FaceDesc).ArrayNum) {
          uVar38 = ~uVar36 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
          return pFVar20;
        }
        uVar46 = *(undefined4 *)
                  ((this->FaceDesc).AllocatorInstance.Data + (longlong)(int)uVar36 * 4);
        uVar38 = 0;
        if ((int)uVar31 < (this->FaceDesc).ArrayNum) {
          uVar38 = ~uVar31 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
          return pFVar20;
        }
        uVar9 = *(undefined4 *)((this->FaceDesc).AllocatorInstance.Data + (longlong)(int)uVar31 * 4)
        ;
        uVar39 = uVar9;
        if ((bool)(char)this->_padding_ != bVar13) {
          uVar39 = uVar8;
          uVar8 = uVar9;
        }
        local_158 = CONCAT44(uVar46,uVar8);
        uVar38 = 0;
        if ((int)uVar44 < (int)this->_padding_) {
          uVar38 = ~uVar44 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
          return pFVar20;
        }
        lVar29 = this->_padding_;
        *(longlong *)(lVar29 + local_180) = local_158;
        *(undefined4 *)(lVar29 + 8 + local_180) = uVar39;
        uVar38 = 0;
        if ((int)uVar45 < (this->NormalDesc).ArrayNum) {
          uVar38 = ~uVar45 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
          return pFVar20;
        }
        uVar8 = *(undefined4 *)
                 ((this->NormalDesc).AllocatorInstance.Data + (longlong)(int)uVar45 * 4);
        uVar38 = 0;
        if ((int)uVar36 < (this->NormalDesc).ArrayNum) {
          uVar38 = ~uVar36 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
          return pFVar20;
        }
        uVar46 = *(undefined4 *)
                  ((this->NormalDesc).AllocatorInstance.Data + (longlong)(int)uVar36 * 4);
        uVar38 = 0;
        if ((int)uVar31 < (this->NormalDesc).ArrayNum) {
          uVar38 = ~uVar31 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
          return pFVar20;
        }
        uVar9 = *(undefined4 *)
                 ((this->NormalDesc).AllocatorInstance.Data + (longlong)(int)uVar31 * 4);
        uVar39 = uVar9;
        if ((bool)(char)this->_padding_ != bVar13) {
          uVar39 = uVar8;
          uVar8 = uVar9;
        }
        local_138 = CONCAT44(uVar46,uVar8);
        uVar38 = 0;
        if ((int)uVar44 < (int)this->_padding_) {
          uVar38 = ~uVar44 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
          return pFVar20;
        }
        lVar29 = this->_padding_;
        *(undefined8 *)(lVar29 + local_180) = local_138;
        *(undefined4 *)(lVar29 + 8 + local_180) = uVar39;
        uVar38 = 0;
        if ((int)uVar45 < (this->UVDesc).ArrayNum) {
          uVar38 = ~uVar45 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
          return pFVar20;
        }
        uVar8 = *(undefined4 *)((this->UVDesc).AllocatorInstance.Data + (longlong)(int)uVar45 * 4);
        uVar38 = 0;
        if ((int)uVar36 < (this->UVDesc).ArrayNum) {
          uVar38 = ~uVar36 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
          return pFVar20;
        }
        uVar46 = *(undefined4 *)((this->UVDesc).AllocatorInstance.Data + (longlong)(int)uVar36 * 4);
        uVar38 = 0;
        if ((int)uVar31 < (this->UVDesc).ArrayNum) {
          uVar38 = ~uVar31 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
          return pFVar20;
        }
        uStack_11c = uVar46;
        uVar46 = *(undefined4 *)((this->UVDesc).AllocatorInstance.Data + (longlong)(int)uVar31 * 4);
        if ((bool)(char)this->_padding_ == bVar13) {
          local_128[2] = uVar8;
        }
        else {
          local_128[2] = uVar46;
          uVar46 = uVar8;
        }
        uVar38 = 0;
        if ((int)uVar44 < (int)this->_padding_) {
          uVar38 = ~uVar44 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
          return pFVar20;
        }
        lVar29 = this->_padding_;
        *(ulonglong *)(lVar29 + local_180) = CONCAT44(uStack_11c,local_128[2]);
        *(undefined4 *)(lVar29 + 8 + local_180) = uVar46;
        uVar38 = 0;
        if ((int)uVar44 < (int)this->_padding_) {
          uVar38 = ~uVar44 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          pFVar20 = (FMeshShapeGenerator *)(*pcVar10)();
          return pFVar20;
        }
        local_180 = local_180 + 0xc;
        uVar44 = uVar44 + 1;
        local_1a0 = local_1a0 + 1;
        piVar22 = piVar22 + 3;
        local_170 = local_170 + -1;
        *(uint *)(local_190 + this->_padding_) = local_194;
        local_190 = local_190 + 4;
      } while (local_170 != 0);
      if (this->bPolygroupPerQuad == false) {
        switch(EVar18) {
        case Right:
        case Left:
        case Back:
        case Bottom:
          iVar25 = local_1a8;
          if (local_1a8 + 1 < this->NumQuads) {
            iVar25 = local_1a8 + 1;
          }
          EVar19 = FaceToSide(this,iVar25);
          local_194 = local_194 + (EVar19 != EVar18);
          break;
        case Front:
        case Top:
          goto switchD_1435ad419_caseD_2;
        }
      }
      else {
switchD_1435ad419_caseD_2:
        local_194 = local_194 + 1;
      }
      local_1a8 = local_1a8 + 1;
      local_184 = local_184 + 4;
    } while (local_1a8 < this->NumQuads);
  }
  return (FMeshShapeGenerator *)this;
}

// ResetData @ 1435c04b0

void __thiscall UE::Geometry::FStairGenerator::ResetData(FStairGenerator *this)

{
  int *piVar1;
  int iVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (this->NumSteps < 2) {
    this->NumSteps = 2;
  }
  piVar1 = &(this->VertexIds).ArrayMax;
  pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)(this->VertexIds).AllocatorInstance.Data;
  iVar2 = (this->VertexIds).ArrayNum;
  if ((this->VertexIds).ArrayMax < 0) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar3,iVar2);
    (this->VertexIds).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->VertexIds).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar3,iVar2);
    (this->VertexIds).ArrayNum = 0;
  }
  (this->VertexIdsToColumnRow).ArrayNum = 0;
  if ((this->VertexIdsToColumnRow).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->VertexIdsToColumnRow).AllocatorInstance,0,
               &(this->VertexIdsToColumnRow).ArrayMax);
  }
  (this->FaceDesc).ArrayNum = 0;
  if ((this->FaceDesc).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->FaceDesc).AllocatorInstance,0,&(this->FaceDesc).ArrayMax);
  }
  (this->NormalDesc).ArrayNum = 0;
  if ((this->NormalDesc).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->NormalDesc).AllocatorInstance,0,&(this->NormalDesc).ArrayMax);
  }
  (this->UVDesc).ArrayNum = 0;
  if ((this->UVDesc).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->UVDesc).AllocatorInstance,0,&(this->UVDesc).ArrayMax);
  }
  this->NumQuadsPerSide = 0;
  this->NumQuads = 0;
  this->NumVertsPerSide = 0;
  this->NumVerts = 0;
  this->NumAttrs = 0;
  this->RightSideColumnId = 0;
  this->LeftSideColumnId = 0;
  this->RightStartFaceId = 0;
  this->LeftStartFaceId = 0;
  this->FrontStartFaceId = 0;
  this->TopStartFaceId = 0;
  this->BackStartFaceId = 0;
  this->BottomStartFaceId = 0;
  this->LastFaceId = 0;
  return;
}

