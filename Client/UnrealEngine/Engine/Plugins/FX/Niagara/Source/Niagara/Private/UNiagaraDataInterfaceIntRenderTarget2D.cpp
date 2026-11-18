// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 30

// StaticClass @ 14915c5d0

UClass * __cdecl UNiagaraDataInterfaceIntRenderTarget2D::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceIntRenderTarget2D.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceIntRenderTarget2D",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceIntRenderTarget2D.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceIntRenderTarget2D,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceIntRenderTarget2D>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceIntRenderTarget2D>,local_res8,
               UNiagaraDataInterfaceRWBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceIntRenderTarget2D.InnerSingleton;
}

// UNiagaraDataInterfaceIntRenderTarget2D @ 14916a120

UNiagaraDataInterfaceIntRenderTarget2D * __thiscall
UNiagaraDataInterfaceIntRenderTarget2D::UNiagaraDataInterfaceIntRenderTarget2D
          (UNiagaraDataInterfaceIntRenderTarget2D *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase
            ((UNiagaraDataInterfaceRWBase *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceIntRenderTarget2D__6B_;
  (this->Size).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->RenderTargetUserParameter);
  return this;
}

// UNiagaraDataInterfaceIntRenderTarget2D @ 14916a160

UNiagaraDataInterfaceIntRenderTarget2D * __thiscall
UNiagaraDataInterfaceIntRenderTarget2D::UNiagaraDataInterfaceIntRenderTarget2D
          (UNiagaraDataInterfaceIntRenderTarget2D *this,FObjectInitializer *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FNiagaraTypeDefinitionHandle local_res8 [2];
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase
            ((UNiagaraDataInterfaceRWBase *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceIntRenderTarget2D__6B_;
  (this->Size).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->RenderTargetUserParameter);
  puVar2 = ::operator_new(0x60);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = &___7FNDIIntRenderTarget2DProxy__6B_;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 7) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
    puVar2[10] = 0;
    *(undefined4 *)(puVar2 + 0xb) = 0;
    puVar3 = puVar2;
  }
  puVar2 = (undefined8 *)this->_padding_;
  if ((puVar2 != puVar3) && (this->_padding_ = (longlong)puVar3, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  local_28.DebugPtr = (UObject *)Z_Construct_UClass_UTextureRenderTarget_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_28.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(local_28.DebugPtr);
  }
  local_20 = 1;
  local_1e = 0;
  local_1c = 0xffffffffffffffff;
  local_14 = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (local_res8,(FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  *(int *)&(this->RenderTargetUserParameter).Parameter._padding_ = iVar1;
  return this;
}

// ~UNiagaraDataInterfaceIntRenderTarget2D @ 14916b4f0

void __thiscall
UNiagaraDataInterfaceIntRenderTarget2D::~UNiagaraDataInterfaceIntRenderTarget2D
          (UNiagaraDataInterfaceIntRenderTarget2D *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceIntRenderTarget2D__6B_;
  pFVar1 = (this->RenderTargetUserParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterfaceRWBase::~UNiagaraDataInterfaceRWBase((UNiagaraDataInterfaceRWBase *)this);
  return;
}

// operator() @ 14916cf20

void __thiscall
`UNiagaraDataInterfaceIntRenderTarget2D::InitPerInstanceData'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  ulonglong uVar1;
  FRHIResource *this_00;
  FRHIResource *this_01;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  TKeyInitializer<unsigned___int64_const_&> local_res8;
  ulonglong *local_res18;
  
  lVar6 = *(longlong *)this;
  uVar1 = *(ulonglong *)((longlong)this + 8);
  if (*(int *)(lVar6 + 0x18) != *(int *)(lVar6 + 0x44)) {
    lVar5 = *(longlong *)(lVar6 + 0x50);
    if (*(longlong *)(lVar6 + 0x50) == 0) {
      lVar5 = lVar6 + 0x48;
    }
    iVar4 = *(int *)(lVar5 + ((uVar1 >> 0x20) * 0x17 + uVar1 &
                             (ulonglong)(*(int *)(lVar6 + 0x58) - 1)) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar4 * 0x40 + *(longlong *)(lVar6 + 0x10)) == uVar1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!RT_Proxy->SystemInstancesToProxyData_RT.Contains(RT_InstanceID)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceIntRenderTarget2D.cpp"
                             ,0x25a,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x40 + 0x38 + *(longlong *)(lVar6 + 0x10));
      } while (iVar4 != -1);
    }
  }
  lVar6 = *(longlong *)this;
  local_res18 = (ulonglong *)((longlong)this + 8);
  TSet<TTuple<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,0>,FDefaultSetAllocator>
              *)(lVar6 + 0x10),&local_res8,(bool *)&local_res18);
  lVar6 = (longlong)(int)local_res8.Key * 0x40 + *(longlong *)(lVar6 + 0x10);
  *(undefined8 *)(lVar6 + 8) = *(undefined8 *)((longlong)this + 0x10);
  if ((*(longlong **)((longlong)this + 0x60) != (longlong *)0x0) &&
     (lVar5 = (**(code **)(**(longlong **)((longlong)this + 0x60) + 0xa0))(), lVar5 != 0)) {
    this_00 = *(FRHIResource **)(lVar5 + 0x20);
    this_01 = *(FRHIResource **)(lVar6 + 0x18);
    if (this_01 != this_00) {
      *(FRHIResource **)(lVar6 + 0x18) = this_00;
      if (this_00 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(this_00);
      }
      if (this_01 != (FRHIResource *)0x0) {
        FRHIResource::Release(this_01);
      }
    }
  }
  return;
}

// operator() @ 14916d1b0

void __thiscall
`UNiagaraDataInterfaceIntRenderTarget2D::GetVMExternalFunction'::__l5::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int local_30 [4];
  int local_20 [2];
  FUserPtrHandler<FNDIIntRenderTarget2DInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<FNDIIntRenderTarget2DInstanceData_GameThread>::
  FUserPtrHandler<FNDIIntRenderTarget2DInstanceData_GameThread>(&local_18,param_1);
  iVar4 = 0;
  local_30[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  iVar3 = local_30[0] * param_1->PerInstanceFnInstanceIdx;
  local_20[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  if (0 < param_1->NumInstances) {
    pfVar1 = pfVar1 + iVar3;
    pfVar2 = pfVar2 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
    do {
      iVar4 = iVar4 + 1;
      *pfVar1 = (float)((local_18.Ptr)->Size).field0_0x0._s_0.X;
      *pfVar2 = (float)((local_18.Ptr)->Size).field0_0x0._s_0.Y;
      pfVar1 = pfVar1 + local_30[0];
      pfVar2 = pfVar2 + local_20[0];
    } while (iVar4 < param_1->NumInstances);
  }
  return;
}

// operator() @ 14916da10

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceIntRenderTarget2D::PerInstanceTickPostSimulate'::__l9::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRHITexture *pFVar1;
  FRHITexture *this_00;
  bool bVar2;
  FNDIIntRenderTarget2DInstanceData_RenderThread *pFVar3;
  longlong lVar4;
  longlong local_res8;
  
  pFVar3 = TMapBase<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,0>_>
                   *)(*(longlong *)this + 0x10),*(ulong64 *)((longlong)this + 8));
  if ((pFVar3 == (FNDIIntRenderTarget2DInstanceData_RenderThread *)0x0) &&
     (local_res8 = (longlong)this + 8,
     bVar2 = ``UNiagaraDataInterfaceIntRenderTarget2D::PerInstanceTickPostSimulate'::__l9::
             <lambda_1>::operator()'::__l2::<lambda_1>::operator()(&local_res8), !bVar2)) {
    return;
  }
  (pFVar3->Size).field0_0x0 = *(TIntVector2<int>_u_0 *)((longlong)this + 0x10);
  pFVar1 = (pFVar3->TextureRHI).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    (pFVar3->TextureRHI).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  if ((*(longlong **)((longlong)this + 0x60) != (longlong *)0x0) &&
     (lVar4 = (**(code **)(**(longlong **)((longlong)this + 0x60) + 0xa0))(), lVar4 != 0)) {
    pFVar1 = *(FRHITexture **)(lVar4 + 0x20);
    this_00 = (pFVar3->TextureRHI).Reference;
    if (this_00 != pFVar1) {
      (pFVar3->TextureRHI).Reference = pFVar1;
      if (pFVar1 != (FRHITexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar1);
      }
      if (this_00 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
    }
  }
  return;
}

// operator() @ 14916e590

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceIntRenderTarget2D::GetVMExternalFunction'::__l9::<lambda_2>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  TRHIGlobal<int> TVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int local_50 [2];
  int local_48 [2];
  FUserPtrHandler<FNDIIntRenderTarget2DInstanceData_GameThread> local_40;
  
  VectorVM::FUserPtrHandler<FNDIIntRenderTarget2DInstanceData_GameThread>::
  FUserPtrHandler<FNDIIntRenderTarget2DInstanceData_GameThread>(&local_40,param_1);
  local_48[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_48);
  iVar4 = local_48[0];
  lVar8 = (longlong)local_48[0];
  local_48[0] = 0;
  pfVar5 = pfVar5 + iVar4 * param_1->PerInstanceFnInstanceIdx;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_48);
  lVar9 = (longlong)local_48[0];
  local_50[0] = 0;
  pfVar6 = pfVar6 + local_48[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_50);
  iVar10 = 0;
  iVar4 = param_1->NumInstances;
  pfVar7 = pfVar7 + local_50[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < iVar4) {
    do {
      fVar1 = *pfVar5;
      fVar2 = *pfVar6;
      pfVar5 = pfVar5 + lVar8;
      pfVar6 = pfVar6 + lVar9;
      if ((((local_40.Ptr == (FNDIIntRenderTarget2DInstanceData_GameThread *)0x0) || (iVar4 != 1))
          || ((int)fVar1 < 0)) || ((int)fVar2 < 0)) {
        *pfVar7 = 0.0;
      }
      else {
        *pfVar7 = -NAN;
        iVar4 = (int)((float)(int)fVar1 *
                     NiagaraDataInterfaceRenderTargetCommon::GResolutionMultiplier);
        TVar3 = GRHIGlobals.MaxTextureDimensions;
        if (iVar4 < GRHIGlobals.MaxTextureDimensions.Value) {
          TVar3.Value = iVar4;
        }
        iVar4 = 1;
        if (1 < TVar3.Value) {
          iVar4 = TVar3.Value;
        }
        ((local_40.Ptr)->Size).field0_0x0._s_0.X = iVar4;
        iVar4 = (int)((float)(int)fVar2 *
                     NiagaraDataInterfaceRenderTargetCommon::GResolutionMultiplier);
        TVar3 = GRHIGlobals.MaxTextureDimensions;
        if (iVar4 < GRHIGlobals.MaxTextureDimensions.Value) {
          TVar3.Value = iVar4;
        }
        iVar4 = 1;
        if (1 < TVar3.Value) {
          iVar4 = TVar3.Value;
        }
        ((local_40.Ptr)->Size).field0_0x0._s_0.Y = iVar4;
      }
      iVar4 = param_1->NumInstances;
      pfVar7 = pfVar7 + local_50[0];
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar4);
  }
  return;
}

// BuildShaderParameters @ 149170ed0

void __thiscall
UNiagaraDataInterfaceIntRenderTarget2D::BuildShaderParameters
          (UNiagaraDataInterfaceIntRenderTarget2D *this,FNiagaraShaderParametersBuilder *param_1)

{
  int *piVar1;
  uint uVar2;
  FShaderParametersMetadataBuilder *pFVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  FScriptContainerElement *pFVar6;
  wchar_t *pwVar7;
  
  pFVar3 = param_1->MetadataBuilder;
  if ((param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.AllocatorInstance.Data
    ;
  }
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0xf & 0xfffffff0;
  pFVar5 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceIntRenderTarget2D::FShaderParameters>
           ::GetStructMetadata();
  piVar1 = &(pFVar3->Members).ArrayMax;
  iVar4 = (pFVar3->Members).ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)pFVar3,piVar1);
  }
  (pFVar3->Members).ArrayNum = iVar4 + 1;
  uVar2 = pFVar3->NextMemberOffset;
  pFVar6 = (pFVar3->Members).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
  *(wchar_t **)(pFVar6 + 8) = L"";
  *(FShaderParametersMetadata **)(pFVar6 + 0x28) = pFVar5;
  *(wchar_t **)pFVar6 = pwVar7;
  *(undefined4 *)(pFVar6 + 0x10) = 0x7b;
  *(uint *)(pFVar6 + 0x14) = uVar2;
  *(undefined2 *)(pFVar6 + 0x18) = 0x14;
  *(undefined4 *)(pFVar6 + 0x1c) = 1;
  *(undefined8 *)(pFVar6 + 0x20) = 1;
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x20;
  return;
}

