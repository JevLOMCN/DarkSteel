// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 92

// `dynamic_initializer_for_'GGlobalLUT'' @ 141195700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl NiagaraStateless::_dynamic_initializer_for__GGlobalLUT__(void)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  
  FNoiseLUT::FNoiseLUT((FNoiseLUT *)&GGlobalLUT,0x20,0x40,__real_3dcccccd);
  GGlobalLUT._0_8_ = &___7__TGlobalResource_VFNoiseLUT_NiagaraStateless___00__6B_;
  if (GGlobalLUT._24_4_ != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderResource.h"
                       ,0xb9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  GGlobalLUT._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(GGlobalLUT._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&GGlobalLUT,pFVar3);
    atexit(_dynamic_atexit_destructor_for__GGlobalLUT__);
    return;
  }
  BeginInitResource((FRenderResource *)&GGlobalLUT,(FRenderCommandPipe *)0x0);
  atexit(_dynamic_atexit_destructor_for__GGlobalLUT__);
  return;
}

// `dynamic_initializer_for_'LogVolumeCache'' @ 1411957d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogVolumeCache__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogVolumeCache,L"LogVolumeCache",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogVolumeCache__);
  return;
}

// `dynamic_initializer_for_'NAME_ExposedToLibrary'' @ 141195810

void __cdecl
NiagaraStatelessEmitterTemplatePrivate::_dynamic_initializer_for__NAME_ExposedToLibrary__(void)

{
  ::FName::FName(&NAME_ExposedToLibrary,"bExposedToLibrary");
  return;
}

// `dynamic_initializer_for_'ObjectsToDeferredInit'' @ 141195830

void __cdecl
NiagaraStatelessEmitterTemplatePrivate::_dynamic_initializer_for__ObjectsToDeferredInit__(void)

{
  atexit(_dynamic_atexit_destructor_for__ObjectsToDeferredInit__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h__Script_Niagara_256976000'' @ 141195850

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h__Script_Niagara_256976000__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h__Script_Niagara_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessEmitterTemplate_h__Script_Niagara_3831801255'' @ 1411958a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessEmitterTemplate_h__Script_Niagara_3831801255__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessEmitterTemplate_h__Script_Niagara_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessExpression_h__Script_Niagara_3219491944'' @ 1411958e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessExpression_h__Script_Niagara_3219491944__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessExpression_h__Script_Niagara_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessModule_h__Script_Niagara_3020510811'' @ 141195920

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessModule_h__Script_Niagara_3020510811__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessModule_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessSpawnInfo_h__Script_Niagara_1571060013'' @ 141195960

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessSpawnInfo_h__Script_Niagara_1571060013__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessSpawnInfo_h__Script_Niagara_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessSpawnInfo_h__Script_Niagara_Statics
             ::EnumInfo,1);
  return;
}

// NewStructOps @ 149472fe0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpression_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpression,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpression>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpression>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpression>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpression>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraStatelessModule @ 149473020

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule(void)

{
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraStatelessModule.OuterSingleton,
               &Z_Construct_UClass_UNiagaraStatelessModule_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule.OuterSingleton;
}

// NewProp_bModuleEnabled_SetBit @ 149473060

void __cdecl
Z_Construct_UClass_UNiagaraStatelessModule_Statics::NewProp_bModuleEnabled_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x28) = *(uint *)((longlong)param_1 + 0x28) | 1;
  return;
}

// `scalar_deleting_destructor' @ 149473160

void * __thiscall
TGlobalResource<NiagaraStateless::FNoiseLUT,1>::_scalar_deleting_destructor_
          (TGlobalResource<NiagaraStateless::FNoiseLUT,1> *this,uint param_1)

{
  *(undefined ***)this = &___7__TGlobalResource_VFNoiseLUT_NiagaraStateless___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x48 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x48);
  }
  if (*(FRHIResource **)&this->field_0x40 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x40);
  }
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// Z_Construct_UEnum_Niagara_ENiagaraStatelessSpawnInfoType @ 1494731e0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraStatelessSpawnInfoType(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraStatelessSpawnInfoType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraStatelessSpawnInfoType.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraStatelessSpawnInfoType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraStatelessSpawnInfoType.InnerSingleton;
}

// ENiagaraStatelessSpawnInfoType_StaticEnum @ 149473220

UEnum * __cdecl ENiagaraStatelessSpawnInfoType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraStatelessSpawnInfoType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraStatelessSpawnInfoType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraStatelessSpawnInfoType,(UObject *)pUVar1,
                       L"ENiagaraStatelessSpawnInfoType");
  }
  return Z_Registration_Info_UEnum_ENiagaraStatelessSpawnInfoType.OuterSingleton;
}

// NewProp_bEnabled_SetBit @ 149473260

void __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x60) = *(byte *)((longlong)param_1 + 0x60) | 1;
  return;
}

// NewProp_bSpawnProbabilityEnabled_SetBit @ 149473270

void __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics::
NewProp_bSpawnProbabilityEnabled_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x60) = *(byte *)((longlong)param_1 + 0x60) | 2;
  return;
}

// NewProp_bLoopCountLimitEnabled_SetBit @ 149473280

void __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics::NewProp_bLoopCountLimitEnabled_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x60) = *(byte *)((longlong)param_1 + 0x60) | 4;
  return;
}

// NewStructOps @ 149473290

void * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessSpawnInfo,&UE::CoreUObject::Private::Construct<FNiagaraStatelessSpawnInfo>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessSpawnInfo>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessSpawnInfo>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessSpawnInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UVolumeCache @ 149473590

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UVolumeCache(void)

