// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// Convert @ 14e5e8650

FGLTFJsonAccessor * __thiscall
FGLTFNormalBufferConverterRaw::Convert
          (FGLTFNormalBufferConverterRaw *this,
          FMeshAttributesArray<UE::Math::TVector<float>_> *param_1,bool param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  FGLTFBufferBuilder *this_00;
  code *pcVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  FGLTFJsonAccessor *pFVar12;
  FGLTFJsonBufferView *pFVar13;
  longlong lVar14;
  uint uVar15;
  FGLTFJsonAccessor *pFVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float local_88;
  ForAnyElementType local_78;
  int local_70 [22];
  
  pFVar12 = (FGLTFJsonAccessor *)0x0;
  uVar4 = *(uint *)&param_1->field_0x8;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70[0] = 0;
  local_70[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,1,uVar4,&local_78,local_70,local_70 + 1);
  fVar8 = __real_3f800000;
  fVar7 = __real_322bcc77;
  uVar10 = 0;
  if (param_2) {
    pFVar16 = pFVar12;
    if (uVar4 != 0) {
      do {
        uVar15 = (uint)pFVar16;
        uVar11 = 0;
        if ((int)uVar15 < *(int *)&param_1->field_0x8) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FGLTFJsonAccessor *)(*pcVar6)();
          return pFVar12;
        }
        lVar5 = *(longlong *)param_1;
        lVar14 = (longlong)(int)uVar15;
        local_88 = *(float *)(lVar5 + lVar14 * 0xc);
        fVar17 = *(float *)(lVar5 + 4 + lVar14 * 0xc);
        uVar19 = *(float *)(lVar5 + 8 + lVar14 * 0xc);
        fVar18 = fVar17 * fVar17 + local_88 * local_88 + (float)uVar19 * (float)uVar19;
        if (fVar18 == fVar8) {
          uVar3 = *(undefined8 *)(lVar5 + lVar14 * 0xc);
          fVar17 = (float)((ulonglong)uVar3 >> 0x20);
          local_88 = (float)uVar3;
        }
        else if (fVar7 <= fVar18) {
          fVar18 = __real_3f800000 / SQRT(fVar18);
          fVar17 = fVar18 * fVar17;
          local_88 = fVar18 * local_88;
          uVar19 = fVar18 * (float)uVar19;
        }
        else {
          fVar17 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20)
          ;
          local_88 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          uVar19 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        }
        uVar11 = uVar10;
        if ((int)uVar15 < local_70[0]) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FGLTFJsonAccessor *)(*pcVar6)();
          return pFVar12;
        }
        *(float *)(local_78.Data + lVar14 * 0xc) = local_88;
        *(undefined4 *)(local_78.Data + lVar14 * 0xc + 4) = uVar19;
        *(float *)(local_78.Data + lVar14 * 0xc + 8) = fVar17;
        pFVar16 = (FGLTFJsonAccessor *)(ulonglong)(uVar15 + 1);
      } while (uVar15 + 1 < uVar4);
    }
  }
  else {
    pFVar16 = pFVar12;
    if (uVar4 != 0) {
      do {
        uVar15 = (uint)pFVar16;
        uVar11 = uVar10;
        if ((int)uVar15 < *(int *)&param_1->field_0x8) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FGLTFJsonAccessor *)(*pcVar6)();
          return pFVar12;
        }
        lVar5 = *(longlong *)param_1;
        lVar14 = (longlong)(int)uVar15;
        uVar19 = *(undefined4 *)(lVar5 + lVar14 * 0xc);
        uVar1 = *(undefined4 *)(lVar5 + 8 + lVar14 * 0xc);
        uVar2 = *(undefined4 *)(lVar5 + 4 + lVar14 * 0xc);
        uVar11 = uVar10;
        if ((int)uVar15 < local_70[0]) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FGLTFJsonAccessor *)(*pcVar6)();
          return pFVar12;
        }
        pFVar16 = (FGLTFJsonAccessor *)(ulonglong)(uVar15 + 1);
        *(undefined4 *)(local_78.Data + lVar14 * 0xc) = uVar19;
        *(undefined4 *)(local_78.Data + lVar14 * 0xc + 4) = uVar1;
        *(undefined4 *)(local_78.Data + lVar14 * 0xc + 8) = uVar2;
      } while (uVar15 + 1 < uVar4);
    }
  }
  if (local_70[0] != 0) {
    this_00 = *(FGLTFBufferBuilder **)&this->field_0x58;
    pFVar12 = FGLTFJsonBuilder::AddAccessor((FGLTFJsonBuilder *)this_00);
    pFVar13 = FGLTFBufferBuilder::AddBufferView
                        (this_00,local_78.Data,(longlong)local_70[0] * 0xc,ArrayBuffer,'\x04');
    pFVar12->BufferView = pFVar13;
    pFVar12->ComponentType = Float;
    pFVar12->Count = local_70[0];
    pFVar12->Type = Vec3;
    pFVar12->bNormalized = false;
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return pFVar12;
}

