// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// Convert @ 14e5e69d0

FGLTFJsonAccessor * __thiscall
FGLTFIndexBufferConverterRaw::Convert
          (FGLTFIndexBufferConverterRaw *this,FMeshAttributesArray<int> *param_1,FString *param_2)

{
  FScriptContainerElement FVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  FGLTFBufferBuilder *pFVar4;
  FGLTFLogBuilder *this_00;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FGLTFJsonAccessor *pFVar9;
  FGLTFJsonBufferView *pFVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  ForAnyElementType local_78;
  int local_70 [2];
  ForAnyElementType local_68;
  int local_60 [2];
  ForAnyElementType local_58;
  int local_50 [2];
  FString local_48;
  
  uVar13 = *(uint *)&param_1->field_0x8;
  uVar8 = uVar13 - 1;
  if (uVar8 < 0xff) {
    pFVar4 = *(FGLTFBufferBuilder **)&this->field_0x58;
    pFVar9 = (FGLTFJsonAccessor *)0x0;
    if (uVar13 == 0) goto LAB_14e5e6e2e;
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70[0] = 0;
    local_70[1] = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar13,&local_78,local_70,local_70 + 1);
    if (uVar13 != 0) {
      do {
        uVar12 = (uint)pFVar9;
        uVar8 = 0;
        if ((int)uVar12 < *(int *)&param_1->field_0x8) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar9 = (FGLTFJsonAccessor *)(*pcVar6)();
          return pFVar9;
        }
        FVar1 = *(FScriptContainerElement *)(*(longlong *)param_1 + (longlong)(int)uVar12 * 4);
        uVar8 = 0;
        if ((int)uVar12 < local_70[0]) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar9 = (FGLTFJsonAccessor *)(*pcVar6)();
          return pFVar9;
        }
        pFVar9 = (FGLTFJsonAccessor *)(ulonglong)(uVar12 + 1);
        local_78.Data[(int)uVar12] = FVar1;
      } while (uVar12 + 1 < uVar13);
    }
    pFVar9 = FGLTFJsonBuilder::AddAccessor((FGLTFJsonBuilder *)pFVar4);
    pFVar10 = FGLTFBufferBuilder::AddBufferView
                        (pFVar4,local_78.Data,(longlong)local_70[0],ElementArrayBuffer,'\x01');
    pFVar9->BufferView = pFVar10;
    pFVar9->ComponentType = UInt8;
    pFVar9->Count = uVar13;
    pFVar9->Type = Scalar;
    FVar11.Data = local_78.Data;
  }
  else if (uVar8 < 0xffff) {
    pFVar4 = *(FGLTFBufferBuilder **)&this->field_0x58;
    pFVar9 = (FGLTFJsonAccessor *)0x0;
    if (uVar13 == 0) goto LAB_14e5e6e2e;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60[0] = 0;
    local_60[1] = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar13,&local_68,local_60,local_60 + 1);
    if (uVar13 != 0) {
      do {
        uVar12 = (uint)pFVar9;
        uVar8 = 0;
        if ((int)uVar12 < *(int *)&param_1->field_0x8) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar9 = (FGLTFJsonAccessor *)(*pcVar6)();
          return pFVar9;
        }
        uVar2 = *(undefined2 *)(*(longlong *)param_1 + (longlong)(int)uVar12 * 4);
        uVar8 = 0;
        if ((int)uVar12 < local_60[0]) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar9 = (FGLTFJsonAccessor *)(*pcVar6)();
          return pFVar9;
        }
        pFVar9 = (FGLTFJsonAccessor *)(ulonglong)(uVar12 + 1);
        *(undefined2 *)(local_68.Data + (longlong)(int)uVar12 * 2) = uVar2;
      } while (uVar12 + 1 < uVar13);
    }
    pFVar9 = FGLTFJsonBuilder::AddAccessor((FGLTFJsonBuilder *)pFVar4);
    pFVar10 = FGLTFBufferBuilder::AddBufferView
                        (pFVar4,local_68.Data,(longlong)local_60[0] * 2,ElementArrayBuffer,'\x02');
    pFVar9->BufferView = pFVar10;
    pFVar9->ComponentType = UInt16;
    pFVar9->Count = uVar13;
    pFVar9->Type = Scalar;
    FVar11.Data = local_68.Data;
  }
  else {
    if (uVar8 == 0xffffffff) {
      this_00 = *(FGLTFLogBuilder **)&this->field_0x58;
      ::FString::PrintfImpl
                (&local_48,
                 L"Maximum value (%d) used in indices accessor for mesh %s, this may not be supported on some glTF viewers"
                );
      FGLTFLogBuilder::LogWarning(this_00,&local_48);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = *(FGLTFBufferBuilder **)&this->field_0x58;
    uVar13 = 0;
    pFVar9 = (FGLTFJsonAccessor *)0x0;
    uVar8 = *(uint *)&param_1->field_0x8;
    if (uVar8 == 0) goto LAB_14e5e6e2e;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50[0] = 0;
    local_50[1] = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar8,&local_58,local_50,local_50 + 1);
    if (uVar8 != 0) {
      do {
        uVar12 = 0;
        if ((int)uVar13 < *(int *)&param_1->field_0x8) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar9 = (FGLTFJsonAccessor *)(*pcVar6)();
          return pFVar9;
        }
        lVar14 = (longlong)(int)uVar13;
        uVar3 = *(undefined4 *)(*(longlong *)param_1 + lVar14 * 4);
        uVar12 = 0;
        if ((int)uVar13 < local_50[0]) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar9 = (FGLTFJsonAccessor *)(*pcVar6)();
          return pFVar9;
        }
        uVar13 = uVar13 + 1;
        *(undefined4 *)(local_58.Data + lVar14 * 4) = uVar3;
      } while (uVar13 < uVar8);
    }
    pFVar9 = FGLTFJsonBuilder::AddAccessor((FGLTFJsonBuilder *)pFVar4);
    pFVar10 = FGLTFBufferBuilder::AddBufferView
                        (pFVar4,local_58.Data,(longlong)local_50[0] << 2,ElementArrayBuffer,'\x04');
    pFVar9->BufferView = pFVar10;
    pFVar9->ComponentType = UInt32;
    pFVar9->Count = uVar8;
    pFVar9->Type = Scalar;
    FVar11.Data = local_58.Data;
  }
  if (FVar11.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar11.Data);
  }
LAB_14e5e6e2e:
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  pFVar5 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return pFVar9;
}

