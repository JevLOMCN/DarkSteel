// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ExrReaderGpu
// Functions: 45

// ShaderTypeRegistration'' @ 141445e30

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

void __cdecl `dynamic_initializer_for_'FExrSwizzlePS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FExrSwizzlePS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FExrSwizzlePS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FExrSwizzlePS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 141445e80

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

void __cdecl `dynamic_initializer_for_'FExrSwizzleVS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FExrSwizzleVS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FExrSwizzleVS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FExrSwizzleVS::ShaderTypeRegistration__);
  return;
}

// `dynamic_initializer_for_'CVarForceTileDescBufferExrGpuReader'' @ 141445ed0

void __cdecl _dynamic_initializer_for__CVarForceTileDescBufferExrGpuReader__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarForceTileDescBufferExrGpuReader,L"r.ExrReaderGPU.ForceTileDescBuffer",local_res8,
             L"Calculates tile description and offsets on CPU and provides a Structured buffer.\nto be used to access tile description on GPU\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarForceTileDescBufferExrGpuReader__);
  return;
}

// `dynamic_initializer_for_'LogExrReaderGpu'' @ 141445f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogExrReaderGpu__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogExrReaderGpu,L"LogExrReaderGpu",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogExrReaderGpu__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantExrReaderGpu'' @ 141445f60

void __cdecl _dynamic_initializer_for__ModuleRegistrantExrReaderGpu__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "ExrReaderGpu";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"ExrReaderGpu",0xc);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FExrReaderGpuModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14ea2b4a0

void * __thiscall
FExrReaderGpuModule::_scalar_deleting_destructor_(FExrReaderGpuModule *this,uint param_1)

{
  *this = (FExrReaderGpuModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// BindForLegacyShaderParameters<FExrSwizzlePS::FParameters> @ 14ea2b4e0

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
BindForLegacyShaderParameters<FExrSwizzlePS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FExrSwizzlePS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// DefaultConstructItems<FExrReader::FTileDesc,int> @ 14ea2b540

void __cdecl DefaultConstructItems<FExrReader::FTileDesc,int>(void *param_1,int param_2)

{
  return;
}

// ReadBytes @ 14ea2cc40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl `anonymous_namespace'::ReadBytes(_iobuf *param_1,char *param_2,int param_3)

{
  size_t sVar1;
  
  sVar1 = fread(param_2,1,(longlong)param_3,(FILE *)param_1);
  if ((int)sVar1 == param_3) {
    return true;
  }
  if (1 < (byte)LogExrReaderGpu._0_1_) {
    feof((FILE *)param_1);
    ferror((FILE *)param_1);
    UE::Logging::Private::BasicLog<2>
              (&`ReadBytes'::`26'::LOG_Static,(FLogCategoryBase *)&LogExrReaderGpu);
    return false;
  }
  return false;
}

// IMPLEMENT_MODULE_ExrReaderGpu @ 14ea2e1b0

void __cdecl IMPLEMENT_MODULE_ExrReaderGpu(void)

{
  return;
}

// dtor$0 @ 15026d100

void `FExrReader::CalculateTileOffsets'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  FCpuProfilerTrace::FEventScope::~FEventScope((FEventScope *)(param_2 + 0x50));
  return;
}

// dtor$1 @ 15026d120

void `FExrReader::CalculateTileOffsets'::__l1::dtor_1(undefined8 param_1,longlong param_2)

{
  TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_>::
  ~TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_>
            ((TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_> *)(param_2 + 0x68));
  return;
}

// dtor$3 @ 15026d140

void `FExrReader::CalculateTileOffsets'::__l1::dtor_3(undefined8 param_1,longlong param_2)

{
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::~ForAnyElementType
            (*(ForAnyElementType **)(param_2 + 0xb0));
  return;
}

// dtor$0 @ 15026d160

void `FExrSwizzlePS::ConstructCompiledInstance'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x48),0xe0);
  return;
}

// dtor$1 @ 15026d190

void `FExrSwizzlePS::ConstructCompiledInstance'::__l1::dtor_1(undefined8 param_1,longlong param_2)

{
  FGlobalShader::~FGlobalShader(*(FGlobalShader **)(param_2 + 0x48));
  return;
}

// dtor$0 @ 15026d1b0

void `FExrSwizzleVS::ConstructCompiledInstance'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x38),0xe0);
  return;
}

// dtor$0 @ 15026d1e0

void `FExrSwizzlePS::ConstructSerializedInstance'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x30),0xe0);
  return;
}

// dtor$0 @ 15026d210

void `FExrSwizzleVS::ConstructSerializedInstance'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x30),0xe0);
  return;
}

// dtor$0 @ 15026d240

void `FExrReader::GenerateTextureData'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  ::FString::~FString(*(FString **)(param_2 + 0x48));
  return;
}

// dtor$2 @ 15026d260

void `FExrReader::GenerateTextureData'::__l1::dtor_2(undefined8 param_1,longlong param_2)

{
  TArray<__int64,TSizedDefaultAllocator<32>_>::~TArray<__int64,TSizedDefaultAllocator<32>_>
            ((TArray<__int64,TSizedDefaultAllocator<32>_> *)(param_2 + 0x38));
  return;
}

// dtor$0 @ 15026d280

