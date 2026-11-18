// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 28

// StaticClass @ 148e89e90

UClass * __cdecl UNiagaraDataInterfaceSceneCapture2D::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceSceneCapture2D.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceSceneCapture2D",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceSceneCapture2D.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceSceneCapture2D,0x138,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceSceneCapture2D>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceSceneCapture2D>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceSceneCapture2D.InnerSingleton;
}

// UNiagaraDataInterfaceSceneCapture2D @ 148ea5280

UNiagaraDataInterfaceSceneCapture2D * __thiscall
UNiagaraDataInterfaceSceneCapture2D::UNiagaraDataInterfaceSceneCapture2D
          (UNiagaraDataInterfaceSceneCapture2D *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->SourceMode = UserParameterThenAttachParent;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceSceneCapture2D__6B_;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->SceneCaptureUserParameter);
  this->bAutoMoveWithComponent = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->AutoMoveOffsetLocationMode = Disabled;
  (this->AutoMoveOffsetLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AutoMoveOffsetLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->AutoMoveOffsetLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->AutoMoveOffsetRotationMode = Disabled;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->AutoMoveOffsetRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->AutoMoveOffsetRotation).Yaw = dVar2;
  (this->AutoMoveOffsetRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  (this->ManagedHidenActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManagedHidenActors).ArrayNum = 0;
  (this->ManagedHidenActors).ArrayMax = 0;
  (this->ManagedShowOnlyActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManagedShowOnlyActors).ArrayNum = 0;
  (this->ManagedShowOnlyActors).ArrayMax = 0;
  *(undefined8 *)&this->ManagedCaptureComponents = 0;
  *(undefined8 *)&(this->ManagedCaptureComponents).field_0x8 = 0;
  *(undefined8 *)&(this->ManagedCaptureComponents).field_0x20 = 0;
  this->ChangeId = 0;
  (this->ManagedCaptureSource).Value = '\0';
  (this->ManagedTextureSize).field0_0x0._s_0.X = 0x80;
  (this->ManagedTextureSize).field0_0x0._s_0.Y = 0x80;
  this->ManagedTextureFormat = '\x02';
  this->ManagedProjectionType = '\0';
  this->ManagedFOVAngle = 90.0;
  this->ManagedOrthoWidth = 512.0;
  this->bManagedCaptureEveryFrame = true;
  this->bManagedCaptureOnMovement = false;
  this->bManagedHideAttachComponent = true;
  *(undefined4 *)&(this->ManagedCaptureComponents).field_0x28 = 0;
  *(undefined4 *)&(this->ManagedCaptureComponents).field_0x2c = 0x80;
  *(undefined4 *)&(this->ManagedCaptureComponents).field_0x34 = 0;
  *(undefined4 *)&(this->ManagedCaptureComponents).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ManagedCaptureComponents).field_0x40 = 0;
  *(undefined4 *)&(this->ManagedCaptureComponents).field_0x48 = 0;
  return this;
}

// UNiagaraDataInterfaceSceneCapture2D @ 148ea53b0

UNiagaraDataInterfaceSceneCapture2D * __thiscall
UNiagaraDataInterfaceSceneCapture2D::UNiagaraDataInterfaceSceneCapture2D
          (UNiagaraDataInterfaceSceneCapture2D *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  double dVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  FNiagaraTypeDefinitionHandle local_res8 [2];
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->SourceMode = UserParameterThenAttachParent;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceSceneCapture2D__6B_;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->SceneCaptureUserParameter);
  this->bAutoMoveWithComponent = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->AutoMoveOffsetLocationMode = Disabled;
  puVar5 = (undefined8 *)0x0;
  (this->AutoMoveOffsetLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AutoMoveOffsetLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->AutoMoveOffsetLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->AutoMoveOffsetRotationMode = Disabled;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->AutoMoveOffsetRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->AutoMoveOffsetRotation).Yaw = dVar2;
  (this->AutoMoveOffsetRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  (this->ManagedCaptureSource).Value = '\0';
  (this->ManagedTextureSize).field0_0x0._s_0.X = 0x80;
  (this->ManagedTextureSize).field0_0x0._s_0.Y = 0x80;
  this->ManagedTextureFormat = '\x02';
  this->ManagedProjectionType = '\0';
  (this->ManagedHidenActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManagedHidenActors).ArrayNum = 0;
  (this->ManagedHidenActors).ArrayMax = 0;
  (this->ManagedShowOnlyActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManagedShowOnlyActors).ArrayNum = 0;
  (this->ManagedShowOnlyActors).ArrayMax = 0;
  *(undefined8 *)&this->ManagedCaptureComponents = 0;
  *(undefined8 *)&(this->ManagedCaptureComponents).field_0x8 = 0;
  *(undefined8 *)&(this->ManagedCaptureComponents).field_0x20 = 0;
  this->ManagedFOVAngle = 90.0;
  this->ManagedOrthoWidth = 512.0;
  this->bManagedCaptureEveryFrame = true;
  this->bManagedCaptureOnMovement = false;
  this->bManagedHideAttachComponent = true;
  this->ChangeId = 0;
  *(undefined4 *)&(this->ManagedCaptureComponents).field_0x28 = 0;
  *(undefined4 *)&(this->ManagedCaptureComponents).field_0x2c = 0x80;
  *(undefined4 *)&(this->ManagedCaptureComponents).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ManagedCaptureComponents).field_0x34 = 0;
  *(undefined8 *)&(this->ManagedCaptureComponents).field_0x40 = 0;
  *(undefined4 *)&(this->ManagedCaptureComponents).field_0x48 = 0;
  puVar4 = ::operator_new(0x60);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[9] = 0;
    puVar4[0xb] = 0;
    *puVar4 = &___7FNDIProxy_NDISceneCapture2DLocal__6B_;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[6] = 0;
    *(undefined4 *)(puVar4 + 7) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x3c) = 0x80;
    *(undefined4 *)(puVar4 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar4 + 0x44) = 0;
    puVar4[10] = 0;
    puVar5 = puVar4;
  }
  puVar4 = (undefined8 *)this->_padding_;
  if ((puVar4 != puVar5) && (this->_padding_ = (longlong)puVar5, puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)(puVar4,1);
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
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    (local_res8,(FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  *(int *)&(this->SceneCaptureUserParameter).Parameter._padding_ = iVar3;
  return this;
}

// ~UNiagaraDataInterfaceSceneCapture2D @ 148ea6d90

void __thiscall
UNiagaraDataInterfaceSceneCapture2D::~UNiagaraDataInterfaceSceneCapture2D
          (UNiagaraDataInterfaceSceneCapture2D *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceSceneCapture2D__6B_;
  *(undefined4 *)&(this->ManagedCaptureComponents).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ManagedCaptureComponents).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TObjectPtr<USceneCaptureComponent2D>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TObjectPtr<USceneCaptureComponent2D>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TObjectPtr<USceneCaptureComponent2D>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ManagedCaptureComponents);
  pFVar2 = (this->ManagedShowOnlyActors).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ManagedHidenActors).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SceneCaptureUserParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// operator() @ 148ea8950