{
  if (Z_Registration_Info_UClass_UVolumeCache.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UVolumeCache.OuterSingleton,
               &Z_Construct_UClass_UVolumeCache_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UVolumeCache.OuterSingleton;
}

// Z_Construct_UEnum_Niagara_EVolumeCacheType @ 1494735d0

UEnum * __cdecl Z_Construct_UEnum_Niagara_EVolumeCacheType(void)

{
  if (Z_Registration_Info_UEnum_EVolumeCacheType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EVolumeCacheType.InnerSingleton,
               &Z_Construct_UEnum_Niagara_EVolumeCacheType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EVolumeCacheType.InnerSingleton;
}

// EVolumeCacheType_StaticEnum @ 149473610

UEnum * __cdecl EVolumeCacheType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVolumeCacheType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_EVolumeCacheType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_EVolumeCacheType,(UObject *)pUVar1,
                       L"EVolumeCacheType");
  }
  return Z_Registration_Info_UEnum_EVolumeCacheType.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraStatelessEmitterDefault @ 1494737e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessEmitterDefault(void)

{
  if (Z_Registration_Info_UClass_UNiagaraStatelessEmitterDefault.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraStatelessEmitterDefault.OuterSingleton,
               &Z_Construct_UClass_UNiagaraStatelessEmitterDefault_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessEmitterDefault.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraStatelessEmitterTemplate @ 149473820

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessEmitterTemplate(void)

{
  if (Z_Registration_Info_UClass_UNiagaraStatelessEmitterTemplate.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraStatelessEmitterTemplate.OuterSingleton,
               &Z_Construct_UClass_UNiagaraStatelessEmitterTemplate_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessEmitterTemplate.OuterSingleton;
}

// DefaultConstructItems<FNiagaraStatelessEmitterInstance::FActiveSpawnRate,int> @ 149473870

void __cdecl
DefaultConstructItems<FNiagaraStatelessEmitterInstance::FActiveSpawnRate,int>
          (void *param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)((longlong)param_1 + 0x68);
    do {
      FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
                ((FNiagaraDistributionRangeFloat *)(puVar1 + -0x68),0.0);
      *(undefined4 *)(puVar1 + -0x38) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 0x70;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraStatelessRuntimeSpawnInfo,int> @ 1494738d0

void __cdecl DefaultConstructItems<FNiagaraStatelessRuntimeSpawnInfo,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined8 *)((longlong)puVar1 + 0xc) = 0x3f800000;
      *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
      puVar1 = (undefined8 *)((longlong)puVar1 + 0x24);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<NiagaraStateless::FParticleSimulationExecData::FRequiredComponentOffset,int> @ 149473910

void __cdecl
DefaultConstructItems<NiagaraStateless::FParticleSimulationExecData::FRequiredComponentOffset,int>
          (void *param_1,int param_2)

{
  ulonglong uVar1;
  
  if (param_2 != 0) {
    for (uVar1 = (ulonglong)(uint)param_2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined2 *)param_1 = 0;
      param_1 = (undefined2 *)((longlong)param_1 + 2);
    }
  }
  return;
}

// DefaultConstructItems<NiagaraStateless::FParticleSimulationExecData::FVariableOffset,int> @ 149473940

void __cdecl
DefaultConstructItems<NiagaraStateless::FParticleSimulationExecData::FVariableOffset,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)param_1 = 0;
    param_1 = (void *)((longlong)param_1 + 4);
  }
  return;
}

// DestructItems<TTuple<int,FInstancedStruct>,int> @ 149473970

void __cdecl
DestructItems<TTuple<int,FInstancedStruct>,int>(TTuple<int,FInstancedStruct> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FInstancedStruct::Reset((FInstancedStruct *)&param_1->field_0x8);
    param_1 = (TTuple<int,FInstancedStruct> *)(&param_1->field_0x8 + 0x10);
  }
  return;
}

// DestructItems<FNiagaraStatelessEmitterInstance::FActiveSpawnRate,int> @ 1494739b0

void __cdecl
DestructItems<FNiagaraStatelessEmitterInstance::FActiveSpawnRate,int>
          (FActiveSpawnRate *param_1,int param_2)

