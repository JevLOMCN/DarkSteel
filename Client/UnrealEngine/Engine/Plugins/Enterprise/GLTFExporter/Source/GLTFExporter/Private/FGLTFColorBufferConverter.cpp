// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// Convert @ 14e5e5320

FGLTFJsonAccessor * __thiscall
FGLTFColorBufferConverter::Convert
          (FGLTFColorBufferConverter *this,FGLTFMeshSection *param_1,FColorVertexBuffer *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  FGLTFJsonAccessor *pFVar10;
  FGLTFJsonBufferView *pFVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  longlong *local_res20;
  ForAnyElementType local_48;
  int local_40 [2];
  
  if ((param_2 == (FColorVertexBuffer *)0x0) || (param_2->NumVertices == 0)) {
    return (FGLTFJsonAccessor *)0x0;
  }
  IGLTFBufferAdapter::GetColors((FColorVertexBuffer *)&local_res20);
  plVar13 = local_res20;
  lVar9 = (**(code **)(*local_res20 + 8))(local_res20);
  if (lVar9 == 0) {
    pFVar10 = (FGLTFJsonAccessor *)0x0;
  }
  else {
    uVar16 = (param_1->IndexMap).ArrayNum;
    if ((int)uVar16 < 1) {
      uVar16 = param_2->NumVertices;
    }
    uVar5 = param_2->Stride;
    uVar14 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40[0] = 0;
    local_40[1] = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,1,uVar16,&local_48,local_40,local_40 + 1);
    if ((param_1->IndexMap).ArrayNum < 1) {
      if (uVar16 != 0) {
        do {
          puVar12 = (undefined1 *)((ulonglong)(uVar14 * uVar5) + lVar9);
          uVar1 = *puVar12;
          uVar2 = puVar12[3];
          uVar3 = puVar12[1];
          uVar4 = puVar12[2];
          uVar8 = 0;
          if ((int)uVar14 < local_40[0]) {
            uVar8 = ~uVar14 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            pFVar10 = (FGLTFJsonAccessor *)(*pcVar6)();
            return pFVar10;
          }
          lVar15 = (longlong)(int)uVar14;
          uVar14 = uVar14 + 1;
          *(uint *)(local_48.Data + lVar15 * 4) =
               CONCAT31(CONCAT21(CONCAT11(uVar2,uVar1),uVar3),uVar4);
          plVar13 = local_res20;
        } while (uVar14 < uVar16);
      }
    }
    else if (uVar16 != 0) {
      do {
        uVar8 = 0;
        if ((int)uVar14 < (param_1->IndexMap).ArrayNum) {
          uVar8 = ~uVar14 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar10 = (FGLTFJsonAccessor *)(*pcVar6)();
          return pFVar10;
        }
        lVar15 = (longlong)(int)uVar14;
        puVar12 = (undefined1 *)
                  ((ulonglong)
                   (uVar5 * *(int *)((param_1->IndexMap).AllocatorInstance.Data + lVar15 * 4)) +
                  lVar9);
        uVar1 = *puVar12;
        uVar2 = puVar12[3];
        uVar3 = puVar12[1];
        uVar4 = puVar12[2];
        uVar8 = 0;
        if ((int)uVar14 < local_40[0]) {
          uVar8 = ~uVar14 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar10 = (FGLTFJsonAccessor *)(*pcVar6)();
          return pFVar10;
        }
        uVar14 = uVar14 + 1;
        *(uint *)(local_48.Data + lVar15 * 4) =
             CONCAT31(CONCAT21(CONCAT11(uVar2,uVar1),uVar3),uVar4);
        plVar13 = local_res20;
      } while (uVar14 < uVar16);
    }
    pFVar10 = FGLTFJsonBuilder::AddAccessor(*(FGLTFJsonBuilder **)&this->field_0x58);
    pFVar11 = FGLTFBufferBuilder::AddBufferView
                        (*(FGLTFBufferBuilder **)&this->field_0x58,local_48.Data,
                         (longlong)local_40[0] << 2,ArrayBuffer,'\x04');
    pFVar10->Count = uVar16;
    pFVar10->BufferView = pFVar11;
    pFVar10->ComponentType = UInt8;
    pFVar10->Type = Vec4;
    pFVar10->bNormalized = true;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  if (plVar13 != (longlong *)0x0) {
    (**(code **)*plVar13)(plVar13,1);
  }
  return pFVar10;
}

