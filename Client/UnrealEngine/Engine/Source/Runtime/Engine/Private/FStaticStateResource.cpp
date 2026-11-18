// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 40

// InitRHI @ 147aa7520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,1,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::FStaticStateResource::InitRHI(FStaticStateResource *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIBlendState> *pTVar1;
  FRHIResource *this_00;
  code *pcVar2;
  bool bVar3;
  TRefCountPtr<FRHIBlendState> TVar4;
  FRHIResource *local_res8;
  
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,0x54,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TVar4 = TStaticBlendState<15,0,1,0,0,1,0,1,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>
          ::CreateRHI();
  pTVar1 = &this->StateRHI;
  if ((FRHIBlendState *)pTVar1 != TVar4.Reference) {
    this_00 = (FRHIResource *)pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar1->Reference = *TVar4.Reference;
    *(undefined8 *)TVar4.Reference = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return;
}

// ReleaseRHI @ 147aa75b0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,1,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::FStaticStateResource::ReleaseRHI(FStaticStateResource *this)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,0x59,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (FRHIResource *)(this->StateRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    (this->StateRHI).Reference = (FRHIBlendState *)0x0;
    FRHIResource::Release(this_00);
    return;
  }
  return;
}

// ReleaseResource @ 147aa7620

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,1,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::FStaticStateResource::ReleaseResource(FStaticStateResource *this)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FRenderResourceList *this_00;
  
  if ((!GIsCriticalError) && ((int)this->_padding_ != -1)) {
    if (GRHIGlobals.IsRHIInitialized) {
      (**(code **)(this->_padding_ + 0x10))();
    }
    if (*(char *)((longlong)&this->_padding_ + 5) == '\0') {
      this_00 = FRenderResourceList::Get<0>();
    }
    else {
      this_00 = FRenderResourceList::Get<1>();
    }
    uVar2 = (uint)this->_padding_;
    UE::FRecursiveMutex::Lock(&this_00->Mutex);
    iVar5 = (this_00->FreeIndexList).ArrayNum;
    piVar1 = &(this_00->FreeIndexList).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this_00->FreeIndexList).AllocatorInstance,piVar1);
    }
    (this_00->FreeIndexList).ArrayNum = iVar5 + 1;
    *(uint *)((this_00->FreeIndexList).AllocatorInstance.Data + (longlong)iVar5 * 4) = uVar2;
    uVar6 = 0;
    if ((int)uVar2 < (this_00->ResourceList).ArrayNum) {
      uVar6 = ~uVar2 >> 0x1f;
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
    *(undefined8 *)((this_00->ResourceList).AllocatorInstance.Data + (longlong)(int)uVar2 * 8) = 0;
    UE::FRecursiveMutex::Unlock(&this_00->Mutex);
    *(undefined4 *)&this->_padding_ = 0xffffffff;
  }
  return;
}

// InitRHI @ 147aa7670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,5,1,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::FStaticStateResource::InitRHI(FStaticStateResource *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIBlendState> *pTVar1;
  FRHIResource *this_00;
  code *pcVar2;
  bool bVar3;
  TRefCountPtr<FRHIBlendState> TVar4;
  FRHIResource *local_res8;
  
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,0x54,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TVar4 = TStaticBlendState<15,0,4,5,0,0,5,1,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>
          ::CreateRHI();
  pTVar1 = &this->StateRHI;
  if ((FRHIBlendState *)pTVar1 != TVar4.Reference) {
    this_00 = (FRHIResource *)pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar1->Reference = *TVar4.Reference;
    *(undefined8 *)TVar4.Reference = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return;
}

// ReleaseRHI @ 147aa7700

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,5,1,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::FStaticStateResource::ReleaseRHI(FStaticStateResource *this)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,0x59,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (FRHIResource *)(this->StateRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    (this->StateRHI).Reference = (FRHIBlendState *)0x0;
    FRHIResource::Release(this_00);
    return;
  }
  return;
}