{
  FInstancedStruct *this;
  
  if (param_2 != 0) {
    this = (FInstancedStruct *)&(param_1->SpawnProbability).TypedValue._padding_;
    do {
      if (*(char *)&this[1].StructMemory != '\0') {
        FInstancedStruct::Reset(this);
      }
      FInstancedStruct::Reset((FInstancedStruct *)&this[-4].StructMemory);
      this = this + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<NiagaraStateless::FParticleSimulationExecData::FCallback,int> @ 149473a00

void __cdecl
DestructItems<NiagaraStateless::FParticleSimulationExecData::FCallback,int>
          (FCallback *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&(param_1->Function).field_0x10;
    do {
      if (plVar2[-2] != 0) {
        plVar1 = (longlong *)plVar2[3];
        if ((longlong *)plVar2[3] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraStatelessEmitterInstance::EnqueueParticleDataBufferReadback'::__l27::TSTR_CaptureStatelessForDebugging992>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 149473a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraStatelessEmitterInstance::EnqueueParticleDataBufferReadback_::__l27::TSTR_CaptureStatelessForDebugging992>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FNiagaraStatelessEmitterInstance::EnqueueParticleDataBufferReadback'::__l27::TSTR_CaptureStatelessForDebugging992>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_149473ba1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_149473d95;
  }
LAB_149473ba1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_149473c7f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_149473c7f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_149473d95:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraStatelessEmitterInstance::HandleCompletion'::__l8::TSTR_CompleteStatelessEmitter266>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 149473dd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraStatelessEmitterInstance::HandleCompletion_::__l8::TSTR_CompleteStatelessEmitter266>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FNiagaraStatelessEmitterInstance::HandleCompletion'::__l8::TSTR_CompleteStatelessEmitter266>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_149473f21;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_149474115;
  }
LAB_149473f21:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_149473fff:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_149473fff;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_149474115:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraStatelessEmitterInstance::Init'::__l13::TSTR_FInitStatelessEmitter170>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 149474150

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraStatelessEmitterInstance::Init_::__l13::TSTR_FInitStatelessEmitter170>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FNiagaraStatelessEmitterInstance::Init'::__l13::TSTR_FInitStatelessEmitter170>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1494742a1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_149474495;
  }
LAB_1494742a1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14947437f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14947437f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_149474495:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraStatelessEmitterInstance::~FNiagaraStatelessEmitterInstance'::__l5::TSTR_FReleaseStatelessEmitter104>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1494744d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraStatelessEmitterInstance::~FNiagaraStatelessEmitterInstance_::__l5::TSTR_FReleaseStatelessEmitter104>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FNiagaraStatelessEmitterInstance::~FNiagaraStatelessEmitterInstance'::__l5::TSTR_FReleaseStatelessEmitter104>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_149474621;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_149474815;
  }
LAB_149474621:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1494746ff:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1494746ff;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_149474815:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraStatelessEmitterData::InitRenderResources'::__l2::TSTR_InitNiagaraStatelessEmitterData24>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 149474850

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraStatelessEmitterData::InitRenderResources_::__l2::TSTR_InitNiagaraStatelessEmitterData24>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FNiagaraStatelessEmitterData::InitRenderResources'::__l2::TSTR_InitNiagaraStatelessEmitterData24>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1494749a1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_149474b95;
  }
LAB_1494749a1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_149474a7f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_149474a7f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_149474b95:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraStatelessEmitterInstance::ResetSimulation'::__l28::TSTR_UpdateStatelessAge233>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 149474bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraStatelessEmitterInstance::ResetSimulation_::__l28::TSTR_UpdateStatelessAge233>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FNiagaraStatelessEmitterInstance::ResetSimulation'::__l28::TSTR_UpdateStatelessAge233>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_149474d21;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_149474f15;
  }
LAB_149474d21:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_149474dff:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_149474dff;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_149474f15:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraStatelessEmitterInstance::UpdateSimulationData'::__l22::TSTR_UpdateStatelessAge630>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 149474f50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraStatelessEmitterInstance::UpdateSimulationData_::__l22::TSTR_UpdateStatelessAge630>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FNiagaraStatelessEmitterInstance::UpdateSimulationData'::__l22::TSTR_UpdateStatelessAge630>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1494750a1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_149475295;
  }
LAB_1494750a1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14947517f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14947517f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_149475295:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InternalConstructor<UNiagaraStatelessEmitterDefault> @ 149475590

void __cdecl InternalConstructor<UNiagaraStatelessEmitterDefault>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined ***)this = &___7UNiagaraStatelessEmitterDefault__6B_;
  }
  return;
}

// InternalConstructor<UNiagaraStatelessEmitterTemplate> @ 1494755e0

void __cdecl InternalConstructor<UNiagaraStatelessEmitterTemplate>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNiagaraStatelessEmitterTemplate__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UNiagaraStatelessModule> @ 149475630

void __cdecl InternalConstructor<UNiagaraStatelessModule>(FObjectInitializer *param_1)

{
  UNiagaraMergeable *this;
  
  this = (UNiagaraMergeable *)param_1->Obj;
  if (this != (UNiagaraMergeable *)0x0) {
    UNiagaraMergeable::UNiagaraMergeable(this);
    *(uint *)(this + 1) = *(uint *)(this + 1) | 1;
    *(undefined ***)this = &___7UNiagaraStatelessModule__6B_;
  }
  return;
}

// InternalConstructor<UVolumeCache> @ 149475660

void __cdecl InternalConstructor<UVolumeCache>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UVolumeCache__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UNiagaraStatelessEmitterDefault> @ 1494756b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraStatelessEmitterDefault>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraStatelessEmitterDefault::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UNiagaraStatelessEmitterDefault__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraStatelessEmitterTemplate> @ 149475770

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraStatelessEmitterTemplate>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraStatelessEmitterTemplate::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNiagaraStatelessEmitterTemplate__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraStatelessModule> @ 149475830

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNiagaraStatelessModule>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraStatelessModule::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UNiagaraMergeable::UNiagaraMergeable((UNiagaraMergeable *)pUVar1,param_1);
    *(uint *)(pUVar1 + 1) = *(uint *)(pUVar1 + 1) | 1;
    *(undefined ***)pUVar1 = &___7UNiagaraStatelessModule__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UVolumeCache> @ 1494758e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UVolumeCache>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UVolumeCache::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UVolumeCache__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// RemoveAll<`UNiagaraStatelessEmitterTemplate::InitModulesAndAttributes'::__l2::<lambda_1>_> @ 149475ae0

