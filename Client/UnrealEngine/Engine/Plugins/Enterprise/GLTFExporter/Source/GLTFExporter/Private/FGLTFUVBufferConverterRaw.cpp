// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// Convert @ 14e5ec6a0

FGLTFJsonAccessor * __thiscall
FGLTFUVBufferConverterRaw::Convert
          (FGLTFUVBufferConverterRaw *this,FMeshAttributesArray<UE::Math::TVector2<float>_> *param_1
          )

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  FGLTFBufferBuilder *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FGLTFJsonAccessor *pFVar7;
  FGLTFJsonAccessor *pFVar8;
  FGLTFJsonBufferView *pFVar9;
  uint uVar10;
  longlong lVar11;
  ForAnyElementType local_38;
  int local_30 [2];
  
  uVar3 = *(uint *)&param_1->field_0x8;
  pFVar8 = (FGLTFJsonAccessor *)0x0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30[0] = 0;
  local_30[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,1,uVar3,&local_38,local_30,local_30 + 1);
  pFVar7 = pFVar8;
  if (uVar3 != 0) {
    do {
      uVar10 = (uint)pFVar7;
      uVar6 = 0;
      if ((int)uVar10 < *(int *)&param_1->field_0x8) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar7;
      }
      lVar11 = (longlong)(int)uVar10;
      uVar1 = *(undefined4 *)(*(longlong *)param_1 + lVar11 * 8);
      uVar2 = *(undefined4 *)(*(longlong *)param_1 + 4 + lVar11 * 8);
      uVar6 = 0;
      if ((int)uVar10 < local_30[0]) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar7;
      }
      *(ulonglong *)(local_38.Data + lVar11 * 8) = CONCAT44(uVar2,uVar1);
      pFVar7 = (FGLTFJsonAccessor *)(ulonglong)(uVar10 + 1);
    } while (uVar10 + 1 < uVar3);
  }
  if (local_30[0] != 0) {
    this_00 = *(FGLTFBufferBuilder **)&this->field_0x58;
    pFVar8 = FGLTFJsonBuilder::AddAccessor((FGLTFJsonBuilder *)this_00);
    pFVar9 = FGLTFBufferBuilder::AddBufferView
                       (this_00,local_38.Data,(longlong)local_30[0] << 3,ArrayBuffer,'\x04');
    pFVar8->BufferView = pFVar9;
    pFVar8->ComponentType = Float;
    pFVar8->Count = local_30[0];
    pFVar8->Type = Vec2;
    pFVar8->bNormalized = false;
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return pFVar8;
}

