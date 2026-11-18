// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldSystemEngine
// Functions: 41

// StaticClass @ 146324bb0

UClass * __cdecl UFieldSystemComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFieldSystemComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"FieldSystemComponent",
               &Z_Registration_Info_UClass_UFieldSystemComponent.InnerSingleton,
               StaticRegisterNativesUFieldSystemComponent,0x620,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UFieldSystemComponent>,
               InternalVTableHelperCtorCaller<UFieldSystemComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFieldSystemComponent.InnerSingleton;
}

// operator()<Chaos::FPBDRigidsSolver> @ 1463278d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UFieldSystemComponent::ClearFieldCommands'::__l17::<lambda_1>::operator()<Chaos::FPBDRigidsSolver>
          (void *this,FPBDRigidsSolver *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  FSimCallbackCommandObject *pFVar4;
  longlong *plVar5;
  FSimCallbackCommandObject *pFVar6;
  FSimCallbackCommandObject *pFVar7;
  undefined1 auStack_158 [32];
  undefined1 local_138 [4];
  undefined4 local_134;
  FSimCallbackCommandObject *local_128;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  longlong *local_100;
  FPBDRigidsSolver *local_f8;
  undefined1 local_f0 [192];
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_158;
  pFVar6 = (FSimCallbackCommandObject *)0x0;
  local_134 = 0;
  local_f8 = param_1;
  FFieldSystemCommand::FFieldSystemCommand
            ((FFieldSystemCommand *)local_f0,*(FFieldSystemCommand **)this);
  if (((Chaos::CVars::bEnableAsyncInitBody == false) && (bVar3 = IsInGameThread(), !bVar3)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                         ,0x1b3,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar4 = ::operator_new(0xc0);
  pFVar7 = pFVar6;
  if (pFVar4 != (FSimCallbackCommandObject *)0x0) {
    local_128 = (FSimCallbackCommandObject *)0x0;
    local_100 = FMemory::Malloc(0xd8,8);
    puVar1 = local_100 + 1;
    *local_100 = (longlong)
                 &UE::Core::Private::Function::
                  TFunction_OwnedObject<``UFieldSystemComponent::ClearFieldCommands'::`17'::<lambda_1>::operator()<Chaos::FPBDRigidsSolver>'::`2'::<lambda_1>,1,1>
                  ::_vftable_;
    *puVar1 = local_f8;
    FFieldSystemCommand::FFieldSystemCommand
              ((FFieldSystemCommand *)(local_100 + 2),(FFieldSystemCommand *)local_f0);
    if (puVar1 != (undefined8 *)0x0) {
      local_128 = (FSimCallbackCommandObject *)
                  UE::Core::Private::Function::
                  TFunctionRefCaller<``UFieldSystemComponent::ClearFieldCommands'::__l17::<lambda_1>::operator()<Chaos::FPBDRigidsSolver>'::__l2::<lambda_1>,void>
                  ::Call;
    }
    *(undefined ***)pFVar4 = &___7FSimCallbackCommandObject_Chaos__6B_;
    *(undefined2 *)&pFVar4->field_0x8 = 0;
    *(undefined8 *)&pFVar4->field_0x10 = 0;
    *(undefined8 *)&pFVar4->field_0x18 = 0;
    *(undefined8 *)&pFVar4->field_0x20 = 0;
    *(undefined8 *)&pFVar4->field_0x28 = 0;
    *(undefined2 *)&pFVar4->field_0x40 = 1;
    *(FSimCallbackCommandObject **)&pFVar4->Func = local_128;
    *(longlong **)&(pFVar4->Func).field_0x28 = local_100;
    local_100 = (longlong *)0x0;
    *(longlong *)&(pFVar4->Func).field_0x10 = local_118;
    *(undefined8 *)&(pFVar4->Func).field_0x18 = uStack_110;
    *(undefined8 *)&(pFVar4->Func).field_0x20 = local_108;
    if (*(longlong *)&pFVar4->Func != 0) {
      local_128 = pFVar6;
    }
    *(undefined8 *)&pFVar4->Func2 = 0;
    *(undefined8 *)&(pFVar4->Func2).field_0x28 = 0;
    pFVar4->bFuncHasTimeParameters = false;
    pFVar4->ExecuteOnStep = -1;
    if (*(longlong *)&pFVar4->Func == 0) {
      `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::operator()
                (local_138);
    }
    pFVar6 = (FSimCallbackCommandObject *)&DAT_00000001;
    pFVar7 = pFVar4;
  }
  if ((pFVar6 != (FSimCallbackCommandObject *)0x0) &&
     (local_128 != (FSimCallbackCommandObject *)0x0)) {
    plVar5 = &local_118;
    if (local_100 != (longlong *)0x0) {
      plVar5 = local_100;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  Chaos::FChaosMarshallingManager::RegisterSimCommand_External
            ((FChaosMarshallingManager *)&param_1->_padding_,pFVar7);
  local_30 = 0;
  if ((void *)local_f0._184_8_ != (void *)0x0) {
    FMemory::Free((void *)local_f0._184_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (local_f0 + 0x78);
  if ((FFieldNodeBase *)local_f0._8_8_ != (FFieldNodeBase *)0x0) {
    (**(code **)*(longlong *)local_f0._8_8_)(local_f0._8_8_,1);
  }
  return;
}

// operator()<Chaos::FPBDRigidsSolver> @ 146327af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UFieldSystemComponent::DispatchFieldCommand'::__l13::<lambda_1>::
operator()<Chaos::FPBDRigidsSolver>(void *this,FPBDRigidsSolver *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FSimCallbackCommandObject *pFVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  FSimCallbackCommandObject *pFVar12;
  FSimCallbackCommandObject *pFVar13;
  undefined1 auStack_278 [32];
  undefined1 *local_258;
  FScriptContainerElement *local_250;
  longlong local_248;
  longlong local_240;
  undefined8 local_238;
  undefined1 local_228 [4];
  undefined4 local_224;
  FSimCallbackCommandObject *local_218;
  longlong local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  longlong *local_1f0;
  undefined1 local_1e8 [192];
  undefined4 local_128;
  FPBDRigidsSolver *local_118;
  undefined1 local_110 [192];
  undefined4 local_50;
  undefined1 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_278;
  pFVar12 = (FSimCallbackCommandObject *)0x0;
  local_224 = 0;
  FFieldSystemCommand::FFieldSystemCommand
            ((FFieldSystemCommand *)local_1e8,*(FFieldSystemCommand **)this);
  local_1e8._16_8_ = *(FName *)((longlong)this + 0x18);
  local_1e8._24_4_ = (undefined4)(double)param_1->_padding_;
  if (*(char *)((longlong)this + 8) == '\0') {
    pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
    pFVar4 = pFVar3->Data;
    if ((pFVar4 <= (FScriptContainerElement *)local_1e8) &&
       (lVar11 = (longlong)*(int *)((longlong)&pFVar3[1].Data + 4),
       (FScriptContainerElement *)local_1e8 < pFVar4 + lVar11 * 200)) {
      local_240 = (longlong)*(int *)&pFVar3[1].Data;
      local_238 = 200;
      local_258 = local_1e8;
      local_250 = pFVar4;
      local_248 = lVar11;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x8c8,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar7 + 1;
    FFieldSystemCommand::FFieldSystemCommand
              ((FFieldSystemCommand *)(pFVar3->Data + (longlong)iVar7 * 200),
               (FFieldSystemCommand *)local_1e8);
  }
  uVar2 = *(undefined1 *)((longlong)this + 8);
  local_118 = param_1;
  FFieldSystemCommand::FFieldSystemCommand
            ((FFieldSystemCommand *)local_110,(FFieldSystemCommand *)local_1e8);
  local_48 = uVar2;
  if (((Chaos::CVars::bEnableAsyncInitBody == false) && (bVar6 = IsInGameThread(), !bVar6)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                         ,0x1b3,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar8 = ::operator_new(0xc0);
  pFVar13 = pFVar12;
  if (pFVar8 != (FSimCallbackCommandObject *)0x0) {
    local_218 = (FSimCallbackCommandObject *)0x0;
    puVar9 = FMemory::Malloc(0xe0,8);
    *puVar9 = &UE::Core::Private::Function::
               TFunction_OwnedObject<``UFieldSystemComponent::DispatchFieldCommand'::`13'::<lambda_1>::operator()<Chaos::FPBDRigidsSolver>'::`2'::<lambda_1>,1,1>
               ::_vftable_;
    puVar9[1] = local_118;
    local_1f0 = puVar9;
    FFieldSystemCommand::FFieldSystemCommand
              ((FFieldSystemCommand *)(puVar9 + 2),(FFieldSystemCommand *)local_110);
    *(undefined1 *)(puVar9 + 0x1b) = local_48;
    if (puVar9 + 1 != (undefined8 *)0x0) {
      local_218 = (FSimCallbackCommandObject *)
                  UE::Core::Private::Function::
                  TFunctionRefCaller<``UFieldSystemComponent::DispatchFieldCommand'::__l13::<lambda_1>::operator()<Chaos::FPBDRigidsSolver>'::__l2::<lambda_1>,void>
                  ::Call;
    }
    *(undefined ***)pFVar8 = &___7FSimCallbackCommandObject_Chaos__6B_;
    *(undefined2 *)&pFVar8->field_0x8 = 0;
    *(undefined8 *)&pFVar8->field_0x10 = 0;
    *(undefined8 *)&pFVar8->field_0x18 = 0;
    *(undefined8 *)&pFVar8->field_0x20 = 0;
    *(undefined8 *)&pFVar8->field_0x28 = 0;
    *(undefined2 *)&pFVar8->field_0x40 = 1;
    *(FSimCallbackCommandObject **)&pFVar8->Func = local_218;
    *(longlong **)&(pFVar8->Func).field_0x28 = local_1f0;
    local_1f0 = (longlong *)0x0;
    *(longlong *)&(pFVar8->Func).field_0x10 = local_208;
    *(undefined8 *)&(pFVar8->Func).field_0x18 = uStack_200;
    *(undefined8 *)&(pFVar8->Func).field_0x20 = local_1f8;
    if (*(longlong *)&pFVar8->Func != 0) {
      local_218 = pFVar12;
    }
    *(undefined8 *)&pFVar8->Func2 = 0;
    *(undefined8 *)&(pFVar8->Func2).field_0x28 = 0;
    pFVar8->bFuncHasTimeParameters = false;
    pFVar8->ExecuteOnStep = -1;
    if (*(longlong *)&pFVar8->Func == 0) {
      `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::operator()
                (local_228);
    }
    pFVar12 = (FSimCallbackCommandObject *)&DAT_00000001;
    pFVar13 = pFVar8;
  }
  if ((pFVar12 != (FSimCallbackCommandObject *)0x0) &&
     (local_218 != (FSimCallbackCommandObject *)0x0)) {
    plVar10 = &local_208;
    if (local_1f0 != (longlong *)0x0) {
      plVar10 = local_1f0;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  Chaos::FChaosMarshallingManager::RegisterSimCommand_External
            ((FChaosMarshallingManager *)&param_1->_padding_,pFVar13);
  local_50 = 0;
  if ((void *)local_110._184_8_ != (void *)0x0) {
    FMemory::Free((void *)local_110._184_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (local_110 + 0x78);
  if ((FFieldNodeBase *)local_110._8_8_ != (FFieldNodeBase *)0x0) {
    (**(code **)*(longlong *)local_110._8_8_)(local_110._8_8_,1);
  }
  local_128 = 0;
  if ((void *)local_1e8._184_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1e8._184_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (local_1e8 + 0x78);
  if ((FFieldNodeBase *)local_1e8._8_8_ != (FFieldNodeBase *)0x0) {
    (**(code **)*(longlong *)local_1e8._8_8_)(local_1e8._8_8_,1);
  }
  return;
}

// UFieldSystemComponent @ 14632ac30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UFieldSystemComponent * __thiscall
UFieldSystemComponent::UFieldSystemComponent(UFieldSystemComponent *this,FVTableHelper *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  (this->FieldSystem).field0_0x0.DebugPtr = (UFieldSystem *)0x0;
  (this->SupportedSolvers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SupportedSolvers).ArrayNum = 0;
  (this->SupportedSolvers).ArrayMax = 0;
  (this->ConstructionCommands).TargetNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstructionCommands).TargetNames.ArrayNum = 0;
  (this->ConstructionCommands).TargetNames.ArrayMax = 0;
  (this->ConstructionCommands).RootNodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstructionCommands).RootNodes.ArrayNum = 0;
  (this->ConstructionCommands).RootNodes.ArrayMax = 0;
  (this->ConstructionCommands).MetaDatas.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstructionCommands).MetaDatas.ArrayNum = 0;
  (this->ConstructionCommands).MetaDatas.ArrayMax = 0;
  (this->BufferCommands).TargetNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BufferCommands).TargetNames.ArrayNum = 0;
  (this->BufferCommands).TargetNames.ArrayMax = 0;
  (this->BufferCommands).RootNodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BufferCommands).RootNodes.ArrayNum = 0;
  (this->BufferCommands).RootNodes.ArrayMax = 0;
  (this->BufferCommands).MetaDatas.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BufferCommands).MetaDatas.ArrayNum = 0;
  (this->BufferCommands).MetaDatas.ArrayMax = 0;
  (this->SetupConstructionFields).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SetupConstructionFields).ArrayNum = 0;
  (this->SetupConstructionFields).ArrayMax = 0;
  (this->ChaosPersistentFields).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChaosPersistentFields).ArrayNum = 0;
  (this->ChaosPersistentFields).ArrayMax = 0;
  (this->WorldGPUPersistentFields).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldGPUPersistentFields).ArrayNum = 0;
  (this->WorldGPUPersistentFields).ArrayMax = 0;
  (this->WorldCPUPersistentFields).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldCPUPersistentFields).ArrayNum = 0;
  (this->WorldCPUPersistentFields).ArrayMax = 0;
  return this;
}