int __thiscall
TArray<TObjectPtr<UClass>,TSizedDefaultAllocator<32>_>::
RemoveAll<_UNiagaraStatelessEmitterTemplate::InitModulesAndAttributes_::__l2::<lambda_1>_>
          (TArray<TObjectPtr<UClass>,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  bool bVar5;
  byte bVar6;
  UClass *pUVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  int iVar12;
  
  iVar1 = this->ArrayNum;
  if (iVar1 == 0) {
    return 0;
  }
  iVar9 = 0;
  iVar12 = 0;
  pFVar3 = (this->AllocatorInstance).Data;
  lVar8 = *(longlong *)pFVar3;
  if ((lVar8 != 0) && (pUVar7 = UNiagaraStatelessModule::StaticClass(), pUVar7 != (UClass *)0x0)) {
    iVar10 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar8 + 0x38) < iVar10) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar10 * 8) !=
        &pUVar7->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      bVar11 = 1;
      goto LAB_149475b67;
    }
  }
  bVar11 = 0;
LAB_149475b67:
  lVar8 = 0;
  iVar10 = iVar9;
joined_r0x000149475b7e:
  do {
    lVar8 = lVar8 + 1;
    iVar9 = iVar9 + 1;
    if (lVar8 < iVar1) {
      lVar4 = *(longlong *)(pFVar3 + lVar8 * 8);
      if ((lVar4 == 0) || (pUVar7 = UNiagaraStatelessModule::StaticClass(), pUVar7 == (UClass *)0x0)
         ) {
LAB_149475bc2:
        bVar6 = 0;
      }
      else {
        iVar2 = (int)pUVar7->_padding_;
        if ((*(int *)(lVar4 + 0x38) < iVar2) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar7->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) goto LAB_149475bc2;
        bVar6 = 1;
      }
      if (bVar11 == bVar6) goto joined_r0x000149475b7e;
    }
    if (bVar11 != 0) {
      if (iVar12 != iVar10) {
        memmove(pFVar3 + (longlong)iVar12 * 8,pFVar3 + (longlong)iVar10 * 8,
                (longlong)(iVar9 - iVar10) << 3);
      }
      iVar12 = iVar12 + (iVar9 - iVar10);
    }
    bVar11 = bVar11 ^ 1;
    iVar10 = iVar9;
    if (iVar1 <= lVar8) {
      this->ArrayNum = iVar12;
      return iVar1 - iVar12;
    }
  } while( true );
}

// StaticEnum<enum_ENiagaraStatelessSpawnInfoType> @ 149475c50

UEnum * __cdecl StaticEnum<enum_ENiagaraStatelessSpawnInfoType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraStatelessSpawnInfoType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraStatelessSpawnInfoType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraStatelessSpawnInfoType,(UObject *)pUVar1,
                       L"ENiagaraStatelessSpawnInfoType");
  }
  return Z_Registration_Info_UEnum_ENiagaraStatelessSpawnInfoType.OuterSingleton;
}

// StaticEnum<enum_EVolumeCacheType> @ 149475c90

UEnum * __cdecl StaticEnum<enum_EVolumeCacheType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVolumeCacheType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_EVolumeCacheType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_EVolumeCacheType,(UObject *)pUVar1,
                       L"EVolumeCacheType");
  }
  return Z_Registration_Info_UEnum_EVolumeCacheType.OuterSingleton;
}

