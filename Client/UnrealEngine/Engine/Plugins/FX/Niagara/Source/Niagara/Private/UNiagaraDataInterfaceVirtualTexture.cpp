// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 23

// StaticClass @ 148ee59f0

UClass * __cdecl UNiagaraDataInterfaceVirtualTexture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVirtualTexture.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceVirtualTexture",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceVirtualTexture.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceVirtualTexture,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceVirtualTexture>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVirtualTexture>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVirtualTexture.InnerSingleton;
}

// UNiagaraDataInterfaceVirtualTexture @ 148f811c0

UNiagaraDataInterfaceVirtualTexture * __thiscall
UNiagaraDataInterfaceVirtualTexture::UNiagaraDataInterfaceVirtualTexture
          (UNiagaraDataInterfaceVirtualTexture *this,FVTableHelper *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVirtualTexture__6B_;
  (this->Texture).field0_0x0.DebugPtr = (URuntimeVirtualTexture *)0x0;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->TextureUserParameter);
  return this;
}

// UNiagaraDataInterfaceVirtualTexture @ 148f81200

UNiagaraDataInterfaceVirtualTexture * __thiscall
UNiagaraDataInterfaceVirtualTexture::UNiagaraDataInterfaceVirtualTexture
          (UNiagaraDataInterfaceVirtualTexture *this,FObjectInitializer *param_1)

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
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  puVar3 = (undefined8 *)0x0;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVirtualTexture__6B_;
  (this->Texture).field0_0x0.DebugPtr = (URuntimeVirtualTexture *)0x0;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->TextureUserParameter);
  puVar2 = ::operator_new(0x60);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    *puVar2 = &___7FNDIProxy_NDIVirtualTextureLocal__6B_;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 7) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
    puVar2[10] = 0;
    puVar3 = puVar2;
  }
  puVar2 = (undefined8 *)this->_padding_;
  if ((puVar2 != puVar3) && (this->_padding_ = (longlong)puVar3, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  local_28.DebugPtr = (UObject *)Z_Construct_UClass_UObject_NoRegister();
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
  *(int *)&(this->TextureUserParameter).Parameter._padding_ = iVar1;
  return this;
}

// ~UNiagaraDataInterfaceVirtualTexture @ 148f821f0

void __thiscall
UNiagaraDataInterfaceVirtualTexture::~UNiagaraDataInterfaceVirtualTexture
          (UNiagaraDataInterfaceVirtualTexture *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVirtualTexture__6B_;
  pFVar1 = (this->TextureUserParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// operator() @ 148f84000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
`UNiagaraDataInterfaceVirtualTexture::PerInstanceTick'::__l3::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRHITexture *pFVar1;
  code *pcVar2;
  FRHIShaderResourceView *pFVar3;
  TRefCountPtr<FRHITexture> this_00;
  double dVar4;
  TVector2<float>_u_0 TVar5;
  bool bVar6;
  URuntimeVirtualTexture *this_01;
  IAllocatedVirtualTexture *pIVar7;
  FNDInstanceData_RenderThread *this_02;
  TVector4<double> *pTVar8;
  FRHITexture *pFVar9;
  FRHIShaderResourceView *pFVar10;
  FNDInstanceData_RenderThread *pFVar11;
  FLayerTexture *pFVar12;
  longlong lVar13;
  undefined1 auStack_1a8 [32];
  float local_188;
  float fStack_184;
  TVector4<double>_u_0 local_178;
  TVector4<double> local_158;
  FNDInstanceData_RenderThread local_138;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  this_01 = (URuntimeVirtualTexture *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x10))
  ;
  if (this_01 == (URuntimeVirtualTexture *)0x0) {
    pIVar7 = (IAllocatedVirtualTexture *)0x0;
  }
  else {
    pIVar7 = URuntimeVirtualTexture::GetAllocatedVirtualTexture(this_01);
  }
  this_02 = TMapBase<unsigned___int64,NDIVirtualTextureLocal::FNDInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIVirtualTextureLocal::FNDInstanceData_RenderThread,0>_>
            ::FindOrAddImpl<unsigned___int64_const_&>
                      ((TMapBase<unsigned___int64,NDIVirtualTextureLocal::FNDInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIVirtualTextureLocal::FNDInstanceData_RenderThread,0>_>
                        *)(*(longlong *)this + 0x10),
                       (int)((ulonglong)*(undefined8 *)((longlong)this + 8) >> 0x20) * 0x17 +
                       (int)*(undefined8 *)((longlong)this + 8),(ulong64 *)((longlong)this + 8));
  if (pIVar7 == (IAllocatedVirtualTexture *)0x0) {
    pFVar11 = NDIVirtualTextureLocal::FNDInstanceData_RenderThread::FNDInstanceData_RenderThread
                        (&local_138);
    NDIVirtualTextureLocal::FNDInstanceData_RenderThread::operator=(this_02,pFVar11);
    if ((FRHIResource *)local_138.SharedSampler.Reference != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_138.SharedSampler.Reference);
    }
    lVar13 = 3;
    pFVar12 = (FLayerTexture *)&local_138.MaterialType;
    do {
      pFVar1 = pFVar12[-1].PageTable.Reference;
      lVar13 = lVar13 + -1;
      if (pFVar1 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar1);
      }
      pFVar3 = pFVar12[-1].TextureSRV.Reference;
      if (pFVar3 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar3);
      }
      this_00.Reference = pFVar12[-1].Texture.Reference;
      if (this_00.Reference != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00.Reference);
      }
      pFVar12 = pFVar12 + -1;
    } while (lVar13 != 0);
  }
  else {
    this_02->MaterialType = this_01->MaterialType;
    (**(code **)(pIVar7->_padding_ + 0x38))(pIVar7,this_02->PageTableUniforms);
    pTVar8 = URuntimeVirtualTexture::GetUniformParameter(this_01,&local_158,0);
    dVar4 = (pTVar8->field0_0x0)._s_0.Y;
    this_02->UVUniforms[0].field0_0x0._s_0.X = (pTVar8->field0_0x0)._s_0.X;
    this_02->UVUniforms[0].field0_0x0._s_0.Y = dVar4;
    dVar4 = (pTVar8->field0_0x0)._s_0.W;
    this_02->UVUniforms[0].field0_0x0._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
    this_02->UVUniforms[0].field0_0x0._s_0.W = dVar4;
    pTVar8 = URuntimeVirtualTexture::GetUniformParameter(this_01,&local_158,1);
    dVar4 = (pTVar8->field0_0x0)._s_0.Y;
    this_02->UVUniforms[1].field0_0x0._s_0.X = (pTVar8->field0_0x0)._s_0.X;
    this_02->UVUniforms[1].field0_0x0._s_0.Y = dVar4;
    dVar4 = (pTVar8->field0_0x0)._s_0.W;
    this_02->UVUniforms[1].field0_0x0._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
    this_02->UVUniforms[1].field0_0x0._s_0.W = dVar4;
    pTVar8 = URuntimeVirtualTexture::GetUniformParameter(this_01,&local_158,2);
    dVar4 = (pTVar8->field0_0x0)._s_0.Y;
    this_02->UVUniforms[2].field0_0x0._s_0.X = (pTVar8->field0_0x0)._s_0.X;
    this_02->UVUniforms[2].field0_0x0._s_0.Y = dVar4;
    dVar4 = (pTVar8->field0_0x0)._s_0.W;
    this_02->UVUniforms[2].field0_0x0._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
    this_02->UVUniforms[2].field0_0x0._s_0.W = dVar4;
    URuntimeVirtualTexture::GetUniformParameter(this_01,(TVector4<double> *)&local_178._s_0,3);
    local_188 = (float)local_178._s_0.X;
    fStack_184 = (float)local_178._s_0.Y;
    TVar5._s_0.Y = fStack_184;
    TVar5._s_0.X = local_188;
    (this_02->WorldHeightUnpack).field0_0x0 = TVar5;
    pFVar9 = (FRHITexture *)(**(code **)(pIVar7->_padding_ + 0x28))(pIVar7);
    pFVar1 = this_02->LayerTexture[0].Texture.Reference;
    if (pFVar1 != pFVar9) {
      this_02->LayerTexture[0].Texture.Reference = pFVar9;
      if (pFVar9 != (FRHITexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar9);
      }
      if (pFVar1 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar1);
      }
    }
    pcVar2 = *(code **)(pIVar7->_padding_ + 0x30);
    bVar6 = URuntimeVirtualTexture::IsLayerSRGB(this_01,0);
    pFVar10 = (FRHIShaderResourceView *)(*pcVar2)(pIVar7,0,bVar6);
    pFVar3 = this_02->LayerTexture[0].TextureSRV.Reference;
    if (pFVar3 != pFVar10) {
      this_02->LayerTexture[0].TextureSRV.Reference = pFVar10;
      if (pFVar10 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar10);
      }
      if (pFVar3 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar3);
      }
    }
    pFVar9 = (FRHITexture *)(**(code **)(pIVar7->_padding_ + 0x10))(pIVar7,0);
    pFVar1 = this_02->LayerTexture[0].PageTable.Reference;
    if (pFVar1 != pFVar9) {
      this_02->LayerTexture[0].PageTable.Reference = pFVar9;
      if (pFVar9 != (FRHITexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar9);
      }
      if (pFVar1 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar1);
      }
    }
    (**(code **)(pIVar7->_padding_ + 0x40))(pIVar7,&this_02->LayerTexture[0].TextureUniforms,0);
    pFVar9 = (FRHITexture *)(**(code **)(pIVar7->_padding_ + 0x28))(pIVar7,1);
    pFVar1 = this_02->LayerTexture[1].Texture.Reference;
    if (pFVar1 != pFVar9) {
      this_02->LayerTexture[1].Texture.Reference = pFVar9;
      if (pFVar9 != (FRHITexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar9);
      }
      if (pFVar1 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar1);
      }
    }
    pcVar2 = *(code **)(pIVar7->_padding_ + 0x30);
    bVar6 = URuntimeVirtualTexture::IsLayerSRGB(this_01,1);
    pFVar10 = (FRHIShaderResourceView *)(*pcVar2)(pIVar7,1,bVar6);
    pFVar3 = this_02->LayerTexture[1].TextureSRV.Reference;
    if (pFVar3 != pFVar10) {
      this_02->LayerTexture[1].TextureSRV.Reference = pFVar10;
      if (pFVar10 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar10);
      }
      if (pFVar3 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar3);
      }
    }
    pFVar9 = (FRHITexture *)(**(code **)(pIVar7->_padding_ + 0x10))(pIVar7,0);
    pFVar1 = this_02->LayerTexture[1].PageTable.Reference;
    if (pFVar1 != pFVar9) {
      this_02->LayerTexture[1].PageTable.Reference = pFVar9;
      if (pFVar9 != (FRHITexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar9);
      }
      if (pFVar1 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar1);
      }
    }
    (**(code **)(pIVar7->_padding_ + 0x40))(pIVar7,&this_02->LayerTexture[1].TextureUniforms,1);
    pFVar9 = (FRHITexture *)(**(code **)(pIVar7->_padding_ + 0x28))(pIVar7,2);
    pFVar1 = this_02->LayerTexture[2].Texture.Reference;
    if (pFVar1 != pFVar9) {
      this_02->LayerTexture[2].Texture.Reference = pFVar9;
      if (pFVar9 != (FRHITexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar9);
      }
      if (pFVar1 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar1);
      }
    }
    pcVar2 = *(code **)(pIVar7->_padding_ + 0x30);
    bVar6 = URuntimeVirtualTexture::IsLayerSRGB(this_01,2);
    pFVar10 = (FRHIShaderResourceView *)(*pcVar2)(pIVar7,2,bVar6);
    pFVar3 = this_02->LayerTexture[2].TextureSRV.Reference;
    if (pFVar3 != pFVar10) {
      this_02->LayerTexture[2].TextureSRV.Reference = pFVar10;
      if (pFVar10 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar10);
      }
      if (pFVar3 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar3);
      }
    }
    pFVar9 = (FRHITexture *)(**(code **)(pIVar7->_padding_ + 0x10))(pIVar7,0);
    pFVar1 = this_02->LayerTexture[2].PageTable.Reference;
    if (pFVar1 != pFVar9) {
      this_02->LayerTexture[2].PageTable.Reference = pFVar9;
      if (pFVar9 != (FRHITexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar9);
      }
      if (pFVar1 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar1);
      }
    }
    (**(code **)(pIVar7->_padding_ + 0x40))(pIVar7,&this_02->LayerTexture[2].TextureUniforms,2);
  }
  return;
}

// BuildShaderParameters @ 148f8fcb0

void __thiscall
UNiagaraDataInterfaceVirtualTexture::BuildShaderParameters
          (UNiagaraDataInterfaceVirtualTexture *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar5 = TShaderParameterStructTypeInfo<NDIVirtualTextureLocal::FShaderParameters>::
           GetStructMetadata();
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
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0xd0;
  return;
}

// CanExecuteOnTarget @ 148f91320

bool __thiscall
UNiagaraDataInterfaceVirtualTexture::CanExecuteOnTarget
          (UNiagaraDataInterfaceVirtualTexture *this,ENiagaraSimTarget param_1)

{
  return param_1 == GPUComputeSim;
}

// CopyToInternal @ 148f927c0

bool __thiscall
UNiagaraDataInterfaceVirtualTexture::CopyToInternal
          (UNiagaraDataInterfaceVirtualTexture *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  URuntimeVirtualTexture *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  bVar3 = UNiagaraDataInterface::CopyToInternal((UNiagaraDataInterface *)this,param_1);
  if (!bVar3) {
    return false;
  }
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar4 = StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 = (this->Texture).field0_0x0.DebugPtr, pUVar2 != (URuntimeVirtualTexture *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      *(TObjectPtr<URuntimeVirtualTexture>_u_0 *)(param_1 + 1) = (this->Texture).field0_0x0;
      param_1[1]._padding_ = (this->TextureUserParameter).Parameter._padding_;
      *(int *)&param_1[1]._padding_ = (int)(this->TextureUserParameter).Parameter._padding_;
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_1[1]._padding_,
                 &(this->TextureUserParameter).Parameter.VarData);
      return true;
    }
    pFVar5 = GetTypeName<UNiagaraDataInterfaceVirtualTexture>(&local_28);
    pwVar6 = L"";
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar5 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar6,pwVar7);
  }
  pFVar5 = GetTypeName<UNiagaraDataInterfaceVirtualTexture>(&local_28);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar6);
}

// DestroyPerInstanceData @ 148fa8bb0

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
UNiagaraDataInterfaceVirtualTexture::DestroyPerInstanceData
          (UNiagaraDataInterfaceVirtualTexture *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  longlong lStack_70;
  ulong64 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  longlong lStack_40;
  ulong64 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
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
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTexture::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_68 = param_2->ID;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNiagaraDataInterfaceVirtualTexture::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  lStack_70 = lVar1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceVirtualTexture::DestroyPerInstanceData_::__l2::TSTR_NDITexture_RemoveInstance251>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    lStack_40 = lStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`UNiagaraDataInterfaceVirtualTexture::DestroyPerInstanceData'::__l2::TSTR_NDITexture_RemoveInstance251>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar4);
    uVar6 = (ulonglong)local_28;
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
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar5 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar5 = local_30;
        }
        (*(code *)(*pppuVar5)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar5 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar5 = local_60;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  return;
}

// Equals @ 148fa9970

bool __thiscall
UNiagaraDataInterfaceVirtualTexture::Equals
          (UNiagaraDataInterfaceVirtualTexture *this,UNiagaraDataInterface *param_1)

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
      pFVar4 = GetTypeName<UNiagaraDataInterfaceVirtualTexture_const_>(&local_28);
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
      pFVar4 = GetTypeName<UNiagaraDataInterfaceVirtualTexture_const_>(&local_28);
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
    if ((((URuntimeVirtualTexture *)param_1[1]._padding_ == (this->Texture).field0_0x0.DebugPtr) &&
        ((this->TextureUserParameter).Parameter._padding_ == param_1[1]._padding_)) &&
       ((int)(this->TextureUserParameter).Parameter._padding_ == (int)param_1[1]._padding_)) {
      return true;
    }
  }
  return false;
}

