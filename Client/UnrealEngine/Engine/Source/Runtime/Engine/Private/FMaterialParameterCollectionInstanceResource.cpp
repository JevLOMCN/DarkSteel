// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FMaterialParameterCollectionInstanceResource @ 147fa4020

FMaterialParameterCollectionInstanceResource * __thiscall
FMaterialParameterCollectionInstanceResource::FMaterialParameterCollectionInstanceResource
          (FMaterialParameterCollectionInstanceResource *this)

{
  (this->Id).A = 0;
  (this->Id).B = 0;
  (this->Id).C = 0;
  (this->Id).D = 0;
  (this->OwnerName).ComparisonIndex = 0;
  (this->OwnerName).Number = 0;
  (this->UniformBuffer).Reference = (FRHIUniformBuffer *)0x0;
  (this->UniformBufferLayout).Reference = (FRHIUniformBufferLayout *)0x0;
  return this;
}

// ~FMaterialParameterCollectionInstanceResource @ 147fa8de0

void __thiscall
FMaterialParameterCollectionInstanceResource::~FMaterialParameterCollectionInstanceResource
          (FMaterialParameterCollectionInstanceResource *this)

{
  FRHIUniformBufferLayout *this_00;
  FRHIUniformBuffer *this_01;
  code *pcVar1;
  bool bVar2;
  
  if ((this->UniformBuffer).Reference != (FRHIUniformBuffer *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!UniformBuffer.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\ParameterCollection.cpp"
                       ,0x4a2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->UniformBufferLayout).Reference;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->UniformBuffer).Reference;
  if (this_01 != (FRHIUniformBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
    return;
  }
  return;
}

// operator() @ 147fadc90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FMaterialParameterCollectionInstanceResource::GameThread_Destroy'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRHIResource *this_00;
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  FRDGBuilder::WaitForAsyncExecuteTask();
  this_00 = *(FRHIResource **)(*(longlong *)this + 0x18);
  if (this_00 != (FRHIResource *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x18) = 0;
    FRHIResource::Release(this_00);
  }
  uVar1 = *(undefined8 *)this;
  local_res8 = uVar1;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar2 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar2;
    *(undefined8 **)&param_1->field_0x30 = puVar2 + 1;
    puVar2[1] = 0;
    *puVar2 = &TRHILambdaCommand<FRHICommandListImmediate,``FMaterialParameterCollectionInstanceResource::GameThread_Destroy'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = L"TRHILambdaCommand";
    puVar2[2] = uVar1;
    return;
  }
  ``FMaterialParameterCollectionInstanceResource::GameThread_Destroy'::__l2::<lambda_1>::operator()'
  ::__l2::<lambda_1>::operator()(&local_res8,param_1);
  return;
}