// ~TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::CaptureForDebugging'::__l2::<lambda_1>,0,0> @ 149476d50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::CaptureForDebugging'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_FNiagaraStatelessEmitterInstance::CaptureForDebugging_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::CaptureForDebugging'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraStatelessEmitterData::InitRenderResources'::__l2::<lambda_1>,1,0> @ 149476d70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterData::InitRenderResources'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FNiagaraStatelessEmitterData::InitRenderResources_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraStatelessEmitterData::InitRenderResources'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::~FNiagaraStatelessEmitterInstance'::__l5::<lambda_1>,1,0> @ 149476d90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::~FNiagaraStatelessEmitterInstance'::__l5::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FNiagaraStatelessEmitterInstance::~FNiagaraStatelessEmitterInstance_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::~FNiagaraStatelessEmitterInstance'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::HandleCompletion'::__l8::<lambda_1>,1,0> @ 149476db0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::HandleCompletion'::__l8::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FNiagaraStatelessEmitterInstance::HandleCompletion_::__l8::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::HandleCompletion'::`8'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::UpdateSimulationData'::__l22::<lambda_1>,1,1> @ 149476dd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::UpdateSimulationData'::__l22::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FNiagaraStatelessEmitterInstance::UpdateSimulationData_::__l22::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::UpdateSimulationData'::`22'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x40));
  }
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::EnqueueParticleDataBufferReadback'::__l27::<lambda_1>,1,1> @ 149476e10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::EnqueueParticleDataBufferReadback'::__l27::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FNiagaraStatelessEmitterInstance::EnqueueParticleDataBufferReadback_::__l27::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::EnqueueParticleDataBufferReadback'::`27'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x000149476e33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::ResetSimulation'::__l28::<lambda_1>,1,0> @ 149476e40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::ResetSimulation'::__l28::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FNiagaraStatelessEmitterInstance::ResetSimulation_::__l28::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::ResetSimulation'::`28'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::Init'::__l13::<lambda_1>,1,0> @ 149476e60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::Init'::__l13::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FNiagaraStatelessEmitterInstance::Init_::__l13::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::Init'::`13'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// `scalar_deleting_destructor' @ 149477660

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::CaptureForDebugging'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::CaptureForDebugging'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494776a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterData::InitRenderResources'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraStatelessEmitterData::InitRenderResources'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494776e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::~FNiagaraStatelessEmitterInstance'::__l5::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::~FNiagaraStatelessEmitterInstance'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149477720

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::HandleCompletion'::__l8::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::HandleCompletion'::`8'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149477760

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::UpdateSimulationData'::__l22::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::UpdateSimulationData'::`22'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x40));
  }
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494777c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::EnqueueParticleDataBufferReadback'::__l27::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::EnqueueParticleDataBufferReadback'::`27'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149477820

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::ResetSimulation'::__l28::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::ResetSimulation'::`28'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149477860

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::Init'::__l13::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::Init'::`13'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494778a0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void * __thiscall
NiagaraStateless::FEmitterInstance_RT::_scalar_deleting_destructor_
          (FEmitterInstance_RT *this,uint param_1)

{
  FRHIShaderResourceView *this_00;
  FRHIBuffer *this_01;
  FScriptContainerElement *pFVar1;
  
  this_00 = (this->BindingBuffer).SRV.Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->BindingBuffer).Buffer.Reference;
  if (this_01 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  pFVar1 = (this->BindingBufferData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMemory::Free((this->ShaderParameters).Ptr);
  pFVar1 = (this->SpawnInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EmitterData).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149477920

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void * __thiscall
FNiagaraStatelessEmitterInstance::_scalar_deleting_destructor_
          (FNiagaraStatelessEmitterInstance *this,uint param_1)

{
  ~FNiagaraStatelessEmitterInstance(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x290);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149477960

void * __thiscall
NiagaraStateless::FNoiseLUT::_scalar_deleting_destructor_(FNoiseLUT *this,uint param_1)

{
  FRHIShaderResourceView *this_00;
  FRHIBuffer *this_01;
  FScriptContainerElement *pFVar1;
  
  this_00 = (this->GpuData).SRV.Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->GpuData).Buffer.Reference;
  if (this_01 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  pFVar1 = (this->CpuData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494779d0

void * __thiscall
UNiagaraStatelessEmitterDefault::_scalar_deleting_destructor_
          (UNiagaraStatelessEmitterDefault *this,uint param_1)

{
  *(undefined ***)this = &___7UNiagaraStatelessEmitterTemplate__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x40);
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149477a50

void * __thiscall
UNiagaraStatelessEmitterTemplate::_scalar_deleting_destructor_
          (UNiagaraStatelessEmitterTemplate *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraStatelessEmitterTemplate__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ShaderParametersMetadata).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->Modules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149477ad0

void * __thiscall
UNiagaraStatelessModule::_scalar_deleting_destructor_(UNiagaraStatelessModule *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule__6B_;
  UNiagaraMergeable::~UNiagaraMergeable((UNiagaraMergeable *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149477b30

void * __thiscall UVolumeCache::_scalar_deleting_destructor_(UVolumeCache *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UVolumeCache__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CachedVolumeFiles).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->FilePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// AddStaticData @ 149478340

uint __cdecl
NiagaraStatelessEmitterDataBuildContextPrivate::AddStaticData
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,void *param_2,uint param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_3 == 0) {
    return 0;
  }
  if (((param_3 & 3) != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(DataSize % BlockSize) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessEmitterDataBuildContext.cpp"
                         ,0x16,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  uVar4 = param_1->ArrayNum;
  piVar1 = &param_1->ArrayNum;
  uVar7 = 0;
  uVar6 = param_3;
  while (uVar6 <= uVar4) {
    uVar6 = 0;
    if ((int)uVar7 < *piVar1) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    iVar5 = memcmp((param_1->AllocatorInstance).Data + (int)uVar7,param_2,(ulonglong)param_3);
    if (iVar5 == 0) goto LAB_1494784a6;
    uVar7 = uVar7 + 4;
    uVar6 = uVar7 + param_3;
  }
  uVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,param_3,&param_1->AllocatorInstance,piVar1,&param_1->ArrayMax);
  uVar4 = 0;
  if ((int)uVar7 < *piVar1) {
    uVar4 = ~uVar7 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  memcpy((param_1->AllocatorInstance).Data + (int)uVar7,param_2,(ulonglong)param_3);
LAB_1494784a6:
  return uVar7 >> 2;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessEmitterTemplate @ 1494795c0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessEmitterTemplate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessExpression @ 1494795d0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessExpression(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule @ 1494795e0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessSpawnInfo @ 1494795f0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessSpawnInfo(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeVolumeCache @ 149479600

void __cdecl EmptyLinkFunctionForGeneratedCodeVolumeCache(void)

{
  return;
}

// EvaluateDistribution @ 149479930

int __cdecl
NiagaraStatelessEmitterInstancePrivate::EvaluateDistribution
          (FNiagaraDistributionRangeInt *param_1,FRandomStream *param_2,
          FNiagaraParameterStore *param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FNiagaraTypeDefinition *pFVar5;
  int *piVar6;
  FNiagaraStatelessExpression *pFVar7;
  TObjectPtr<UObject>_u_0 *pTVar8;
  int iVar9;
  int local_res8 [2];
  FNiagaraParameterStore *local_28;
  undefined1 local_20 [24];
  
  if (param_1->Mode != Binding) {
    if (param_1->Mode != Expression) {
      iVar3 = param_1->Min;
      iVar9 = (param_1->Max - iVar3) + 1;
      if (0 < iVar9) {
        uVar4 = param_2->Seed * 0xbb38435 + 0x3619636b;
        param_2->Seed = uVar4;
        return (int)(((float)(uVar4 >> 9 | 0x3f800000) - __real_3f800000) * (float)iVar9) + iVar3;
      }
      return iVar3;
    }
    pFVar7 = UE::StructUtils::GetStructRef<FNiagaraStatelessExpression>
                       ((param_1->ParameterExpression).ScriptStruct.field0_0x0.DebugPtr,
                        (param_1->ParameterExpression).StructMemory);
    pTVar8 = (TObjectPtr<UObject>_u_0 *)(**(code **)((longlong)*pFVar7 + 0x18))(pFVar7,local_20);
    if ((((TObjectPtr<UObject>_u_0)pTVar8->DebugPtr !=
          FNiagaraTypeDefinition::IntDef.ClassStructOrEnum.field0_0x0) ||
        (*(ushort *)(pTVar8 + 1) != FNiagaraTypeDefinition::IntDef.UnderlyingType)) ||
       (*(uchar *)((longlong)pTVar8 + 10) != FNiagaraTypeDefinition::IntDef.Flags)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Distribution.ParameterExpression.Get<FNiagaraStatelessExpression>().GetOutputTypeDef() == FNiagaraTypeDefinition::GetIntDef()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessEmitterInstance.cpp"
                         ,0x32,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    local_res8[0] = param_4;
    pFVar7 = UE::StructUtils::GetStructRef<FNiagaraStatelessExpression>
                       ((param_1->ParameterExpression).ScriptStruct.field0_0x0.DebugPtr,
                        (param_1->ParameterExpression).StructMemory);
    local_28 = param_3;
    (**(code **)((longlong)*pFVar7 + 0x10))(pFVar7,&local_28,local_res8);
    return local_res8[0];
  }
  if ((param_1->ParameterBinding).Name != (FName)0x0) {
    pFVar5 = FNiagaraTypeDefinitionHandle::Resolve(&(param_1->ParameterBinding).TypeDefHandle);
    if ((pFVar5->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
      pFVar5 = FNiagaraTypeDefinitionHandle::Resolve(&(param_1->ParameterBinding).TypeDefHandle);
      iVar3 = FNiagaraTypeDefinition::GetSize(pFVar5);
      if (iVar3 != 4) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parameter.GetSizeInBytes() == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x1ae,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar3 = (*pcVar1)();
          return iVar3;
        }
      }
      piVar6 = (int *)(**(code **)(param_3->_padding_ + 0x58))(param_3,&param_1->ParameterBinding,0)
      ;
      if (piVar6 != (int *)0x0) {
        iVar3 = *piVar6;
        if (iVar3 != -1) {
          if ((iVar3 < 0) ||
             ((ulonglong)(longlong)(param_3->ParameterData).ArrayNum < (longlong)iVar3 + 4U)) {
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                               ,0x17f,L"");
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              iVar3 = (*pcVar1)();
              return iVar3;
            }
          }
          param_4 = *(int *)((param_3->ParameterData).AllocatorInstance.Data + iVar3);
        }
      }
    }
  }
  return param_4;
}

// EvaluateDistribution @ 149479b50

float __cdecl
NiagaraStatelessEmitterInstancePrivate::EvaluateDistribution
          (FNiagaraDistributionRangeFloat *param_1,FRandomStream *param_2,
          FNiagaraParameterStore *param_3,float param_4)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FNiagaraTypeDefinition *pFVar6;
  int *piVar7;
  FNiagaraStatelessExpression *pFVar8;
  TObjectPtr<UObject>_u_0 *pTVar9;
  float fVar10;
  float local_res8 [2];
  FNiagaraParameterStore *local_38;
  undefined1 local_30 [40];
  
  cVar1 = (char)param_1->_padding_;
  if (cVar1 != '\x01') {
    if (cVar1 != '\x02') {
      uVar5 = param_2->Seed * 0xbb38435 + 0x3619636b;
      param_2->Seed = uVar5;
      return (param_1->Max - param_1->Min) * ((float)(uVar5 >> 9 | 0x3f800000) - __real_3f800000) +
             param_1->Min;
    }
    pFVar8 = UE::StructUtils::GetStructRef<FNiagaraStatelessExpression>
                       ((UScriptStruct *)param_1->_padding_,(void *)param_1->_padding_);
    pTVar9 = (TObjectPtr<UObject>_u_0 *)(**(code **)((longlong)*pFVar8 + 0x18))(pFVar8,local_30);
    if ((((TObjectPtr<UObject>_u_0)pTVar9->DebugPtr !=
          FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0) ||
        (*(ushort *)(pTVar9 + 1) != FNiagaraTypeDefinition::FloatDef.UnderlyingType)) ||
       (*(uchar *)((longlong)pTVar9 + 10) != FNiagaraTypeDefinition::FloatDef.Flags)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Distribution.ParameterExpression.Get<FNiagaraStatelessExpression>().GetOutputTypeDef() == FNiagaraTypeDefinition::GetFloatDef()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessEmitterInstance.cpp"
                         ,0x21,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        fVar10 = (float)(*pcVar2)();
        return fVar10;
      }
    }
    local_res8[0] = param_4;
    pFVar8 = UE::StructUtils::GetStructRef<FNiagaraStatelessExpression>
                       ((UScriptStruct *)param_1->_padding_,(void *)param_1->_padding_);
    local_38 = param_3;
    (**(code **)((longlong)*pFVar8 + 0x10))(pFVar8,&local_38,local_res8);
    return local_res8[0];
  }
  if (*(longlong *)((longlong)&param_1->_padding_ + 4) != 0) {
    pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                       ((FNiagaraTypeDefinitionHandle *)((longlong)&param_1->_padding_ + 4));
    if ((pFVar6->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
      pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                         ((FNiagaraTypeDefinitionHandle *)((longlong)&param_1->_padding_ + 4));
      iVar4 = FNiagaraTypeDefinition::GetSize(pFVar6);
      if (iVar4 != 4) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parameter.GetSizeInBytes() == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x1ae,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          fVar10 = (float)(*pcVar2)();
          return fVar10;
        }
      }
      piVar7 = (int *)(**(code **)(param_3->_padding_ + 0x58))
                                (param_3,(undefined1 *)((longlong)&param_1->_padding_ + 4),0);
      if (piVar7 != (int *)0x0) {
        iVar4 = *piVar7;
        if (iVar4 != -1) {
          if ((iVar4 < 0) ||
             ((ulonglong)(longlong)(param_3->ParameterData).ArrayNum < (longlong)iVar4 + 4U)) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                               ,0x17f,L"");
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              fVar10 = (float)(*pcVar2)();
              return fVar10;
            }
          }
          param_4 = *(float *)((param_3->ParameterData).AllocatorInstance.Data + iVar4);
        }
      }
    }
  }
  return param_4;
}

// EvaluateLifetime @ 149479d50

bool __cdecl
NiagaraStatelessEmitterInstancePrivate::EvaluateLifetime
          (FNiagaraStatelessRange<float> *param_1,FRandomStream *param_2,
          FNiagaraParameterStore *param_3,float *param_4,float *param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  float fVar5;
  
  if (param_1->ParameterOffset == -1) {
    *param_4 = param_1->Min;
    fVar5 = param_1->Max;
  }
  else {
    iVar1 = param_1->ParameterOffset * 4;
    if ((iVar1 < 0) ||
       ((ulonglong)(longlong)(param_3->ParameterData).ArrayNum < (longlong)iVar1 + 4U)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x17f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    fVar5 = *(float *)((param_3->ParameterData).AllocatorInstance.Data + iVar1);
    *param_4 = fVar5;
  }
  *param_5 = fVar5;
  if ((*param_4 <= 0.0) && (fVar5 <= 0.0)) {
    return false;
  }
  return true;
}

// Rand4DPCG32 @ 14947d960

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TIntVector4<unsigned_int> * __cdecl
NiagaraStateless::Rand4DPCG32
          (TIntVector4<unsigned_int> *__return_storage_ptr__,TIntVector4<unsigned_int> *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar6;
  uint uVar7;
  undefined1 auVar5 [16];
  uint uVar8;
  
  if (__isa_available < 2) {
    lVar4 = 0;
    do {
      (param_1->field0_0x0).XYZW[lVar4] = (param_1->field0_0x0).XYZW[lVar4] * 0x19660d + 0x3c6ef35f;
      lVar4 = lVar4 + 1;
    } while (lVar4 < 4);
  }
  else {
    auVar5 = pmulld((undefined1  [16])param_1->field0_0x0,___xmm_0019660d0019660d0019660d0019660d);
    uVar6 = auVar5._4_4_ + _UNK_151e391b4;
    uVar7 = auVar5._8_4_ + _UNK_151e391b8;
    uVar8 = auVar5._12_4_ + _UNK_151e391bc;
    (param_1->field0_0x0)._s_0.X = auVar5._0_4_ + ___xmm_3c6ef35f3c6ef35f3c6ef35f3c6ef35f;
    (param_1->field0_0x0)._s_0.Y = uVar6;
    (param_1->field0_0x0)._s_0.Z = uVar7;
    (param_1->field0_0x0)._s_0.W = uVar8;
  }
  uVar6 = (param_1->field0_0x0)._s_0.Y;
  uVar7 = (param_1->field0_0x0)._s_0.Z;
  (param_1->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X + (param_1->field0_0x0)._s_0.W * uVar6
  ;
  uVar6 = uVar6 + (param_1->field0_0x0)._s_0.X * uVar7;
  (param_1->field0_0x0)._s_0.Y = uVar6;
  uVar7 = uVar7 + uVar6 * (param_1->field0_0x0)._s_0.X;
  (param_1->field0_0x0)._s_0.Z = uVar7;
  puVar1 = &(param_1->field0_0x0)._s_0.W;
  *puVar1 = *puVar1 + uVar7 * uVar6;
  uVar6 = (param_1->field0_0x0)._s_0.X;
  uVar7 = (param_1->field0_0x0)._s_0.Y;
  uVar8 = (param_1->field0_0x0)._s_0.Z;
  uVar2 = (param_1->field0_0x0)._s_0.W;
  (param_1->field0_0x0)._s_0.X = uVar6 >> 0x10 ^ uVar6;
  (param_1->field0_0x0)._s_0.Y = uVar7 >> 0x10 ^ uVar7;
  (param_1->field0_0x0)._s_0.Z = uVar8 >> 0x10 ^ uVar8;
  (param_1->field0_0x0)._s_0.W = uVar2 >> 0x10 ^ uVar2;
  uVar6 = (param_1->field0_0x0)._s_0.Y;
  (param_1->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X + (param_1->field0_0x0)._s_0.W * uVar6
  ;
  uVar7 = (param_1->field0_0x0)._s_0.X;
  uVar6 = uVar6 + uVar7 * (param_1->field0_0x0)._s_0.Z;
  (param_1->field0_0x0)._s_0.Y = uVar6;
  uVar7 = uVar7 * uVar6 + (param_1->field0_0x0)._s_0.Z;
  (param_1->field0_0x0)._s_0.Z = uVar7;
  puVar1 = &(param_1->field0_0x0)._s_0.W;
  *puVar1 = *puVar1 + uVar7 * uVar6;
  uVar3 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar3;
  return __return_storage_ptr__;
}

// SetShaderParameterTransforms @ 14947e4f0

void __cdecl
NiagaraStatelessEmitterInstancePrivate::SetShaderParameterTransforms
          (FNiagaraStatelessSpaceTransforms *param_1,FCommonShaderParameters *param_2)

{
  ulong64 uVar1;
  ulong64 uVar2;
  TTransform<float> *pTVar3;
  
  pTVar3 = FNiagaraStatelessSpaceTransforms::GetTransform(param_1,Simulation,Simulation);
  uVar1 = (pTVar3->Rotation).m128_u64[0];
  uVar2 = (pTVar3->Rotation).m128_u64[1];
  (param_2->Common_ToSimulationRotations).Elements[0].X = (float)(int)uVar1;
  (param_2->Common_ToSimulationRotations).Elements[0].Y = (float)(int)(uVar1 >> 0x20);
  (param_2->Common_ToSimulationRotations).Elements[0].Z = (float)(int)uVar2;
  (param_2->Common_ToSimulationRotations).Elements[0].W = (float)(int)(uVar2 >> 0x20);
  pTVar3 = FNiagaraStatelessSpaceTransforms::GetTransform(param_1,World,Simulation);
  uVar1 = (pTVar3->Rotation).m128_u64[0];
  uVar2 = (pTVar3->Rotation).m128_u64[1];
  (param_2->Common_ToSimulationRotations).Elements[1].X = (float)(int)uVar1;
  (param_2->Common_ToSimulationRotations).Elements[1].Y = (float)(int)(uVar1 >> 0x20);
  (param_2->Common_ToSimulationRotations).Elements[1].Z = (float)(int)uVar2;
  (param_2->Common_ToSimulationRotations).Elements[1].W = (float)(int)(uVar2 >> 0x20);
  pTVar3 = FNiagaraStatelessSpaceTransforms::GetTransform(param_1,Local,Simulation);
  uVar1 = (pTVar3->Rotation).m128_u64[0];
  uVar2 = (pTVar3->Rotation).m128_u64[1];
  (param_2->Common_ToSimulationRotations).Elements[2].X = (float)(int)uVar1;
  (param_2->Common_ToSimulationRotations).Elements[2].Y = (float)(int)(uVar1 >> 0x20);
  (param_2->Common_ToSimulationRotations).Elements[2].Z = (float)(int)uVar2;
  (param_2->Common_ToSimulationRotations).Elements[2].W = (float)(int)(uVar2 >> 0x20);
  return;
}

// Z_Construct_UClass_UNiagaraStatelessEmitterDefault_NoRegister @ 149480dd0

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessEmitterDefault_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessEmitterDefault.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessEmitterDefault",
               &Z_Registration_Info_UClass_UNiagaraStatelessEmitterDefault.InnerSingleton,
               UNiagaraStatelessEmitterDefault::StaticRegisterNativesUNiagaraStatelessEmitterDefault
               ,0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessEmitterDefault>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessEmitterDefault>,local_res8,
               UNiagaraStatelessEmitterTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessEmitterDefault.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraStatelessEmitterTemplate_NoRegister @ 149480e90

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessEmitterTemplate_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessEmitterTemplate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessEmitterTemplate",
               &Z_Registration_Info_UClass_UNiagaraStatelessEmitterTemplate.InnerSingleton,
               UNiagaraStatelessEmitterTemplate::
               StaticRegisterNativesUNiagaraStatelessEmitterTemplate,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessEmitterTemplate>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessEmitterTemplate>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessEmitterTemplate.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraStatelessModule_NoRegister @ 149480f40

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule.InnerSingleton,
               UNiagaraStatelessModule::StaticRegisterNativesUNiagaraStatelessModule,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule>,local_res8,
               UNiagaraMergeable::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule.InnerSingleton;
}

// Z_Construct_UClass_UVolumeCache_NoRegister @ 149481000

UClass * __cdecl Z_Construct_UClass_UVolumeCache_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVolumeCache.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"VolumeCache",
               &Z_Registration_Info_UClass_UVolumeCache.InnerSingleton,
               UVolumeCache::StaticRegisterNativesUVolumeCache,0x60,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UVolumeCache>,
               InternalVTableHelperCtorCaller<UVolumeCache>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVolumeCache.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraStatelessExpression @ 1494810b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpression(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpression.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpression.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpression_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpression.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpression.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo @ 149481130

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessSpawnInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessSpawnInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessSpawnInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessSpawnInfo.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// `dynamic_atexit_destructor_for_'GGlobalLUT'' @ 1504160c0

