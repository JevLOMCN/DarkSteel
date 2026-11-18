// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// Convert @ 14e5e5620

FGLTFJsonAccessor * __thiscall
FGLTFColorBufferConverterRaw::Convert
          (FGLTFColorBufferConverterRaw *this,FMeshAttributesArray<FColor> *param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong lVar7;
  FGLTFBufferBuilder *this_00;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  FGLTFJsonAccessor *pFVar11;
  FGLTFJsonAccessor *pFVar12;
  FGLTFJsonBufferView *pFVar13;
  uint uVar14;
  longlong lVar15;
  ForAnyElementType local_38;
  int local_30 [2];
  
  uVar6 = *(uint *)&param_1->field_0x8;
  pFVar12 = (FGLTFJsonAccessor *)0x0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30[0] = 0;
  local_30[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,1,uVar6,&local_38,local_30,local_30 + 1);
  pFVar11 = pFVar12;
  if (uVar6 != 0) {
    do {
      uVar14 = (uint)pFVar11;
      uVar10 = 0;
      if ((int)uVar14 < *(int *)&param_1->field_0x8) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        pFVar11 = (FGLTFJsonAccessor *)(*pcVar8)();
        return pFVar11;
      }
      lVar7 = *(longlong *)param_1;
      lVar15 = (longlong)(int)uVar14;
      uVar2 = *(undefined1 *)(lVar7 + 3 + lVar15 * 4);
      lVar1 = lVar7 + lVar15 * 4;
      uVar3 = *(undefined1 *)(lVar7 + lVar15 * 4);
      uVar4 = *(undefined1 *)(lVar1 + 1);
      uVar5 = *(undefined1 *)(lVar1 + 2);
      uVar10 = 0;
      if ((int)uVar14 < local_30[0]) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        pFVar11 = (FGLTFJsonAccessor *)(*pcVar8)();
        return pFVar11;
      }
      *(uint *)(local_38.Data + lVar15 * 4) = CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar5);
      pFVar11 = (FGLTFJsonAccessor *)(ulonglong)(uVar14 + 1);
    } while (uVar14 + 1 < uVar6);
  }
  if (local_30[0] != 0) {
    this_00 = *(FGLTFBufferBuilder **)&this->field_0x58;
    pFVar12 = FGLTFJsonBuilder::AddAccessor((FGLTFJsonBuilder *)this_00);
    pFVar13 = FGLTFBufferBuilder::AddBufferView
                        (this_00,local_38.Data,(longlong)local_30[0] << 2,ArrayBuffer,'\x04');
    pFVar12->BufferView = pFVar13;
    pFVar12->ComponentType = UInt8;
    pFVar12->Count = local_30[0];
    pFVar12->Type = Vec4;
    pFVar12->bNormalized = true;
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return pFVar12;
}

