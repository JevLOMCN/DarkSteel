// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// InitRHI @ 144f46be0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
Nanite::FTessellationTableResources::InitRHI
          (FTessellationTableResources *this,FRHICommandListBase *param_1)

{
  FByteAddressBuffer *pFVar1;
  FRHIBuffer *pFVar2;
  FRHIShaderResourceView *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  TRefCountPtr<FRHIBuffer> TVar7;
  TRefCountPtr<FRHIShaderResourceView> TVar8;
  TRefCountPtr<FRHIShaderResourceView> *pTVar9;
  FRHIResource *local_res18;
  FRHIResource *local_res20;
  undefined1 local_148 [16];
  undefined **local_138;
  FResourceArrayUploadInterface *local_130;
  ERHIAccess local_128;
  FName local_120;
  FName FStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined **local_100;
  FScriptContainerElement *local_f8;
  uint local_f0;
  FTessellationTable local_e8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  wchar_t *local_98;
  undefined ***pppuStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  wchar_t *local_60;
  undefined ***pppuStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  bVar6 = DoesPlatformSupportNanite(GMaxRHIShaderPlatform,true);
  if (bVar6) {
    FTessellationTable::FTessellationTable(&local_e8);
    local_130 = (FResourceArrayUploadInterface *)local_e8.OffsetTable.AllocatorInstance.Data;
    pFVar1 = &this->Offsets;
    if (local_e8.OffsetTable.ArrayNum < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_128 = local_e8.OffsetTable.ArrayNum * 8;
    (this->Offsets).NumBytes = local_128;
    local_a8 = CONCAT44(4,local_128);
    uStack_a0 = CONCAT44((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1,0x10110);
    pppuStack_90 = &local_138;
    local_88 = 0x200000070;
    local_98 = L"TessellationTable.Offsets";
    local_138 = &___7FResourceArrayUploadArrayView__6B_;
    local_78 = 0;
    uStack_80 = 0;
    TVar7 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res18);
    if ((FRHIBuffer *)pFVar1 != TVar7.Reference) {
      pFVar2 = (pFVar1->Buffer).Reference;
      (pFVar1->Buffer).Reference = (FRHIBuffer *)(TVar7.Reference)->_padding_;
      (TVar7.Reference)->_padding_ = 0;
      if (pFVar2 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar2);
      }
    }
    if (local_res18 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res18);
    }
    FStack_118.ComparisonIndex.Value = 0;
    FStack_118.Number = 0;
    local_120.ComparisonIndex.Value = 0x40000;
    local_120.Number = 0;
    TVar8 = FRHICommandListBase::CreateShaderResourceView
                      (param_1,(FRHIBuffer *)&local_res20,(FInitializer *)(pFVar1->Buffer).Reference
                      );
    pTVar9 = &(this->Offsets).SRV;
    if ((FRHIShaderResourceView *)pTVar9 != TVar8.Reference) {
      pFVar3 = pTVar9->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar9->Reference = *TVar8.Reference;
      *(undefined8 *)TVar8.Reference = 0;
      if (pFVar3 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar3);
      }
    }
    if (local_res20 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res20);
    }
    FVar5.Data = local_e8.VertsAndIndexes.AllocatorInstance.Data;
    local_138 = &___7FResourceArrayUploadInterface__6B_;
    pFVar1 = &this->VertsAndIndexes;
    if (local_e8.VertsAndIndexes.ArrayNum < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_f0 = local_e8.VertsAndIndexes.ArrayNum * 4;
    (this->VertsAndIndexes).NumBytes = local_f0;
    pppuStack_58 = &local_100;
    local_70 = CONCAT44(4,local_f0);
    uStack_68 = CONCAT44((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1,0x10110);
    local_60 = L"TessellationTable.VertsAndIndexes";
    local_50 = 0x200000070;
    uStack_48 = 0;
    local_100 = &___7FResourceArrayUploadArrayView__6B_;
    local_f8 = FVar5.Data;
    local_40 = 0;
    TVar7 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)local_148);
    if ((FRHIBuffer *)pFVar1 != TVar7.Reference) {
      pFVar2 = (pFVar1->Buffer).Reference;
      (pFVar1->Buffer).Reference = (FRHIBuffer *)(TVar7.Reference)->_padding_;
      (TVar7.Reference)->_padding_ = 0;
      if (pFVar2 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar2);
      }
    }
    if ((FRHIResource *)local_148._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_148._0_8_);
    }
    uStack_108 = 0;
    local_110 = 0x40000;
    TVar8 = FRHICommandListBase::CreateShaderResourceView
                      (param_1,(FRHIBuffer *)(local_148 + 8),
                       (FInitializer *)(pFVar1->Buffer).Reference);
    pTVar9 = &(this->VertsAndIndexes).SRV;
    if ((FRHIShaderResourceView *)pTVar9 != TVar8.Reference) {
      pFVar3 = pTVar9->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar9->Reference = *TVar8.Reference;
      *(undefined8 *)TVar8.Reference = 0;
      if (pFVar3 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar3);
      }
    }
    if ((FRHIResource *)local_148._8_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_148._8_8_);
    }
    if (local_e8.Indexes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Indexes.AllocatorInstance.Data);
    }
    if (local_e8.Verts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Verts.AllocatorInstance.Data);
    }
    if (local_e8.VertsAndIndexes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.VertsAndIndexes.AllocatorInstance.Data);
    }
    if (local_e8.OffsetTable.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.OffsetTable.AllocatorInstance.Data);
    }
  }
  return;
}

// ReleaseRHI @ 144f46f70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall Nanite::FTessellationTableResources::ReleaseRHI(FTessellationTableResources *this)

{
  FRHIBuffer *pFVar1;
  FRHIShaderResourceView *pFVar2;
  bool bVar3;
  
  bVar3 = DoesPlatformSupportNanite(GMaxRHIShaderPlatform,true);
  if (bVar3) {
    (this->Offsets).NumBytes = 0;
    pFVar1 = (this->Offsets).Buffer.Reference;
    if (pFVar1 != (FRHIBuffer *)0x0) {
      (this->Offsets).Buffer.Reference = (FRHIBuffer *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
    pFVar2 = (this->Offsets).SRV.Reference;
    if (pFVar2 != (FRHIShaderResourceView *)0x0) {
      (this->Offsets).SRV.Reference = (FRHIShaderResourceView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
    (this->VertsAndIndexes).NumBytes = 0;
    pFVar1 = (this->VertsAndIndexes).Buffer.Reference;
    if (pFVar1 != (FRHIBuffer *)0x0) {
      (this->VertsAndIndexes).Buffer.Reference = (FRHIBuffer *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
    pFVar2 = (this->VertsAndIndexes).SRV.Reference;
    if (pFVar2 != (FRHIShaderResourceView *)0x0) {
      (this->VertsAndIndexes).SRV.Reference = (FRHIShaderResourceView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  return;
}

