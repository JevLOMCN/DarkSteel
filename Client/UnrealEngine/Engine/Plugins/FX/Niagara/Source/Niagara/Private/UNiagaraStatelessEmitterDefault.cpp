// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 10

// StaticClass @ 149472f20

UClass * __cdecl UNiagaraStatelessEmitterDefault::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessEmitterDefault.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessEmitterDefault",
               &Z_Registration_Info_UClass_UNiagaraStatelessEmitterDefault.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessEmitterDefault,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessEmitterDefault>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessEmitterDefault>,local_res8,
               UNiagaraStatelessEmitterTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessEmitterDefault.InnerSingleton;
}

// UNiagaraStatelessEmitterDefault @ 149476b70

UNiagaraStatelessEmitterDefault * __thiscall
UNiagaraStatelessEmitterDefault::UNiagaraStatelessEmitterDefault
          (UNiagaraStatelessEmitterDefault *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UNiagaraStatelessEmitterDefault__6B_;
  return this;
}

// UNiagaraStatelessEmitterDefault @ 149476bb0

UNiagaraStatelessEmitterDefault * __thiscall
UNiagaraStatelessEmitterDefault::UNiagaraStatelessEmitterDefault
          (UNiagaraStatelessEmitterDefault *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UNiagaraStatelessEmitterDefault__6B_;
  return this;
}

// ~UNiagaraStatelessEmitterDefault @ 1494773e0

void __thiscall
UNiagaraStatelessEmitterDefault::~UNiagaraStatelessEmitterDefault
          (UNiagaraStatelessEmitterDefault *this)

{
  *(undefined ***)this = &___7UNiagaraStatelessEmitterTemplate__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x40);
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14947af00

UClass * __cdecl UNiagaraStatelessEmitterDefault::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessEmitterDefault.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessEmitterDefault",
               &Z_Registration_Info_UClass_UNiagaraStatelessEmitterDefault.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessEmitterDefault,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessEmitterDefault>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessEmitterDefault>,local_res8,
               UNiagaraStatelessEmitterTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessEmitterDefault.InnerSingleton;
}

// GetShaderParametersMetadata @ 14947b540

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __thiscall
UNiagaraStatelessEmitterDefault::GetShaderParametersMetadata(UNiagaraStatelessEmitterDefault *this)