void __thiscall
`UNiagaraDataInterfaceSceneCapture2D::PerInstanceTickPostSimulate'::__l17::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRHITextureReference *pFVar1;
  FRHITextureReference *this_00;
  FRHIResource *this_01;
  FNDInstanceData_RenderThread *pFVar2;
  FTextureResource *pFVar3;
  FRHIResource *this_02;
  
  pFVar2 = TMapBase<unsigned___int64,NDISceneCapture2DLocal::FNDInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDISceneCapture2DLocal::FNDInstanceData_RenderThread,0>_>
           ::FindOrAddImpl<unsigned___int64_const_&>
                     ((TMapBase<unsigned___int64,NDISceneCapture2DLocal::FNDInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDISceneCapture2DLocal::FNDInstanceData_RenderThread,0>_>
                       *)(*(longlong *)this + 0x10),
                      (int)((ulonglong)*(undefined8 *)((longlong)this + 8) >> 0x20) * 0x17 +
                      (int)*(undefined8 *)((longlong)this + 8),(ulong64 *)((longlong)this + 8));
  if (*(longlong *)((longlong)this + 0x10) == 0) {
    pFVar1 = (pFVar2->TextureReferenceRHI).Reference;
    if (pFVar1 != (FRHITextureReference *)0x0) {
      (pFVar2->TextureReferenceRHI).Reference = (FRHITextureReference *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
    this_02 = (FRHIResource *)(pFVar2->SamplerStateRHI).Reference;
  }
  else {
    pFVar1 = (pFVar2->TextureReferenceRHI).Reference;
    this_00 = *(FRHITextureReference **)
               (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x140) + 0x20);
    if (pFVar1 != this_00) {
      (pFVar2->TextureReferenceRHI).Reference = this_00;
      if (this_00 != (FRHITextureReference *)0x0) {
        FRHIResource::AddRef((FRHIResource *)this_00);
      }
      if (pFVar1 != (FRHITextureReference *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar1);
      }
    }
    pFVar3 = UTexture::GetResource(*(UTexture **)((longlong)this + 0x10));
    if (pFVar3 != (FTextureResource *)0x0) {
      pFVar3 = UTexture::GetResource(*(UTexture **)((longlong)this + 0x10));
      this_02 = (FRHIResource *)(pFVar2->SamplerStateRHI).Reference;
      this_01 = (FRHIResource *)pFVar3->_padding_;
      if (this_02 == this_01) {
        return;
      }
      (pFVar2->SamplerStateRHI).Reference = (FRHISamplerState *)this_01;
      if (this_01 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(this_01);
      }
      if (this_02 == (FRHIResource *)0x0) {
        return;
      }
      goto LAB_148ea8a47;
    }
    this_02 = (FRHIResource *)(pFVar2->SamplerStateRHI).Reference;
  }
  if (this_02 == (FRHIResource *)0x0) {
    return;
  }
  (pFVar2->SamplerStateRHI).Reference = (FRHISamplerState *)0x0;
LAB_148ea8a47:
  FRHIResource::Release(this_02);
  return;
}

// BuildShaderParameters @ 148eace70

void __thiscall
UNiagaraDataInterfaceSceneCapture2D::BuildShaderParameters
          (UNiagaraDataInterfaceSceneCapture2D *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar5 = TShaderParameterStructTypeInfo<NDISceneCapture2DLocal::FShaderParameters>::
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
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0xf0;
  return;
}

// CanExecuteOnTarget @ 148eadd40

bool __thiscall
UNiagaraDataInterfaceSceneCapture2D::CanExecuteOnTarget
          (UNiagaraDataInterfaceSceneCapture2D *this,ENiagaraSimTarget param_1)

{
  return param_1 == GPUComputeSim;
}

// CanExposeVariables @ 148eadd70

bool __thiscall
UNiagaraDataInterfaceSceneCapture2D::CanExposeVariables(UNiagaraDataInterfaceSceneCapture2D *this)

{
  return true;
}

// CopyToInternal @ 148eaf890

bool __thiscall
UNiagaraDataInterfaceSceneCapture2D::CopyToInternal
          (UNiagaraDataInterfaceSceneCapture2D *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  double dVar2;
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
      *(ENDISceneCapture2DSourceMode *)&param_1[1]._padding_ = this->SourceMode;
      param_1[1]._padding_ = (this->SceneCaptureUserParameter).Parameter._padding_;
      *(int *)&param_1[1]._padding_ = (int)(this->SceneCaptureUserParameter).Parameter._padding_;
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_1[1]._padding_,
                 &(this->SceneCaptureUserParameter).Parameter.VarData);
      param_1[2].field_0x30 = (this->ManagedCaptureSource).Value;
      *(TIntPoint<int>_u_0 *)&param_1[2].field_0x34 = (this->ManagedTextureSize).field0_0x0;
      *(uchar *)((longlong)&param_1[3]._padding_ + 4) = (this->ManagedTextureFormat).Value;
      *(uchar *)((longlong)&param_1[3]._padding_ + 5) = (this->ManagedProjectionType).Value;
      *(float *)&param_1[3]._padding_ = this->ManagedFOVAngle;
      *(float *)((longlong)&param_1[3]._padding_ + 4) = this->ManagedOrthoWidth;
      *(bool *)&param_1[3]._padding_ = this->bManagedCaptureEveryFrame;
      *(bool *)((longlong)&param_1[3]._padding_ + 1) = this->bManagedCaptureOnMovement;
      *(bool *)((longlong)&param_1[3]._padding_ + 2) = this->bManagedHideAttachComponent;
      TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *)&param_1[3].Proxy,
                 &this->ManagedShowOnlyActors);
      TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *)&param_1[3]._padding_,
                 &this->ManagedHidenActors);
      *(bool *)&param_1[1].Proxy.Ptr = this->bAutoMoveWithComponent;
      *(ENDISceneCapture2DOffsetMode *)((longlong)&param_1[1].Proxy.Ptr + 1) =
           this->AutoMoveOffsetLocationMode;
      dVar2 = (this->AutoMoveOffsetLocation).field0_0x0._s_0.Y;
      *(double *)&param_1[1].field_0x30 = (this->AutoMoveOffsetLocation).field0_0x0._s_0.X;
      param_1[2]._padding_ = (longlong)dVar2;
      param_1[2]._padding_ = (longlong)(this->AutoMoveOffsetLocation).field0_0x0._s_0.Z;
      *(ENDISceneCapture2DOffsetMode *)&param_1[2]._padding_ = this->AutoMoveOffsetRotationMode;
      dVar2 = (this->AutoMoveOffsetRotation).Yaw;
      param_1[2]._padding_ = (longlong)(this->AutoMoveOffsetRotation).Pitch;
      param_1[2]._padding_ = (longlong)dVar2;
      param_1[2].Proxy.Ptr = (FNiagaraDataInterfaceProxy *)(this->AutoMoveOffsetRotation).Roll;
      return true;
    }
    pFVar5 = GetTypeName<UNiagaraDataInterfaceSceneCapture2D>(&local_28);
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
  pFVar5 = GetTypeName<UNiagaraDataInterfaceSceneCapture2D>(&local_28);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar6);
}

// DestroyPerInstanceData @ 148eb4d10

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceSceneCapture2D::DestroyPerInstanceData
          (UNiagaraDataInterfaceSceneCapture2D *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  longlong lVar1;
  code *pcVar2;
  TObjectPtr<USceneCaptureComponent2D>_u_0 this_00;
  bool bVar3;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar4;
  FUObjectItem *pFVar5;
  uint uVar6;
  undefined ***pppuVar7;
  ulonglong uVar8;
  undefined1 auStack_d8 [32];
  TObjectPtr<USceneCaptureComponent2D>_u_0 local_b8 [2];
  code *local_a8 [2];
  undefined **local_98;
  longlong lStack_90;
  ulong64 local_88;
  undefined ***local_80;
  undefined1 local_78 [16];
  undefined **local_68;
  longlong lStack_60;
  ulong64 local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (*(void **)((longlong)param_1 + 0x100) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x100));
  }
  lVar1 = this->_padding_;
  if ((lVar1 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_98 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UNiagaraDataInterfaceSceneCapture2D::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_88 = param_2->ID;
  local_a8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNiagaraDataInterfaceSceneCapture2D::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_80 = (undefined ***)0x0;
  lStack_90 = lVar1;
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceSceneCapture2D::DestroyPerInstanceData_::__l2::TSTR_NDITexture_RemoveInstance572>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
  }
  else {
    this_02 = FRenderCommandList::GetRenderThread(this_01);
    local_78._0_8_ = local_a8[0];
    local_50 = local_80;
    local_68 = local_98;
    lStack_60 = lStack_90;
    local_58 = local_88;
    local_a8[0] = (code *)0x0;
    local_48 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`UNiagaraDataInterfaceSceneCapture2D::DestroyPerInstanceData'::__l2::TSTR_NDITexture_RemoveInstance572>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_78,pFVar4);
    uVar8 = (ulonglong)local_48;
    if ((2 < uVar8) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_78._0_8_ != (code *)0x0) {
        pppuVar7 = (undefined ***)(local_78 + 0x10);
        if (local_50 != (undefined ***)0x0) {
          pppuVar7 = local_50;
        }
        (*(code *)(*pppuVar7)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(local_78);
    }
  }
  if (local_a8[0] != (code *)0x0) {
    pppuVar7 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar7 = local_80;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  if (this->SourceMode == Managed) {
    local_b8[0].DebugPtr = (USceneCaptureComponent2D *)0x0;
    TMap<unsigned___int64,TObjectPtr<USceneCaptureComponent2D>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<USceneCaptureComponent2D>,0>_>
    ::RemoveAndCopyValue
              (&this->ManagedCaptureComponents,param_2->ID,
               (TObjectPtr<USceneCaptureComponent2D> *)&local_b8[0].ObjectPtr);
    this_00 = local_b8[0];
    if ((local_b8[0].DebugPtr != (USceneCaptureComponent2D *)0x0) &&
       (((uint)*(longlong *)&(local_b8[0].DebugPtr)->field_0x8 >> 0x1e & 1) == 0)) {
      UActorComponent::UnregisterComponent((UActorComponent *)local_b8[0].DebugPtr);
      pFVar5 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&(this_00.DebugPtr)->field_0xc);
      if ((((uint)((ulonglong)(pFVar5->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsRooted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                             ,0xb8,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UObjectBase::AtomicallySetFlags((UObjectBase *)this_00.DebugPtr,RF_MirroredGarbage);
      pFVar5 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&(this_00.DebugPtr)->field_0xc);
      do {
        lVar1 = (pFVar5->field0_0x0).FlagsAndRefCount;
        uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
        if ((uVar6 >> 0x15 & 1) != 0) break;
        if (((ulonglong)pFVar5 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        bVar3 = lVar1 == (pFVar5->field0_0x0).FlagsAndRefCount;
        if (bVar3) {
          (pFVar5->field0_0x0).FlagsAndRefCount =
               (longlong)(int)uVar6 << 0x20 | (longlong)(int)lVar1 | 0x20000000000000;
        }
        UNLOCK();
      } while (!bVar3);
      pFVar5 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&(this_00.DebugPtr)->field_0xc);
      FUObjectItem::ClearRootFlags(pFVar5,Async);
    }
  }
  return;
}

// DrawDebugHud @ 148eb53d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceSceneCapture2D::DrawDebugHud
          (UNiagaraDataInterfaceSceneCapture2D *this,FNDIDrawDebugHudContext *param_1)

{
  FWeakObjectPtr *pFVar1;
  uint uVar2;
  FNiagaraSystemInstance *pFVar3;
  code *pcVar4;
  FName FVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  UNiagaraDataInterfaceSceneCapture2D *pUVar14;
  UObject *pUVar15;
  FWeakObjectPtr *this_00;
  FScriptContainerElement *pFVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStackY_b78 [32];
  FColor local_b28;
  undefined4 uStack_b24;
  double local_b20;
  double local_b18;
  FName local_b10;
  double local_b08 [2];
  FString local_af8;
  TVector<double>_u_0 local_ae8;
  TVector<double>_u_0 local_ad0;
  TVector<double>_u_0 local_ab8;
  TRotator<double> local_aa0;
  TVector<double> local_a88;
  undefined1 local_a68 [32];
  FNiagaraLWCConverter local_a48;
  TVector<double>_u_0 local_a28;
  TRotator<double> local_a10;
  float local_9f8;
  float local_9e8;
  float local_9d8;
  float local_9d4;
  float local_9d0;
  float local_9cc;
  char local_9bc;
  void *local_250;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_e0;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_b0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_b78;
  pFVar3 = param_1->SystemInstance;
  this_00 = (FWeakObjectPtr *)(pFVar3->DataInterfaceInstanceDataOffsets).AllocatorInstance.Data;
  pFVar1 = (FWeakObjectPtr *)
           ((longlong)this_00 + (longlong)(pFVar3->DataInterfaceInstanceDataOffsets).ArrayNum * 0xc)
  ;
  while( true ) {
    if (this_00 == pFVar1) {
      return;
    }
    pUVar14 = (UNiagaraDataInterfaceSceneCapture2D *)FWeakObjectPtr::Get(this_00);
    if (pUVar14 == this) break;
    this_00 = (FWeakObjectPtr *)&this_00[1].ObjectSerialNumber;
  }
  if (this_00 == (FWeakObjectPtr *)0x0) {
    return;
  }
  uVar2 = this_00[1].ObjectIndex;
  uVar13 = 0;
  if ((int)uVar2 < (pFVar3->DataInterfaceInstanceData).ArrayNum) {
    uVar13 = ~uVar2 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar16 = (pFVar3->DataInterfaceInstanceData).AllocatorInstance.Data + (int)uVar2;
  if (pFVar16 == (FScriptContainerElement *)0x0) {
    return;
  }
  pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar16 + 0x118));
  if (pUVar15 != (UObject *)0x0) {
    FNiagaraSystemInstance::GetLWCConverter(param_1->SystemInstance,&local_a48,false);
    local_b08[1]._0_4_ = *(undefined4 *)(pFVar16 + 300);
    local_b08[0] = *(double *)(pFVar16 + 0x124);
    FNiagaraLWCConverter::ConvertSimulationPositionToWorld
              (&local_a48,&local_a88,(FNiagaraPosition *)local_b08);
    local_a68._0_8_ = (undefined8)*(float *)(pFVar16 + 0x130);
    local_a68._8_8_ = (undefined8)*(float *)(pFVar16 + 0x134);
    dVar6 = (double)(float)((ulonglong)*(undefined8 *)(pFVar16 + 0x138) >> 0x20);
    local_a68._24_4_ = SUB84(dVar6,0);
    local_a68._16_8_ = (double)(float)*(undefined8 *)(pFVar16 + 0x138);
    local_a68._28_4_ = (int)((ulonglong)dVar6 >> 0x20);
    UE::Math::TRotator<double>::TRotator<double>(&local_aa0,(TQuat<double> *)local_a68);
    local_b10.ComparisonIndex.Value = *(uint *)&pUVar15->field_0x18;
    local_b10.Number = *(uint *)&pUVar15->field_0x1c;
    ::FName::ToString(&local_b10,&local_af8);
    ::FString::AppendfImpl
              (&param_1->OutputString,
               L"CaptureComponent(%s) Location(%5.2f, %5.2f, %5.2f) Rotation(%5.2f, %5.2f, %5.2f)");
    if (local_af8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_af8.Data.AllocatorInstance.Data);
    }
    if (param_1->bVerbose == false) {
      return;
    }
    FMinimalViewInfo::FMinimalViewInfo((FMinimalViewInfo *)&local_a28._s_0);
    (**(code **)(*(longlong *)pUVar15 + 0x668))(pUVar15,0,&local_a28);
    UE::Math::TRotator<double>::RotateVector
              (&local_a10,(TVector<double> *)&local_ae8._s_0,&UE::Math::TVector<double>::XAxisVector
              );
    UE::Math::TRotator<double>::RotateVector
              (&local_a10,(TVector<double> *)&local_ab8._s_0,&UE::Math::TVector<double>::YAxisVector
              );
    UE::Math::TRotator<double>::RotateVector
              (&local_a10,(TVector<double> *)&local_ad0._s_0,&UE::Math::TVector<double>::ZAxisVector
              );
    if (local_9bc == '\0') {
      if (local_9d0 <= 0.0) {
        local_9d0 = GNearClippingPlane;
      }
      dVar11 = (double)local_9d0;
      dVar8 = __real_3ff0000000000000 / (double)local_9cc;
      fVar17 = tanf(local_9f8 * __real_3f000000 * __real_3c8efa35);
      dVar18 = (double)fVar17;
      FVar5 = (FName)(dVar18 * dVar11);
      dVar6 = dVar8 * dVar11 * dVar18;
      dVar7 = __real_42a0000000000000;
      local_b20 = dVar8 * __real_42a0000000000000 * dVar18;
      local_b10 = (FName)(dVar18 * __real_42a0000000000000);
    }
    else {
      FVar5 = (FName)(double)(local_9e8 * __real_3f000000);
      dVar6 = (double)((local_9e8 * __real_3f000000) / local_9cc);
      dVar11 = (double)local_9d8;
      dVar7 = (double)local_9d4;
      local_b20 = dVar6;
      local_b10 = FVar5;
    }
    fVar17 = __real_bf800000;
    dVar9 = (double)FVar5 * local_ab8._s_0.X;
    dVar8 = (double)FVar5 * local_ab8._s_0.Z;
    dVar22 = (double)FVar5 * local_ab8._s_0.Y;
    local_b08[0] = dVar6 * local_ad0._s_0.Z;
    dVar20 = dVar11 * local_ae8._s_0.X + local_a28._s_0.X;
    dVar10 = dVar11 * local_ae8._s_0.Y + local_a28._s_0.Y;
    dVar18 = dVar11 * local_ae8._s_0.Z + local_a28._s_0.Z;
    dVar19 = dVar20 + dVar6 * local_ad0._s_0.X;
    dVar20 = dVar20 - dVar6 * local_ad0._s_0.X;
    dVar21 = dVar18 + local_b08[0];
    dVar11 = dVar10 + dVar6 * local_ad0._s_0.Y;
    dVar10 = dVar10 - dVar6 * local_ad0._s_0.Y;
    local_140._s_0.X = dVar19 - dVar9;
    local_158._s_0.X = dVar19 + dVar9;
    local_140._s_0.Y = dVar11 - dVar22;
    local_158._s_0.Y = dVar11 + dVar22;
    local_158._s_0.Z = dVar21 + dVar8;
    local_140._s_0.Z = dVar21 - dVar8;
    local_128._s_0.Y = dVar10 - dVar22;
    dVar18 = dVar18 - local_b08[0];
    local_110._s_0.Y = dVar10 + dVar22;
    local_128._s_0.X = dVar20 - dVar9;
    local_110._s_0.X = dVar20 + dVar9;
    local_128._s_0.Z = dVar18 - dVar8;
    local_110._s_0.Z = dVar18 + dVar8;
    dVar18 = dVar7 * local_ae8._s_0.Y + local_a28._s_0.Y;
    dVar9 = dVar7 * local_ae8._s_0.X + local_a28._s_0.X;
    local_b18 = dVar7 * local_ae8._s_0.Z + local_a28._s_0.Z;
    dVar6 = local_b20 * local_ad0._s_0.Z;
    dVar20 = dVar9 + local_b20 * local_ad0._s_0.X;
    dVar9 = dVar9 - local_b20 * local_ad0._s_0.X;
    _local_b28 = CONCAT44((int)((ulonglong)dVar8 >> 0x20),FColor::Red.field0_0x0);
    dVar7 = dVar18 + local_b20 * local_ad0._s_0.Y;
    dVar11 = (double)local_b10 * local_ab8._s_0.X;
    dVar18 = dVar18 - local_b20 * local_ad0._s_0.Y;
    dVar10 = (double)local_b10 * local_ab8._s_0.Z;
    dVar8 = (double)local_b10 * local_ab8._s_0.Y;
    local_f8._s_0.X = dVar20 + dVar11;
    local_e0._s_0.X = dVar20 - dVar11;
    local_e0._s_0.Y = dVar7 - dVar8;
    local_f8._s_0.Y = dVar7 + dVar8;
    local_f8._s_0.Z = local_b18 + dVar6 + dVar10;
    local_e0._s_0.Z = (local_b18 + dVar6) - dVar10;
    local_c8._s_0.X = dVar9 - dVar11;
    local_b0._s_0.X = dVar9 + dVar11;
    local_c8._s_0.Y = dVar18 - dVar8;
    local_b0._s_0.Y = dVar18 + dVar8;
    local_c8._s_0.Z = (local_b18 - dVar6) - dVar10;
    local_b0._s_0.Z = (local_b18 - dVar6) + dVar10;
    local_b20 = dVar6;
    DrawDebugLine(param_1->World,(TVector<double> *)&local_158._s_0,
                  (TVector<double> *)&local_140._s_0,&local_b28,false,__real_bf800000,'\0',0.0);
    DrawDebugLine(param_1->World,(TVector<double> *)&local_140._s_0,
                  (TVector<double> *)&local_128._s_0,&local_b28,false,fVar17,'\0',0.0);
    DrawDebugLine(param_1->World,(TVector<double> *)&local_128._s_0,
                  (TVector<double> *)&local_110._s_0,&local_b28,false,fVar17,'\0',0.0);
    DrawDebugLine(param_1->World,(TVector<double> *)&local_110._s_0,
                  (TVector<double> *)&local_158._s_0,&local_b28,false,fVar17,'\0',0.0);
    DrawDebugLine(param_1->World,(TVector<double> *)&local_f8._s_0,(TVector<double> *)&local_e0._s_0
                  ,&local_b28,false,fVar17,'\0',0.0);
    DrawDebugLine(param_1->World,(TVector<double> *)&local_e0._s_0,(TVector<double> *)&local_c8._s_0
                  ,&local_b28,false,fVar17,'\0',0.0);
    DrawDebugLine(param_1->World,(TVector<double> *)&local_c8._s_0,(TVector<double> *)&local_b0._s_0
                  ,&local_b28,false,fVar17,'\0',0.0);
    DrawDebugLine(param_1->World,(TVector<double> *)&local_b0._s_0,(TVector<double> *)&local_f8._s_0
                  ,&local_b28,false,fVar17,'\0',0.0);
    DrawDebugLine(param_1->World,(TVector<double> *)&local_158._s_0,
                  (TVector<double> *)&local_f8._s_0,&local_b28,false,fVar17,'\0',0.0);
    DrawDebugLine(param_1->World,(TVector<double> *)&local_140._s_0,
                  (TVector<double> *)&local_e0._s_0,&local_b28,false,fVar17,'\0',0.0);
    DrawDebugLine(param_1->World,(TVector<double> *)&local_128._s_0,
                  (TVector<double> *)&local_c8._s_0,&local_b28,false,fVar17,'\0',0.0);
    DrawDebugLine(param_1->World,(TVector<double> *)&local_110._s_0,
                  (TVector<double> *)&local_b0._s_0,&local_b28,false,fVar17,'\0',0.0);
    if (local_250 == (void *)0x0) {
      return;
    }
    FMemory::Free(local_250);
    return;
  }
  ::FString::operator=(&param_1->OutputString,L"Null Capture Component");
  return;
}

// Equals @ 148eb65f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceSceneCapture2D::Equals
          (UNiagaraDataInterfaceSceneCapture2D *this,UNiagaraDataInterface *param_1)

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
      pFVar4 = GetTypeName<UNiagaraDataInterfaceSceneCapture2D_const_>(&local_28);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar6);
    }
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceSceneCapture2D_const_>(&local_28);
      pwVar6 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar5);
    }
    if (((((ENDISceneCapture2DSourceMode)param_1[1]._padding_ == this->SourceMode) &&
         ((this->SceneCaptureUserParameter).Parameter._padding_ == param_1[1]._padding_)) &&
        ((int)(this->SceneCaptureUserParameter).Parameter._padding_ == (int)param_1[1]._padding_))
       && (((((param_1[2].field_0x30 == (this->ManagedCaptureSource).Value &&
              (*(int *)&param_1[2].field_0x34 == (this->ManagedTextureSize).field0_0x0._s_0.X)) &&
             (((int)param_1[3]._padding_ == (this->ManagedTextureSize).field0_0x0._s_0.Y &&
              ((*(uchar *)((longlong)&param_1[3]._padding_ + 4) ==
                (this->ManagedTextureFormat).Value &&
               (*(uchar *)((longlong)&param_1[3]._padding_ + 5) ==
                (this->ManagedProjectionType).Value)))))) &&
            (this->ManagedFOVAngle == *(float *)&param_1[3]._padding_)) &&
           ((((this->ManagedOrthoWidth == *(float *)((longlong)&param_1[3]._padding_ + 4) &&
              ((bool)(char)param_1[3]._padding_ == this->bManagedCaptureEveryFrame)) &&
             ((bool)*(char *)((longlong)&param_1[3]._padding_ + 1) ==
              this->bManagedCaptureOnMovement)) &&
            (((bool)*(char *)((longlong)&param_1[3]._padding_ + 2) ==
              this->bManagedHideAttachComponent &&
             (*(int *)&param_1[3].field_0x30 == (this->ManagedShowOnlyActors).ArrayNum)))))))) {
      bVar2 = CompareItems<TObjectPtr<AActor>,int>
                        ((TObjectPtr<AActor> *)param_1[3].Proxy.Ptr,
                         (TObjectPtr<AActor> *)(this->ManagedShowOnlyActors).AllocatorInstance.Data,
                         *(int *)&param_1[3].field_0x30);
      if ((bVar2) &&
         (iVar1 = (int)param_1[3]._padding_, iVar1 == (this->ManagedHidenActors).ArrayNum)) {
        bVar2 = CompareItems<TObjectPtr<AActor>,int>
                          ((TObjectPtr<AActor> *)param_1[3]._padding_,
                           (TObjectPtr<AActor> *)(this->ManagedHidenActors).AllocatorInstance.Data,
                           iVar1);
        if (((bVar2) && ((bool)*(char *)&param_1[1].Proxy.Ptr == this->bAutoMoveWithComponent)) &&
           ((*(ENDISceneCapture2DOffsetMode *)((longlong)&param_1[1].Proxy.Ptr + 1) ==
             this->AutoMoveOffsetLocationMode &&
            (((((this->AutoMoveOffsetLocation).field0_0x0._s_0.X ==
                *(double *)&param_1[1].field_0x30 &&
               ((this->AutoMoveOffsetLocation).field0_0x0._s_0.Y == (double)param_1[2]._padding_))
              && ((this->AutoMoveOffsetLocation).field0_0x0._s_0.Z == (double)param_1[2]._padding_))
             && ((((ENDISceneCapture2DOffsetMode)param_1[2]._padding_ ==
                   this->AutoMoveOffsetRotationMode &&
                  ((this->AutoMoveOffsetRotation).Pitch == (double)param_1[2]._padding_)) &&
                 (((this->AutoMoveOffsetRotation).Yaw == (double)param_1[2]._padding_ &&
                  ((this->AutoMoveOffsetRotation).Roll == (double)param_1[2].Proxy.Ptr)))))))))) {
          return true;
        }
      }
    }
  }
  return false;
}

