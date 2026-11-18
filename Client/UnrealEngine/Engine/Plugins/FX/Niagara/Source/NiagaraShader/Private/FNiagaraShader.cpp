// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 9

// FNiagaraShader @ 148df08c0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNiagaraShader * __thiscall
FNiagaraShader::FNiagaraShader(FNiagaraShader *this,CompiledShaderInitializerType *param_1)

{
  TArray<FNiagaraDataInterfaceParamRef,TMemoryImageAllocator<0>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UNiagaraDataInterfaceBase *pUVar7;
  FNiagaraShader *pFVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int *piVar16;
  undefined1 local_res8 [8];
  CompiledShaderInitializerType *local_res10;
  undefined1 local_res18 [8];
  uint local_res20;
  FString local_b8;
  FString local_a8;
  INiagaraShaderModule *local_98;
  FName local_90;
  FName local_88;
  longlong *local_80;
  wchar_t *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  FString local_68;
  TStringView<wchar_t> local_58;
  
  local_res10 = param_1;
  FShader::FShader((FShader *)this,(FShaderCompiledShaderInitializerType *)param_1);
  this->ExternalConstantBufferParam[0] = 0xffff;
  this->ExternalConstantBufferParam[1] = 0xffff;
  pTVar1 = &this->DataInterfaceParameters;
  uStack_70 = 4;
  pTVar1->AllocatorInstance = (ForAnyElementType)0x0;
  local_78 = L"View";
  piVar16 = &(this->DataInterfaceParameters).ArrayMax;
  local_58._12_4_ = uStack_6c;
  local_58.Size = 4;
  (this->DataInterfaceParameters).ArrayNum = 0;
  *piVar16 = 0;
  local_58.DataPtr = L"View";
  bVar5 = FShaderParameterMap::ContainsParameterAllocation
                    (*(FShaderParameterMap **)&param_1->field_0x28,&local_58);
  this->bNeedsViewUniformBuffer = bVar5;
  FShaderUniformBufferParameter::Bind
            (this->ExternalConstantBufferParam,*(FShaderParameterMap **)&param_1->field_0x28,
             L"FNiagaraExternalParameters",SPF_Optional);
  FShaderUniformBufferParameter::Bind
            (this->ExternalConstantBufferParam + 1,*(FShaderParameterMap **)&param_1->field_0x28,
             L"PREV_FNiagaraExternalParameters",SPF_Optional);
  bVar5 = true;
  lVar15 = *(longlong *)&param_1->field_0x8;
  local_98 = INiagaraShaderModule::Singleton;
  if (GNiagaraShaderForceBindEverything == 0) {
    bVar5 = this->ExternalConstantBufferParam[1].BaseIndex == 0xffff &&
            this->ExternalConstantBufferParam[0].BaseIndex == 0xffff;
  }
  FShaderParameterBindings::BindForLegacyShaderParameters
            ((FShaderParameterBindings *)this,(FShader *)this,*(int *)&param_1->field_0x6c,
             *(FShaderParameterMap **)&param_1->field_0x28,
             *(FShaderParametersMetadata **)(*(longlong *)(lVar15 + 8) + 0x48),bVar5);
  this->MiscUsageBitMask = 0;
  uVar3 = *(uint *)(*(longlong *)(lVar15 + 8) + 8);
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  FVar9 = pTVar1->AllocatorInstance;
  if (((ulonglong)FVar9 & 1) != 0) {
    FVar9 = (ForAnyElementType)
            ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar9 >> 0x18));
  }
  DestructItems<FNiagaraDataInterfaceParamRef,int>
            ((FNiagaraDataInterfaceParamRef *)FVar9,(this->DataInterfaceParameters).ArrayNum);
  (this->DataInterfaceParameters).ArrayNum = 0;
  if (*piVar16 != uVar3) {
    UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (0x18,8,uVar3,&pTVar1->AllocatorInstance,0,piVar16);
  }
  local_80 = *(longlong **)(lVar15 + 8);
  local_res20 = *(uint *)(local_80 + 1);
  uVar10 = (ulonglong)(int)local_res20;
  lVar15 = *local_80;
  piVar16 = (int *)(lVar15 + 0x30);
  lVar12 = uVar10 * 0x38 + lVar15;
  do {
    if ((int)local_80[1] != (int)uVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FNiagaraDataInterfaceGPUParamInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (lVar15 == lVar12) {
      return this;
    }
    iVar6 = (this->DataInterfaceParameters).ArrayNum;
    if (iVar6 == (this->DataInterfaceParameters).ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                        (0x818,&pTVar1->AllocatorInstance,&(this->DataInterfaceParameters).ArrayMax)
      ;
    }
    (this->DataInterfaceParameters).ArrayNum = iVar6 + 1;
    FVar9 = pTVar1->AllocatorInstance;
    if (((ulonglong)FVar9 & 1) != 0) {
      FVar9 = (ForAnyElementType)
              ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar9 >> 0x18));
    }
    piVar2 = (int *)((longlong)FVar9 + (longlong)iVar6 * 0x18);
    DefaultConstructItems<FNiagaraDataInterfaceParamRef,int>(piVar2,1);
    *piVar2 = piVar16[-4];
    if (piVar16[-6] == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = *(wchar_t **)(piVar16 + -8);
    }
    ::FString::FString(&local_68,pwVar11);
    pUVar7 = INiagaraShaderModule::RequestDefaultDataInterface(local_98,&local_68);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (pUVar7 != (UNiagaraDataInterfaceBase *)0x0) {
      iVar6 = *piVar16;
      lVar13 = *(longlong *)(piVar16 + -2);
      lVar14 = (longlong)iVar6 * 0x50 + lVar13;
      while( true ) {
        if (*piVar16 != iVar6) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FNiagaraDataInterfaceGeneratedFunction_const_,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_res18);
        }
        if (lVar13 == lVar14) break;
        this->MiscUsageBitMask = this->MiscUsageBitMask | *(ushort *)(lVar13 + 0x28);
        lVar13 = lVar13 + 0x50;
      }
      *(UNiagaraDataInterfaceBase **)(piVar2 + 2) = pUVar7;
      uVar10 = (**(code **)(*(longlong *)pUVar7 + 0x2b8))
                         (pUVar7,lVar15,*(undefined8 *)&local_res10->field_0x28);
      *(ulonglong *)(piVar2 + 4) = uVar10;
      if (((uVar10 & 1) != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!Frozen.IsFrozen()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                             ,0x187,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FNiagaraShader *)(*pcVar4)();
        return pFVar8;
      }
      uVar10 = *(ulonglong *)(piVar2 + 4);
      if ((uVar10 & 1) != 0) {
        uVar10 = ((longlong)uVar10 >> 0x18) + 0x10 + (longlong)piVar2;
      }
      if ((uVar10 != 0) &&
         (lVar13 = (**(code **)(*(longlong *)pUVar7 + 0x2c0))(pUVar7), lVar13 == 0)) {
        if (*(longlong *)&pUVar7->field_0x10 == 0) {
          ::FString::FString(&local_b8,L"None");
        }
        else {
          local_90 = *(FName *)(*(longlong *)&pUVar7->field_0x10 + 0x18);
          ::FName::ToString(&local_90,&local_b8);
        }
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataInterfaceParamRef.Parameters == nullptr || CDODataInterface->GetShaderStorageType() != nullptr"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraShader.cpp"
                           ,0x4c4,
                           L"DataInterface(%s) provides shader storage but did not implement GetShaderStorageType"
                          );
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FNiagaraShader *)(*pcVar4)();
          return pFVar8;
        }
      }
      uVar10 = *(ulonglong *)(piVar2 + 4);
      if ((uVar10 & 1) != 0) {
        uVar10 = ((longlong)uVar10 >> 0x18) + 0x10 + (longlong)piVar2;
      }
      if ((uVar10 != 0) &&
         (lVar13 = (**(code **)(*(longlong *)pUVar7 + 0x2c0))(pUVar7),
         *(char *)(lVar13 + 100) != '\0')) {
        if (*(longlong *)&pUVar7->field_0x10 == 0) {
          ::FString::FString(&local_a8,L"None");
        }
        else {
          local_88 = *(FName *)(*(longlong *)&pUVar7->field_0x10 + 0x18);
          ::FName::ToString(&local_88,&local_a8);
        }
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataInterfaceParamRef.Parameters == nullptr || CDODataInterface->GetShaderStorageType()->Interface == ETypeLayoutInterface::NonVirtual"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraShader.cpp"
                           ,0x4c5,
                           L"DataInterface(%s) shader storage is either abstract or virtual which is not allowed"
                          );
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FNiagaraShader *)(*pcVar4)();
          return pFVar8;
        }
      }
    }
    lVar15 = lVar15 + 0x38;
    uVar10 = (ulonglong)local_res20;
    piVar16 = piVar16 + 0xe;
  } while( true );
}

