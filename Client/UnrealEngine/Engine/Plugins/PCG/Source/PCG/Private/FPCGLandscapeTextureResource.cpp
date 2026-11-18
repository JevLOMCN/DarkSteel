// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// ~FPCGLandscapeTextureResource @ 14973d6c0

void __thiscall
FPCGLandscapeTextureResource::~FPCGLandscapeTextureResource(FPCGLandscapeTextureResource *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->HeightValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FTextureReadBuffer2D::~FTextureReadBuffer2D(&this->HeightTexture);
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// EditHeightValues @ 14974fd60

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
FPCGLandscapeTextureResource::EditHeightValues(FPCGLandscapeTextureResource *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar6;
  ulonglong uVar7;
  undefined4 local_18 [4];
  
  uVar7 = (ulonglong)(uint)param_1;
  pTVar6 = &this->HeightValues;
  local_18[0] = 0;
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar7);
  }
  piVar1 = &(this->HeightValues).ArrayMax;
  if ((this->HeightValues).ArrayMax < param_1) {
    (this->HeightValues).ArrayNum = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_1,&pTVar6->AllocatorInstance,0,piVar1);
  }
  (this->HeightValues).ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_1,&pTVar6->AllocatorInstance,0,piVar1);
  }
  if (0 < param_1) {
    do {
      pFVar2 = (pTVar6->AllocatorInstance).Data;
      if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 4)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar6;
        }
      }
      iVar5 = (this->HeightValues).ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar6->AllocatorInstance,piVar1);
      }
      (this->HeightValues).ArrayNum = iVar5 + 1;
      *(undefined4 *)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_18[0];
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return pTVar6;
}

// InitRHI @ 149768b10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPCGLandscapeTextureResource::InitRHI
          (FPCGLandscapeTextureResource *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FResourceBulkDataInterface local_28;
  FScriptContainerElement *local_20;
  int local_18;
  
  iVar2 = (this->HeightValues).ArrayNum;
  if (iVar2 != 0) {
    pFVar3 = (this->HeightValues).AllocatorInstance.Data;
    if (iVar2 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_18 = iVar2 * 4;
    local_28 = (FResourceBulkDataInterface)&___7FResourceBulkDataArrayView__6B_;
    local_20 = pFVar3;
    FTextureReadBuffer2D::Initialize
              (&this->HeightTexture,param_1,L"FLandscapeTextureResource_HeightTexture",4,
               (this->CellCount).field0_0x0._s_0.X,(this->CellCount).field0_0x0._s_0.Y,PF_R32_FLOAT,
               ShaderResource,&local_28);
  }
  piVar1 = &(this->HeightValues).ArrayMax;
  (this->HeightValues).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->HeightValues).AllocatorInstance,0,piVar1);
  }
  return;
}

// ReleaseRHI @ 1497742b0

void __thiscall FPCGLandscapeTextureResource::ReleaseRHI(FPCGLandscapeTextureResource *this)

{
  FRHITexture *this_00;
  FRHIShaderResourceView *this_01;
  
  (this->HeightTexture).NumBytes = 0;
  this_00 = (this->HeightTexture).Buffer.Reference;
  if (this_00 != (FRHITexture *)0x0) {
    (this->HeightTexture).Buffer.Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->HeightTexture).SRV.Reference;
  if (this_01 != (FRHIShaderResourceView *)0x0) {
    (this->HeightTexture).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_01);
    return;
  }
  return;
}

