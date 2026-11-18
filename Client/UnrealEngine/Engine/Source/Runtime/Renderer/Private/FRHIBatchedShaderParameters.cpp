// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// SetShaderParameter @ 14478e450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIBatchedShaderParameters::SetShaderParameter
          (FRHIBatchedShaderParameters *this,uint param_1,uint param_2,uint param_3,void *param_4)

{
  int iVar1;
  int iVar2;
  FRHIBatchedShaderParametersAllocator *pFVar3;
  FRHIBatchedShaderParameters *pFVar4;
  code *pcVar5;
  bool bVar6;
  uchar *_Dst;
  uchar *_Dst_00;
  FMemStackBase *this_00;
  int iVar7;
  ulonglong _Size;
  ushort local_res8 [4];
  ushort local_res10 [4];
  ushort local_res18 [4];
  ushort local_res20 [4];
  undefined4 uStack_54;
  
  iVar1 = (this->ParametersData).ArrayNum;
  pFVar3 = this->Allocator;
  _Size = (ulonglong)param_3;
  pFVar4 = pFVar3->AttachedParameters;
  if (pFVar4 != this) {
    if ((pFVar4 != (FRHIBatchedShaderParameters *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!AttachedParameters",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                           ,0x82,
                           L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3->AttachedParameters = this;
  }
  iVar2 = (this->ParametersData).ArrayNum;
  pFVar3 = this->Allocator;
  _Dst_00 = (this->ParametersData).DataPtr;
  this_00 = &pFVar3->ParametersData;
  iVar7 = iVar2 + param_3;
  if (iVar2 == 0) {
    _Dst = FMemStackBase::Alloc(this_00,_Size,1);
    _Dst_00 = _Dst;
  }
  else {
    if ((this_00->Top != _Dst_00 + iVar2) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParametersData.GetTop() == InOutArray.GetData() + InOutArray.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                           ,0xdb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((pFVar3->ParametersData).End < this_00->Top + _Size) {
      _Dst_00 = FMemStackBase::Alloc(this_00,(longlong)iVar7,1);
      memcpy(_Dst_00,(this->ParametersData).DataPtr,(longlong)(this->ParametersData).ArrayNum);
      _Dst = _Dst_00 + (this->ParametersData).ArrayNum;
    }
    else {
      _Dst = FMemStackBase::Alloc(this_00,_Size,1);
    }
  }
  memcpy(_Dst,param_4,_Size);
  if ((iVar7 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_res18[0] = (ushort)iVar1;
  local_res10[0] = (ushort)param_3;
  (this->ParametersData).DataPtr = _Dst_00;
  *(ulonglong *)&(this->ParametersData).ArrayNum = CONCAT44(uStack_54,iVar7);
  local_res20[0] = (ushort)param_2;
  local_res8[0] = (ushort)param_1;
  FRHIBatchedShaderParametersAllocator::
  Emplace<FRHIShaderParameter,unsigned_short,unsigned_short,unsigned_short,unsigned_short>
            (this->Allocator,&this->Allocator->Parameters,&this->Parameters,local_res8,local_res20,
             local_res18,local_res10);
  return;
}

// SetBindlessSampler @ 144f27c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIBatchedShaderParameters::SetBindlessSampler
          (FRHIBatchedShaderParameters *this,uint param_1,FRHISamplerState *param_2)

{
  FRHIBatchedShaderParametersAllocator *pFVar1;
  FRHIBatchedShaderParameters *pFVar2;
  code *pcVar3;
  bool bVar4;
  ushort local_res10 [4];
  FRHISamplerState *local_res18 [2];
  
  pFVar1 = this->Allocator;
  local_res10[0] = (ushort)param_1;
  pFVar2 = pFVar1->AttachedParameters;
  local_res18[0] = param_2;
  if (pFVar2 != this) {
    if (pFVar2 != (FRHIBatchedShaderParameters *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AttachedParameters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                         ,0x82,
                         L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1->AttachedParameters = this;
  }
  FRHIBatchedShaderParametersAllocator::
  Emplace<FRHIShaderParameterResource,FRHISamplerState_*_&,unsigned_short_&>
            (this->Allocator,&this->Allocator->BindlessParameters,&this->BindlessParameters,
             local_res18,local_res10);
  return;
}

// SetBindlessTexture @ 144f27cc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIBatchedShaderParameters::SetBindlessTexture
          (FRHIBatchedShaderParameters *this,uint param_1,FRHITexture *param_2)

{
  FRHIBatchedShaderParametersAllocator *pFVar1;
  FRHIBatchedShaderParameters *pFVar2;
  code *pcVar3;
  bool bVar4;
  ushort local_res10 [4];
  FRHITexture *local_res18 [2];
  
  pFVar1 = this->Allocator;
  local_res10[0] = (ushort)param_1;
  pFVar2 = pFVar1->AttachedParameters;
  local_res18[0] = param_2;
  if (pFVar2 != this) {
    if (pFVar2 != (FRHIBatchedShaderParameters *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AttachedParameters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                         ,0x82,
                         L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1->AttachedParameters = this;
  }
  FRHIBatchedShaderParametersAllocator::
  Emplace<FRHIShaderParameterResource,FRHITexture_*_&,unsigned_short_&>
            (this->Allocator,&this->Allocator->BindlessParameters,&this->BindlessParameters,
             local_res18,local_res10);
  return;
}

// SetShaderSampler @ 144f2a840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIBatchedShaderParameters::SetShaderSampler
          (FRHIBatchedShaderParameters *this,uint param_1,FRHISamplerState *param_2)

{
  FRHIBatchedShaderParametersAllocator *pFVar1;
  FRHIBatchedShaderParameters *pFVar2;
  code *pcVar3;
  bool bVar4;
  ushort local_res10 [4];
  FRHISamplerState *local_res18 [2];
  
  pFVar1 = this->Allocator;
  local_res10[0] = (ushort)param_1;
  pFVar2 = pFVar1->AttachedParameters;
  local_res18[0] = param_2;
  if (pFVar2 != this) {
    if (pFVar2 != (FRHIBatchedShaderParameters *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AttachedParameters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                         ,0x82,
                         L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1->AttachedParameters = this;
  }
  FRHIBatchedShaderParametersAllocator::
  Emplace<FRHIShaderParameterResource,FRHISamplerState_*_&,unsigned_short_&>
            (this->Allocator,&this->Allocator->ResourceParameters,&this->ResourceParameters,
             local_res18,local_res10);
  return;
}

// SetShaderTexture @ 144f2a8d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIBatchedShaderParameters::SetShaderTexture
          (FRHIBatchedShaderParameters *this,uint param_1,FRHITexture *param_2)

{
  FRHIBatchedShaderParametersAllocator *pFVar1;
  FRHIBatchedShaderParameters *pFVar2;
  code *pcVar3;
  bool bVar4;
  ushort local_res10 [4];
  FRHITexture *local_res18 [2];
  
  pFVar1 = this->Allocator;
  local_res10[0] = (ushort)param_1;
  pFVar2 = pFVar1->AttachedParameters;
  local_res18[0] = param_2;
  if (pFVar2 != this) {
    if (pFVar2 != (FRHIBatchedShaderParameters *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AttachedParameters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                         ,0x82,
                         L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1->AttachedParameters = this;
  }
  FRHIBatchedShaderParametersAllocator::
  Emplace<FRHIShaderParameterResource,FRHITexture_*_&,unsigned_short_&>
            (this->Allocator,&this->Allocator->ResourceParameters,&this->ResourceParameters,
             local_res18,local_res10);
  return;
}