{
  code *pcVar1;
  undefined1 uStackX_8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> TStack_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NiagaraStateless::FSimulationShaderDefaultCS::FParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NiagaraStateless::FSimulationShaderDefaultCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NiagaraStateless::FSimulationShaderDefaultCS::FParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = NiagaraStateless::FSimulationShaderDefaultCS::FParameters::zzAppendMemberGetPrev;
      TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_18.ArrayNum = 0;
      TStack_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(uStackX_8,&TStack_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)TStack_18.AllocatorInstance.Data,TStack_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NiagaraStateless::FSimulationShaderDefaultCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,L"FParameters",
                 L"FParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Internal\\Stateless\\NiagaraStatelessEmitterShaders.h"
                 ,0x19,0x640,&TStack_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)TStack_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(TStack_18.AllocatorInstance.Data);
      }
      atexit(`NiagaraStateless::FSimulationShaderDefaultCS::FParameters::FTypeInfo::
             GetStructMetadata'::__l2::_dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NiagaraStateless::FSimulationShaderDefaultCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NiagaraStateless::FSimulationShaderDefaultCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NiagaraStateless::FSimulationShaderDefaultCS::FParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetSimulationShader @ 14947b5a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

TShaderRefBase<NiagaraStateless::FSimulationShader,FShaderMapPointerTable> * __thiscall
UNiagaraStatelessEmitterDefault::GetSimulationShader
          (UNiagaraStatelessEmitterDefault *this,
          TShaderRefBase<NiagaraStateless::FSimulationShader,FShaderMapPointerTable>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar3;
  FName this_01;
  TShaderRefBase<NiagaraStateless::FSimulationShader,FShaderMapPointerTable> *pTVar4;
  undefined1 local_res10 [24];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar3 = (FShaderType *)NiagaraStateless::FSimulationShaderDefaultCS::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_28,pFVar3,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_01,&local_18);
    NiagaraStateless::FSimulationShaderDefaultCS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderRefBase<NiagaraStateless::FSimulationShader,FShaderMapPointerTable> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  NiagaraStateless::FSimulationShaderDefaultCS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FSimulationShader *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// InitModulesAndAttributes @ 14947c2c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UNiagaraStatelessEmitterDefault::InitModulesAndAttributes(UNiagaraStatelessEmitterDefault *this)

{
  undefined1 auStackY_118 [32];
  TObjectPtr<UClass>_u_0 local_d8;
  UClass *local_d0;
  UClass *local_c8;
  UClass *local_c0;
  UClass *local_b8;
  UClass *local_b0;
  UClass *local_a8;
  UClass *local_a0;
  UClass *local_98;
  UClass *local_90;
  UClass *local_88;
  UClass *local_80;
  UClass *local_78;
  UClass *local_70;
  UClass *local_68;
  UClass *local_60;
  UClass *local_58;
  UClass *local_50;
  UClass *local_48;
  UClass *local_40;
  UClass *local_38;
  UClass *local_30;
  UClass *local_28;
  UClass *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_d8.DebugPtr = Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d8.DebugPtr != (UClass *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_d8.DebugPtr);
  }
  local_d0 = Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d0 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_d0);
  }
  local_c8 = Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_c8);
  }
  local_c0 = Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c0 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_c0);
  }
  local_b8 = Z_Construct_UClass_UNiagaraStatelessModule_AccelerationForce_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_b8);
  }
  local_b0 = Z_Construct_UClass_UNiagaraStatelessModule_CurlNoiseForce_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b0 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_b0);
  }
  local_a8 = Z_Construct_UClass_UNiagaraStatelessModule_Drag_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a8);
  }
  local_a0 = Z_Construct_UClass_UNiagaraStatelessModule_GravityForce_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a0 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a0);
  }
  local_98 = Z_Construct_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_98);
  }
  local_90 = Z_Construct_UClass_UNiagaraStatelessModule_CameraOffset_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_90 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_90);
  }
  local_88 = Z_Construct_UClass_UNiagaraStatelessModule_DecalAttributes_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_88 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_88);
  }
  local_80 = Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_80 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_80);
  }
  local_78 = Z_Construct_UClass_UNiagaraStatelessModule_LightAttributes_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_78 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_78);
  }
  local_70 = Z_Construct_UClass_UNiagaraStatelessModule_MeshIndex_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_70 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_70);
  }
  local_68 = Z_Construct_UClass_UNiagaraStatelessModule_MeshRotationRate_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_68);
  }
  local_60 = Z_Construct_UClass_UNiagaraStatelessModule_ScaleColor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_60 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_60);
  }
  local_58 = Z_Construct_UClass_UNiagaraStatelessModule_ScaleRibbonWidth_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_58 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_58);
  }
  local_50 = Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSize_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_50 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_50);
  }
  local_48 = Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_48);
  }
  local_40 = Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSize_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_40);
  }
  local_38 = Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_38);
  }
  local_30 = Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_30 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_30);
  }
  local_28 = Z_Construct_UClass_UNiagaraStatelessModule_SpriteRotationRate_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_28);
  }
  local_20 = Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_20);
  }
  *(undefined4 *)&this->field_0x30 = 0x18;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,0x18,*(int *)&this->field_0x34,(ForAnyElementType *)&this->field_0x28,0x18,
             (int *)&this->field_0x34);
  ConstructItems<TObjectPtr<UClass>,TObjectPtr<UClass>,int>
            (*(void **)&this->field_0x28,(TObjectPtr<UClass> *)&local_d8.ObjectPtr,0x18);
  return;
}

// SetShaderParameters @ 14947e550

void __thiscall
UNiagaraStatelessEmitterDefault::SetShaderParameters
          (UNiagaraStatelessEmitterDefault *this,uchar *param_1,TArrayView<int_const_,int> *param_2)

{
  int *piVar1;
  
  piVar1 = TArrayView<int_const_,int>::operator[](param_2,0);
  *(int *)(param_1 + 0x5c0) = *piVar1;
  piVar1 = TArrayView<int_const_,int>::operator[](param_2,1);
  *(int *)(param_1 + 0x5c4) = *piVar1;
  piVar1 = TArrayView<int_const_,int>::operator[](param_2,2);
  *(int *)(param_1 + 0x5c8) = *piVar1;
  piVar1 = TArrayView<int_const_,int>::operator[](param_2,3);
  *(int *)(param_1 + 0x5d0) = *piVar1;
  piVar1 = TArrayView<int_const_,int>::operator[](param_2,4);
  *(int *)(param_1 + 0x5f4) = *piVar1;
  piVar1 = TArrayView<int_const_,int>::operator[](param_2,5);
  *(int *)(param_1 + 0x600) = *piVar1;
  piVar1 = TArrayView<int_const_,int>::operator[](param_2,6);
  *(int *)(param_1 + 0x5f0) = *piVar1;
  piVar1 = TArrayView<int_const_,int>::operator[](param_2,7);
  *(int *)(param_1 + 0x60c) = *piVar1;
  piVar1 = TArrayView<int_const_,int>::operator[](param_2,8);
  *(int *)(param_1 + 0x620) = *piVar1;
  piVar1 = TArrayView<int_const_,int>::operator[](param_2,9);
  *(int *)(param_1 + 0x62c) = *piVar1;
  piVar1 = TArrayView<int_const_,int>::operator[](param_2,10);
  *(int *)(param_1 + 0x61c) = *piVar1;
  piVar1 = TArrayView<int_const_,int>::operator[](param_2,0xb);
  *(int *)(param_1 + 0x5ec) = *piVar1;
  piVar1 = TArrayView<int_const_,int>::operator[](param_2,0xc);
  *(int *)(param_1 + 0x618) = *piVar1;
  piVar1 = TArrayView<int_const_,int>::operator[](param_2,0xd);
  *(int *)(param_1 + 0x5e8) = *piVar1;
  piVar1 = TArrayView<int_const_,int>::operator[](param_2,0xe);
  *(int *)(param_1 + 0x614) = *piVar1;
  piVar1 = TArrayView<int_const_,int>::operator[](param_2,0xf);
  *(int *)(param_1 + 0x608) = *piVar1;
  piVar1 = TArrayView<int_const_,int>::operator[](param_2,0x10);
  *(int *)(param_1 + 0x630) = *piVar1;
  piVar1 = TArrayView<int_const_,int>::operator[](param_2,0x11);
  *(int *)(param_1 + 0x5cc) = *piVar1;
  piVar1 = TArrayView<int_const_,int>::operator[](param_2,0x12);
  *(int *)(param_1 + 0x610) = *piVar1;
  piVar1 = TArrayView<int_const_,int>::operator[](param_2,0x13);
  *(int *)(param_1 + 0x5d4) = *piVar1;
  piVar1 = TArrayView<int_const_,int>::operator[](param_2,0x14);
  *(int *)(param_1 + 0x5d8) = *piVar1;
  piVar1 = TArrayView<int_const_,int>::operator[](param_2,0x15);
  *(int *)(param_1 + 0x5dc) = *piVar1;
  piVar1 = TArrayView<int_const_,int>::operator[](param_2,0x16);
  *(int *)(param_1 + 0x5e0) = *piVar1;
  piVar1 = TArrayView<int_const_,int>::operator[](param_2,0x17);
  *(int *)(param_1 + 0x5e4) = *piVar1;
  piVar1 = TArrayView<int_const_,int>::operator[](param_2,0x18);
  *(int *)(param_1 + 0x5f8) = *piVar1;
  piVar1 = TArrayView<int_const_,int>::operator[](param_2,0x19);
  *(int *)(param_1 + 0x624) = *piVar1;
  piVar1 = TArrayView<int_const_,int>::operator[](param_2,0x1a);
  *(int *)(param_1 + 0x5fc) = *piVar1;
  piVar1 = TArrayView<int_const_,int>::operator[](param_2,0x1b);
  *(int *)(param_1 + 0x628) = *piVar1;
  piVar1 = TArrayView<int_const_,int>::operator[](param_2,0x1c);
  *(int *)(param_1 + 0x604) = *piVar1;
  return;
}

// StaticRegisterNativesUNiagaraStatelessEmitterDefault @ 14947f390

void __cdecl
UNiagaraStatelessEmitterDefault::StaticRegisterNativesUNiagaraStatelessEmitterDefault(void)

{
  return;
}