void `FExrSwizzlePS::GetStaticType'::__l1::dtor_0(void)

{
  _Init_thread_abort(&::_TSS0);
  return;
}

// dtor$1 @ 15026d2a0

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

void `FExrSwizzlePS::GetStaticType'::__l1::dtor_1(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// dtor$2 @ 15026d2c0

void `FExrSwizzlePS::GetStaticType'::__l1::dtor_2(undefined8 param_1,longlong param_2)

{
  ::FString::~FString((FString *)(param_2 + 0x80));
  return;
}

// dtor$3 @ 15026d2e0

void `FExrSwizzlePS::GetStaticType'::__l1::dtor_3(undefined8 param_1,longlong param_2)

{
  ::FString::~FString((FString *)(param_2 + 0x90));
  return;
}

// dtor$0 @ 15026d300

void `FExrSwizzleVS::GetStaticType'::__l1::dtor_0(void)

{
  _Init_thread_abort(&::_TSS0);
  return;
}

// dtor$1 @ 15026d320

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

void `FExrSwizzleVS::GetStaticType'::__l1::dtor_1(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// dtor$2 @ 15026d340

void `FExrSwizzleVS::GetStaticType'::__l1::dtor_2(undefined8 param_1,longlong param_2)

{
  ::FString::~FString((FString *)(param_2 + 0x80));
  return;
}

// dtor$3 @ 15026d360

void `FExrSwizzleVS::GetStaticType'::__l1::dtor_3(undefined8 param_1,longlong param_2)

{
  ::FString::~FString((FString *)(param_2 + 0x90));
  return;
}

// dtor$0 @ 15026d380

void `FExrSwizzlePS::FParameters::FTypeInfo::GetStructMetadata'::__l1::dtor_0(void)

{
  _Init_thread_abort(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FExrSwizzlePS::FParameters::FTypeInfo::GetStructMetadata(void)'
                      ::__l2::_thread_safe_static_guard_0__);
  return;
}

// dtor$2 @ 15026d3a0

void `FExrSwizzlePS::FParameters::FTypeInfo::GetStructMetadata'::__l1::dtor_2
               (undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x90) & 1) != 0) {
    *(uint *)(param_2 + 0x90) = *(uint *)(param_2 + 0x90) & 0xfffffffe;
    TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_>::
    ~TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_>
              ((TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *)
               (param_2 + 0x70));
  }
  return;
}

// dtor$0 @ 15026d3e0

void `FExrReader::OpenExrAndPrepareForPixelReading'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  ::FString::~FString(*(FString **)(param_2 + 0x48));
  return;
}

// catch$0 @ 15026d400

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8 ``anonymous_namespace'::ReadBytes'::__l1::catch_0(void)

{
  if (1 < (byte)LogExrReaderGpu._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`ReadBytes'::`5'::LOG_Static,(FLogCategoryBase *)&LogExrReaderGpu);
  }
  return 0;
}

// dtor$0 @ 15026d450

void `FExrReader::ReadHeaderData'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  TArray<char,TSizedDefaultAllocator<32>_>::~TArray<char,TSizedDefaultAllocator<32>_>
            ((TArray<char,TSizedDefaultAllocator<32>_> *)(param_2 + 0x38));
  return;
}

// catch$5 @ 15026d470

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8 `FExrReader::ReadHeaderData'::__l1::catch_5(void)

{
  if (1 < (byte)LogExrReaderGpu._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogExrReaderGpu);
  }
  return 0;
}

// dtor$0 @ 15026d4c0

void `FExrReaderGpuModule::StartupModule'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  TSharedPtr<IPlugin,1>::~TSharedPtr<IPlugin,1>((TSharedPtr<IPlugin,1> *)(param_2 + 0x70));
  return;
}

// dtor$1 @ 15026d4e0

void `FExrReaderGpuModule::StartupModule'::__l1::dtor_1(undefined8 param_1,longlong param_2)

{
  ::FString::~FString((FString *)(param_2 + 0x60));
  return;
}

// dtor$2 @ 15026d500

void `FExrReaderGpuModule::StartupModule'::__l1::dtor_2(undefined8 param_1,longlong param_2)

{
  ::FString::~FString((FString *)(param_2 + 0x40));
  return;
}

// dtor$3 @ 15026d520

void `FExrReaderGpuModule::StartupModule'::__l1::dtor_3(undefined8 param_1,longlong param_2)

{
  ::FString::~FString((FString *)(param_2 + 0x30));
  return;
}

// ShaderTypeRegistration'' @ 15046da80

void __cdecl `dynamic_atexit_destructor_for_'FExrSwizzlePS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 15046da90

void __cdecl `dynamic_atexit_destructor_for_'FExrSwizzleVS::ShaderTypeRegistration__(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceTileDescBufferExrGpuReader'' @ 15046daa0

void __cdecl _dynamic_atexit_destructor_for__CVarForceTileDescBufferExrGpuReader__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarForceTileDescBufferExrGpuReader);
  return;
}

// `dynamic_atexit_destructor_for_'LogExrReaderGpu'' @ 15046dac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogExrReaderGpu__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogExrReaderGpu);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 15046dae0

void __cdecl
`FExrSwizzlePS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FExrSwizzlePS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 15046db00

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
`FExrSwizzlePS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 15046db20

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
`FExrSwizzleVS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