void __cdecl NiagaraStateless::_dynamic_atexit_destructor_for__GGlobalLUT__(void)

{
  GGlobalLUT._0_8_ = &___7__TGlobalResource_VFNoiseLUT_NiagaraStateless___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&GGlobalLUT);
  if (GGlobalLUT._72_8_ != 0) {
    FRHIResource::Release((FRHIResource *)GGlobalLUT._72_8_);
  }
  if (GGlobalLUT._64_8_ != 0) {
    FRHIResource::Release((FRHIResource *)GGlobalLUT._64_8_);
  }
  if (GGlobalLUT._48_8_ != 0) {
    FMemory::Free((void *)GGlobalLUT._48_8_);
  }
  FRenderResource::~FRenderResource((FRenderResource *)&GGlobalLUT);
  return;
}

// `dynamic_atexit_destructor_for_'LogVolumeCache'' @ 150416130

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogVolumeCache__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogVolumeCache);
  return;
}

// `dynamic_atexit_destructor_for_'ObjectsToDeferredInit'' @ 150416150

void __cdecl
NiagaraStatelessEmitterTemplatePrivate::_dynamic_atexit_destructor_for__ObjectsToDeferredInit__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ObjectsToDeferredInit.AllocatorInstance.Data;
  if (ObjectsToDeferredInit.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ObjectsToDeferredInit.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

