// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 6

// FHairCardsRestResource @ 14e03c090

FHairCardsRestResource * __thiscall
FHairCardsRestResource::FHairCardsRestResource
          (FHairCardsRestResource *this,FHairCardsBulkData *param_1,FHairResourceName *param_2,
          FName *param_3)

{
  FHairCardsVertexBuffer *pFVar1;
  
  FRenderResource::FRenderResource((FRenderResource *)this);
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = (longlong)&___7FHairCommonResource__6B_;
  *(FName *)((longlong)&this->_padding_ + 4) = *param_3;
  this->_padding_ = (longlong)&___7FHairCardsRestResource__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  *(undefined4 *)&this->_padding_ = 0x3fffff;
  *(undefined8 *)&this->RestPositionBuffer = 0;
  *(undefined8 *)&(this->RestPositionBuffer).field_0x8 = 0;
  *(undefined8 *)&(this->RestPositionBuffer).field_0x10 = 0;
  *(undefined8 *)&(this->RestPositionBuffer).field_0x18 = 0;
  *(undefined8 *)&(this->RestPositionBuffer).field_0x20 = 0;
  *(undefined8 *)&(this->RestPositionBuffer).field_0x28 = 0;
  *(undefined8 *)&(this->RestPositionBuffer).field_0x30 = 0;
  FVertexBufferWithSRV::FVertexBufferWithSRV((FVertexBufferWithSRV *)&this->RestPositionBuffer);
  *(undefined ***)&this->RestPositionBuffer = &___7FHairCardsVertexBuffer__6B_;
  FIndexBuffer::FIndexBuffer((FIndexBuffer *)&this->RestIndexBuffer);
  pFVar1 = &this->NormalsBuffer;
  (this->RestIndexBuffer)._padding_ = (longlong)&___7FHairCardIndexBuffer__6B_;
  (this->RestIndexBuffer).Indices = &param_1->Indices;
  (this->RestIndexBuffer)._padding_ = (longlong)*param_3;
  this->bInvertUV = false;
  *(undefined8 *)&pFVar1->field_0x0 = 0;
  *(undefined8 *)&(this->NormalsBuffer).field_0x8 = 0;
  *(undefined8 *)&(this->NormalsBuffer).field_0x10 = 0;
  *(undefined8 *)&(this->NormalsBuffer).field_0x18 = 0;
  *(undefined8 *)&(this->NormalsBuffer).field_0x20 = 0;
  *(undefined8 *)&(this->NormalsBuffer).field_0x28 = 0;
  *(undefined8 *)&(this->NormalsBuffer).field_0x30 = 0;
  FVertexBufferWithSRV::FVertexBufferWithSRV((FVertexBufferWithSRV *)pFVar1);
  *(undefined ***)&pFVar1->field_0x0 = &___7FHairCardsVertexBuffer__6B_;
  pFVar1 = &this->UVsBuffer;
  *(undefined8 *)&pFVar1->field_0x0 = 0;
  *(undefined8 *)&(this->UVsBuffer).field_0x8 = 0;
  *(undefined8 *)&(this->UVsBuffer).field_0x10 = 0;
  *(undefined8 *)&(this->UVsBuffer).field_0x18 = 0;
  *(undefined8 *)&(this->UVsBuffer).field_0x20 = 0;
  *(undefined8 *)&(this->UVsBuffer).field_0x28 = 0;
  *(undefined8 *)&(this->UVsBuffer).field_0x30 = 0;
  FVertexBufferWithSRV::FVertexBufferWithSRV((FVertexBufferWithSRV *)pFVar1);
  *(undefined ***)&pFVar1->field_0x0 = &___7FHairCardsVertexBuffer__6B_;
  pFVar1 = &this->MaterialsBuffer;
  *(undefined8 *)&pFVar1->field_0x0 = 0;
  *(undefined8 *)&(this->MaterialsBuffer).field_0x8 = 0;
  *(undefined8 *)&(this->MaterialsBuffer).field_0x10 = 0;
  *(undefined8 *)&(this->MaterialsBuffer).field_0x18 = 0;
  *(undefined8 *)&(this->MaterialsBuffer).field_0x20 = 0;
  *(undefined8 *)&(this->MaterialsBuffer).field_0x28 = 0;
  *(undefined8 *)&(this->MaterialsBuffer).field_0x30 = 0;
  FVertexBufferWithSRV::FVertexBufferWithSRV((FVertexBufferWithSRV *)pFVar1);
  *(undefined ***)&pFVar1->field_0x0 = &___7FHairCardsVertexBuffer__6B_;
  pFVar1 = &this->VertexColorsBuffer;
  *(undefined8 *)&pFVar1->field_0x0 = 0;
  *(undefined8 *)&(this->VertexColorsBuffer).field_0x8 = 0;
  *(undefined8 *)&(this->VertexColorsBuffer).field_0x10 = 0;
  *(undefined8 *)&(this->VertexColorsBuffer).field_0x18 = 0;
  *(undefined8 *)&(this->VertexColorsBuffer).field_0x20 = 0;
  *(undefined8 *)&(this->VertexColorsBuffer).field_0x28 = 0;
  *(undefined8 *)&(this->VertexColorsBuffer).field_0x30 = 0;
  FVertexBufferWithSRV::FVertexBufferWithSRV((FVertexBufferWithSRV *)pFVar1);
  *(undefined ***)&pFVar1->field_0x0 = &___7FHairCardsVertexBuffer__6B_;
  (this->Samplers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Samplers).ArrayNum = 0;
  (this->Samplers).ArrayMax = 0;
  this->BulkData = param_1;
  (this->Textures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Textures).ArrayNum = 0;
  (this->Textures).ArrayMax = 0;
  this->LayoutIndex = 0;
  return this;
}