// UFieldSystemComponent @ 14632ad40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UFieldSystemComponent * __thiscall
UFieldSystemComponent::UFieldSystemComponent
          (UFieldSystemComponent *this,FObjectInitializer *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->bIsWorldField = false;
  this->bIsChaosField = true;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  (this->FieldSystem).field0_0x0.DebugPtr = (UFieldSystem *)0x0;
  (this->SupportedSolvers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SupportedSolvers).ArrayNum = 0;
  (this->SupportedSolvers).ArrayMax = 0;
  (this->ConstructionCommands).TargetNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstructionCommands).TargetNames.ArrayNum = 0;
  (this->ConstructionCommands).TargetNames.ArrayMax = 0;
  (this->ConstructionCommands).RootNodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstructionCommands).RootNodes.ArrayNum = 0;
  (this->ConstructionCommands).RootNodes.ArrayMax = 0;
  (this->ConstructionCommands).MetaDatas.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstructionCommands).MetaDatas.ArrayNum = 0;
  (this->ConstructionCommands).MetaDatas.ArrayMax = 0;
  (this->BufferCommands).TargetNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BufferCommands).TargetNames.ArrayNum = 0;
  (this->BufferCommands).TargetNames.ArrayMax = 0;
  (this->BufferCommands).RootNodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BufferCommands).RootNodes.ArrayNum = 0;
  (this->BufferCommands).RootNodes.ArrayMax = 0;
  (this->BufferCommands).MetaDatas.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BufferCommands).MetaDatas.ArrayNum = 0;
  (this->BufferCommands).MetaDatas.ArrayMax = 0;
  this->ChaosModule = (FChaosSolversModule *)0x0;
  this->bHasPhysicsState = false;
  (this->SetupConstructionFields).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SetupConstructionFields).ArrayNum = 0;
  (this->SetupConstructionFields).ArrayMax = 0;
  (this->ChaosPersistentFields).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChaosPersistentFields).ArrayNum = 0;
  (this->ChaosPersistentFields).ArrayMax = 0;
  (this->WorldGPUPersistentFields).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldGPUPersistentFields).ArrayNum = 0;
  (this->WorldGPUPersistentFields).ArrayMax = 0;
  (this->WorldCPUPersistentFields).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldCPUPersistentFields).ArrayNum = 0;
  (this->WorldCPUPersistentFields).ArrayMax = 0;
  if (4 < (byte)FSC_Log._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&FSC_Log);
  }
  UPrimitiveComponent::SetGenerateOverlapEvents((UPrimitiveComponent *)this,false);
  return this;
}

// ~UFieldSystemComponent @ 14632b760

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UFieldSystemComponent::~UFieldSystemComponent(UFieldSystemComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  DestructItems<FFieldSystemCommand,int>
            ((FFieldSystemCommand *)(this->WorldCPUPersistentFields).AllocatorInstance.Data,
             (this->WorldCPUPersistentFields).ArrayNum);
  pFVar1 = (this->WorldCPUPersistentFields).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FFieldSystemCommand,int>
            ((FFieldSystemCommand *)(this->WorldGPUPersistentFields).AllocatorInstance.Data,
             (this->WorldGPUPersistentFields).ArrayNum);
  pFVar1 = (this->WorldGPUPersistentFields).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FFieldSystemCommand,int>
            ((FFieldSystemCommand *)(this->ChaosPersistentFields).AllocatorInstance.Data,
             (this->ChaosPersistentFields).ArrayNum);
  pFVar1 = (this->ChaosPersistentFields).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FFieldSystemCommand,int>
            ((FFieldSystemCommand *)(this->SetupConstructionFields).AllocatorInstance.Data,
             (this->SetupConstructionFields).ArrayNum);
  pFVar1 = (this->SetupConstructionFields).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BufferCommands).MetaDatas.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BufferCommands).RootNodes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BufferCommands).TargetNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstructionCommands).MetaDatas.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstructionCommands).RootNodes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstructionCommands).TargetNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<AChaosSolverActor>,int>
            ((TSoftObjectPtr<AChaosSolverActor> *)(this->SupportedSolvers).AllocatorInstance.Data,
             (this->SupportedSolvers).ArrayNum);
  pFVar1 = (this->SupportedSolvers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  return;
}

// AddFieldCommand @ 14632d300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UFieldSystemComponent::AddFieldCommand
          (UFieldSystemComponent *this,bool param_1,EFieldPhysicsType param_2,
          UFieldSystemMetaData *param_3,UFieldNodeBase *param_4)

