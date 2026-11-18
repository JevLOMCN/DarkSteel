// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 1

// InitRHI @ 14ca216e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FGeomCacheColorBuffer::InitRHI(FGeomCacheColorBuffer *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  FRHIResource *pFVar2;
  bool bVar3;
  TRefCountPtr<FRHIShaderResourceView> TVar4;
  FRHIResource *local_res8;
  FRHIBufferCreateDesc local_a8;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined8 uStack_50;
  wchar_t *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_a8._padding_._0_4_ = *(uint *)&this->field_0x28;
  local_a8.OwnerName.Number = 0;
  uStack_70 = 0;
  local_a8._padding_._4_4_ = 0;
  local_a8.DebugName._4_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_a8.DebugName._0_4_ = 0x4101;
  local_58 = (ulonglong)(uint)local_a8._padding_;
  uStack_50 = CONCAT44(local_a8.DebugName._4_4_,0x4101);
  local_a8.InitialState = None;
  local_a8.InitAction = Default;
  local_a8.InitialData = (FResourceArrayUploadInterface *)0x1528e15d8;
  local_a8.ClassName.Number = 0;
  local_a8.OwnerName.ComparisonIndex.Value = 0;
  local_a8.ClassName.ComparisonIndex.Value = 0x78;
  local_38 = 0x78;
  uStack_30 = 0;
  uStack_6c = 0;
  local_48 = L"FGeomCacheVertexBuffer";
  uStack_40 = 0;
  local_28 = 0;
  FRHICommandListBase::CreateBuffer(param_1,&local_a8);
  puVar1 = &this->field_0x20;
  if ((FRHIBufferCreateDesc *)puVar1 != &local_a8) {
    pFVar2 = *(FRHIResource **)puVar1;
    *(longlong *)puVar1 = local_a8._padding_;
    local_a8._padding_ = 0;
    if (pFVar2 == (FRHIResource *)0x0) goto LAB_14ca217ad;
    FRHIResource::Release(pFVar2);
  }
  if ((FRHIResource *)local_a8._padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_a8._padding_);
  }
LAB_14ca217ad:
  if (*(longlong *)puVar1 != 0) {
    bVar3 = RHISupportsManualVertexFetch((FStaticShaderPlatform)GMaxRHIShaderPlatform);
    if (bVar3) {
      uStack_60 = 0;
      local_68 = 0x10200;
      TVar4 = FRHICommandListBase::CreateShaderResourceView
                        (param_1,(FRHIBuffer *)&local_res8,*(FInitializer **)puVar1);
      puVar1 = &this->field_0x30;
      if ((FRHIShaderResourceView *)puVar1 != TVar4.Reference) {
        pFVar2 = *(FRHIResource **)puVar1;
        *(undefined8 *)puVar1 = *(undefined8 *)TVar4.Reference;
        *(undefined8 *)TVar4.Reference = 0;
        if (pFVar2 != (FRHIResource *)0x0) {
          FRHIResource::Release(pFVar2);
        }
      }
      if (local_res8 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res8);
      }
    }
  }
  return;
}

