// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CableComponent
// Functions: 71

// `dynamic_initializer_for_'CVarRayTracingCableMeshes'' @ 14144fe50

void __cdecl _dynamic_initializer_for__CVarRayTracingCableMeshes__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRayTracingCableMeshes,L"r.RayTracing.Geometry.Cable",local_res8,
             L"Include Cable meshes in ray tracing effects (default = 1 (cable meshes enabled in ray tracing))"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingCableMeshes__);
  return;
}

// `dynamic_initializer_for_'CVarRayTracingCableMeshesWPO'' @ 14144fea0

void __cdecl _dynamic_initializer_for__CVarRayTracingCableMeshesWPO__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRayTracingCableMeshesWPO,L"r.RayTracing.Geometry.Cable.WPO",local_res8,
             L"World position offset evaluation for cable meshes with EvaluateWPO enabled in ray tracing effects.\n 0: Cable meshes with world position offset visible in ray tracing, WPO evaluation disabled.\n 1: Cable meshes with world position offset visible in ray tracing, WPO evaluation enabled (default).\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingCableMeshesWPO__);
  return;
}

// `dynamic_initializer_for_'CVarRayTracingCableMeshesWPOCulling'' @ 14144fef0

void __cdecl _dynamic_initializer_for__CVarRayTracingCableMeshesWPOCulling__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRayTracingCableMeshesWPOCulling,L"r.RayTracing.Geometry.Cable.WPO.Culling",
             local_res8,
             L"Enable culling for WPO evaluation for cable meshes in ray tracing (default = 1 (Culling enabled))"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingCableMeshesWPOCulling__);
  return;
}

// `dynamic_initializer_for_'CVarRayTracingCableMeshesWPOCullingRadius'' @ 14144ff40

void __cdecl _dynamic_initializer_for__CVarRayTracingCableMeshesWPOCullingRadius__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 12000.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarRayTracingCableMeshesWPOCullingRadius,
             L"r.RayTracing.Geometry.Cable.WPO.CullingRadius",local_res8,
             L"Do not evaluate world position offset for cable meshes outside of this radius in ray tracing effects (default = 12000 (120m))"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingCableMeshesWPOCullingRadius__);
  return;
}

// `dynamic_initializer_for_'Cable'' @ 14144ff90

void __cdecl UE::RenderCommandPipe::_dynamic_initializer_for__Cable__(void)

{
  FRenderCommandPipe::FRenderCommandPipe
            (&Cable,L"Cable",None,L"r.RenderCommandPipe.Cable",
             L"Whether to enable the Cable Render Command Pipe 0: off; 1: on (default)");
  atexit(_dynamic_atexit_destructor_for__Cable__);
  return;
}

// `dynamic_initializer_for_'CableEndSocketName'' @ 14144ffe0

void __cdecl _dynamic_initializer_for__CableEndSocketName__(void)

{
  FName::FName(&CableEndSocketName,L"CableEnd");
  return;
}

// `dynamic_initializer_for_'CableStartSocketName'' @ 141450000

void __cdecl _dynamic_initializer_for__CableStartSocketName__(void)