// ReleaseResource @ 147aa7770

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,5,1,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::FStaticStateResource::ReleaseResource(FStaticStateResource *this)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FRenderResourceList *this_00;
  
  if ((!GIsCriticalError) && ((int)this->_padding_ != -1)) {
    if (GRHIGlobals.IsRHIInitialized) {
      (**(code **)(this->_padding_ + 0x10))();
    }
    if (*(char *)((longlong)&this->_padding_ + 5) == '\0') {
      this_00 = FRenderResourceList::Get<0>();
    }
    else {
      this_00 = FRenderResourceList::Get<1>();
    }
    uVar2 = (uint)this->_padding_;
    UE::FRecursiveMutex::Lock(&this_00->Mutex);
    iVar5 = (this_00->FreeIndexList).ArrayNum;
    piVar1 = &(this_00->FreeIndexList).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this_00->FreeIndexList).AllocatorInstance,piVar1);
    }
    (this_00->FreeIndexList).ArrayNum = iVar5 + 1;
    *(uint *)((this_00->FreeIndexList).AllocatorInstance.Data + (longlong)iVar5 * 4) = uVar2;
    uVar6 = 0;
    if ((int)uVar2 < (this_00->ResourceList).ArrayNum) {
      uVar6 = ~uVar2 >> 0x1f;
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
    *(undefined8 *)((this_00->ResourceList).AllocatorInstance.Data + (longlong)(int)uVar2 * 8) = 0;
    UE::FRecursiveMutex::Unlock(&this_00->Mutex);
    *(undefined4 *)&this->_padding_ = 0xffffffff;
  }
  return;
}

// InitRHI @ 147aa77c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,1,0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::FStaticStateResource::InitRHI(FStaticStateResource *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIBlendState> *pTVar1;
  FRHIResource *this_00;
  code *pcVar2;
  bool bVar3;
  TRefCountPtr<FRHIBlendState> TVar4;
  FRHIResource *local_res8;
  
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,0x54,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TVar4 = TStaticBlendState<15,0,1,1,0,0,1,0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>
          ::CreateRHI();
  pTVar1 = &this->StateRHI;
  if ((FRHIBlendState *)pTVar1 != TVar4.Reference) {
    this_00 = (FRHIResource *)pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar1->Reference = *TVar4.Reference;
    *(undefined8 *)TVar4.Reference = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return;
}

// ReleaseRHI @ 147aa7850

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,1,0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::FStaticStateResource::ReleaseRHI(FStaticStateResource *this)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,0x59,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (FRHIResource *)(this->StateRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    (this->StateRHI).Reference = (FRHIBlendState *)0x0;
    FRHIResource::Release(this_00);
    return;
  }
  return;
}

// ReleaseResource @ 147aa78c0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,1,0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::FStaticStateResource::ReleaseResource(FStaticStateResource *this)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FRenderResourceList *this_00;
  
  if ((!GIsCriticalError) && ((int)this->_padding_ != -1)) {
    if (GRHIGlobals.IsRHIInitialized) {
      (**(code **)(this->_padding_ + 0x10))();
    }
    if (*(char *)((longlong)&this->_padding_ + 5) == '\0') {
      this_00 = FRenderResourceList::Get<0>();
    }
    else {
      this_00 = FRenderResourceList::Get<1>();
    }
    uVar2 = (uint)this->_padding_;
    UE::FRecursiveMutex::Lock(&this_00->Mutex);
    iVar5 = (this_00->FreeIndexList).ArrayNum;
    piVar1 = &(this_00->FreeIndexList).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this_00->FreeIndexList).AllocatorInstance,piVar1);
    }
    (this_00->FreeIndexList).ArrayNum = iVar5 + 1;
    *(uint *)((this_00->FreeIndexList).AllocatorInstance.Data + (longlong)iVar5 * 4) = uVar2;
    uVar6 = 0;
    if ((int)uVar2 < (this_00->ResourceList).ArrayNum) {
      uVar6 = ~uVar2 >> 0x1f;
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
    *(undefined8 *)((this_00->ResourceList).AllocatorInstance.Data + (longlong)(int)uVar2 * 8) = 0;
    UE::FRecursiveMutex::Unlock(&this_00->Mutex);
    *(undefined4 *)&this->_padding_ = 0xffffffff;
  }
  return;
}

// InitRHI @ 147aa7990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,5,0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::FStaticStateResource::InitRHI(FStaticStateResource *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIBlendState> *pTVar1;
  FRHIResource *this_00;
  code *pcVar2;
  bool bVar3;
  TRefCountPtr<FRHIBlendState> TVar4;
  FRHIResource *local_res8;
  
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,0x54,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TVar4 = TStaticBlendState<15,0,4,5,0,0,5,0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>
          ::CreateRHI();
  pTVar1 = &this->StateRHI;
  if ((FRHIBlendState *)pTVar1 != TVar4.Reference) {
    this_00 = (FRHIResource *)pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar1->Reference = *TVar4.Reference;
    *(undefined8 *)TVar4.Reference = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return;
}