// GameThread_Destroy @ 147fcf8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMaterialParameterCollectionInstanceResource::GameThread_Destroy
          (FMaterialParameterCollectionInstanceResource *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FMaterialParameterCollectionInstanceResource *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FMaterialParameterCollectionInstanceResource *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FMaterialParameterCollectionInstanceResource::GameThread_Destroy'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FMaterialParameterCollectionInstanceResource::GameThread_Destroy'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FMaterialParameterCollectionInstanceResource::GameThread_Destroy_::__l2::TSTR_DestroyCollectionCommand1164>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FMaterialParameterCollectionInstanceResource::GameThread_Destroy'::__l2::TSTR_DestroyCollectionCommand1164>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// GameThread_UpdateContents @ 147fcfa20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMaterialParameterCollectionInstanceResource::GameThread_UpdateContents
          (FMaterialParameterCollectionInstanceResource *this,FGuid *param_1,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_2,FName *param_3,
          bool param_4)

{
  ForAnyElementType *pFVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  code *pcVar3;
  ForAnyElementType _Src_00;
  bool bVar4;
  code **ppcVar5;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStackY_128 [32];
  ForAnyElementType local_d8;
  int local_d0;
  int local_cc;
  FName local_c8;
  FMaterialParameterCollectionInstanceResource *local_c0;
  bool local_b8;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar7 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar7,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    pcVar2 = *(code **)param_1;
    pcVar3 = *(code **)&param_1->C;
    local_d0 = param_2->ArrayNum;
    lVar8 = (longlong)local_d0;
    _Src = (param_2->AllocatorInstance).Data;
    local_d8.Data = (FScriptContainerElement *)0x0;
    if (local_d0 == 0) {
      local_cc = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,0x10,local_d0,0,&local_d8,local_d0,&local_cc);
      memcpy(local_d8.Data,_Src,lVar8 << 4);
    }
    local_c8 = *param_3;
    local_b8 = param_4;
    local_a8[0] = (code *)0x0;
    local_c0 = this;
    ppcVar5 = FMemory::Malloc(0x40,8);
    _Src_00.Data = local_d8.Data;
    pFVar1 = (ForAnyElementType *)(ppcVar5 + 3);
    *ppcVar5 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`FMaterialParameterCollectionInstanceResource::GameThread_UpdateContents'::`2'::<lambda_1>,1,1>
                        ::_vftable_;
    ppcVar5[1] = pcVar2;
    ppcVar5[2] = pcVar3;
    pFVar1->Data = (FScriptContainerElement *)0x0;
    lVar8 = (longlong)local_d0;
    *(int *)(ppcVar5 + 4) = local_d0;
    local_80 = ppcVar5;
    if (local_d0 == 0) {
      *(int *)((longlong)ppcVar5 + 0x24) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,0x10,local_d0,0,pFVar1,local_d0,(int *)((longlong)ppcVar5 + 0x24));
      memcpy(pFVar1->Data,_Src_00.Data,lVar8 << 4);
    }
    *(FName *)(ppcVar5 + 5) = local_c8;
    ppcVar5[6] = (code *)local_c0;
    *(bool *)(ppcVar5 + 7) = local_b8;
    if (ppcVar5 + 1 != (code **)0x0) {
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FMaterialParameterCollectionInstanceResource::GameThread_UpdateContents'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FMaterialParameterCollectionInstanceResource::GameThread_UpdateContents_::__l2::TSTR_UpdateCollectionCommand1148>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_78._0_8_ = local_a8[0];
      local_50 = local_80;
      local_80 = (code **)0x0;
      local_78._16_8_ = local_98[0];
      local_78._24_8_ = local_98[1];
      local_78._32_8_ = local_98[2];
      local_a8[0] = (code *)0x0;
      local_48 = 2;
      pFVar6 = (FRenderCommandTag *)
               TRenderCommandTag<`FMaterialParameterCollectionInstanceResource::GameThread_UpdateContents'::__l2::TSTR_UpdateCollectionCommand1148>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar6);
      uVar9 = (ulonglong)local_48;
      if (2 < uVar9) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_78._0_8_ != (code *)0x0) {
          ppcVar5 = (code **)(local_78 + 0x10);
          if (local_50 != (code **)0x0) {
            ppcVar5 = local_50;
          }
          (**(code **)(*ppcVar5 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9])(local_78);
      }
    }
    if (local_a8[0] != (code *)0x0) {
      ppcVar5 = local_a8 + 2;
      if (local_80 != (code **)0x0) {
        ppcVar5 = local_80;
      }
      (**(code **)(*ppcVar5 + 0x10))();
    }
    if (local_d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data);
    }
  }
  return;
}

// UpdateContents @ 147ffd850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMaterialParameterCollectionInstanceResource::UpdateContents
          (FMaterialParameterCollectionInstanceResource *this,FGuid *param_1,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_2,FName *param_3,
          bool param_4)

{
  TRefCountPtr<FRHIUniformBufferLayout_const_> *pTVar1;
  ERHIPipeline EVar2;
  FScriptContainerElement *pFVar3;
  FRHIUniformBuffer *pFVar4;
  FRHIUniformBufferLayout *pFVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  FRHICommandListBase *this_00;
  FRHIUniformBufferLayout *pFVar10;
  TMemoryImagePtr<FScriptContainerElement>_u_0 TVar11;
  uint uVar12;
  TRefCountPtr<FRHIUniformBuffer> *pTVar13;
  int *piVar14;
  FLLMScope local_res8 [2];
  FLLMScope local_res10 [5];
  FMemScope local_res20;
  TRefCountPtr<FRHIUniformBuffer> local_d8 [2];
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_c8;
  int local_c0 [2];
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_b8;
  undefined8 local_b0;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_a8;
  undefined8 local_a0;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_98;
  undefined8 local_90;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_88;
  undefined8 local_80;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_78;
  undefined8 local_70;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_68;
  undefined8 local_60;
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  undefined1 local_4c;
  FMemScope local_48;
  longlong local_40;
  
  uVar12 = param_1->B;
  uVar7 = param_1->C;
  uVar8 = param_1->D;
  (this->Id).A = param_1->A;
  (this->Id).B = uVar12;
  (this->Id).C = uVar7;
  (this->Id).D = uVar8;
  this->OwnerName = *param_3;
  if (((param_1->D == 0 && param_1->C == 0) && param_1->B == 0) && param_1->A == 0) {
    return;
  }
  if (param_2->ArrayNum < 1) {
    return;
  }
  pFVar10 = (this->UniformBufferLayout).Reference;
  pTVar1 = &this->UniformBufferLayout;
  uVar12 = param_2->ArrayNum << 4;
  if (((pFVar10 != (FRHIUniformBufferLayout *)0x0) && ((pFVar10->Resources).ArrayNum != 0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("UniformBufferLayout == nullptr || UniformBufferLayout->Resources.Num() == 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\ParameterCollection.cpp"
                         ,0x4ad,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((!param_4) && ((this->UniformBuffer).Reference != (FRHIUniformBuffer *)0x0)) {
    if ((uVar12 != pTVar1->Reference->ConstantBufferSize) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewSize == UniformBufferLayout->ConstantBufferSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\ParameterCollection.cpp"
                           ,0x4b1,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((pTVar1->Reference != (((this->UniformBuffer).Reference)->Layout).Reference) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("UniformBuffer->GetLayoutPtr() == UniformBufferLayout",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\ParameterCollection.cpp"
                           ,0x4b2,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    this_00 = (FRHICommandListBase *)FRHICommandListImmediate::Get();
    pFVar3 = (param_2->AllocatorInstance).Data;
    pFVar4 = (this->UniformBuffer).Reference;
    EVar2 = this_00->ActivePipelines;
    if (((EVar2 != None) && ((EVar2 & EVar2 - Graphics) != None)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x2a5,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (this_00->ActivePipelines == None) {
      FRHICommandListBase::SwitchPipeline(this_00,Graphics);
      (**(code **)(GDynamicRHI->_padding_ + 0x130))(GDynamicRHI,this_00,pFVar4,pFVar3);
      FRHICommandListBase::SwitchPipeline(this_00,None);
      return;
    }
    (**(code **)(GDynamicRHI->_padding_ + 0x130))(GDynamicRHI,this_00,pFVar4,pFVar3);
    return;
  }
  local_c8.Packed = 0;
  local_c0[0] = 0;
  local_c0[1] = 0;
  UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
            (2,2,0x2c,(ForAnyElementType *)&local_c8.Frozen,local_c0,local_c0 + 1);
  TVar11 = local_c8;
  if ((local_c8.Packed & 1) != 0) {
    TVar11.UnfrozenPtr =
         (FScriptContainerElement *)((longlong)&local_c8 + ((longlong)local_c8.Packed >> 0x18));
  }
  FGenericPlatformString::Memcpy
            (TVar11.UnfrozenPtr,L"MaterialParameterCollectionInstanceResource",0x58);
  local_b8.Packed = 0;
  local_b0 = 0;
  local_a8.Packed = 0;
  local_a0 = 0;
  local_98.Packed = 0;
  local_90 = 0;
  local_88.Packed = 0;
  local_80 = 0;
  local_78.Packed = 0;
  local_70 = 0;
  local_68.Packed = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0x1ffffff;
  local_4c = 0;
  local_54 = uVar12;
  FRHIUniformBufferLayoutInitializer::ComputeHash
            ((FRHIUniformBufferLayoutInitializer *)&local_c8.Frozen);
  piVar14 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar14 <
       `class_TRefCountPtr<FRHIUniformBufferLayout_const_>___cdecl_RHICreateUniformBufferLayout(FRHIUniformBufferLayoutInitializer_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_TRefCountPtr<FRHIUniformBufferLayout_const_>___cdecl_RHICreateUniformBufferLayout(FRHIUniformBufferLayoutInitializer_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `class_TRefCountPtr<FRHIUniformBufferLayout_const_>___cdecl_RHICreateUniformBufferLayout(FRHIUniformBufferLayoutInitializer_const&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`class_TRefCountPtr<FRHIUniformBufferLayout_const_>___cdecl_RHICreateUniformBufferLayout(FRHIUniformBufferLayoutInitializer_const&___ptr64)'
                    ::__l2::LLMScope_Name1227,L"RHIMisc/CreateUniformBufferLayout");
    _Init_thread_footer(&`class_TRefCountPtr<FRHIUniformBufferLayout_const_>___cdecl_RHICreateUniformBufferLayout(FRHIUniformBufferLayoutInitializer_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `class_TRefCountPtr<FRHIUniformBufferLayout_const_>___cdecl_RHICreateUniformBufferLayout(FRHIUniformBufferLayoutInitializer_const&___ptr64)'
             ::__l2::LLMScope_Name1227,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res20,
             &`class_TRefCountPtr<FRHIUniformBufferLayout_const_>___cdecl_RHICreateUniformBufferLayout(FRHIUniformBufferLayoutInitializer_const&___ptr64)'
              ::__l2::LLMScope_Name1227,true);
  pFVar10 = ::operator_new(0x98);
  if (pFVar10 == (FRHIUniformBufferLayout *)0x0) {
    pFVar10 = (FRHIUniformBufferLayout *)0x0;
  }
  else {
    pFVar10 = FRHIUniformBufferLayout::FRHIUniformBufferLayout
                        (pFVar10,(FRHIUniformBufferLayoutInitializer *)&local_c8.Frozen);
    if (pFVar10 != (FRHIUniformBufferLayout *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar10);
    }
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  if (pTVar1 != (TRefCountPtr<FRHIUniformBufferLayout_const_> *)&local_40) {
    pFVar5 = pTVar1->Reference;
    pTVar1->Reference = pFVar10;
    pFVar10 = pFVar5;
  }
  if (pFVar10 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar10);
  }
  pFVar10 = pTVar1->Reference;
  pFVar3 = (param_2->AllocatorInstance).Data;
  if ((*piVar14 <
       `class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
                           ::__l2::_thread_safe_static_guard_0__),
     `class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
                    ::__l2::LLMScope_Name1233,L"RHIMisc/CreateUniformBuffer");
    _Init_thread_footer(&`class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res10,
             `class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
             ::__l2::LLMScope_Name1233,false,None,Default,true);
  FMemScope::FMemScope
            (&local_48,
             &`class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
              ::__l2::LLMScope_Name1233,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x128))(GDynamicRHI,local_d8,pFVar3,pFVar10,2,1);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res10);
  pTVar13 = &this->UniformBuffer;
  if (pTVar13 != local_d8) {
    pFVar4 = pTVar13->Reference;
    pTVar13->Reference = local_d8[0].Reference;
    local_d8[0].Reference = (FRHIUniformBuffer *)0x0;
    if (pFVar4 == (FRHIUniformBuffer *)0x0) goto LAB_147ffdc2b;
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  if (local_d8[0].Reference != (FRHIUniformBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_d8[0].Reference);
  }
LAB_147ffdc2b:
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_68.Frozen);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_78.Frozen);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_88.Frozen);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_98.Frozen);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_a8.Frozen);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_b8.Frozen);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_c8.Frozen);
  return;
}

