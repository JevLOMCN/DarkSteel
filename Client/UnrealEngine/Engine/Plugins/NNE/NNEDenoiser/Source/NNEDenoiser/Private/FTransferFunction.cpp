// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 8

// FTransferFunction @ 14eae60e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FTransferFunction * __thiscall
UE::NNEDenoiser::Private::Oidn::FTransferFunction::FTransferFunction(FTransferFunction *this)

{
  this->InputScaleBuffer = (FRDGBuffer *)0x0;
  this->_padding_ = (longlong)&___7FTransferFunction_Oidn_Private_NNEDenoiser_UE__6B_;
  this->InvNormScale = 3.135119;
  this->NormScale = 0.31896716;
  return this;
}

// ~FTransferFunction @ 14eae6d10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UE::NNEDenoiser::Private::Oidn::FTransferFunction::~FTransferFunction(FTransferFunction *this)

{
  this->_padding_ = (longlong)&___7ITransferFunction_Private_NNEDenoiser_UE__6B_;
  return;
}

// operator() @ 14eae87b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
`UE::NNEDenoiser::Private::Oidn::FTransferFunction::Inverse'::__l2::<lambda_1>::operator()
          (void *this,float param_1)

{
  float fVar1;
  
  if (__real_7f7fffff <= param_1) {
    param_1 = __real_7f7fffff;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  fVar1 = param_1 * *(float *)(*(longlong *)this + 0xc);
  if (fVar1 <= ___real_3b123ea5) {
    return fVar1 * ___real_3a398b59 * *(float *)((longlong)this + 8);
  }
  if (fVar1 <= ___real_3ebdf067) {
    fVar1 = powf((fVar1 - ___real_bb40c470) * ___real_3f1b88f6,__real_40145bff);
    return fVar1 * *(float *)((longlong)this + 8);
  }
  fVar1 = expf((fVar1 - ___real_3f7fa592) * ___real_40a619fe);
  return (fVar1 - ___real_3bcd22e0) * *(float *)((longlong)this + 8);
}

// Forward @ 14eaf7bc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UE::NNEDenoiser::Private::Oidn::FTransferFunction::Forward
          (FTransferFunction *this,TArrayView<FLinearColor_const_,int> *param_1,float param_2,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_3)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  FLinearColor *pFVar7;
  FLinearColor *pFVar8;
  float fVar9;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  fVar4 = __real_7f7fffff;
  pFVar8 = param_1->DataPtr;
  pFVar7 = pFVar8 + param_1->ArrayNum;
  while( true ) {
    if (pFVar8 == pFVar7) {
      return;
    }
    fVar1 = this->NormScale;
    fVar9 = param_2 * (pFVar8->field0_0x0)._s_0.R;
    if (fVar4 <= fVar9) {
      fVar9 = fVar4;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    local_58 = Helper::FPU::Forward(fVar9);
    local_58 = local_58 * fVar1;
    fVar9 = param_2 * (pFVar8->field0_0x0)._s_0.G;
    if (fVar4 <= fVar9) {
      fVar9 = fVar4;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    fStack_54 = Helper::FPU::Forward(fVar9);
    fStack_54 = fStack_54 * fVar1;
    fVar9 = param_2 * (pFVar8->field0_0x0)._s_0.B;
    if (fVar4 <= fVar9) {
      fVar9 = fVar4;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    fStack_50 = Helper::FPU::Forward(fVar9);
    pFVar2 = (param_3->AllocatorInstance).Data;
    fStack_50 = fStack_50 * fVar1;
    fStack_4c = (pFVar8->field0_0x0)._s_0.A;
    if (((pFVar2 <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 < pFVar2 + (longlong)param_3->ArrayMax * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) break;
    iVar6 = param_3->ArrayNum;
    if (iVar6 == param_3->ArrayMax) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    pFVar8 = pFVar8 + 1;
    param_3->ArrayNum = iVar6 + 1;
    pFVar2 = (param_3->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    *(ulonglong *)pFVar2 = CONCAT44(fStack_54,local_58);
    *(ulonglong *)(pFVar2 + 8) = CONCAT44(fStack_4c,fStack_50);
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// Inverse @ 14eafa5e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UE::NNEDenoiser::Private::Oidn::FTransferFunction::Inverse
          (FTransferFunction *this,TArrayView<FLinearColor_const_,int> *param_1,float param_2,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FLinearColor *pFVar5;
  FLinearColor *pFVar6;
  float fVar7;
  float fVar8;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  FTransferFunction *local_38;
  float local_30;
  
  pFVar6 = param_1->DataPtr;
  pFVar5 = pFVar6 + param_1->ArrayNum;
  local_38 = this;
  local_30 = param_2;
  while( true ) {
    if (pFVar6 == pFVar5) {
      return;
    }
    fVar7 = `UE::NNEDenoiser::Private::Oidn::FTransferFunction::Inverse'::__l2::<lambda_1>::
            operator()(&local_38,(pFVar6->field0_0x0)._s_0.B);
    fVar8 = `UE::NNEDenoiser::Private::Oidn::FTransferFunction::Inverse'::__l2::<lambda_1>::
            operator()(&local_38,(pFVar6->field0_0x0)._s_0.G);
    local_48 = `UE::NNEDenoiser::Private::Oidn::FTransferFunction::Inverse'::__l2::<lambda_1>::
               operator()(&local_38,(pFVar6->field0_0x0)._s_0.R);
    pFVar1 = (param_3->AllocatorInstance).Data;
    fStack_3c = (pFVar6->field0_0x0)._s_0.A;
    fStack_44 = fVar8;
    fStack_40 = fVar7;
    if (((pFVar1 <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 < pFVar1 + (longlong)param_3->ArrayMax * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar4 = param_3->ArrayNum;
    if (iVar4 == param_3->ArrayMax) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    pFVar6 = pFVar6 + 1;
    param_3->ArrayNum = iVar4 + 1;
    pFVar1 = (param_3->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(ulonglong *)pFVar1 = CONCAT44(fStack_44,local_48);
    *(ulonglong *)(pFVar1 + 8) = CONCAT44(fStack_3c,fStack_40);
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// RDGForward @ 14eafcb30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::NNEDenoiser::Private::Oidn::FTransferFunction::RDGForward
          (FTransferFunction *this,FRDGBuilder *param_1,FRDGTexture *param_2,FRDGTexture *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->InputScaleBuffer == (FRDGBuffer *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputScaleBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserTransferFunctionOidn.cpp"
                       ,0x9f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  Helper::ApplyTransferFunction
            (param_1,param_2,param_3,this->InputScaleBuffer,this->NormScale,this->InvNormScale,true)
  ;
  return;
}

// RDGInverse @ 14eafcbd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::NNEDenoiser::Private::Oidn::FTransferFunction::RDGInverse
          (FTransferFunction *this,FRDGBuilder *param_1,FRDGTexture *param_2,FRDGTexture *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->InputScaleBuffer == (FRDGBuffer *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputScaleBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserTransferFunctionOidn.cpp"
                       ,0xa6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  Helper::ApplyTransferFunction
            (param_1,param_2,param_3,this->InputScaleBuffer,this->NormScale,this->InvNormScale,false
            );
  return;
}

// RDGSetInputScale @ 14eafcc70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UE::NNEDenoiser::Private::Oidn::FTransferFunction::RDGSetInputScale
          (FTransferFunction *this,FRDGBuffer *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != (FRDGBuffer *)0x0) {
    this->InputScaleBuffer = param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("InInputScaleBuffer",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserTransferFunctionOidn.cpp"
                     ,0x98,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->InputScaleBuffer = (FRDGBuffer *)0x0;
  return;
}