// ReleaseRHI @ 147aa7a20

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,5,0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::FStaticStateResource::ReleaseRHI(FStaticStateResource *this)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,0x59,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (FRHIResource *)(this->StateRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    (this->StateRHI).Reference = (FRHIBlendState *)0x0;
    FRHIResource::Release(this_00);
    return;
  }
  return;
}

// ReleaseResource @ 147aa7a90

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,5,0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::FStaticStateResource::ReleaseResource(FStaticStateResource *this)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FRenderResourceList *this_00;
  
  if ((!GIsCriticalError) && ((int)this->_padding_ != -1)) {
    if (GRHIGlobals.IsRHIInitialized) {
      (**(code **)(this->_padding_ + 0x10))();
    }
    if (*(char *)((longlong)&this->_padding_ + 5) == '\0') {
      this_00 = FRenderResourceList::Get<0>();
    }
    else {
      this_00 = FRenderResourceList::Get<1>();
    }
    uVar2 = (uint)this->_padding_;
    UE::FRecursiveMutex::Lock(&this_00->Mutex);
    iVar5 = (this_00->FreeIndexList).ArrayNum;
    piVar1 = &(this_00->FreeIndexList).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this_00->FreeIndexList).AllocatorInstance,piVar1);
    }
    (this_00->FreeIndexList).ArrayNum = iVar5 + 1;
    *(uint *)((this_00->FreeIndexList).AllocatorInstance.Data + (longlong)iVar5 * 4) = uVar2;
    uVar6 = 0;
    if ((int)uVar2 < (this_00->ResourceList).ArrayNum) {
      uVar6 = ~uVar2 >> 0x1f;
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
    *(undefined8 *)((this_00->ResourceList).AllocatorInstance.Data + (longlong)(int)uVar2 * 8) = 0;
    UE::FRecursiveMutex::Unlock(&this_00->Mutex);
    *(undefined4 *)&this->_padding_ = 0xffffffff;
  }
  return;
}

// ~FStaticStateResource @ 147abf360

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,1,0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::FStaticStateResource::~FStaticStateResource(FStaticStateResource *this)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__00_00_0A__0A__00_0A__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized != false) && (GRHIGlobals.SupportsRHIThread != false)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource((FRenderResource *)this);
  this_00 = (FRHIResource *)(this->StateRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~FStaticStateResource @ 147abf3e0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,1,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::FStaticStateResource::~FStaticStateResource(FStaticStateResource *this)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__00_0A__0A__00_0A__00_0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized != false) && (GRHIGlobals.SupportsRHIThread != false)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource((FRenderResource *)this);
  this_00 = (FRHIResource *)(this->StateRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~FStaticStateResource @ 147abf460

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,5,1,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::FStaticStateResource::~FStaticStateResource(FStaticStateResource *this)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__03_04_0A__0A__04_00_0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized != false) && (GRHIGlobals.SupportsRHIThread != false)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource((FRenderResource *)this);
  this_00 = (FRHIResource *)(this->StateRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~FStaticStateResource @ 147abf4e0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,5,0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::FStaticStateResource::~FStaticStateResource(FStaticStateResource *this)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__03_04_0A__0A__04_0A__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized != false) && (GRHIGlobals.SupportsRHIThread != false)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource((FRenderResource *)this);
  this_00 = (FRHIResource *)(this->StateRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// InitRHI @ 147f8e970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::FStaticStateResource::InitRHI(FStaticStateResource *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHISamplerState> *pTVar1;
  FRHIResource *this_00;
  code *pcVar2;
  bool bVar3;
  FLLMScope local_res8 [5];
  FMemScope local_res18 [2];
  TRefCountPtr<FRHISamplerState> local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_20;
  undefined1 local_18;
  
  if (((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                         ,0x54,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_30 = 0x1010101;
  local_2c = 0;
  local_24 = 0x7f7fffff;
  local_20 = 8;
  local_18 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                    ::__l2::LLMScope_Name1147,L"RHIMisc/CreateSamplerState");
    _Init_thread_footer(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
             ::__l2::LLMScope_Name1147,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
              ::__l2::LLMScope_Name1147,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x48))(GDynamicRHI,&local_38,&local_30);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  pTVar1 = &this->StateRHI;
  if (pTVar1 != &local_38) {
    this_00 = (FRHIResource *)pTVar1->Reference;
    pTVar1->Reference = local_38.Reference;
    local_38.Reference = (FRHISamplerState *)0x0;
    if (this_00 == (FRHIResource *)0x0) {
      return;
    }
    FRHIResource::Release(this_00);
  }
  if ((FRHIResource *)local_38.Reference != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.Reference);
  }
  return;
}

