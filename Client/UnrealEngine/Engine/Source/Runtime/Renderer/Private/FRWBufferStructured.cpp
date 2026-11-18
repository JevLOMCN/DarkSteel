// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// Initialize @ 14577bbb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRWBufferStructured::Initialize
          (FRWBufferStructured *this,FRHICommandListBase *param_1,wchar_t *param_2,uint param_3,
          uint param_4,EBufferUsageFlags param_5,bool param_6,bool param_7,ERHIAccess param_8)

{
  TRefCountPtr<FRHIUnorderedAccessView> *pTVar1;
  EBufferUsageFlags EVar2;
  FRHIBuffer *pFVar3;
  FRHIUnorderedAccessView *this_00;
  FRHIShaderResourceView *this_01;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  TRefCountPtr<FRHIBuffer> TVar7;
  TRefCountPtr<FRHIUnorderedAccessView> TVar8;
  TRefCountPtr<FRHIShaderResourceView> TVar9;
  TRefCountPtr<FRHIShaderResourceView> *pTVar10;
  FRHIResource *local_res8;
  FRHIResource *local_res18;
  FRHIResource *local_80;
  undefined2 local_78;
  undefined5 uStack_75;
  longlong lStack_70;
  longlong local_68;
  ulonglong uStack_60;
  wchar_t *local_58;
  longlong lStack_50;
  ulonglong local_48;
  longlong lStack_40;
  longlong local_38;
  
  if ((((param_5 >> 10 & 1) != 0) && (param_2 == (wchar_t *)0x0)) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1529500182670999113>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIUtilities.h"
                         ,0x1b7,
                         "!(EnumHasAnyFlags(AdditionalUsage, EBufferUsageFlags::FastVRAM) && !InDebugName)"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this->NumBytes = param_3 * param_4;
  local_68 = CONCAT44(param_3,param_3 * param_4);
  uStack_60 = CONCAT44((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1,param_5) | 0x10108;
  local_48 = (ulonglong)param_8;
  lStack_40 = 0;
  lStack_50 = 0;
  local_38 = 0;
  local_58 = param_2;
  TVar7 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&stack0x00000008);
  if ((FRHIBuffer *)this != TVar7.Reference) {
    pFVar3 = (this->Buffer).Reference;
    (this->Buffer).Reference = (FRHIBuffer *)(TVar7.Reference)->_padding_;
    (TVar7.Reference)->_padding_ = 0;
    if (pFVar3 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  pFVar3 = (this->Buffer).Reference;
  if ((pFVar3 == (FRHIBuffer *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0xb5a,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EVar2 = (pFVar3->Desc).Usage;
  if ((EVar2 >> 0x14 & 1) != 0) {
    if (((((pFVar3->Desc).Size != 0) || ((pFVar3->Desc).Stride != 0)) || (EVar2 != NullResource)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Size == 0 && Stride == 0 && Usage == EBufferUsageFlags::NullResource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x54f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!TargetBuffer->GetDesc().IsNull()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xb5b,
                       L"Null buffer resources are placeholders for the streaming system. They do not contain a valid descriptor for this function to use. Call SetType() instead."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TVar8 = FRHICommandListBase::CreateUnorderedAccessView
                    (param_1,(FRHIBuffer *)&stack0x00000018,(FInitializer *)(this->Buffer).Reference
                    );
  pTVar1 = &this->UAV;
  if ((FRHIUnorderedAccessView *)pTVar1 != TVar8.Reference) {
    this_00 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar1->Reference = *TVar8.Reference;
    *(undefined8 *)TVar8.Reference = 0;
    if (this_00 != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  if (local_res18 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res18);
  }
  pFVar3 = (this->Buffer).Reference;
  _local_78 = 0;
  lStack_70 = 0;
  if ((pFVar3 == (FRHIBuffer *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0xb15,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EVar2 = (pFVar3->Desc).Usage;
  if ((EVar2 >> 0x14 & 1) != 0) {
    if (((((pFVar3->Desc).Size != 0) || ((pFVar3->Desc).Stride != 0)) || (EVar2 != NullResource)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Size == 0 && Stride == 0 && Usage == EBufferUsageFlags::NullResource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x54f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!TargetBuffer->GetDesc().IsNull()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xb16,
                       L"Null buffer resources are placeholders for the streaming system. They do not contain a valid descriptor for this function to use. Call SetType() instead."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EVar2 = (pFVar3->Desc).Usage;
  if ((EVar2 & ByteAddressBuffer) == None) {
    if ((EVar2 >> 0x10 & 1) == 0) {
      bVar6 = (byte)(EVar2 >> 0xc) & 2 | 1;
    }
    else {
      bVar6 = 2;
    }
  }
  else {
    bVar6 = 4;
  }
  _local_78 = CONCAT12(bVar6,local_78);
  TVar9 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)&stack0xffffffffffffff80,
                     (FInitializer *)(this->Buffer).Reference);
  pTVar10 = &this->SRV;
  if ((FRHIShaderResourceView *)pTVar10 != TVar9.Reference) {
    this_01 = pTVar10->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar10->Reference = *TVar9.Reference;
    *(undefined8 *)TVar9.Reference = 0;
    if (this_01 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  if (local_80 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_80);
  }
  return;
}

