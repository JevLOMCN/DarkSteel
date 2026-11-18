// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 4

// ~FOpenGLFenceKick @ 145be97c0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::FOpenGLFenceKick::~FOpenGLFenceKick(FOpenGLFenceKick *this)

{
  FScriptContainerElement *pFVar1;
  
  Reset(this);
  pFVar1 = (this->Syncs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// InsertKick @ 145c099a0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::FOpenGLFenceKick::InsertKick(FOpenGLFenceKick *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  __GLsync *local_18 [2];
  
  local_18[0] = (*glFenceSync)(0x9117,0);
  pFVar2 = (this->Syncs).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Syncs).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Syncs).ArrayNum;
  piVar1 = &(this->Syncs).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  (this->Syncs).ArrayNum = iVar5 + 1;
  *(__GLsync **)((this->Syncs).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  if (9999 < (this->Syncs).ArrayNum) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Syncs.Num() < 10000",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                       ,0x8a4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// OnDrawCall @ 145c0e090

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::FOpenGLFenceKick::OnDrawCall(FOpenGLFenceKick *this)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  __GLsync *local_18 [2];
  
  if (OpenGLConsoleVariables::GOpenGLFenceKickPerDrawCount != 0) {
    uVar2 = (this->RHI->ContextState).Framebuffer;
    if (uVar2 != this->LastSeenFramebuffer) {
      this->LastSeenFramebuffer = uVar2;
      this->DrawCounter = 0;
      return;
    }
    iVar6 = this->DrawCounter + 1;
    this->DrawCounter = iVar6;
    if (OpenGLConsoleVariables::GOpenGLFenceKickPerDrawCount <= iVar6) {
      local_18[0] = (*glFenceSync)(0x9117,0);
      pFVar3 = (this->Syncs).AllocatorInstance.Data;
      if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Syncs).ArrayMax * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = (this->Syncs).ArrayNum;
      piVar1 = &(this->Syncs).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,piVar1);
      }
      (this->Syncs).ArrayNum = iVar6 + 1;
      *(__GLsync **)((this->Syncs).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_18[0];
      if (9999 < (this->Syncs).ArrayNum) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Syncs.Num() < 10000",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                           ,0x8a4,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      this->DrawCounter = 0;
    }
  }
  return;
}

// Reset @ 145c2a670

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::FOpenGLFenceKick::Reset(FOpenGLFenceKick *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Syncs).AllocatorInstance.Data;
  iVar2 = (this->Syncs).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Syncs).ArrayNum != iVar2) {
      `TCheckedPointerIterator<__GLsync_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (*glDeleteSync)(*(__GLsync **)pFVar3);
    pFVar3 = pFVar3 + 8;
  }
  (this->Syncs).ArrayNum = 0;
  if ((this->Syncs).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,&(this->Syncs).ArrayMax);
  }
  this->DrawCounter = 0;
  this->LastSeenFramebuffer = 0;
  return;
}