// ConstructCompiledInstance @ 148df9510

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShader * __cdecl
FNiagaraShader::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

{
  FNiagaraShader *pFVar1;
  
  pFVar1 = ::operator_new(0xf8);
  if (pFVar1 != (FNiagaraShader *)0x0) {
    pFVar1 = FNiagaraShader(pFVar1,(CompiledShaderInitializerType *)param_1);
    return (FShader *)pFVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 148dfa240

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShader * __cdecl FNiagaraShader::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0xf8);
  if (this != (FShader *)0x0) {
    FShader::FShader(this);
    *(undefined4 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x4 = 0xffffffff;
    this[1].Bindings.Parameters.ArrayNum = 0;
    this[1].Bindings.Parameters.ArrayMax = 0;
    this[1].Bindings.ResourceParameters.AllocatorInstance = (ForAnyElementType)0x0;
    return this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 148e03b00

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNiagaraShaderType * __cdecl FNiagaraShader::GetStaticType(void)

{
  FTypeLayoutDesc *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Niagara,pFVar1,L"FNiagaraShader",
                 L"/Plugin/FX/Niagara/Private/NiagaraEmitterInstanceShader.usf",L"SimulateMain",5,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xf8,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FNiagaraShaderType__6B_;
      atexit(`FNiagaraShader::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 148e07ef0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FNiagaraShader::GetTypeLayout(FNiagaraShader *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xf8;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FNiagaraShader;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FNiagaraShader,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FNiagaraShader::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DataInterfaceParameters";
    DAT_155269ee2 = Freeze::FindFieldNameLength(L"DataInterfaceParameters");
    if ((DAT_15526b637 & 2) == 0) {
      DAT_15526b637 = DAT_15526b637 | 3;
      _DAT_15526b628 = 0x10;
      _DAT_15526b5d8 = L"(TArray<T, AllocatorType>)";
      _DAT_15526b5f0 =
           TStaticGetTypeLayoutHelper<TArray<FNiagaraDataInterfaceParamRef,TMemoryImageAllocator<0>_>_>
           ::CallWriteMemoryImage;
      _DAT_15526b5f8 =
           TStaticGetTypeLayoutHelper<TArray<FNiagaraDataInterfaceParamRef,TMemoryImageAllocator<0>_>_>
           ::CallUnfrozenCopy;
      _DAT_15526b600 =
           TStaticGetTypeLayoutHelper<TArray<FNiagaraDataInterfaceParamRef,TMemoryImageAllocator<0>_>_>
           ::CallAppendHash;
      _DAT_15526b608 =
           TStaticGetTypeLayoutHelper<TArray<FNiagaraDataInterfaceParamRef,TMemoryImageAllocator<0>_>_>
           ::CallGetTargetAlignment;
      _DAT_15526b610 =
           TStaticGetTypeLayoutHelper<TArray<FNiagaraDataInterfaceParamRef,TMemoryImageAllocator<0>_>_>
           ::CallToString;
      _DAT_15526b5e8 =
           TStaticGetTypeLayoutHelper<TArray<FNiagaraDataInterfaceParamRef,TMemoryImageAllocator<0>_>_>
           ::CallDestroy;
      _DAT_15526b630 = 8;
      DAT_15526b634 = 0;
      _DAT_15526b62c = 0x10;
    }
    _DAT_155269ed8 = 0xe8;
    _DAT_155269ec0 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FNiagaraDataInterfaceParamRef,TMemoryImageAllocator<0>_>_>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_155269ec8 = ::TypeBuffer[0x10];
    DAT_155269ec8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155269ec8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155269ec8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155269ec8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155269ec8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155269ec8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155269ec8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraShader::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155269ed0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155269edc = 1;
    _DAT_155269ee0 = 0;
    `public:_static_void___cdecl_FNiagaraShader::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ExternalConstantBufferParam";
    DAT_155269eb2 = Freeze::FindFieldNameLength(L"ExternalConstantBufferParam");
    _DAT_155269e90 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    DAT_155269e98 = ::TypeBuffer[0x10];
    DAT_155269e98_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155269e98_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155269e98_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155269e98_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155269e98_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155269e98_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155269e98_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraShader::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155269ea0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155269ea8 = 0xe4;
    _DAT_155269eac = 2;
    _DAT_155269eb0 = 0;
    `public:_static_void___cdecl_FNiagaraShader::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MiscUsageBitMask";
    DAT_155269e82 = Freeze::FindFieldNameLength(L"MiscUsageBitMask");
    if ((DAT_155176ebf & 2) == 0) {
      DAT_155176ebf = DAT_155176ebf | 3;
      _DAT_155176eb0 = 2;
      _DAT_155176e60 = L"unsigned short";
      _DAT_155176e78 = TStaticGetTypeLayoutHelper<unsigned_short>::CallWriteMemoryImage;
      _DAT_155176e80 = TStaticGetTypeLayoutHelper<unsigned_short>::CallUnfrozenCopy;
      _DAT_155176e88 = TStaticGetTypeLayoutHelper<unsigned_short>::CallAppendHash;
      _DAT_155176e90 = TStaticGetTypeLayoutHelper<unsigned_short>::CallGetTargetAlignment;
      _DAT_155176e98 = TStaticGetTypeLayoutHelper<unsigned_short>::CallToString;
      _DAT_155176e70 = TStaticGetTypeLayoutHelper<unsigned_short>::CallDestroy;
      _DAT_155176eb8 = 2;
      DAT_155176ebc = 0;
      _DAT_155176eb4 = 2;
    }
    _DAT_155269e70 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155269e60 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<unsigned_short>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_155269e68 = ::TypeBuffer[0x10];
    DAT_155269e68_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155269e68_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155269e68_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155269e68_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155269e68_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155269e68_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155269e68_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraShader::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155269e78 = 0xe2;
    _DAT_155269e7c = 1;
    _DAT_155269e80 = 0;
    `public:_static_void___cdecl_FNiagaraShader::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "bNeedsViewUniformBuffer";
    DAT_155269e52 = Freeze::FindFieldNameLength(L"bNeedsViewUniformBuffer");
    _DAT_155269e30 = StaticGetTypeLayoutDesc<bool>();
    DAT_155269e38 = ::TypeBuffer[0x10];
    DAT_155269e38_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155269e38_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155269e38_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155269e38_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155269e38_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155269e38_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155269e38_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraShader::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155269e40 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155269e48 = 0xe0;
    _DAT_155269e4c = 1;
    _DAT_155269e50 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 148e08c00

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FNiagaraShader::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  FMemoryImageAllocatorBase *this;
  FNiagaraDataInterfaceParamRef *pFVar1;
  
  if (!param_4) {
    this = (FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe8);
    pFVar1 = (FNiagaraDataInterfaceParamRef *)(this->Data).field0_0x0.UnfrozenPtr;
    if (((ulonglong)pFVar1 & 1) != 0) {
      pFVar1 = (FNiagaraDataInterfaceParamRef *)
               ((longlong)&(this->Data).field0_0x0 + ((longlong)pFVar1 >> 0x18));
    }
    DestructItems<FNiagaraDataInterfaceParamRef,int>(pFVar1,*(int *)((longlong)param_1 + 0xf0));
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase(this);
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xf8);
  return;
}

// ShouldCompilePermutationImpl @ 148e0e2e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FNiagaraShader::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  return true;
}

// ShouldPrecachePermutationImpl @ 148e0e670

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FNiagaraShader::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 148e10de0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FNiagaraShader::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xf8;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FNiagaraShader;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FNiagaraShader,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FNiagaraShader::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DataInterfaceParameters";
    DAT_155269ee2 = Freeze::FindFieldNameLength(L"DataInterfaceParameters");
    if ((DAT_15526b637 & 2) == 0) {
      DAT_15526b637 = DAT_15526b637 | 3;
      _DAT_15526b628 = 0x10;
      _DAT_15526b5d8 = L"(TArray<T, AllocatorType>)";
      _DAT_15526b5f0 =
           TStaticGetTypeLayoutHelper<TArray<FNiagaraDataInterfaceParamRef,TMemoryImageAllocator<0>_>_>
           ::CallWriteMemoryImage;
      _DAT_15526b5f8 =
           TStaticGetTypeLayoutHelper<TArray<FNiagaraDataInterfaceParamRef,TMemoryImageAllocator<0>_>_>
           ::CallUnfrozenCopy;
      _DAT_15526b600 =
           TStaticGetTypeLayoutHelper<TArray<FNiagaraDataInterfaceParamRef,TMemoryImageAllocator<0>_>_>
           ::CallAppendHash;
      _DAT_15526b608 =
           TStaticGetTypeLayoutHelper<TArray<FNiagaraDataInterfaceParamRef,TMemoryImageAllocator<0>_>_>
           ::CallGetTargetAlignment;
      _DAT_15526b610 =
           TStaticGetTypeLayoutHelper<TArray<FNiagaraDataInterfaceParamRef,TMemoryImageAllocator<0>_>_>
           ::CallToString;
      _DAT_15526b5e8 =
           TStaticGetTypeLayoutHelper<TArray<FNiagaraDataInterfaceParamRef,TMemoryImageAllocator<0>_>_>
           ::CallDestroy;
      _DAT_15526b630 = 8;
      DAT_15526b634 = 0;
      _DAT_15526b62c = 0x10;
    }
    _DAT_155269ed8 = 0xe8;
    _DAT_155269ec0 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FNiagaraDataInterfaceParamRef,TMemoryImageAllocator<0>_>_>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_155269ec8 = ::TypeBuffer[0x10];
    DAT_155269ec8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155269ec8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155269ec8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155269ec8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155269ec8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155269ec8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155269ec8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraShader::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155269ed0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155269edc = 1;
    _DAT_155269ee0 = 0;
    `public:_static_void___cdecl_FNiagaraShader::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ExternalConstantBufferParam";
    DAT_155269eb2 = Freeze::FindFieldNameLength(L"ExternalConstantBufferParam");
    _DAT_155269e90 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    DAT_155269e98 = ::TypeBuffer[0x10];
    DAT_155269e98_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155269e98_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155269e98_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155269e98_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155269e98_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155269e98_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155269e98_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraShader::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155269ea0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155269ea8 = 0xe4;
    _DAT_155269eac = 2;
    _DAT_155269eb0 = 0;
    `public:_static_void___cdecl_FNiagaraShader::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MiscUsageBitMask";
    DAT_155269e82 = Freeze::FindFieldNameLength(L"MiscUsageBitMask");
    if ((DAT_155176ebf & 2) == 0) {
      DAT_155176ebf = DAT_155176ebf | 3;
      _DAT_155176eb0 = 2;
      _DAT_155176e60 = L"unsigned short";
      _DAT_155176e78 = TStaticGetTypeLayoutHelper<unsigned_short>::CallWriteMemoryImage;
      _DAT_155176e80 = TStaticGetTypeLayoutHelper<unsigned_short>::CallUnfrozenCopy;
      _DAT_155176e88 = TStaticGetTypeLayoutHelper<unsigned_short>::CallAppendHash;
      _DAT_155176e90 = TStaticGetTypeLayoutHelper<unsigned_short>::CallGetTargetAlignment;
      _DAT_155176e98 = TStaticGetTypeLayoutHelper<unsigned_short>::CallToString;
      _DAT_155176e70 = TStaticGetTypeLayoutHelper<unsigned_short>::CallDestroy;
      _DAT_155176eb8 = 2;
      DAT_155176ebc = 0;
      _DAT_155176eb4 = 2;
    }
    _DAT_155269e70 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155269e60 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<unsigned_short>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_155269e68 = ::TypeBuffer[0x10];
    DAT_155269e68_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155269e68_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155269e68_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155269e68_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155269e68_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155269e68_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155269e68_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraShader::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155269e78 = 0xe2;
    _DAT_155269e7c = 1;
    _DAT_155269e80 = 0;
    `public:_static_void___cdecl_FNiagaraShader::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "bNeedsViewUniformBuffer";
    DAT_155269e52 = Freeze::FindFieldNameLength(L"bNeedsViewUniformBuffer");
    _DAT_155269e30 = StaticGetTypeLayoutDesc<bool>();
    DAT_155269e38 = ::TypeBuffer[0x10];
    DAT_155269e38_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155269e38_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155269e38_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155269e38_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155269e38_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155269e38_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155269e38_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraShader::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155269e40 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155269e48 = 0xe0;
    _DAT_155269e4c = 1;
    _DAT_155269e50 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