// ReleaseRHI @ 147f8eaf0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::FStaticStateResource::ReleaseRHI(FStaticStateResource *this)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,0x59,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (FRHIResource *)(this->StateRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    (this->StateRHI).Reference = (FRHISamplerState *)0x0;
    FRHIResource::Release(this_00);
    return;
  }
  return;
}

// ReleaseResource @ 147f8eb60

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::FStaticStateResource::ReleaseResource(FStaticStateResource *this)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FRenderResourceList *this_00;
  
  if ((!GIsCriticalError) && ((int)this->_padding_ != -1)) {
    if (GRHIGlobals.IsRHIInitialized) {
      (**(code **)(this->_padding_ + 0x10))();
    }
    if (*(char *)((longlong)&this->_padding_ + 5) == '\0') {
      this_00 = FRenderResourceList::Get<0>();
    }
    else {
      this_00 = FRenderResourceList::Get<1>();
    }
    uVar2 = (uint)this->_padding_;
    UE::FRecursiveMutex::Lock(&this_00->Mutex);
    iVar5 = (this_00->FreeIndexList).ArrayNum;
    piVar1 = &(this_00->FreeIndexList).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this_00->FreeIndexList).AllocatorInstance,piVar1);
    }
    (this_00->FreeIndexList).ArrayNum = iVar5 + 1;
    *(uint *)((this_00->FreeIndexList).AllocatorInstance.Data + (longlong)iVar5 * 4) = uVar2;
    uVar6 = 0;
    if ((int)uVar2 < (this_00->ResourceList).ArrayNum) {
      uVar6 = ~uVar2 >> 0x1f;
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
    *(undefined8 *)((this_00->ResourceList).AllocatorInstance.Data + (longlong)(int)uVar2 * 8) = 0;
    UE::FRecursiveMutex::Unlock(&this_00->Mutex);
    *(undefined4 *)&this->_padding_ = 0xffffffff;
  }
  return;
}

// InitRHI @ 147f8ebb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,2,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::FStaticStateResource::InitRHI(FStaticStateResource *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHISamplerState> *pTVar1;
  FRHIResource *this_00;
  code *pcVar2;
  bool bVar3;
  FLLMScope local_res8 [5];
  FMemScope local_res18 [2];
  TRefCountPtr<FRHISamplerState> local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_20;
  undefined1 local_18;
  
  if (((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                         ,0x54,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_30 = 0x1010103;
  local_2c = 0;
  local_24 = 0x7f7fffff;
  local_20 = 2;
  local_18 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                    ::__l2::LLMScope_Name1147,L"RHIMisc/CreateSamplerState");
    _Init_thread_footer(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
             ::__l2::LLMScope_Name1147,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
              ::__l2::LLMScope_Name1147,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x48))(GDynamicRHI,&local_38,&local_30);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  pTVar1 = &this->StateRHI;
  if (pTVar1 != &local_38) {
    this_00 = (FRHIResource *)pTVar1->Reference;
    pTVar1->Reference = local_38.Reference;
    local_38.Reference = (FRHISamplerState *)0x0;
    if (this_00 == (FRHIResource *)0x0) {
      return;
    }
    FRHIResource::Release(this_00);
  }
  if ((FRHIResource *)local_38.Reference != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.Reference);
  }
  return;
}

// ReleaseRHI @ 147f8ed30

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,2,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::FStaticStateResource::ReleaseRHI(FStaticStateResource *this)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,0x59,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (FRHIResource *)(this->StateRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    (this->StateRHI).Reference = (FRHISamplerState *)0x0;
    FRHIResource::Release(this_00);
    return;
  }
  return;
}