// GetFriendlyName @ 14e050190

FString * __thiscall
FHairCardsRestResource::GetFriendlyName
          (FHairCardsRestResource *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FHairCardsResource");
  return __return_storage_ptr__;
}

// InitResource @ 14e054bb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FHairCardsRestResource::InitResource(FHairCardsRestResource *this,FRHICommandListBase *param_1)

{
  FRenderResource::InitResource((FRenderResource *)this,param_1);
  (**(code **)((this->RestIndexBuffer)._padding_ + 0x18))(&this->RestIndexBuffer,param_1);
  (**(code **)(*(longlong *)&this->RestPositionBuffer + 0x18))(&this->RestPositionBuffer,param_1);
  (**(code **)(*(longlong *)&this->NormalsBuffer + 0x18))(&this->NormalsBuffer,param_1);
  (**(code **)(*(longlong *)&this->UVsBuffer + 0x18))(&this->UVsBuffer,param_1);
  (**(code **)(*(longlong *)&this->MaterialsBuffer + 0x18))(&this->MaterialsBuffer,param_1);
  if ((this->BulkData->Header).bVertexColor != false) {
    (**(code **)(*(longlong *)&this->VertexColorsBuffer + 0x18))(&this->VertexColorsBuffer,param_1);
  }
  return;
}

// InternalAllocate @ 14e055200

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FHairCardsRestResource::InternalAllocate(FHairCardsRestResource *this)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (FName *)((longlong)&this->_padding_ + 4);
  CreateBuffer<FHairCardsPositionFormat>
            ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,&this->BulkData->Positions
             ,&this->RestPositionBuffer,L"Hair.CardsRest_PositionBuffer",pFVar1,SRVMask);
  CreateBuffer<FHairCardsNormalFormat>
            ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,&this->BulkData->Normals,
             &this->NormalsBuffer,L"Hair.CardsRest_NormalBuffer",pFVar1,SRVMask);
  CreateBuffer<FHairCardsUVFormat>
            ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,&this->BulkData->UVs,
             &this->UVsBuffer,L"Hair.CardsRest_UVBuffer",pFVar1,SRVMask);
  CreateBuffer<FHairCardsMaterialFormat>
            ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,&this->BulkData->Materials
             ,&this->MaterialsBuffer,L"Hair.CardsRest_MaterialBuffer",pFVar1,SRVMask);
  if ((this->BulkData->Header).bVertexColor != false) {
    CreateBuffer<FHairCardsMaterialFormat>
              ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
               &this->BulkData->VertexColors,&this->VertexColorsBuffer,
               L"Hair.CardsRest_VertexColorBuffer",pFVar1,SRVMask);
  }
  return;
}

// InternalRelease @ 14e058390

void __thiscall FHairCardsRestResource::InternalRelease(FHairCardsRestResource *this)

{
  return;
}

// ReleaseResource @ 14e059a40

void __thiscall FHairCardsRestResource::ReleaseResource(FHairCardsRestResource *this)

{
  FRenderResource::ReleaseResource((FRenderResource *)this);
  (**(code **)((this->RestIndexBuffer)._padding_ + 0x20))();
  (**(code **)(*(longlong *)&this->RestPositionBuffer + 0x20))(&this->RestPositionBuffer);
  (**(code **)(*(longlong *)&this->NormalsBuffer + 0x20))();
  (**(code **)(*(longlong *)&this->UVsBuffer + 0x20))();
  (**(code **)(*(longlong *)&this->MaterialsBuffer + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x00014e059a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this->VertexColorsBuffer + 0x20))();
  return;
}