// CanBeInCluster @ 149171590

bool __thiscall
UNiagaraDataInterfaceIntRenderTarget2D::CanBeInCluster(UNiagaraDataInterfaceIntRenderTarget2D *this)

{
  return false;
}

// CanExecuteOnTarget @ 149171880

bool __thiscall
UNiagaraDataInterfaceIntRenderTarget2D::CanExecuteOnTarget
          (UNiagaraDataInterfaceIntRenderTarget2D *this,ENiagaraSimTarget param_1)

{
  return true;
}

// CanExposeVariables @ 1491718d0

bool __thiscall
UNiagaraDataInterfaceIntRenderTarget2D::CanExposeVariables
          (UNiagaraDataInterfaceIntRenderTarget2D *this)

{
  return true;
}

// CopyToInternal @ 149173f10

bool __thiscall
UNiagaraDataInterfaceIntRenderTarget2D::CopyToInternal
          (UNiagaraDataInterfaceIntRenderTarget2D *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  bVar2 = UNiagaraDataInterface::CopyToInternal((UNiagaraDataInterface *)this,param_1);
  if (!bVar2) {
    return false;
  }
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      *(TIntPoint<int>_u_0 *)(param_1 + 1) = (this->Size).field0_0x0;
      FNiagaraVariable::operator=
                ((FNiagaraVariable *)&param_1[1]._padding_,
                 &(this->RenderTargetUserParameter).Parameter);
      return true;
    }
    pFVar4 = GetTypeName<UNiagaraDataInterfaceIntRenderTarget2D>(&local_28);
    pwVar5 = L"";
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pFVar4 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar5,pwVar6);
  }
  pFVar4 = GetTypeName<UNiagaraDataInterfaceIntRenderTarget2D>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