// GetExposedVariableValue @ 148ebcfe0

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
UNiagaraDataInterfaceSceneCapture2D::GetExposedVariableValue
          (UNiagaraDataInterfaceSceneCapture2D *this,FNiagaraVariableBase *param_1,void *param_2,
          FNiagaraSystemInstance *param_3,void *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  UObject *pUVar3;
  int iVar4;
  FNiagaraTypeDefinition *pFVar5;
  undefined1 *puVar6;
  
  if ((((param_1->Name != (FName)0x0) &&
       (pFVar5 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle),
       (pFVar5->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0)) &&
      (param_1->Name == NDISceneCapture2DLocal::ExposedVariable_SceneCapture.Name)) &&
     (((param_1->TypeDefHandle).RegisteredTypeIndex ==
       NDISceneCapture2DLocal::ExposedVariable_SceneCapture.TypeDefHandle.RegisteredTypeIndex &&
      (param_2 != (void *)0x0)))) {
    uVar2 = param_3->ID;
    if (*(int *)&(this->ManagedCaptureComponents).field_0x8 !=
        *(int *)&(this->ManagedCaptureComponents).field_0x34) {
      puVar6 = *(undefined1 **)&(this->ManagedCaptureComponents).field_0x40;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &(this->ManagedCaptureComponents).field_0x38;
      }
      iVar4 = *(int *)(puVar6 + ((ulonglong)
                                 (*(int *)&(this->ManagedCaptureComponents).field_0x48 - 1) &
                                (uVar2 >> 0x20) * 0x17 + uVar2) * 4);
      if (iVar4 != -1) {
        do {
          lVar1 = *(longlong *)&this->ManagedCaptureComponents + (longlong)iVar4 * 0x18;
          if (*(ulonglong *)(*(longlong *)&this->ManagedCaptureComponents + (longlong)iVar4 * 0x18)
              == uVar2) {
            if (lVar1 == 0) {
              return false;
            }
            pUVar3 = *(UObject **)(lVar1 + 8);
            if (pUVar3 == (UObject *)0x0) {
              return false;
            }
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar3);
            }
            if (*(longlong *)&pUVar3[0x16].field_0x8 == 0) {
              return false;
            }
            *(longlong *)param_4 = *(longlong *)&pUVar3[0x16].field_0x8;
            return true;
          }
          iVar4 = *(int *)(lVar1 + 0x10);
        } while (iVar4 != -1);
      }
    }
  }
  return false;
}

// GetExposedVariables @ 148ebd120

void __thiscall
UNiagaraDataInterfaceSceneCapture2D::GetExposedVariables
          (UNiagaraDataInterfaceSceneCapture2D *this,
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
  *(FName *)(pFVar1 + (longlong)iVar2 * 0xc) =
       NDISceneCapture2DLocal::ExposedVariable_SceneCapture.Name;
  *(int *)(pFVar1 + (longlong)iVar2 * 0xc + 8) =
       NDISceneCapture2DLocal::ExposedVariable_SceneCapture.TypeDefHandle.RegisteredTypeIndex;
  return;
}

// GetPrivateStaticClass @ 148ebfda0

UClass * __cdecl UNiagaraDataInterfaceSceneCapture2D::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceSceneCapture2D.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceSceneCapture2D",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceSceneCapture2D.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceSceneCapture2D,0x138,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceSceneCapture2D>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceSceneCapture2D>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceSceneCapture2D.InnerSingleton;
}

// GetVMExternalFunction @ 148ec4c80

