// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 4

// ~FWN_ISKM_Buffers @ 14a83fbe0

void __thiscall FWN_ISKM_Buffers::~FWN_ISKM_Buffers(FWN_ISKM_Buffers *this)

{
  int *piVar1;
  int iVar2;
  FRHIShaderResourceView *pFVar3;
  FRHIBuffer *pFVar4;
  longlong *plVar5;
  
  pFVar3 = (this->CustomDataFloatsSRV).Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar4 = (this->CustomDataFloatsVB).Reference;
  if (pFVar4 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar3 = (this->AnimBlendingWeightsSRV).Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar4 = (this->AnimBlendingWeightsVB).Reference;
  if (pFVar4 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar3 = (this->GlobalFrameIndicesSRV_B).Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar4 = (this->GlobalFrameIndicesVB_B).Reference;
  if (pFVar4 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar3 = (this->GlobalFrameIndicesSRV_A).Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar4 = (this->GlobalFrameIndicesVB_A).Reference;
  if (pFVar4 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014a83fc7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 8))(plVar5,1);
      return;
    }
  }
  return;
}

// Create @ 14a844ab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TSharedPtr<FWN_ISKM_Buffers,1> * __cdecl
FWN_ISKM_Buffers::Create
          (TSharedPtr<FWN_ISKM_Buffers,1> *__return_storage_ptr__,FRHICommandListBase *param_1,
          uint param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FRHIBuffer *pFVar4;
  FRHIShaderResourceView *pFVar5;
  code *pcVar6;
  uint uVar7;
  undefined8 this;
  FRHICommandListBase *this_00;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  ERHIAccess EVar11;
  TReferenceControllerBase<1> *pTVar12;
  TSharedPtr<FWN_ISKM_Buffers,1> *pTVar13;
  TRefCountPtr<FRHIBuffer> TVar14;
  TRefCountPtr<FRHIShaderResourceView> TVar15;
  TRefCountPtr<FRHIBuffer> *pTVar16;
  TRefCountPtr<FRHIShaderResourceView> *pTVar17;
  TReferenceControllerBase<1> *pTVar18;
  FWN_ISKM_Buffers *pFVar19;
  FRHIResource *local_res8;
  FRHICommandListBase *local_res10;
  uint local_res18;
  uint local_res20;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  FRHIBuffer local_178;
  undefined8 local_90;
  ulonglong local_88;
  undefined8 uStack_80;
  wchar_t *local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  pTVar12 = ::operator_new(0x90);
  pTVar18 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
    pFVar19 = (FWN_ISKM_Buffers *)&DAT_00000010;
  }
  else {
    pTVar12->SharedReferenceCount = (atomic<int>)0x1;
    pFVar19 = (FWN_ISKM_Buffers *)(pTVar12 + 1);
    pTVar12->WeakReferenceCount = (atomic<int>)0x1;
    pTVar12->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFWN_ISKM_Buffers___00_SharedPointerInternals__6B_;
    pTVar12[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar12[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar12[1]._padding_ = 0;
    pTVar12[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar12[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar12[2]._padding_ = 0;
    pTVar12[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar12[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar12[3]._padding_ = 0;
    pTVar12[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar12[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar12[4]._padding_ = 0;
    pTVar12[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar12[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar12[5]._padding_ = 0;
    pTVar12[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar12[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar12[6]._padding_ = 0;
    pTVar12[7]._padding_ = 0;
    pTVar12[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar12[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar12[8]._padding_ = 0;
    pTVar12[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar12[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar18 = pTVar12;
    if (pFVar19 == (FWN_ISKM_Buffers *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        pTVar13 = (TSharedPtr<FWN_ISKM_Buffers,1> *)(*pcVar6)();
        return pTVar13;
      }
      goto LAB_14a844bfe;
    }
  }
  if (((pFVar19->_padding_ == 0) || (pFVar19->_padding_ == 0)) ||
     (*(int *)(pFVar19->_padding_ + 8) < 1)) {
    if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar19->_padding_ = (longlong)pFVar19;
    if (pTVar18 != (TReferenceControllerBase<1> *)pFVar19->_padding_) {
      if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar18->WeakReferenceCount = (atomic<int>)((int)pTVar18->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar19->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      pFVar19->_padding_ = (longlong)pTVar18;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  }
LAB_14a844bfe:
  __return_storage_ptr__->Object = pFVar19;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar18;
  if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  if ((__return_storage_ptr__->Object == (FWN_ISKM_Buffers *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TSharedPtr<FWN_ISKM_Buffers,1> *)(*pcVar6)();
    return pTVar13;
  }
  uVar8 = local_res18;
  __return_storage_ptr__->Object->NumInstances = local_res18;
  if ((__return_storage_ptr__->Object == (FWN_ISKM_Buffers *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TSharedPtr<FWN_ISKM_Buffers,1> *)(*pcVar6)();
    return pTVar13;
  }
  uVar9 = local_res20;
  __return_storage_ptr__->Object->NumCustomDataFloats = local_res20;
  uVar7 = GFrameNumberRenderThread;
  if ((__return_storage_ptr__->Object == (FWN_ISKM_Buffers *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TSharedPtr<FWN_ISKM_Buffers,1> *)(*pcVar6)();
    return pTVar13;
  }
  __return_storage_ptr__->Object->CreationFrameNumber = uVar7;
  EVar11 = RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Dynamic,false);
  this_00 = local_res10;
  local_178._padding_ = (longlong)(uVar8 * 4);
  local_178._padding_ = CONCAT44((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1,0x4102);
  local_178._padding_ = (longlong)EVar11;
  local_178._padding_ = 0;
  local_178._padding_ = 0x152242650;
  local_178._padding_ = 0;
  local_178._padding_ = 0;
  TVar14 = FRHICommandListBase::CreateBuffer(local_res10,(FRHIBufferCreateDesc *)&local_res8);
  if ((__return_storage_ptr__->Object == (FWN_ISKM_Buffers *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TSharedPtr<FWN_ISKM_Buffers,1> *)(*pcVar6)();
    return pTVar13;
  }
  pTVar16 = &__return_storage_ptr__->Object->GlobalFrameIndicesVB_A;
  if ((FRHIBuffer *)pTVar16 != TVar14.Reference) {
    pFVar4 = pTVar16->Reference;
    pTVar16->Reference = (FRHIBuffer *)(TVar14.Reference)->_padding_;
    (TVar14.Reference)->_padding_ = 0;
    if (pFVar4 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  if ((GPixelFormats[0x1c].BlockBytes != 4) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("sizeof(uint32) == GPixelFormats[PF_R32_UINT].BlockBytes",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_RenderResources.cpp"
                          ,0x150,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TSharedPtr<FWN_ISKM_Buffers,1> *)(*pcVar6)();
    return pTVar13;
  }
  local_178._padding_ = 0;
  local_178._padding_ = 0x11c00;
  if ((__return_storage_ptr__->Object == (FWN_ISKM_Buffers *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TSharedPtr<FWN_ISKM_Buffers,1> *)(*pcVar6)();
    return pTVar13;
  }
  TVar15 = FRHICommandListBase::CreateShaderResourceView
                     (this_00,(FRHIBuffer *)local_1a8,
                      (FInitializer *)
                      (__return_storage_ptr__->Object->GlobalFrameIndicesVB_A).Reference);
  if ((__return_storage_ptr__->Object == (FWN_ISKM_Buffers *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TSharedPtr<FWN_ISKM_Buffers,1> *)(*pcVar6)();
    return pTVar13;
  }
  pTVar17 = &__return_storage_ptr__->Object->GlobalFrameIndicesSRV_A;
  if ((FRHIShaderResourceView *)pTVar17 != TVar15.Reference) {
    pFVar5 = pTVar17->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar17->Reference = *TVar15.Reference;
    *(undefined8 *)TVar15.Reference = 0;
    if (pFVar5 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar5);
    }
  }
  if ((FRHIResource *)local_1a8._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1a8._0_8_);
  }
  EVar11 = RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Dynamic,false);
  local_178._padding_ = (longlong)(uVar8 * 4);
  local_178._padding_ = CONCAT44((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1,0x4102);
  local_178._padding_ = (longlong)EVar11;
  local_178._padding_ = 0;
  local_178._padding_ = 0x1522426d0;
  local_178._padding_ = 0;
  local_178._padding_ = 0;
  TVar14 = FRHICommandListBase::CreateBuffer(this_00,(FRHIBufferCreateDesc *)(local_1a8 + 8));
  if ((__return_storage_ptr__->Object == (FWN_ISKM_Buffers *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TSharedPtr<FWN_ISKM_Buffers,1> *)(*pcVar6)();
    return pTVar13;
  }
  pTVar16 = &__return_storage_ptr__->Object->GlobalFrameIndicesVB_B;
  if ((FRHIBuffer *)pTVar16 != TVar14.Reference) {
    pFVar4 = pTVar16->Reference;
    pTVar16->Reference = (FRHIBuffer *)(TVar14.Reference)->_padding_;
    (TVar14.Reference)->_padding_ = 0;
    if (pFVar4 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
  }
  if ((FRHIResource *)local_1a8._8_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1a8._8_8_);
  }
  if ((GPixelFormats[0x1c].BlockBytes != 4) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("sizeof(uint32) == GPixelFormats[PF_R32_UINT].BlockBytes",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_RenderResources.cpp"
                          ,0x15d,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TSharedPtr<FWN_ISKM_Buffers,1> *)(*pcVar6)();
    return pTVar13;
  }
  local_178._padding_ = 0;
  local_178._padding_ = 0x11c00;
  if ((__return_storage_ptr__->Object == (FWN_ISKM_Buffers *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TSharedPtr<FWN_ISKM_Buffers,1> *)(*pcVar6)();
    return pTVar13;
  }
  TVar15 = FRHICommandListBase::CreateShaderResourceView
                     (this_00,(FRHIBuffer *)local_198,
                      (FInitializer *)
                      (__return_storage_ptr__->Object->GlobalFrameIndicesVB_B).Reference);
  if ((__return_storage_ptr__->Object == (FWN_ISKM_Buffers *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TSharedPtr<FWN_ISKM_Buffers,1> *)(*pcVar6)();
    return pTVar13;
  }
  pTVar17 = &__return_storage_ptr__->Object->GlobalFrameIndicesSRV_B;
  if ((FRHIShaderResourceView *)pTVar17 != TVar15.Reference) {
    pFVar5 = pTVar17->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar17->Reference = *TVar15.Reference;
    *(undefined8 *)TVar15.Reference = 0;
    if (pFVar5 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar5);
    }
  }
  if ((FRHIResource *)local_198._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_198._0_8_);
  }
  EVar11 = RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Dynamic,false);
  local_178._padding_ = (longlong)(uVar8 * 4);
  local_178._padding_ =
       CONCAT44((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1,
                VertexBuffer|ShaderResource|Dynamic);
  local_178.Desc._0_8_ = ZEXT48(EVar11);
  local_178.Desc.Usage = None;
  local_178.Desc.GPUMask.GPUMask = 0;
  local_178._padding_ = 0x152242720;
  local_178._padding_ = 0;
  local_90 = 0;
  TVar14 = FRHICommandListBase::CreateBuffer(this_00,(FRHIBufferCreateDesc *)(local_198 + 8));
  if ((__return_storage_ptr__->Object == (FWN_ISKM_Buffers *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TSharedPtr<FWN_ISKM_Buffers,1> *)(*pcVar6)();
    return pTVar13;
  }
  pTVar16 = &__return_storage_ptr__->Object->AnimBlendingWeightsVB;
  if ((FRHIBuffer *)pTVar16 != TVar14.Reference) {
    pFVar4 = pTVar16->Reference;
    pTVar16->Reference = (FRHIBuffer *)(TVar14.Reference)->_padding_;
    (TVar14.Reference)->_padding_ = 0;
    if (pFVar4 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
  }
  if ((FRHIResource *)local_198._8_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_198._8_8_);
  }
  if ((GPixelFormats[0x1c].BlockBytes != 4) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("sizeof(uint32) == GPixelFormats[PF_R32_UINT].BlockBytes",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_RenderResources.cpp"
                          ,0x16a,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TSharedPtr<FWN_ISKM_Buffers,1> *)(*pcVar6)();
    return pTVar13;
  }
  local_178._padding_ = 0;
  local_178._padding_ = 0x11c00;
  if ((__return_storage_ptr__->Object == (FWN_ISKM_Buffers *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TSharedPtr<FWN_ISKM_Buffers,1> *)(*pcVar6)();
    return pTVar13;
  }
  TVar15 = FRHICommandListBase::CreateShaderResourceView
                     (this_00,(FRHIBuffer *)local_188,
                      (FInitializer *)
                      (__return_storage_ptr__->Object->AnimBlendingWeightsVB).Reference);
  if ((__return_storage_ptr__->Object == (FWN_ISKM_Buffers *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TSharedPtr<FWN_ISKM_Buffers,1> *)(*pcVar6)();
    return pTVar13;
  }
  pTVar17 = &__return_storage_ptr__->Object->AnimBlendingWeightsSRV;
  if ((FRHIShaderResourceView *)pTVar17 != TVar15.Reference) {
    pFVar5 = pTVar17->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar17->Reference = *TVar15.Reference;
    *(undefined8 *)TVar15.Reference = 0;
    if (pFVar5 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar5);
    }
  }
  if ((FRHIResource *)local_188._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_188._0_8_);
  }
  if (uVar9 == 0) {
    if ((__return_storage_ptr__->Object == (FWN_ISKM_Buffers *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TSharedPtr<FWN_ISKM_Buffers,1> *)(*pcVar6)();
      return pTVar13;
    }
    this = SWN_DummyFloatBuffer._40_8_;
    local_178._padding_ = (longlong)(__return_storage_ptr__->Object->CustomDataFloatsSRV).Reference;
    if (local_178._padding_ == SWN_DummyFloatBuffer._40_8_) {
      return __return_storage_ptr__;
    }
    (__return_storage_ptr__->Object->CustomDataFloatsSRV).Reference =
         (FRHIShaderResourceView *)SWN_DummyFloatBuffer._40_8_;
    if (this != 0) {
      FRHIResource::AddRef((FRHIResource *)this);
    }
  }
  else {
    EVar11 = RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Dynamic,false);
    local_88 = (ulonglong)(uVar8 * uVar9 * 4);
    uStack_80 = CONCAT44((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1,0x4102);
    local_78 = L"ISKM_Instance_CustomDataFloats";
    uStack_70 = 0;
    local_58 = 0;
    local_68 = (ulonglong)EVar11;
    uStack_60 = 0;
    TVar14 = FRHICommandListBase::CreateBuffer(this_00,(FRHIBufferCreateDesc *)(local_188 + 8));
    if ((__return_storage_ptr__->Object == (FWN_ISKM_Buffers *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TSharedPtr<FWN_ISKM_Buffers,1> *)(*pcVar6)();
      return pTVar13;
    }
    pTVar16 = &__return_storage_ptr__->Object->CustomDataFloatsVB;
    if ((FRHIBuffer *)pTVar16 != TVar14.Reference) {
      pFVar4 = pTVar16->Reference;
      pTVar16->Reference = (FRHIBuffer *)(TVar14.Reference)->_padding_;
      (TVar14.Reference)->_padding_ = 0;
      if (pFVar4 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar4);
      }
    }
    if ((FRHIResource *)local_188._8_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_188._8_8_);
    }
    if ((GPixelFormats[0xd].BlockBytes != 4) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("sizeof(float) == GPixelFormats[PF_R32_FLOAT].BlockBytes",
                            "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_RenderResources.cpp"
                            ,0x177,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TSharedPtr<FWN_ISKM_Buffers,1> *)(*pcVar6)();
      return pTVar13;
    }
    local_178._padding_ = 0;
    local_178._padding_ = 0x10d00;
    if ((__return_storage_ptr__->Object == (FWN_ISKM_Buffers *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TSharedPtr<FWN_ISKM_Buffers,1> *)(*pcVar6)();
      return pTVar13;
    }
    TVar15 = FRHICommandListBase::CreateShaderResourceView
                       (this_00,&local_178,
                        (FInitializer *)
                        (__return_storage_ptr__->Object->CustomDataFloatsVB).Reference);
    if ((__return_storage_ptr__->Object == (FWN_ISKM_Buffers *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TSharedPtr<FWN_ISKM_Buffers,1> *)(*pcVar6)();
      return pTVar13;
    }
    pTVar17 = &__return_storage_ptr__->Object->CustomDataFloatsSRV;
    if ((FRHIShaderResourceView *)pTVar17 != TVar15.Reference) {
      pFVar5 = pTVar17->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar17->Reference = *TVar15.Reference;
      *(undefined8 *)TVar15.Reference = 0;
      if (pFVar5 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar5);
      }
    }
  }
  if ((FRHIShaderResourceView *)local_178._padding_ != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_178._padding_);
  }
  return __return_storage_ptr__;
}

// Lock @ 14a850340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FWN_ISKM_Buffers::Lock(FWN_ISKM_Buffers *this)

{
  FRHIBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint *puVar4;
  float *pfVar5;
  
  if (((this->MappedGlobalFrameIndices_A != (uint *)0x0) ||
      (this->MappedGlobalFrameIndices_B != (uint *)0x0)) ||
     (this->MappedAnimBlendingWeights != (uint *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(MappedGlobalFrameIndices_A == nullptr) && (MappedGlobalFrameIndices_B == nullptr) && (MappedAnimBlendingWeights == nullptr)"
                       ,
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_RenderResources.cpp"
                       ,0x123,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar4 = FRHICommandListBase::LockBuffer
                     ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                      (this->GlobalFrameIndicesVB_A).Reference,0,this->NumInstances << 2,
                      RLM_WriteOnly);
  pFVar1 = (this->GlobalFrameIndicesVB_B).Reference;
  this->MappedGlobalFrameIndices_A = puVar4;
  puVar4 = FRHICommandListBase::LockBuffer
                     ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,pFVar1,0,
                      this->NumInstances << 2,RLM_WriteOnly);
  pFVar1 = (this->AnimBlendingWeightsVB).Reference;
  this->MappedGlobalFrameIndices_B = puVar4;
  puVar4 = FRHICommandListBase::LockBuffer
                     ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,pFVar1,0,
                      this->NumInstances << 2,RLM_WriteOnly);
  this->MappedAnimBlendingWeights = puVar4;
  if (this->NumCustomDataFloats != 0) {
    pfVar5 = FRHICommandListBase::LockBuffer
                       ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                        (this->CustomDataFloatsVB).Reference,0,
                        this->NumCustomDataFloats * this->NumInstances * 4,RLM_WriteOnly);
    this->MappedCustomDataFloats = pfVar5;
  }
  return;
}

// Unlock @ 14a856d00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FWN_ISKM_Buffers::Unlock(FWN_ISKM_Buffers *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->MappedGlobalFrameIndices_A == (uint *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLocked()",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_RenderResources.cpp"
                       ,0x131,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRHICommandListBase::UnlockBuffer
            ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
             (this->GlobalFrameIndicesVB_A).Reference);
  FRHICommandListBase::UnlockBuffer
            ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
             (this->GlobalFrameIndicesVB_B).Reference);
  FRHICommandListBase::UnlockBuffer
            ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
             (this->AnimBlendingWeightsVB).Reference);
  if (this->NumCustomDataFloats != 0) {
    FRHICommandListBase::UnlockBuffer
              ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
               (this->CustomDataFloatsVB).Reference);
  }
  this->MappedGlobalFrameIndices_A = (uint *)0x0;
  this->MappedGlobalFrameIndices_B = (uint *)0x0;
  this->MappedAnimBlendingWeights = (uint *)0x0;
  this->MappedCustomDataFloats = (float *)0x0;
  return;
}

