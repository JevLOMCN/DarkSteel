// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 12

// FResolveArrayVS @ 145dedf20

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

FResolveArrayVS * __thiscall
FResolveArrayVS::FResolveArrayVS
          (FResolveArrayVS *this,FShaderCompiledShaderInitializerType *param_1)

{
  FResolveVS::FResolveVS((FResolveVS *)this,param_1);
  return this;
}

// FResolveArrayVS @ 145dedf40

FResolveArrayVS * __thiscall FResolveArrayVS::FResolveArrayVS(FResolveArrayVS *this)

{
  FGlobalShader::FGlobalShader((FGlobalShader *)this);
  *(undefined8 *)&this->field_0xe0 = 0;
  *(undefined4 *)&this->field_0xe8 = 0;
  return this;
}

// ConstructCompiledInstance @ 145dfe610

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
FResolveArrayVS::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

{
  FResolveVS *this;
  
  this = ::operator_new(0xf0);
  if (this != (FResolveVS *)0x0) {
    FResolveVS::FResolveVS(this,param_1);
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145dfeb10

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

FShader * __cdecl FResolveArrayVS::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0xf0);
  if (this != (FShader *)0x0) {
    FGlobalShader::FGlobalShader((FGlobalShader *)this);
    this[1].Bindings.Parameters.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.Parameters.ArrayNum = 0;
    return this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 145e122f0

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

FGlobalShaderType * __cdecl FResolveArrayVS::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FGlobalShaderType *pFVar5;
  TSet<TTuple<FHashedName,FShaderType_*>,TDefaultMapHashableKeyFuncs<FHashedName,FShaderType_*,0>,FDefaultSetAllocator>
  *this;
  TArray<FShaderType_*,TSizedDefaultAllocator<32>_> *pTVar6;
  FString *pFVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  uint uVar10;
  wchar_t *pwVar11;
  int iVar12;
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
  pFVar4 = StaticGetTypeLayout();
  iVar3 = 0;
  ::StaticType._0_8_ = &___7FShaderType__6B_;
  iVar12 = 0;
  ::StaticType._8_4_ = 0;
  ::StaticType._24_8_ = u_FResolveArrayVS;
  ::StaticType._16_8_ = pFVar4;
  ::FName::FName((FName *)&::StaticType.field_0x20,L"FResolveArrayVS");
  FHashedName::FHashedName
            ((FHashedName *)&::StaticType.field_0x28,(FName *)&::StaticType.field_0x20);
  FHashedName::FHashedName
            ((FHashedName *)&::StaticType.field_0x30,L"/Engine/Private/ResolveVertexShader.usf");
  ::StaticType._56_8_ = ::u__Engine_Private;
  ::StaticType._64_8_ = u_Main;
  ::StaticType._72_4_ = 0;
  ::StaticType._88_8_ = ConstructSerializedInstance;
  ::StaticType._76_4_ = 0xf0;
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
  FTypeLayoutDesc::Register(pFVar4);
  local_88 = L"/Engine/Private/ResolveVertexShader.usf";
  uStack_80 = 0x27;
  local_58._12_4_ = uStack_7c;
  local_58.Size = 0x27;
  local_58.DataPtr = L"/Engine/Private/ResolveVertexShader.usf";
  bVar2 = CheckVirtualShaderFilePath
                    (&local_58,(TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *)0x0);
  pwVar11 = L"";
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CheckVirtualShaderFilePath(InSourceFilename)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\Shader.cpp"
                         ,0x126,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FGlobalShaderType *)(*pcVar1)();
    return pFVar5;
  }
  ::StaticType._144_8_ = GShaderTypeList;
  if (GShaderTypeList != (TLinkedList<FShaderType_*> *)0x0) {
    GShaderTypeList->_padding_ = 0x15518f0c0;
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
  pTVar6 = GetSortedShaderTypes(Global);
  uVar9 = pTVar6->ArrayNum;
  pFVar8 = (pTVar6->AllocatorInstance).Data;
  if (0 < (int)uVar9) {
    do {
      uVar10 = uVar9 >> 1;
      FHashedName::FHashedName
                (&local_res18,
                 (FHashedName *)(*(longlong *)(pFVar8 + (longlong)(int)(uVar10 + iVar3) * 8) + 0x28)
                );
      iVar12 = iVar3;
      if (local_res18.Hash < (ulonglong)::StaticType._40_8_) {
        iVar12 = uVar10 + iVar3 + (uVar9 & 1);
      }
      uVar9 = uVar10;
      iVar3 = iVar12;
    } while (uVar10 != 0);
  }
  pFVar8 = (pTVar6->AllocatorInstance).Data;
  local_98[0] = &::StaticType;
  if (((pFVar8 <= (FScriptContainerElement *)local_98) &&
      ((FScriptContainerElement *)local_98 < pFVar8 + (longlong)pTVar6->ArrayMax * 8)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FGlobalShaderType *)(*pcVar1)();
    return pFVar5;
  }
  iVar3 = pTVar6->ArrayNum;
  if (iVar3 == pTVar6->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
  }
  pFVar8 = (pTVar6->AllocatorInstance).Data;
  pTVar6->ArrayNum = iVar3 + 1;
  pFVar8 = pFVar8 + (longlong)iVar12 * 8;
  memmove(pFVar8 + 8,pFVar8,(longlong)(iVar3 - iVar12) << 3);
  *(FGlobalShaderType **)((pTVar6->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_98[0];
  ::StaticType._0_8_ = FGlobalShaderType::vftable;
  ::FString::FString(&local_68,L"/Engine/Private/ResolveVertexShader.usf");
  pFVar7 = FPaths::GetExtension(&local_48,&local_68,false);
  if ((pFVar7->Data).ArrayNum != 0) {
    pwVar11 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(pwVar11,L"usf");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((iVar3 != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0x5d,
                         L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FGlobalShaderType *)(*pcVar1)();
    return pFVar5;
  }
  atexit(`FResolveArrayVS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__);
  _Init_thread_footer(&::_TSS0);
  return &::StaticType;
}

// GetTypeLayout @ 145e15610

FTypeLayoutDesc * __thiscall FResolveArrayVS::GetTypeLayout(FResolveArrayVS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xf0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FResolveArrayVS;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FResolveArrayVS,0>::Do;
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
    ::FieldBuffer._8_8_ = FResolveVS::StaticGetTypeLayout();
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

// InternalDestroy @ 145e18470

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
FResolveArrayVS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xf0);
  return;
}

// ModifyCompilationEnvironment @ 145e1c860

void __cdecl
FResolveArrayVS::ModifyCompilationEnvironment
          (FGlobalShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  FShaderCompilerEnvironment::SetDefine(param_2,L"DEPTH_RESOLVE_TEXTUREARRAY",1);
  return;
}

// ShouldCompilePermutation @ 145e2d050

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FResolveArrayVS::ShouldCompilePermutation(FGlobalShaderPermutationParameters *param_1)

{
  FStereoShaderAspects local_res10 [24];
  
  UE::StereoRenderUtils::FStereoShaderAspects::FStereoShaderAspects
            (local_res10,*(EShaderPlatform *)param_1);
  return ZPULL(local_res10[0],1,1);
}

// ShouldCompilePermutationImpl @ 145e2d3a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FResolveArrayVS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  FStereoShaderAspects local_res10 [24];
  
  UE::StereoRenderUtils::FStereoShaderAspects::FStereoShaderAspects(local_res10,param_1->Platform);
  return ZPULL(local_res10[0],1,1);
}

// ShouldPrecachePermutationImpl @ 145e2dc40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FResolveArrayVS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 145e2f610

FTypeLayoutDesc * __cdecl FResolveArrayVS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xf0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FResolveArrayVS;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FResolveArrayVS,0>::Do;
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
    ::FieldBuffer._8_8_ = FResolveVS::StaticGetTypeLayout();
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