// ReleaseResource @ 147f8eda0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,2,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::FStaticStateResource::ReleaseResource(FStaticStateResource *this)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FRenderResourceList *this_00;
  
  if ((!GIsCriticalError) && ((int)this->_padding_ != -1)) {
    if (GRHIGlobals.IsRHIInitialized) {
      (**(code **)(this->_padding_ + 0x10))();
    }
    if (*(char *)((longlong)&this->_padding_ + 5) == '\0') {
      this_00 = FRenderResourceList::Get<0>();
    }
    else {
      this_00 = FRenderResourceList::Get<1>();
    }
    uVar2 = (uint)this->_padding_;
    UE::FRecursiveMutex::Lock(&this_00->Mutex);
    iVar5 = (this_00->FreeIndexList).ArrayNum;
    piVar1 = &(this_00->FreeIndexList).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this_00->FreeIndexList).AllocatorInstance,piVar1);
    }
    (this_00->FreeIndexList).ArrayNum = iVar5 + 1;
    *(uint *)((this_00->FreeIndexList).AllocatorInstance.Data + (longlong)iVar5 * 4) = uVar2;
    uVar6 = 0;
    if ((int)uVar2 < (this_00->ResourceList).ArrayNum) {
      uVar6 = ~uVar2 >> 0x1f;
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
    *(undefined8 *)((this_00->ResourceList).AllocatorInstance.Data + (longlong)(int)uVar2 * 8) = 0;
    UE::FRecursiveMutex::Unlock(&this_00->Mutex);
    *(undefined4 *)&this->_padding_ = 0xffffffff;
  }
  return;
}

// InitRHI @ 147f8edf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,4,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::FStaticStateResource::InitRHI(FStaticStateResource *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHISamplerState> *pTVar1;
  FRHIResource *this_00;
  code *pcVar2;
  bool bVar3;
  FLLMScope local_res8 [5];
  FMemScope local_res18 [2];
  TRefCountPtr<FRHISamplerState> local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_20;
  undefined1 local_18;
  
  if (((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                         ,0x54,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_30 = 0x1010103;
  local_2c = 0;
  local_24 = 0x7f7fffff;
  local_20 = 4;
  local_18 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                    ::__l2::LLMScope_Name1147,L"RHIMisc/CreateSamplerState");
    _Init_thread_footer(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
             ::__l2::LLMScope_Name1147,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
              ::__l2::LLMScope_Name1147,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x48))(GDynamicRHI,&local_38,&local_30);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  pTVar1 = &this->StateRHI;
  if (pTVar1 != &local_38) {
    this_00 = (FRHIResource *)pTVar1->Reference;
    pTVar1->Reference = local_38.Reference;
    local_38.Reference = (FRHISamplerState *)0x0;
    if (this_00 == (FRHIResource *)0x0) {
      return;
    }
    FRHIResource::Release(this_00);
  }
  if ((FRHIResource *)local_38.Reference != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.Reference);
  }
  return;
}

// ReleaseRHI @ 147f8ef70

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,4,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::FStaticStateResource::ReleaseRHI(FStaticStateResource *this)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,0x59,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (FRHIResource *)(this->StateRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    (this->StateRHI).Reference = (FRHISamplerState *)0x0;
    FRHIResource::Release(this_00);
    return;
  }
  return;
}

// ReleaseResource @ 147f8efe0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,4,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::FStaticStateResource::ReleaseResource(FStaticStateResource *this)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FRenderResourceList *this_00;
  
  if ((!GIsCriticalError) && ((int)this->_padding_ != -1)) {
    if (GRHIGlobals.IsRHIInitialized) {
      (**(code **)(this->_padding_ + 0x10))();
    }
    if (*(char *)((longlong)&this->_padding_ + 5) == '\0') {
      this_00 = FRenderResourceList::Get<0>();
    }
    else {
      this_00 = FRenderResourceList::Get<1>();
    }
    uVar2 = (uint)this->_padding_;
    UE::FRecursiveMutex::Lock(&this_00->Mutex);
    iVar5 = (this_00->FreeIndexList).ArrayNum;
    piVar1 = &(this_00->FreeIndexList).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this_00->FreeIndexList).AllocatorInstance,piVar1);
    }
    (this_00->FreeIndexList).ArrayNum = iVar5 + 1;
    *(uint *)((this_00->FreeIndexList).AllocatorInstance.Data + (longlong)iVar5 * 4) = uVar2;
    uVar6 = 0;
    if ((int)uVar2 < (this_00->ResourceList).ArrayNum) {
      uVar6 = ~uVar2 >> 0x1f;
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
    *(undefined8 *)((this_00->ResourceList).AllocatorInstance.Data + (longlong)(int)uVar2 * 8) = 0;
    UE::FRecursiveMutex::Unlock(&this_00->Mutex);
    *(undefined4 *)&this->_padding_ = 0xffffffff;
  }
  return;
}

