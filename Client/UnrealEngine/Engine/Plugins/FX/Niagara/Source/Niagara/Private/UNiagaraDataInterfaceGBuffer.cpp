// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 11

// StaticClass @ 148e8a6b0

UClass * __cdecl UNiagaraDataInterfaceGBuffer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceGBuffer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceGBuffer",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceGBuffer.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceGBuffer,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceGBuffer>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGBuffer>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceGBuffer.InnerSingleton;
}

// UNiagaraDataInterfaceGBuffer @ 148ea4e70

UNiagaraDataInterfaceGBuffer * __thiscall
UNiagaraDataInterfaceGBuffer::UNiagaraDataInterfaceGBuffer
          (UNiagaraDataInterfaceGBuffer *this,FVTableHelper *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  *(undefined ***)this = &___7UNiagaraDataInterfaceGBuffer__6B_;
  return this;
}

// UNiagaraDataInterfaceGBuffer @ 148ea4ea0

UNiagaraDataInterfaceGBuffer * __thiscall
UNiagaraDataInterfaceGBuffer::UNiagaraDataInterfaceGBuffer
          (UNiagaraDataInterfaceGBuffer *this,FObjectInitializer *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  *(undefined ***)this = &___7UNiagaraDataInterfaceGBuffer__6B_;
  puVar2 = ::operator_new(0x10);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = &___7FNiagaraDataIntefaceProxyGBuffer__6B_;
  }
  puVar1 = *(undefined8 **)&this->field_0x28;
  if ((puVar1 != puVar2) &&
     (*(undefined8 **)&this->field_0x28 = puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return this;
}

// ~UNiagaraDataInterfaceGBuffer @ 148ea6ce0

void __thiscall
UNiagaraDataInterfaceGBuffer::~UNiagaraDataInterfaceGBuffer(UNiagaraDataInterfaceGBuffer *this)

{
  *(undefined ***)this = &___7UNiagaraDataInterfaceGBuffer__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// BuildShaderParameters @ 148eacc30

void __thiscall
UNiagaraDataInterfaceGBuffer::BuildShaderParameters
          (UNiagaraDataInterfaceGBuffer *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar5 = TShaderParameterStructTypeInfo<NiagaraDataInterfaceGBufferLocal::FShaderParameters>::
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
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x10;
  return;
}

// CanExecuteOnTarget @ 148eadd10

bool __thiscall
UNiagaraDataInterfaceGBuffer::CanExecuteOnTarget
          (UNiagaraDataInterfaceGBuffer *this,ENiagaraSimTarget param_1)

{
  return param_1 == GPUComputeSim;
}

// GetPrivateStaticClass @ 148ebfb60

UClass * __cdecl UNiagaraDataInterfaceGBuffer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceGBuffer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceGBuffer",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceGBuffer.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceGBuffer,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceGBuffer>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGBuffer>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceGBuffer.InnerSingleton;
}

// PostInitProperties @ 148ecb290

void __thiscall UNiagaraDataInterfaceGBuffer::PostInitProperties(UNiagaraDataInterfaceGBuffer *this)

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

// RequiresDepthBuffer @ 148ecf370

bool __thiscall
UNiagaraDataInterfaceGBuffer::RequiresDepthBuffer(UNiagaraDataInterfaceGBuffer *this)

{
  return true;
}

// SetShaderParameters @ 148ed0a00

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
UNiagaraDataInterfaceGBuffer::SetShaderParameters
          (UNiagaraDataInterfaceGBuffer *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  FRDGTexture *pFVar4;
  uint uVar5;
  uchar *puVar6;
  
  uVar5 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar3 = TShaderParameterStructTypeInfo<NiagaraDataInterfaceGBufferLocal::FShaderParameters>::
           GetStructMetadata();
  puVar6 = param_1->BaseParameters + uVar5;
  param_1->ParametersOffset = pFVar3->Size + uVar5;
  bVar2 = FNiagaraDataInterfaceSetShaderParametersContext::IsResourceBound(param_1,puVar6);
  if (!bVar2) {
    puVar6[0] = '\0';
    puVar6[1] = '\0';
    puVar6[2] = '\0';
    puVar6[3] = '\0';
    puVar6[4] = '\0';
    puVar6[5] = '\0';
    puVar6[6] = '\0';
    puVar6[7] = '\0';
    goto LAB_148ed0a80;
  }
  uVar1 = (param_1->ComputeDispatchInterface->SimulationSceneViews).NumElements;
  if ((int)uVar1 < 1) {
LAB_148ed0a65:
    pFVar4 = FNiagaraGpuComputeDispatchInterface::GetBlackTexture
                       (param_1->ComputeDispatchInterface,param_1->GraphBuilder,Texture2D);
  }
  else {
    pFVar4 = UE::FXRenderingUtils::GetSceneVelocityTexture
                       ((param_1->ComputeDispatchInterface->SimulationSceneViews).FirstElementPtr);
    if ((pFVar4 == (FRDGTexture *)0x0) || ((pFVar4->_padding_ & 0x400) == 0)) goto LAB_148ed0a65;
  }
  *(FRDGTexture **)puVar6 = pFVar4;
LAB_148ed0a80:
  *(FRHISamplerState **)(puVar6 + 8) =
       TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceGBuffer @ 148ed4c20

void __cdecl UNiagaraDataInterfaceGBuffer::StaticRegisterNativesUNiagaraDataInterfaceGBuffer(void)

{
  return;
}

