// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// Convert @ 14e5e6510

FGLTFJsonAccessor * __thiscall
FGLTFIndexBufferConverter::Convert(FGLTFIndexBufferConverter *this,FGLTFMeshSection *param_1)

{
  FScriptContainerElement FVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  FGLTFBufferBuilder *pFVar4;
  FGLTFLogBuilder *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FGLTFJsonAccessor *pFVar9;
  FGLTFJsonBufferView *pFVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  longlong lVar13;
  ForAnyElementType local_78;
  int local_70 [2];
  ForAnyElementType local_68;
  int local_60 [2];
  ForAnyElementType local_58;
  int local_50 [2];
  FString local_48;
  FString local_38;
  
  uVar7 = (param_1->IndexMap).ArrayNum - 1;
  if (uVar7 < 0xff) {
    pFVar4 = *(FGLTFBufferBuilder **)&this->field_0x58;
    uVar12 = 0;
    uVar7 = (param_1->IndexBuffer).ArrayNum;
    if (uVar7 == 0) {
      return (FGLTFJsonAccessor *)0x0;
    }
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70[0] = 0;
    local_70[1] = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar7,&local_78,local_70,local_70 + 1);
    if (uVar7 != 0) {
      do {
        uVar8 = 0;
        if ((int)uVar12 < (param_1->IndexBuffer).ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FGLTFJsonAccessor *)(*pcVar5)();
          return pFVar9;
        }
        lVar13 = (longlong)(int)uVar12;
        FVar1 = (param_1->IndexBuffer).AllocatorInstance.Data[lVar13 * 4];
        uVar8 = 0;
        if ((int)uVar12 < local_70[0]) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FGLTFJsonAccessor *)(*pcVar5)();
          return pFVar9;
        }
        uVar12 = uVar12 + 1;
        local_78.Data[lVar13] = FVar1;
      } while (uVar12 < uVar7);
    }
    pFVar9 = FGLTFJsonBuilder::AddAccessor((FGLTFJsonBuilder *)pFVar4);
    pFVar10 = FGLTFBufferBuilder::AddBufferView
                        (pFVar4,local_78.Data,(longlong)local_70[0],ElementArrayBuffer,'\x01');
    pFVar9->BufferView = pFVar10;
    pFVar9->ComponentType = UInt8;
    pFVar9->Count = uVar7;
    pFVar9->Type = Scalar;
    FVar11.Data = local_78.Data;
  }
  else if (uVar7 < 0xffff) {
    pFVar4 = *(FGLTFBufferBuilder **)&this->field_0x58;
    uVar12 = 0;
    uVar7 = (param_1->IndexBuffer).ArrayNum;
    if (uVar7 == 0) {
      return (FGLTFJsonAccessor *)0x0;
    }
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60[0] = 0;
    local_60[1] = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar7,&local_68,local_60,local_60 + 1);
    if (uVar7 != 0) {
      do {
        uVar8 = 0;
        if ((int)uVar12 < (param_1->IndexBuffer).ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FGLTFJsonAccessor *)(*pcVar5)();
          return pFVar9;
        }
        lVar13 = (longlong)(int)uVar12;
        uVar2 = *(undefined2 *)((param_1->IndexBuffer).AllocatorInstance.Data + lVar13 * 4);
        uVar8 = 0;
        if ((int)uVar12 < local_60[0]) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FGLTFJsonAccessor *)(*pcVar5)();
          return pFVar9;
        }
        uVar12 = uVar12 + 1;
        *(undefined2 *)(local_68.Data + lVar13 * 2) = uVar2;
      } while (uVar12 < uVar7);
    }
    pFVar9 = FGLTFJsonBuilder::AddAccessor((FGLTFJsonBuilder *)pFVar4);
    pFVar10 = FGLTFBufferBuilder::AddBufferView
                        (pFVar4,local_68.Data,(longlong)local_60[0] * 2,ElementArrayBuffer,'\x02');
    pFVar9->BufferView = pFVar10;
    pFVar9->ComponentType = UInt16;
    pFVar9->Count = uVar7;
    pFVar9->Type = Scalar;
    FVar11.Data = local_68.Data;
  }
  else {
    if (uVar7 == 0xffffffff) {
      this_00 = *(FGLTFLogBuilder **)&this->field_0x58;
      FGLTFMeshSection::ToString(param_1,&local_38);
      ::FString::PrintfImpl
                (&local_48,
                 L"Maximum value (%d) used in indices accessor for mesh %s, this may not be supported on some glTF viewers"
                );
      FGLTFLogBuilder::LogWarning(this_00,&local_48);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = *(FGLTFBufferBuilder **)&this->field_0x58;
    uVar12 = 0;
    uVar7 = (param_1->IndexBuffer).ArrayNum;
    if (uVar7 == 0) {
      return (FGLTFJsonAccessor *)0x0;
    }
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50[0] = 0;
    local_50[1] = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar7,&local_58,local_50,local_50 + 1);
    if (uVar7 != 0) {
      do {
        uVar8 = 0;
        if ((int)uVar12 < (param_1->IndexBuffer).ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FGLTFJsonAccessor *)(*pcVar5)();
          return pFVar9;
        }
        lVar13 = (longlong)(int)uVar12;
        uVar3 = *(undefined4 *)((param_1->IndexBuffer).AllocatorInstance.Data + lVar13 * 4);
        uVar8 = 0;
        if ((int)uVar12 < local_50[0]) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FGLTFJsonAccessor *)(*pcVar5)();
          return pFVar9;
        }
        uVar12 = uVar12 + 1;
        *(undefined4 *)(local_58.Data + lVar13 * 4) = uVar3;
      } while (uVar12 < uVar7);
    }
    pFVar9 = FGLTFJsonBuilder::AddAccessor((FGLTFJsonBuilder *)pFVar4);
    pFVar10 = FGLTFBufferBuilder::AddBufferView
                        (pFVar4,local_58.Data,(longlong)local_50[0] << 2,ElementArrayBuffer,'\x04');
    pFVar9->BufferView = pFVar10;
    pFVar9->ComponentType = UInt32;
    pFVar9->Count = uVar7;
    pFVar9->Type = Scalar;
    FVar11.Data = local_58.Data;
  }
  if (FVar11.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar11.Data);
  }
  return pFVar9;
}