void __thiscall
UNiagaraDataInterfaceSceneCapture2D::GetVMExternalFunction
          (UNiagaraDataInterfaceSceneCapture2D *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FName FVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  FVar1 = param_1->Name;
  if (FVar1 == NDISceneCapture2DLocal::NAME_GetTextureSize) {
    local_48 = (undefined1  [8])0x0;
    local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_40.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    local_18 = &local_40;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar2[3] = NDISceneCapture2DLocal::VMGetTextureSize;
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
  else if (FVar1 == NDISceneCapture2DLocal::NAME_Project) {
    local_48 = (undefined1  [8])0x0;
    local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_40.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    local_18 = &local_40;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar2[3] = NDISceneCapture2DLocal::VMProject;
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
  else if (FVar1 == NDISceneCapture2DLocal::NAME_Deproject) {
    local_48 = (undefined1  [8])0x0;
    local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_40.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    local_18 = &local_40;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar2[3] = NDISceneCapture2DLocal::VMDeproject;
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
  else if (FVar1 == NDISceneCapture2DLocal::NAME_GetCaptureTransform) {
    local_48 = (undefined1  [8])0x0;
    local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_40.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    local_18 = &local_40;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar2[3] = NDISceneCapture2DLocal::VMGetCaptureTransform;
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
  else if (FVar1 == NDISceneCapture2DLocal::NAME_SetCaptureTransform) {
    local_48 = (undefined1  [8])0x0;
    local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_40.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    local_18 = &local_40;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar2[3] = NDISceneCapture2DLocal::VMSetCaptureTransform;
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
    if (FVar1 != NDISceneCapture2DLocal::NAME_SetRequestCapture) {
      return;
    }
    local_48 = (undefined1  [8])0x0;
    local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_40.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    local_18 = &local_40;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar2[3] = NDISceneCapture2DLocal::VMSetRequestCapture;
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

// HasPostSimulateTick @ 148ec69c0

bool __thiscall
UNiagaraDataInterfaceSceneCapture2D::HasPostSimulateTick(UNiagaraDataInterfaceSceneCapture2D *this)

{
  return true;
}

// HasPreSimulateTick @ 148ec6a20

bool __thiscall
UNiagaraDataInterfaceSceneCapture2D::HasPreSimulateTick(UNiagaraDataInterfaceSceneCapture2D *this)

{
  return true;
}

// InitPerInstanceData @ 148ec8010

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
UNiagaraDataInterfaceSceneCapture2D::InitPerInstanceData
          (UNiagaraDataInterfaceSceneCapture2D *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  TVector<float> *pTVar9;
  TVector<float> local_108;
  TVector<double>_u_0 local_f8;
  FNiagaraLWCConverter local_d8 [8];
  
  memset(param_1,0,0x150);
  NDISceneCapture2DLocal::FNDIInstanceDataCommon::FNDIInstanceDataCommon(param_1);
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0;
  ((FNiagaraParameterDirectBinding<UObject_*> *)((longlong)param_1 + 0xe0))->UObjectOffset = -1;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  iVar8 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)((longlong)param_1 + 0xf8),
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)param_1 + 0xf8) = iVar8;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined2 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_
  ;
  *(float *)((longlong)param_1 + 300) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(TQuat<float> *)((longlong)param_1 + 0x130) = UE::Math::TQuat<float>::Identity;
  *(undefined4 *)((longlong)param_1 + 0x140) = 0x42b40000;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x44000000;
  *(uint *)((longlong)param_1 + 0xd8) = this->ChangeId;
  FNiagaraParameterDirectBinding<UObject_*>::Init
            ((FNiagaraParameterDirectBinding<UObject_*> *)((longlong)param_1 + 0xe0),
             (FNiagaraParameterStore *)&stack0x00000008,
             (FNiagaraVariable *)&param_2->InstanceParameters);
  dVar1 = (param_2->WorldTransform).Rotation.XY.m128d_f64[0];
  dVar2 = (param_2->WorldTransform).Rotation.XY.m128d_f64[1];
  dVar3 = (param_2->WorldTransform).Rotation.ZW.m128d_f64[0];
  dVar4 = (param_2->WorldTransform).Rotation.ZW.m128d_f64[1];
  dVar6 = (param_2->WorldTransform).Translation.XY.m128d_f64[0];
  dVar7 = (param_2->WorldTransform).Translation.XY.m128d_f64[1];
  dVar5 = (param_2->WorldTransform).Translation.ZW.m128d_f64[0];
  FNiagaraSystemInstance::GetLWCConverter(param_2,local_d8,false);
  local_f8._s_0.X = dVar6;
  local_f8._s_0.Y = dVar7;
  local_f8._s_0.Z = dVar5;
  pTVar9 = FNiagaraLWCConverter::ConvertWorldToSimulationVector
                     (local_d8,&local_108,(TVector<double> *)&local_f8._s_0);
  *(undefined8 *)((longlong)param_1 + 0x124) = *(undefined8 *)&pTVar9->field0_0x0;
  *(float *)((longlong)param_1 + 300) = (pTVar9->field0_0x0)._s_0.Z;
  *(float *)((longlong)param_1 + 0x130) = (float)dVar1;
  *(float *)((longlong)param_1 + 0x134) = (float)dVar2;
  *(float *)((longlong)param_1 + 0x138) = (float)dVar3;
  *(float *)((longlong)param_1 + 0x13c) = (float)dVar4;
  *(uint *)((longlong)param_1 + 0xd0) = (uint)(this->ManagedProjectionType).Value;
  *(float *)((longlong)param_1 + 0x140) = this->ManagedFOVAngle;
  *(float *)((longlong)param_1 + 0x144) = this->ManagedOrthoWidth;
  return true;
}

// PerInstanceDataSize @ 148ec8fb0

int __thiscall
UNiagaraDataInterfaceSceneCapture2D::PerInstanceDataSize(UNiagaraDataInterfaceSceneCapture2D *this)

{
  return 0x150;
}

// PerInstanceTick @ 148ec92d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceSceneCapture2D::PerInstanceTick
          (UNiagaraDataInterfaceSceneCapture2D *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  TMap<unsigned___int64,TObjectPtr<USceneCaptureComponent2D>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<USceneCaptureComponent2D>,0>_>
  *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double adVar4 [2];
  double adVar5 [2];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uchar uVar9;
  ENDISceneCapture2DOffsetMode EVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  bool bVar15;
  undefined1 uVar16;
  undefined4 extraout_EAX;
  UPackage *pUVar17;
  UClass *pUVar18;
  TObjectPtr<USceneCaptureComponent2D>_u_0 this_01;
  UObject *pUVar19;
  TObjectPtr<USceneCaptureComponent2D>_u_0 *pTVar20;
  UTextureRenderTarget2D *this_02;
  TQuat<double> *pTVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  longlong *plVar25;
  TRotator<double> *pTVar26;
  undefined1 *puVar27;
  uint uVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar58;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar59;
  undefined1 auVar57 [16];
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  double dVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar69;
  double dVar71;
  undefined1 auVar70 [16];
  double dVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  double dVar76;
  undefined1 auVar75 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auStack_398 [32];
  FWeakObjectPtr local_348;
  int local_340;
  float local_33c;
  undefined8 local_338;
  undefined8 local_330;
  ulong64 local_328;
  ulong64 *local_320;
  UObject *local_318;
  TObjectPtr<USceneCaptureComponent2D>_u_0 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  TQuat<double> local_2b8;
  TQuat<double> local_298;
  TQuat<double> local_278;
  undefined1 local_258 [128];
  undefined1 local_1d8 [128];
  TTransform<double> local_158;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStack_398;
  local_33c = param_3;
  bVar15 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)param_1 + 0x118));
  if ((bVar15) && (*(uint *)((longlong)param_1 + 0xd8) != this->ChangeId)) {
    return true;
  }
  *(uint *)((longlong)param_1 + 0xd8) = this->ChangeId;
  *(undefined1 *)((longlong)param_1 + 0x120) = 0;
  *(bool *)((longlong)param_1 + 0x121) = this->bAutoMoveWithComponent;
  if (this->SourceMode == Managed) {
    this_00 = &this->ManagedCaptureComponents;
    *(bool *)((longlong)param_1 + 0x120) = this->bManagedCaptureEveryFrame;
    local_328 = param_2->ID;
    uVar28 = (int)(local_328 >> 0x20) * 0x17 + (int)local_328;
    if (*(int *)&(this->ManagedCaptureComponents).field_0x8 !=
        *(int *)&(this->ManagedCaptureComponents).field_0x34) {
      puVar27 = *(undefined1 **)&(this->ManagedCaptureComponents).field_0x40;
      if (puVar27 == (undefined1 *)0x0) {
        puVar27 = &(this->ManagedCaptureComponents).field_0x38;
      }
      iVar22 = *(int *)(puVar27 +
                       (ulonglong)
                       (*(int *)&(this->ManagedCaptureComponents).field_0x48 - 1U & uVar28) * 4);
      if (iVar22 != -1) {
        lVar31 = *(longlong *)&this_00->field_0x0;
        do {
          if (*(ulong64 *)(lVar31 + (longlong)iVar22 * 0x18) == local_328) {
            if ((iVar22 != -1) && (lVar31 = lVar31 + (longlong)iVar22 * 0x18, lVar31 != 0))
            goto LAB_148ec9434;
            break;
          }
          iVar22 = *(int *)(lVar31 + 0x10 + (longlong)iVar22 * 0x18);
        } while (iVar22 != -1);
      }
    }
    local_320 = &local_328;
    TSet<TTuple<unsigned___int64,TObjectPtr<USceneCaptureComponent2D>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<USceneCaptureComponent2D>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<unsigned___int64_&&>_>
              ((TSet<TTuple<unsigned___int64,TObjectPtr<USceneCaptureComponent2D>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<USceneCaptureComponent2D>,0>,FDefaultSetAllocator>
                *)this_00,(uint)&local_340,(TKeyInitializer<unsigned___int64_&&> *)(ulonglong)uVar28
               ,(bool *)&local_320);
    lVar31 = *(longlong *)&this_00->field_0x0 + (longlong)local_340 * 0x18;
LAB_148ec9434:
    this_01 = (TObjectPtr<USceneCaptureComponent2D>_u_0)
              ((TObjectPtr<USceneCaptureComponent2D>_u_0 *)(lVar31 + 8))->DebugPtr;
    if ((this_01.DebugPtr == (USceneCaptureComponent2D *)0x0) ||
       (((uint)*(longlong *)&(this_01.DebugPtr)->field_0x8 >> 0x1e & 1) != 0)) {
      local_338 = 0;
      pUVar17 = GetTransientPackage();
      local_330 = 0;
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar17,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar18 = Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_258,pUVar18);
      local_258._48_8_ = (FObjectInstancingGraph *)0x0;
      local_258._56_8_ = (UPackage *)0x0;
      local_258._16_4_ = 0;
      local_258._20_4_ = 0;
      local_258._24_4_ = RF_Transient;
      local_258._40_8_ = (UObject *)0x0;
      local_258[0x20] = false;
      local_258._8_8_ = pUVar17;
      this_01.DebugPtr =
           (USceneCaptureComponent2D *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_258);
      if (local_258._64_8_ != 0) {
        plVar25 = (longlong *)(local_258 + 0x50);
        if ((longlong *)local_258._104_8_ != (longlong *)0x0) {
          plVar25 = (longlong *)local_258._104_8_;
        }
        (**(code **)(*plVar25 + 0x10))();
      }
      (**(code **)(*(longlong *)this_01 + 0x420))(this_01.DebugPtr,0);
      uVar9 = (this->ManagedCaptureSource).Value;
      *(byte *)((longlong)this_01 + 0x252) = *(byte *)((longlong)this_01 + 0x252) & 0xfe;
      *(uchar *)((longlong)this_01 + 0x251) = uVar9;
      *(byte *)((longlong)this_01 + 0x252) =
           (this->bManagedCaptureOnMovement * '\x02' ^ *(byte *)((longlong)this_01 + 0x252)) & 2 ^
           *(byte *)((longlong)this_01 + 0x252);
      *(uchar *)((longlong)this_01 + 0x350) = (this->ManagedProjectionType).Value;
      *(float *)((longlong)this_01 + 0x354) = this->ManagedFOVAngle;
      *(float *)((longlong)this_01 + 0x360) = this->ManagedOrthoWidth;
      if ((this->ManagedShowOnlyActors).ArrayNum < 1) {
        TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *)
                   ((longlong)this_01 + 0x268),&this->ManagedHidenActors);
        if ((this->bManagedHideAttachComponent != false) &&
           (pUVar19 = FWeakObjectPtr::Get(&(param_2->AttachComponent).WeakPtr),
           pUVar19 != (UObject *)0x0)) {
          pUVar18 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
          iVar22 = (int)pUVar18->_padding_;
          if ((iVar22 <= *(int *)(*(longlong *)&pUVar19->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar19->field_0x10 + 0x30) + (longlong)iVar22 * 8) ==
              &pUVar18->_padding_)) {
            plVar25 = (longlong *)((longlong)this_01 + 600);
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar19);
            }
            local_348.ObjectIndex = 0;
            local_348.ObjectSerialNumber = 0;
            local_318 = pUVar19;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar19);
            }
            FWeakObjectPtr::operator=(&local_348,(FObjectPtr)&local_318);
            if ((((FScriptContainerElement *)*plVar25 <= &local_348) &&
                (&local_348 <
                 (FWeakObjectPtr *)
                 ((FScriptContainerElement *)*plVar25 +
                 (longlong)*(int *)((longlong)this_01 + 0x264) * 8))) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
              pcVar11 = (code *)swi(3);
              uVar16 = (*pcVar11)();
              return (bool)uVar16;
            }
            iVar22 = *(int *)((longlong)this_01 + 0x260);
            if (iVar22 == *(int *)((longlong)this_01 + 0x264)) {
              iVar22 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,(ForAnyElementType *)plVar25,
                                  (int *)((longlong)this_01 + 0x264));
            }
            *(int *)((longlong)this_01 + 0x260) = iVar22 + 1;
            *(FWeakObjectPtr *)((FScriptContainerElement *)*plVar25 + (longlong)iVar22 * 8) =
                 local_348;
          }
        }
      }
      else {
        TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *)
                   ((longlong)this_01 + 0x288),&this->ManagedShowOnlyActors);
        *(undefined1 *)((longlong)this_01 + 0x250) = 2;
      }
      UActorComponent::RegisterComponentWithWorld
                ((UActorComponent *)this_01,param_2->World,(FRegisterComponentContext *)0x0);
      *(undefined2 *)((longlong)param_1 + 0x120) = 0x101;
      pTVar20 = &TMapBase<unsigned___int64,TObjectPtr<USceneCaptureComponent2D>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<USceneCaptureComponent2D>,0>_>
                 ::FindChecked((TMapBase<unsigned___int64,TObjectPtr<USceneCaptureComponent2D>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<USceneCaptureComponent2D>,0>_>
                                *)&this->ManagedCaptureComponents,param_2->ID)->field0_0x0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      *pTVar20 = this_01;
    }
    if (((this_01.DebugPtr)->TextureTarget).field0_0x0.DebugPtr == (UTextureRenderTarget2D *)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar18 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_1d8,pUVar18);
      local_1d8._8_8_ = this;
      this_02 = (UTextureRenderTarget2D *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1d8);
      if (local_1d8._64_8_ != 0) {
        plVar25 = (longlong *)(local_1d8 + 0x50);
        if ((longlong *)local_1d8._104_8_ != (longlong *)0x0) {
          plVar25 = (longlong *)local_1d8._104_8_;
        }
        (**(code **)(*plVar25 + 0x10))();
      }
      (this_02->RenderTargetFormat).Value = (this->ManagedTextureFormat).Value;
      UTextureRenderTarget2D::InitAutoFormat
                (this_02,(this->ManagedTextureSize).field0_0x0._s_0.X,
                 (this->ManagedTextureSize).field0_0x0._s_0.Y);
      UTextureRenderTarget2D::UpdateResourceImmediate(this_02,true);
      *(undefined2 *)((longlong)param_1 + 0x120) = 0x101;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_02);
      }
      (((TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_> *)
       ((longlong)this_01 + 0x378))->AllocatorInstance).Data = (FScriptContainerElement *)this_02;
    }
  }
  else {
    this_01.DebugPtr = NDISceneCapture2DLocal::ResolveComponent(this->SourceMode,param_2,param_1);
  }
  local_310 = this_01;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_01.DebugPtr != (USceneCaptureComponent2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_01.DebugPtr);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)((longlong)param_1 + 0x118),(FObjectPtr)&local_310);
  if (*(char *)((longlong)param_1 + 0x121) == '\0') goto LAB_148ec9e2e;
  local_158.Scale3D.XY.m128d_f64[0] = (param_2->WorldTransform).Scale3D.XY.m128d_f64[0];
  local_158.Scale3D.XY.m128d_f64[1] = (param_2->WorldTransform).Scale3D.XY.m128d_f64[1];
  EVar10 = this->AutoMoveOffsetLocationMode;
  local_158.Translation.XY.m128d_f64[0] = (param_2->WorldTransform).Translation.XY.m128d_f64[0];
  local_158.Translation.XY.m128d_f64[1] = (param_2->WorldTransform).Translation.XY.m128d_f64[1];
  local_158.Translation.ZW.m128d_f64[0] = (param_2->WorldTransform).Translation.ZW.m128d_f64[0];
  adVar4 = *&(param_2->WorldTransform).Rotation.ZW.m128d_f64;
  dVar14 = adVar4[0];
  dVar65 = adVar4[1];
  adVar5 = *&(param_2->WorldTransform).Rotation.XY.m128d_f64;
  dVar49 = adVar5[0];
  dVar59 = adVar5[1];
  local_158.Scale3D.ZW.m128d_f64[0] = (param_2->WorldTransform).Scale3D.ZW.m128d_f64[0];
  local_158.Scale3D.ZW.m128d_f64[1] = (param_2->WorldTransform).Scale3D.ZW.m128d_f64[1];
  if (EVar10 == RelativeLocal) {
    dVar69 = dVar49 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar71 = dVar59 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar48 = dVar14 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar58 = dVar65 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    local_158.Translation.ZW.m128d_f64[0] =
         (this->AutoMoveOffsetLocation).field0_0x0._s_0.Z - local_158.Translation.ZW.m128d_f64[0];
    local_158.Translation.XY.m128d_f64[0] =
         (this->AutoMoveOffsetLocation).field0_0x0._s_0.X - local_158.Translation.XY.m128d_f64[0];
    local_158.Translation.XY.m128d_f64[1] =
         (this->AutoMoveOffsetLocation).field0_0x0._s_0.Y - local_158.Translation.XY.m128d_f64[1];
    uVar60 = (undefined4)((ulonglong)local_158.Translation.XY.m128d_f64[1] >> 0x20);
    auVar66._8_4_ = SUB84(dVar71,0);
    auVar66._0_8_ = dVar69;
    auVar66._12_4_ = (int)((ulonglong)dVar71 >> 0x20);
    auVar51._8_4_ = SUB84(dVar58,0);
    auVar51._0_8_ = dVar48;
    auVar51._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
    auVar67 = blendpd(auVar66,auVar51,2);
    auVar81._8_4_ = SUB84(local_158.Translation.XY.m128d_f64[1],0);
    auVar81._0_8_ = local_158.Translation.XY.m128d_f64[0];
    auVar81._12_4_ = uVar60;
    auVar50._8_4_ = SUB84(local_158.Translation.XY.m128d_f64[1],0);
    auVar50._0_8_ = local_158.Translation.XY.m128d_f64[0];
    auVar50._12_4_ = uVar60;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = local_158.Translation.ZW.m128d_f64[0];
    auVar51 = blendpd(auVar50,auVar13,2);
    auVar32._8_4_ = SUB84(dVar48,0);
    auVar32._0_8_ = dVar71;
    auVar32._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
    auVar82._0_8_ = auVar81._8_8_ * dVar69 - dVar71 * local_158.Translation.XY.m128d_f64[0];
    auVar82._8_8_ =
         local_158.Translation.ZW.m128d_f64[0] * dVar71 -
         auVar32._8_8_ * local_158.Translation.XY.m128d_f64[1];
    auVar52._0_8_ = auVar51._0_8_ * dVar48 - auVar67._0_8_ * local_158.Translation.ZW.m128d_f64[0];
    auVar52._8_8_ = auVar51._8_8_ * dVar58 - auVar67._8_8_ * 0.0;
    auVar51 = blendpd(auVar82,auVar52,2);
    dVar72 = auVar82._8_8_ + auVar82._8_8_;
    dVar76 = auVar52._0_8_ + auVar52._0_8_;
    uVar60 = SUB84(dVar76,0);
    uVar61 = (undefined4)((ulonglong)dVar76 >> 0x20);
    auVar83._0_8_ = auVar51._0_8_ + auVar51._0_8_;
    auVar83._8_8_ = auVar51._8_8_ + auVar51._8_8_;
    auVar79._8_4_ = uVar60;
    auVar79._0_8_ = dVar72;
    auVar79._12_4_ = uVar61;
    auVar33._8_4_ = uVar60;
    auVar33._0_8_ = dVar72;
    auVar33._12_4_ = uVar61;
    auVar77._8_4_ = uVar60;
    auVar77._0_8_ = dVar72;
    auVar77._12_4_ = uVar61;
    auVar51 = blendpd(auVar77,auVar83,2);
    auVar80._0_8_ = auVar79._8_8_ * dVar69 - dVar72 * dVar71;
    auVar80._8_8_ = auVar83._0_8_ * dVar71 - auVar33._8_8_ * dVar48;
    auVar34._8_4_ = SUB84(auVar83._8_8_,0);
    auVar34._0_8_ = auVar83._0_8_;
    auVar34._12_4_ = (int)((ulonglong)auVar83._8_8_ >> 0x20);
    auVar78._0_8_ = auVar51._0_8_ * dVar48 - auVar83._0_8_ * auVar67._0_8_;
    auVar78._8_8_ = auVar51._8_8_ * dVar58 - auVar34._8_8_ * auVar67._8_8_;
    auVar51 = *(undefined1 (*) [16])(param_2->WorldTransform).Scale3D.XY.m128d_f64;
    lVar31 = -(ulonglong)
              ((double)CONCAT44((uint)((ulonglong)local_158.Scale3D.ZW.m128d_f64[0] >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(local_158.Scale3D.ZW.m128d_f64[0],0) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar73._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar51._4_4_,
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar51._0_4_);
    auVar73._8_4_ = _UNK_15061cc88 & auVar51._8_4_;
    auVar73._12_4_ = _UNK_15061cc8c & auVar51._12_4_;
    lVar29 = -(ulonglong)(auVar73._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar30 = -(ulonglong)(auVar73._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar51 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar51);
    auVar35._8_4_ = SUB84(auVar80._8_8_,0);
    auVar35._0_8_ = auVar80._0_8_;
    auVar35._12_4_ = (int)((ulonglong)auVar80._8_8_ >> 0x20);
    auVar74._0_8_ =
         (double)CONCAT44(~(uint)((ulonglong)lVar29 >> 0x20) & auVar51._4_4_,
                          ~(uint)lVar29 & auVar51._0_4_);
    auVar74._8_4_ = ~(uint)lVar30 & auVar51._8_4_;
    auVar74._12_4_ = ~(uint)((ulonglong)lVar30 >> 0x20) & auVar51._12_4_;
    auVar67._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar67._0_8_ = local_158.Scale3D.ZW.m128d_f64[0];
    auVar67._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar51 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar67);
    local_158.Translation.XY.m128d_f64[0] =
         auVar74._0_8_ * (dVar72 * dVar58 + local_158.Translation.XY.m128d_f64[0] + auVar35._8_8_);
    local_158.Translation.XY.m128d_f64[1] =
         auVar74._8_8_ * (dVar76 * dVar58 + local_158.Translation.XY.m128d_f64[1] + auVar78._0_8_);
    auVar67 = blendpd(auVar80,auVar78,2);
    local_158.Translation.ZW.m128d_f64[0] =
         (double)CONCAT44(~(uint)((ulonglong)lVar31 >> 0x20) & auVar51._4_4_,
                          ~(uint)lVar31 & auVar51._0_4_) *
         (auVar83._0_8_ * dVar58 + local_158.Translation.ZW.m128d_f64[0] + auVar67._0_8_);
  }
  else if (EVar10 == RelativeWorld) {
    local_158.Translation.ZW.m128d_f64[0] =
         local_158.Translation.ZW.m128d_f64[0] + (this->AutoMoveOffsetLocation).field0_0x0._s_0.Z;
    local_158.Translation.XY.m128d_f64[0] =
         local_158.Translation.XY.m128d_f64[0] + (this->AutoMoveOffsetLocation).field0_0x0._s_0.X;
    local_158.Translation.XY.m128d_f64[1] =
         local_158.Translation.XY.m128d_f64[1] + (this->AutoMoveOffsetLocation).field0_0x0._s_0.Y;
  }
  else if (EVar10 == AbsoluteWorld) {
    local_158.Translation.XY.m128d_f64[0] = (this->AutoMoveOffsetLocation).field0_0x0._s_0.X;
    local_158.Translation.XY.m128d_f64[1] = (this->AutoMoveOffsetLocation).field0_0x0._s_0.Y;
    local_158.Translation.ZW.m128d_f64[0] = (this->AutoMoveOffsetLocation).field0_0x0._s_0.Z;
  }
  local_158.Translation.ZW.m128d_f64[1] = 0.0;
  local_308 = local_158.Scale3D.XY.m128d_f64[0];
  uStack_300 = local_158.Scale3D.XY.m128d_f64[1];
  local_158.Rotation.XY.m128d_f64 = adVar5;
  local_158.Rotation.ZW.m128d_f64 = adVar4;
  if (this->AutoMoveOffsetRotationMode == 1) {
    pTVar26 = &this->AutoMoveOffsetRotation;
    pTVar21 = UE::Math::TRotator<double>::Quaternion(pTVar26,&local_278);
    iVar22 = (int)pTVar26;
    dVar65 = local_158.Rotation.ZW.m128d_f64[0];
    dVar59 = local_158.Rotation.XY.m128d_f64[0];
    dVar72 = local_158.Rotation.XY.m128d_f64[1];
    uVar60 = local_158.Rotation.XY.m128d_f64[1]._0_4_;
    uVar61 = local_158.Rotation.XY.m128d_f64[1]._4_4_;
    uVar62 = local_158.Rotation.XY.m128d_f64[0]._0_4_;
    uVar63 = local_158.Rotation.XY.m128d_f64[0]._4_4_;
    uVar2 = pTVar21->X;
    uVar7 = pTVar21->Y;
    uVar3 = pTVar21->Z;
    uVar8 = pTVar21->W;
    auVar37._8_4_ = (int)uVar8;
    auVar37._0_8_ = uVar8;
    auVar37._12_4_ = (int)((ulonglong)uVar8 >> 0x20);
    auVar53._8_4_ = (int)uVar7;
    auVar53._0_8_ = uVar7;
    auVar53._12_4_ = (int)((ulonglong)uVar7 >> 0x20);
    dVar49 = local_158.Rotation.ZW.m128d_f64[1];
    dVar48 = (double)uVar2 * dVar49 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             (double)uVar8 * dVar59;
    dVar58 = (double)uVar2 * dVar65 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             auVar37._8_8_ * dVar72;
    auVar36._8_4_ = (int)uVar3;
    auVar36._0_8_ = uVar3;
    auVar36._12_4_ = (int)((ulonglong)uVar3 >> 0x20);
    dVar14 = (double)uVar2 * dVar72 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             (double)uVar8 * dVar65 +
             (double)uVar7 * dVar59 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             (double)uVar3 * dVar49 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar65 = (double)uVar2 * dVar59 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             (double)uVar8 * dVar49 +
             (double)uVar7 * dVar72 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             (double)uVar3 * dVar65 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
LAB_148ec9c82:
    dVar49 = dVar48 + auVar53._0_8_ * local_158.Rotation.ZW.m128d_f64[0] *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             auVar36._0_8_ * (double)CONCAT44(uVar61,uVar60) *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar59 = dVar58 + auVar53._8_8_ * local_158.Rotation.ZW.m128d_f64[1] *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             auVar36._8_8_ * (double)CONCAT44(uVar63,uVar62) *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
LAB_148ec9ca4:
    uVar62 = SUB84(pTVar21,0);
    uVar60 = local_158.Scale3D.XY.m128d_f64[0]._4_4_;
    uVar61 = local_158.Scale3D.XY.m128d_f64[1]._4_4_;
  }
  else {
    iVar22 = this->AutoMoveOffsetRotationMode - 2;
    if (iVar22 == 0) {
      pTVar26 = &this->AutoMoveOffsetRotation;
      pTVar21 = UE::Math::TRotator<double>::Quaternion(pTVar26,&local_298);
      iVar22 = (int)pTVar26;
      auVar70._8_4_ = adVar4[1]._0_4_;
      auVar70._0_8_ = dVar65;
      auVar70._12_4_ = adVar4[1]._4_4_;
      auVar53._0_8_ = pTVar21->Z;
      auVar53._8_8_ = pTVar21->W;
      uVar1 = pTVar21->X;
      uVar6 = pTVar21->Y;
      local_158.Rotation.ZW.m128d_f64[1]._0_4_ = adVar5[1]._0_4_;
      local_158.Rotation.ZW.m128d_f64[0] = dVar59;
      local_158.Rotation.ZW.m128d_f64[1]._4_4_ = adVar5[1]._4_4_;
      uVar60 = (undefined4)uVar6;
      uVar61 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uVar62 = (undefined4)uVar1;
      uVar63 = (undefined4)((ulonglong)uVar1 >> 0x20);
      dVar48 = dVar49 * (double)auVar53._8_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               (double)uVar1 * dVar65;
      dVar58 = dVar49 * (double)auVar53._0_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               (double)uVar6 * auVar70._8_8_;
      auVar36._8_4_ = adVar4[0]._0_4_;
      auVar36._0_8_ = dVar14;
      auVar36._12_4_ = adVar4[0]._4_4_;
      dVar72 = dVar14 * (double)auVar53._0_8_;
      dVar14 = dVar49 * (double)uVar6 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
               (double)auVar53._0_8_ * dVar65 +
               (double)uVar1 * dVar59 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
               dVar14 * (double)auVar53._8_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar65 = dVar49 * (double)uVar1 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
               (double)auVar53._8_8_ * auVar70._8_8_ +
               (double)uVar6 * local_158.Rotation.ZW.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               dVar72 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      goto LAB_148ec9c82;
    }
    if (iVar22 == 1) {
      pTVar26 = &this->AutoMoveOffsetRotation;
      pTVar21 = UE::Math::TRotator<double>::Quaternion(pTVar26,&local_2b8);
      iVar22 = (int)pTVar26;
      dVar49 = pTVar21->X;
      dVar59 = pTVar21->Y;
      dVar14 = pTVar21->Z;
      dVar65 = pTVar21->W;
      goto LAB_148ec9ca4;
    }
    local_308._0_4_ = SUB84(local_158.Scale3D.XY.m128d_f64[0],0);
    local_308._4_4_ = (undefined4)((ulonglong)local_158.Scale3D.XY.m128d_f64[0] >> 0x20);
    uStack_300._0_4_ = SUB84(local_158.Scale3D.XY.m128d_f64[1],0);
    uStack_300._4_4_ = (undefined4)((ulonglong)local_158.Scale3D.XY.m128d_f64[1] >> 0x20);
    local_158.Scale3D.XY.m128d_f64[0]._0_4_ = (undefined4)local_308;
    uVar60 = local_308._4_4_;
    local_158.Scale3D.XY.m128d_f64[1]._0_4_ = (undefined4)uStack_300;
    uVar61 = uStack_300._4_4_;
    uVar62 = extraout_EAX;
  }
  local_158.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar65,0);
  local_158.Rotation.ZW.m128d_f64[0] = dVar14;
  local_158.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar65 >> 0x20);
  local_158.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar59,0);
  local_158.Rotation.XY.m128d_f64[0] = dVar49;
  local_158.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar59 >> 0x20);
  if (this_01.DebugPtr != (USceneCaptureComponent2D *)0x0) {
    dVar48 = local_158.Translation.ZW.m128d_f64[0] - *(double *)&(this_01.DebugPtr)->field_0x220;
    dVar58 = local_158.Translation.ZW.m128d_f64[1] - *(double *)&(this_01.DebugPtr)->field_0x228;
    auVar54._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar48 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar48,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar54._8_4_ = SUB84(dVar58,0) & _UNK_15061cc88;
    auVar54._12_4_ = (uint)((ulonglong)dVar58 >> 0x20) & _UNK_15061cc8c;
    uVar63 = SUB84(__real_3f1a36e2e0000000,0);
    uVar64 = (undefined4)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
    auVar38._8_4_ = uVar63;
    auVar38._0_8_ = __real_3f1a36e2e0000000;
    auVar38._12_4_ = uVar64;
    auVar39._8_8_ = -(ulonglong)(auVar38._8_8_ < auVar54._8_8_);
    auVar39._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar54._0_8_);
    dVar48 = local_158.Translation.XY.m128d_f64[0] - *(double *)&(this_01.DebugPtr)->field_0x210;
    dVar58 = local_158.Translation.XY.m128d_f64[1] - *(double *)&(this_01.DebugPtr)->field_0x218;
    uVar28 = movmskpd(iVar22,auVar39);
    auVar55._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar48 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar48,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar55._8_4_ = SUB84(dVar58,0) & _UNK_15061cc88;
    auVar55._12_4_ = (uint)((ulonglong)dVar58 >> 0x20) & _UNK_15061cc8c;
    lVar31 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar55._8_8_);
    auVar12._8_4_ = (int)lVar31;
    auVar12._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar55._0_8_);
    auVar12._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
    iVar22 = movmskpd(uVar62,auVar12);
    if ((uVar28 & 0x3fffffff) == 0 && iVar22 == 0) {
      dVar72 = *(double *)&(this_01.DebugPtr)->field_0x200 + dVar14;
      dVar76 = *(double *)&(this_01.DebugPtr)->field_0x208 + dVar65;
      dVar14 = dVar14 - *(double *)&(this_01.DebugPtr)->field_0x200;
      dVar65 = dVar65 - *(double *)&(this_01.DebugPtr)->field_0x208;
      dVar48 = *(double *)&(this_01.DebugPtr)->field_0x1f0 + dVar49;
      dVar58 = *(double *)&(this_01.DebugPtr)->field_0x1f8 + dVar59;
      dVar49 = dVar49 - *(double *)&(this_01.DebugPtr)->field_0x1f0;
      dVar59 = dVar59 - *(double *)&(this_01.DebugPtr)->field_0x1f8;
      auVar40._8_4_ = uVar63;
      auVar40._0_8_ = __real_3f1a36e2e0000000;
      auVar40._12_4_ = uVar64;
      auVar41._8_8_ =
           -(ulonglong)
            (auVar40._8_8_ <
            (double)CONCAT44((uint)((ulonglong)dVar65 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar65,0) & _UNK_15061cc88));
      auVar41._0_8_ =
           -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      iVar23 = movmskpd(0,auVar41);
      auVar42._8_4_ = uVar63;
      auVar42._0_8_ = __real_3f1a36e2e0000000;
      auVar42._12_4_ = uVar64;
      auVar75._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar72 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar72,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar75._8_4_ = SUB84(dVar76,0) & _UNK_15061cc88;
      auVar75._12_4_ = (uint)((ulonglong)dVar76 >> 0x20) & _UNK_15061cc8c;
      auVar43._8_8_ =
           -(ulonglong)
            (auVar42._8_8_ <
            (double)CONCAT44((uint)((ulonglong)dVar59 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar59,0) & _UNK_15061cc88));
      auVar43._0_8_ =
           -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar49 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar49,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      uVar28 = movmskpd(iVar22,auVar43);
      uVar24 = iVar23 << 2 | uVar28;
      if (uVar24 != 0) {
        auVar44._8_4_ = uVar63;
        auVar44._0_8_ = __real_3f1a36e2e0000000;
        auVar44._12_4_ = uVar64;
        auVar45._8_8_ = -(ulonglong)(auVar44._8_8_ < auVar75._8_8_);
        auVar45._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar75._0_8_);
        uVar24 = movmskpd(uVar24,auVar45);
        auVar56._8_8_ =
             -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar58 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar58,0) & _UNK_15061cc88));
        auVar56._0_8_ =
             -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar48 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar48,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        uVar28 = movmskpd(uVar28,auVar56);
        if ((uVar24 & 0x3fffffff) != 0 || uVar28 != 0) goto LAB_148ec9df5;
      }
      dVar49 = local_158.Scale3D.ZW.m128d_f64[0] - *(double *)&(this_01.DebugPtr)->field_0x240;
      dVar59 = local_158.Scale3D.ZW.m128d_f64[1] - *(double *)&(this_01.DebugPtr)->field_0x248;
      dVar14 = (double)CONCAT44(uVar60,local_158.Scale3D.XY.m128d_f64[0]._0_4_) -
               *(double *)&(this_01.DebugPtr)->field_0x230;
      dVar65 = (double)CONCAT44(uVar61,local_158.Scale3D.XY.m128d_f64[1]._0_4_) -
               *(double *)&(this_01.DebugPtr)->field_0x238;
      auVar57._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar49 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar49,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar57._8_4_ = SUB84(dVar59,0) & _UNK_15061cc88;
      auVar57._12_4_ = (uint)((ulonglong)dVar59 >> 0x20) & _UNK_15061cc8c;
      auVar46._8_4_ = uVar63;
      auVar46._0_8_ = __real_3f1a36e2e0000000;
      auVar46._12_4_ = uVar64;
      auVar47._8_8_ = -(ulonglong)(auVar46._8_8_ < auVar57._8_8_);
      auVar47._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar57._0_8_);
      uVar24 = movmskpd(0,auVar47);
      auVar68._8_8_ =
           -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar65 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar65,0) & _UNK_15061cc88));
      auVar68._0_8_ =
           -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      iVar22 = movmskpd(uVar28,auVar68);
      if ((uVar24 & 0x3fffffff) == 0 && iVar22 == 0) goto LAB_148ec9e0f;
    }
