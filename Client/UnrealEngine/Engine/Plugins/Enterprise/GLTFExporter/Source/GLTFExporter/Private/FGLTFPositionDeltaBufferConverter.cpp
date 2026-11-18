// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// Convert @ 14e5e96d0

FGLTFJsonAccessor * __thiscall
FGLTFPositionDeltaBufferConverter::Convert
          (FGLTFPositionDeltaBufferConverter *this,FGLTFMeshSection *param_1,
          TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>
          *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  float fVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FGLTFJsonAccessor *pFVar8;
  FGLTFJsonBufferView *pFVar9;
  float *pfVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  float fVar13;
  undefined1 *puVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  float local_a8;
  float fStack_a4;
  ForAnyElementType local_80;
  int local_78 [16];
  
  if (param_2 ==
      (TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>
       *)0x0) {
    return (FGLTFJsonAccessor *)0x0;
  }
  puVar1 = &param_2->field_0x34;
  puVar2 = &param_2->field_0x8;
  uVar19 = (param_1->IndexMap).ArrayNum;
  if ((int)uVar19 < 1) {
    uVar19 = *(int *)puVar2 - *(int *)puVar1;
  }
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78[0] = 0;
  local_78[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,1,uVar19,&local_80,local_78,local_78 + 1);
  if ((param_1->IndexMap).ArrayNum < 1) {
    puVar12 = (undefined8 *)0x0;
    if (uVar19 != 0) {
      do {
        uVar15 = (uint)puVar12;
        if (*(int *)puVar2 != *(int *)puVar1) {
          puVar14 = &param_2->field_0x38;
          if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
            puVar14 = *(undefined1 **)&param_2->field_0x40;
          }
          iVar7 = *(int *)(puVar14 +
                          ((ulonglong)(*(int *)&param_2->field_0x48 - 1) & (ulonglong)puVar12) * 4);
          if (iVar7 != -1) {
            do {
              lVar17 = *(longlong *)param_2 + (longlong)iVar7 * 0x18;
              if (*(uint *)(*(longlong *)param_2 + (longlong)iVar7 * 0x18) == uVar15) {
                puVar12 = (undefined8 *)(lVar17 + 4);
                if (lVar17 == 0) {
                  puVar12 = (undefined8 *)0x0;
                }
                if (puVar12 != (undefined8 *)0x0) {
                  uVar21 = *puVar12;
                  fVar13 = *(float *)(puVar12 + 1);
                  goto LAB_14e5e9bba;
                }
                break;
              }
              iVar7 = *(int *)(lVar17 + 0x10);
            } while (iVar7 != -1);
          }
        }
        uVar21 = 0;
        fVar13 = 0.0;
LAB_14e5e9bba:
        local_a8 = (float)uVar21;
        fStack_a4 = (float)((ulonglong)uVar21 >> 0x20);
        fVar4 = *(float *)(*(longlong *)(*(longlong *)&this->field_0x58 + 0x18) + 0x28);
        uVar16 = 0;
        if ((int)uVar15 < local_78[0]) {
          uVar16 = ~uVar15 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FGLTFJsonAccessor *)(*pcVar5)();
          return pFVar8;
        }
        *(ulonglong *)(local_80.Data + (longlong)(int)uVar15 * 0xc) =
             CONCAT44(fVar13 * fVar4,local_a8 * fVar4);
        *(float *)(local_80.Data + (longlong)(int)uVar15 * 0xc + 8) = fStack_a4 * fVar4;
        puVar12 = (undefined8 *)(ulonglong)(uVar15 + 1);
      } while (uVar15 + 1 < uVar19);
    }
  }
  else {
    uVar15 = 0;
    if (uVar19 != 0) {
      do {
        uVar16 = 0;
        if ((int)uVar15 < (param_1->IndexMap).ArrayNum) {
          uVar16 = ~uVar15 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FGLTFJsonAccessor *)(*pcVar5)();
          return pFVar8;
        }
        lVar17 = (longlong)(int)uVar15;
        uVar16 = *(uint *)((param_1->IndexMap).AllocatorInstance.Data + lVar17 * 4);
        if (*(int *)puVar2 != *(int *)puVar1) {
          puVar14 = &param_2->field_0x38;
          if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
            puVar14 = *(undefined1 **)&param_2->field_0x40;
          }
          iVar7 = *(int *)(puVar14 + (ulonglong)(*(int *)&param_2->field_0x48 - 1U & uVar16) * 4);
          if (iVar7 != -1) {
            do {
              lVar3 = *(longlong *)param_2 + (longlong)iVar7 * 0x18;
              if (*(uint *)(*(longlong *)param_2 + (longlong)iVar7 * 0x18) == uVar16) {
                puVar12 = (undefined8 *)(lVar3 + 4);
                if (lVar3 == 0) {
                  puVar12 = (undefined8 *)0x0;
                }
                if (puVar12 != (undefined8 *)0x0) {
                  uVar21 = *puVar12;
                  fVar13 = *(float *)(puVar12 + 1);
                  goto LAB_14e5e987a;
                }
                break;
              }
              iVar7 = *(int *)(lVar3 + 0x10);
            } while (iVar7 != -1);
          }
        }
        uVar21 = 0;
        fVar13 = 0.0;
LAB_14e5e987a:
        local_a8 = (float)uVar21;
        fStack_a4 = (float)((ulonglong)uVar21 >> 0x20);
        fVar4 = *(float *)(*(longlong *)(*(longlong *)&this->field_0x58 + 0x18) + 0x28);
        uVar16 = 0;
        if ((int)uVar15 < local_78[0]) {
          uVar16 = ~uVar15 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FGLTFJsonAccessor *)(*pcVar5)();
          return pFVar8;
        }
        uVar15 = uVar15 + 1;
        *(ulonglong *)(local_80.Data + lVar17 * 0xc) = CONCAT44(fVar13 * fVar4,local_a8 * fVar4);
        *(float *)(local_80.Data + lVar17 * 0xc + 8) = fStack_a4 * fVar4;
      } while (uVar15 < uVar19);
    }
  }
  uVar20 = 0;
  uVar15 = 1;
  pFVar8 = FGLTFJsonBuilder::AddAccessor(*(FGLTFJsonBuilder **)&this->field_0x58);
  pFVar9 = FGLTFBufferBuilder::AddBufferView
                     (*(FGLTFBufferBuilder **)&this->field_0x58,local_80.Data,
                      (longlong)local_78[0] * 0xc,ArrayBuffer,'\x04');
  pFVar8->BufferView = pFVar9;
  pFVar8->ComponentType = Float;
  pFVar8->Count = uVar19;
  pFVar8->Type = Vec3;
  if (uVar19 != 0) {
    pFVar8->MinMaxLength = 3;
    uVar11 = uVar20;
    uVar18 = uVar20;
    do {
      if ((local_78[0] < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FGLTFJsonAccessor *)(*pcVar5)();
        return pFVar8;
      }
      *(undefined4 *)((longlong)pFVar8->Min + uVar18) = *(undefined4 *)(local_80.Data + uVar18);
      if ((local_78[0] < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FGLTFJsonAccessor *)(*pcVar5)();
        return pFVar8;
      }
      uVar16 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar16;
      *(undefined4 *)((longlong)pFVar8->Max + uVar18) = *(undefined4 *)(local_80.Data + uVar18);
      uVar18 = uVar18 + 4;
    } while ((int)uVar16 < pFVar8->MinMaxLength);
    if (1 < uVar19) {
      do {
        uVar16 = 0;
        if ((int)uVar15 < local_78[0]) {
          uVar16 = ~uVar15 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FGLTFJsonAccessor *)(*pcVar5)();
          return pFVar8;
        }
        if (0 < pFVar8->MinMaxLength) {
          lVar17 = (longlong)(int)uVar15 * 0xc - (longlong)pFVar8;
          pfVar10 = pFVar8->Max;
          uVar11 = uVar20;
          do {
            uVar16 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar16;
            fVar13 = pfVar10[-0x10];
            if (*(float *)(local_80.Data + lVar17 + -0x84 + (longlong)pfVar10) <= pfVar10[-0x10]) {
              fVar13 = *(float *)(local_80.Data + lVar17 + -0x84 + (longlong)pfVar10);
            }
            pfVar10[-0x10] = fVar13;
            fVar13 = *(float *)(local_80.Data + lVar17 + -0x88 + (longlong)(pfVar10 + 1));
            if (*(float *)(local_80.Data + lVar17 + -0x88 + (longlong)(pfVar10 + 1)) <= *pfVar10) {
              fVar13 = *pfVar10;
            }
            *pfVar10 = fVar13;
            pfVar10 = pfVar10 + 1;
          } while ((int)uVar16 < pFVar8->MinMaxLength);
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar19);
    }
  }
  if (local_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data);
  }
  return pFVar8;
}

