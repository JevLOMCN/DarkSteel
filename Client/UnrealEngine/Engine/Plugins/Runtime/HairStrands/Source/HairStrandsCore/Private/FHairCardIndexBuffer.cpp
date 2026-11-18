// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 2

// FHairCardIndexBuffer @ 14e03bed0

FHairCardIndexBuffer * __thiscall
FHairCardIndexBuffer::FHairCardIndexBuffer
          (FHairCardIndexBuffer *this,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1,
          FName *param_2)

{
  FIndexBuffer::FIndexBuffer((FIndexBuffer *)this);
  this->Indices = param_1;
  this->_padding_ = (longlong)&___7FHairCardIndexBuffer__6B_;
  this->_padding_ = (longlong)*param_2;
  return this;
}

// InitRHI @ 14e054900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FHairCardIndexBuffer::InitRHI(FHairCardIndexBuffer *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FRHIResource *this_00;
  code *pcVar4;
  bool bVar5;
  TRefCountPtr<FRHIBuffer> TVar6;
  FRHIResource *local_res8;
  undefined **local_70;
  FScriptContainerElement *local_68;
  int local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  wchar_t *local_48;
  undefined ***pppuStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  
  iVar2 = this->Indices->ArrayNum;
  pFVar3 = (this->Indices->AllocatorInstance).Data;
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
  local_70 = &___7FResourceArrayUploadArrayView__6B_;
  local_60 = iVar2 * 4;
  local_58 = CONCAT44(4,this->Indices->ArrayNum << 2);
  uStack_50 = CONCAT44((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1,0x8101);
  local_28 = this->_padding_;
  pppuStack_40 = &local_70;
  local_38 = 0x200000018;
  local_48 = L"FHairCardIndexBuffer";
  uStack_30 = 0;
  local_68 = pFVar3;
  TVar6 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
  plVar1 = &this->_padding_;
  if ((FRHIBuffer *)plVar1 != TVar6.Reference) {
    this_00 = (FRHIResource *)*plVar1;
    *plVar1 = (TVar6.Reference)->_padding_;
    (TVar6.Reference)->_padding_ = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return;
}