LAB_148ec9df5:
    USceneComponent::SetWorldTransform
              ((USceneComponent *)this_01.DebugPtr,&local_158,false,(FHitResult *)0x0,None);
  }
LAB_148ec9e0f:
  *(undefined1 *)((longlong)param_1 + 0x121) = 0;
  param_3 = local_33c;
LAB_148ec9e2e:
  if (this_01.DebugPtr != (USceneCaptureComponent2D *)0x0) {
    NDISceneCapture2DLocal::FNDIInstanceData_GameThread::UpdateTransformData
              (param_1,param_3,param_2,this_01.DebugPtr);
  }
  return false;
}

// PerInstanceTickPostSimulate @ 148ecac00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UNiagaraDataInterfaceSceneCapture2D::PerInstanceTickPostSimulate
          (UNiagaraDataInterfaceSceneCapture2D *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  code *pcVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  bool bVar13;
  undefined1 uVar14;
  int iVar15;
  USceneCaptureComponent2D *this_00;
  TVector<double> *pTVar16;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  FNiagaraLWCConverter *this_03;
  code **ppcVar21;
  ulonglong uVar22;
  TObjectPtr<UTextureRenderTarget2D>_u_0 TVar23;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auStack_1e8 [32];
  FNiagaraPosition local_1b8;
  double local_1a8;
  double local_1a0;
  double local_198;
  FNiagaraLWCConverter local_190;
  TVector<double> local_178;
  code *local_158 [2];
  code *local_148 [3];
  code **local_130;
  undefined1 local_128 [40];
  code **local_100;
  byte local_f8;
  TTransform<double> local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  TVar23.DebugPtr = (UTextureRenderTarget2D *)0x0;
  this_00 = (USceneCaptureComponent2D *)
            FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x118));
  if (this_00 == (USceneCaptureComponent2D *)0x0) goto LAB_148ecaec4;
  TVar23 = (this_00->TextureTarget).field0_0x0;
  if (*(char *)((longlong)param_1 + 0x121) != '\0') {
    FNiagaraSystemInstance::GetLWCConverter(param_2,&local_190,false);
    local_e8.Rotation.XY.m128d_f64[0] = *(double *)&this_00->field_0x1f0;
    local_e8.Rotation.XY.m128d_f64[1] = *(double *)&this_00->field_0x1f8;
    local_e8.Rotation.ZW.m128d_f64[0] = *(double *)&this_00->field_0x200;
    local_e8.Rotation.ZW.m128d_f64[1] = *(double *)&this_00->field_0x208;
    local_1b8._8_4_ = *(undefined4 *)((longlong)param_1 + 300);
    this_03 = &local_190;
    local_e8.Translation.XY.m128d_f64[0] = *(double *)&this_00->field_0x210;
    local_e8.Translation.XY.m128d_f64[1] = *(double *)&this_00->field_0x218;
    local_e8.Scale3D.XY.m128d_f64[0] = *(double *)&this_00->field_0x230;
    local_e8.Scale3D.XY.m128d_f64[1] = *(double *)&this_00->field_0x238;
    local_e8.Translation.ZW.m128d_f64[0] = *(double *)&this_00->field_0x220;
    local_e8.Translation.ZW.m128d_f64[1] = *(double *)&this_00->field_0x228;
    local_1b8._0_8_ = *(undefined8 *)((longlong)param_1 + 0x124);
    local_e8.Scale3D.ZW.m128d_f64[0] = *(double *)&this_00->field_0x240;
    local_e8.Scale3D.ZW.m128d_f64[1] = *(double *)&this_00->field_0x248;
    pTVar16 = FNiagaraLWCConverter::ConvertSimulationPositionToWorld(this_03,&local_178,&local_1b8);
    local_e8.Translation.ZW.m128d_f64[0] = (pTVar16->field0_0x0)._s_0.Z;
    local_e8.Translation.XY.m128d_f64[0] = (pTVar16->field0_0x0)._s_0.X;
    local_e8.Translation.XY.m128d_f64[1] = (pTVar16->field0_0x0)._s_0.Y;
    dVar29 = (double)(float)*(undefined8 *)((longlong)param_1 + 0x138);
    dVar30 = (double)(float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x138) >> 0x20);
    dVar26 = (double)*(float *)((longlong)param_1 + 0x130);
    dVar28 = (double)*(float *)((longlong)param_1 + 0x134);
    dVar8 = *(double *)&this_00->field_0x220 - local_e8.Translation.ZW.m128d_f64[0];
    dVar9 = *(double *)&this_00->field_0x228 - 0.0;
    local_e8.Translation.ZW.m128d_f64[1] = 0.0;
    dVar25 = *(double *)&this_00->field_0x210 - local_e8.Translation.XY.m128d_f64[0];
    dVar27 = *(double *)&this_00->field_0x218 - local_e8.Translation.XY.m128d_f64[1];
    lVar24 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar9,0) & _UNK_15061cc88));
    auVar3._8_4_ = (int)lVar24;
    auVar3._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
    ;
    auVar3._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
    uVar18 = movmskpd((int)this_03,auVar3);
    lVar24 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar27,0) & _UNK_15061cc88));
    auVar10._8_4_ = (int)lVar24;
    auVar10._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar25,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar10._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
    iVar15 = movmskpd((int)pTVar16,auVar10);
    local_1a8 = __real_3f1a36e2e0000000;
    local_e8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar28,0);
    local_e8.Rotation.XY.m128d_f64[0] = dVar26;
    local_e8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar28 >> 0x20);
    local_e8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar30,0);
    local_e8.Rotation.ZW.m128d_f64[0] = dVar29;
    local_e8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar30 >> 0x20);
    if ((uVar18 & 0x3fffffff) == 0 && iVar15 == 0) {
      local_1a0 = __real_3f1a36e2e0000000;
      dVar8 = *(double *)&this_00->field_0x200 - dVar29;
      dVar9 = *(double *)&this_00->field_0x208 - dVar30;
      dVar25 = dVar26 + *(double *)&this_00->field_0x1f0;
      dVar27 = dVar28 + *(double *)&this_00->field_0x1f8;
      dVar26 = *(double *)&this_00->field_0x1f0 - dVar26;
      dVar28 = *(double *)&this_00->field_0x1f8 - dVar28;
      lVar24 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar9,0) & _UNK_15061cc88));
      auVar4._8_4_ = (int)lVar24;
      auVar4._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                                      ));
      auVar4._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
      iVar19 = movmskpd(0,auVar4);
      lVar24 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar28,0) & _UNK_15061cc88));
      dVar29 = *(double *)&this_00->field_0x200 + dVar29;
      dVar30 = *(double *)&this_00->field_0x208 + dVar30;
      auVar5._8_4_ = (int)lVar24;
      auVar5._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar26,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar5._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
      uVar18 = movmskpd(iVar15,auVar5);
      uVar20 = iVar19 << 2 | uVar18;
      if (uVar20 != 0) {
        lVar24 = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar30,0) & _UNK_15061cc88));
        auVar6._8_4_ = (int)lVar24;
        auVar6._0_8_ = -(ulonglong)
                        (__real_3f1a36e2e0000000 <
                        (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(dVar29,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar6._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
        uVar20 = movmskpd(uVar20,auVar6);
        lVar24 = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar27,0) & _UNK_15061cc88));
        auVar11._8_4_ = (int)lVar24;
        auVar11._0_8_ =
             -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar25,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar11._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
        uVar18 = movmskpd(uVar18,auVar11);
        if ((uVar20 & 0x3fffffff) != 0 || uVar18 != 0) goto LAB_148ecae68;
      }
      dVar8 = *(double *)&this_00->field_0x240 - local_e8.Scale3D.ZW.m128d_f64[0];
      dVar9 = *(double *)&this_00->field_0x248 - local_e8.Scale3D.ZW.m128d_f64[1];
      dVar28 = *(double *)&this_00->field_0x230 - local_e8.Scale3D.XY.m128d_f64[0];
      dVar26 = *(double *)&this_00->field_0x238 - local_e8.Scale3D.XY.m128d_f64[1];
      local_198 = __real_3f1a36e2e0000000;
      lVar24 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar9,0) & _UNK_15061cc88));
      auVar7._8_4_ = (int)lVar24;
      auVar7._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                                      ));
      auVar7._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
      uVar20 = movmskpd(0,auVar7);
      lVar24 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar26,0) & _UNK_15061cc88));
      auVar12._8_4_ = (int)lVar24;
      auVar12._0_8_ =
           -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar28,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar12._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
      iVar15 = movmskpd(uVar18,auVar12);
      if ((uVar20 & 0x3fffffff) != 0 || iVar15 != 0) goto LAB_148ecae68;
    }
    else {
LAB_148ecae68:
      USceneComponent::SetWorldTransform
                ((USceneComponent *)this_00,&local_e8,false,(FHitResult *)0x0,None);
    }
    NDISceneCapture2DLocal::FNDIInstanceData_GameThread::UpdateTransformData
              (param_1,param_3,param_2,this_00);
  }
  if (*(char *)((longlong)param_1 + 0x120) != '\0') {
    USceneCaptureComponent2D::CaptureSceneDeferred(this_00);
  }