{
  FName::FName(&CableStartSocketName,L"CableStart");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantCableComponent'' @ 141450020

void __cdecl _dynamic_initializer_for__ModuleRegistrantCableComponent__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "CableComponent";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"CableComponent",0xe);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FCableComponentPlugin>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Cable_CollisionTime'' @ 141450070

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Cable_CollisionTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Cable_CollisionTime == (FThreadSafeStaticStat<FStat_STAT_Cable_CollisionTime>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_Cable_CollisionTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Cable_CollisionTime,*pFVar1,
               L"Cable Collision","STATGROUP_CableComponent","STATCAT_Advanced",L"Cable",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Cable_IntegrateTime'' @ 141450100

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Cable_IntegrateTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Cable_IntegrateTime == (FThreadSafeStaticStat<FStat_STAT_Cable_IntegrateTime>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_Cable_IntegrateTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Cable_IntegrateTime,*pFVar1,
               L"Cable Integrate","STATGROUP_CableComponent","STATCAT_Advanced",L"Cable",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Cable_SimTime'' @ 141450190

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Cable_SimTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Cable_SimTime == (FThreadSafeStaticStat<FStat_STAT_Cable_SimTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Cable_SimTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Cable_SimTime,*pFVar1,L"Cable Sim",
               "STATGROUP_CableComponent","STATCAT_Advanced",L"Cable",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Cable_SolveTime'' @ 141450220

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Cable_SolveTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Cable_SolveTime == (FThreadSafeStaticStat<FStat_STAT_Cable_SolveTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Cable_SolveTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Cable_SolveTime,*pFVar1,L"Cable Solve",
               "STATGROUP_CableComponent","STATCAT_Advanced",L"Cable",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableActor_h__Script_CableComponent_1798529162'' @ 1414502b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableActor_h__Script_CableComponent_1798529162__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CableComponent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableActor_h__Script_CableComponent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h__Script_CableComponent_217575809'' @ 1414502f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h__Script_CableComponent_217575809__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CableComponent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h__Script_CableComponent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_CableComponent'' @ 141450330

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_CableComponent__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x5216d52;
  local_res8[0].DeclarationsHash = 0x8c6625d9;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_CableComponent,L"/Script/CableComponent",
             &Z_Registration_Info_UPackage__Script_CableComponent,local_res8);
  return;
}

// Z_Construct_UPackage__Script_CableComponent @ 14f011e20

UPackage * __cdecl Z_Construct_UPackage__Script_CableComponent(void)

{
  if (Z_Registration_Info_UPackage__Script_CableComponent.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_CableComponent.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_CableComponent.OuterSingleton;
}

// Z_Construct_UClass_UCableComponent_NoRegister @ 14f011f20

UClass * __cdecl Z_Construct_UClass_UCableComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCableComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CableComponent",L"CableComponent",
               &Z_Registration_Info_UClass_UCableComponent.InnerSingleton,
               UCableComponent::StaticRegisterNativesUCableComponent,0x760,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UCableComponent>,InternalVTableHelperCtorCaller<UCableComponent>,
               local_res8,UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCableComponent.InnerSingleton;
}

// `scalar_deleting_destructor' @ 14f0120c0

void * __thiscall
FCableComponentPlugin::_scalar_deleting_destructor_(FCableComponentPlugin *this,uint param_1)

{
  *this = (FCableComponentPlugin)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_ACableActor @ 14f012100

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ACableActor(void)

{
  if (Z_Registration_Info_UClass_ACableActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ACableActor.OuterSingleton,
               &Z_Construct_UClass_ACableActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ACableActor.OuterSingleton;
}

// Z_Construct_UClass_UCableComponent @ 14f012140

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCableComponent(void)

{
  if (Z_Registration_Info_UClass_UCableComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCableComponent.OuterSingleton,
               &Z_Construct_UClass_UCableComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCableComponent.OuterSingleton;
}

// Z_Construct_UFunction_UCableComponent_GetAttachedActor @ 14f012180

UFunction * __cdecl Z_Construct_UFunction_UCableComponent_GetAttachedActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCableComponent_GetAttachedActor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCableComponent_GetAttachedComponent @ 14f0121c0

UFunction * __cdecl Z_Construct_UFunction_UCableComponent_GetAttachedComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCableComponent_GetAttachedComponent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCableComponent_GetCableParticleLocations @ 14f012200

UFunction * __cdecl Z_Construct_UFunction_UCableComponent_GetCableParticleLocations(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCableComponent_GetCableParticleLocations_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCableComponent_SetAttachEndTo @ 14f012240

UFunction * __cdecl Z_Construct_UFunction_UCableComponent_SetAttachEndTo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent @ 14f012280

UFunction * __cdecl Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAttachStart_SetBit @ 14f0122c0

void __cdecl Z_Construct_UClass_UCableComponent_Statics::NewProp_bAttachStart_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x590) = 1;
  return;
}

// NewProp_bAttachEnd_SetBit @ 14f0122d0

void __cdecl Z_Construct_UClass_UCableComponent_Statics::NewProp_bAttachEnd_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x591) = 1;
  return;
}

// NewProp_bEnableStiffness_SetBit @ 14f0122e0

void __cdecl
Z_Construct_UClass_UCableComponent_Statics::NewProp_bEnableStiffness_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5f0) = 1;
  return;
}

// NewProp_bUseSubstepping_SetBit @ 14f0122f0

void __cdecl
Z_Construct_UClass_UCableComponent_Statics::NewProp_bUseSubstepping_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5f1) = 1;
  return;
}

// NewProp_bSkipCableUpdateWhenNotVisible_SetBit @ 14f012300

void __cdecl
Z_Construct_UClass_UCableComponent_Statics::NewProp_bSkipCableUpdateWhenNotVisible_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5f2) = 1;
  return;
}

// NewProp_bSkipCableUpdateWhenNotOwnerRecentlyRendered_SetBit @ 14f012310

void __cdecl
Z_Construct_UClass_UCableComponent_Statics::
NewProp_bSkipCableUpdateWhenNotOwnerRecentlyRendered_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5f3) = 1;
  return;
}

// NewProp_bEnableCollision_SetBit @ 14f012320

void __cdecl
Z_Construct_UClass_UCableComponent_Statics::NewProp_bEnableCollision_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5f4) = 1;
  return;
}

// NewProp_bResetAfterTeleport_SetBit @ 14f012330

void __cdecl
Z_Construct_UClass_UCableComponent_Statics::NewProp_bResetAfterTeleport_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x628) = 1;
  return;
}

// NewProp_bTeleportAfterReattach_SetBit @ 14f012340

void __cdecl
Z_Construct_UClass_UCableComponent_Statics::NewProp_bTeleportAfterReattach_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x634) = 1;
  return;
}

