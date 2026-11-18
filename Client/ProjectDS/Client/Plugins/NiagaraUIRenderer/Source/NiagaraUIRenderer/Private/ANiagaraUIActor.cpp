// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraUIRenderer
// Functions: 7

// StaticClass @ 14d28dc20

UClass * __cdecl ANiagaraUIActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANiagaraUIActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraUIRenderer",L"NiagaraUIActor",
               &Z_Registration_Info_UClass_ANiagaraUIActor.InnerSingleton,
               StaticRegisterNativesANiagaraUIActor,0x2c0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ANiagaraUIActor>,
               InternalVTableHelperCtorCaller<ANiagaraUIActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANiagaraUIActor.InnerSingleton;
}

// ANiagaraUIActor @ 14d2925c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ANiagaraUIActor * __thiscall
ANiagaraUIActor::ANiagaraUIActor(ANiagaraUIActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  *(undefined ***)this = &___7ANiagaraUIActor__6B_;
  return this;
}

// ANiagaraUIActor @ 14d2925f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ANiagaraUIActor * __thiscall ANiagaraUIActor::ANiagaraUIActor(ANiagaraUIActor *this)

{
  FName FVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  
  AActor::AActor((AActor *)this);
  *(undefined ***)this = &___7ANiagaraUIActor__6B_;
  if (*(longlong *)&this->field_0x1b8 == 0) {
    FVar1 = USceneComponent::GetDefaultSceneRootVariableName();
    FVar1 = *(FName *)FVar1;
    pUVar2 = Z_Construct_UClass_USceneComponent_NoRegister();
    pUVar3 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar2,pUVar2,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    *(UObject **)&this->field_0x1b8 = pUVar3;
  }
  return this;
}

// ~ANiagaraUIActor @ 14d292bb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ANiagaraUIActor::~ANiagaraUIActor(ANiagaraUIActor *this)

{
  *(undefined ***)this = &___7ANiagaraUIActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14d297690

UClass * __cdecl ANiagaraUIActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANiagaraUIActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraUIRenderer",L"NiagaraUIActor",
               &Z_Registration_Info_UClass_ANiagaraUIActor.InnerSingleton,
               StaticRegisterNativesANiagaraUIActor,0x2c0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ANiagaraUIActor>,
               InternalVTableHelperCtorCaller<ANiagaraUIActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANiagaraUIActor.InnerSingleton;
}

// SpawnNewNiagaraUIComponent @ 14d299a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UNiagaraUIComponent * __thiscall
ANiagaraUIActor::SpawnNewNiagaraUIComponent
          (ANiagaraUIActor *this,UNiagaraSystem *param_1,bool param_2,bool param_3,bool param_4)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UNiagaraUIComponent *this_00;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [8];
  UClass *local_e0;
  undefined8 *local_d8;
  ulonglong local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_d8 = (undefined8 *)0x0;
  local_d0 = 0;
  pUVar4 = UNiagaraUIComponent::StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 != (UClass *)0x0) goto LAB_14d299a89;
  }
  else if (pUVar4 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_14d299a89:
    pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar5 != (UClass *)0x0) {
      iVar2 = (int)pUVar5->_padding_;
      if (((int)pUVar4->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      pUVar5 = pUVar4;
      if (bVar3) goto LAB_14d299abd;
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_14d299abd:
  pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_e0 = pUVar4;
  if (pUVar5 == pUVar6) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    AActor::
    ForEachComponent_Internal<UNiagaraUIComponent,1,0,_AActor::GetComponents<UNiagaraUIComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&local_e0,
               (TArray<UNiagaraUIComponent_*,TSizedDefaultAllocator<32>_> *)&local_d8);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    AActor::
    ForEachComponent_Internal<UNiagaraUIComponent,0,0,_AActor::GetComponents<UNiagaraUIComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&local_e0,
               (TArray<UNiagaraUIComponent_*,TSizedDefaultAllocator<32>_> *)&local_d8);
  }
  iVar2 = (int)local_d0;
  uVar7 = (ulonglong)(int)local_d0;
  puVar1 = local_d8 + uVar7;
  puVar9 = local_d8;
  while( true ) {
    if ((int)uVar7 != iVar2) {
      `TCheckedPointerIterator<UNiagaraUIComponent_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_e8);
    }
    if (puVar9 == puVar1) break;
    (**(code **)(*(longlong *)*puVar9 + 0x4a0))((longlong *)*puVar9,0);
    uVar7 = local_d0 & 0xffffffff;
    puVar9 = puVar9 + 1;
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = UNiagaraUIComponent::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar4);
  local_c8._8_8_ = this;
  this_00 = (UNiagaraUIComponent *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar8 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  (**(code **)(*(longlong *)this_00 + 0x2d8))(this_00,0);
  local_e0 = (UClass *)0x0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)this_00,*(USceneComponent **)&this->field_0x1b8,(FName)0x0);
  USceneComponent::SetHiddenInGame((USceneComponent *)this_00,!param_3,DirtyOnly);
  UActorComponent::RegisterComponent((UActorComponent *)this_00);
  this_00->AutoActivateParticle = param_2;
  UNiagaraComponent::SetAsset((UNiagaraComponent *)this_00,param_1,true);
  UNiagaraComponent::SetAutoDestroy((UNiagaraComponent *)this_00,false);
  if (param_4) {
    this_00->field_0x42 = this_00->field_0x42 | 1;
    UNiagaraComponent::SetForceSolo((UNiagaraComponent *)this_00,true);
  }
  if (local_d8 != (undefined8 *)0x0) {
    FMemory::Free(local_d8);
  }
  return this_00;
}

// StaticRegisterNativesANiagaraUIActor @ 14d299c70

void __cdecl ANiagaraUIActor::StaticRegisterNativesANiagaraUIActor(void)

{
  return;
}