// InitRHI @ 147f8f030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::FStaticStateResource::InitRHI(FStaticStateResource *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHISamplerState> *pTVar1;
  FRHIResource *this_00;
  code *pcVar2;
  bool bVar3;
  FLLMScope local_res8 [5];
  FMemScope local_res18 [2];
  TRefCountPtr<FRHISamplerState> local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_20;
  undefined1 local_18;
  
  if (((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                         ,0x54,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_30 = 0x1010103;
  local_2c = 0;
  local_24 = 0x7f7fffff;
  local_20 = 8;
  local_18 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                    ::__l2::LLMScope_Name1147,L"RHIMisc/CreateSamplerState");
    _Init_thread_footer(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
             ::__l2::LLMScope_Name1147,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
              ::__l2::LLMScope_Name1147,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x48))(GDynamicRHI,&local_38,&local_30);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  pTVar1 = &this->StateRHI;
  if (pTVar1 != &local_38) {
    this_00 = (FRHIResource *)pTVar1->Reference;
    pTVar1->Reference = local_38.Reference;
    local_38.Reference = (FRHISamplerState *)0x0;
    if (this_00 == (FRHIResource *)0x0) {
      return;
    }
    FRHIResource::Release(this_00);
  }
  if ((FRHIResource *)local_38.Reference != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.Reference);
  }
  return;
}

// ReleaseRHI @ 147f8f1b0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::FStaticStateResource::ReleaseRHI(FStaticStateResource *this)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,0x59,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (FRHIResource *)(this->StateRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    (this->StateRHI).Reference = (FRHISamplerState *)0x0;
    FRHIResource::Release(this_00);
    return;
  }
  return;
}

// ReleaseResource @ 147f8f220

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::FStaticStateResource::ReleaseResource(FStaticStateResource *this)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FRenderResourceList *this_00;
  
  if ((!GIsCriticalError) && ((int)this->_padding_ != -1)) {
    if (GRHIGlobals.IsRHIInitialized) {
      (**(code **)(this->_padding_ + 0x10))();
    }
    if (*(char *)((longlong)&this->_padding_ + 5) == '\0') {
      this_00 = FRenderResourceList::Get<0>();
    }
    else {
      this_00 = FRenderResourceList::Get<1>();
    }
    uVar2 = (uint)this->_padding_;
    UE::FRecursiveMutex::Lock(&this_00->Mutex);
    iVar5 = (this_00->FreeIndexList).ArrayNum;
    piVar1 = &(this_00->FreeIndexList).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this_00->FreeIndexList).AllocatorInstance,piVar1);
    }
    (this_00->FreeIndexList).ArrayNum = iVar5 + 1;
    *(uint *)((this_00->FreeIndexList).AllocatorInstance.Data + (longlong)iVar5 * 4) = uVar2;
    uVar6 = 0;
    if ((int)uVar2 < (this_00->ResourceList).ArrayNum) {
      uVar6 = ~uVar2 >> 0x1f;
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
    *(undefined8 *)((this_00->ResourceList).AllocatorInstance.Data + (longlong)(int)uVar2 * 8) = 0;
    UE::FRecursiveMutex::Unlock(&this_00->Mutex);
    *(undefined4 *)&this->_padding_ = 0xffffffff;
  }
  return;
}