// Enqueue<TRenderCommandTag<`UCableComponent::SendRenderDynamicData_Concurrent'::__l5::TSTR_FSendCableDynamicData1251>_> @ 14f0123c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FRenderCommandDispatcher::
Enqueue<TRenderCommandTag<_UCableComponent::SendRenderDynamicData_Concurrent_::__l5::TSTR_FSendCableDynamicData1251>_>
          (FRenderCommandPipe *param_1,TUniqueFunction<void___cdecl(FRHICommandList_&)> *param_2)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_b8 [48];
  undefined1 local_88 [48];
  byte local_58;
  longlong local_48 [2];
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this = FRenderCommandList::GetInstanceTLS();
  if (this == (FRenderCommandList *)0x0) {
    if ((GRenderCommandPipeMode == All) && (param_1 != (FRenderCommandPipe *)0x0)) {
      bVar3 = UE::RenderCommandPipe::IsReplaying(param_1);
      if (bVar3) {
        pFVar4 = (FRenderCommandTag *)
                 TRenderCommandTag<`UCableComponent::SendRenderDynamicData_Concurrent'::__l5::TSTR_FSendCableDynamicData1251>
                 ::Get();
        FRenderCommandPipe::ExecuteCommand(param_1,param_2,pFVar4);
        return;
      }
      plVar6 = &param_1->_padding_;
      if ((plVar6 == (longlong *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      LOCK();
      bVar3 = (char)*plVar6 == '\0';
      if (bVar3) {
        *(undefined1 *)plVar6 = 1;
      }
      UNLOCK();
      if (!bVar3) {
        UE::FMutex::LockSlow((FMutex *)plVar6);
      }
      if ((param_1->RecordTask).Pimpl.Reference != (FTaskBase *)0x0) {
        pFVar4 = (FRenderCommandTag *)
                 TRenderCommandTag<`UCableComponent::SendRenderDynamicData_Concurrent'::__l5::TSTR_FSendCableDynamicData1251>
                 ::Get();
        FRenderCommandPipe::EnqueueAndLaunch(param_1,param_2,pFVar4);
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        LOCK();
        lVar2 = *plVar6;
        *(char *)plVar6 = (char)*plVar6 + -1;
        UNLOCK();
        if ((lVar2 & 2) == 0) {
          return;
        }
        UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
        return;
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        lVar2 = *plVar6;
        *(char *)plVar6 = (char)*plVar6 + -1;
        UNLOCK();
        if ((lVar2 & 2) != 0) {
          UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
        }
      }
    }
    local_48[0] = *(longlong *)param_2;
    local_20 = *(longlong **)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_28 = *(undefined8 *)&param_2->field_0x20;
    local_38 = *(longlong *)&param_2->field_0x10;
    uStack_30 = *(undefined8 *)&param_2->field_0x18;
    if (local_48[0] != 0) {
      *(undefined8 *)param_2 = 0;
    }
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UCableComponent::SendRenderDynamicData_Concurrent_::__l5::TSTR_FSendCableDynamicData1251>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_UCableComponent::SendRenderDynamicData_Concurrent_::__l5::TSTR_FSendCableDynamicData1251>_>_::__l2::<lambda_1>_>
              ((<lambda_1>_conflict *)local_48);
    if (local_48[0] == 0) {
      return;
    }
    plVar6 = &local_38;
    plVar5 = local_20;
  }
  else {
    this_00 = FRenderCommandList::Get(this,param_1);
    local_88._0_8_ = *(undefined8 *)param_2;
    local_88._40_8_ = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_88._32_8_ = *(undefined8 *)&param_2->field_0x20;
    local_88._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_88._24_8_ = *(undefined8 *)&param_2->field_0x18;
    if (local_88._0_8_ != 0) {
      *(undefined8 *)param_2 = 0;
    }
    local_58 = 1;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`UCableComponent::SendRenderDynamicData_Concurrent'::__l5::TSTR_FSendCableDynamicData1251>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar4);
    uVar7 = (ulonglong)local_58;
    if ((2 < uVar7) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7] !=
        UE::Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandList_&)>_>::
        Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7])(local_88);
      return;
    }
    if (local_88._0_8_ == 0) {
      return;
    }
    plVar6 = (longlong *)(local_88 + 0x10);
    plVar5 = (longlong *)local_88._40_8_;
  }
  if (plVar5 != (longlong *)0x0) {
    plVar6 = plVar5;
  }
  (**(code **)(*plVar6 + 0x10))();
  return;
}

// Enqueue<TRenderCommandTag<`UCableComponent::SendRenderDynamicData_Concurrent'::__l5::TSTR_FSendCableDynamicData1251>,`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`UCableComponent::SendRenderDynamicData_Concurrent'::__l5::TSTR_FSendCableDynamicData1251>_>'::__l2::<lambda_1>_> @ 14f012640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UCableComponent::SendRenderDynamicData_Concurrent_::__l5::TSTR_FSendCableDynamicData1251>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_UCableComponent::SendRenderDynamicData_Concurrent_::__l5::TSTR_FSendCableDynamicData1251>_>_::__l2::<lambda_1>_>
          (<lambda_1>_conflict *param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  TStatIdData *pTVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  FRenderCommandTag *pFVar11;
  FTaskBase *this;
  FRHICommandListImmediate *pFVar12;
  undefined8 uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  code **ppcVar14;
  <lambda_1>_conflict *p<Var15;
  FTaskBase *this_02;
  FName FVar16;
  FNameEntryId FVar17;
  FNameEntryId FVar18;
  undefined1 auStackY_d8 [32];
  EExtendedTaskPriority local_a8;
  ETaskPriority local_a7 [3];
  FColor_u_0 local_a4;
  FName local_a0;
  FName local_98;
  LARGE_INTEGER local_88;
  FStatMessage local_80;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pFVar11 = (FRenderCommandTag *)
            TRenderCommandTag<`UCableComponent::SendRenderDynamicData_Concurrent'::__l5::TSTR_FSendCableDynamicData1251>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar11->SpecId,pFVar11->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar11->SpecId);
  }
  bVar9 = IsInRenderingThread();
  if ((!bVar9) && ((GIsThreadedRendering != false || (bVar9 = IsInGameThread(), !bVar9)))) {
    if ((GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) &&
       ((bVar9 = IsInGameThread(), bVar9 &&
        (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<2708370973442179152>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                            ,0x50,
                            "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                           ), bVar9)))) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (GRenderCommandPipeMode == None) {
      this = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x120,0x10);
      this_02 = (FTaskBase *)0x0;
      if (this != (FTaskBase *)0x0) {
        FBaseGraphTask::FBaseGraphTask
                  ((FBaseGraphTask *)this,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0);
        this->_padding_ =
             (longlong)
             &TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`UCableComponent::SendRenderDynamicData_Concurrent'::`5'::TSTR_FSendCableDynamicData1251>_>'::`2'::<lambda_1>_>_>
              ::_vftable_;
        this_02 = this;
      }
      this_02[1]._padding_ = (longlong)pFVar11;
      this_02[1]._padding_ = *(longlong *)param_1;
      uVar13 = *(undefined8 *)(param_1 + 0x28);
      this_02[1].StateChangeEvent = (TEventCount<unsigned_int>)(int)uVar13;
      this_02[1].ExtendedPriority = (char)((ulonglong)uVar13 >> 0x20);
      this_02[1].TaskTriggered = (atomic<bool>)(char)((ulonglong)uVar13 >> 0x28);
      this_02[1]._padding_ = (short)((ulonglong)uVar13 >> 0x30);
      *(undefined8 *)(param_1 + 0x28) = 0;
      uVar13 = *(undefined8 *)(param_1 + 0x18);
      this_02[1]._padding_ = *(longlong *)(param_1 + 0x10);
      this_02[1].RefCount = (atomic<unsigned_int>)(int)uVar13;
      this_02[1].NumLocks = (atomic<unsigned_int>)(int)((ulonglong)uVar13 >> 0x20);
      this_02[1].Pipe = *(FPipe **)(param_1 + 0x20);
      if (this_02[1]._padding_ != 0) {
        *(undefined8 *)param_1 = 0;
      }
      if (((GIsThreadedRendering != false) &&
          (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1))
         && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                                ,0x21d,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UE::Tasks::Private::TranslatePriority
                ((Type)ENamedThreads::FRenderThreadStatics::RenderThread,local_a7,&local_a8);
      UE::Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_a7[0],local_a8,None);
      if (this_02 == (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x120);
      }
      else {
        LOCK();
        this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch(this_02,0x120);
        LOCK();
        paVar1 = &this_02->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_02->_padding_)(this_02,1);
        }
      }
    }
    else {
      local_68[0] = (code *)0x0;
      local_40 = FMemory::Malloc(0x40,0x10);
      *local_40 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`UCableComponent::SendRenderDynamicData_Concurrent'::`5'::TSTR_FSendCableDynamicData1251>_>'::`2'::<lambda_1>,1,1>
                           ::_vftable_;
      ppcVar14 = local_40 + 2;
      *ppcVar14 = *(code **)param_1;
      local_40[7] = *(code **)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = 0;
      pcVar5 = *(code **)(param_1 + 0x18);
      local_40[4] = *(code **)(param_1 + 0x10);
      local_40[5] = pcVar5;
      local_40[6] = *(code **)(param_1 + 0x20);
      if (*ppcVar14 != (code *)0x0) {
        *(undefined8 *)param_1 = 0;
      }
      if (ppcVar14 != (code **)0x0) {
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`UCableComponent::SendRenderDynamicData_Concurrent'::__l5::TSTR_FSendCableDynamicData1251>_>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      EnqueueAndLaunch(&Instance,
                       (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_68,pFVar11
                      );
      if (local_68[0] != (code *)0x0) {
        ppcVar14 = local_68 + 2;
        if (local_40 != (code **)0x0) {
          ppcVar14 = local_40;
        }
        (**(code **)(*ppcVar14 + 0x10))();
      }
    }
    goto LAB_14f012ae1;
  }
  pTVar4 = (pFVar11->StatId).StatIdPtr;
  FVar18.Value = 0;
  bVar9 = false;
  bVar8 = false;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  FVar16 = *(FName *)&pTVar4->Name;
  FVar17 = FVar16.ComparisonIndex.Value;
  uVar10 = FVar16.Number;
  if ((FVar17.Value == 0) && (uVar10 == 0)) {
LAB_14f0129cf:
    bVar6 = false;
    FVar16 = local_98;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a4._s_0,(pTVar4->StatDescriptionAnsi).Ptr);
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.ComparisonIndex.Value = FVar17.Value;
        local_a0.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(pTVar4->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar9 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14f0129cf;
    local_a0.ComparisonIndex.Value = FVar17.Value;
    local_a0.Number = uVar10;
    local_98 = FVar16;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar6 = true;
    FVar18.Value = local_98.ComparisonIndex.Value;
  }
  pFVar12 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar5 = *(code **)param_1;
  p<Var15 = param_1 + 0x10;
  if (*(<lambda_1>_conflict **)(param_1 + 0x28) != (<lambda_1>_conflict *)0x0) {
    p<Var15 = *(<lambda_1>_conflict **)(param_1 + 0x28);
  }
  uVar13 = (**(code **)(*(longlong *)p<Var15 + 8))();
  (*pcVar5)(uVar13,pFVar12);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar16 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_80.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      local_80.NameAndInfo.Index.Value = FVar18.Value;
      QueryPerformanceCounter(&local_88);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_80);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
