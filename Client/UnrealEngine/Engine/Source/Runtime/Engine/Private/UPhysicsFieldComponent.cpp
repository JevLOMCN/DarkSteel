// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 21

// StaticClass @ 148334940

UClass * __cdecl UPhysicsFieldComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsFieldComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsFieldComponent",
               &Z_Registration_Info_UClass_UPhysicsFieldComponent.InnerSingleton,
               StaticRegisterNativesUPhysicsFieldComponent,0x330,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPhysicsFieldComponent>,
               InternalVTableHelperCtorCaller<UPhysicsFieldComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsFieldComponent.InnerSingleton;
}

// UPhysicsFieldComponent @ 14834c570

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPhysicsFieldComponent * __thiscall
UPhysicsFieldComponent::UPhysicsFieldComponent(UPhysicsFieldComponent *this,FVTableHelper *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  this->TransientCommands[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->TransientCommands[0].ArrayNum = 0;
  this->TransientCommands[0].ArrayMax = 0;
  this->TransientCommands[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->TransientCommands[1].ArrayNum = 0;
  this->TransientCommands[1].ArrayMax = 0;
  this->TransientCommands[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->TransientCommands[2].ArrayNum = 0;
  this->TransientCommands[2].ArrayMax = 0;
  this->TransientCommands[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->TransientCommands[3].ArrayNum = 0;
  this->TransientCommands[3].ArrayMax = 0;
  this->PersistentCommands[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PersistentCommands[0].ArrayNum = 0;
  this->PersistentCommands[0].ArrayMax = 0;
  this->PersistentCommands[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PersistentCommands[1].ArrayNum = 0;
  this->PersistentCommands[1].ArrayMax = 0;
  this->PersistentCommands[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PersistentCommands[2].ArrayNum = 0;
  this->PersistentCommands[2].ArrayMax = 0;
  this->PersistentCommands[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PersistentCommands[3].ArrayNum = 0;
  this->PersistentCommands[3].ArrayMax = 0;
  this->ConstructionCommands[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ConstructionCommands[0].ArrayNum = 0;
  this->ConstructionCommands[0].ArrayMax = 0;
  this->ConstructionCommands[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ConstructionCommands[1].ArrayNum = 0;
  this->ConstructionCommands[1].ArrayMax = 0;
  this->ConstructionCommands[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ConstructionCommands[2].ArrayNum = 0;
  this->ConstructionCommands[2].ArrayMax = 0;
  this->ConstructionCommands[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ConstructionCommands[3].ArrayNum = 0;
  this->ConstructionCommands[3].ArrayMax = 0;
  this->FieldInstance = (FPhysicsFieldInstance *)0x0;
  this->DebugInstance = (FPhysicsFieldInstance *)0x0;
  this->FieldProxy = (FPhysicsFieldSceneProxy *)0x0;
  return this;
}

// UPhysicsFieldComponent @ 14834c670

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPhysicsFieldComponent * __thiscall
UPhysicsFieldComponent::UPhysicsFieldComponent(UPhysicsFieldComponent *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  USceneComponent::USceneComponent((USceneComponent *)this,pFVar1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  this->TransientCommands[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->TransientCommands[0].ArrayNum = 0;
  this->TransientCommands[0].ArrayMax = 0;
  this->TransientCommands[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->TransientCommands[1].ArrayNum = 0;
  this->TransientCommands[1].ArrayMax = 0;
  this->TransientCommands[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->TransientCommands[2].ArrayNum = 0;
  this->TransientCommands[2].ArrayMax = 0;
  this->TransientCommands[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->TransientCommands[3].ArrayNum = 0;
  this->TransientCommands[3].ArrayMax = 0;
  this->PersistentCommands[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PersistentCommands[0].ArrayNum = 0;
  this->PersistentCommands[0].ArrayMax = 0;
  this->PersistentCommands[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PersistentCommands[1].ArrayNum = 0;
  this->PersistentCommands[1].ArrayMax = 0;
  this->PersistentCommands[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PersistentCommands[2].ArrayNum = 0;
  this->PersistentCommands[2].ArrayMax = 0;
  this->PersistentCommands[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PersistentCommands[3].ArrayNum = 0;
  this->PersistentCommands[3].ArrayMax = 0;
  this->ConstructionCommands[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ConstructionCommands[0].ArrayNum = 0;
  this->ConstructionCommands[0].ArrayMax = 0;
  this->ConstructionCommands[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ConstructionCommands[1].ArrayNum = 0;
  this->ConstructionCommands[1].ArrayMax = 0;
  this->ConstructionCommands[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ConstructionCommands[2].ArrayNum = 0;
  this->ConstructionCommands[2].ArrayMax = 0;
  this->ConstructionCommands[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ConstructionCommands[3].ArrayNum = 0;
  this->ConstructionCommands[3].ArrayMax = 0;
  this->field_0x42 = this->field_0x42 | 6;
  this->FieldInstance = (FPhysicsFieldInstance *)0x0;
  this->DebugInstance = (FPhysicsFieldInstance *)0x0;
  this->FieldProxy = (FPhysicsFieldSceneProxy *)0x0;
  return this;
}

// ~UPhysicsFieldComponent @ 14834dde0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPhysicsFieldComponent::~UPhysicsFieldComponent(UPhysicsFieldComponent *this)

{
  FScriptContainerElement *pFVar1;
  TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = 4;
  *(undefined ***)this = &_vftable__for__UObject__;
  pTVar3 = (TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *)&this->FieldInstance;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  lVar4 = 4;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  do {
    pTVar2 = pTVar3 + -1;
    pTVar3 = pTVar3 + -1;
    lVar4 = lVar4 + -1;
    DestructItems<FFieldSystemCommand,int>
              ((FFieldSystemCommand *)(pTVar3->AllocatorInstance).Data,pTVar2->ArrayNum);
    pFVar1 = (pTVar3->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar4 != 0);
  pTVar3 = this->ConstructionCommands;
  lVar4 = 4;
  do {
    pTVar2 = pTVar3 + -1;
    pTVar3 = pTVar3 + -1;
    lVar4 = lVar4 + -1;
    DestructItems<FFieldSystemCommand,int>
              ((FFieldSystemCommand *)(pTVar3->AllocatorInstance).Data,pTVar2->ArrayNum);
    pFVar1 = (pTVar3->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar4 != 0);
  pTVar3 = this->PersistentCommands;
  do {
    pTVar2 = pTVar3 + -1;
    pTVar3 = pTVar3 + -1;
    lVar5 = lVar5 + -1;
    DestructItems<FFieldSystemCommand,int>
              ((FFieldSystemCommand *)(pTVar3->AllocatorInstance).Data,pTVar2->ArrayNum);
    pFVar1 = (pTVar3->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar5 != 0);
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// operator() @ 148350c20

void __thiscall
`UPhysicsFieldComponent::OnUnregister'::__l7::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    if (*(void **)((longlong)pvVar1 + 0x110) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar1 + 0x110));
    }
    if (*(void **)((longlong)pvVar1 + 0x100) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar1 + 0x100));
    }
    DestructItems<FFieldSystemCommand,int>
              (*(FFieldSystemCommand **)((longlong)pvVar1 + 0xf0),*(int *)((longlong)pvVar1 + 0xf8))
    ;
    if (*(void **)((longlong)pvVar1 + 0xf0) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar1 + 0xf0));
    }
    if (*(void **)((longlong)pvVar1 + 0xe0) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar1 + 0xe0));
    }
    if (*(void **)((longlong)pvVar1 + 0xd0) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar1 + 0xd0));
    }
    if (*(void **)((longlong)pvVar1 + 0xc0) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar1 + 0xc0));
    }
    if (*(void **)((longlong)pvVar1 + 0xb0) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar1 + 0xb0));
    }
    ::operator_delete(pvVar1,0x120);
    return;
  }
  return;
}

// AddConstructionCommand @ 148353310

void __thiscall
UPhysicsFieldComponent::AddConstructionCommand
          (UPhysicsFieldComponent *this,FFieldSystemCommand *param_1)

{
  int *piVar1;
  TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *pTVar2;
  FFieldSystemCommand *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar2 = this->ConstructionCommands + 3;
  pFVar3 = (FFieldSystemCommand *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + this->ConstructionCommands[3].ArrayMax)) {
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
  iVar6 = this->ConstructionCommands[3].ArrayNum;
  piVar1 = &this->ConstructionCommands[3].ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8c8,&pTVar2->AllocatorInstance,piVar1);
  }
  this->ConstructionCommands[3].ArrayNum = iVar6 + 1;
  FFieldSystemCommand::FFieldSystemCommand
            ((FFieldSystemCommand *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 200),
             param_1);
  return;
}

// AddPersistentCommand @ 148354f60

void __thiscall
UPhysicsFieldComponent::AddPersistentCommand
          (UPhysicsFieldComponent *this,FFieldSystemCommand *param_1,bool param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FFieldSystemCommand *pFVar5;
  TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *pTVar6;
  
  if (param_2) {
    pTVar6 = this->PersistentCommands;
    pFVar5 = (FFieldSystemCommand *)(pTVar6->AllocatorInstance).Data;
    if (param_1 < pFVar5) goto LAB_1483550ca;
    pFVar5 = pFVar5 + this->PersistentCommands[0].ArrayMax;
  }
  else {
    pTVar6 = this->PersistentCommands + 2;
    pFVar5 = (FFieldSystemCommand *)(pTVar6->AllocatorInstance).Data;
    if (((pFVar5 <= param_1) && (param_1 < pFVar5 + this->PersistentCommands[2].ArrayMax)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = this->PersistentCommands[2].ArrayNum;
    piVar1 = &this->PersistentCommands[2].ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x8c8,&pTVar6->AllocatorInstance,piVar1);
    }
    this->PersistentCommands[2].ArrayNum = iVar4 + 1;
    FFieldSystemCommand::FFieldSystemCommand
              ((FFieldSystemCommand *)((pTVar6->AllocatorInstance).Data + (longlong)iVar4 * 200),
               param_1);
    pTVar6 = this->PersistentCommands + 3;
    pFVar5 = (FFieldSystemCommand *)(pTVar6->AllocatorInstance).Data;
    if (param_1 < pFVar5) goto LAB_1483550ca;
    pFVar5 = pFVar5 + this->PersistentCommands[3].ArrayMax;
  }
  if ((param_1 < pFVar5) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1483550ca:
  iVar4 = pTVar6->ArrayNum;
  if (iVar4 == pTVar6->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8c8,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
  }
  pTVar6->ArrayNum = iVar4 + 1;
  FFieldSystemCommand::FFieldSystemCommand
            ((FFieldSystemCommand *)((pTVar6->AllocatorInstance).Data + (longlong)iVar4 * 200),
             param_1);
  return;
}

// AddTransientCommand @ 148357070

void __thiscall
UPhysicsFieldComponent::AddTransientCommand
          (UPhysicsFieldComponent *this,FFieldSystemCommand *param_1,bool param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FFieldSystemCommand *pFVar5;
  TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *pTVar6;
  
  if (param_2) {
    pTVar6 = this->TransientCommands;
    pFVar5 = (FFieldSystemCommand *)(pTVar6->AllocatorInstance).Data;
    if (param_1 < pFVar5) goto LAB_1483571da;
    pFVar5 = pFVar5 + this->TransientCommands[0].ArrayMax;
  }
  else {
    pTVar6 = this->TransientCommands + 2;
    pFVar5 = (FFieldSystemCommand *)(pTVar6->AllocatorInstance).Data;
    if (((pFVar5 <= param_1) && (param_1 < pFVar5 + this->TransientCommands[2].ArrayMax)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = this->TransientCommands[2].ArrayNum;
    piVar1 = &this->TransientCommands[2].ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x8c8,&pTVar6->AllocatorInstance,piVar1);
    }
    this->TransientCommands[2].ArrayNum = iVar4 + 1;
    FFieldSystemCommand::FFieldSystemCommand
              ((FFieldSystemCommand *)((pTVar6->AllocatorInstance).Data + (longlong)iVar4 * 200),
               param_1);
    pTVar6 = this->TransientCommands + 3;
    pFVar5 = (FFieldSystemCommand *)(pTVar6->AllocatorInstance).Data;
    if (param_1 < pFVar5) goto LAB_1483571da;
    pFVar5 = pFVar5 + this->TransientCommands[3].ArrayMax;
  }
  if ((param_1 < pFVar5) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1483571da:
  iVar4 = pTVar6->ArrayNum;
  if (iVar4 == pTVar6->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8c8,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
  }
  pTVar6->ArrayNum = iVar4 + 1;
  FFieldSystemCommand::FFieldSystemCommand
            ((FFieldSystemCommand *)((pTVar6->AllocatorInstance).Data + (longlong)iVar4 * 200),
             param_1);
  return;
}

// BuildCommandBounds @ 14835ddb0

void __cdecl UPhysicsFieldComponent::BuildCommandBounds(FFieldSystemCommand *param_1)

{
  FFieldNodeBase *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  float fVar6;
  
  (param_1->BoundingBox).Min.field0_0x0._s_0.X = -3.4028234663852886e+38;
  (param_1->BoundingBox).Min.field0_0x0._s_0.Y = -3.4028234663852886e+38;
  (param_1->BoundingBox).Min.field0_0x0._s_0.Z = -3.4028234663852886e+38;
  (param_1->BoundingBox).Max.field0_0x0._s_0.X = 3.4028234663852886e+38;
  (param_1->BoundingBox).Max.field0_0x0._s_0.Y = 3.4028234663852886e+38;
  (param_1->BoundingBox).Max.field0_0x0._s_0.Z = 3.4028234663852886e+38;
  param_1->MaxMagnitude = 1.0;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  *(undefined4 *)&(param_1->CenterPosition).field0_0x0 =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  *(undefined4 *)((longlong)&(param_1->CenterPosition).field0_0x0 + 4) = uVar2;
  *(undefined4 *)((longlong)&(param_1->CenterPosition).field0_0x0 + 8) = uVar3;
  *(undefined4 *)((longlong)&(param_1->CenterPosition).field0_0x0 + 0xc) = uVar4;
  (param_1->CenterPosition).field0_0x0._s_0.Z = (double)uVar5;
  pFVar1 = (param_1->RootNode).Ptr;
  if (pFVar1 != (FFieldNodeBase *)0x0) {
    fVar6 = (float)(**(code **)(pFVar1->_padding_ + 0x40))();
    pFVar1 = (param_1->RootNode).Ptr;
    param_1->MaxMagnitude = fVar6;
    (**(code **)(pFVar1->_padding_ + 0x48))
              (pFVar1,&param_1->BoundingBox,&(param_1->BoundingBox).Max,&param_1->CenterPosition);
  }
  return;
}

// CreateRenderState_Concurrent @ 1483694d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPhysicsFieldComponent::CreateRenderState_Concurrent
          (UPhysicsFieldComponent *this,FRegisterComponentContext *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_PhysicsFields_CreateSceneProxy> FVar6;
  FPhysicsFieldSceneProxy *pFVar7;
  UWorld *pUVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  LARGE_INTEGER local_res8;
  FName local_res18;
  FStatMessage local_38;
  
  FVar12.Value = 0;
  FVar6 = StatPtr_STAT_PhysicsFields_CreateSceneProxy;
  if (StatPtr_STAT_PhysicsFields_CreateSceneProxy ==
      (FThreadSafeStaticStat<FStat_STAT_PhysicsFields_CreateSceneProxy>)0x0) {
    pFVar5 = ::FName::FName(&local_res18,"STAT_PhysicsFields_CreateSceneProxy");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_PhysicsFields_CreateSceneProxy>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PhysicsFields_CreateSceneProxy,
                       *pFVar5,L"Create Scene Proxy [GT]","STATGROUP_PhysicsFields",
                       "STATCAT_Advanced",L"PhysicsFields",true,true,ST_int64,true,false,MCR_Invalid
                      );
  }
  FVar11 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value == 0) && (uVar9 == 0)) {
LAB_148369638:
    bVar3 = false;
    FVar11.ComparisonIndex.Value = 0;
    FVar11.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsField\\PhysicsFieldComponent.cpp"
                   ,0x336);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148369638;
    local_res8.s.LowPart = FVar10.Value;
    local_res8.s.HighPart = uVar9;
    FThreadStats::AddMessage(FVar11,CycleScopeStart);
    bVar3 = true;
    FVar12.Value = FVar10.Value;
  }
  UActorComponent::CreateRenderState_Concurrent((UActorComponent *)this,param_1);
  if (this->FieldProxy == (FPhysicsFieldSceneProxy *)0x0) {
    pFVar7 = ::operator_new(0x10);
    if (pFVar7 == (FPhysicsFieldSceneProxy *)0x0) {
      pFVar7 = (FPhysicsFieldSceneProxy *)0x0;
    }
    else {
      pFVar7->FieldResource = (FPhysicsFieldResource *)0x0;
      pFVar7->DebugResource = (FPhysicsFieldResource *)0x0;
      if (this->FieldInstance != (FPhysicsFieldInstance *)0x0) {
        pFVar7->FieldResource = this->FieldInstance->FieldResource;
      }
      if (this->DebugInstance != (FPhysicsFieldInstance *)0x0) {
        pFVar7->DebugResource = this->DebugInstance->FieldResource;
      }
    }
    this->FieldProxy = pFVar7;
    if (pFVar7 == (FPhysicsFieldSceneProxy *)0x0) goto LAB_148369701;
  }
  if (*(longlong *)&this->field_0xb0 == 0) {
    pUVar8 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    if (pUVar8 == (UWorld *)0x0) goto LAB_148369701;
  }
  pUVar8 = *(UWorld **)&this->field_0xb0;
  if (pUVar8 == (UWorld *)0x0) {
    pUVar8 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  if (pUVar8->Scene != (FSceneInterface *)0x0) {
    pUVar8 = *(UWorld **)&this->field_0xb0;
    if (pUVar8 == (UWorld *)0x0) {
      pUVar8 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    (**(code **)(pUVar8->Scene->_padding_ + 0x340))(pUVar8->Scene,this->FieldProxy);
  }
LAB_148369701:
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// DestroyRenderState_Concurrent @ 14836ae20

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

void __thiscall UPhysicsFieldComponent::DestroyRenderState_Concurrent(UPhysicsFieldComponent *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FPhysicsFieldSceneProxy *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FPhysicsFieldSceneProxy *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  UActorComponent::DestroyRenderState_Concurrent((UActorComponent *)this);
  if (this->FieldProxy != (FPhysicsFieldSceneProxy *)0x0) {
    if ((*(longlong *)&this->field_0xb0 == 0) &&
       (pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
       pUVar3 == (UWorld *)0x0)) {
      return;
    }
    pUVar3 = *(UWorld **)&this->field_0xb0;
    if (pUVar3 == (UWorld *)0x0) {
      pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    if (pUVar3->Scene != (FSceneInterface *)0x0) {
      pUVar3 = *(UWorld **)&this->field_0xb0;
      if (pUVar3 == (UWorld *)0x0) {
        pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      (**(code **)(pUVar3->Scene->_padding_ + 0x348))();
      local_60 = (undefined ***)0x0;
      local_78 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UPhysicsFieldComponent::DestroyRenderState_Concurrent'::`5'::<lambda_1>,1,0>
                  ::_vftable_;
      pFStack_70 = this->FieldProxy;
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UPhysicsFieldComponent::DestroyRenderState_Concurrent'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UPhysicsFieldComponent::DestroyRenderState_Concurrent_::__l5::TSTR_FDestroySkyLightCommand846>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
      }
      else {
        this_01 = FRenderCommandList::GetRenderThread(this_00);
        local_58._0_8_ = local_88[0];
        local_30 = local_60;
        local_48 = local_78;
        pFStack_40 = pFStack_70;
        local_38 = local_68;
        local_88[0] = (code *)0x0;
        local_28 = 2;
        pFVar4 = (FRenderCommandTag *)
                 TRenderCommandTag<`UPhysicsFieldComponent::DestroyRenderState_Concurrent'::__l5::TSTR_FDestroySkyLightCommand846>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_58,pFVar4);
        uVar6 = (ulonglong)local_28;
        if ((2 < uVar6) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar6] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_58._0_8_ != (code *)0x0) {
            pppuVar5 = (undefined ***)(local_58 + 0x10);
            if (local_30 != (undefined ***)0x0) {
              pppuVar5 = local_30;
            }
            (*(code *)(*pppuVar5)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar6])(local_58);
        }
      }
      if (local_88[0] != (code *)0x0) {
        pppuVar5 = &local_78;
        if (local_60 != (undefined ***)0x0) {
          pppuVar5 = local_60;
        }
        (*(code *)(*pppuVar5)[2])();
      }
      this->FieldProxy = (FPhysicsFieldSceneProxy *)0x0;
    }
  }
  return;
}

// FillPersistentCommands @ 14837b1f0

void __thiscall
UPhysicsFieldComponent::FillPersistentCommands
          (UPhysicsFieldComponent *this,bool param_1,TBox<double> *param_2,float param_3,
          TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  TBox<double> *pTVar4;
  TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FFieldSystemCommand *pFVar9;
  longlong lVar10;
  TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *pTVar11;
  FFieldSystemCommand *this_00;
  FFieldSystemCommand *pFVar12;
  uint uVar13;
  FFieldSystemCommand *pFVar14;
  uint uVar15;
  float fVar16;
  undefined1 local_res10 [8];
  TBox<double> *local_res18;
  undefined1 local_res20 [8];
  float local_68 [2];
  TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *local_60;
  TArray<float,TSizedDefaultAllocator<32>_> local_58 [2];
  
  pTVar11 = this->PersistentCommands;
  if (!param_1) {
    pTVar11 = this->PersistentCommands + 1;
  }
  local_58[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58[0].ArrayNum = 0;
  local_58[0].ArrayMax = 0;
  local_res18 = param_2;
  local_68[0] = param_3;
  local_60 = pTVar11;
  TArray<float,TSizedDefaultAllocator<32>_>::Init(local_58,local_68,pTVar11->ArrayNum);
  iVar2 = pTVar11->ArrayNum;
  uVar15 = 0;
  pFVar12 = (FFieldSystemCommand *)(pTVar11->AllocatorInstance).Data;
  pFVar14 = pFVar12 + iVar2;
  do {
    if (pTVar11->ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FFieldSystemCommand_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    pFVar9 = (FFieldSystemCommand *)(param_4->AllocatorInstance).Data;
    iVar8 = param_4->ArrayNum;
    if (pFVar12 == pFVar14) {
      DestructItems<FFieldSystemCommand,int>(pFVar9,iVar8);
      pTVar4 = local_res18;
      piVar1 = &param_4->ArrayMax;
      param_4->ArrayNum = 0;
      if (param_4->ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (200,8,0,&param_4->AllocatorInstance,0,piVar1);
      }
      pTVar5 = local_60;
      uVar15 = 0;
      pFVar12 = (FFieldSystemCommand *)(pTVar11->AllocatorInstance).Data;
      iVar2 = local_60->ArrayNum;
      pFVar14 = pFVar12 + iVar2;
      do {
        if (pTVar5->ArrayNum != iVar2) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FFieldSystemCommand_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res20);
        }
        if (pFVar12 == pFVar14) {
          if (local_58[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58[0].AllocatorInstance.Data);
          }
          return;
        }
        if ((((((pFVar12->BoundingBox).Min.field0_0x0._s_0.X <= (pTVar4->Max).field0_0x0._s_0.X) &&
              ((pTVar4->Min).field0_0x0._s_0.X <= (pFVar12->BoundingBox).Max.field0_0x0._s_0.X)) &&
             ((pFVar12->BoundingBox).Min.field0_0x0._s_0.Y <= (pTVar4->Max).field0_0x0._s_0.Y)) &&
            (((pTVar4->Min).field0_0x0._s_0.Y <= (pFVar12->BoundingBox).Max.field0_0x0._s_0.Y &&
             ((pFVar12->BoundingBox).Min.field0_0x0._s_0.Z <= (pTVar4->Max).field0_0x0._s_0.Z)))) &&
           ((pTVar4->Min).field0_0x0._s_0.Z <= (pFVar12->BoundingBox).Max.field0_0x0._s_0.Z)) {
          uVar13 = 0;
          if ((int)uVar15 < local_58[0].ArrayNum) {
            uVar13 = ~uVar15 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          fVar16 = *(float *)(local_58[0].AllocatorInstance.Data + (longlong)(int)uVar15 * 4);
          pFVar9 = (FFieldSystemCommand *)(param_4->AllocatorInstance).Data;
          if (((pFVar9 <= pFVar12) && (pFVar12 < pFVar9 + *piVar1)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar8 = param_4->ArrayNum;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x8c8,&param_4->AllocatorInstance,piVar1);
          }
          param_4->ArrayNum = iVar8 + 1;
          pFVar9 = FFieldSystemCommand::FFieldSystemCommand
                             ((FFieldSystemCommand *)
                              ((param_4->AllocatorInstance).Data + (longlong)iVar8 * 200),pFVar12);
          pFVar9->TimeCreation = fVar16;
        }
        uVar15 = uVar15 + 1;
        pFVar12 = pFVar12 + 1;
      } while( true );
    }
    for (this_00 = pFVar9; fVar16 = local_68[0], this_00 != pFVar9 + iVar8; this_00 = this_00 + 1) {
      bVar6 = FFieldSystemCommand::operator==(this_00,pFVar12);
      if (bVar6) {
        lVar10 = ((longlong)this_00 - (longlong)pFVar9) +
                 SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((longlong)this_00 - (longlong)pFVar9)
                        ,8);
        uVar13 = (int)(lVar10 >> 7) - (int)(lVar10 >> 0x3f);
        fVar16 = local_68[0];
        if (uVar13 != 0xffffffff) {
          uVar7 = 0;
          if ((int)uVar13 < param_4->ArrayNum) {
            uVar7 = ~uVar13 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          fVar16 = *(float *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar13 * 200 + 0x18
                             );
        }
        break;
      }
    }
    uVar13 = 0;
    if ((int)uVar15 < local_58[0].ArrayNum) {
      uVar13 = ~uVar15 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar10 = (longlong)(int)uVar15;
    uVar15 = uVar15 + 1;
    pFVar12 = pFVar12 + 1;
    *(float *)(local_58[0].AllocatorInstance.Data + lVar10 * 4) = fVar16;
    pTVar11 = local_60;
  } while( true );
}

// FillTransientCommands @ 14837b630

void __thiscall
UPhysicsFieldComponent::FillTransientCommands
          (UPhysicsFieldComponent *this,bool param_1,TBox<double> *param_2,float param_3,
          TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  TBox<double> *pTVar4;
  TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FFieldSystemCommand *pFVar9;
  longlong lVar10;
  TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *pTVar11;
  FFieldSystemCommand *this_00;
  FFieldSystemCommand *pFVar12;
  uint uVar13;
  FFieldSystemCommand *pFVar14;
  uint uVar15;
  float fVar16;
  undefined1 local_res10 [8];
  TBox<double> *local_res18;
  undefined1 local_res20 [8];
  float local_68 [2];
  TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *local_60;
  TArray<float,TSizedDefaultAllocator<32>_> local_58 [2];
  
  pTVar11 = this->TransientCommands;
  if (!param_1) {
    pTVar11 = this->TransientCommands + 1;
  }
  local_58[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58[0].ArrayNum = 0;
  local_58[0].ArrayMax = 0;
  local_res18 = param_2;
  local_68[0] = param_3;
  local_60 = pTVar11;
  TArray<float,TSizedDefaultAllocator<32>_>::Init(local_58,local_68,pTVar11->ArrayNum);
  iVar2 = pTVar11->ArrayNum;
  uVar15 = 0;
  pFVar12 = (FFieldSystemCommand *)(pTVar11->AllocatorInstance).Data;
  pFVar14 = pFVar12 + iVar2;
  do {
    if (pTVar11->ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FFieldSystemCommand_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    pFVar9 = (FFieldSystemCommand *)(param_4->AllocatorInstance).Data;
    iVar8 = param_4->ArrayNum;
    if (pFVar12 == pFVar14) {
      DestructItems<FFieldSystemCommand,int>(pFVar9,iVar8);
      pTVar4 = local_res18;
      piVar1 = &param_4->ArrayMax;
      param_4->ArrayNum = 0;
      if (param_4->ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (200,8,0,&param_4->AllocatorInstance,0,piVar1);
      }
      pTVar5 = local_60;
      uVar15 = 0;
      pFVar12 = (FFieldSystemCommand *)(pTVar11->AllocatorInstance).Data;
      iVar2 = local_60->ArrayNum;
      pFVar14 = pFVar12 + iVar2;
      do {
        if (pTVar5->ArrayNum != iVar2) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FFieldSystemCommand_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res20);
        }
        if (pFVar12 == pFVar14) {
          if (local_58[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58[0].AllocatorInstance.Data);
          }
          return;
        }
        if ((((((pFVar12->BoundingBox).Min.field0_0x0._s_0.X <= (pTVar4->Max).field0_0x0._s_0.X) &&
              ((pTVar4->Min).field0_0x0._s_0.X <= (pFVar12->BoundingBox).Max.field0_0x0._s_0.X)) &&
             ((pFVar12->BoundingBox).Min.field0_0x0._s_0.Y <= (pTVar4->Max).field0_0x0._s_0.Y)) &&
            (((pTVar4->Min).field0_0x0._s_0.Y <= (pFVar12->BoundingBox).Max.field0_0x0._s_0.Y &&
             ((pFVar12->BoundingBox).Min.field0_0x0._s_0.Z <= (pTVar4->Max).field0_0x0._s_0.Z)))) &&
           ((pTVar4->Min).field0_0x0._s_0.Z <= (pFVar12->BoundingBox).Max.field0_0x0._s_0.Z)) {
          uVar13 = 0;
          if ((int)uVar15 < local_58[0].ArrayNum) {
            uVar13 = ~uVar15 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          fVar16 = *(float *)(local_58[0].AllocatorInstance.Data + (longlong)(int)uVar15 * 4);
          pFVar9 = (FFieldSystemCommand *)(param_4->AllocatorInstance).Data;
          if (((pFVar9 <= pFVar12) && (pFVar12 < pFVar9 + *piVar1)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar8 = param_4->ArrayNum;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x8c8,&param_4->AllocatorInstance,piVar1);
          }
          param_4->ArrayNum = iVar8 + 1;
          pFVar9 = FFieldSystemCommand::FFieldSystemCommand
                             ((FFieldSystemCommand *)
                              ((param_4->AllocatorInstance).Data + (longlong)iVar8 * 200),pFVar12);
          pFVar9->TimeCreation = fVar16;
        }
        uVar15 = uVar15 + 1;
        pFVar12 = pFVar12 + 1;
      } while( true );
    }
    for (this_00 = pFVar9; fVar16 = local_68[0], this_00 != pFVar9 + iVar8; this_00 = this_00 + 1) {
      bVar6 = FFieldSystemCommand::operator==(this_00,pFVar12);
      if (bVar6) {
        lVar10 = ((longlong)this_00 - (longlong)pFVar9) +
                 SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((longlong)this_00 - (longlong)pFVar9)
                        ,8);
        uVar13 = (int)(lVar10 >> 7) - (int)(lVar10 >> 0x3f);
        fVar16 = local_68[0];
        if (uVar13 != 0xffffffff) {
          uVar7 = 0;
          if ((int)uVar13 < param_4->ArrayNum) {
            uVar7 = ~uVar13 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          fVar16 = *(float *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar13 * 200 + 0x18
                             );
        }
        break;
      }
    }
    uVar13 = 0;
    if ((int)uVar15 < local_58[0].ArrayNum) {
      uVar13 = ~uVar15 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar10 = (longlong)(int)uVar15;
    uVar15 = uVar15 + 1;
    pFVar12 = pFVar12 + 1;
    *(float *)(local_58[0].AllocatorInstance.Data + lVar10 * 4) = fVar16;
    pTVar11 = local_60;
  } while( true );
}

// GetPrivateStaticClass @ 148387110

UClass * __cdecl UPhysicsFieldComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsFieldComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsFieldComponent",
               &Z_Registration_Info_UClass_UPhysicsFieldComponent.InnerSingleton,
               StaticRegisterNativesUPhysicsFieldComponent,0x330,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPhysicsFieldComponent>,
               InternalVTableHelperCtorCaller<UPhysicsFieldComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsFieldComponent.InnerSingleton;
}

// OnRegister @ 1483965c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPhysicsFieldComponent::OnRegister(UPhysicsFieldComponent *this)

{
  FPhysicsFieldInstance *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  undefined1 auStackY_108 [32];
  FIdentityFunctor local_c8 [4];
  undefined1 local_c4;
  undefined1 local_c3;
  ForAnyElementType local_c0;
  int local_b8;
  int local_b4;
  TArray<EFieldPhysicsType,TSizedDefaultAllocator<32>_> local_b0;
  TArray<EFieldPhysicsType,TSizedDefaultAllocator<32>_> local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_108;
  USceneComponent::OnRegister((USceneComponent *)this);
  local_c4 = GPhysicsFieldBuildClipmap == 1;
  local_c3 = 0;
  local_b8 = 2;
  local_c0.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,2,0,&local_c0,2,&local_b4);
  memcpy(local_c0.Data,&local_c4,2);
  uVar8 = _UNK_151aa2738;
  uVar7 = ___xmm_000000100000000f0000000a00000009;
  uVar6 = _UNK_150631ed8;
  uVar5 = ___xmm_00000008000000070000000600000005;
  uVar4 = _UNK_150631e38;
  uVar3 = ___xmm_00000004000000030000000200000001;
  puVar11 = (undefined8 *)0x0;
  do {
    iVar15 = (int)puVar11;
    lVar13 = 0x310;
    if (iVar15 != 0) {
      lVar13 = 0x318;
    }
    plVar14 = (longlong *)(&this->field_0x0 + lVar13);
    if (*plVar14 == 0) {
      puVar10 = ::operator_new(0x120);
      puVar11 = (undefined8 *)0x0;
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = 0;
        puVar10[0x16] = 0;
        puVar10[0x17] = 0;
        puVar10[0x18] = 0;
        puVar10[0x19] = 0;
        puVar10[0x1a] = 0;
        puVar10[0x1b] = 0;
        puVar10[0x1c] = 0;
        puVar10[0x1d] = 0;
        puVar10[0x1e] = 0;
        puVar10[0x1f] = 0;
        puVar10[0x20] = 0;
        puVar10[0x21] = 0;
        puVar10[0x22] = 0;
        puVar10[0x23] = 0;
        puVar11 = puVar10;
      }
      *plVar14 = (longlong)puVar11;
      if (GPhysicsFieldSingleTarget == 1) {
        local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a0.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,1,0,&local_a0.AllocatorInstance,1,&local_a0.ArrayMax);
        *(EFieldPhysicsType *)local_a0.AllocatorInstance.Data = Field_LinearForce;
        pFVar1 = (FPhysicsFieldInstance *)*plVar14;
        if ((local_b8 <= iVar15) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FPhysicsFieldInstance::InitInstance(pFVar1,&local_a0,(bool)local_c0.Data[iVar15]);
        FVar12.Data = local_a0.AllocatorInstance.Data;
      }
      else {
        local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b0.ArrayNum = 0xc;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0xc,0,&local_b0.AllocatorInstance,0xc,&local_b0.ArrayMax);
        local_90 = uVar3;
        uStack_88 = uVar4;
        *(undefined8 *)local_b0.AllocatorInstance.Data = uVar3;
        *(undefined8 *)(local_b0.AllocatorInstance.Data + 8) = uVar4;
        *(undefined8 *)(local_b0.AllocatorInstance.Data + 0x10) = uVar5;
        *(undefined8 *)(local_b0.AllocatorInstance.Data + 0x18) = uVar6;
        *(undefined8 *)(local_b0.AllocatorInstance.Data + 0x20) = uVar7;
        *(undefined8 *)(local_b0.AllocatorInstance.Data + 0x28) = uVar8;
        local_80 = uVar5;
        uStack_78 = uVar6;
        local_70 = uVar7;
        uStack_68 = uVar8;
        AlgoImpl::
        IntroSortInternal<enum_EFieldPhysicsType,int,FIdentityFunctor,TDereferenceWrapper<enum_EFieldPhysicsType,TLess<void>_>_>
                  ((EFieldPhysicsType *)local_b0.AllocatorInstance.Data,local_b0.ArrayNum,
                   local_c8[0],(TLess<void> *)local_c8);
        pFVar1 = (FPhysicsFieldInstance *)*plVar14;
        if ((local_b8 <= iVar15) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FPhysicsFieldInstance::InitInstance(pFVar1,&local_b0,(bool)local_c0.Data[iVar15]);
        FVar12.Data = local_b0.AllocatorInstance.Data;
      }
      if (FVar12.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar12.Data);
      }
    }
    puVar11 = (undefined8 *)(ulonglong)(iVar15 + 1U);
    if (1 < iVar15 + 1U) {
      if (local_c0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data);
      }
      return;
    }
  } while( true );
}

// OnUnregister @ 148396e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPhysicsFieldComponent::OnUnregister(UPhysicsFieldComponent *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *pFVar3;
  FCommandList *pFVar4;
  FRenderCommandTag *pFVar5;
  undefined ***pppuVar6;
  ulonglong uVar7;
  undefined1 auStack_c8 [32];
  code *local_a8 [2];
  undefined **local_98;
  FPhysicsFieldInstance *pFStack_90;
  undefined8 local_88;
  undefined ***local_80;
  undefined1 local_78 [16];
  undefined **local_68;
  FPhysicsFieldInstance *pFStack_60;
  undefined8 local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (this->FieldInstance != (FPhysicsFieldInstance *)0x0) {
    FPhysicsFieldInstance::ReleaseInstance(this->FieldInstance);
    pFStack_90 = this->FieldInstance;
    local_80 = (undefined ***)0x0;
    local_98 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UPhysicsFieldComponent::OnUnregister'::`7'::<lambda_1>,1,0>::
                _vftable_;
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UPhysicsFieldComponent::OnUnregister'::__l7::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFVar3 = FRenderCommandList::GetInstanceTLS();
    if (pFVar3 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UPhysicsFieldComponent::OnUnregister_::__l7::TSTR_FDestroyPhysicsFieldInstanceCommand955>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
    }
    else {
      pFVar4 = FRenderCommandList::GetRenderThread(pFVar3);
      local_78._0_8_ = local_a8[0];
      local_50 = local_80;
      local_68 = local_98;
      pFStack_60 = pFStack_90;
      local_58 = local_88;
      local_a8[0] = (code *)0x0;
      local_48 = 2;
      pFVar5 = (FRenderCommandTag *)
               TRenderCommandTag<`UPhysicsFieldComponent::OnUnregister'::__l7::TSTR_FDestroyPhysicsFieldInstanceCommand955>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar4,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                         *)local_78,pFVar5);
      uVar7 = (ulonglong)local_48;
      if (2 < uVar7) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_78._0_8_ != (code *)0x0) {
          pppuVar6 = (undefined ***)(local_78 + 0x10);
          if (local_50 != (undefined ***)0x0) {
            pppuVar6 = local_50;
          }
          (*(code *)(*pppuVar6)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7])(local_78);
      }
    }
    if (local_a8[0] != (code *)0x0) {
      pppuVar6 = &local_98;
      if (local_80 != (undefined ***)0x0) {
        pppuVar6 = local_80;
      }
      (*(code *)(*pppuVar6)[2])();
    }
    this->FieldInstance = (FPhysicsFieldInstance *)0x0;
  }
  if (this->DebugInstance != (FPhysicsFieldInstance *)0x0) {
    FPhysicsFieldInstance::ReleaseInstance(this->DebugInstance);
    pFStack_90 = this->DebugInstance;
    local_80 = (undefined ***)0x0;
    local_98 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UPhysicsFieldComponent::OnUnregister'::`7'::<lambda_1>,1,0>::
                _vftable_;
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UPhysicsFieldComponent::OnUnregister'::__l7::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFVar3 = FRenderCommandList::GetInstanceTLS();
    if (pFVar3 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UPhysicsFieldComponent::OnUnregister_::__l7::TSTR_FDestroyPhysicsFieldInstanceCommand955>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
    }
    else {
      pFVar4 = FRenderCommandList::GetRenderThread(pFVar3);
      local_78._0_8_ = local_a8[0];
      local_50 = local_80;
      local_80 = (undefined ***)0x0;
      local_68 = local_98;
      pFStack_60 = pFStack_90;
      local_58 = local_88;
      local_a8[0] = (code *)0x0;
      local_48 = 2;
      pFVar5 = (FRenderCommandTag *)
               TRenderCommandTag<`UPhysicsFieldComponent::OnUnregister'::__l7::TSTR_FDestroyPhysicsFieldInstanceCommand955>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar4,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                         *)local_78,pFVar5);
      uVar7 = (ulonglong)local_48;
      if (2 < uVar7) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_78._0_8_ != (code *)0x0) {
          pppuVar6 = (undefined ***)(local_78 + 0x10);
          if (local_50 != (undefined ***)0x0) {
            pppuVar6 = local_50;
          }
          (*(code *)(*pppuVar6)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7])(local_78);
      }
    }
    if (local_a8[0] != (code *)0x0) {
      pppuVar6 = &local_98;
      if (local_80 != (undefined ***)0x0) {
        pppuVar6 = local_80;
      }
      (*(code *)(*pppuVar6)[2])();
    }
    this->DebugInstance = (FPhysicsFieldInstance *)0x0;
  }
  USceneComponent::OnUnregister((USceneComponent *)this);
  return;
}

// RemovePersistentCommand @ 1483a0c50

void __thiscall
UPhysicsFieldComponent::RemovePersistentCommand
          (UPhysicsFieldComponent *this,FFieldSystemCommand *param_1,bool param_2)

{
  longlong lVar1;
  
  if (param_2) {
    lVar1 = 0x290;
  }
  else {
    TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_>::Remove
              (this->PersistentCommands + 2,param_1);
    lVar1 = 0x2c0;
  }
  TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_>::Remove
            ((TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *)(&this->field_0x0 + lVar1),
             param_1);
  return;
}

// RemoveTransientCommand @ 1483a0d50

void __thiscall
UPhysicsFieldComponent::RemoveTransientCommand
          (UPhysicsFieldComponent *this,FFieldSystemCommand *param_1,bool param_2)

{
  longlong lVar1;
  
  if (param_2) {
    lVar1 = 0x250;
  }
  else {
    TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_>::Remove
              (this->TransientCommands + 2,param_1);
    lVar1 = 0x280;
  }
  TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_>::Remove
            ((TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *)(&this->field_0x0 + lVar1),
             param_1);
  return;
}

// SendRenderDynamicData_Concurrent @ 1483a3000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPhysicsFieldComponent::SendRenderDynamicData_Concurrent(UPhysicsFieldComponent *this)

{
  FScriptContainerElement FVar1;
  FName FVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_PhysicsFields_SendRenderData> FVar12;
  UWorld *pUVar13;
  IConsoleManager *pIVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *pTVar18;
  FScriptContainerElement *_Dst;
  ForAnyElementType *pFVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  bool bVar24;
  float fVar25;
  double dVar26;
  undefined2 local_res20 [4];
  ForAnyElementType local_c8;
  int local_c0;
  int local_bc;
  uint local_b8;
  FColor_u_0 local_b4;
  longlong local_b0;
  int local_a8;
  FName local_a0;
  longlong local_98;
  FName local_90;
  FName local_88;
  longlong local_78;
  FName local_70 [7];
  
  FVar12 = StatPtr_STAT_PhysicsFields_SendRenderData;
  if (StatPtr_STAT_PhysicsFields_SendRenderData ==
      (FThreadSafeStaticStat<FStat_STAT_PhysicsFields_SendRenderData>)0x0) {
    pFVar11 = ::FName::FName(local_70,"STAT_PhysicsFields_SendRenderData");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_PhysicsFields_SendRenderData>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PhysicsFields_SendRenderData,
                        *pFVar11,L"Send Render Data [GT]","STATGROUP_PhysicsFields",
                        "STATCAT_Advanced",L"PhysicsFields",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar2 = *(FName *)FVar12;
  bVar6 = false;
  bVar5 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  bVar24 = false;
  bVar7 = false;
  if ((FVar2.ComparisonIndex.Value.Value != 0) || (FVar2.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_b4._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar6 = false;
      bVar5 = true;
      bVar24 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.ComparisonIndex.Value = FVar2.ComparisonIndex.Value.Value;
        local_a0.Number = FVar2.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsField\\PhysicsFieldComponent.cpp"
                   ,0x35a);
        bVar6 = true;
        bVar5 = true;
        bVar24 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_90 = FVar2;
      FThreadStats::AddMessage(FVar2,CycleScopeStart);
      bVar7 = true;
      goto LAB_1483a3163;
    }
  }
  bVar6 = bVar24;
  bVar5 = bVar7;
  bVar7 = false;
  local_90 = local_88;
LAB_1483a3163:
  UActorComponent::SendRenderTransform_Concurrent((UActorComponent *)this);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar14 = IConsoleManager::Get();
    TransientLifetimeCVar =
         (IConsoleVariable *)
         (**(code **)((longlong)*pIVar14 + 0xc0))
                   (pIVar14,L"r.PhysicsField.Rendering.TransientLifetime",1);
    _Init_thread_footer(&::_TSS0);
  }
  if (TransientLifetimeCVar == (IConsoleVariable *)0x0) {
    fVar25 = 0.0;
  }
  else {
    fVar25 = (float)(**(code **)(*(longlong *)TransientLifetimeCVar + 0xd0))();
  }
  local_res20[0] = 0x300;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,2,0,&local_c8,2,&local_bc);
  memcpy(local_c8.Data,local_res20,2);
  local_b8 = 0;
  do {
    uVar10 = local_b8;
    lVar20 = 0x310;
    if (local_b8 != 0) {
      lVar20 = 0x318;
    }
    lVar16 = *(longlong *)(&this->field_0x0 + lVar20);
    local_78 = lVar20;
    if (lVar16 != 0) {
      local_a8 = *(int *)(lVar16 + 0xf8);
      bVar24 = local_b8 == 1;
      if (*(longlong *)&this->field_0xb0 == 0) {
        pUVar13 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
        lVar16 = *(longlong *)(&this->field_0x0 + lVar20);
        if (pUVar13 != (UWorld *)0x0) goto LAB_1483a3258;
        dVar26 = 0.0;
      }
      else {
LAB_1483a3258:
        pUVar13 = *(UWorld **)&this->field_0xb0;
        if (pUVar13 == (UWorld *)0x0) {
          pUVar13 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
          lVar16 = *(longlong *)(&this->field_0x0 + lVar20);
        }
        dVar26 = pUVar13->TimeSeconds;
      }
      DestructItems<FFieldSystemCommand,int>
                ((FFieldSystemCommand *)((ForAnyElementType *)(lVar16 + 0xf0))->Data,
                 *(int *)(lVar16 + 0xf8));
      *(undefined4 *)(lVar16 + 0xf8) = 0;
      if (*(int *)(lVar16 + 0xfc) != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (200,8,0,(ForAnyElementType *)(lVar16 + 0xf0),0,(int *)(lVar16 + 0xfc));
      }
      lVar16 = *(longlong *)(&this->field_0x0 + lVar20);
      pFVar19 = (ForAnyElementType *)(lVar16 + 0xf0);
      if ((local_c0 <= (int)uVar10) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar23 = (longlong)(int)uVar10;
      pTVar18 = this->PersistentCommands + (byte)local_c8.Data[lVar23];
      local_b0 = lVar23;
      if (((TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *)pFVar19 == pTVar18) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar15 = pTVar18->ArrayNum;
      if (iVar15 != 0) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (200,8,iVar15,pFVar19,(int *)(lVar16 + 0xf8),(int *)(lVar16 + 0xfc));
        ConstructItems<FFieldSystemCommand,FFieldSystemCommand,int>
                  (pFVar19->Data + (longlong)iVar9 * 200,
                   (FFieldSystemCommand *)(pTVar18->AllocatorInstance).Data,iVar15);
      }
      lVar16 = *(longlong *)(&this->field_0x0 + lVar20);
      pFVar19 = (ForAnyElementType *)(lVar16 + 0xf0);
      if ((local_c0 <= (int)uVar10) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar18 = this->TransientCommands + (byte)local_c8.Data[lVar23];
      if (((TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *)pFVar19 == pTVar18) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar15 = pTVar18->ArrayNum;
      if (iVar15 != 0) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (200,8,iVar15,pFVar19,(int *)(lVar16 + 0xf8),(int *)(lVar16 + 0xfc));
        ConstructItems<FFieldSystemCommand,FFieldSystemCommand,int>
                  (pFVar19->Data + (longlong)iVar9 * 200,
                   (FFieldSystemCommand *)(pTVar18->AllocatorInstance).Data,iVar15);
      }
      lVar16 = *(longlong *)(&this->field_0x0 + lVar20);
      pFVar19 = (ForAnyElementType *)(lVar16 + 0xf0);
      if ((local_c0 <= (int)uVar10) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar18 = this->ConstructionCommands + (byte)local_c8.Data[lVar23];
      if (((TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *)pFVar19 == pTVar18) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar15 = pTVar18->ArrayNum;
      if (iVar15 != 0) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (200,8,iVar15,pFVar19,(int *)(lVar16 + 0xf8),(int *)(lVar16 + 0xfc));
        ConstructItems<FFieldSystemCommand,FFieldSystemCommand,int>
                  (pFVar19->Data + (longlong)iVar9 * 200,
                   (FFieldSystemCommand *)(pTVar18->AllocatorInstance).Data,iVar15);
      }
      if (uVar10 == 1) {
        if ((local_c0 < 2) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar16 = local_b0;
        uVar22 = this->TransientCommands[(byte)local_c8.Data[1]].ArrayNum - 1;
        if (-1 < (int)uVar22) {
          lVar23 = (longlong)(int)uVar22;
          lVar21 = lVar23 * 200;
          do {
            local_98 = lVar23;
            if ((local_c0 < 2) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FVar1 = local_c8.Data[lVar16];
            local_b0 = CONCAT44(local_b0._4_4_,~uVar22);
            uVar17 = ~uVar22 >> 0x1f;
            uVar10 = 0;
            if ((int)uVar22 < this->TransientCommands[(byte)FVar1].ArrayNum) {
              uVar10 = uVar17;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (fVar25 < (float)dVar26 -
                         *(float *)(this->TransientCommands[(byte)FVar1].AllocatorInstance.Data +
                                   lVar21 + 0x18)) {
              if ((local_c0 < 2) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pTVar18 = this->TransientCommands + (byte)local_c8.Data[lVar16];
              uVar10 = 0;
              if ((int)uVar22 < pTVar18->ArrayNum) {
                uVar10 = uVar17;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              _Dst = (pTVar18->AllocatorInstance).Data + lVar21;
              *(undefined4 *)(_Dst + 0xc0) = 0;
              if (*(void **)(_Dst + 0xb8) != (void *)0x0) {
                FMemory::Free(*(void **)(_Dst + 0xb8));
              }
              TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (_Dst + 0x78);
              puVar3 = *(undefined8 **)(_Dst + 8);
              if (puVar3 != (undefined8 *)0x0) {
                (**(code **)*puVar3)(puVar3,1);
              }
              iVar15 = (int)local_b0 + pTVar18->ArrayNum;
              if (iVar15 != 0) {
                memmove(_Dst,_Dst + 200,(longlong)iVar15 * 200);
              }
              pTVar18->ArrayNum = pTVar18->ArrayNum + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (200,8,&pTVar18->AllocatorInstance,pTVar18->ArrayNum,&pTVar18->ArrayMax);
              lVar23 = local_98;
            }
            lVar23 = lVar23 + -1;
            lVar21 = lVar21 + -200;
            uVar22 = uVar22 - 1;
            lVar20 = local_78;
            uVar10 = local_b8;
            local_98 = lVar23;
          } while (-1 < (int)uVar22);
        }
      }
      else {
        if ((local_c0 <= (int)uVar10) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar18 = this->TransientCommands + (byte)local_c8.Data[lVar23];
        DestructItems<FFieldSystemCommand,int>
                  ((FFieldSystemCommand *)(pTVar18->AllocatorInstance).Data,pTVar18->ArrayNum);
        pTVar18->ArrayNum = 0;
        if (pTVar18->ArrayMax != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (200,8,0,&pTVar18->AllocatorInstance,0,&pTVar18->ArrayMax);
        }
      }
      if ((0 < ((*(FPhysicsFieldInstance **)(&this->field_0x0 + lVar20))->FieldCommands).ArrayNum)
         || (0 < local_a8)) {
        FPhysicsFieldInstance::UpdateInstance
                  (*(FPhysicsFieldInstance **)(&this->field_0x0 + lVar20),(float)dVar26,bVar24);
      }
    }
    FVar2 = local_90;
    local_b8 = uVar10 + 1;
    if (1 < local_b8) {
      if (local_c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data);
      }
      if (bVar5) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar6) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar7) {
        FThreadStats::AddMessage(FVar2,CycleScopeEnd);
      }
      return;
    }
  } while( true );
}

// StaticRegisterNativesUPhysicsFieldComponent @ 1483af720

void __cdecl UPhysicsFieldComponent::StaticRegisterNativesUPhysicsFieldComponent(void)

{
  return;
}

// TickComponent @ 1483b1590

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
UPhysicsFieldComponent::TickComponent
          (UPhysicsFieldComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  int *piVar1;
  TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FFieldSystemCommand *pFVar4;
  UWorld *pUVar5;
  
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_>::operator=
            (this->PersistentCommands + 1,this->PersistentCommands + 2);
  pTVar2 = this->TransientCommands + 2;
  TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_>::operator=
            (this->TransientCommands + 1,pTVar2);
  piVar1 = &this->TransientCommands[2].ArrayMax;
  pFVar4 = (FFieldSystemCommand *)(pTVar2->AllocatorInstance).Data;
  iVar3 = this->TransientCommands[2].ArrayNum;
  if (this->TransientCommands[2].ArrayMax < 0) {
    DestructItems<FFieldSystemCommand,int>(pFVar4,iVar3);
    this->TransientCommands[2].ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (200,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FFieldSystemCommand,int>(pFVar4,iVar3);
    this->TransientCommands[2].ArrayNum = 0;
  }
  if (*(longlong *)&this->field_0xb0 == 0) {
    pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    if (pUVar5 == (UWorld *)0x0) goto LAB_1483b1671;
  }
  pUVar5 = *(UWorld **)&this->field_0xb0;
  if (pUVar5 == (UWorld *)0x0) {
    pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  if (pUVar5->Scene != (FSceneInterface *)0x0) {
    pUVar5 = *(UWorld **)&this->field_0xb0;
    if (pUVar5 == (UWorld *)0x0) {
      pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    (**(code **)(pUVar5->Scene->_padding_ + 0x350))();
  }
LAB_1483b1671:
  UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)this);
  return;
}

