// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 11

// StaticClass @ 149199770

UClass * __cdecl UNiagaraDataInterfaceOcclusion::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceOcclusion.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceOcclusion",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceOcclusion.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceOcclusion,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceOcclusion>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceOcclusion>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceOcclusion.InnerSingleton;
}

// UNiagaraDataInterfaceOcclusion @ 1491abfe0

UNiagaraDataInterfaceOcclusion * __thiscall
UNiagaraDataInterfaceOcclusion::UNiagaraDataInterfaceOcclusion
          (UNiagaraDataInterfaceOcclusion *this,FVTableHelper *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  *(undefined ***)this = &___7UNiagaraDataInterfaceOcclusion__6B_;
  return this;
}

// UNiagaraDataInterfaceOcclusion @ 1491ac010

UNiagaraDataInterfaceOcclusion * __thiscall
UNiagaraDataInterfaceOcclusion::UNiagaraDataInterfaceOcclusion
          (UNiagaraDataInterfaceOcclusion *this,FObjectInitializer *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  *(undefined ***)this = &___7UNiagaraDataInterfaceOcclusion__6B_;
  puVar2 = ::operator_new(0x10);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = &___7FNiagaraDataIntefaceProxyOcclusionQuery__6B_;
  }
  puVar1 = *(undefined8 **)&this->field_0x28;
  if ((puVar1 != puVar2) &&
     (*(undefined8 **)&this->field_0x28 = puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return this;
}

// ~UNiagaraDataInterfaceOcclusion @ 1491ad5b0

void __thiscall
UNiagaraDataInterfaceOcclusion::~UNiagaraDataInterfaceOcclusion
          (UNiagaraDataInterfaceOcclusion *this)

{
  *(undefined ***)this = &___7UNiagaraDataInterfaceOcclusion__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// BuildShaderParameters @ 1491b5b60

void __thiscall
UNiagaraDataInterfaceOcclusion::BuildShaderParameters
          (UNiagaraDataInterfaceOcclusion *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar5 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceOcclusion::FShaderParameters>::
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
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x20;
  return;
}

// CanExecuteOnTarget @ 1491b6ce0

bool __thiscall
UNiagaraDataInterfaceOcclusion::CanExecuteOnTarget
          (UNiagaraDataInterfaceOcclusion *this,ENiagaraSimTarget param_1)

{
  return param_1 == GPUComputeSim;
}

// GetPrivateStaticClass @ 1491ca0e0

UClass * __cdecl UNiagaraDataInterfaceOcclusion::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceOcclusion.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceOcclusion",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceOcclusion.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceOcclusion,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceOcclusion>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceOcclusion>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceOcclusion.InnerSingleton;
}

// PostInitProperties @ 1491d77b0

void __thiscall
UNiagaraDataInterfaceOcclusion::PostInitProperties(UNiagaraDataInterfaceOcclusion *this)

{
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  UObject::PostInitProperties((UObject *)this);
  if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
    local_28 = (TObjectPtr<UObject>_u_0)*(TObjectPtr<UObject>_u_0 *)&this->field_0x10;
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

// RequiresDepthBuffer @ 1491deca0

bool __thiscall
UNiagaraDataInterfaceOcclusion::RequiresDepthBuffer(UNiagaraDataInterfaceOcclusion *this)

{
  return true;
}

// SetShaderParameters @ 1491e0170

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
UNiagaraDataInterfaceOcclusion::SetShaderParameters
          (UNiagaraDataInterfaceOcclusion *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  uchar *puVar1;
  uchar *puVar2;
  undefined4 uVar4;
  FSceneViewStateInterface *pFVar3;
  bool bVar5;
  FShaderParametersMetadata *pFVar6;
  FRDGTexture *pFVar7;
  undefined8 *puVar8;
  uint uVar9;
  FSceneView *pFVar10;
  undefined8 local_res10;
  
  uVar9 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar6 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceOcclusion::FShaderParameters>::
           GetStructMetadata();
  puVar2 = param_1->BaseParameters;
  param_1->ParametersOffset = pFVar6->Size + uVar9;
  bVar5 = FNiagaraDataInterfaceSetShaderParametersContext::IsResourceBound
                    (param_1,puVar2 + (ulonglong)uVar9 + 0x10);
  if (!bVar5) goto LAB_1491e028a;
  pFVar10 = (param_1->ComputeDispatchInterface->SimulationSceneViews).FirstElementPtr;
  uVar4 = (param_1->ComputeDispatchInterface->SimulationSceneViews).NumElements;
  if ((int)uVar4 < 1) {
    pFVar10 = (FSceneView *)0x0;
LAB_1491e01f8:
    pFVar7 = FNiagaraGpuComputeDispatchInterface::GetBlackTexture
                       (param_1->ComputeDispatchInterface,param_1->GraphBuilder,Texture2D);
  }
  else if (((pFVar10 == (FSceneView *)0x0) ||
           (pFVar3 = pFVar10->State, pFVar3 == (FSceneViewStateInterface *)0x0)) ||
          (pFVar7 = (FRDGTexture *)
                    (**(code **)(pFVar3->_padding_ + 0x78))(pFVar3,param_1->GraphBuilder),
          pFVar7 == (FRDGTexture *)0x0)) goto LAB_1491e01f8;
  *(FRDGTexture **)(puVar2 + (ulonglong)uVar9 + 0x10) = pFVar7;
  if ((pFVar10 == (FSceneView *)0x0) ||
     (pFVar3 = pFVar10->State, pFVar3 == (FSceneViewStateInterface *)0x0)) {
    local_res10._0_4_ = 0x3f800000;
    local_res10._4_4_ = 0x3f800000;
    puVar1 = puVar2 + uVar9;
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = 0x80;
    puVar1[3] = '?';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = 0x80;
    puVar1[7] = '?';
    if (pFVar10 != (FSceneView *)0x0) goto LAB_1491e024f;
LAB_1491e0268:
    local_res10._0_4_ = 0x3f800000;
    puVar8 = &local_res10;
    local_res10._4_4_ = 0x3f800000;
  }
  else {
    puVar8 = (undefined8 *)(**(code **)(pFVar3->_padding_ + 0x80))(pFVar3,&local_res10);
    *(undefined8 *)(puVar2 + uVar9) = *puVar8;
LAB_1491e024f:
    pFVar3 = pFVar10->State;
    if (pFVar3 == (FSceneViewStateInterface *)0x0) goto LAB_1491e0268;
    puVar8 = (undefined8 *)(**(code **)(pFVar3->_padding_ + 0x88))(pFVar3,&local_res10);
  }
  *(undefined8 *)(puVar2 + (ulonglong)uVar9 + 8) = *puVar8;
LAB_1491e028a:
  *(FRHISamplerState **)(puVar2 + (ulonglong)uVar9 + 0x18) =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceOcclusion @ 1491e35c0

void __cdecl
UNiagaraDataInterfaceOcclusion::StaticRegisterNativesUNiagaraDataInterfaceOcclusion(void)

{
  return;
}

