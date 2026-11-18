// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 6

// ~TAsyncCompositeImage<FColor> @ 14ddc9330

void __thiscall
TAsyncCompositeImage<FColor>::~TAsyncCompositeImage<FColor>(TAsyncCompositeImage<FColor> *this)

{
  FImagePixelData *pFVar1;
  
  pFVar1 = (this->ImageToComposite).Ptr;
  if (pFVar1 != (FImagePixelData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ddc9340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// ~TAsyncCompositeImage<FLinearColor> @ 14ddc9350

void __thiscall
TAsyncCompositeImage<FLinearColor>::~TAsyncCompositeImage<FLinearColor>
          (TAsyncCompositeImage<FLinearColor> *this)

{
  FImagePixelData *pFVar1;
  
  pFVar1 = (this->ImageToComposite).Ptr;
  if (pFVar1 != (FImagePixelData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ddc9360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// ~TAsyncCompositeImage<FFloat16Color> @ 14ddc9370

void __thiscall
TAsyncCompositeImage<FFloat16Color>::~TAsyncCompositeImage<FFloat16Color>
          (TAsyncCompositeImage<FFloat16Color> *this)

{
  FImagePixelData *pFVar1;
  
  pFVar1 = (this->ImageToComposite).Ptr;
  if (pFVar1 != (FImagePixelData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ddc9380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// operator() @ 14ddcf670

void __thiscall
TAsyncCompositeImage<FColor>::operator()
          (TAsyncCompositeImage<FColor> *this,FImagePixelData *param_1)

{
  int iVar1;
  FImagePixelData *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  <lambda_1> <Var6;
  int local_res10;
  int local_res14;
  int local_res18;
  int local_res1c;
  int local_res20;
  int local_res24;
  TIntPoint<int>_u_0 local_b8;
  TIntPoint<int>_u_0 local_b0;
  FImagePixelData *local_a8;
  FImagePixelData *local_a0;
  code *local_98;
  int **local_90;
  TArrayView<std::nullptr_t,int> local_78;
  TIntPoint<int>_u_0 *local_68;
  TIntPoint<int>_u_0 *local_60;
  TAsyncCompositeImage<FColor> *local_58;
  int *local_50;
  int *local_48;
  FImagePixelData **local_40;
  int *local_38;
  FImagePixelData **local_30;
  
  if ((param_1->Type != Color) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelData->GetType() == EImagePixelType::Color",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MovieRenderPipelineDataTypes.h"
                         ,0x5c5,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->ImageToComposite).Ptr;
  if (((pFVar2 == (FImagePixelData *)0x0) || (pFVar2->Type != Color)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ImageToComposite && ImageToComposite->GetType() == EImagePixelType::Color"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MovieRenderPipelineDataTypes.h"
                         ,0x5c6,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->Offset).field0_0x0._s_0.Y;
  local_res1c = 0;
  if (0 < -iVar5) {
    local_res1c = -iVar5;
  }
  iVar1 = (this->Offset).field0_0x0._s_0.X;
  local_res18 = 0;
  if (0 < -iVar1) {
    local_res18 = -iVar1;
  }
  local_res24 = 0;
  if (0 < iVar5) {
    local_res24 = iVar5;
  }
  local_res20 = 0;
  if (0 < iVar1) {
    local_res20 = iVar1;
  }
  local_b8 = (TIntPoint<int>_u_0)
             *(TIntPoint<int>_u_0 *)&(((this->ImageToComposite).Ptr)->Size).field0_0x0._s_0;
  local_b0 = (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&(param_1->Size).field0_0x0._s_0;
  local_res14 = local_b0._s_0.Y - local_res24;
  iVar5 = local_b8._s_0.Y - local_res1c;
  if (iVar5 < local_res14) {
    local_res14 = iVar5;
  }
  local_res10 = local_b0._s_0.X - local_res20;
  iVar5 = local_b8._s_0.X - local_res18;
  if (iVar5 < local_res10) {
    local_res10 = iVar5;
  }
  if ((local_res10 < 1) || (local_res14 < 1)) {
    local_68 = &local_b8;
    local_60 = &local_b0;
    local_58 = this;
    bVar4 = `TAsyncCompositeImage<FColor>::operator()'::__l17::<lambda_1>::operator()(&local_68);
    if (!bVar4) {
      return;
    }
  }
  <Var6 = (<lambda_1>)(-1 < CpuChannel->Enabled);
  if ((bool)<Var6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_TAsyncCompositeImage<FColor>::operator()(FImagePixelData*___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1500,"MoviePipeline::TAsyncCompositeImageFColor",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MovieRenderPipelineDataTypes.h"
               ,0x5dc);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_TAsyncCompositeImage<FColor>::operator()(FImagePixelData*___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1500);
  }
  local_a8 = (this->ImageToComposite).Ptr;
  local_50 = &local_res10;
  local_48 = &local_res18;
  local_40 = &local_a8;
  local_38 = &local_res20;
  local_30 = &local_a0;
  local_78.DataPtr = (void **)0x0;
  local_78.ArrayNum = 0;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`TAsyncCompositeImage<FColor>::operator()'::__l2::<lambda_2>,void,int>
             ::Call;
  local_90 = &local_50;
  local_a0 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",local_res14,1,(TFunctionRef<void___cdecl(int)> *)&local_98,<Var6,
             None,&local_78);
  if ((bool)<Var6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14ddcf890

void __thiscall
TAsyncCompositeImage<FLinearColor>::operator()
          (TAsyncCompositeImage<FLinearColor> *this,FImagePixelData *param_1)

{
  int iVar1;
  FImagePixelData *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  <lambda_1> <Var6;
  int local_res10;
  int local_res14;
  int local_res18;
  int local_res1c;
  int local_res20;
  int local_res24;
  TIntPoint<int>_u_0 local_b8;
  TIntPoint<int>_u_0 local_b0;
  FImagePixelData *local_a8;
  FImagePixelData *local_a0;
  code *local_98;
  int **local_90;
  TArrayView<std::nullptr_t,int> local_78;
  TIntPoint<int>_u_0 *local_68;
  TIntPoint<int>_u_0 *local_60;
  TAsyncCompositeImage<FLinearColor> *local_58;
  int *local_50;
  int *local_48;
  FImagePixelData **local_40;
  int *local_38;
  FImagePixelData **local_30;
  
  if ((param_1->Type != Float32) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelData->GetType() == EImagePixelType::Float32",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MovieRenderPipelineDataTypes.h"
                         ,0x682,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->ImageToComposite).Ptr;
  if (((pFVar2 == (FImagePixelData *)0x0) || (pFVar2->Type != Color)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ImageToComposite && ImageToComposite->GetType() == EImagePixelType::Color"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MovieRenderPipelineDataTypes.h"
                         ,0x683,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->Offset).field0_0x0._s_0.Y;
  local_res1c = 0;
  if (0 < -iVar5) {
    local_res1c = -iVar5;
  }
  iVar1 = (this->Offset).field0_0x0._s_0.X;
  local_res18 = 0;
  if (0 < -iVar1) {
    local_res18 = -iVar1;
  }
  local_res24 = 0;
  if (0 < iVar5) {
    local_res24 = iVar5;
  }
  local_res20 = 0;
  if (0 < iVar1) {
    local_res20 = iVar1;
  }
  local_b8 = (TIntPoint<int>_u_0)
             *(TIntPoint<int>_u_0 *)&(((this->ImageToComposite).Ptr)->Size).field0_0x0._s_0;
  local_b0 = (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&(param_1->Size).field0_0x0._s_0;
  local_res14 = local_b0._s_0.Y - local_res24;
  iVar5 = local_b8._s_0.Y - local_res1c;
  if (iVar5 < local_res14) {
    local_res14 = iVar5;
  }
  local_res10 = local_b0._s_0.X - local_res20;
  iVar5 = local_b8._s_0.X - local_res18;
  if (iVar5 < local_res10) {
    local_res10 = iVar5;
  }
  if ((local_res10 < 1) || (local_res14 < 1)) {
    local_68 = &local_b8;
    local_60 = &local_b0;
    local_58 = this;
    bVar4 = `TAsyncCompositeImage<FLinearColor>::operator()'::__l17::<lambda_1>::operator()
                      (&local_68);
    if (!bVar4) {
      return;
    }
  }
  <Var6 = (<lambda_1>)(-1 < CpuChannel->Enabled);
  if ((bool)<Var6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_TAsyncCompositeImage<FLinearColor>::operator()(FImagePixelData*___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1689,
               "MoviePipeline::TAsyncCompositeImageFLinearColor",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MovieRenderPipelineDataTypes.h"
               ,0x699);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_TAsyncCompositeImage<FLinearColor>::operator()(FImagePixelData*___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1689);
  }
  local_a8 = (this->ImageToComposite).Ptr;
  local_50 = &local_res10;
  local_48 = &local_res18;
  local_40 = &local_a8;
  local_38 = &local_res20;
  local_30 = &local_a0;
  local_78.DataPtr = (void **)0x0;
  local_78.ArrayNum = 0;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`TAsyncCompositeImage<FLinearColor>::operator()'::__l2::<lambda_2>,void,int>
             ::Call;
  local_90 = &local_50;
  local_a0 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",local_res14,1,(TFunctionRef<void___cdecl(int)> *)&local_98,<Var6,
             None,&local_78);
  if ((bool)<Var6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14ddcfab0

void __thiscall
TAsyncCompositeImage<FFloat16Color>::operator()
          (TAsyncCompositeImage<FFloat16Color> *this,FImagePixelData *param_1)

{
  int iVar1;
  FImagePixelData *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  <lambda_1> <Var6;
  int local_res10;
  int local_res14;
  int local_res18;
  int local_res1c;
  int local_res20;
  int local_res24;
  TIntPoint<int>_u_0 local_b8;
  TIntPoint<int>_u_0 local_b0;
  FImagePixelData *local_a8;
  FImagePixelData *local_a0;
  code *local_98;
  int **local_90;
  TArrayView<std::nullptr_t,int> local_78;
  TIntPoint<int>_u_0 *local_68;
  TIntPoint<int>_u_0 *local_60;
  TAsyncCompositeImage<FFloat16Color> *local_58;
  int *local_50;
  int *local_48;
  FImagePixelData **local_40;
  int *local_38;
  FImagePixelData **local_30;
  
  if ((param_1->Type != Float16) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelData->GetType() == EImagePixelType::Float16",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MovieRenderPipelineDataTypes.h"
                         ,0x63e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->ImageToComposite).Ptr;
  if (((pFVar2 == (FImagePixelData *)0x0) || (pFVar2->Type != Color)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ImageToComposite && ImageToComposite->GetType() == EImagePixelType::Color"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MovieRenderPipelineDataTypes.h"
                         ,0x63f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->Offset).field0_0x0._s_0.Y;
  local_res1c = 0;
  if (0 < -iVar5) {
    local_res1c = -iVar5;
  }
  iVar1 = (this->Offset).field0_0x0._s_0.X;
  local_res18 = 0;
  if (0 < -iVar1) {
    local_res18 = -iVar1;
  }
  local_res24 = 0;
  if (0 < iVar5) {
    local_res24 = iVar5;
  }
  local_res20 = 0;
  if (0 < iVar1) {
    local_res20 = iVar1;
  }
  local_b8 = (TIntPoint<int>_u_0)
             *(TIntPoint<int>_u_0 *)&(((this->ImageToComposite).Ptr)->Size).field0_0x0._s_0;
  local_b0 = (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&(param_1->Size).field0_0x0._s_0;
  local_res14 = local_b0._s_0.Y - local_res24;
  iVar5 = local_b8._s_0.Y - local_res1c;
  if (iVar5 < local_res14) {
    local_res14 = iVar5;
  }
  local_res10 = local_b0._s_0.X - local_res20;
  iVar5 = local_b8._s_0.X - local_res18;
  if (iVar5 < local_res10) {
    local_res10 = iVar5;
  }
  if ((local_res10 < 1) || (local_res14 < 1)) {
    local_68 = &local_b8;
    local_60 = &local_b0;
    local_58 = this;
    bVar4 = `TAsyncCompositeImage<FFloat16Color>::operator()'::__l17::<lambda_1>::operator()
                      (&local_68);
    if (!bVar4) {
      return;
    }
  }
  <Var6 = (<lambda_1>)(-1 < CpuChannel->Enabled);
  if ((bool)<Var6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_TAsyncCompositeImage<FFloat16Color>::operator()(FImagePixelData*___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1621,
               "MoviePipeline::TAsyncCompositeImageFFloat16Color",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MovieRenderPipelineDataTypes.h"
               ,0x655);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_TAsyncCompositeImage<FFloat16Color>::operator()(FImagePixelData*___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1621);
  }
  local_a8 = (this->ImageToComposite).Ptr;
  local_50 = &local_res10;
  local_48 = &local_res18;
  local_40 = &local_a8;
  local_38 = &local_res20;
  local_30 = &local_a0;
  local_78.DataPtr = (void **)0x0;
  local_78.ArrayNum = 0;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`TAsyncCompositeImage<FFloat16Color>::operator()'::__l2::<lambda_2>,void,int>
             ::Call;
  local_90 = &local_50;
  local_a0 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",local_res14,1,(TFunctionRef<void___cdecl(int)> *)&local_98,<Var6,
             None,&local_78);
  if ((bool)<Var6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