LAB_148ecaec4:
  *(undefined2 *)((longlong)param_1 + 0x120) = 0;
  if (((uint)this->_padding_ >> 2 & 1) != 0) {
    pcVar1 = (code *)this->_padding_;
    if (pcVar1 == (code *)0x0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypedProxy != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                          ,0x3a0,L"");
      if (bVar13) {
        pcVar1 = (code *)swi(3);
        uVar14 = (*pcVar1)();
        return (bool)uVar14;
      }
    }
    pcVar2 = (code *)param_2->ID;
    local_158[0] = (code *)0x0;
    local_130 = FMemory::Malloc(0x20,8);
    *local_130 = (code *)&UE::Core::Private::Function::
                          TFunction_OwnedObject<`UNiagaraDataInterfaceSceneCapture2D::PerInstanceTickPostSimulate'::`17'::<lambda_1>,1,1>
                          ::_vftable_;
    local_130[1] = pcVar1;
    local_130[2] = pcVar2;
    ((TObjectPtr<UTextureRenderTarget2D>_u_0 *)(local_130 + 3))->DebugPtr =
         (UTextureRenderTarget2D *)TVar23;
    if (local_130 + 1 != (code **)0x0) {
      local_158[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UNiagaraDataInterfaceSceneCapture2D::PerInstanceTickPostSimulate'::__l17::<lambda_1>,void,FRHICommandListImmediate_&>
                     ::Call;
    }
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceSceneCapture2D::PerInstanceTickPostSimulate_::__l17::TSTR_NDISceneCapture2D_UpdateInstance749>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_158);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_128._0_8_ = local_158[0];
      local_100 = local_130;
      local_130 = (code **)0x0;
      local_128._16_8_ = local_148[0];
      local_128._24_8_ = local_148[1];
      local_128._32_8_ = local_148[2];
      local_158[0] = (code *)0x0;
      local_f8 = 2;
      pFVar17 = (FRenderCommandTag *)
                TRenderCommandTag<`UNiagaraDataInterfaceSceneCapture2D::PerInstanceTickPostSimulate'::__l17::TSTR_NDISceneCapture2D_UpdateInstance749>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_128,pFVar17);
      uVar22 = (ulonglong)local_f8;
      if (2 < uVar22) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L"");
        if (bVar13) {
          pcVar1 = (code *)swi(3);
          uVar14 = (*pcVar1)();
          return (bool)uVar14;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar22] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_128._0_8_ != (code *)0x0) {
          ppcVar21 = (code **)(local_128 + 0x10);
          if (local_100 != (code **)0x0) {
            ppcVar21 = local_100;
          }
          (**(code **)(*ppcVar21 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar22])(local_128);
      }
    }
    if (local_158[0] != (code *)0x0) {
      ppcVar21 = local_158 + 2;
      if (local_130 != (code **)0x0) {
        ppcVar21 = local_130;
      }
      (**(code **)(*ppcVar21 + 0x10))();
    }
  }
  return false;
}

// PostInitProperties @ 148ecb410

void __thiscall
UNiagaraDataInterfaceSceneCapture2D::PostInitProperties(UNiagaraDataInterfaceSceneCapture2D *this)

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
    ::FName::FName((FName *)&local_res8.ObjectPtr,L"SceneCapture");
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
    NDISceneCapture2DLocal::ExposedVariable_SceneCapture.TypeDefHandle.RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register
                   (&local_30,(FNiagaraTypeDefinition *)&local_20.ObjectPtr);
    NDISceneCapture2DLocal::ExposedVariable_SceneCapture.Name = (FName)local_38.ObjectPtr.field0_0x0
    ;
  }
  return;
}

// ProvidePerInstanceDataForRenderThread @ 148ecc450

void __thiscall
UNiagaraDataInterfaceSceneCapture2D::ProvidePerInstanceDataForRenderThread
          (UNiagaraDataInterfaceSceneCapture2D *this,void *param_1,void *param_2,ulong64 *param_3)

{
  undefined8 uVar1;
  
  memset(param_1,0,0xe0);
  NDISceneCapture2DLocal::FNDIInstanceDataCommon::FNDIInstanceDataCommon(param_1);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x38);
  *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x48);
  *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x58);
  *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
  *(undefined8 *)((longlong)param_1 + 0x58) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x68);
  *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)((longlong)param_2 + 0x60);
  *(undefined8 *)((longlong)param_1 + 0x68) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x78);
  *(undefined8 *)((longlong)param_1 + 0x70) = *(undefined8 *)((longlong)param_2 + 0x70);
  *(undefined8 *)((longlong)param_1 + 0x78) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x88);
  *(undefined8 *)((longlong)param_1 + 0x80) = *(undefined8 *)((longlong)param_2 + 0x80);
  *(undefined8 *)((longlong)param_1 + 0x88) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x98);
  *(undefined8 *)((longlong)param_1 + 0x90) = *(undefined8 *)((longlong)param_2 + 0x90);
  *(undefined8 *)((longlong)param_1 + 0x98) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xa8);
  *(undefined8 *)((longlong)param_1 + 0xa0) = *(undefined8 *)((longlong)param_2 + 0xa0);
  *(undefined8 *)((longlong)param_1 + 0xa8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xb8);
  *(undefined8 *)((longlong)param_1 + 0xb0) = *(undefined8 *)((longlong)param_2 + 0xb0);
  *(undefined8 *)((longlong)param_1 + 0xb8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 200);
  *(undefined8 *)((longlong)param_1 + 0xc0) = *(undefined8 *)((longlong)param_2 + 0xc0);
  *(undefined8 *)((longlong)param_1 + 200) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xd0) = *(undefined4 *)((longlong)param_2 + 0xd0);
  return;
}

// SetSceneCapture2DManagedShowOnlyActors @ 148ecff90

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceSceneCapture2D::SetSceneCapture2DManagedShowOnlyActors
          (UNiagaraComponent *param_1,FName param_2,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  UNiagaraDataInterface *pUVar3;
  UClass *pUVar4;
  TObjectPtr<UObject>_u_0 local_58;
  undefined2 local_50;
  undefined1 local_4e;
  undefined8 local_4c;
  undefined4 local_44;
  undefined1 local_40 [8];
  FNiagaraTypeDefinitionHandle local_38 [2];
  ForAnyElementType local_30;
  undefined8 local_28;
  
  if (param_1 == (UNiagaraComponent *)0x0) {
    pFVar2 = (param_3->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
      return;
    }
  }
  else {
    local_58.DebugPtr = (UObject *)StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_58.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable(local_58.DebugPtr);
    }
    local_4e = 0;
    local_50 = 1;
    local_4c = 0xffffffffffffffff;
    local_44 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_58.ObjectPtr);
    local_40 = (undefined1  [8])param_2;
    local_38[0].RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register
                   (local_38,(FNiagaraTypeDefinition *)&local_58.ObjectPtr);
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28._0_4_ = 0;
    local_28._4_4_ = 0;
    pUVar3 = FNiagaraParameterStore::GetDataInterface
                       ((FNiagaraParameterStore *)&param_1->OverrideParameters,
                        (FNiagaraVariable *)local_40);
    if (pUVar3 != (UNiagaraDataInterface *)0x0) {
      pUVar4 = StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        iVar1 = param_3->ArrayNum;
        pFVar2 = (param_3->AllocatorInstance).Data;
        *(int *)&pUVar3[3].field_0x30 = iVar1;
        if ((iVar1 == 0) && (*(int *)&pUVar3[3].field_0x34 == 0)) {
          *(undefined4 *)&pUVar3[3].field_0x34 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar1,*(int *)&pUVar3[3].field_0x34,(ForAnyElementType *)&pUVar3[3].Proxy,
                     iVar1,(int *)&pUVar3[3].field_0x34);
          ConstructItems<TObjectPtr<AActor>,AActor_*,int>
                    (pUVar3[3].Proxy.Ptr,(AActor **)pFVar2,iVar1);
        }
        *(int *)&pUVar3[4]._padding_ = (int)pUVar3[4]._padding_ + 1;
      }
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    pFVar2 = (param_3->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  return;
}

// SetShaderParameters @ 148ed0d90

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
UNiagaraDataInterfaceSceneCapture2D::SetShaderParameters
          (UNiagaraDataInterfaceSceneCapture2D *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  FNiagaraDataInterfaceProxy *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  ulong64 *puVar5;
  FShaderParametersMetadata *pFVar6;
  FRHITexture *pFVar7;
  TRefCountPtr<FRHISamplerState> TVar8;
  uint uVar9;
  longlong *plVar10;
  ulong64 *puVar11;
  ulong64 *puVar12;
  FName *pFVar13;
  
  if ((param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataInterfaceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x1c1,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = param_1->DataInterfaceProxy;
  uVar4 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  puVar11 = (ulong64 *)0x0;
  puVar5 = puVar11;
  if (pFVar1[1].SourceDIName.ComparisonIndex.Value != *(uint *)((longlong)&pFVar1[4]._padding_ + 4))
  {
    pFVar13 = (FName *)pFVar1[5]._padding_;
    if ((FName *)pFVar1[5]._padding_ == (FName *)0x0) {
      pFVar13 = &pFVar1[4].SourceDIName;
    }
    uVar9 = (&pFVar13->ComparisonIndex)
            [(uVar4 >> 0x20) * 0x17 + uVar4 &
             (ulonglong)(pFVar1[5].SourceDIName.ComparisonIndex.Value - 1)].Value;
    if (uVar9 != 0xffffffff) {
      do {
        puVar5 = (ulong64 *)((longlong)(int)uVar9 * 0x110 + pFVar1[1]._padding_);
        if (*puVar5 == uVar4) break;
        uVar9 = (uint)puVar5[0x20];
        puVar5 = puVar11;
      } while (uVar9 != 0xffffffff);
    }
  }
  puVar12 = puVar5 + 2;
  if (puVar5 == (ulong64 *)0x0) {
    puVar12 = puVar11;
  }
  uVar9 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar6 = TShaderParameterStructTypeInfo<NDISceneCapture2DLocal::FShaderParameters>::
           GetStructMetadata();
  plVar10 = (longlong *)(param_1->BaseParameters + uVar9);
  param_1->ParametersOffset = pFVar6->Size + uVar9;
  pFVar7 = (FRHITexture *)puVar12[0x1b];
  if (pFVar7 == (FRHITexture *)0x0) {
    pFVar7 = (GWhiteTexture->TextureRHI).Reference;
  }
  *plVar10 = (longlong)pFVar7;
  TVar8 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
          ::StaticResource.StateRHI;
  if ((FRHISamplerState *)puVar12[0x1c] != (FRHISamplerState *)0x0) {
    TVar8.Reference = (FRHISamplerState *)puVar12[0x1c];
  }
  plVar10[1] = (longlong)TVar8.Reference;
  plVar10[2] = *puVar12;
  *(int *)(plVar10 + 3) = (int)puVar12[1];
  uVar4 = puVar12[3];
  plVar10[4] = puVar12[2];
  plVar10[5] = uVar4;
  uVar4 = puVar12[5];
  plVar10[6] = puVar12[4];
  plVar10[7] = uVar4;
  uVar4 = puVar12[7];
  plVar10[8] = puVar12[6];
  plVar10[9] = uVar4;
  uVar4 = puVar12[9];
  plVar10[10] = puVar12[8];
  plVar10[0xb] = uVar4;
  uVar4 = puVar12[0xb];
  plVar10[0xc] = puVar12[10];
  plVar10[0xd] = uVar4;
  uVar4 = puVar12[0xd];
  plVar10[0xe] = puVar12[0xc];
  plVar10[0xf] = uVar4;
  uVar4 = puVar12[0xf];
  plVar10[0x10] = puVar12[0xe];
  plVar10[0x11] = uVar4;
  uVar4 = puVar12[0x11];
  plVar10[0x12] = puVar12[0x10];
  plVar10[0x13] = uVar4;
  uVar4 = puVar12[0x13];
  plVar10[0x14] = puVar12[0x12];
  plVar10[0x15] = uVar4;
  uVar4 = puVar12[0x15];
  plVar10[0x16] = puVar12[0x14];
  plVar10[0x17] = uVar4;
  uVar4 = puVar12[0x17];
  plVar10[0x18] = puVar12[0x16];
  plVar10[0x19] = uVar4;
  uVar4 = puVar12[0x19];
  plVar10[0x1a] = puVar12[0x18];
  plVar10[0x1b] = uVar4;
  *(uint *)(plVar10 + 0x1c) = (uint)((int)puVar12[0x1a] == 0);
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceSceneCapture2D @ 148ed4c50

void __cdecl
UNiagaraDataInterfaceSceneCapture2D::StaticRegisterNativesUNiagaraDataInterfaceSceneCapture2D(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetSceneCapture2DManagedShowOnlyActors @ 148edf1f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceSceneCapture2D::execSetSceneCapture2DManagedShowOnlyActors
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FNiagaraParameterStore *this;
  int iVar2;
  FProperty *pFVar3;
  undefined8 uVar4;
  ForAnyElementType FVar5;
  int iVar6;
  void *_Src;
  UNiagaraDataInterface *pUVar7;
  UClass *pUVar8;
  longlong lVar9;
  undefined8 local_res10 [2];
  longlong local_res20;
  undefined4 uStack_84;
  ForAnyElementType local_80;
  int local_78;
  int local_74;
  void *local_70;
  undefined8 local_68;
  TObjectPtr<UObject>_u_0 local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined8 local_54;
  undefined4 local_4c;
  undefined1 local_48 [8];
  FNiagaraTypeDefinitionHandle local_40 [2];
  ForAnyElementType local_38;
  undefined8 local_30;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_70 = (void *)0x0;
  local_68 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  _Src = local_70;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar9 = (longlong)(int)local_68;
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78 = (int)local_68;
  if ((int)local_68 == 0) {
    local_74 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_68,0,&local_80,(int)local_68,&local_74);
    memcpy(local_80.Data,_Src,lVar9 << 3);
  }
  uVar4 = local_res10[0];
  if (local_res20 != 0) {
    this = (FNiagaraParameterStore *)(local_res20 + 0x560);
    local_60.DebugPtr = (UObject *)StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_60.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable(local_60.DebugPtr);
    }
    local_56 = 0;
    local_58 = 1;
    local_54 = 0xffffffffffffffff;
    local_4c = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_60.ObjectPtr);
    uStack_84 = (undefined4)((ulonglong)uVar4 >> 0x20);
    local_48._4_4_ = uStack_84;
    local_48._0_4_ = (undefined4)uVar4;
    local_40[0].RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register
                   (local_40,(FNiagaraTypeDefinition *)&local_60.ObjectPtr);
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30._0_4_ = 0;
    local_30._4_4_ = 0;
    pUVar7 = FNiagaraParameterStore::GetDataInterface(this,(FNiagaraVariable *)local_48);
    if (pUVar7 != (UNiagaraDataInterface *)0x0) {
      pUVar8 = StaticClass();
      iVar6 = local_78;
      FVar5.Data = local_80.Data;
      iVar2 = (int)pUVar8->_padding_;
      if ((iVar2 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar8->_padding_)) {
        *(int *)&pUVar7[3].field_0x30 = local_78;
        if ((local_78 == 0) && (*(int *)&pUVar7[3].field_0x34 == 0)) {
          *(undefined4 *)&pUVar7[3].field_0x34 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,local_78,*(int *)&pUVar7[3].field_0x34,
                     (ForAnyElementType *)&pUVar7[3].Proxy,local_78,(int *)&pUVar7[3].field_0x34);
          ConstructItems<TObjectPtr<AActor>,AActor_*,int>
                    (pUVar7[3].Proxy.Ptr,(AActor **)FVar5.Data,iVar6);
        }
        *(int *)&pUVar7[4]._padding_ = (int)pUVar7[4]._padding_ + 1;
      }
    }
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
  }
  if (local_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data);
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  return;
}

