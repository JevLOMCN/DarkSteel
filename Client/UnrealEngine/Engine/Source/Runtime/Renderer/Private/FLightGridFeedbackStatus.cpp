// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// InitRHI @ 144b764c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLightGridFeedbackStatus::InitRHI(FLightGridFeedbackStatus *this,FRHICommandListBase *param_1)

{
  undefined8 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  TRDGHandle<GPUMessage::FSocket,unsigned_int> local_res8 [2];
  
  puVar1 = ::operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1[2] = this;
    puVar1[1] = L"LightGrid.StatusFeedback";
    *puVar1 = &GPUMessage::TLambdaHandler<`FLightGridFeedbackStatus::InitRHI'::`2'::<lambda_1>_>::
               _vftable_;
  }
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &SharedPointerInternals::
          TReferenceControllerWithDeleter<GPUMessage::TLambdaHandler<`FLightGridFeedbackStatus::InitRHI'::`2'::<lambda_1>_>,SharedPointerInternals::DefaultDeleter<GPUMessage::TLambdaHandler<`FLightGridFeedbackStatus::InitRHI'::`2'::<lambda_1>_>_>,1>
          ::_vftable_;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)puVar1;
  }
  GPUMessage::RegisterHandler((TSharedPtr<GPUMessage::FHandler,1> *)local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  GPUMessage::FSocket::Reset(&this->StatusFeedbackSocket);
  (this->StatusFeedbackSocket).MessageId.Index = local_res8[0].Index;
  local_res8[0].Index = 0xffffffff;
  GPUMessage::FSocket::Reset((FSocket *)local_res8);
  return;
}

// ReleaseRHI @ 144b76580

void __thiscall FLightGridFeedbackStatus::ReleaseRHI(FLightGridFeedbackStatus *this)

{
  return;
}

// ~FLightGridFeedbackStatus @ 144b99530

void __thiscall FLightGridFeedbackStatus::~FLightGridFeedbackStatus(FLightGridFeedbackStatus *this)

{
  this->_padding_ = (longlong)&___7FLightGridFeedbackStatus__6B_;
  GPUMessage::FSocket::Reset(&this->StatusFeedbackSocket);
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// operator() @ 144b9c0d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FLightGridFeedbackStatus::InitRHI'::__l2::<lambda_1>::operator()(void *this,FReader *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar8;
  
  uVar5 = param_1->ReadOffset;
  uVar7 = (ulonglong)uVar5;
  uVar1 = param_1->PayloadSize;
  uVar10 = 0;
  if (uVar5 < uVar1) {
    uVar9 = param_1->PayloadData[uVar7];
    uVar7 = (ulonglong)(uVar5 + 1);
    param_1->ReadOffset = uVar5 + 1;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6452879395177627563>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GPUMessaging.h"
                       ,0x55,"ReadOffset < PayloadSize");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar9 = 0;
  }
  if ((uint)uVar7 < uVar1) {
    uVar5 = (uint)uVar7 + 1;
    uVar8 = (ulonglong)uVar5;
    param_1->ReadOffset = uVar5;
    uVar5 = param_1->PayloadData[uVar7];
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6452879395177627563>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GPUMessaging.h"
                       ,0x55,"ReadOffset < PayloadSize");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar5 = 0;
    uVar8 = uVar7;
  }
  uVar6 = (uint)uVar8;
  if (uVar6 < uVar1) {
    uVar6 = uVar6 + 1;
    param_1->ReadOffset = uVar6;
    uVar11 = param_1->PayloadData[uVar8];
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6452879395177627563>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GPUMessaging.h"
                       ,0x55,"ReadOffset < PayloadSize");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar11 = 0;
  }
  if (uVar6 < uVar1) {
    uVar10 = param_1->PayloadData[uVar6];
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6452879395177627563>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GPUMessaging.h"
                       ,0x55,"ReadOffset < PayloadSize");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (uVar5 < uVar9) {
    if ((*(uint *)(*(longlong *)this + 0x24) < uVar5) && (2 < (byte)LogRenderer._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
    }
    lVar2 = *(longlong *)this;
    if (uVar5 < *(uint *)(lVar2 + 0x24)) {
      uVar5 = *(uint *)(lVar2 + 0x24);
    }
    *(uint *)(lVar2 + 0x24) = uVar5;
  }
  if ((uVar10 < uVar11) && (bWarn != false)) {
    if (2 < (byte)LogRenderer._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
    }
    bWarn = false;
  }
  return;
}

