// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 4

// InitRHI @ 148de7e40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticBlendState<8,1,1,8,1,1,6,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
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
  TVar4 = TStaticBlendState<8,1,1,8,1,1,6,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>
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

// ReleaseRHI @ 148de7f50

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticBlendState<8,1,1,8,1,1,6,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
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

// ReleaseResource @ 148de7fc0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticBlendState<8,1,1,8,1,1,6,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
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

// ~FStaticStateResource @ 148df16e0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TStaticStateRHI<TStaticBlendState<8,1,1,8,1,1,6,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::FStaticStateResource::~FStaticStateResource(FStaticStateResource *this)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__07_00_00_07_00_00_05_0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
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

