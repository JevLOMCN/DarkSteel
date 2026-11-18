// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 2

// operator() @ 145beecc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TDefaultDelete<FOpenGLEventQuery>::operator()
          (TDefaultDelete<FOpenGLEventQuery> *this,FOpenGLEventQuery *param_1)

{
  HGLRC pHVar1;
  
  if (param_1 != (FOpenGLEventQuery *)0x0) {
    pHVar1 = wglGetCurrentContext();
    if (pHVar1 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
      IsInRHIThread();
      IsInRenderingThread();
      IsInGameThread();
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    (*glDeleteSync)(param_1->Sync);
    ::operator_delete(param_1,8);
  }
  return;
}

// operator() @ 145beed70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TDefaultDelete<FTextureEvictionParams>::operator()
          (TDefaultDelete<FTextureEvictionParams> *this,FTextureEvictionParams *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  HGLRC pHVar7;
  longlong lVar8;
  
  if (param_1 != (FTextureEvictionParams *)0x0) {
    pHVar7 = wglGetCurrentContext();
    if (pHVar7 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
      IsInRHIThread();
      IsInRenderingThread();
      IsInGameThread();
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if (param_1->bHasRestored != 0) {
      uVar5 = FTextureEvictionParams::GetTotalAllocated(param_1);
      GTotalEvictedMipMemDuplicated = GTotalEvictedMipMemDuplicated - uVar5;
    }
    uVar5 = (param_1->MipImageData).ArrayNum - 1;
    if (-1 < (int)uVar5) {
      lVar8 = (longlong)(int)uVar5 << 4;
      do {
        uVar6 = 0;
        if ((int)uVar5 < (param_1->MipImageData).ArrayNum) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        lVar1 = lVar8 + 8;
        lVar8 = lVar8 + -0x10;
        GTotalEvictedMipMemStored =
             GTotalEvictedMipMemStored -
             *(int *)((param_1->MipImageData).AllocatorInstance.Data + lVar1);
        uVar5 = uVar5 - 1;
      } while (-1 < (int)uVar5);
    }
    GTotalMipStoredCount = GTotalMipStoredCount - (param_1->MipImageData).ArrayNum;
    pFVar2 = (param_1->TextureDebugName).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
              ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
               (param_1->MipImageData).AllocatorInstance.Data,(param_1->MipImageData).ArrayNum);
    pFVar2 = (param_1->MipImageData).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(param_1,0x30);
  }
  return;
}