// GetPrivateStaticClass @ 148fb6c00

UClass * __cdecl UNiagaraDataInterfaceVirtualTexture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVirtualTexture.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceVirtualTexture",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceVirtualTexture.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceVirtualTexture,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceVirtualTexture>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVirtualTexture>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVirtualTexture.InnerSingleton;
}

// GetVMExternalFunction @ 148fbec90

void __thiscall
UNiagaraDataInterfaceVirtualTexture::GetVMExternalFunction
          (UNiagaraDataInterfaceVirtualTexture *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  return;
}

// HasPreSimulateTick @ 148fbedd0

bool __thiscall
UNiagaraDataInterfaceVirtualTexture::HasPreSimulateTick(UNiagaraDataInterfaceVirtualTexture *this)

{
  return true;
}

// InitPerInstanceData @ 148fc4500

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
UNiagaraDataInterfaceVirtualTexture::InitPerInstanceData
          (UNiagaraDataInterfaceVirtualTexture *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  int iVar1;
  longlong local_res8;
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)param_1 = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(param_1,(FObjectPtr)&local_res8);
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)((longlong)param_1 + 0x20),
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)param_1 + 0x20) = iVar1;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FNiagaraParameterDirectBinding<UObject_*>::Init
            ((FNiagaraParameterDirectBinding<UObject_*> *)((longlong)param_1 + 8),
             (FNiagaraParameterStore *)&local_res8,(FNiagaraVariable *)&param_2->InstanceParameters)
  ;
  return true;
}