LAB_14f012ae1:
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FCableSceneProxy::FCableSceneProxy'::__l2::TSTR_InitCableResources119>_> @ 14f012b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FRenderCommandDispatcher::
Enqueue<TRenderCommandTag<_FCableSceneProxy::FCableSceneProxy_::__l2::TSTR_InitCableResources119>_>
          (FRenderCommandPipe *param_1,TUniqueFunction<void___cdecl(FRHICommandList_&)> *param_2)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_b8 [48];
  undefined1 local_88 [48];
  byte local_58;
  longlong local_48 [2];
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this = FRenderCommandList::GetInstanceTLS();
  if (this == (FRenderCommandList *)0x0) {
    if ((GRenderCommandPipeMode == All) && (param_1 != (FRenderCommandPipe *)0x0)) {
      bVar3 = UE::RenderCommandPipe::IsReplaying(param_1);
      if (bVar3) {
        pFVar4 = (FRenderCommandTag *)
                 TRenderCommandTag<`FCableSceneProxy::FCableSceneProxy'::__l2::TSTR_InitCableResources119>
                 ::Get();
        FRenderCommandPipe::ExecuteCommand(param_1,param_2,pFVar4);
        return;
      }
      plVar6 = &param_1->_padding_;
      if ((plVar6 == (longlong *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      LOCK();
      bVar3 = (char)*plVar6 == '\0';
      if (bVar3) {
        *(undefined1 *)plVar6 = 1;
      }
      UNLOCK();
      if (!bVar3) {
        UE::FMutex::LockSlow((FMutex *)plVar6);
      }
      if ((param_1->RecordTask).Pimpl.Reference != (FTaskBase *)0x0) {
        pFVar4 = (FRenderCommandTag *)
                 TRenderCommandTag<`FCableSceneProxy::FCableSceneProxy'::__l2::TSTR_InitCableResources119>
                 ::Get();
        FRenderCommandPipe::EnqueueAndLaunch(param_1,param_2,pFVar4);
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        LOCK();
        lVar2 = *plVar6;
        *(char *)plVar6 = (char)*plVar6 + -1;
        UNLOCK();
        if ((lVar2 & 2) == 0) {
          return;
        }
        UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
        return;
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        lVar2 = *plVar6;
        *(char *)plVar6 = (char)*plVar6 + -1;
        UNLOCK();
        if ((lVar2 & 2) != 0) {
          UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
        }
      }
    }
    local_48[0] = *(longlong *)param_2;
    local_20 = *(longlong **)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_28 = *(undefined8 *)&param_2->field_0x20;
    local_38 = *(longlong *)&param_2->field_0x10;
    uStack_30 = *(undefined8 *)&param_2->field_0x18;
    if (local_48[0] != 0) {
      *(undefined8 *)param_2 = 0;
    }
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FCableSceneProxy::FCableSceneProxy_::__l2::TSTR_InitCableResources119>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FCableSceneProxy::FCableSceneProxy_::__l2::TSTR_InitCableResources119>_>_::__l2::<lambda_1>_>
              ((<lambda_1>_conflict *)local_48);
    if (local_48[0] == 0) {
      return;
    }
    plVar6 = &local_38;
    plVar5 = local_20;
  }
  else {
    this_00 = FRenderCommandList::Get(this,param_1);
    local_88._0_8_ = *(undefined8 *)param_2;
    local_88._40_8_ = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_88._32_8_ = *(undefined8 *)&param_2->field_0x20;
    local_88._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_88._24_8_ = *(undefined8 *)&param_2->field_0x18;
    if (local_88._0_8_ != 0) {
      *(undefined8 *)param_2 = 0;
    }
    local_58 = 1;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`FCableSceneProxy::FCableSceneProxy'::__l2::TSTR_InitCableResources119>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar4);
    uVar7 = (ulonglong)local_58;
    if ((2 < uVar7) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7] !=
        UE::Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandList_&)>_>::
        Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7])(local_88);
      return;
    }
    if (local_88._0_8_ == 0) {
      return;
    }
    plVar6 = (longlong *)(local_88 + 0x10);
    plVar5 = (longlong *)local_88._40_8_;
  }
  if (plVar5 != (longlong *)0x0) {
    plVar6 = plVar5;
  }
  (**(code **)(*plVar6 + 0x10))();
  return;
}

// Enqueue<TRenderCommandTag<`FCableSceneProxy::FCableSceneProxy'::__l2::TSTR_InitCableResources119>,`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FCableSceneProxy::FCableSceneProxy'::__l2::TSTR_InitCableResources119>_>'::__l2::<lambda_1>_> @ 14f012db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FCableSceneProxy::FCableSceneProxy_::__l2::TSTR_InitCableResources119>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FCableSceneProxy::FCableSceneProxy_::__l2::TSTR_InitCableResources119>_>_::__l2::<lambda_1>_>
          (<lambda_1>_conflict *param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  TStatIdData *pTVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  FRenderCommandTag *pFVar11;
  FTaskBase *this;
  FRHICommandListImmediate *pFVar12;
  undefined8 uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  code **ppcVar14;
  <lambda_1>_conflict *p<Var15;
  FTaskBase *this_02;
  FName FVar16;
  FNameEntryId FVar17;
  FNameEntryId FVar18;
  undefined1 auStackY_d8 [32];
  EExtendedTaskPriority local_a8;
  ETaskPriority local_a7 [3];
  FColor_u_0 local_a4;
  FName local_a0;
  FName local_98;
  LARGE_INTEGER local_88;
  FStatMessage local_80;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pFVar11 = (FRenderCommandTag *)
            TRenderCommandTag<`FCableSceneProxy::FCableSceneProxy'::__l2::TSTR_InitCableResources119>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar11->SpecId,pFVar11->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar11->SpecId);
  }
  bVar9 = IsInRenderingThread();
  if ((!bVar9) && ((GIsThreadedRendering != false || (bVar9 = IsInGameThread(), !bVar9)))) {
    if ((GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) &&
       ((bVar9 = IsInGameThread(), bVar9 &&
        (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<2708370973442179152>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                            ,0x50,
                            "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                           ), bVar9)))) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (GRenderCommandPipeMode == None) {
      this = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x120,0x10);
      this_02 = (FTaskBase *)0x0;
      if (this != (FTaskBase *)0x0) {
        FBaseGraphTask::FBaseGraphTask
                  ((FBaseGraphTask *)this,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0);
        this->_padding_ =
             (longlong)
             &
             ___7__TGraphTask_V__TRenderCommandTask_V<lambda_1>__1____Enqueue_V__TRenderCommandTag_UTSTR_InitCableResources119__1___0FCableSceneProxy__QEAA_PEAVUCableComponent___Z____FRenderCommandDispatcher__SAXPEAVFRenderCommandPipe____QEAV__TUniqueFunction___A6AXAEAVFRHICommandList___Z___Z__FRenderThreadCommandPipe____6B_
        ;
        this_02 = this;
      }
      this_02[1]._padding_ = (longlong)pFVar11;
      this_02[1]._padding_ = *(longlong *)param_1;
      uVar13 = *(undefined8 *)(param_1 + 0x28);
      this_02[1].StateChangeEvent = (TEventCount<unsigned_int>)(int)uVar13;
      this_02[1].ExtendedPriority = (char)((ulonglong)uVar13 >> 0x20);
      this_02[1].TaskTriggered = (atomic<bool>)(char)((ulonglong)uVar13 >> 0x28);
      this_02[1]._padding_ = (short)((ulonglong)uVar13 >> 0x30);
      *(undefined8 *)(param_1 + 0x28) = 0;
      uVar13 = *(undefined8 *)(param_1 + 0x18);
      this_02[1]._padding_ = *(longlong *)(param_1 + 0x10);
      this_02[1].RefCount = (atomic<unsigned_int>)(int)uVar13;
      this_02[1].NumLocks = (atomic<unsigned_int>)(int)((ulonglong)uVar13 >> 0x20);
      this_02[1].Pipe = *(FPipe **)(param_1 + 0x20);
      if (this_02[1]._padding_ != 0) {
        *(undefined8 *)param_1 = 0;
      }
      if (((GIsThreadedRendering != false) &&
          (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1))
         && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                                ,0x21d,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UE::Tasks::Private::TranslatePriority
                ((Type)ENamedThreads::FRenderThreadStatics::RenderThread,local_a7,&local_a8);
      UE::Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_a7[0],local_a8,None);
      if (this_02 == (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x120);
      }
      else {
        LOCK();
        this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch(this_02,0x120);
        LOCK();
        paVar1 = &this_02->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_02->_padding_)(this_02,1);
        }
      }
    }
    else {
      local_68[0] = (code *)0x0;
      local_40 = FMemory::Malloc(0x40,0x10);
      *local_40 = (code *)&
                          ___7__TFunction_OwnedObject_V<lambda_1>__1____Enqueue_V__TRenderCommandTag_UTSTR_InitCableResources119__1___0FCableSceneProxy__QEAA_PEAVUCableComponent___Z____FRenderCommandDispatcher__SAXPEAVFRenderCommandPipe____QEAV__TUniqueFunction___A6AXAEAVFRHICommandList___Z___Z__00_00_Function_Private_Core_UE__6B_
      ;
      ppcVar14 = local_40 + 2;
      *ppcVar14 = *(code **)param_1;
      local_40[7] = *(code **)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = 0;
      pcVar5 = *(code **)(param_1 + 0x18);
      local_40[4] = *(code **)(param_1 + 0x10);
      local_40[5] = pcVar5;
      local_40[6] = *(code **)(param_1 + 0x20);
      if (*ppcVar14 != (code *)0x0) {
        *(undefined8 *)param_1 = 0;
      }
      if (ppcVar14 != (code **)0x0) {
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FCableSceneProxy::FCableSceneProxy'::__l2::TSTR_InitCableResources119>_>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      EnqueueAndLaunch(&Instance,
                       (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_68,pFVar11
                      );
      if (local_68[0] != (code *)0x0) {
        ppcVar14 = local_68 + 2;
        if (local_40 != (code **)0x0) {
          ppcVar14 = local_40;
        }
        (**(code **)(*ppcVar14 + 0x10))();
      }
    }
    goto LAB_14f013251;
  }
  pTVar4 = (pFVar11->StatId).StatIdPtr;
  FVar18.Value = 0;
  bVar9 = false;
  bVar8 = false;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  FVar16 = *(FName *)&pTVar4->Name;
  FVar17 = FVar16.ComparisonIndex.Value;
  uVar10 = FVar16.Number;
  if ((FVar17.Value == 0) && (uVar10 == 0)) {
LAB_14f01313f:
    bVar6 = false;
    FVar16 = local_98;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a4._s_0,(pTVar4->StatDescriptionAnsi).Ptr);
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.ComparisonIndex.Value = FVar17.Value;
        local_a0.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(pTVar4->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar9 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14f01313f;
    local_a0.ComparisonIndex.Value = FVar17.Value;
    local_a0.Number = uVar10;
    local_98 = FVar16;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar6 = true;
    FVar18.Value = local_98.ComparisonIndex.Value;
  }
  pFVar12 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar5 = *(code **)param_1;
  p<Var15 = param_1 + 0x10;
  if (*(<lambda_1>_conflict **)(param_1 + 0x28) != (<lambda_1>_conflict *)0x0) {
    p<Var15 = *(<lambda_1>_conflict **)(param_1 + 0x28);
  }
  uVar13 = (**(code **)(*(longlong *)p<Var15 + 8))();
  (*pcVar5)(uVar13,pFVar12);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar16 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_80.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      local_80.NameAndInfo.Index.Value = FVar18.Value;
      QueryPerformanceCounter(&local_88);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_80);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
LAB_14f013251:
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InternalConstructor<ACableActor> @ 14f0132a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ACableActor>(FObjectInitializer *param_1)

{
  AActor *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ACableActor__6B_;
    this[1]._padding_ = 0;
    pFVar2 = FName::FName(&local_res8,L"CableComponent0");
    FVar1 = *pFVar2;
    pUVar3 = UCableComponent::StaticClass();
    pUVar4 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    this[1]._padding_ = (longlong)pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    (this->RootComponent).field0_0x0 = *(TObjectPtr<USceneComponent>_u_0 *)(this + 1);
  }
  return;
}

// InternalConstructor<UCableComponent> @ 14f013360

void __cdecl InternalConstructor<UCableComponent>(FObjectInitializer *param_1)

{
  if ((UCableComponent *)param_1->Obj != (UCableComponent *)0x0) {
    UCableComponent::UCableComponent((UCableComponent *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalVTableHelperCtorCaller<ACableActor> @ 14f013380

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ACableActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ACableActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ACableActor__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCableComponent> @ 14f013440

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCableComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCableComponent *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCableComponent::GetPrivateStaticClass();
  pUVar3 = (UCableComponent *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UCableComponent *)0x0) {
    pUVar3 = UCableComponent::UCableComponent(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// ~TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`UCableComponent::SendRenderDynamicData_Concurrent'::__l5::TSTR_FSendCableDynamicData1251>_>'::__l2::<lambda_1>,1,1> @ 14f013d30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`UCableComponent::SendRenderDynamicData_Concurrent'::__l5::TSTR_FSendCableDynamicData1251>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_UCableComponent::SendRenderDynamicData_Concurrent_::__l5::TSTR_FSendCableDynamicData1251>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`UCableComponent::SendRenderDynamicData_Concurrent'::`5'::TSTR_FSendCableDynamicData1251>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014f013d53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FCableSceneProxy::FCableSceneProxy'::__l2::TSTR_InitCableResources119>_>'::__l2::<lambda_1>,1,1> @ 14f013d60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FCableSceneProxy::FCableSceneProxy'::__l2::TSTR_InitCableResources119>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FCableSceneProxy::FCableSceneProxy_::__l2::TSTR_InitCableResources119>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____Enqueue_V__TRenderCommandTag_UTSTR_InitCableResources119__1___0FCableSceneProxy__QEAA_PEAVUCableComponent___Z____FRenderCommandDispatcher__SAXPEAVFRenderCommandPipe____QEAV__TUniqueFunction___A6AXAEAVFRHICommandList___Z___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014f013d83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FCableSceneProxy::FCableSceneProxy'::__l2::<lambda_1>,1,0> @ 14f013d90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCableSceneProxy::FCableSceneProxy'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FCableSceneProxy::FCableSceneProxy_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___0FCableSceneProxy__QEAA_PEAVUCableComponent___Z__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UCableComponent::SendRenderDynamicData_Concurrent'::__l5::<lambda_1>,1,0> @ 14f013db0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UCableComponent::SendRenderDynamicData_Concurrent'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UCableComponent::SendRenderDynamicData_Concurrent_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UCableComponent::SendRenderDynamicData_Concurrent'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14f0141cc

/* [thunk]:public: virtual void * __ptr64 __cdecl UCableComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UCableComponent::_vector_deleting_destructor__adjustor_592__(UCableComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCableComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14f0141e0

/* [thunk]:public: virtual void * __ptr64 __cdecl UCableComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UCableComponent::_vector_deleting_destructor__adjustor_600__(UCableComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCableComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14f0141f4

/* [thunk]:public: virtual void * __ptr64 __cdecl UCableComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UCableComponent::_vector_deleting_destructor__adjustor_608__(UCableComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCableComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14f014208

/* [thunk]:public: virtual void * __ptr64 __cdecl UCableComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UCableComponent::_vector_deleting_destructor__adjustor_40__(UCableComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UCableComponent *)((longlong)&this[-1].LastEndLocation.field0_0x0 + 0x10),
                      param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14f014220

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`UCableComponent::SendRenderDynamicData_Concurrent'::__l5::TSTR_FSendCableDynamicData1251>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`UCableComponent::SendRenderDynamicData_Concurrent'::`5'::TSTR_FSendCableDynamicData1251>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f014280

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FCableSceneProxy::FCableSceneProxy'::__l2::TSTR_InitCableResources119>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____Enqueue_V__TRenderCommandTag_UTSTR_InitCableResources119__1___0FCableSceneProxy__QEAA_PEAVUCableComponent___Z____FRenderCommandDispatcher__SAXPEAVFRenderCommandPipe____QEAV__TUniqueFunction___A6AXAEAVFRHICommandList___Z___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0142e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCableSceneProxy::FCableSceneProxy'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___0FCableSceneProxy__QEAA_PEAVUCableComponent___Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f014320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UCableComponent::SendRenderDynamicData_Concurrent'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UCableComponent::SendRenderDynamicData_Concurrent'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f014360

void * __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`UCableComponent::SendRenderDynamicData_Concurrent'::__l5::TSTR_FSendCableDynamicData1251>_>'::__l2::<lambda_1>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0143c0

void * __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FCableSceneProxy::FCableSceneProxy'::__l2::TSTR_InitCableResources119>_>'::__l2::<lambda_1>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f014420

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall ACableActor::_scalar_deleting_destructor_(ACableActor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ACableActor__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f014480

void * __thiscall
FCableIndexBuffer::_scalar_deleting_destructor_(FCableIndexBuffer *this,uint param_1)

{
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0144c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
FCableSceneProxy::_scalar_deleting_destructor_(FCableSceneProxy *this,uint param_1)

{
  FStaticMeshVertexBuffers *this_00;
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FCableSceneProxy__6B_;
  this_00 = &this->VertexBuffers;
  (**(code **)((this->VertexBuffers).PositionVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).PositionVertexBuffer);
  (**(code **)((this_00->StaticMeshVertexBuffer)._padding_ + 0x20))(this_00);
  (**(code **)((this->VertexBuffers).ColorVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).ColorVertexBuffer);
  (**(code **)((this->IndexBuffer)._padding_ + 0x20))(&this->IndexBuffer);
  (**(code **)((this->VertexFactory)._padding_ + 0x20))(&this->VertexFactory);
  (**(code **)((this->StaticRayTracingGeometry)._padding_ + 0x20))(&this->StaticRayTracingGeometry);
  (**(code **)((this->DynamicRayTracingGeometry)._padding_ + 0x20))
            (&this->DynamicRayTracingGeometry);
  DestructItems<FMeshBatch,int>
            ((FMeshBatch *)(this->CachedRayTracingMaterials).AllocatorInstance.Data,
             (this->CachedRayTracingMaterials).ArrayNum);
  pFVar1 = (this->CachedRayTracingMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRayTracingGeometry::~FRayTracingGeometry(&this->DynamicRayTracingGeometry);
  FRayTracingGeometry::~FRayTracingGeometry(&this->StaticRayTracingGeometry);
  FLocalVertexFactory::~FLocalVertexFactory(&this->VertexFactory);
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)&this->IndexBuffer);
  FColorVertexBuffer::~FColorVertexBuffer(&(this->VertexBuffers).ColorVertexBuffer);
  FPositionVertexBuffer::~FPositionVertexBuffer(&(this->VertexBuffers).PositionVertexBuffer);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(&this_00->StaticMeshVertexBuffer);
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x870);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f014620

void * __thiscall UCableComponent::_scalar_deleting_destructor_(UCableComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  pFVar1 = (this->Particles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = (void *)(this->AttachEndTo)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UMeshComponent::~UMeshComponent((UMeshComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x760);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeCableActor @ 14f017200

void __cdecl EmptyLinkFunctionForGeneratedCodeCableActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCableComponent @ 14f017210

void __cdecl EmptyLinkFunctionForGeneratedCodeCableComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCableComponent_init @ 14f017220

void __cdecl EmptyLinkFunctionForGeneratedCodeCableComponent_init(void)

{
  return;
}

// Z_Construct_UClass_ACableActor_NoRegister @ 14f01c160

UClass * __cdecl Z_Construct_UClass_ACableActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ACableActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CableComponent",L"CableActor",
               &Z_Registration_Info_UClass_ACableActor.InnerSingleton,
               ACableActor::StaticRegisterNativesACableActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ACableActor>,
               InternalVTableHelperCtorCaller<ACableActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ACableActor.InnerSingleton;
}

// IMPLEMENT_MODULE_CableComponent @ 14f01c740

void __cdecl IMPLEMENT_MODULE_CableComponent(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingCableMeshes'' @ 150471280

void __cdecl _dynamic_atexit_destructor_for__CVarRayTracingCableMeshes__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRayTracingCableMeshes);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingCableMeshesWPO'' @ 1504712a0

void __cdecl _dynamic_atexit_destructor_for__CVarRayTracingCableMeshesWPO__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRayTracingCableMeshesWPO);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingCableMeshesWPOCulling'' @ 1504712c0

void __cdecl _dynamic_atexit_destructor_for__CVarRayTracingCableMeshesWPOCulling__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRayTracingCableMeshesWPOCulling);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingCableMeshesWPOCullingRadius'' @ 1504712e0

void __cdecl _dynamic_atexit_destructor_for__CVarRayTracingCableMeshesWPOCullingRadius__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRayTracingCableMeshesWPOCullingRadius);
  return;
}

// `dynamic_atexit_destructor_for_'Cable'' @ 150471300

void __cdecl UE::RenderCommandPipe::_dynamic_atexit_destructor_for__Cable__(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  longlong this;
  FTaskHandle FVar4;
  bool bVar5;
  
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&Cable.ConsoleVariable);
  FVar4 = Cable.RecordTask;
  if (Cable.RecordTask.Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)Cable.RecordTask.Pimpl.Reference + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)FVar4.Pimpl.Reference)();
    }
  }
  this = Cable._padding_;
  if (Cable._padding_ != 0) {
    FCommandList::Release((FCommandList *)(Cable._padding_ + 0x28));
    if ((GIsCriticalError == false) && (*(int *)(this + 0x20) != 0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(GIsCriticalError || !NumMarks)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                         ,0x74,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FMemStackBase::FreeChunks((FMemStackBase *)this,(FTaggedMemory *)0x0);
    ::operator_delete((void *)this,0x58);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 1504713b0

void __cdecl
`InternalGetDefaultObject<TResourceArray<unsigned_char,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)
             &`class_TResourceArray<unsigned_char,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,0>_>(void)'
              ::__l3::Default._padding_);
  `class_TResourceArray<unsigned_char,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,0>_>(void)'
  ::__l3::Default._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

