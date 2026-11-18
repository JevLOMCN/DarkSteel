// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// Convert @ 14e5ebe80

FGLTFJsonAccessor * __thiscall
FGLTFTangentBufferConverterRaw::Convert
          (FGLTFTangentBufferConverterRaw *this,
          FMeshAttributesArray<UE::Math::TVector4<float>_> *param_1)

{
  float *pfVar1;
  uint uVar2;
  longlong lVar3;
  FGLTFBufferBuilder *this_00;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  FGLTFJsonAccessor *pFVar10;
  FGLTFJsonAccessor *pFVar11;
  FGLTFJsonBufferView *pFVar12;
  longlong lVar13;
  uint uVar14;
  float fVar15;
  float local_b8;
  ForAnyElementType local_a8;
  int local_a0 [2];
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  
  pFVar11 = (FGLTFJsonAccessor *)0x0;
  uVar2 = *(uint *)&param_1->field_0x8;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,1,uVar2,&local_a8,local_a0,local_a0 + 1);
  fVar7 = __real_bf800000;
  fVar6 = __real_3f800000;
  fVar5 = __real_322bcc77;
  pFVar10 = pFVar11;
  if (uVar2 != 0) {
    do {
      uVar14 = (uint)pFVar10;
      uVar9 = 0;
      if ((int)uVar14 < *(int *)&param_1->field_0x8) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar10;
      }
      lVar3 = *(longlong *)param_1;
      lVar13 = (longlong)(int)uVar14;
      local_b8 = *(float *)(lVar3 + lVar13 * 0x10);
      fStack_90 = *(float *)(lVar3 + 4 + lVar13 * 0x10);
      fStack_94 = *(float *)(lVar3 + 8 + lVar13 * 0x10);
      fVar15 = fStack_90 * fStack_90 + local_b8 * local_b8 + fStack_94 * fStack_94;
      if (fVar15 != fVar6) {
        if (fVar5 <= fVar15) {
          fVar15 = __real_3f800000 / SQRT(fVar15);
          local_b8 = fVar15 * local_b8;
          fStack_90 = fVar15 * fStack_90;
          fStack_94 = fVar15 * fStack_94;
        }
        else {
          fStack_90 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >>
                             0x20);
          local_b8 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          fStack_94 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        }
      }
      pfVar1 = (float *)(lVar3 + 0xc + lVar13 * 0x10);
      fStack_8c = fVar7;
      if (0.0 < *pfVar1 || *pfVar1 == 0.0) {
        fStack_8c = fVar6;
      }
      uVar9 = 0;
      if ((int)uVar14 < local_a0[0]) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      local_98 = local_b8;
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar10;
      }
      *(ulonglong *)(local_a8.Data + lVar13 * 0x10) = CONCAT44(fStack_94,local_98);
      *(ulonglong *)(local_a8.Data + lVar13 * 0x10 + 8) = CONCAT44(fStack_8c,fStack_90);
      pFVar10 = (FGLTFJsonAccessor *)(ulonglong)(uVar14 + 1);
    } while (uVar14 + 1 < uVar2);
  }
  if (local_a0[0] != 0) {
    this_00 = *(FGLTFBufferBuilder **)&this->field_0x58;
    pFVar11 = FGLTFJsonBuilder::AddAccessor((FGLTFJsonBuilder *)this_00);
    pFVar12 = FGLTFBufferBuilder::AddBufferView
                        (this_00,local_a8.Data,(longlong)local_a0[0] << 4,ArrayBuffer,'\x04');
    pFVar11->BufferView = pFVar12;
    pFVar11->ComponentType = Float;
    pFVar11->Count = local_a0[0];
    pFVar11->Type = Vec4;
    pFVar11->bNormalized = false;
  }
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return pFVar11;
}

