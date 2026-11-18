// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 12

// FResolveDepthArray2XPS @ 145dee0f0

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

FResolveDepthArray2XPS * __thiscall
FResolveDepthArray2XPS::FResolveDepthArray2XPS
          (FResolveDepthArray2XPS *this,FShaderCompiledShaderInitializerType *param_1)

{
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  *(undefined4 *)&this->field_0xe0 = 0;
  FShaderResourceParameter::Bind
            ((FShaderResourceParameter *)&this->field_0xe0,param_1->ParameterMap,
             L"UnresolvedSurface",SPF_Mandatory);
  return this;
}

// FResolveDepthArray2XPS @ 145dee140

FResolveDepthArray2XPS * __thiscall
FResolveDepthArray2XPS::FResolveDepthArray2XPS(FResolveDepthArray2XPS *this)

{
  FGlobalShader::FGlobalShader((FGlobalShader *)this);
  *(undefined4 *)&this->field_0xe0 = 0;
  return this;
}

// ConstructCompiledInstance @ 145dfe7b0

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
FResolveDepthArray2XPS::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

{
  FShader *this;
  
  this = ::operator_new(0xe8);
  if (this != (FShader *)0x0) {
    FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
    *(undefined4 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)(this + 1),param_1->ParameterMap,L"UnresolvedSurface",
               SPF_Mandatory);
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145dfec20

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

FShader * __cdecl FResolveDepthArray2XPS::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0xe8);
  if (this != (FShader *)0x0) {
    FGlobalShader::FGlobalShader((FGlobalShader *)this);
    *(undefined4 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    return this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 145e135b0

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

FGlobalShaderType * __cdecl FResolveDepthArray2XPS::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  FTypeLayoutDesc *pFVar5;
  FGlobalShaderType *pFVar6;
  TSet<TTuple<FHashedName,FShaderType_*>,TDefaultMapHashableKeyFuncs<FHashedName,FShaderType_*,0>,FDefaultSetAllocator>
  *this;
  TArray<FShaderType_*,TSizedDefaultAllocator<32>_> *pTVar7;
  FString *pFVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  wchar_t *pwVar12;
  TPairInitializer<FHashedName_const_&,FShaderType_*_&&> local_res8;
  FHashedName local_res18;
  FGlobalShaderType *local_98 [2];
  wchar_t *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  bool local_78 [8];
  FShaderType ***local_70;
  FString local_68;
  TStringView<wchar_t> local_58;
  FString local_48;
  
  if ((::_TSS0 <=
       *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c)) || (_Init_thread_header(&::_TSS0), ::_TSS0 != -1)) {
    return &::StaticType;
  }
  pFVar5 = StaticGetTypeLayout();
  ::StaticType._0_8_ = &___7FShaderType__6B_;
  iVar4 = 0;
  ::StaticType._8_4_ = 0;
  ::StaticType._24_8_ = u_FResolveDepthAr;
  ::StaticType._16_8_ = pFVar5;
  ::FName::FName((FName *)&::StaticType.field_0x20,L"FResolveDepthArray2XPS");
  FHashedName::FHashedName
            ((FHashedName *)&::StaticType.field_0x28,(FName *)&::StaticType.field_0x20);
  FHashedName::FHashedName
            ((FHashedName *)&::StaticType.field_0x30,L"/Engine/Private/ResolvePixelShader.usf");
  ::StaticType._56_8_ = ::u__Engine_Private;
  ::StaticType._64_8_ = u_MainDepth;
  ::StaticType._72_4_ = 3;
  ::StaticType._88_8_ = ConstructSerializedInstance;
  ::StaticType._76_4_ = 0xe8;
  ::StaticType._96_8_ = ConstructCompiledInstance;
  ::StaticType._80_4_ = 1;
  ::StaticType._104_8_ = ShouldCompilePermutationImpl;
  ::StaticType._112_8_ = ShouldPrecachePermutationImpl;
  ::StaticType._120_8_ = FShader::GetRayTracingPayloadType;
  ::StaticType._128_8_ = FShader::GetShaderBindingLayout;
  ::StaticType._136_8_ = 0;
  ::StaticType._144_8_ = 0;
  ::StaticType._152_8_ = 0;
  ::StaticType._160_8_ = &::StaticType;
  FTypeLayoutDesc::Register(pFVar5);
  local_88 = L"/Engine/Private/ResolvePixelShader.usf";
  uStack_80 = 0x26;
  local_58._12_4_ = uStack_7c;
  local_58.Size = 0x26;
  local_58.DataPtr = L"/Engine/Private/ResolvePixelShader.usf";
  bVar2 = CheckVirtualShaderFilePath
                    (&local_58,(TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *)0x0);
  pwVar12 = L"";
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CheckVirtualShaderFilePath(InSourceFilename)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\Shader.cpp"
                         ,0x126,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FGlobalShaderType *)(*pcVar1)();
    return pFVar6;
  }
  ::StaticType._144_8_ = GShaderTypeList;
  if (GShaderTypeList != (TLinkedList<FShaderType_*> *)0x0) {
    GShaderTypeList->_padding_ = 0x15518eb20;
    ::StaticType._144_8_ = GShaderTypeList;
  }
  ::StaticType._152_8_ = &GShaderTypeList;
  GShaderTypeList = (TLinkedList<FShaderType_*> *)&::StaticType.field_0x90;
  this = (TSet<TTuple<FHashedName,FShaderType_*>,TDefaultMapHashableKeyFuncs<FHashedName,FShaderType_*,0>,FDefaultSetAllocator>
          *)FShaderType::GetNameToTypeMap();
  local_70 = &local_res8.Value;
  local_res8.Value = (FShaderType **)&::StaticType;
  local_78[0] = true;
  local_78[1] = true;
  local_78[2] = true;
  local_78[3] = true;
  local_78[4] = true;
  local_78[5] = false;
  local_78[6] = false;
  local_78[7] = false;
  TSet<TTuple<FHashedName,FShaderType_*>,TDefaultMapHashableKeyFuncs<FHashedName,FShaderType_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FHashedName_const_&,FShaderType_*_&&>_>(this,&local_res8,local_78);
  pTVar7 = GetSortedShaderTypes(Global);
  pFVar9 = (pTVar7->AllocatorInstance).Data;
  uVar10 = pTVar7->ArrayNum;
  iVar3 = 0;
  if (0 < pTVar7->ArrayNum) {
    do {
      uVar11 = uVar10 >> 1;
      FHashedName::FHashedName
                (&local_res18,
                 (FHashedName *)(*(longlong *)(pFVar9 + (longlong)(int)(uVar11 + iVar3) * 8) + 0x28)
                );
      iVar4 = iVar3;
      if (local_res18.Hash < (ulonglong)::StaticType._40_8_) {
        iVar4 = uVar11 + iVar3 + (uVar10 & 1);
      }
      uVar10 = uVar11;
      iVar3 = iVar4;
    } while (uVar11 != 0);
  }
  pFVar9 = (pTVar7->AllocatorInstance).Data;
  local_98[0] = &::StaticType;
  if (((pFVar9 <= (FScriptContainerElement *)local_98) &&
      ((FScriptContainerElement *)local_98 < pFVar9 + (longlong)pTVar7->ArrayMax * 8)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FGlobalShaderType *)(*pcVar1)();
    return pFVar6;
  }
  iVar3 = pTVar7->ArrayNum;
  if (iVar3 == pTVar7->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
  }
  pFVar9 = (pTVar7->AllocatorInstance).Data;
  pTVar7->ArrayNum = iVar3 + 1;
  pFVar9 = pFVar9 + (longlong)iVar4 * 8;
  memmove(pFVar9 + 8,pFVar9,(longlong)(iVar3 - iVar4) << 3);
  *(FGlobalShaderType **)((pTVar7->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_98[0];
  ::StaticType._0_8_ = FGlobalShaderType::vftable;
  ::FString::FString(&local_68,L"/Engine/Private/ResolvePixelShader.usf");
  pFVar8 = FPaths::GetExtension(&local_48,&local_68,false);
  if ((pFVar8->Data).ArrayNum != 0) {
    pwVar12 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp(pwVar12,L"usf");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((iVar4 != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0x5d,
                         L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FGlobalShaderType *)(*pcVar1)();
    return pFVar6;
  }
  atexit(`FResolveDepthArray2XPS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__
        );
  _Init_thread_footer(&::_TSS0);
  return &::StaticType;
}

// GetTypeLayout @ 145e15650

FTypeLayoutDesc * __thiscall FResolveDepthArray2XPS::GetTypeLayout(FResolveDepthArray2XPS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe8;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FResolveDepthAr;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FResolveDepthArray2XPS,0>::Do;
    ::FieldBuffer._0_8_ = u_BASE;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FResolveDepthPS::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
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

// InternalDestroy @ 145e18570

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
FResolveDepthArray2XPS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xe8);
  return;
}

// ModifyCompilationEnvironment @ 145e1c910

void __cdecl
FResolveDepthArray2XPS::ModifyCompilationEnvironment
          (FGlobalShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  FResolveDepthPS::ModifyCompilationEnvironment(param_1,param_2);
  FShaderCompilerEnvironment::SetDefine(param_2,L"DEPTH_RESOLVE_TEXTUREARRAY",1);
  FShaderCompilerEnvironment::SetDefine(param_2,L"DEPTH_RESOLVE_NUM_SAMPLES",2);
  return;
}

// ShouldCompilePermutation @ 145e2d080

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FResolveDepthArray2XPS::ShouldCompilePermutation(FGlobalShaderPermutationParameters *param_1)

{
  FStereoShaderAspects local_res8 [32];
  
  UE::StereoRenderUtils::FStereoShaderAspects::FStereoShaderAspects
            (local_res8,*(EShaderPlatform *)param_1);
  return ZPULL(local_res8[0],1,1);
}

// ShouldCompilePermutationImpl @ 145e2d400

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FResolveDepthArray2XPS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  FStereoShaderAspects local_res8 [32];
  
  UE::StereoRenderUtils::FStereoShaderAspects::FStereoShaderAspects(local_res8,param_1->Platform);
  return ZPULL(local_res8[0],1,1);
}

// ShouldPrecachePermutationImpl @ 145e2dc80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FResolveDepthArray2XPS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 145e2fb50

FTypeLayoutDesc * __cdecl FResolveDepthArray2XPS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe8;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FResolveDepthAr;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FResolveDepthArray2XPS,0>::Do;
    ::FieldBuffer._0_8_ = u_BASE;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FResolveDepthPS::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
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