// ~FStaticStateResource @ 147fa9290

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::FStaticStateResource::~FStaticStateResource(FStaticStateResource *this)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__00_00_00_00_0A__07_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized != false) && (GRHIGlobals.SupportsRHIThread != false)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource((FRenderResource *)this);
  this_00 = (FRHIResource *)(this->StateRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~FStaticStateResource @ 147fa9310

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,2,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::FStaticStateResource::~FStaticStateResource(FStaticStateResource *this)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__02_00_00_00_0A__01_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized != false) && (GRHIGlobals.SupportsRHIThread != false)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource((FRenderResource *)this);
  this_00 = (FRHIResource *)(this->StateRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~FStaticStateResource @ 147fa9390

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,4,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::FStaticStateResource::~FStaticStateResource(FStaticStateResource *this)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__02_00_00_00_0A__03_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized != false) && (GRHIGlobals.SupportsRHIThread != false)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource((FRenderResource *)this);
  this_00 = (FRHIResource *)(this->StateRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~FStaticStateResource @ 147fa9410

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::FStaticStateResource::~FStaticStateResource(FStaticStateResource *this)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__02_00_00_00_0A__07_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized != false) && (GRHIGlobals.SupportsRHIThread != false)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource((FRenderResource *)this);
  this_00 = (FRHIResource *)(this->StateRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// InitRHI @ 1484a3530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticSamplerState<4,1,1,1,0,4,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::FStaticStateResource::InitRHI(FStaticStateResource *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHISamplerState> *pTVar1;
  FRHIResource *this_00;
  code *pcVar2;
  bool bVar3;
  FLLMScope local_res8 [5];
  FMemScope local_res18 [2];
  TRefCountPtr<FRHISamplerState> local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_20;
  undefined1 local_18;
  
  if (((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                         ,0x54,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_30 = 0x1010104;
  local_2c = 0;
  local_24 = 0x7f7fffff;
  local_20 = 4;
  local_18 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                    ::__l2::LLMScope_Name1147,L"RHIMisc/CreateSamplerState");
    _Init_thread_footer(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
             ::__l2::LLMScope_Name1147,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
              ::__l2::LLMScope_Name1147,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x48))(GDynamicRHI,&local_38,&local_30);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  pTVar1 = &this->StateRHI;
  if (pTVar1 != &local_38) {
    this_00 = (FRHIResource *)pTVar1->Reference;
    pTVar1->Reference = local_38.Reference;
    local_38.Reference = (FRHISamplerState *)0x0;
    if (this_00 == (FRHIResource *)0x0) {
      return;
    }
    FRHIResource::Release(this_00);
  }
  if ((FRHIResource *)local_38.Reference != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.Reference);
  }
  return;
}

// ReleaseRHI @ 1484a36b0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticSamplerState<4,1,1,1,0,4,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::FStaticStateResource::ReleaseRHI(FStaticStateResource *this)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,0x59,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (FRHIResource *)(this->StateRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    (this->StateRHI).Reference = (FRHISamplerState *)0x0;
    FRHIResource::Release(this_00);
    return;
  }
  return;
}

// ReleaseResource @ 1484a3730

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticSamplerState<4,1,1,1,0,4,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::FStaticStateResource::ReleaseResource(FStaticStateResource *this)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FRenderResourceList *this_00;
  
  if ((!GIsCriticalError) && ((int)this->_padding_ != -1)) {
    if (GRHIGlobals.IsRHIInitialized) {
      (**(code **)(this->_padding_ + 0x10))();
    }
    if (*(char *)((longlong)&this->_padding_ + 5) == '\0') {
      this_00 = FRenderResourceList::Get<0>();
    }
    else {
      this_00 = FRenderResourceList::Get<1>();
    }
    uVar2 = (uint)this->_padding_;
    UE::FRecursiveMutex::Lock(&this_00->Mutex);
    iVar5 = (this_00->FreeIndexList).ArrayNum;
    piVar1 = &(this_00->FreeIndexList).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this_00->FreeIndexList).AllocatorInstance,piVar1);
    }
    (this_00->FreeIndexList).ArrayNum = iVar5 + 1;
    *(uint *)((this_00->FreeIndexList).AllocatorInstance.Data + (longlong)iVar5 * 4) = uVar2;
    uVar6 = 0;
    if ((int)uVar2 < (this_00->ResourceList).ArrayNum) {
      uVar6 = ~uVar2 >> 0x1f;
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
    *(undefined8 *)((this_00->ResourceList).AllocatorInstance.Data + (longlong)(int)uVar2 * 8) = 0;
    UE::FRecursiveMutex::Unlock(&this_00->Mutex);
    *(undefined4 *)&this->_padding_ = 0xffffffff;
  }
  return;
}