// PerInstanceDataSize @ 148fc6410

int __thiscall
UNiagaraDataInterfaceVirtualTexture::PerInstanceDataSize(UNiagaraDataInterfaceVirtualTexture *this)

{
  return 0x40;
}

// PerInstanceTick @ 148fc6c60

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
UNiagaraDataInterfaceVirtualTexture::PerInstanceTick
          (UNiagaraDataInterfaceVirtualTexture *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  code *pcVar1;
  code *pcVar2;
  FWeakObjectPtr FVar3;
  bool bVar4;
  undefined1 uVar5;
  TObjectPtr<UObject> this_00;
  UClass *pUVar6;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar7;
  code **ppcVar8;
  URuntimeVirtualTexture *pUVar9;
  ulonglong uVar10;
  undefined1 auStack_e8 [32];
  FWeakObjectPtr local_c8;
  URuntimeVirtualTexture *local_c0;
  URuntimeVirtualTexture *local_b8;
  undefined1 local_b0 [8];
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pUVar9 = (this->Texture).field0_0x0.DebugPtr;
  if (*(int *)((longlong)param_1 + 8) != -1) {
    this_00 = FNiagaraParameterStore::GetUObject
                        (*(FNiagaraParameterStore **)((longlong)param_1 + 0x10),(int)local_b0);
    if (*(longlong *)this_00.field0_0x0 != 0) {
      pUVar6 = Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
      bVar4 = FObjectPtr::IsA((FObjectPtr *)this_00.field0_0x0,pUVar6);
      if (bVar4) {
        pUVar9 = *(URuntimeVirtualTexture **)this_00.field0_0x0;
        goto LAB_148fc6cd1;
      }
    }
    pUVar9 = (URuntimeVirtualTexture *)0x0;
  }
LAB_148fc6cd1:
  local_c0 = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (URuntimeVirtualTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  FWeakObjectPtr::operator=(param_1,(FObjectPtr)&local_c0);
  pcVar1 = (code *)this->_padding_;
  if (pcVar1 == (code *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  pcVar2 = (code *)param_2->ID;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (URuntimeVirtualTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  local_c8.ObjectIndex = 0;
  local_c8.ObjectSerialNumber = 0;
  local_b8 = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (URuntimeVirtualTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  FWeakObjectPtr::operator=(&local_c8,(FObjectPtr)&local_b8);
  FVar3 = local_c8;
  local_a8[0] = (code *)0x0;
  local_80 = FMemory::Malloc(0x20,8);
  *local_80 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTexture::PerInstanceTick'::`3'::<lambda_1>,1,1>
                       ::_vftable_;
  local_80[1] = pcVar1;
  local_80[2] = pcVar2;
  *(FWeakObjectPtr *)(local_80 + 3) = FVar3;
  if (local_80 + 1 != (code **)0x0) {
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UNiagaraDataInterfaceVirtualTexture::PerInstanceTick'::__l3::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceVirtualTexture::PerInstanceTick_::__l3::TSTR_NDITexture_UpdateInstance270>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
  }
  else {
    this_02 = FRenderCommandList::GetRenderThread(this_01);
    local_78._0_8_ = local_a8[0];
    local_50 = local_80;
    local_80 = (code **)0x0;
    local_78._16_8_ = local_98[0];
    local_78._24_8_ = local_98[1];
    local_78._32_8_ = local_98[2];
    local_a8[0] = (code *)0x0;
    local_48 = 2;
    pFVar7 = (FRenderCommandTag *)
             TRenderCommandTag<`UNiagaraDataInterfaceVirtualTexture::PerInstanceTick'::__l3::TSTR_NDITexture_UpdateInstance270>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_78,pFVar7);
    uVar10 = (ulonglong)local_48;
    if (2 < uVar10) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar10] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_78._0_8_ != (code *)0x0) {
        ppcVar8 = (code **)(local_78 + 0x10);
        if (local_50 != (code **)0x0) {
          ppcVar8 = local_50;
        }
        (**(code **)(*ppcVar8 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar10])(local_78);
    }
  }
  if (local_a8[0] != (code *)0x0) {
    ppcVar8 = local_a8 + 2;
    if (local_80 != (code **)0x0) {
      ppcVar8 = local_80;
    }
    (**(code **)(*ppcVar8 + 0x10))();
  }
  return false;
}

// PostInitProperties @ 148fc7430

void __thiscall
UNiagaraDataInterfaceVirtualTexture::PostInitProperties(UNiagaraDataInterfaceVirtualTexture *this)

{
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x10) != 0) {
    local_28 = (TObjectPtr<UObject>_u_0)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_28.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_1e = 0;
    local_20 = 1;
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    FNiagaraTypeRegistry::Register
              ((FNiagaraTypeDefinition *)&local_28.ObjectPtr,AllowParameter|AllowAnyVariable);
  }
  return;
}

// PostLoad @ 148fc74c0

void __thiscall
UNiagaraDataInterfaceVirtualTexture::PostLoad(UNiagaraDataInterfaceVirtualTexture *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UNiagaraDataInterfaceVirtualTexture **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// Serialize @ 148fcb910

void __thiscall
UNiagaraDataInterfaceVirtualTexture::Serialize
          (UNiagaraDataInterfaceVirtualTexture *this,FArchive *param_1)

{
  int iVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_18;
  
  UObject::Serialize((UObject *)this,param_1);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FNiagaraCustomVersion::GUID);
    if (iVar1 < 0x27) goto LAB_148fcb960;
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>(param_1,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
LAB_148fcb960:
                    /* WARNING: Could not recover jumptable at 0x000148fcb972. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FNiagaraCustomVersion::GUID);
  return;
}

// Serialize @ 148fcb980

void __thiscall
UNiagaraDataInterfaceVirtualTexture::Serialize
          (UNiagaraDataInterfaceVirtualTexture *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchiveState *this_00;
  FSlotBase local_res10 [3];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,(FArchive *)this_00);
  if (this_00->ArIsLoading != 0) {
    iVar1 = FArchiveState::CustomVer(this_00,&FNiagaraCustomVersion::GUID);
    if (iVar1 < 0x27) goto LAB_148fcb9ec;
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
            ((FArchive *)this_00,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
LAB_148fcb9ec:
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FNiagaraCustomVersion::GUID);
  return;
}

// SetShaderParameters @ 148fcd550

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
UNiagaraDataInterfaceVirtualTexture::SetShaderParameters
          (UNiagaraDataInterfaceVirtualTexture *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  uchar *puVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FNiagaraDataInterfaceProxy *pFVar6;
  uchar *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  byte bVar11;
  ulong64 uVar12;
  FShaderParametersMetadata *pFVar13;
  TVector<float> *pTVar14;
  double *pdVar15;
  ulong64 *puVar16;
  uint uVar17;
  ulong64 *puVar18;
  FName *pFVar19;
  byte bVar20;
  byte bVar21;
  ulong64 *puVar22;
  TVector<float>_u_0 local_118 [10];
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_78;
  TVector<float> local_58;
  FNiagaraLWCConverter local_48;
  
  if ((param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("DataInterfaceProxy",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                          ,0x1c1,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar6 = param_1->DataInterfaceProxy;
  uVar12 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  puVar16 = (ulong64 *)0x0;
  puVar22 = puVar16;
  if (pFVar6[1].SourceDIName.ComparisonIndex.Value != *(uint *)((longlong)&pFVar6[4]._padding_ + 4))
  {
    pFVar19 = (FName *)pFVar6[5]._padding_;
    if ((FName *)pFVar6[5]._padding_ == (FName *)0x0) {
      pFVar19 = &pFVar6[4].SourceDIName;
    }
    uVar17 = (&pFVar19->ComparisonIndex)
             [(uVar12 >> 0x20) * 0x17 + uVar12 &
              (ulonglong)(pFVar6[5].SourceDIName.ComparisonIndex.Value - 1)].Value;
    if (uVar17 != 0xffffffff) {
      do {
        puVar22 = (ulong64 *)((longlong)(int)uVar17 * 0x130 + pFVar6[1]._padding_);
        if (*puVar22 == uVar12) break;
        uVar17 = (uint)puVar22[0x24];
        puVar22 = puVar16;
      } while (uVar17 != 0xffffffff);
    }
  }
  puVar18 = puVar22 + 2;
  if (puVar22 == (ulong64 *)0x0) {
    puVar18 = puVar16;
  }
  uVar17 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar13 = TShaderParameterStructTypeInfo<NDIVirtualTextureLocal::FShaderParameters>::
            GetStructMetadata();
  puVar7 = param_1->BaseParameters;
  bVar21 = 0;
  bVar20 = 0;
  param_1->ParametersOffset = pFVar13->Size + uVar17;
  if (puVar18 == (ulong64 *)0x0) {
    puVar1 = puVar7 + (ulonglong)uVar17 + 100;
    puVar1[0] = '\b';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1 = puVar7 + (ulonglong)uVar17 + 0x60;
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1 = puVar7 + (ulonglong)uVar17 + 0x70;
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    puVar1[8] = '\0';
    puVar1[9] = '\0';
    puVar1[10] = '\0';
    puVar1[0xb] = '\0';
    puVar1[0xc] = '\0';
    puVar1[0xd] = '\0';
    puVar1[0xe] = '\0';
    puVar1[0xf] = '\0';
    puVar1 = puVar7 + (ulonglong)uVar17 + 0x80;
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    puVar1[8] = '\0';
    puVar1[9] = '\0';
    puVar1[10] = '\0';
    puVar1[0xb] = '\0';
    puVar1[0xc] = '\0';
    puVar1[0xd] = '\0';
    puVar1[0xe] = '\0';
    puVar1[0xf] = '\0';
    puVar1 = puVar7 + (ulonglong)uVar17 + 0x90;
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    puVar1[8] = '\0';
    puVar1[9] = '\0';
    puVar1[10] = '\0';
    puVar1[0xb] = '\0';
    puVar1[0xc] = '\0';
    puVar1[0xd] = '\0';
    puVar1[0xe] = '\0';
    puVar1[0xf] = '\0';
    puVar1 = puVar7 + (ulonglong)uVar17 + 0xa0;
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    puVar1[8] = '\0';
    puVar1[9] = '\0';
    puVar1[10] = '\0';
    puVar1[0xb] = '\0';
    puVar1[0xc] = '\0';
    puVar1[0xd] = '\0';
    puVar1[0xe] = '\0';
    puVar1[0xf] = '\0';
    puVar1 = puVar7 + (ulonglong)uVar17 + 0xb0;
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    puVar1[8] = '\0';
    puVar1[9] = '\0';
    puVar1[10] = '\0';
    puVar1[0xb] = '\0';
    puVar1[0xc] = '\0';
    puVar1[0xd] = '\0';
    puVar1[0xe] = '\0';
    puVar1[0xf] = '\0';
    ((TVector2<float>_u_0 *)(puVar7 + (ulonglong)uVar17 + 0xc0))->_s_0 =
         (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    *(FRHISamplerState **)(puVar7 + (ulonglong)uVar17 + 200) =
         TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI.Reference;
  }
  else {
    if (((*puVar18 == 0) || (puVar18[1] == 0)) || (puVar18[2] == 0)) {
      bVar11 = 0;
    }
    else {
      bVar11 = 1;
    }
    if (((puVar18[5] != 0) && (puVar18[6] != 0)) && (puVar18[7] != 0)) {
      bVar21 = 1;
    }
    if (((puVar18[10] != 0) && (puVar18[0xb] != 0)) && (puVar18[0xc] != 0)) {
      bVar20 = 1;
    }
    if (bVar11 == 1) {
      *(ulong64 *)(puVar7 + uVar17) = puVar18[1];
      *(ulong64 *)(puVar7 + (ulonglong)uVar17 + 8) = puVar18[2];
      uVar12 = puVar18[4];
      *(ulong64 *)(puVar7 + (ulonglong)uVar17 + 0x10) = puVar18[3];
      *(ulong64 *)((longlong)(puVar7 + (ulonglong)uVar17 + 0x10) + 8) = uVar12;
    }
    if (bVar21 == 1) {
      *(ulong64 *)(puVar7 + (ulonglong)uVar17 + 0x20) = puVar18[6];
      *(ulong64 *)(puVar7 + (ulonglong)uVar17 + 0x28) = puVar18[7];
      uVar12 = puVar18[9];
      *(ulong64 *)(puVar7 + (ulonglong)uVar17 + 0x30) = puVar18[8];
      *(ulong64 *)((longlong)(puVar7 + (ulonglong)uVar17 + 0x30) + 8) = uVar12;
    }
    if (bVar20 == 1) {
      *(ulong64 *)(puVar7 + (ulonglong)uVar17 + 0x40) = puVar18[0xb];
      *(ulong64 *)(puVar7 + (ulonglong)uVar17 + 0x48) = puVar18[0xc];
      uVar12 = puVar18[0xe];
      *(ulong64 *)(puVar7 + (ulonglong)uVar17 + 0x50) = puVar18[0xd];
      *(ulong64 *)((longlong)(puVar7 + (ulonglong)uVar17 + 0x50) + 8) = uVar12;
    }
    pTVar14 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemLWCTile(param_1,&local_58);
    local_98._s_0.X = (double)(pTVar14->field0_0x0)._s_0.X * __real_4140000000000000;
    local_98._s_0.Z = (double)(pTVar14->field0_0x0)._s_0.Z * __real_4140000000000000;
    local_98._s_0.Y = (double)(pTVar14->field0_0x0)._s_0.Y * __real_4140000000000000;
    FNiagaraLWCConverter::FNiagaraLWCConverter(&local_48,(TVector<double> *)&local_98._s_0);
    local_78._s_0.X = (double)puVar18[0x14];
    local_78._s_0.Y = (double)puVar18[0x15];
    local_78._s_0.Z = (double)puVar18[0x16];
    FNiagaraLWCConverter::ConvertWorldToSimulationVector
              (&local_48,(TVector<float> *)&local_118[0]._s_0,(TVector<double> *)&local_78._s_0);
    *(uint *)(puVar7 + (ulonglong)uVar17 + 0x60) =
         (uint)bVar20 << 2 | (uint)bVar21 * 2 | (uint)bVar11;
    bVar10 = puVar22 == (ulong64 *)0x0;
    *(uint *)(puVar7 + (ulonglong)uVar17 + 100) = (uint)(byte)puVar18[0xf];
    pdVar15 = (double *)(puVar22 + 0x1e);
    uVar9 = *(undefined8 *)((longlong)puVar18 + 0x84);
    if (bVar10) {
      pdVar15 = (double *)&DAT_000000e0;
    }
    *(undefined8 *)(puVar7 + (ulonglong)uVar17 + 0x70) = *(undefined8 *)((longlong)puVar18 + 0x7c);
    *(undefined8 *)(puVar7 + (ulonglong)uVar17 + 0x70 + 8) = uVar9;
    uVar9 = *(undefined8 *)((longlong)puVar18 + 0x94);
    *(undefined8 *)(puVar7 + (ulonglong)uVar17 + 0x80) = *(undefined8 *)((longlong)puVar18 + 0x8c);
    *(undefined8 *)(puVar7 + (ulonglong)uVar17 + 0x80 + 8) = uVar9;
    dVar3 = (double)puVar18[0x17];
    *(undefined4 *)(puVar7 + (ulonglong)uVar17 + 0x90) = local_118[0]._s_0.X;
    *(undefined4 *)(puVar7 + (ulonglong)uVar17 + 0x94) = local_118[0]._s_0.Y;
    *(undefined4 *)(puVar7 + (ulonglong)uVar17 + 0x98) = local_118[0]._s_0.Z;
    *(float *)(puVar7 + (ulonglong)uVar17 + 0x9c) = (float)dVar3;
    dVar3 = (double)puVar18[0x19];
    dVar4 = (double)puVar18[0x1a];
    dVar5 = (double)puVar18[0x1b];
    pfVar2 = (float *)(puVar7 + (ulonglong)uVar17 + 0xa0);
    *pfVar2 = (float)(double)puVar18[0x18];
    pfVar2[1] = (float)dVar3;
    pfVar2[2] = (float)dVar4;
    pfVar2[3] = (float)dVar5;
    dVar3 = pdVar15[1];
    dVar4 = pdVar15[2];
    dVar5 = pdVar15[3];
    puVar16 = puVar22 + 0x22;
    if (bVar10) {
      puVar16 = (ulong64 *)&DAT_00000100;
    }
    pfVar2 = (float *)(puVar7 + (ulonglong)uVar17 + 0xb0);
    *pfVar2 = (float)*pdVar15;
    pfVar2[1] = (float)dVar3;
    pfVar2[2] = (float)dVar4;
    pfVar2[3] = (float)dVar5;
    *(ulong64 *)(puVar7 + (ulonglong)uVar17 + 0xc0) = *puVar16;
    puVar22 = puVar22 + 0x23;
    if (bVar10) {
      puVar22 = (ulong64 *)&DAT_00000108;
    }
    *(ulong64 *)(puVar7 + (ulonglong)uVar17 + 200) = *puVar22;
    if (bVar11 != 0) goto LAB_148fcd98b;
  }
  *(FRHIShaderResourceView **)(puVar7 + uVar17) =
       (GBlackTextureWithSRV->ShaderResourceViewRHI).Reference;
  *(FRHITexture **)(puVar7 + (ulonglong)uVar17 + 8) = (GBlackUintTexture->TextureRHI).Reference;
  puVar1 = puVar7 + (ulonglong)uVar17 + 0x10;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  puVar1[8] = '\0';
  puVar1[9] = '\0';
  puVar1[10] = '\0';
  puVar1[0xb] = '\0';
  puVar1[0xc] = '\0';
  puVar1[0xd] = '\0';
  puVar1[0xe] = '\0';
  puVar1[0xf] = '\0';
LAB_148fcd98b:
  if (bVar21 == 0) {
    *(FRHIShaderResourceView **)(puVar7 + (ulonglong)uVar17 + 0x20) =
         (GBlackTextureWithSRV->ShaderResourceViewRHI).Reference;
    *(FRHITexture **)(puVar7 + (ulonglong)uVar17 + 0x28) = (GBlackUintTexture->TextureRHI).Reference
    ;
    puVar1 = puVar7 + (ulonglong)uVar17 + 0x30;
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    puVar1[8] = '\0';
    puVar1[9] = '\0';
    puVar1[10] = '\0';
    puVar1[0xb] = '\0';
    puVar1[0xc] = '\0';
    puVar1[0xd] = '\0';
    puVar1[0xe] = '\0';
    puVar1[0xf] = '\0';
  }
  if (bVar20 == 0) {
    *(FRHIShaderResourceView **)(puVar7 + (ulonglong)uVar17 + 0x40) =
         (GBlackTextureWithSRV->ShaderResourceViewRHI).Reference;
    *(FRHITexture **)(puVar7 + (ulonglong)uVar17 + 0x48) = (GBlackUintTexture->TextureRHI).Reference
    ;
    puVar7 = puVar7 + (ulonglong)uVar17 + 0x50;
    puVar7[0] = '\0';
    puVar7[1] = '\0';
    puVar7[2] = '\0';
    puVar7[3] = '\0';
    puVar7[4] = '\0';
    puVar7[5] = '\0';
    puVar7[6] = '\0';
    puVar7[7] = '\0';
    puVar7[8] = '\0';
    puVar7[9] = '\0';
    puVar7[10] = '\0';
    puVar7[0xb] = '\0';
    puVar7[0xc] = '\0';
    puVar7[0xd] = '\0';
    puVar7[0xe] = '\0';
    puVar7[0xf] = '\0';
  }
  return;
}

// SetTexture @ 148fcdaf0

void __thiscall
UNiagaraDataInterfaceVirtualTexture::SetTexture
          (UNiagaraDataInterfaceVirtualTexture *this,URuntimeVirtualTexture *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (URuntimeVirtualTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->Texture).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->Texture).field0_0x0.DebugPtr = param_1;
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceVirtualTexture @ 148fcdd90

void __cdecl
UNiagaraDataInterfaceVirtualTexture::StaticRegisterNativesUNiagaraDataInterfaceVirtualTexture(void)

{
  return;
}