// DestroyPerInstanceData @ 149177950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceIntRenderTarget2D::DestroyPerInstanceData
          (UNiagaraDataInterfaceIntRenderTarget2D *this,void *param_1,
          FNiagaraSystemInstance *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_b8 [32];
  code *local_98 [2];
  undefined **local_88;
  longlong lStack_80;
  ulong64 local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  longlong lStack_50;
  ulong64 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  NiagaraDataInterfaceRenderTargetCommon::
  ReleaseRenderTarget<FNDIIntRenderTarget2DInstanceData_GameThread>(param_2,param_1);
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UNiagaraDataInterfaceIntRenderTarget2D::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_78 = param_2->ID;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNiagaraDataInterfaceIntRenderTarget2D::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_70 = (undefined ***)0x0;
  lStack_80 = lVar1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceIntRenderTarget2D::DestroyPerInstanceData_::__l2::TSTR_FNiagaraDIDestroyInstanceData630>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_58 = local_88;
    lStack_50 = lStack_80;
    local_48 = local_78;
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`UNiagaraDataInterfaceIntRenderTarget2D::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData630>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar4);
    uVar6 = (ulonglong)local_38;
    if (2 < uVar6) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        pppuVar5 = (undefined ***)(local_68 + 0x10);
        if (local_40 != (undefined ***)0x0) {
          pppuVar5 = local_40;
        }
        (*(code *)(*pppuVar5)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    pppuVar5 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar5 = local_70;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  return;
}

// Equals @ 1491791f0

bool __thiscall
UNiagaraDataInterfaceIntRenderTarget2D::Equals
          (UNiagaraDataInterfaceIntRenderTarget2D *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  bVar2 = UNiagaraDataInterface::Equals((UNiagaraDataInterface *)this,param_1);
  if (bVar2) {
    if (param_1 == (UNiagaraDataInterface *)0x0) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceIntRenderTarget2D_const_>(&local_28);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceIntRenderTarget2D_const_>(&local_28);
      pwVar5 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
    if (((((int)param_1[1]._padding_ == (this->Size).field0_0x0._s_0.X) &&
         (*(int *)((longlong)&param_1[1]._padding_ + 4) == (this->Size).field0_0x0._s_0.Y)) &&
        ((this->RenderTargetUserParameter).Parameter._padding_ == param_1[1]._padding_)) &&
       ((int)(this->RenderTargetUserParameter).Parameter._padding_ == (int)param_1[1]._padding_)) {
      return true;
    }
  }
  return false;
}

// GetExposedVariableValue @ 14917e450

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceIntRenderTarget2D::GetExposedVariableValue
          (UNiagaraDataInterfaceIntRenderTarget2D *this,FNiagaraVariableBase *param_1,void *param_2,
          FNiagaraSystemInstance *param_3,void *param_4)

{
  FNiagaraTypeDefinition *pFVar1;
  
  if (param_1->Name != (FName)0x0) {
    pFVar1 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
    if (((((pFVar1->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) &&
         (param_1->Name == ExposedRTVar.Name)) &&
        ((param_1->TypeDefHandle).RegisteredTypeIndex ==
         ExposedRTVar.TypeDefHandle.RegisteredTypeIndex)) &&
       ((param_2 != (void *)0x0 && (*(longlong *)((longlong)param_2 + 0x10) != 0)))) {
      *(longlong *)param_4 = *(longlong *)((longlong)param_2 + 0x10);
      return true;
    }
  }
  return false;
}

// GetExposedVariables @ 14917e5a0

void __thiscall
UNiagaraDataInterfaceIntRenderTarget2D::GetExposedVariables
          (UNiagaraDataInterfaceIntRenderTarget2D *this,
          TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  *(FName *)(pFVar1 + (longlong)iVar2 * 0xc) = ExposedRTVar.Name;
  *(int *)(pFVar1 + (longlong)iVar2 * 0xc + 8) = ExposedRTVar.TypeDefHandle.RegisteredTypeIndex;
  return;
}

// GetPrivateStaticClass @ 14917fc50

UClass * __cdecl UNiagaraDataInterfaceIntRenderTarget2D::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceIntRenderTarget2D.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceIntRenderTarget2D",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceIntRenderTarget2D.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceIntRenderTarget2D,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceIntRenderTarget2D>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceIntRenderTarget2D>,local_res8,
               UNiagaraDataInterfaceRWBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceIntRenderTarget2D.InnerSingleton;
}

// GetVMExternalFunction @ 149181d20

void __thiscall
UNiagaraDataInterfaceIntRenderTarget2D::GetVMExternalFunction
          (UNiagaraDataInterfaceIntRenderTarget2D *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  if (param_1->Name == NDIIntRenderTarget2DLocal::GetSizeFunctionName) {
    local_48 = (undefined1  [8])0x0;
    local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_40.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    local_18 = &local_40;
    puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceIntRenderTarget2D::GetVMExternalFunction'::`5'::<lambda_1>_>
                 ::_vftable_;
      puVar1[3] = this;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
  }
  else {
    if (param_1->Name != NDIIntRenderTarget2DLocal::SetSizeFunctionName) {
      return;
    }
    local_48 = (undefined1  [8])0x0;
    local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_40.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    local_18 = &local_40;
    puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceIntRenderTarget2D::GetVMExternalFunction'::`9'::<lambda_2>_>
                 ::_vftable_;
      puVar1[3] = this;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
  }
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  return;
}

// HasPostSimulateTick @ 149182520

