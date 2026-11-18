// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FDynamicMeshIndexBuffer32 @ 147b391e0

FDynamicMeshIndexBuffer32 * __thiscall
FDynamicMeshIndexBuffer32::FDynamicMeshIndexBuffer32(FDynamicMeshIndexBuffer32 *this)

{
  FIndexBuffer::FIndexBuffer((FIndexBuffer *)this);
  this->UsageFlags = Static;
  this->_padding_ = (longlong)&___7FDynamicMeshIndexBuffer32__6B_;
  (this->Indices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Indices).ArrayNum = 0;
  (this->Indices).ArrayMax = 0;
  return this;
}

// ~FDynamicMeshIndexBuffer32 @ 147b3ccb0

void __thiscall
FDynamicMeshIndexBuffer32::~FDynamicMeshIndexBuffer32(FDynamicMeshIndexBuffer32 *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FDynamicMeshIndexBuffer32__6B_;
  pFVar1 = (this->Indices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  return;
}

// InitRHI @ 147b761f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicMeshIndexBuffer32::InitRHI(FDynamicMeshIndexBuffer32 *this,FRHICommandListBase *param_1)

{
  int iVar1;
  EBufferUsageFlags EVar2;
  FScriptContainerElement *pFVar3;
  FRHIResource *this_00;
  code *pcVar4;
  bool bVar5;
  EBufferUsageFlags EVar6;
  longlong *plVar7;
  undefined1 local_a8 [40];
  FNameEntryId local_80;
  uint uStack_7c;
  FName FStack_78;
  undefined8 local_70;
  undefined **local_68;
  FScriptContainerElement *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong uStack_48;
  wchar_t *local_40;
  undefined ***pppuStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  iVar1 = (this->Indices).ArrayNum;
  pFVar3 = (this->Indices).AllocatorInstance.Data;
  if ((iVar1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EVar2 = this->UsageFlags;
  EVar6 = EVar2 | IndexBuffer;
  local_80.Value = RHIGetDefaultResourceState(EVar6,false);
  local_68 = &___7FResourceArrayUploadArrayView__6B_;
  local_a8._32_8_ = &local_68;
  local_a8._8_4_ = iVar1 * 4;
  local_a8._20_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_a8._24_8_ = L"FDynamicMeshIndexBuffer32";
  local_a8._12_4_ = 4;
  local_50 = CONCAT44(4,local_a8._8_4_);
  uStack_48 = CONCAT44(local_a8._20_4_,EVar2) | 0x8000;
  FStack_78.ComparisonIndex.Value = 0;
  FStack_78.Number = 0;
  local_40 = L"FDynamicMeshIndexBuffer32";
  uStack_7c = 2;
  local_70 = 0;
  local_30 = CONCAT44(2,local_80.Value);
  uStack_28 = 0;
  local_20 = 0;
  local_a8._16_4_ = EVar6;
  local_60 = pFVar3;
  local_58 = local_a8._8_4_;
  pppuStack_38 = (undefined ***)local_a8._32_8_;
  FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)local_a8);
  plVar7 = &this->_padding_;
  if (plVar7 != (longlong *)local_a8) {
    this_00 = (FRHIResource *)*plVar7;
    *plVar7 = local_a8._0_8_;
    local_a8._0_8_ = (FRHIResource *)0x0;
    if (this_00 == (FRHIResource *)0x0) {
      return;
    }
    FRHIResource::Release(this_00);
  }
  if ((FRHIResource *)local_a8._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_a8._0_8_);
  }
  return;
}

