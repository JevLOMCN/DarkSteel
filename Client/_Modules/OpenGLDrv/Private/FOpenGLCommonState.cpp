// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 3

// ~FOpenGLCommonState @ 145be9660

void __thiscall FOpenGLCommonState::~FOpenGLCommonState(FOpenGLCommonState *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FOpenGLCommonState__6B_;
  CleanupResources(this);
  pFVar1 = (this->UAVs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SamplerStates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Textures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// CleanupResources @ 145bf5aa0

void __thiscall FOpenGLCommonState::CleanupResources(FOpenGLCommonState *this)

{
  int *piVar1;
  
  piVar1 = &(this->SamplerStates).ArrayMax;
  (this->SamplerStates).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->SamplerStates).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->Textures).ArrayMax;
  (this->Textures).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->Textures).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->UAVs).ArrayMax;
  (this->UAVs).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&(this->UAVs).AllocatorInstance,0,piVar1);
  }
  return;
}

// InitializeResources @ 145c08ff0

void __thiscall
FOpenGLCommonState::InitializeResources(FOpenGLCommonState *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  if (FOpenGLBase::MaxCombinedTextureImageUnits == -1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaxCombinedTextureImageUnits != -1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                       ,0x7c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_1 < FOpenGLBase::MaxCombinedTextureImageUnits) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumCombinedTextures >= FOpenGL::GetMaxCombinedTextureImageUnits()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLState.h"
                       ,0x129,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_2 < FOpenGL4::MaxCombinedUAVUnits) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumCombinedUAVUnits >= FOpenGL::GetMaxCombinedUAVUnits()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLState.h"
                       ,0x12a,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((((this->Textures).ArrayNum != 0) || ((this->SamplerStates).ArrayNum != 0)) ||
     ((this->UAVs).ArrayNum != 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Textures.IsEmpty() && SamplerStates.IsEmpty() && UAVs.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLState.h"
                       ,299,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->Textures).ArrayNum;
  if (iVar7 < param_1) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,param_1 - iVar7,&(this->Textures).AllocatorInstance,
                       &(this->Textures).ArrayNum,&(this->Textures).ArrayMax);
    DefaultConstructItems<FTextureStage,int>
              ((this->Textures).AllocatorInstance.Data + (longlong)iVar6 * 0x28,param_1 - iVar7);
  }
  else {
    if (param_1 < 0) goto LAB_145c0931f;
    if (param_1 < iVar7) {
      uVar8 = iVar7 - param_1;
      if ((int)(uVar8 | param_1) < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (uVar8 != 0) {
        pFVar3 = (this->Textures).AllocatorInstance.Data + (longlong)param_1 * 0x28;
        iVar7 = ((this->Textures).ArrayNum - uVar8) - param_1;
        if (iVar7 != 0) {
          memmove(pFVar3,pFVar3 + (longlong)(int)uVar8 * 0x28,(longlong)iVar7 * 0x28);
        }
        piVar1 = &(this->Textures).ArrayNum;
        *piVar1 = *piVar1 - uVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,&(this->Textures).AllocatorInstance,(this->Textures).ArrayNum,
                   &(this->Textures).ArrayMax);
      }
    }
  }
  iVar7 = (this->SamplerStates).ArrayNum;
  if (iVar7 < param_1) {
    TArray<FOpenGLSamplerState_*,TSizedDefaultAllocator<32>_>::AddZeroed
              (&this->SamplerStates,param_1 - iVar7);
  }
  else {
    if (param_1 < 0) {
LAB_145c0931f:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar7) {
      uVar8 = iVar7 - param_1;
      if ((int)(uVar8 | param_1) < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (uVar8 != 0) {
        pFVar3 = (this->SamplerStates).AllocatorInstance.Data + (longlong)param_1 * 8;
        iVar7 = ((this->SamplerStates).ArrayNum - uVar8) - param_1;
        if (iVar7 != 0) {
          memmove(pFVar3,pFVar3 + (longlong)(int)uVar8 * 8,(longlong)iVar7 << 3);
        }
        piVar1 = &(this->SamplerStates).ArrayNum;
        *piVar1 = *piVar1 - uVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->SamplerStates).AllocatorInstance,(this->SamplerStates).ArrayNum,
                   &(this->SamplerStates).ArrayMax);
      }
    }
  }
  if (-1 < param_2) {
    piVar1 = &(this->UAVs).ArrayMax;
    piVar2 = &(this->UAVs).ArrayNum;
    if (*piVar1 < param_2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,param_2,&(this->UAVs).AllocatorInstance,*piVar2,piVar1);
    }
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,4,param_2,&(this->UAVs).AllocatorInstance,piVar2,piVar1);
    DefaultConstructItems<FUAVStage,int>
              ((this->UAVs).AllocatorInstance.Data + (longlong)iVar7 * 0x18,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
}

