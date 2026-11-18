// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// Convert @ 14e5e8b10

FGLTFJsonAccessor * __thiscall
FGLTFPositionBufferConverter::Convert
          (FGLTFPositionBufferConverter *this,FGLTFMeshSection *param_1,
          FPositionVertexBuffer *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  FGLTFJsonAccessor *pFVar7;
  FGLTFJsonBufferView *pFVar8;
  float *pfVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar18;
  float fVar19;
  longlong *local_res20;
  ForAnyElementType local_78;
  int local_70 [14];
  ulonglong uVar17;
  
  if ((param_2 == (FPositionVertexBuffer *)0x0) || (param_2->NumVertices == 0)) {
    return (FGLTFJsonAccessor *)0x0;
  }
  IGLTFBufferAdapter::GetPositions((FPositionVertexBuffer *)&local_res20);
  plVar12 = local_res20;
  lVar6 = (**(code **)(*local_res20 + 8))(local_res20);
  if (lVar6 == 0) {
    pFVar7 = (FGLTFJsonAccessor *)0x0;
  }
  else {
    uVar18 = (param_1->IndexMap).ArrayNum;
    if ((int)uVar18 < 1) {
      uVar18 = param_2->NumVertices;
    }
    uVar15 = param_2->Stride;
    uVar13 = 0;
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70[0] = 0;
    local_70[1] = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,1,uVar18,&local_78,local_70,local_70 + 1);
    if ((param_1->IndexMap).ArrayNum < 1) {
      uVar11 = uVar13;
      if (uVar18 != 0) {
        do {
          uVar14 = (uint)uVar11;
          uVar11 = (ulonglong)(uVar14 * uVar15);
          fVar19 = *(float *)(*(longlong *)(*(longlong *)&this->field_0x58 + 0x18) + 0x28);
          fVar1 = *(float *)(uVar11 + lVar6);
          fVar2 = *(float *)(uVar11 + 8 + lVar6);
          fVar3 = *(float *)(uVar11 + 4 + lVar6);
          uVar10 = 0;
          if ((int)uVar14 < local_70[0]) {
            uVar10 = ~uVar14 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar7 = (FGLTFJsonAccessor *)(*pcVar4)();
            return pFVar7;
          }
          uVar11 = (ulonglong)(uVar14 + 1);
          *(ulonglong *)(local_78.Data + (longlong)(int)uVar14 * 0xc) =
               CONCAT44(fVar19 * fVar2,fVar19 * fVar1);
          *(float *)(local_78.Data + (longlong)(int)uVar14 * 0xc + 8) = fVar19 * fVar3;
          plVar12 = local_res20;
        } while (uVar14 + 1 < uVar18);
      }
    }
    else {
      uVar11 = uVar13;
      if (uVar18 != 0) {
        do {
          uVar14 = (uint)uVar11;
          uVar10 = 0;
          if ((int)uVar14 < (param_1->IndexMap).ArrayNum) {
            uVar10 = ~uVar14 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar7 = (FGLTFJsonAccessor *)(*pcVar4)();
            return pFVar7;
          }
          lVar16 = (longlong)(int)uVar14;
          uVar11 = (ulonglong)
                   (uVar15 * *(int *)((param_1->IndexMap).AllocatorInstance.Data + lVar16 * 4));
          fVar19 = *(float *)(*(longlong *)(*(longlong *)&this->field_0x58 + 0x18) + 0x28);
          fVar1 = *(float *)(uVar11 + lVar6);
          fVar2 = *(float *)(uVar11 + 4 + lVar6);
          uVar10 = 0;
          if ((int)uVar14 < local_70[0]) {
            uVar10 = ~uVar14 >> 0x1f;
          }
          fVar3 = *(float *)(uVar11 + 8 + lVar6);
          if ((uVar10 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar7 = (FGLTFJsonAccessor *)(*pcVar4)();
            return pFVar7;
          }
          *(ulonglong *)(local_78.Data + lVar16 * 0xc) = CONCAT44(fVar19 * fVar3,fVar19 * fVar1);
          *(float *)(local_78.Data + lVar16 * 0xc + 8) = fVar19 * fVar2;
          plVar12 = local_res20;
          uVar11 = (ulonglong)(uVar14 + 1);
        } while (uVar14 + 1 < uVar18);
      }
    }
    pFVar7 = FGLTFJsonBuilder::AddAccessor(*(FGLTFJsonBuilder **)&this->field_0x58);
    pFVar8 = FGLTFBufferBuilder::AddBufferView
                       (*(FGLTFBufferBuilder **)&this->field_0x58,local_78.Data,
                        (longlong)local_70[0] * 0xc,ArrayBuffer,'\x04');
    pFVar7->BufferView = pFVar8;
    pFVar7->ComponentType = Float;
    pFVar7->Count = uVar18;
    pFVar7->Type = Vec3;
    if (uVar18 != 0) {
      pFVar7->MinMaxLength = 3;
      uVar11 = uVar13;
      uVar17 = uVar13;
      do {
        if ((local_70[0] < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FGLTFJsonAccessor *)(*pcVar4)();
          return pFVar7;
        }
        *(undefined4 *)((longlong)pFVar7->Min + uVar11) = *(undefined4 *)(local_78.Data + uVar11);
        if ((local_70[0] < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FGLTFJsonAccessor *)(*pcVar4)();
          return pFVar7;
        }
        uVar15 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar15;
        *(undefined4 *)((longlong)pFVar7->Max + uVar11) = *(undefined4 *)(local_78.Data + uVar11);
        uVar11 = uVar11 + 4;
      } while ((int)uVar15 < pFVar7->MinMaxLength);
      uVar15 = 1;
      plVar12 = local_res20;
      if (1 < uVar18) {
        do {
          uVar10 = 0;
          if ((int)uVar15 < local_70[0]) {
            uVar10 = ~uVar15 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar7 = (FGLTFJsonAccessor *)(*pcVar4)();
            return pFVar7;
          }
          if (0 < pFVar7->MinMaxLength) {
            lVar6 = (longlong)(int)uVar15 * 0xc - (longlong)pFVar7;
            pfVar9 = pFVar7->Max;
            uVar11 = uVar13;
            do {
              uVar10 = (int)uVar11 + 1;
              uVar11 = (ulonglong)uVar10;
              fVar19 = pfVar9[-0x10];
              if (*(float *)((longlong)pfVar9 + (longlong)(local_78.Data + lVar6 + -0x84)) <=
                  pfVar9[-0x10]) {
                fVar19 = *(float *)((longlong)pfVar9 + (longlong)(local_78.Data + lVar6 + -0x84));
              }
              pfVar9[-0x10] = fVar19;
              fVar19 = *pfVar9;
              if (*pfVar9 <=
                  *(float *)((longlong)pfVar9 + (longlong)(local_78.Data + lVar6 + -0x84))) {
                fVar19 = *(float *)((longlong)pfVar9 + (longlong)(local_78.Data + lVar6 + -0x84));
              }
              *pfVar9 = fVar19;
              pfVar9 = pfVar9 + 1;
            } while ((int)uVar10 < pFVar7->MinMaxLength);
          }
          uVar15 = uVar15 + 1;
          plVar12 = local_res20;
        } while (uVar15 < uVar18);
      }
    }
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
  }
  if (plVar12 != (longlong *)0x0) {
    (**(code **)*plVar12)(plVar12,1);
  }
  return pFVar7;
}