{
  int *piVar1;
  TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UWorld *pUVar7;
  FName *pFVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  undefined1 auStack_258 [32];
  undefined1 *local_238;
  FScriptContainerElement *local_230;
  longlong local_228;
  longlong local_220;
  undefined8 local_218;
  FName local_208;
  FName local_200;
  FString local_1f8;
  undefined1 local_1e8 [192];
  undefined4 local_128;
  undefined1 local_118 [192];
  undefined4 local_58;
  ulonglong local_48;
  
  if (param_1) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_258;
    bVar11 = false;
    local_208 = (FName)((ulonglong)local_208 & 0xffffffff00000000);
    if (param_4 != (UFieldNodeBase *)0x0) {
      if ((this->FieldSystem).field0_0x0.DebugPtr != (UFieldSystem *)0x0) {
        FFieldObjectCommands::CreateFieldCommand
                  ((FFieldSystemCommand *)local_1e8,param_2,param_4,param_3);
        if ((FFieldNodeBase *)local_1e8._8_8_ != (FFieldNodeBase *)0x0) {
          pTVar2 = &this->SetupConstructionFields;
          pFVar3 = (pTVar2->AllocatorInstance).Data;
          if ((pFVar3 <= (FScriptContainerElement *)local_1e8) &&
             (lVar9 = (longlong)(this->SetupConstructionFields).ArrayMax,
             (FScriptContainerElement *)local_1e8 < pFVar3 + lVar9 * 200)) {
            local_220 = (longlong)(this->SetupConstructionFields).ArrayNum;
            local_218 = 200;
            local_238 = local_1e8;
            local_230 = pFVar3;
            local_228 = lVar9;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          iVar6 = (this->SetupConstructionFields).ArrayNum;
          piVar1 = &(this->SetupConstructionFields).ArrayMax;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x8c8,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->SetupConstructionFields).ArrayNum = iVar6 + 1;
          FFieldSystemCommand::FFieldSystemCommand
                    ((FFieldSystemCommand *)
                     ((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 200),
                     (FFieldSystemCommand *)local_1e8);
          pUVar7 = *(UWorld **)&this->field_0xb0;
          if (((pUVar7 != (UWorld *)0x0) ||
              (pUVar7 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
              pUVar7 != (UWorld *)0x0)) &&
             ((pUVar7->PhysicsField).field0_0x0.DebugPtr != (UPhysicsFieldComponent *)0x0)) {
            if (*(longlong *)&this->field_0xa8 == 0) {
              FVar10.Data = (FScriptContainerElement *)L"";
            }
            else {
              local_208 = *(FName *)(*(longlong *)&this->field_0xa8 + 0x18);
              ::FName::ToString(&local_208,&local_1f8);
              bVar11 = true;
              FVar10.Data = (FScriptContainerElement *)L"";
              if (local_1f8.Data.ArrayNum != 0) {
                FVar10.Data = local_1f8.Data.AllocatorInstance.Data;
              }
            }
            ::FName::FName(&local_200,(wchar_t *)FVar10.Data);
            if ((bVar11) &&
               (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
            }
            FFieldSystemCommand::FFieldSystemCommand
                      ((FFieldSystemCommand *)local_118,(FFieldSystemCommand *)local_1e8);
            local_118._24_4_ = (undefined4)pUVar7->TimeSeconds;
            local_118._16_4_ = local_200.ComparisonIndex.Value;
            local_118._20_4_ = local_200.Number;
            UPhysicsFieldComponent::AddConstructionCommand
                      ((pUVar7->PhysicsField).field0_0x0.DebugPtr,(FFieldSystemCommand *)local_118);
            local_58 = 0;
            if ((void *)local_118._184_8_ != (void *)0x0) {
              FMemory::Free((void *)local_118._184_8_);
            }
            TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (local_118 + 0x78);
            if ((FFieldNodeBase *)local_118._8_8_ != (FFieldNodeBase *)0x0) {
              (**(code **)*(longlong *)local_118._8_8_)(local_118._8_8_,1);
            }
          }
        }
        local_128 = 0;
        if ((void *)local_1e8._184_8_ != (void *)0x0) {
          FMemory::Free((void *)local_1e8._184_8_);
        }
        TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (local_1e8 + 0x78);
        if ((FFieldNodeBase *)local_1e8._8_8_ != (FFieldNodeBase *)0x0) {
          (**(code **)*(longlong *)local_1e8._8_8_)(local_1e8._8_8_,1);
        }
      }
      pFVar8 = GetFieldPhysicsName(param_2);
      FFieldObjectCommands::AddFieldCommand(&this->BufferCommands,pFVar8,param_4,param_3);
    }
  }
  return;
}

// AddPersistentField @ 14632d5b0

void __thiscall
UFieldSystemComponent::AddPersistentField
          (UFieldSystemComponent *this,bool param_1,EFieldPhysicsType param_2,
          UFieldSystemMetaData *param_3,UFieldNodeBase *param_4)

{
  BuildFieldCommand(this,param_1,param_2,param_3,param_4,false);
  return;
}

// ApplyLinearForce @ 14632d5e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UFieldSystemComponent::ApplyLinearForce
          (UFieldSystemComponent *this,bool param_1,TVector<double> *param_2,float param_3)

{
  FName FVar1;
  double dVar2;
  char cVar3;
  FFieldNodeBase *pFVar4;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [192];
  undefined4 local_38;
  ulonglong local_28;
  
  if (param_1) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
    cVar3 = (**(code **)(*(longlong *)this + 0x3c8))();
    if (cVar3 != '\0') {
      pFVar4 = ::operator_new(0x30);
      if (pFVar4 == (FFieldNodeBase *)0x0) {
        pFVar4 = (FFieldNodeBase *)0x0;
      }
      else {
        (pFVar4->Name).ComparisonIndex = 0;
        (pFVar4->Name).Number = 0;
        pFVar4->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
        ::FName::FName(&pFVar4->Name,"");
        dVar2 = (param_2->field0_0x0)._s_0.Y;
        FVar1 = (FName)(param_2->field0_0x0)._s_0.Z;
        pFVar4[1].Name = (FName)(param_2->field0_0x0)._s_0.X;
        pFVar4[2]._padding_ = (longlong)dVar2;
        pFVar4->_padding_ = (longlong)&___7FUniformVector__6B_;
        pFVar4[2].Name = FVar1;
        *(float *)&pFVar4[1]._padding_ = param_3;
      }
      FFieldObjectCommands::CreateFieldCommand
                ((FFieldSystemCommand *)local_f8,Field_LinearForce,pFVar4);
      DispatchFieldCommand(this,(FFieldSystemCommand *)local_f8,true);
      local_38 = 0;
      if ((void *)local_f8._184_8_ != (void *)0x0) {
        FMemory::Free((void *)local_f8._184_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (local_f8 + 0x78);
      if ((FFieldNodeBase *)local_f8._8_8_ != (FFieldNodeBase *)0x0) {
        (**(code **)*(longlong *)local_f8._8_8_)(local_f8._8_8_,1);
      }
    }
  }
  return;
}

// ApplyPhysicsField @ 14632d720

void __thiscall
UFieldSystemComponent::ApplyPhysicsField
          (UFieldSystemComponent *this,bool param_1,EFieldPhysicsType param_2,
          UFieldSystemMetaData *param_3,UFieldNodeBase *param_4)

{
  BuildFieldCommand(this,param_1,param_2,param_3,param_4,true);
  return;
}

// ApplyRadialForce @ 14632d750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UFieldSystemComponent::ApplyRadialForce
          (UFieldSystemComponent *this,bool param_1,TVector<double> *param_2,float param_3)

{
  FName FVar1;
  double dVar2;
  char cVar3;
  FFieldNodeBase *pFVar4;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [192];
  undefined4 local_38;
  ulonglong local_28;
  
  if (param_1) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
    cVar3 = (**(code **)(*(longlong *)this + 0x3c8))();
    if (cVar3 != '\0') {
      pFVar4 = ::operator_new(0x30);
      if (pFVar4 == (FFieldNodeBase *)0x0) {
        pFVar4 = (FFieldNodeBase *)0x0;
      }
      else {
        (pFVar4->Name).ComparisonIndex = 0;
        (pFVar4->Name).Number = 0;
        pFVar4->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
        ::FName::FName(&pFVar4->Name,"");
        dVar2 = (param_2->field0_0x0)._s_0.Y;
        FVar1 = (FName)(param_2->field0_0x0)._s_0.Z;
        pFVar4[1].Name = (FName)(param_2->field0_0x0)._s_0.X;
        pFVar4[2]._padding_ = (longlong)dVar2;
        pFVar4->_padding_ = (longlong)&___7FRadialVector__6B_;
        pFVar4[2].Name = FVar1;
        *(float *)&pFVar4[1]._padding_ = param_3;
      }
      FFieldObjectCommands::CreateFieldCommand
                ((FFieldSystemCommand *)local_f8,Field_LinearForce,pFVar4);
      DispatchFieldCommand(this,(FFieldSystemCommand *)local_f8,true);
      local_38 = 0;
      if ((void *)local_f8._184_8_ != (void *)0x0) {
        FMemory::Free((void *)local_f8._184_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (local_f8 + 0x78);
      if ((FFieldNodeBase *)local_f8._8_8_ != (FFieldNodeBase *)0x0) {
        (**(code **)*(longlong *)local_f8._8_8_)(local_f8._8_8_,1);
      }
    }
  }
  return;
}

// ApplyRadialVectorFalloffForce @ 14632d890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UFieldSystemComponent::ApplyRadialVectorFalloffForce
          (UFieldSystemComponent *this,bool param_1,TVector<double> *param_2,float param_3,
          float param_4)

{
  double dVar1;
  FFieldNode<UE::Math::TVector<double>_> *pFVar2;
  double dVar3;
  FFieldNode<float> *pFVar4;
  FFieldNode<UE::Math::TVector<double>_> *pFVar5;
  char cVar6;
  FSumVector *pFVar7;
  FSumVector *pFVar8;
  FSumVector *pFVar9;
  FSumVector *pFVar10;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [192];
  undefined4 local_48;
  ulonglong local_38;
  
  if (param_1) {
    local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
    cVar6 = (**(code **)(*(longlong *)this + 0x3c8))();
    if (cVar6 != '\0') {
      pFVar7 = ::operator_new(0x48);
      pFVar9 = (FSumVector *)0x0;
      pFVar10 = pFVar9;
      if (pFVar7 != (FSumVector *)0x0) {
        pFVar7->_padding_ = 0;
        pFVar7->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
        ::FName::FName((FName *)&pFVar7->_padding_,"");
        dVar1 = (param_2->field0_0x0)._s_0.Z;
        pFVar7->Magnitude = param_4;
        pFVar2 = (FFieldNode<UE::Math::TVector<double>_> *)(param_2->field0_0x0)._s_0.X;
        dVar3 = (param_2->field0_0x0)._s_0.Y;
        pFVar7->_padding_ = (longlong)&___7FRadialFalloff__6B_;
        *(float *)&(pFVar7->VectorRight).Ptr = param_3;
        (pFVar7->VectorLeft).Ptr = pFVar2;
        *(double *)&pFVar7->Operation = dVar3;
        *(undefined4 *)&pFVar7->field_0x14 = 0;
        pFVar7[1]._padding_ = (longlong)dVar1;
        (pFVar7->Scalar).Ptr = (FFieldNode<float> *)&DAT_3f800000;
        *(undefined4 *)&pFVar7[1]._padding_ = 1;
        pFVar10 = pFVar7;
      }
      pFVar8 = ::operator_new(0x30);
      pFVar7 = pFVar9;
      if (pFVar8 != (FSumVector *)0x0) {
        pFVar8->_padding_ = 0;
        pFVar8->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
        ::FName::FName((FName *)&pFVar8->_padding_,"");
        pFVar4 = (FFieldNode<float> *)(param_2->field0_0x0)._s_0.X;
        pFVar5 = (FFieldNode<UE::Math::TVector<double>_> *)(param_2->field0_0x0)._s_0.Y;
        pFVar8->Magnitude = 1.0;
        pFVar2 = (FFieldNode<UE::Math::TVector<double>_> *)(param_2->field0_0x0)._s_0.Z;
        (pFVar8->Scalar).Ptr = pFVar4;
        (pFVar8->VectorRight).Ptr = pFVar5;
        pFVar8->_padding_ = (longlong)&___7FRadialVector__6B_;
        (pFVar8->VectorLeft).Ptr = pFVar2;
        pFVar7 = pFVar8;
      }
      pFVar8 = ::operator_new(0x38);
      if (pFVar8 != (FSumVector *)0x0) {
        pFVar9 = FSumVector::FSumVector
                           (pFVar8,__real_3f800000,(FFieldNode<float> *)pFVar10,
                            (FFieldNode<UE::Math::TVector<double>_> *)pFVar7,
                            (FFieldNode<UE::Math::TVector<double>_> *)0x0,Field_Multiply);
      }
      FFieldObjectCommands::CreateFieldCommand
                ((FFieldSystemCommand *)local_108,Field_LinearForce,(FFieldNodeBase *)pFVar9);
      DispatchFieldCommand(this,(FFieldSystemCommand *)local_108,true);
      local_48 = 0;
      if ((void *)local_108._184_8_ != (void *)0x0) {
        FMemory::Free((void *)local_108._184_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (local_108 + 0x78);
      if ((FFieldNodeBase *)local_108._8_8_ != (FFieldNodeBase *)0x0) {
        (**(code **)*(longlong *)local_108._8_8_)(local_108._8_8_,1);
      }
    }
  }
  return;
}

// ApplyStayDynamicField @ 14632daa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UFieldSystemComponent::ApplyStayDynamicField
          (UFieldSystemComponent *this,bool param_1,TVector<double> *param_2,float param_3)

{
  FName FVar1;
  FName FVar2;
  double dVar3;
  char cVar4;
  FFieldNodeBase *pFVar5;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [192];
  undefined4 local_38;
  ulonglong local_28;
  
  if (param_1) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
    cVar4 = (**(code **)(*(longlong *)this + 0x3c8))();
    if (cVar4 != '\0') {
      pFVar5 = ::operator_new(0x40);
      if (pFVar5 == (FFieldNodeBase *)0x0) {
        pFVar5 = (FFieldNodeBase *)0x0;
      }
      else {
        (pFVar5->Name).ComparisonIndex = 0;
        (pFVar5->Name).Number = 0;
        pFVar5->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
        ::FName::FName(&pFVar5->Name,"");
        FVar2 = (FName)(param_2->field0_0x0)._s_0.X;
        dVar3 = (param_2->field0_0x0)._s_0.Y;
        *(undefined4 *)&pFVar5[3]._padding_ = 4;
        FVar1 = (FName)(param_2->field0_0x0)._s_0.Z;
        pFVar5[1].Name = FVar2;
        pFVar5[2]._padding_ = (longlong)dVar3;
        pFVar5->_padding_ = (longlong)&___7FRadialIntMask__6B_;
        pFVar5[2].Name = FVar1;
        *(float *)&pFVar5[1]._padding_ = param_3;
        *(undefined4 *)((longlong)&pFVar5[3]._padding_ + 4) = 2;
        pFVar5[3].Name.ComparisonIndex.Value = 1;
      }
      FFieldObjectCommands::CreateFieldCommand
                ((FFieldSystemCommand *)local_f8,Field_DynamicState,pFVar5);
      DispatchFieldCommand(this,(FFieldSystemCommand *)local_f8,true);
      local_38 = 0;
      if ((void *)local_f8._184_8_ != (void *)0x0) {
        FMemory::Free((void *)local_f8._184_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (local_f8 + 0x78);
      if ((FFieldNodeBase *)local_f8._8_8_ != (FFieldNodeBase *)0x0) {
        (**(code **)*(longlong *)local_f8._8_8_)(local_f8._8_8_,1);
      }
    }
  }
  return;
}

// ApplyStrainField @ 14632dc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UFieldSystemComponent::ApplyStrainField
          (UFieldSystemComponent *this,bool param_1,TVector<double> *param_2,float param_3,
          float param_4,int param_5)

{
  FName FVar1;
  FName FVar2;
  double dVar3;
  char cVar4;
  FFieldNodeBase *pFVar5;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [192];
  undefined4 local_38;
  ulonglong local_28;
  
  if (param_1) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
    cVar4 = (**(code **)(*(longlong *)this + 0x3c8))();
    if (cVar4 != '\0') {
      pFVar5 = ::operator_new(0x48);
      if (pFVar5 == (FFieldNodeBase *)0x0) {
        pFVar5 = (FFieldNodeBase *)0x0;
      }
      else {
        (pFVar5->Name).ComparisonIndex = 0;
        (pFVar5->Name).Number = 0;
        pFVar5->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
        ::FName::FName(&pFVar5->Name,"");
        FVar1 = (FName)(param_2->field0_0x0)._s_0.Z;
        *(float *)&pFVar5[1]._padding_ = param_4;
        FVar2 = (FName)(param_2->field0_0x0)._s_0.X;
        dVar3 = (param_2->field0_0x0)._s_0.Y;
        pFVar5->_padding_ = (longlong)&___7FRadialFalloff__6B_;
        *(float *)&pFVar5[2]._padding_ = param_3;
        pFVar5[2].Name = FVar2;
        pFVar5[3]._padding_ = (longlong)dVar3;
        *(undefined4 *)((longlong)&pFVar5[1]._padding_ + 4) = 0;
        pFVar5[3].Name = FVar1;
        pFVar5[1].Name.ComparisonIndex = 0x3f800000;
        pFVar5[1].Name.Number = 0;
        *(undefined4 *)&pFVar5[4]._padding_ = 1;
      }
      FFieldObjectCommands::CreateFieldCommand
                ((FFieldSystemCommand *)local_f8,Field_ExternalClusterStrain,pFVar5);
      DispatchFieldCommand(this,(FFieldSystemCommand *)local_f8,true);
      local_38 = 0;
      if ((void *)local_f8._184_8_ != (void *)0x0) {
        FMemory::Free((void *)local_f8._184_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (local_f8 + 0x78);
      if ((FFieldNodeBase *)local_f8._8_8_ != (FFieldNodeBase *)0x0) {
        (**(code **)*(longlong *)local_f8._8_8_)(local_f8._8_8_,1);
      }
    }
  }
  return;
}

// ApplyUniformVectorFalloffForce @ 14632dd70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UFieldSystemComponent::ApplyUniformVectorFalloffForce
          (UFieldSystemComponent *this,bool param_1,TVector<double> *param_2,
          TVector<double> *param_3,float param_4,float param_5)

{
  double dVar1;
  FFieldNode<UE::Math::TVector<double>_> *pFVar2;
  double dVar3;
  FFieldNode<float> *pFVar4;
  FFieldNode<UE::Math::TVector<double>_> *pFVar5;
  char cVar6;
  FSumVector *pFVar7;
  FSumVector *pFVar8;
  FSumVector *pFVar9;
  FSumVector *pFVar10;
  undefined1 auStackY_128 [32];
  undefined1 local_f8 [192];
  undefined4 local_38;
  ulonglong local_28;
  
  if (param_1) {
    local_28 = __security_cookie.value ^ (ulonglong)auStackY_128;
    cVar6 = (**(code **)(*(longlong *)this + 0x3c8))();
    if (cVar6 != '\0') {
      pFVar7 = ::operator_new(0x48);
      pFVar9 = (FSumVector *)0x0;
      pFVar10 = pFVar9;
      if (pFVar7 != (FSumVector *)0x0) {
        pFVar7->_padding_ = 0;
        pFVar7->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
        ::FName::FName((FName *)&pFVar7->_padding_,"");
        dVar1 = (param_2->field0_0x0)._s_0.Z;
        pFVar7->Magnitude = param_5;
        *(float *)&(pFVar7->VectorRight).Ptr = param_4;
        pFVar2 = (FFieldNode<UE::Math::TVector<double>_> *)(param_2->field0_0x0)._s_0.X;
        dVar3 = (param_2->field0_0x0)._s_0.Y;
        pFVar7->_padding_ = (longlong)&___7FRadialFalloff__6B_;
        *(undefined4 *)&pFVar7->field_0x14 = 0;
        (pFVar7->VectorLeft).Ptr = pFVar2;
        *(double *)&pFVar7->Operation = dVar3;
        (pFVar7->Scalar).Ptr = (FFieldNode<float> *)&DAT_3f800000;
        pFVar7[1]._padding_ = (longlong)dVar1;
        *(undefined4 *)&pFVar7[1]._padding_ = 1;
        pFVar10 = pFVar7;
      }
      pFVar8 = ::operator_new(0x30);
      pFVar7 = pFVar9;
      if (pFVar8 != (FSumVector *)0x0) {
        pFVar8->_padding_ = 0;
        pFVar8->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
        ::FName::FName((FName *)&pFVar8->_padding_,"");
        pFVar4 = (FFieldNode<float> *)(param_3->field0_0x0)._s_0.X;
        pFVar5 = (FFieldNode<UE::Math::TVector<double>_> *)(param_3->field0_0x0)._s_0.Y;
        pFVar8->Magnitude = 1.0;
        pFVar2 = (FFieldNode<UE::Math::TVector<double>_> *)(param_3->field0_0x0)._s_0.Z;
        (pFVar8->Scalar).Ptr = pFVar4;
        (pFVar8->VectorRight).Ptr = pFVar5;
        pFVar8->_padding_ = (longlong)&___7FUniformVector__6B_;
        (pFVar8->VectorLeft).Ptr = pFVar2;
        pFVar7 = pFVar8;
      }
      pFVar8 = ::operator_new(0x38);
      if (pFVar8 != (FSumVector *)0x0) {
        pFVar9 = FSumVector::FSumVector
                           (pFVar8,__real_3f800000,(FFieldNode<float> *)pFVar10,
                            (FFieldNode<UE::Math::TVector<double>_> *)pFVar7,
                            (FFieldNode<UE::Math::TVector<double>_> *)0x0,Field_Multiply);
      }
      FFieldObjectCommands::CreateFieldCommand
                ((FFieldSystemCommand *)local_f8,Field_LinearForce,(FFieldNodeBase *)pFVar9);
      DispatchFieldCommand(this,(FFieldSystemCommand *)local_f8,true);
      local_38 = 0;
      if ((void *)local_f8._184_8_ != (void *)0x0) {
        FMemory::Free((void *)local_f8._184_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (local_f8 + 0x78);
      if ((FFieldNodeBase *)local_f8._8_8_ != (FFieldNodeBase *)0x0) {
        (**(code **)*(longlong *)local_f8._8_8_)(local_f8._8_8_,1);
      }
    }
  }
  return;
}

// BuildFieldCommand @ 14632df70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UFieldSystemComponent::BuildFieldCommand
          (UFieldSystemComponent *this,bool param_1,EFieldPhysicsType param_2,
          UFieldSystemMetaData *param_3,UFieldNodeBase *param_4,bool param_5)

{
  char cVar1;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [192];
  undefined4 local_38;
  ulonglong local_28;
  
  if (((param_1) &&
      (local_28 = __security_cookie.value ^ (ulonglong)auStack_118, param_4 != (UFieldNodeBase *)0x0
      )) && (cVar1 = (**(code **)(*(longlong *)this + 0x3c8))(), cVar1 != '\0')) {
    FFieldObjectCommands::CreateFieldCommand
              ((FFieldSystemCommand *)local_f8,param_2,param_4,param_3);
    DispatchFieldCommand(this,(FFieldSystemCommand *)local_f8,param_5);
    local_38 = 0;
    if ((void *)local_f8._184_8_ != (void *)0x0) {
      FMemory::Free((void *)local_f8._184_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (local_f8 + 0x78);
    if ((FFieldNodeBase *)local_f8._8_8_ != (FFieldNodeBase *)0x0) {
      (**(code **)*(longlong *)local_f8._8_8_)(local_f8._8_8_,1);
    }
  }
  return;
}

// ClearFieldCommands @ 14632e0a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UFieldSystemComponent::ClearFieldCommands(UFieldSystemComponent *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FPBDRigidsSolver *pFVar4;
  char cVar5;
  UWorld *pUVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FFieldSystemCommand *pFVar9;
  FScriptContainerElement *pFVar10;
  ForAnyElementType FVar11;
  FFieldSystemCommand *pFVar12;
  FScriptContainerElement *local_res8;
  TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> local_38;
  
  cVar5 = (**(code **)(*(longlong *)this + 0x3c8))();
  if (cVar5 != '\0') {
    if (this->bIsChaosField != false) {
      GetPhysicsSolvers(this,&local_38);
      iVar7 = local_38.ArrayNum;
      pFVar2 = local_38.AllocatorInstance.Data + (longlong)iVar7 * 8;
      FVar11.Data = local_38.AllocatorInstance.Data;
      while( true ) {
        if (local_38.ArrayNum != iVar7) {
          `TCheckedPointerIterator<Chaos::FPhysicsSolverBase_*,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_res8);
        }
        if (FVar11.Data == pFVar2) break;
        iVar3 = (this->ChaosPersistentFields).ArrayNum;
        pFVar8 = (this->ChaosPersistentFields).AllocatorInstance.Data;
        pFVar4 = *(FPBDRigidsSolver **)FVar11.Data;
        pFVar10 = pFVar8 + (longlong)iVar3 * 200;
        while( true ) {
          if ((this->ChaosPersistentFields).ArrayNum != iVar3) {
            `TCheckedPointerIterator<FFieldSystemCommand,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_res8);
          }
          if (pFVar8 == pFVar10) break;
          local_res8 = pFVar8;
          `UFieldSystemComponent::ClearFieldCommands'::__l17::<lambda_1>::
          operator()<Chaos::FPBDRigidsSolver>(&local_res8,pFVar4);
          pFVar8 = pFVar8 + 200;
        }
        FVar11.Data = FVar11.Data + 8;
      }
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
    }
    piVar1 = &(this->ChaosPersistentFields).ArrayMax;
    pFVar9 = (FFieldSystemCommand *)(this->ChaosPersistentFields).AllocatorInstance.Data;
    iVar7 = (this->ChaosPersistentFields).ArrayNum;
    if ((this->ChaosPersistentFields).ArrayMax < 0) {
      DestructItems<FFieldSystemCommand,int>(pFVar9,iVar7);
      (this->ChaosPersistentFields).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (200,8,0,&(this->ChaosPersistentFields).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FFieldSystemCommand,int>(pFVar9,iVar7);
      (this->ChaosPersistentFields).ArrayNum = 0;
    }
    if ((((this->bIsWorldField != false) || (this->bIsChaosField != false)) &&
        ((pUVar6 = *(UWorld **)&this->field_0xb0, pUVar6 != (UWorld *)0x0 ||
         (pUVar6 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
         pUVar6 != (UWorld *)0x0)))) &&
       ((pUVar6->PhysicsField).field0_0x0.DebugPtr != (UPhysicsFieldComponent *)0x0)) {
      if (this->bIsWorldField != false) {
        iVar7 = (this->WorldGPUPersistentFields).ArrayNum;
        pFVar9 = (FFieldSystemCommand *)(this->WorldGPUPersistentFields).AllocatorInstance.Data;
        pFVar12 = pFVar9 + iVar7;
        while( true ) {
          if ((this->WorldGPUPersistentFields).ArrayNum != iVar7) {
            `TCheckedPointerIterator<FFieldSystemCommand,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_res8);
          }
          if (pFVar9 == pFVar12) break;
          UPhysicsFieldComponent::RemovePersistentCommand
                    ((pUVar6->PhysicsField).field0_0x0.DebugPtr,pFVar9,true);
          pFVar9 = pFVar9 + 1;
        }
      }
      if (this->bIsChaosField != false) {
        iVar7 = (this->WorldCPUPersistentFields).ArrayNum;
        pFVar9 = (FFieldSystemCommand *)(this->WorldCPUPersistentFields).AllocatorInstance.Data;
        pFVar12 = pFVar9 + iVar7;
        while( true ) {
          if ((this->WorldCPUPersistentFields).ArrayNum != iVar7) {
            `TCheckedPointerIterator<FFieldSystemCommand,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_res8);
          }
          if (pFVar9 == pFVar12) break;
          UPhysicsFieldComponent::RemovePersistentCommand
                    ((pUVar6->PhysicsField).field0_0x0.DebugPtr,pFVar9,false);
          pFVar9 = pFVar9 + 1;
        }
      }
    }
    piVar1 = &(this->WorldGPUPersistentFields).ArrayMax;
    pFVar9 = (FFieldSystemCommand *)(this->WorldGPUPersistentFields).AllocatorInstance.Data;
    iVar7 = (this->WorldGPUPersistentFields).ArrayNum;
    if ((this->WorldGPUPersistentFields).ArrayMax < 0) {
      DestructItems<FFieldSystemCommand,int>(pFVar9,iVar7);
      (this->WorldGPUPersistentFields).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (200,8,0,&(this->WorldGPUPersistentFields).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FFieldSystemCommand,int>(pFVar9,iVar7);
      (this->WorldGPUPersistentFields).ArrayNum = 0;
    }
    pFVar9 = (FFieldSystemCommand *)(this->WorldCPUPersistentFields).AllocatorInstance.Data;
    piVar1 = &(this->WorldCPUPersistentFields).ArrayMax;
    iVar7 = (this->WorldCPUPersistentFields).ArrayNum;
    if (-1 < (this->WorldCPUPersistentFields).ArrayMax) {
      DestructItems<FFieldSystemCommand,int>(pFVar9,iVar7);
      (this->WorldCPUPersistentFields).ArrayNum = 0;
      return;
    }
    DestructItems<FFieldSystemCommand,int>(pFVar9,iVar7);
    (this->WorldCPUPersistentFields).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (200,8,0,&(this->WorldCPUPersistentFields).AllocatorInstance,0,piVar1);
    }
  }
  return;
}

// CreateSceneProxy @ 14632e7e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
UFieldSystemComponent::CreateSceneProxy(UFieldSystemComponent *this)

{
  FPrimitiveSceneProxy *this_00;
  
  if (4 < (byte)FSC_Log._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&FSC_Log);
  }
  this_00 = ::operator_new(0x280);
  if (this_00 != (FPrimitiveSceneProxy *)0x0) {
    FPrimitiveSceneProxy::FPrimitiveSceneProxy(this_00,(UPrimitiveComponent *)this,(FName)0x0);
    this_00->_padding_ = (longlong)&___7FFieldSystemSceneProxy__6B_;
    return this_00;
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// DispatchFieldCommand @ 14632e8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UFieldSystemComponent::DispatchFieldCommand
          (UFieldSystemComponent *this,FFieldSystemCommand *param_1,bool param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  UWorld *pUVar7;
  longlong lVar8;
  ForAnyElementType FVar9;
  TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *pTVar10;
  undefined1 auStack_1b8 [32];
  undefined1 *local_198;
  FScriptContainerElement *local_190;
  longlong local_188;
  longlong local_180;
  undefined8 local_178;
  undefined1 local_168 [8];
  FName local_160;
  TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> local_158;
  FName local_148;
  FString local_140;
  FFieldSystemCommand *local_130;
  undefined1 local_128;
  TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *local_120;
  undefined8 local_118;
  undefined1 local_108 [192];
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  bVar5 = false;
  local_160.ComparisonIndex.Value = 0;
  cVar4 = (**(code **)(*(longlong *)this + 0x3c8))();
  if ((cVar4 != '\0') && ((param_1->RootNode).Ptr != (FFieldNodeBase *)0x0)) {
    if (*(longlong *)&this->field_0xa8 == 0) {
      FVar9.Data = (FScriptContainerElement *)L"";
    }
    else {
      local_148 = *(FName *)(*(longlong *)&this->field_0xa8 + 0x18);
      ::FName::ToString(&local_148,&local_140);
      bVar5 = true;
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_140.Data.ArrayNum != 0) {
        FVar9.Data = local_140.Data.AllocatorInstance.Data;
      }
    }
    ::FName::FName(&local_160,(wchar_t *)FVar9.Data);
    if ((bVar5) && (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    if (this->bIsChaosField != false) {
      GetPhysicsSolvers(this,&local_158);
      iVar6 = local_158.ArrayNum;
      pFVar2 = local_158.AllocatorInstance.Data + (longlong)iVar6 * 8;
      FVar9.Data = local_158.AllocatorInstance.Data;
      while( true ) {
        if (local_158.ArrayNum != iVar6) {
          local_168[0] = 0;
          `TCheckedPointerIterator<Chaos::FPhysicsSolverBase_*,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_168);
        }
        if (FVar9.Data == pFVar2) break;
        local_120 = &this->ChaosPersistentFields;
        local_118 = CONCAT44(local_160.Number,local_160.ComparisonIndex.Value);
        local_130 = param_1;
        local_128 = param_2;
        `UFieldSystemComponent::DispatchFieldCommand'::__l13::<lambda_1>::
        operator()<Chaos::FPBDRigidsSolver>(&local_130,*(FPBDRigidsSolver **)FVar9.Data);
        FVar9.Data = FVar9.Data + 8;
      }
      if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.AllocatorInstance.Data);
      }
    }
    if ((((this->bIsWorldField != false) || (this->bIsChaosField != false)) &&
        ((pUVar7 = *(UWorld **)&this->field_0xb0, pUVar7 != (UWorld *)0x0 ||
         (pUVar7 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
         pUVar7 != (UWorld *)0x0)))) &&
       ((pUVar7->PhysicsField).field0_0x0.DebugPtr != (UPhysicsFieldComponent *)0x0)) {
      FFieldSystemCommand::FFieldSystemCommand((FFieldSystemCommand *)local_108,param_1);
      local_108._20_4_ = local_160.Number;
      local_108._16_4_ = local_160.ComparisonIndex.Value;
      local_108._24_4_ = (undefined4)pUVar7->TimeSeconds;
      if (param_2) {
        if (this->bIsWorldField != false) {
          UPhysicsFieldComponent::AddTransientCommand
                    ((pUVar7->PhysicsField).field0_0x0.DebugPtr,(FFieldSystemCommand *)local_108,
                     true);
        }
        if (this->bIsChaosField != false) {
          UPhysicsFieldComponent::AddTransientCommand
                    ((pUVar7->PhysicsField).field0_0x0.DebugPtr,(FFieldSystemCommand *)local_108,
                     false);
        }
      }
      else {
        if (this->bIsWorldField != false) {
          pTVar10 = &this->WorldGPUPersistentFields;
          pFVar2 = (pTVar10->AllocatorInstance).Data;
          if ((pFVar2 <= (FScriptContainerElement *)local_108) &&
             (lVar8 = (longlong)(this->WorldGPUPersistentFields).ArrayMax,
             (FScriptContainerElement *)local_108 < pFVar2 + lVar8 * 200)) {
            local_180 = (longlong)(this->WorldGPUPersistentFields).ArrayNum;
            local_178 = 200;
            local_198 = local_108;
            local_190 = pFVar2;
            local_188 = lVar8;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          iVar6 = (this->WorldGPUPersistentFields).ArrayNum;
          piVar1 = &(this->WorldGPUPersistentFields).ArrayMax;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x8c8,&pTVar10->AllocatorInstance,piVar1);
          }
          (this->WorldGPUPersistentFields).ArrayNum = iVar6 + 1;
          FFieldSystemCommand::FFieldSystemCommand
                    ((FFieldSystemCommand *)
                     ((pTVar10->AllocatorInstance).Data + (longlong)iVar6 * 200),
                     (FFieldSystemCommand *)local_108);
          UPhysicsFieldComponent::AddPersistentCommand
                    ((pUVar7->PhysicsField).field0_0x0.DebugPtr,(FFieldSystemCommand *)local_108,
                     true);
        }
        if (this->bIsChaosField != false) {
          pTVar10 = &this->WorldCPUPersistentFields;
          pFVar2 = (pTVar10->AllocatorInstance).Data;
          if ((pFVar2 <= (FScriptContainerElement *)local_108) &&
             (lVar8 = (longlong)(this->WorldCPUPersistentFields).ArrayMax,
             (FScriptContainerElement *)local_108 < pFVar2 + lVar8 * 200)) {
            local_180 = (longlong)(this->WorldCPUPersistentFields).ArrayNum;
            local_178 = 200;
            local_198 = local_108;
            local_190 = pFVar2;
            local_188 = lVar8;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          iVar6 = (this->WorldCPUPersistentFields).ArrayNum;
          piVar1 = &(this->WorldCPUPersistentFields).ArrayMax;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x8c8,&pTVar10->AllocatorInstance,piVar1);
          }
          (this->WorldCPUPersistentFields).ArrayNum = iVar6 + 1;
          FFieldSystemCommand::FFieldSystemCommand
                    ((FFieldSystemCommand *)
                     ((pTVar10->AllocatorInstance).Data + (longlong)iVar6 * 200),
                     (FFieldSystemCommand *)local_108);
          UPhysicsFieldComponent::AddPersistentCommand
                    ((pUVar7->PhysicsField).field0_0x0.DebugPtr,(FFieldSystemCommand *)local_108,
                     false);
        }
      }
      local_48 = 0;
      if ((void *)local_108._184_8_ != (void *)0x0) {
        FMemory::Free((void *)local_108._184_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (local_108 + 0x78);
      if ((FFieldNodeBase *)local_108._8_8_ != (FFieldNodeBase *)0x0) {
        (**(code **)*(longlong *)local_108._8_8_)(local_108._8_8_,1);
      }
    }
  }
  return;
}

// GetPhysicsScenes @ 14632f210

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSet<FPhysScene_Chaos_*,DefaultKeyFuncs<FPhysScene_Chaos_*,0>,FDefaultSetAllocator> * __thiscall
UFieldSystemComponent::GetPhysicsScenes
          (UFieldSystemComponent *this,
          TSet<FPhysScene_Chaos_*,DefaultKeyFuncs<FPhysScene_Chaos_*,0>,FDefaultSetAllocator>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  AChaosSolverActor *pAVar6;
  UWorld *pUVar7;
  TSet<FPhysScene_Chaos_*,DefaultKeyFuncs<FPhysScene_Chaos_*,0>,FDefaultSetAllocator> *pTVar8;
  FPhysScene_Chaos **ppFVar9;
  FScriptContainerElement *this_00;
  FPhysScene_Chaos **ppFVar10;
  undefined1 local_res8 [8];
  FPhysScene_Chaos *local_res10;
  FPhysScene_Chaos *local_res18;
  FPhysScene_Chaos *local_res20;
  FPhysScene_Chaos *local_58;
  FPhysScene_Chaos *local_50;
  FPhysScene_Chaos *local_48 [3];
  
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  iVar2 = (this->SupportedSolvers).ArrayNum;
  if (iVar2 != 0) {
    this_00 = (this->SupportedSolvers).AllocatorInstance.Data;
    pFVar1 = this_00 + (longlong)iVar2 * 0x28;
    while( true ) {
      if ((this->SupportedSolvers).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TSoftObjectPtr<AChaosSolverActor>_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (this_00 == pFVar1) break;
      pAVar6 = TSoftObjectPtr<AChaosSolverActor>::Get((TSoftObjectPtr<AChaosSolverActor> *)this_00);
      if (pAVar6 != (AChaosSolverActor *)0x0) {
        pAVar6 = TSoftObjectPtr<AChaosSolverActor>::Get
                           ((TSoftObjectPtr<AChaosSolverActor> *)this_00);
        pTVar3 = (pAVar6->PhysScene).SharedReferenceCount.ReferenceController;
        local_58 = (pAVar6->PhysScene).Object;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        TSet<FPhysScene_Chaos_*,DefaultKeyFuncs<FPhysScene_Chaos_*,0>,FDefaultSetAllocator>::
        Emplace<FPhysScene_Chaos_*>(__return_storage_ptr__,&local_res10,(bool *)&local_58);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      }
      this_00 = this_00 + 0x28;
    }
    return __return_storage_ptr__;
  }
  if (*(AActor **)&this->field_0xa8 == (AActor *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8556466952699117629>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\FieldSystem\\Source\\FieldSystemEngine\\Private\\Field\\FieldSystemComponent.cpp"
                       ,0x3d,"GetOwner()");
    if (bVar5) {
code_r0x00014632f371:
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSet<FPhysScene_Chaos_*,DefaultKeyFuncs<FPhysScene_Chaos_*,0>,FDefaultSetAllocator>
                *)(*pcVar4)();
      return pTVar8;
    }
  }
  else {
    pUVar7 = AActor::GetWorld(*(AActor **)&this->field_0xa8);
    if (pUVar7 != (UWorld *)0x0) {
      pUVar7 = AActor::GetWorld(*(AActor **)&this->field_0xa8);
      ppFVar10 = local_48;
      ppFVar9 = &local_res20;
      local_48[0] = pUVar7->PhysicsScene;
      goto LAB_14632f3e9;
    }
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8556466952699117629>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\FieldSystem\\Source\\FieldSystemEngine\\Private\\Field\\FieldSystemComponent.cpp"
                       ,0x3d,"GetOwner()->GetWorld()");
    if (bVar5) goto code_r0x00014632f371;
  }
  if ((GWorld.World == (UWorld *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GWorld",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\FieldSystem\\Source\\FieldSystemEngine\\Private\\Field\\FieldSystemComponent.cpp"
                         ,0x43,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSet<FPhysScene_Chaos_*,DefaultKeyFuncs<FPhysScene_Chaos_*,0>,FDefaultSetAllocator> *)
             (*pcVar4)();
    return pTVar8;
  }
  ppFVar10 = &local_50;
  ppFVar9 = &local_res18;
  local_50 = (GWorld.World)->PhysicsScene;
LAB_14632f3e9:
  TSet<FPhysScene_Chaos_*,DefaultKeyFuncs<FPhysScene_Chaos_*,0>,FDefaultSetAllocator>::
  Emplace<FPhysScene_Chaos_*>(__return_storage_ptr__,ppFVar9,(bool *)ppFVar10);
  return __return_storage_ptr__;
}

// GetPhysicsSolvers @ 14632f410

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> * __thiscall
UFieldSystemComponent::GetPhysicsSolvers
          (UFieldSystemComponent *this,
          TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  AChaosSolverActor *pAVar7;
  TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> *pTVar8;
  UWorld *pUVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FPBDRigidsSolver *local_78;
  FPBDRigidsSolver *local_70;
  longlong local_68;
  TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> local_60;
  ForAnyElementType local_50;
  undefined8 local_48;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar2 = (this->SupportedSolvers).ArrayNum;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = 0;
  if (0 < iVar2) {
    pFVar12 = (this->SupportedSolvers).AllocatorInstance.Data;
    pFVar1 = pFVar12 + (longlong)iVar2 * 0x28;
    while( true ) {
      if ((this->SupportedSolvers).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSoftObjectPtr<AChaosSolverActor>_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (pFVar12 == pFVar1) break;
      pAVar7 = TSoftObjectPtr<AChaosSolverActor>::Get((TSoftObjectPtr<AChaosSolverActor> *)pFVar12);
      if (pAVar7 != (AChaosSolverActor *)0x0) {
        local_70 = (pAVar7->RigidSolverProxy).Solver;
        if (((local_50.Data <= (FScriptContainerElement *)&local_70) &&
            ((FScriptContainerElement *)&local_70 < local_50.Data + (longlong)local_48._4_4_ * 8))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar8;
        }
        iVar5 = (int)local_48;
        if ((int)local_48 == local_48._4_4_) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_50,(int *)((longlong)&local_48 + 4));
        }
        local_48 = CONCAT44(local_48._4_4_,iVar5 + 1);
        *(FPBDRigidsSolver **)(local_50.Data + (longlong)iVar5 * 8) = local_70;
      }
      pFVar12 = pFVar12 + 0x28;
    }
  }
  pUVar9 = *(UWorld **)&this->field_0xb0;
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  if (((pUVar9 != (UWorld *)0x0) ||
      (pUVar9 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar9 != (UWorld *)0x0
      )) && (pUVar9->PhysicsScene != (FPhysScene_Chaos *)0x0)) {
    local_68 = pUVar9->PhysicsScene->_padding_;
    if (((local_60.AllocatorInstance.Data <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         local_60.AllocatorInstance.Data + (longlong)local_60.ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar8;
    }
    if (local_60.ArrayNum == local_60.ArrayMax) {
      local_60.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_60.AllocatorInstance,&local_60.ArrayMax);
    }
    lVar11 = (longlong)local_60.ArrayNum;
    local_60.ArrayNum = local_60.ArrayNum + 1;
    *(longlong *)(local_60.AllocatorInstance.Data + lVar11 * 8) = local_68;
    FChaosSolversModule::GetSolversMutable(this->ChaosModule,(UObject *)pUVar9,&local_60);
  }
  iVar2 = local_60.ArrayNum;
  iVar5 = (int)local_48;
  pFVar1 = local_60.AllocatorInstance.Data + (longlong)local_60.ArrayNum * 8;
  FVar13.Data = local_60.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_60.ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<Chaos::FPhysicsSolverBase_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (FVar13.Data == pFVar1) {
        if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.AllocatorInstance.Data);
        }
        if (local_50.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data);
        }
        return __return_storage_ptr__;
      }
      local_78 = *(FPBDRigidsSolver **)FVar13.Data;
      if (iVar5 == 0) break;
      FVar10.Data = local_50.Data;
      if (local_50.Data == local_50.Data + (longlong)(int)local_48 * 8) goto LAB_14632f72e;
      do {
        if (*(FPBDRigidsSolver **)FVar10.Data == local_78) goto LAB_14632f695;
        FVar10.Data = FVar10.Data + 8;
      } while (FVar10.Data != local_50.Data + (longlong)(int)local_48 * 8);
      FVar13.Data = FVar13.Data + 8;
    }
LAB_14632f695:
    pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar12 <= (FScriptContainerElement *)&local_78) &&
        ((FScriptContainerElement *)&local_78 <
         pFVar12 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar8;
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == __return_storage_ptr__->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    *(FPBDRigidsSolver **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
         local_78;
LAB_14632f72e:
    FVar13.Data = FVar13.Data + 8;
  } while( true );
}

// GetPrivateStaticClass @ 14632fd70

UClass * __cdecl UFieldSystemComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFieldSystemComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"FieldSystemComponent",
               &Z_Registration_Info_UClass_UFieldSystemComponent.InnerSingleton,
               StaticRegisterNativesUFieldSystemComponent,0x620,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UFieldSystemComponent>,
               InternalVTableHelperCtorCaller<UFieldSystemComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFieldSystemComponent.InnerSingleton;
}

// HasAnySockets @ 146330bc0

bool __thiscall UFieldSystemComponent::HasAnySockets(UFieldSystemComponent *this)

{
  return false;
}

// HasValidPhysicsState @ 146330bd0

bool __thiscall UFieldSystemComponent::HasValidPhysicsState(UFieldSystemComponent *this)

{
  return this->bHasPhysicsState;
}

// OnCreatePhysicsState @ 146333410

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UFieldSystemComponent::OnCreatePhysicsState(UFieldSystemComponent *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  FChaosSolversModule *pFVar4;
  
  UActorComponent::OnCreatePhysicsState((UActorComponent *)this);
  if ((*(longlong *)&this->field_0xb0 == 0) &&
     (pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar3 == (UWorld *)0x0)
     ) {
    return;
  }
  pUVar3 = *(UWorld **)&this->field_0xb0;
  if (pUVar3 == (UWorld *)0x0) {
    pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  bVar2 = UWorld::IsGameWorld(pUVar3);
  if (bVar2) {
    pFVar4 = FChaosSolversModule::GetModule();
    this->ChaosModule = pFVar4;
    if ((pFVar4 == (FChaosSolversModule *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ChaosModule",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\FieldSystem\\Source\\FieldSystemEngine\\Private\\Field\\FieldSystemComponent.cpp"
                           ,0x7c,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this->bHasPhysicsState = true;
  }
  return;
}

// OnDestroyPhysicsState @ 1463334a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UFieldSystemComponent::OnDestroyPhysicsState(UFieldSystemComponent *this)

{
  UActorComponent::OnDestroyPhysicsState((UActorComponent *)this);
  ClearFieldCommands(this);
  this->ChaosModule = (FChaosSolversModule *)0x0;
  this->bHasPhysicsState = false;
  return;
}

// RemovePersistentFields @ 1463336a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UFieldSystemComponent::RemovePersistentFields(UFieldSystemComponent *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FPBDRigidsSolver *pFVar4;
  char cVar5;
  UWorld *pUVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FFieldSystemCommand *pFVar9;
  FScriptContainerElement *pFVar10;
  ForAnyElementType FVar11;
  FFieldSystemCommand *pFVar12;
  FScriptContainerElement *pFStackX_8;
  TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> TStack_38;
  
  cVar5 = (**(code **)(*(longlong *)this + 0x3c8))();
  if (cVar5 != '\0') {
    if (this->bIsChaosField != false) {
      GetPhysicsSolvers(this,&TStack_38);
      iVar7 = TStack_38.ArrayNum;
      pFVar2 = TStack_38.AllocatorInstance.Data + (longlong)iVar7 * 8;
      FVar11.Data = TStack_38.AllocatorInstance.Data;
      while( true ) {
        if (TStack_38.ArrayNum != iVar7) {
          `TCheckedPointerIterator<Chaos::FPhysicsSolverBase_*,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&pFStackX_8);
        }
        if (FVar11.Data == pFVar2) break;
        iVar3 = (this->ChaosPersistentFields).ArrayNum;
        pFVar8 = (this->ChaosPersistentFields).AllocatorInstance.Data;
        pFVar4 = *(FPBDRigidsSolver **)FVar11.Data;
        pFVar10 = pFVar8 + (longlong)iVar3 * 200;
        while( true ) {
          if ((this->ChaosPersistentFields).ArrayNum != iVar3) {
            `TCheckedPointerIterator<FFieldSystemCommand,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&pFStackX_8);
          }
          if (pFVar8 == pFVar10) break;
          pFStackX_8 = pFVar8;
          `UFieldSystemComponent::ClearFieldCommands'::__l17::<lambda_1>::
          operator()<Chaos::FPBDRigidsSolver>(&pFStackX_8,pFVar4);
          pFVar8 = pFVar8 + 200;
        }
        FVar11.Data = FVar11.Data + 8;
      }
      if (TStack_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_38.AllocatorInstance.Data);
      }
    }
    piVar1 = &(this->ChaosPersistentFields).ArrayMax;
    pFVar9 = (FFieldSystemCommand *)(this->ChaosPersistentFields).AllocatorInstance.Data;
    iVar7 = (this->ChaosPersistentFields).ArrayNum;
    if ((this->ChaosPersistentFields).ArrayMax < 0) {
      DestructItems<FFieldSystemCommand,int>(pFVar9,iVar7);
      (this->ChaosPersistentFields).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (200,8,0,&(this->ChaosPersistentFields).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FFieldSystemCommand,int>(pFVar9,iVar7);
      (this->ChaosPersistentFields).ArrayNum = 0;
    }
    if ((((this->bIsWorldField != false) || (this->bIsChaosField != false)) &&
        ((pUVar6 = *(UWorld **)&this->field_0xb0, pUVar6 != (UWorld *)0x0 ||
         (pUVar6 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
         pUVar6 != (UWorld *)0x0)))) &&
       ((pUVar6->PhysicsField).field0_0x0.DebugPtr != (UPhysicsFieldComponent *)0x0)) {
      if (this->bIsWorldField != false) {
        iVar7 = (this->WorldGPUPersistentFields).ArrayNum;
        pFVar9 = (FFieldSystemCommand *)(this->WorldGPUPersistentFields).AllocatorInstance.Data;
        pFVar12 = pFVar9 + iVar7;
        while( true ) {
          if ((this->WorldGPUPersistentFields).ArrayNum != iVar7) {
            `TCheckedPointerIterator<FFieldSystemCommand,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&pFStackX_8);
          }
          if (pFVar9 == pFVar12) break;
          UPhysicsFieldComponent::RemovePersistentCommand
                    ((pUVar6->PhysicsField).field0_0x0.DebugPtr,pFVar9,true);
          pFVar9 = pFVar9 + 1;
        }
      }
      if (this->bIsChaosField != false) {
        iVar7 = (this->WorldCPUPersistentFields).ArrayNum;
        pFVar9 = (FFieldSystemCommand *)(this->WorldCPUPersistentFields).AllocatorInstance.Data;
        pFVar12 = pFVar9 + iVar7;
        while( true ) {
          if ((this->WorldCPUPersistentFields).ArrayNum != iVar7) {
            `TCheckedPointerIterator<FFieldSystemCommand,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&pFStackX_8);
          }
          if (pFVar9 == pFVar12) break;
          UPhysicsFieldComponent::RemovePersistentCommand
                    ((pUVar6->PhysicsField).field0_0x0.DebugPtr,pFVar9,false);
          pFVar9 = pFVar9 + 1;
        }
      }
    }
    piVar1 = &(this->WorldGPUPersistentFields).ArrayMax;
    pFVar9 = (FFieldSystemCommand *)(this->WorldGPUPersistentFields).AllocatorInstance.Data;
    iVar7 = (this->WorldGPUPersistentFields).ArrayNum;
    if ((this->WorldGPUPersistentFields).ArrayMax < 0) {
      DestructItems<FFieldSystemCommand,int>(pFVar9,iVar7);
      (this->WorldGPUPersistentFields).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (200,8,0,&(this->WorldGPUPersistentFields).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FFieldSystemCommand,int>(pFVar9,iVar7);
      (this->WorldGPUPersistentFields).ArrayNum = 0;
    }
    pFVar9 = (FFieldSystemCommand *)(this->WorldCPUPersistentFields).AllocatorInstance.Data;
    piVar1 = &(this->WorldCPUPersistentFields).ArrayMax;
    iVar7 = (this->WorldCPUPersistentFields).ArrayNum;
    if (-1 < (this->WorldCPUPersistentFields).ArrayMax) {
      DestructItems<FFieldSystemCommand,int>(pFVar9,iVar7);
      (this->WorldCPUPersistentFields).ArrayNum = 0;
      return;
    }
    DestructItems<FFieldSystemCommand,int>(pFVar9,iVar7);
    (this->WorldCPUPersistentFields).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (200,8,0,&(this->WorldCPUPersistentFields).AllocatorInstance,0,piVar1);
    }
  }
  return;
}

// ResetFieldSystem @ 146333760

void __thiscall UFieldSystemComponent::ResetFieldSystem(UFieldSystemComponent *this)

{
  int *piVar1;
  int iVar2;
  FFieldSystemCommand *pFVar3;
  
  if ((this->FieldSystem).field0_0x0.DebugPtr != (UFieldSystem *)0x0) {
    piVar1 = &(this->SetupConstructionFields).ArrayMax;
    pFVar3 = (FFieldSystemCommand *)(this->SetupConstructionFields).AllocatorInstance.Data;
    iVar2 = (this->SetupConstructionFields).ArrayNum;
    if ((this->SetupConstructionFields).ArrayMax < 0) {
      DestructItems<FFieldSystemCommand,int>(pFVar3,iVar2);
      (this->SetupConstructionFields).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (200,8,0,&(this->SetupConstructionFields).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FFieldSystemCommand,int>(pFVar3,iVar2);
      (this->SetupConstructionFields).ArrayNum = 0;
    }
  }
  FFieldObjectCommands::ResetFieldCommands(&this->ConstructionCommands);
  FFieldObjectCommands::ResetFieldCommands(&this->BufferCommands);
  return;
}

// ShouldCreatePhysicsState @ 146334090

bool __thiscall UFieldSystemComponent::ShouldCreatePhysicsState(UFieldSystemComponent *this)

{
  return true;
}

// StaticRegisterNativesUFieldSystemComponent @ 146334180

void __cdecl UFieldSystemComponent::StaticRegisterNativesUFieldSystemComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xb;
  local_18.DataPtr = Z_Construct_UClass_UFieldSystemComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddFieldCommand @ 146334900

void __cdecl
UFieldSystemComponent::execAddFieldCommand(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  byte local_res10 [16];
  int local_res20 [2];
  UFieldNodeBase *local_28;
  UFieldSystemMetaData *local_20;
  
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar2 = local_res20[0] != 0;
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_20 = (UFieldSystemMetaData *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
  }
  local_28 = (UFieldNodeBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddFieldCommand((UFieldSystemComponent *)param_1,bVar2,(uint)local_res10[0],local_20,local_28);
  return;
}

// execAddPersistentField @ 146334a60

void __cdecl
UFieldSystemComponent::execAddPersistentField(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  byte local_res10 [16];
  int local_res20 [2];
  UFieldNodeBase *local_28;
  UFieldSystemMetaData *local_20;
  
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar2 = local_res20[0] != 0;
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_20 = (UFieldSystemMetaData *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
  }
  local_28 = (UFieldNodeBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  BuildFieldCommand((UFieldSystemComponent *)param_1,bVar2,(uint)local_res10[0],local_20,local_28,
                    false);
  return;
}

// execApplyLinearForce @ 146334bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UFieldSystemComponent::execApplyLinearForce(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  char cVar3;
  FFieldNodeBase *pFVar4;
  bool bVar5;
  undefined1 auStack_158 [32];
  int local_138;
  undefined4 local_134;
  FName local_130;
  longlong lStack_128;
  FName local_120;
  undefined1 local_118 [192];
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_138 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  bVar5 = local_138 != 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_130,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_130);
  }
  local_134 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_134,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_134);
  }
  uVar2 = local_134;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (bVar5) {
    cVar3 = (**(code **)(*(longlong *)param_1 + 0x3c8))(param_1);
    if (cVar3 != '\0') {
      pFVar4 = ::operator_new(0x30);
      if (pFVar4 == (FFieldNodeBase *)0x0) {
        pFVar4 = (FFieldNodeBase *)0x0;
      }
      else {
        (pFVar4->Name).ComparisonIndex = 0;
        (pFVar4->Name).Number = 0;
        pFVar4->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
        ::FName::FName(&pFVar4->Name,"");
        *(undefined4 *)&pFVar4[1]._padding_ = uVar2;
        pFVar4[1].Name = local_130;
        pFVar4[2]._padding_ = lStack_128;
        pFVar4->_padding_ = (longlong)&___7FUniformVector__6B_;
        pFVar4[2].Name = local_120;
      }
      FFieldObjectCommands::CreateFieldCommand
                ((FFieldSystemCommand *)local_118,Field_LinearForce,pFVar4);
      DispatchFieldCommand((UFieldSystemComponent *)param_1,(FFieldSystemCommand *)local_118,true);
      local_58 = 0;
      if ((void *)local_118._184_8_ != (void *)0x0) {
        FMemory::Free((void *)local_118._184_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (local_118 + 0x78);
      if ((FFieldNodeBase *)local_118._8_8_ != (FFieldNodeBase *)0x0) {
        (**(code **)*(longlong *)local_118._8_8_)(local_118._8_8_,1);
      }
    }
  }
  return;
}

// execApplyPhysicsField @ 146334e00

void __cdecl
UFieldSystemComponent::execApplyPhysicsField(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  byte local_res10 [16];
  int local_res20 [2];
  UFieldNodeBase *local_28;
  UFieldSystemMetaData *local_20;
  
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar2 = local_res20[0] != 0;
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_20 = (UFieldSystemMetaData *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
  }
  local_28 = (UFieldNodeBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  BuildFieldCommand((UFieldSystemComponent *)param_1,bVar2,(uint)local_res10[0],local_20,local_28,
                    true);
  return;
}

// execApplyRadialForce @ 146334f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UFieldSystemComponent::execApplyRadialForce(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  char cVar3;
  FFieldNodeBase *pFVar4;
  bool bVar5;
  undefined1 auStack_158 [32];
  int local_138;
  undefined4 local_134;
  FName local_130;
  longlong lStack_128;
  FName local_120;
  undefined1 local_118 [192];
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_138 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  bVar5 = local_138 != 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_130,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_130);
  }
  local_134 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_134,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_134);
  }
  uVar2 = local_134;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (bVar5) {
    cVar3 = (**(code **)(*(longlong *)param_1 + 0x3c8))(param_1);
    if (cVar3 != '\0') {
      pFVar4 = ::operator_new(0x30);
      if (pFVar4 == (FFieldNodeBase *)0x0) {
        pFVar4 = (FFieldNodeBase *)0x0;
      }
      else {
        (pFVar4->Name).ComparisonIndex = 0;
        (pFVar4->Name).Number = 0;
        pFVar4->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
        ::FName::FName(&pFVar4->Name,"");
        *(undefined4 *)&pFVar4[1]._padding_ = uVar2;
        pFVar4[1].Name = local_130;
        pFVar4[2]._padding_ = lStack_128;
        pFVar4->_padding_ = (longlong)&___7FRadialVector__6B_;
        pFVar4[2].Name = local_120;
      }
      FFieldObjectCommands::CreateFieldCommand
                ((FFieldSystemCommand *)local_118,Field_LinearForce,pFVar4);
      DispatchFieldCommand((UFieldSystemComponent *)param_1,(FFieldSystemCommand *)local_118,true);
      local_58 = 0;
      if ((void *)local_118._184_8_ != (void *)0x0) {
        FMemory::Free((void *)local_118._184_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (local_118 + 0x78);
      if ((FFieldNodeBase *)local_118._8_8_ != (FFieldNodeBase *)0x0) {
        (**(code **)*(longlong *)local_118._8_8_)(local_118._8_8_,1);
      }
    }
  }
  return;
}

// execApplyRadialVectorFalloffForce @ 1463351a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UFieldSystemComponent::execApplyRadialVectorFalloffForce
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  undefined4 uVar3;
  char cVar4;
  FSumVector *pFVar5;
  FSumVector *pFVar6;
  FSumVector *pFVar7;
  FSumVector *pFVar8;
  bool bVar9;
  undefined1 auStackY_198 [32];
  int local_168;
  float local_164;
  undefined4 local_160 [2];
  TUniquePtr<FFieldNode<UE::Math::TVector<double>_>,TDefaultDelete<FFieldNode<UE::Math::TVector<double>_>_>_>
  local_158;
  FFieldNode<UE::Math::TVector<double>_> *pFStack_150;
  FFieldNode<UE::Math::TVector<double>_> *local_148;
  undefined1 local_138 [192];
  undefined4 local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pFVar7 = (FSumVector *)0x0;
  local_168 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  bVar9 = local_168 != 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  local_160[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_160,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_160);
  }
  local_164 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_164,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_164);
  }
  uVar3 = local_160[0];
  fVar2 = local_164;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((bVar9) && (cVar4 = (**(code **)(*(longlong *)param_1 + 0x3c8))(param_1), cVar4 != '\0')) {
    pFVar5 = ::operator_new(0x48);
    pFVar8 = pFVar7;
    if (pFVar5 != (FSumVector *)0x0) {
      pFVar5->_padding_ = 0;
      pFVar5->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
      ::FName::FName((FName *)&pFVar5->_padding_,"");
      pFVar5->Magnitude = fVar2;
      (pFVar5->VectorLeft).Ptr = local_158.Ptr;
      *(FFieldNode<UE::Math::TVector<double>_> **)&pFVar5->Operation = pFStack_150;
      pFVar5->_padding_ = (longlong)&___7FRadialFalloff__6B_;
      *(undefined4 *)&(pFVar5->VectorRight).Ptr = uVar3;
      *(undefined4 *)&pFVar5->field_0x14 = 0;
      (pFVar5->Scalar).Ptr = (FFieldNode<float> *)&DAT_3f800000;
      pFVar5[1]._padding_ = (longlong)local_148;
      *(undefined4 *)&pFVar5[1]._padding_ = 1;
      pFVar8 = pFVar5;
    }
    pFVar6 = ::operator_new(0x30);
    pFVar5 = pFVar7;
    if (pFVar6 != (FSumVector *)0x0) {
      pFVar6->_padding_ = 0;
      pFVar6->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
      ::FName::FName((FName *)&pFVar6->_padding_,"");
      pFVar6->Magnitude = 1.0;
      (pFVar6->Scalar).Ptr = (FFieldNode<float> *)local_158.Ptr;
      (pFVar6->VectorRight).Ptr = pFStack_150;
      pFVar6->_padding_ = (longlong)&___7FRadialVector__6B_;
      (pFVar6->VectorLeft).Ptr = local_148;
      pFVar5 = pFVar6;
    }
    pFVar6 = ::operator_new(0x38);
    if (pFVar6 != (FSumVector *)0x0) {
      pFVar7 = FSumVector::FSumVector
                         (pFVar6,__real_3f800000,(FFieldNode<float> *)pFVar8,
                          (FFieldNode<UE::Math::TVector<double>_> *)pFVar5,
                          (FFieldNode<UE::Math::TVector<double>_> *)0x0,Field_Multiply);
    }
    FFieldObjectCommands::CreateFieldCommand
              ((FFieldSystemCommand *)local_138,Field_LinearForce,(FFieldNodeBase *)pFVar7);
    DispatchFieldCommand((UFieldSystemComponent *)param_1,(FFieldSystemCommand *)local_138,true);
    local_78 = 0;
    if ((void *)local_138._184_8_ != (void *)0x0) {
      FMemory::Free((void *)local_138._184_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (local_138 + 0x78);
    if ((FFieldNodeBase *)local_138._8_8_ != (FFieldNodeBase *)0x0) {
      (**(code **)*(longlong *)local_138._8_8_)(local_138._8_8_,1);
    }
  }
  return;
}

// execApplyStayDynamicField @ 1463354b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UFieldSystemComponent::execApplyStayDynamicField(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  char cVar3;
  FFieldNodeBase *pFVar4;
  bool bVar5;
  undefined1 auStack_158 [32];
  int local_138;
  undefined4 local_134;
  FName local_130;
  longlong lStack_128;
  FName local_120;
  undefined1 local_118 [192];
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_138 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  bVar5 = local_138 != 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_130,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_130);
  }
  local_134 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_134,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_134);
  }
  uVar2 = local_134;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (bVar5) {
    cVar3 = (**(code **)(*(longlong *)param_1 + 0x3c8))(param_1);
    if (cVar3 != '\0') {
      pFVar4 = ::operator_new(0x40);
      if (pFVar4 == (FFieldNodeBase *)0x0) {
        pFVar4 = (FFieldNodeBase *)0x0;
      }
      else {
        (pFVar4->Name).ComparisonIndex = 0;
        (pFVar4->Name).Number = 0;
        pFVar4->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
        ::FName::FName(&pFVar4->Name,"");
        *(undefined4 *)&pFVar4[1]._padding_ = uVar2;
        pFVar4[1].Name = local_130;
        pFVar4[2]._padding_ = lStack_128;
        pFVar4->_padding_ = (longlong)&___7FRadialIntMask__6B_;
        pFVar4[2].Name = local_120;
        *(undefined4 *)&pFVar4[3]._padding_ = 4;
        *(undefined4 *)((longlong)&pFVar4[3]._padding_ + 4) = 2;
        pFVar4[3].Name.ComparisonIndex.Value = 1;
      }
      FFieldObjectCommands::CreateFieldCommand
                ((FFieldSystemCommand *)local_118,Field_DynamicState,pFVar4);
      DispatchFieldCommand((UFieldSystemComponent *)param_1,(FFieldSystemCommand *)local_118,true);
      local_58 = 0;
      if ((void *)local_118._184_8_ != (void *)0x0) {
        FMemory::Free((void *)local_118._184_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (local_118 + 0x78);
      if ((FFieldNodeBase *)local_118._8_8_ != (FFieldNodeBase *)0x0) {
        (**(code **)*(longlong *)local_118._8_8_)(local_118._8_8_,1);
      }
    }
  }
  return;
}

// execApplyStrainField @ 146335700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UFieldSystemComponent::execApplyStrainField(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  FFieldNodeBase *pFVar5;
  FFieldNodeBase *pFVar6;
  bool bVar7;
  undefined1 auStack_188 [32];
  int local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  FName local_158;
  longlong lStack_150;
  FName local_148;
  undefined1 local_138 [192];
  undefined4 local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_188;
  pFVar6 = (FFieldNodeBase *)0x0;
  local_168 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  bVar7 = local_168 != 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  local_160 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_160,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_160);
  }
  local_164 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_164,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_164);
  }
  local_15c = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_15c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_15c);
  }
  uVar3 = local_160;
  uVar2 = local_164;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((bVar7) && (cVar4 = (**(code **)(*(longlong *)param_1 + 0x3c8))(param_1), cVar4 != '\0')) {
    pFVar5 = ::operator_new(0x48);
    if (pFVar5 != (FFieldNodeBase *)0x0) {
      (pFVar5->Name).ComparisonIndex = 0;
      (pFVar5->Name).Number = 0;
      pFVar5->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
      ::FName::FName(&pFVar5->Name,"");
      *(undefined4 *)&pFVar5[1]._padding_ = uVar2;
      pFVar5[2].Name = local_158;
      pFVar5[3]._padding_ = lStack_150;
      pFVar5->_padding_ = (longlong)&___7FRadialFalloff__6B_;
      *(undefined4 *)&pFVar5[2]._padding_ = uVar3;
      *(undefined4 *)((longlong)&pFVar5[1]._padding_ + 4) = 0;
      pFVar5[1].Name.ComparisonIndex = 0x3f800000;
      pFVar5[1].Name.Number = 0;
      pFVar5[3].Name = local_148;
      *(undefined4 *)&pFVar5[4]._padding_ = 1;
      pFVar6 = pFVar5;
    }
    FFieldObjectCommands::CreateFieldCommand
              ((FFieldSystemCommand *)local_138,Field_ExternalClusterStrain,pFVar6);
    DispatchFieldCommand((UFieldSystemComponent *)param_1,(FFieldSystemCommand *)local_138,true);
    local_78 = 0;
    if ((void *)local_138._184_8_ != (void *)0x0) {
      FMemory::Free((void *)local_138._184_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (local_138 + 0x78);
    if ((FFieldNodeBase *)local_138._8_8_ != (FFieldNodeBase *)0x0) {
      (**(code **)*(longlong *)local_138._8_8_)(local_138._8_8_,1);
    }
  }
  return;
}

// execApplyUniformVectorFalloffForce @ 1463359d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UFieldSystemComponent::execApplyUniformVectorFalloffForce
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  undefined4 uVar3;
  char cVar4;
  FSumVector *pFVar5;
  FSumVector *pFVar6;
  FSumVector *pFVar7;
  FSumVector *pFVar8;
  bool bVar9;
  undefined1 auStackY_1d8 [32];
  int local_1a8;
  float local_1a4;
  undefined4 local_1a0 [2];
  TUniquePtr<FFieldNode<float>,TDefaultDelete<FFieldNode<float>_>_> local_198;
  FFieldNode<UE::Math::TVector<double>_> *pFStack_190;
  FFieldNode<UE::Math::TVector<double>_> *local_188;
  TUniquePtr<FFieldNode<UE::Math::TVector<double>_>,TDefaultDelete<FFieldNode<UE::Math::TVector<double>_>_>_>
  local_180;
  undefined8 uStack_178;
  longlong local_170;
  undefined1 local_168 [192];
  undefined4 local_a8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pFVar7 = (FSumVector *)0x0;
  local_1a8 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  bVar9 = local_1a8 != 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_180,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_180);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
  }
  local_1a0[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1a0);
  }
  local_1a4 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a4);
  }
  uVar3 = local_1a0[0];
  fVar2 = local_1a4;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((bVar9) && (cVar4 = (**(code **)(*(longlong *)param_1 + 0x3c8))(param_1), cVar4 != '\0')) {
    pFVar5 = ::operator_new(0x48);
    pFVar8 = pFVar7;
    if (pFVar5 != (FSumVector *)0x0) {
      pFVar5->_padding_ = 0;
      pFVar5->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
      ::FName::FName((FName *)&pFVar5->_padding_,"");
      pFVar5->Magnitude = fVar2;
      (pFVar5->VectorLeft).Ptr = local_180.Ptr;
      *(undefined8 *)&pFVar5->Operation = uStack_178;
      pFVar5->_padding_ = (longlong)&___7FRadialFalloff__6B_;
      *(undefined4 *)&(pFVar5->VectorRight).Ptr = uVar3;
      *(undefined4 *)&pFVar5->field_0x14 = 0;
      (pFVar5->Scalar).Ptr = (FFieldNode<float> *)&DAT_3f800000;
      pFVar5[1]._padding_ = local_170;
      *(undefined4 *)&pFVar5[1]._padding_ = 1;
      pFVar8 = pFVar5;
    }
    pFVar6 = ::operator_new(0x30);
    pFVar5 = pFVar7;
    if (pFVar6 != (FSumVector *)0x0) {
      pFVar6->_padding_ = 0;
      pFVar6->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
      ::FName::FName((FName *)&pFVar6->_padding_,"");
      pFVar6->Magnitude = 1.0;
      (pFVar6->Scalar).Ptr = local_198.Ptr;
      (pFVar6->VectorRight).Ptr = pFStack_190;
      pFVar6->_padding_ = (longlong)&___7FUniformVector__6B_;
      (pFVar6->VectorLeft).Ptr = local_188;
      pFVar5 = pFVar6;
    }
    pFVar6 = ::operator_new(0x38);
    if (pFVar6 != (FSumVector *)0x0) {
      pFVar7 = FSumVector::FSumVector
                         (pFVar6,__real_3f800000,(FFieldNode<float> *)pFVar8,
                          (FFieldNode<UE::Math::TVector<double>_> *)pFVar5,
                          (FFieldNode<UE::Math::TVector<double>_> *)0x0,Field_Multiply);
    }
    FFieldObjectCommands::CreateFieldCommand
              ((FFieldSystemCommand *)local_168,Field_LinearForce,(FFieldNodeBase *)pFVar7);
    DispatchFieldCommand((UFieldSystemComponent *)param_1,(FFieldSystemCommand *)local_168,true);
    local_a8 = 0;
    if ((void *)local_168._184_8_ != (void *)0x0) {
      FMemory::Free((void *)local_168._184_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (local_168 + 0x78);
    if ((FFieldNodeBase *)local_168._8_8_ != (FFieldNodeBase *)0x0) {
      (**(code **)*(longlong *)local_168._8_8_)(local_168._8_8_,1);
    }
  }
  return;
}

// execRemovePersistentFields @ 146335d40

void __cdecl
UFieldSystemComponent::execRemovePersistentFields(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ClearFieldCommands((UFieldSystemComponent *)param_1);
  return;
}

// execResetFieldSystem @ 146335d60

void __cdecl
UFieldSystemComponent::execResetFieldSystem(UObject *param_1,FFrame *param_2,void *param_3)

{
  FFieldSystemCommand *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x21].field_0x20 != 0) {
    pFVar1 = *(FFieldSystemCommand **)&param_1[0x25].field_0x10;
    if (*(int *)&param_1[0x25].field_0x1c < 0) {
      DestructItems<FFieldSystemCommand,int>(pFVar1,*(int *)&param_1[0x25].field_0x18);
      *(undefined4 *)&param_1[0x25].field_0x18 = 0;
      if (*(int *)&param_1[0x25].field_0x1c != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (200,8,0,(ForAnyElementType *)&param_1[0x25].field_0x10,0,
                   (int *)&param_1[0x25].field_0x1c);
      }
    }
    else {
      DestructItems<FFieldSystemCommand,int>(pFVar1,*(int *)&param_1[0x25].field_0x18);
      *(undefined4 *)&param_1[0x25].field_0x18 = 0;
    }
  }
  FFieldObjectCommands::ResetFieldCommands((FFieldObjectCommands *)&param_1[0x22].field_0x18);
  FFieldObjectCommands::ResetFieldCommands((FFieldObjectCommands *)&param_1[0x23].field_0x20);
  return;
}