bool __thiscall
UNiagaraDataInterfaceIntRenderTarget2D::HasPostSimulateTick
          (UNiagaraDataInterfaceIntRenderTarget2D *this)

{
  return true;
}

// InitPerInstanceData @ 149184ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceIntRenderTarget2D::InitPerInstanceData
          (UNiagaraDataInterfaceIntRenderTarget2D *this,void *param_1,
          FNiagaraSystemInstance *param_2)

{
  FNiagaraParameterDirectBinding<UObject_*> *this_00;
  FWeakObjectPtr FVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  FWeakObjectPtr FVar5;
  FWeakObjectPtr FVar6;
  FWeakObjectPtr FVar7;
  void *_Src;
  FWeakObjectPtr FVar8;
  code *pcVar9;
  TRHIGlobal<int> TVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  undefined1 uVar14;
  int iVar15;
  FWeakObjectPtr FVar16;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar17;
  ForAnyElementType FVar18;
  ulonglong uVar19;
  undefined1 auStackY_168 [32];
  FWeakObjectPtr local_e0;
  undefined8 local_d8;
  int local_d0;
  FWeakObjectPtr local_c8;
  undefined1 local_c0 [24];
  FWeakObjectPtr local_a8;
  ForAnyElementType FStack_a0;
  int local_98;
  int iStack_94;
  ForAnyElementType local_90;
  FWeakObjectPtr local_88;
  FWeakObjectPtr local_78;
  ForAnyElementType FStack_70;
  int local_68;
  int iStack_64;
  ForAnyElementType local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if ((this->_padding_ == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Proxy",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceIntRenderTarget2D.cpp"
                          ,0x23c,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    uVar14 = (*pcVar9)();
    return (bool)uVar14;
  }
  FVar16.ObjectIndex = 0;
  FVar16.ObjectSerialNumber = 0;
  this_00 = (FNiagaraParameterDirectBinding<UObject_*> *)((longlong)param_1 + 0x18);
  *(undefined4 *)((longlong)param_1 + 10) = 0;
  *(undefined2 *)((longlong)param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0x1d;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  this_00->UObjectOffset = -1;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  iVar15 = FNiagaraTypeDefinitionHandle::Register
                     ((FNiagaraTypeDefinitionHandle *)((longlong)param_1 + 0x30),
                      &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)param_1 + 0x30) = iVar15;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  if ((NiagaraDataInterfaceRenderTargetCommon::GIgnoreCookedOut == 0) ||
     (((uint)this->_padding_ >> 2 & 1) != 0)) {
    if ((GPixelFormats[*(byte *)((longlong)param_1 + 8)].Capabilities & TypedUAVStore) == None) {
      return false;
    }
    iVar15 = (int)((float)(this->Size).field0_0x0._s_0.X *
                  NiagaraDataInterfaceRenderTargetCommon::GResolutionMultiplier);
    TVar10 = GRHIGlobals.MaxTextureDimensions;
    if (iVar15 < GRHIGlobals.MaxTextureDimensions.Value) {
      TVar10.Value = iVar15;
    }
    iVar15 = 1;
    if (1 < TVar10.Value) {
      iVar15 = TVar10.Value;
    }
    *(int *)param_1 = iVar15;
    iVar15 = (int)((float)(this->Size).field0_0x0._s_0.Y *
                  NiagaraDataInterfaceRenderTargetCommon::GResolutionMultiplier);
    TVar10 = GRHIGlobals.MaxTextureDimensions;
    if (iVar15 < GRHIGlobals.MaxTextureDimensions.Value) {
      TVar10.Value = iVar15;
    }
    iVar15 = 1;
    if (1 < TVar10.Value) {
      iVar15 = TVar10.Value;
    }
    *(int *)((longlong)param_1 + 4) = iVar15;
    FNiagaraParameterDirectBinding<UObject_*>::Init
              (this_00,(FNiagaraParameterStore *)local_c0,
               (FNiagaraVariable *)&param_2->InstanceParameters);
    UpdateInstanceTexture(this,param_2,param_1);
    FVar5 = (FWeakObjectPtr)this->_padding_;
    if ((FVar5 == (FWeakObjectPtr)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypedProxy != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                            ,0x3a0,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
    uVar11 = *(undefined4 *)&param_2->ID;
    uVar12 = *(undefined4 *)((longlong)&param_2->ID + 4);
    if (*(UTextureRenderTarget **)((longlong)param_1 + 0x10) != (UTextureRenderTarget *)0x0) {
      FVar16 = (FWeakObjectPtr)
               UTextureRenderTarget::GameThread_GetRenderTargetResource
                         (*(UTextureRenderTarget **)((longlong)param_1 + 0x10));
    }
    FVar6 = *(FWeakObjectPtr *)param_1;
    FVar1 = *(FWeakObjectPtr *)((longlong)param_1 + 0x28);
    uVar14 = *(undefined1 *)((longlong)param_1 + 8);
    uVar2 = *(undefined1 *)((longlong)param_1 + 9);
    FVar7 = *(FWeakObjectPtr *)((longlong)param_1 + 0x10);
    _Src = *(void **)((longlong)param_1 + 0x38);
    iVar15 = this_00->UObjectOffset;
    FVar8 = *(FWeakObjectPtr *)((longlong)param_1 + 0x20);
    iVar3 = *(int *)((longlong)param_1 + 0x40);
    iVar4 = *(int *)((longlong)param_1 + 0x30);
    local_e0.ObjectIndex = 0;
    local_e0.ObjectSerialNumber = 0;
    local_d8 = CONCAT44(local_d8._4_4_,iVar3);
    if (iVar3 == 0) {
      local_d8 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar3,0,(ForAnyElementType *)&local_e0,iVar3,(int *)((longlong)&local_d8 + 4));
      memcpy((void *)local_e0,_Src,(longlong)iVar3);
    }
    local_d0 = *(int *)((longlong)param_1 + 0x48);
    local_c0._8_4_ = 0;
    local_c0._12_4_ = 0;
    local_c8 = FVar16;
    local_90.Data = FMemory::Malloc(0x70,8);
    *(undefined ***)local_90.Data =
         &UE::Core::Private::Function::
          TFunction_OwnedObject<`UNiagaraDataInterfaceIntRenderTarget2D::InitPerInstanceData'::`2'::<lambda_1>,1,1>
          ::_vftable_;
    *(FWeakObjectPtr *)((longlong)local_90.Data + 8) = FVar5;
    ((FWeakObjectPtr *)((longlong)local_90.Data + 0x10))->ObjectIndex = uVar11;
    ((FWeakObjectPtr *)((longlong)local_90.Data + 0x10))->ObjectSerialNumber = uVar12;
    *(FWeakObjectPtr *)((longlong)local_90.Data + 0x18) = FVar6;
    *(undefined1 *)&((FWeakObjectPtr *)((longlong)local_90.Data + 0x20))->ObjectIndex = uVar14;
    *(undefined1 *)
     ((longlong)&((FWeakObjectPtr *)((longlong)local_90.Data + 0x20))->ObjectIndex + 1) = uVar2;
    *(FWeakObjectPtr *)((longlong)local_90.Data + 0x28) = FVar7;
    ((FWeakObjectPtr *)((longlong)local_90.Data + 0x30))->ObjectIndex = iVar15;
    *(FWeakObjectPtr *)((longlong)local_90.Data + 0x38) = FVar8;
    *(FWeakObjectPtr *)((longlong)local_90.Data + 0x40) = FVar1;
    ((FWeakObjectPtr *)((longlong)local_90.Data + 0x48))->ObjectIndex = iVar4;
    ((FWeakObjectPtr *)((longlong)local_90.Data + 0x50))->ObjectIndex = 0;
    ((FWeakObjectPtr *)((longlong)local_90.Data + 0x50))->ObjectSerialNumber = 0;
    *(FWeakObjectPtr *)((longlong)local_90.Data + 0x50) = local_e0;
    local_e0.ObjectIndex = 0;
    local_e0.ObjectSerialNumber = 0;
    ((FWeakObjectPtr *)((longlong)local_90.Data + 0x58))->ObjectIndex = (int)local_d8;
    ((FWeakObjectPtr *)((longlong)local_90.Data + 0x58))->ObjectSerialNumber = local_d8._4_4_;
    local_d8 = 0;
    ((FWeakObjectPtr *)((longlong)local_90.Data + 0x60))->ObjectIndex = local_d0;
    *(FWeakObjectPtr *)((longlong)local_90.Data + 0x68) = local_c8;
    if ((FWeakObjectPtr *)((longlong)local_90.Data + 8) != (FWeakObjectPtr *)0x0) {
      local_c0._8_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UNiagaraDataInterfaceIntRenderTarget2D::InitPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
           ::Call;
    }
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceIntRenderTarget2D::InitPerInstanceData_::__l2::TSTR_FUpdateData599>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)(local_c0 + 8));
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_88.ObjectIndex = local_c0._8_4_;
      local_88.ObjectSerialNumber = local_c0._12_4_;
      local_60.Data = local_90.Data;
      local_90.Data = (FScriptContainerElement *)0x0;
      local_78 = local_a8;
      FStack_70.Data = FStack_a0.Data;
      local_68 = local_98;
      iStack_64 = iStack_94;
      local_c0._8_4_ = 0;
      local_c0._12_4_ = 0;
      local_58 = 2;
      pFVar17 = (FRenderCommandTag *)
                TRenderCommandTag<`UNiagaraDataInterfaceIntRenderTarget2D::InitPerInstanceData'::__l2::TSTR_FUpdateData599>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)&local_88,pFVar17);
      uVar19 = (ulonglong)local_58;
      if ((2 < uVar19) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar19] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if (local_88 != (FWeakObjectPtr)0x0) {
          FVar18.Data = (FScriptContainerElement *)&local_78;
          if ((FWeakObjectPtr *)local_60.Data != (FWeakObjectPtr *)0x0) {
            FVar18.Data = local_60.Data;
          }
          (**(code **)((longlong)*(FWeakObjectPtr *)FVar18.Data + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar19])(&local_88);
      }
    }
    if ((FWeakObjectPtr)local_c0._8_8_ != (FWeakObjectPtr)0x0) {
      FVar18.Data = (FScriptContainerElement *)&local_a8;
      if ((FWeakObjectPtr *)local_90.Data != (FWeakObjectPtr *)0x0) {
        FVar18.Data = local_90.Data;
      }
      (**(code **)((longlong)*(FWeakObjectPtr *)FVar18.Data + 0x10))();
    }
    if (local_e0 != (FWeakObjectPtr)0x0) {
      FMemory::Free((void *)local_e0);
    }
  }
  return true;
}

// PerInstanceDataSize @ 149186750

int __thiscall
UNiagaraDataInterfaceIntRenderTarget2D::PerInstanceDataSize
          (UNiagaraDataInterfaceIntRenderTarget2D *this)

{
  return 0x50;
}

// PerInstanceTickPostSimulate @ 1491883f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceIntRenderTarget2D::PerInstanceTickPostSimulate
          (UNiagaraDataInterfaceIntRenderTarget2D *this,void *param_1,
          FNiagaraSystemInstance *param_2,float param_3)

{
  code *pcVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar5;
  code **ppcVar6;
  ulonglong uVar7;
  undefined1 auStack_138 [32];
  code *local_118;
  code *local_110;
  code *local_108;
  undefined1 local_100;
  undefined1 local_ff;
  code *local_f8;
  undefined4 local_f0;
  code *local_e8;
  FNiagaraVariable local_e0;
  undefined4 local_c0;
  FTextureRenderTargetResource *local_b8;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  if ((NiagaraDataInterfaceRenderTargetCommon::GIgnoreCookedOut == 0) ||
     (((uint)this->_padding_ >> 2 & 1) != 0)) {
    UpdateInstanceTexture(this,param_2,param_1);
    pcVar1 = (code *)this->_padding_;
    if ((pcVar1 == (code *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedProxy != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                           ,0x3a0,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    local_b8 = (FTextureRenderTargetResource *)0x0;
    pcVar2 = (code *)param_2->ID;
    if (*(UTextureRenderTarget **)((longlong)param_1 + 0x10) != (UTextureRenderTarget *)0x0) {
      local_b8 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                           (*(UTextureRenderTarget **)((longlong)param_1 + 0x10));
    }
    local_108 = *(code **)param_1;
    local_100 = *(undefined1 *)((longlong)param_1 + 8);
    local_ff = *(undefined1 *)((longlong)param_1 + 9);
    local_f8 = *(code **)((longlong)param_1 + 0x10);
    local_f0 = *(undefined4 *)((longlong)param_1 + 0x18);
    local_e8 = *(code **)((longlong)param_1 + 0x20);
    local_118 = pcVar1;
    local_110 = pcVar2;
    FNiagaraVariable::FNiagaraVariable(&local_e0,(FNiagaraVariable *)((longlong)param_1 + 0x28));
    local_c0 = *(undefined4 *)((longlong)param_1 + 0x48);
    local_a8[0] = (code *)0x0;
    local_80 = FMemory::Malloc(0x70,8);
    *local_80 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UNiagaraDataInterfaceIntRenderTarget2D::PerInstanceTickPostSimulate'::`9'::<lambda_1>,1,1>
                         ::_vftable_;
    local_80[1] = local_118;
    local_80[2] = local_110;
    local_80[3] = local_108;
    *(undefined1 *)(local_80 + 4) = local_100;
    *(undefined1 *)((longlong)local_80 + 0x21) = local_ff;
    local_80[5] = local_f8;
    *(undefined4 *)(local_80 + 6) = local_f0;
    local_80[7] = local_e8;
    local_80[8] = (code *)local_e0._padding_;
    *(undefined4 *)(local_80 + 9) = (undefined4)local_e0._padding_;
    local_80[10] = (code *)0x0;
    local_80[10] = (code *)local_e0.VarData.AllocatorInstance.Data;
    local_e0.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_80 + 0xb) = local_e0.VarData.ArrayNum;
    *(int *)((longlong)local_80 + 0x5c) = local_e0.VarData.ArrayMax;
    local_e0.VarData.ArrayNum = 0;
    local_e0.VarData.ArrayMax = 0;
    *(undefined4 *)(local_80 + 0xc) = local_c0;
    local_80[0xd] = (code *)local_b8;
    if (local_80 + 1 != (code **)0x0) {
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UNiagaraDataInterfaceIntRenderTarget2D::PerInstanceTickPostSimulate'::__l9::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceIntRenderTarget2D::PerInstanceTickPostSimulate_::__l9::TSTR_FUpdateData676>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
      pFVar5 = (FRenderCommandTag *)
               TRenderCommandTag<`UNiagaraDataInterfaceIntRenderTarget2D::PerInstanceTickPostSimulate'::__l9::TSTR_FUpdateData676>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar5);
      uVar7 = (ulonglong)local_48;
      if ((2 < uVar7) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_78._0_8_ != (code *)0x0) {
          ppcVar6 = (code **)(local_78 + 0x10);
          if (local_50 != (code **)0x0) {
            ppcVar6 = local_50;
          }
          (**(code **)(*ppcVar6 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7])(local_78);
      }
    }
    if (local_a8[0] != (code *)0x0) {
      ppcVar6 = local_a8 + 2;
      if (local_80 != (code **)0x0) {
        ppcVar6 = local_80;
      }
      (**(code **)(*ppcVar6 + 0x10))();
    }
    if (local_e0.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.VarData.AllocatorInstance.Data);
    }
  }
  return false;
}

// PostInitProperties @ 149188980

void __thiscall
UNiagaraDataInterfaceIntRenderTarget2D::PostInitProperties
          (UNiagaraDataInterfaceIntRenderTarget2D *this)

{
  TObjectPtr<UObject>_u_0 local_res8;
  TObjectPtr<UObject>_u_0 local_38;
  FNiagaraTypeDefinitionHandle local_30;
  undefined8 local_2c;
  undefined4 local_24;
  TObjectPtr<UObject>_u_0 local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined8 local_14;
  undefined4 local_c;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x10) != 0) {
    local_38 = (TObjectPtr<UObject>_u_0)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_38.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_38.DebugPtr);
    }
    local_30.RegisteredTypeIndex._2_1_ = 0;
    local_30.RegisteredTypeIndex._0_2_ = 1;
    local_2c = 0xffffffffffffffff;
    local_24 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_38.ObjectPtr);
    FNiagaraTypeRegistry::Register
              ((FNiagaraTypeDefinition *)&local_38.ObjectPtr,AllowParameter|AllowAnyVariable);
    ::FName::FName((FName *)&local_res8.ObjectPtr,L"RenderTarget");
    local_20.DebugPtr = (UObject *)Z_Construct_UClass_UTexture_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_20.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable(local_20.DebugPtr);
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffffffffffff;
    local_c = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_20.ObjectPtr);
    local_38 = local_res8;
    ExposedRTVar.TypeDefHandle.RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register
                   (&local_30,(FNiagaraTypeDefinition *)&local_20.ObjectPtr);
    ExposedRTVar.Name = (FName)local_38.ObjectPtr.field0_0x0;
  }
  return;
}

// ProvidePerInstanceDataForRenderThread @ 1491894a0

void __thiscall
UNiagaraDataInterfaceIntRenderTarget2D::ProvidePerInstanceDataForRenderThread
          (UNiagaraDataInterfaceIntRenderTarget2D *this,void *param_1,void *param_2,ulong64 *param_3
          )

{
  return;
}

// SetShaderParameters @ 14918dc80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceIntRenderTarget2D::SetShaderParameters
          (UNiagaraDataInterfaceIntRenderTarget2D *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  int *piVar1;
  FNiagaraDataInterfaceProxy *pFVar2;
  uchar *puVar3;
  FRDGBuilder *this_00;
  FRHITexture *pFVar4;
  longlong lVar5;
  FResource *pFVar6;
  code *pcVar7;
  float fVar8;
  bool bVar9;
  int iVar10;
  ulong64 uVar11;
  FNDIIntRenderTarget2DInstanceData_RenderThread *pFVar12;
  FShaderParametersMetadata *pFVar13;
  FRDGTexture *pFVar14;
  TRefCountPtr<IPooledRenderTarget> TVar15;
  FRDGTextureUAV *pFVar16;
  FRDGExternalAccessQueue *pFVar17;
  uint uVar18;
  longlong *local_res10;
  FRDGTextureUAVDesc local_48;
  
  bVar9 = IsInRenderingThread();
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceIntRenderTarget2D.cpp"
                         ,0x20e,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataInterfaceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x1c1,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar2 = param_1->DataInterfaceProxy;
  uVar11 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  pFVar12 = TMapBase<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,0>_>
            ::FindChecked((TMapBase<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,0>_>
                           *)(pFVar2 + 1),uVar11);
  uVar18 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar13 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceIntRenderTarget2D::FShaderParameters>
            ::GetStructMetadata();
  fVar8 = __real_3f800000;
  puVar3 = param_1->BaseParameters;
  param_1->ParametersOffset = pFVar13->Size + uVar18;
  *(float *)(puVar3 + uVar18) = (float)(pFVar12->Size).field0_0x0._s_0.X;
  *(float *)(puVar3 + (ulonglong)uVar18 + 4) = (float)(pFVar12->Size).field0_0x0._s_0.Y;
  *(float *)(puVar3 + (ulonglong)uVar18 + 8) = fVar8 / (float)(pFVar12->Size).field0_0x0._s_0.X;
  *(float *)(puVar3 + (ulonglong)uVar18 + 0xc) = fVar8 / (float)(pFVar12->Size).field0_0x0._s_0.Y;
  bVar9 = FNiagaraDataInterfaceSetShaderParametersContext::IsResourceBound
                    (param_1,puVar3 + (ulonglong)uVar18 + 0x10);
  if (bVar9) {
    pFVar12->bWroteThisFrame = true;
    pFVar12->bReadThisFrame = true;
    this_00 = param_1->GraphBuilder;
    if ((pFVar12->TransientRDGTexture == (FRDGTexture *)0x0) &&
       (pFVar4 = (pFVar12->TextureRHI).Reference, pFVar4 != (FRHITexture *)0x0)) {
      pFVar14 = FRDGBuilder::FindExternalTexture(this_00,pFVar4);
      pFVar12->TransientRDGTexture = pFVar14;
      if (pFVar14 == (FRDGTexture *)0x0) {
        TVar15 = CreateRenderTarget((FRHITexture *)&local_res10,
                                    (wchar_t *)(pFVar12->TextureRHI).Reference);
        pFVar14 = FRDGBuilder::RegisterExternalTexture
                            (this_00,(TRefCountPtr<IPooledRenderTarget> *)TVar15.Reference,None);
        pFVar12->TransientRDGTexture = pFVar14;
        if (local_res10 != (longlong *)0x0) {
          (**(code **)(*local_res10 + 0x38))();
        }
      }
      local_48.Texture = pFVar12->TransientRDGTexture;
      local_48._padding_._1_1_ = 0;
      local_48._padding_._0_1_ = ((local_48.Texture)->Desc).field_0x34;
      local_48._padding_._2_4_ = 0;
      local_48._padding_._6_1_ = 0;
      local_48._padding_._0_1_ = '\0';
      FRDGUserValidation::ValidateCreateUAV(&this_00->UserValidation,&local_48);
      pFVar14 = local_48.Texture;
      pFVar16 = FMemStackBase::Alloc((FMemStackBase *)&this_00->_padding_,0x50,8);
      lVar5 = pFVar14->_padding_;
      *(byte *)&pFVar16->_padding_ = (byte)pFVar16->_padding_ & 0xfe;
      pFVar16->_padding_ = lVar5;
      pFVar16->_padding_ = 0;
      *(undefined1 *)&pFVar16->_padding_ = 0;
      *(undefined8 *)((longlong)&pFVar16->_padding_ + 4) = 0xffffffffffffffff;
      *(undefined1 *)&pFVar16->_padding_ = 0;
      pFVar16->_padding_ = (longlong)&___7FRDGTextureUAV__6B_;
      *(undefined1 *)&(pFVar16->Desc)._padding_ = (undefined1)local_48._padding_;
      *(undefined1 *)((longlong)&(pFVar16->Desc)._padding_ + 1) = local_48._padding_._1_1_;
      *(undefined2 *)((longlong)&(pFVar16->Desc)._padding_ + 2) = local_48._padding_._2_2_;
      *(undefined2 *)((longlong)&(pFVar16->Desc)._padding_ + 4) = local_48._padding_._4_2_;
      *(undefined1 *)&(pFVar16->Desc)._padding_ = 0;
      *(undefined1 *)((longlong)&(pFVar16->Desc)._padding_ + 6) = local_48._padding_._6_1_;
      *(char *)&(pFVar16->Desc)._padding_ = (char)local_48._padding_;
      if ((char)local_48._padding_ != '\0') {
        *(undefined1 *)((longlong)&(pFVar16->Desc)._padding_ + 7) = local_48._padding_._7_1_;
      }
      piVar1 = &(this_00->Views).Array.ArrayMax;
      (pFVar16->Desc).Texture = local_48.Texture;
      iVar10 = (this_00->Views).Array.ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                           (0x808,(ForElementType<FRDGView_*> *)&this_00->Views,piVar1);
      }
      (this_00->Views).Array.ArrayNum = iVar10 + 1;
      (this_00->Views).Array.AllocatorInstance.Data[iVar10] = (FRDGView *)pFVar16;
      *(int *)((longlong)&pFVar16->_padding_ + 4) = (this_00->Views).Array.ArrayNum + -1;
      FRDGUserValidation::ValidateCreateUAV(&this_00->UserValidation,pFVar16);
      pFVar12->TransientRDGUAV = pFVar16;
      FRDGBuilder::UseInternalAccessMode
                (this_00,(FRDGViewableResource *)pFVar12->TransientRDGTexture);
      pFVar17 = FNiagaraDataInterfaceSetShaderParametersContext::GetRDGExternalAccessQueue(param_1);
      pFVar14 = pFVar12->TransientRDGTexture;
      if (pFVar14 != (FRDGTexture *)0x0) {
        piVar1 = &(pFVar17->Resources).ArrayMax;
        iVar10 = (pFVar17->Resources).ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
                             (0x810,(ForElementType<FRDGExternalAccessQueue::FResource> *)pFVar17,
                              piVar1);
        }
        (pFVar17->Resources).ArrayNum = iVar10 + 1;
        pFVar6 = (pFVar17->Resources).AllocatorInstance.Data;
        pFVar6[iVar10].Resource = (FRDGViewableResource *)pFVar14;
        pFVar6[iVar10].Access = SRVMask;
        pFVar6[iVar10].Pipelines = Graphics;
      }
    }
    pFVar16 = pFVar12->TransientRDGUAV;
    if (pFVar16 == (FRDGTextureUAV *)0x0) {
      pFVar16 = FNiagaraGpuComputeDispatchInterface::GetEmptyTextureUAV
                          (param_1->ComputeDispatchInterface,this_00,PF_R32_SINT,Texture2D);
    }
    *(FRDGTextureUAV **)(puVar3 + (ulonglong)uVar18 + 0x10) = pFVar16;
  }
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceIntRenderTarget2D @ 14918ef20

void __cdecl
UNiagaraDataInterfaceIntRenderTarget2D::StaticRegisterNativesUNiagaraDataInterfaceIntRenderTarget2D
          (void)

{
  return;
}

// UpdateInstanceTexture @ 14918ff00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceIntRenderTarget2D::UpdateInstanceTexture
          (UNiagaraDataInterfaceIntRenderTarget2D *this,FNiagaraSystemInstance *param_1,
          FNDIIntRenderTarget2DInstanceData_GameThread *param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  UTextureRenderTarget2D *pUVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  UClass *pUVar9;
  UTextureRenderTarget2D *local_res18;
  FName local_res20;
  FString local_18;
  
  if ((param_2->RTUserParamBinding).UObjectOffset == -1) {
    local_res18 = (UTextureRenderTarget2D *)0x0;
  }
  else {
    FNiagaraParameterStore::GetUObject((param_2->RTUserParamBinding).BoundStore,(int)&local_res18);
    pUVar5 = local_res18;
    if (local_res18 != (UTextureRenderTarget2D *)0x0) {
      pUVar9 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
      lVar4 = pUVar5->_padding_;
      iVar3 = (int)pUVar9->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar3) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
          &pUVar9->_padding_)) {
        if (1 < (byte)LogNiagara._0_1_) {
          if (lVar4 == 0) {
            ::FString::FString(&local_18,L"None");
          }
          else {
            local_res20 = *(FName *)(lVar4 + 0x18);
            ::FName::ToString(&local_res20,&local_18);
          }
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
        }
      }
      else if (param_2->TargetTexture != pUVar5) {
        NiagaraDataInterfaceRenderTargetCommon::
        ReleaseRenderTarget<FNDIIntRenderTarget2DInstanceData_GameThread>(param_1,param_2);
        param_2->TargetTexture = pUVar5;
      }
    }
  }
  pUVar5 = param_2->TargetTexture;
  if (pUVar5 == (UTextureRenderTarget2D *)0x0) {
    bVar7 = NiagaraDataInterfaceRenderTargetCommon::
            CreateRenderTarget<UTextureRenderTarget2D,FNDIIntRenderTarget2DInstanceData_GameThread>
                      (param_1,param_2);
    if (!bVar7) {
      return false;
    }
    if ((param_2->TargetTexture == (UTextureRenderTarget2D *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstanceData->TargetTexture",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceIntRenderTarget2D.cpp"
                           ,0x2e0,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    puVar1 = (uint *)((longlong)&param_2->TargetTexture->_padding_ + 4);
    *puVar1 = *puVar1 | 2;
    param_2->TargetTexture->bAutoGenerateMips = '\0';
    (param_2->TargetTexture->OverrideFormat).Value = param_2->Format;
    pUVar5 = param_2->TargetTexture;
    *(undefined8 *)&(pUVar5->ClearColor).field0_0x0 = 0;
    *(undefined8 *)((longlong)&(pUVar5->ClearColor).field0_0x0 + 8) = 0;
  }
  else {
    if ((((pUVar5->SizeX == (param_2->Size).field0_0x0._s_0.X) &&
         (pUVar5->SizeY == (param_2->Size).field0_0x0._s_0.Y)) &&
        ((pUVar5->OverrideFormat).Value == param_2->Format)) &&
       (((pUVar5->_padding_ & 0x200000000) != 0 && (pUVar5->bAutoGenerateMips == '\0')))) {
      return false;
    }
    puVar1 = (uint *)((longlong)&pUVar5->_padding_ + 4);
    *puVar1 = *puVar1 | 2;
    param_2->TargetTexture->bAutoGenerateMips = '\0';
    (param_2->TargetTexture->OverrideFormat).Value = param_2->Format;
  }
  UTextureRenderTarget2D::InitAutoFormat
            (param_2->TargetTexture,(param_2->Size).field0_0x0._s_0.X,
             (param_2->Size).field0_0x0._s_0.Y);
  UTextureRenderTarget2D::UpdateResourceImmediate(param_2->TargetTexture,true);
  return true;
}

// VMGetSize @ 1491916b0

void __thiscall
UNiagaraDataInterfaceIntRenderTarget2D::VMGetSize
          (UNiagaraDataInterfaceIntRenderTarget2D *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int local_30 [4];
  int local_20 [2];
  FUserPtrHandler<FNDIIntRenderTarget2DInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<FNDIIntRenderTarget2DInstanceData_GameThread>::
  FUserPtrHandler<FNDIIntRenderTarget2DInstanceData_GameThread>(&local_18,param_1);
  iVar4 = 0;
  local_30[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  iVar3 = local_30[0] * param_1->PerInstanceFnInstanceIdx;
  local_20[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  if (0 < param_1->NumInstances) {
    pfVar1 = pfVar1 + iVar3;
    pfVar2 = pfVar2 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
    do {
      iVar4 = iVar4 + 1;
      *pfVar1 = (float)((local_18.Ptr)->Size).field0_0x0._s_0.X;
      *pfVar2 = (float)((local_18.Ptr)->Size).field0_0x0._s_0.Y;
      pfVar1 = pfVar1 + local_30[0];
      pfVar2 = pfVar2 + local_20[0];
    } while (iVar4 < param_1->NumInstances);
  }
  return;
}

// VMSetSize @ 149191e10

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceIntRenderTarget2D::VMSetSize
          (UNiagaraDataInterfaceIntRenderTarget2D *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  TRHIGlobal<int> TVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int local_50 [2];
  int local_48 [2];
  FUserPtrHandler<FNDIIntRenderTarget2DInstanceData_GameThread> local_40;
  
  VectorVM::FUserPtrHandler<FNDIIntRenderTarget2DInstanceData_GameThread>::
  FUserPtrHandler<FNDIIntRenderTarget2DInstanceData_GameThread>(&local_40,param_1);
  local_48[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_48);
  iVar4 = local_48[0];
  lVar8 = (longlong)local_48[0];
  local_48[0] = 0;
  pfVar5 = pfVar5 + iVar4 * param_1->PerInstanceFnInstanceIdx;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_48);
  lVar9 = (longlong)local_48[0];
  local_50[0] = 0;
  pfVar6 = pfVar6 + local_48[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_50);
  iVar10 = 0;
  iVar4 = param_1->NumInstances;
  pfVar7 = pfVar7 + local_50[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < iVar4) {
    do {
      fVar1 = *pfVar5;
      fVar2 = *pfVar6;
      pfVar5 = pfVar5 + lVar8;
      pfVar6 = pfVar6 + lVar9;
      if ((((local_40.Ptr == (FNDIIntRenderTarget2DInstanceData_GameThread *)0x0) || (iVar4 != 1))
          || ((int)fVar1 < 0)) || ((int)fVar2 < 0)) {
        *pfVar7 = 0.0;
      }
      else {
        *pfVar7 = -NAN;
        iVar4 = (int)((float)(int)fVar1 *
                     NiagaraDataInterfaceRenderTargetCommon::GResolutionMultiplier);
        TVar3 = GRHIGlobals.MaxTextureDimensions;
        if (iVar4 < GRHIGlobals.MaxTextureDimensions.Value) {
          TVar3.Value = iVar4;
        }
        iVar4 = 1;
        if (1 < TVar3.Value) {
          iVar4 = TVar3.Value;
        }
        ((local_40.Ptr)->Size).field0_0x0._s_0.X = iVar4;
        iVar4 = (int)((float)(int)fVar2 *
                     NiagaraDataInterfaceRenderTargetCommon::GResolutionMultiplier);
        TVar3 = GRHIGlobals.MaxTextureDimensions;
        if (iVar4 < GRHIGlobals.MaxTextureDimensions.Value) {
          TVar3.Value = iVar4;
        }
        iVar4 = 1;
        if (1 < TVar3.Value) {
          iVar4 = TVar3.Value;
        }
        ((local_40.Ptr)->Size).field0_0x0._s_0.Y = iVar4;
      }
      iVar4 = param_1->NumInstances;
      pfVar7 = pfVar7 + local_50[0];
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar4);
  }
  return;
}