// InitRHI @ 1484a3820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticSamplerState<4,1,1,1,0,0,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::FStaticStateResource::InitRHI(FStaticStateResource *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHISamplerState> *pTVar1;
  FRHIResource *this_00;
  code *pcVar2;
  bool bVar3;
  FLLMScope local_res8 [5];
  FMemScope local_res18 [2];
  TRefCountPtr<FRHISamplerState> local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined8 local_24;
  undefined4 local_1c;
  undefined1 local_18;
  
  if (((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                         ,0x54,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_30 = 0x1010104;
  local_2c = 0;
  local_24 = 0x7f7fffff;
  local_1c = 0;
  local_18 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                    ::__l2::LLMScope_Name1147,L"RHIMisc/CreateSamplerState");
    _Init_thread_footer(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
             ::__l2::LLMScope_Name1147,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
              ::__l2::LLMScope_Name1147,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x48))(GDynamicRHI,&local_38,&local_30);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  pTVar1 = &this->StateRHI;
  if (pTVar1 != &local_38) {
    this_00 = (FRHIResource *)pTVar1->Reference;
    pTVar1->Reference = local_38.Reference;
    local_38.Reference = (FRHISamplerState *)0x0;
    if (this_00 == (FRHIResource *)0x0) {
      return;
    }
    FRHIResource::Release(this_00);
  }
  if ((FRHIResource *)local_38.Reference != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.Reference);
  }
  return;
}

// ReleaseRHI @ 1484a39a0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticSamplerState<4,1,1,1,0,0,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::FStaticStateResource::ReleaseRHI(FStaticStateResource *this)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,0x59,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (FRHIResource *)(this->StateRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    (this->StateRHI).Reference = (FRHISamplerState *)0x0;
    FRHIResource::Release(this_00);
    return;
  }
  return;
}

// ReleaseResource @ 1484a3a10

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticSamplerState<4,1,1,1,0,0,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::FStaticStateResource::ReleaseResource(FStaticStateResource *this)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FRenderResourceList *this_00;
  
  if ((!GIsCriticalError) && ((int)this->_padding_ != -1)) {
    if (GRHIGlobals.IsRHIInitialized) {
      (**(code **)(this->_padding_ + 0x10))();
    }
    if (*(char *)((longlong)&this->_padding_ + 5) == '\0') {
      this_00 = FRenderResourceList::Get<0>();
    }
    else {
      this_00 = FRenderResourceList::Get<1>();
    }
    uVar2 = (uint)this->_padding_;
    UE::FRecursiveMutex::Lock(&this_00->Mutex);
    iVar5 = (this_00->FreeIndexList).ArrayNum;
    piVar1 = &(this_00->FreeIndexList).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this_00->FreeIndexList).AllocatorInstance,piVar1);
    }
    (this_00->FreeIndexList).ArrayNum = iVar5 + 1;
    *(uint *)((this_00->FreeIndexList).AllocatorInstance.Data + (longlong)iVar5 * 4) = uVar2;
    uVar6 = 0;
    if ((int)uVar2 < (this_00->ResourceList).ArrayNum) {
      uVar6 = ~uVar2 >> 0x1f;
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
    *(undefined8 *)((this_00->ResourceList).AllocatorInstance.Data + (longlong)(int)uVar2 * 8) = 0;
    UE::FRecursiveMutex::Unlock(&this_00->Mutex);
    *(undefined4 *)&this->_padding_ = 0xffffffff;
  }
  return;
}

// ~FStaticStateResource @ 1484be0e0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticSamplerState<4,1,1,1,0,4,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::FStaticStateResource::~FStaticStateResource(FStaticStateResource *this)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__03_00_00_00_0A__03_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized != false) && (GRHIGlobals.SupportsRHIThread != false)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource((FRenderResource *)this);
  this_00 = (FRHIResource *)(this->StateRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~FStaticStateResource @ 1484be160

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticSamplerState<4,1,1,1,0,0,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::FStaticStateResource::~FStaticStateResource(FStaticStateResource *this)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__03_00_00_00_0A__0A__0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized != false) && (GRHIGlobals.SupportsRHIThread != false)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource((FRenderResource *)this);
  this_00 = (FRHIResource *)(this->StateRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

