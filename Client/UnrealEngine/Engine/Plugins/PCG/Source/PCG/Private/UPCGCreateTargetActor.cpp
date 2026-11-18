// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 14

// StaticClass @ 149b2f9d0

UClass * __cdecl UPCGCreateTargetActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCreateTargetActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCreateTargetActor",
               &Z_Registration_Info_UClass_UPCGCreateTargetActor.InnerSingleton,
               StaticRegisterNativesUPCGCreateTargetActor,800,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGCreateTargetActor>,
               InternalVTableHelperCtorCaller<UPCGCreateTargetActor>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCreateTargetActor.InnerSingleton;
}

// UPCGCreateTargetActor @ 149b564d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPCGCreateTargetActor * __thiscall
UPCGCreateTargetActor::UPCGCreateTargetActor(UPCGCreateTargetActor *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->AttachOptions = Attached;
  this_00 = &(this->RootActor).SoftObjectPtr.field_0x18;
  *(undefined ***)this = &___7UPCGCreateTargetActor__6B_;
  (this->TemplateActor).field0_0x0.DebugPtr = (AActor *)0x0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->RootActor).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->RootActor).SoftObjectPtr = 0;
  *(undefined8 *)&(this->RootActor).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->RootActor).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->ActorLabel).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorLabel).Data.ArrayNum = 0;
  (this->ActorLabel).Data.ArrayMax = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->ActorPivot).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0]
  ;
  (this->ActorPivot).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->ActorPivot).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->ActorPivot).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->ActorPivot).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->ActorPivot).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->ActorPivot).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->ActorPivot).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->ActorPivot).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->ActorPivot).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->ActorPivot).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->ActorPivot).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->CommaSeparatedActorTags).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CommaSeparatedActorTags).Data.ArrayNum = 0;
  (this->CommaSeparatedActorTags).Data.ArrayMax = 0;
  (this->PropertyOverrideDescriptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyOverrideDescriptions).ArrayNum = 0;
  (this->PropertyOverrideDescriptions).ArrayMax = 0;
  (this->PostProcessFunctionNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PostProcessFunctionNames).ArrayNum = 0;
  (this->PostProcessFunctionNames).ArrayMax = 0;
  FPCGDataLayerSettings::FPCGDataLayerSettings(&this->DataLayerSettings);
  (this->HLODSettings).HLODSourceType = Self;
  (this->HLODSettings).HLODLayer.field0_0x0.DebugPtr = (UHLODLayer *)0x0;
  this->bDeleteActorsBeforeGeneration = false;
  (this->TemplateActorClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->bAllowTemplateActorEditing = false;
  return this;
}

// UPCGCreateTargetActor @ 149b56600

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPCGCreateTargetActor * __thiscall
UPCGCreateTargetActor::UPCGCreateTargetActor
          (UPCGCreateTargetActor *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this_00 = &(this->RootActor).SoftObjectPtr.field_0x18;
  *(undefined ***)this = &___7UPCGCreateTargetActor__6B_;
  (this->TemplateActor).field0_0x0.DebugPtr = (AActor *)0x0;
  this->AttachOptions = Attached;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->RootActor).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->RootActor).SoftObjectPtr = 0;
  *(undefined8 *)&(this->RootActor).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->RootActor).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->ActorLabel).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorLabel).Data.ArrayNum = 0;
  (this->ActorLabel).Data.ArrayMax = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->ActorPivot).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0]
  ;
  (this->ActorPivot).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->ActorPivot).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->ActorPivot).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->ActorPivot).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->ActorPivot).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->ActorPivot).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->ActorPivot).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->ActorPivot).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->ActorPivot).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->ActorPivot).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->ActorPivot).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->CommaSeparatedActorTags).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CommaSeparatedActorTags).Data.ArrayNum = 0;
  (this->CommaSeparatedActorTags).Data.ArrayMax = 0;
  (this->PropertyOverrideDescriptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyOverrideDescriptions).ArrayNum = 0;
  (this->PropertyOverrideDescriptions).ArrayMax = 0;
  (this->PostProcessFunctionNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PostProcessFunctionNames).ArrayNum = 0;
  (this->PostProcessFunctionNames).ArrayMax = 0;
  FPCGDataLayerSettings::FPCGDataLayerSettings(&this->DataLayerSettings);
  (this->HLODSettings).HLODSourceType = Self;
  (this->HLODSettings).HLODLayer.field0_0x0.DebugPtr = (UHLODLayer *)0x0;
  this->bDeleteActorsBeforeGeneration = false;
  (this->TemplateActorClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->bAllowTemplateActorEditing = false;
  bVar4 = PCGHelpers::IsNewObjectAndNotDefault((UObject *)this,false);
  if (bVar4) {
    this->AttachOptions = InFolder;
  }
  return this;
}

// ~UPCGCreateTargetActor @ 149b58df0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPCGCreateTargetActor::~UPCGCreateTargetActor(UPCGCreateTargetActor *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  *(undefined ***)this = &___7UPCGCreateTargetActor__6B_;
  FPCGDataLayerSettings::~FPCGDataLayerSettings(&this->DataLayerSettings);
  pFVar1 = (this->PostProcessFunctionNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPCGObjectPropertyOverrideDescription,int>
            ((FPCGObjectPropertyOverrideDescription *)
             (this->PropertyOverrideDescriptions).AllocatorInstance.Data,
             (this->PropertyOverrideDescriptions).ArrayNum);
  pFVar1 = (this->PropertyOverrideDescriptions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CommaSeparatedActorTags).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActorLabel).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->RootActor).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// BeginDestroy @ 149b66bc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPCGCreateTargetActor::BeginDestroy(UPCGCreateTargetActor *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  int iVar2;
  ForElementType<UObject_*> FVar3;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if ((*(uint *)&this->field_0x8 >> 0xf & 1) == 0) {
    aFStackX_8[0].ComparisonIndex.Value = *(uint *)&this->field_0x18;
    aFStackX_8[0].Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  UObject::SetLinker((UObject *)this,(FLinkerLoad *)0x0,-1,true,false);
  aFStackX_8[0].ComparisonIndex.Value = 0;
  aFStackX_8[0].Number = 0;
  UObjectBase::LowLevelRename((UObjectBase *)this,(FName)0x0,(UObject *)0x0);
  UObjectBase::SetExternalPackage((UObjectBase *)this,(UPackage *)0x0);
  pTVar5 = &DebugBeginDestroyed;
  pTVar4 = &DebugBeginDestroyed;
  if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar4 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugBeginDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)((longlong)pTVar4 + (longlong)DebugBeginDestroyed.ArrayNum * 8)
  ;
  FVar3 = (ForElementType<UObject_*>)pTVar4;
  if ((ForElementType<UObject_*>)pTVar4 != FVar1) {
    while (*(UPCGCreateTargetActor **)FVar3 != this) {
      FVar3 = (ForElementType<UObject_*>)((longlong)FVar3 + 8);
      if (FVar3 == FVar1) {
        return;
      }
    }
    iVar2 = (int)((longlong)FVar3 - (longlong)pTVar4 >> 3);
    if (iVar2 != -1) {
      if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar5 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugBeginDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar5 + (longlong)iVar2 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugBeginDestroyed.ArrayNum - iVar2) + -1) << 3);
      DebugBeginDestroyed.ArrayNum = DebugBeginDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// CreateElement @ 149b6a810

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedPtr<IPCGElement,1> * __thiscall
UPCGCreateTargetActor::CreateElement
          (UPCGCreateTargetActor *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<IPCGElement,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IPCGElement *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPCGCreateTargetActorElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGCreateTargetActorElement__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<IPCGElement,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (IPCGElement *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149b90500

UClass * __cdecl UPCGCreateTargetActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCreateTargetActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCreateTargetActor",
               &Z_Registration_Info_UClass_UPCGCreateTargetActor.InnerSingleton,
               StaticRegisterNativesUPCGCreateTargetActor,800,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGCreateTargetActor>,
               InternalVTableHelperCtorCaller<UPCGCreateTargetActor>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCreateTargetActor.InnerSingleton;
}

// InputPinProperties @ 149b92360

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGCreateTargetActor::InputPinProperties
          (UPCGCreateTargetActor *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  EPCGPinUsage EVar3;
  FPCGPinProperties *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FPCGPinProperties *pFVar9;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *pTVar10;
  FName *pFVar11;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> local_58;
  FPCGPinProperties local_48;
  
  piVar1 = &__return_storage_ptr__->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &__return_storage_ptr__->ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  pFVar9 = PCGObjectPropertyOverrideHelpers::CreateObjectPropertiesOverridePin
                     (&local_48,PCGCreateTargetActorConstants::ActorPropertyOverridesLabel,
                      &PCGCreateTargetActorConstants::ActorPropertyOverridesTooltip);
  pFVar4 = (FPCGPinProperties *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar4 <= pFVar9) && (pFVar9 < pFVar4 + *piVar2)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar10;
    }
  }
  iVar7 = *piVar1;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,piVar2);
  }
  *piVar1 = iVar7 + 1;
  pFVar11 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x30);
  *pFVar11 = pFVar9->Label;
  EVar3 = pFVar9->Usage;
  pFVar11[2].ComparisonIndex = 0;
  pFVar11[2].Number = 0;
  *(EPCGPinUsage *)&pFVar11[1].ComparisonIndex.Value = EVar3;
  pFVar11[2] = (FName)(pFVar9->AllowedTypes).Ids.AllocatorInstance.Data;
  (pFVar9->AllowedTypes).Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar11[3].ComparisonIndex.Value = (pFVar9->AllowedTypes).Ids.ArrayNum;
  pFVar11[3].Number = (pFVar9->AllowedTypes).Ids.ArrayMax;
  (pFVar9->AllowedTypes).Ids.ArrayNum = 0;
  (pFVar9->AllowedTypes).Ids.ArrayMax = 0;
  pFVar11[4].ComparisonIndex.Value = (pFVar9->AllowedTypes).CustomSubtype;
  *(bool *)&pFVar11[5].ComparisonIndex.Value = pFVar9->bAllowMultipleData;
  *(EPCGPinStatus *)((longlong)&pFVar11[5].ComparisonIndex.Value + 1) = pFVar9->PinStatus;
  *(bool *)((longlong)&pFVar11[5].ComparisonIndex.Value + 2) = pFVar9->bInvisiblePin;
  *(bool *)((longlong)&pFVar11[5].ComparisonIndex.Value + 3) = pFVar9->bAllowMultipleConnections;
  if (local_48.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllowedTypes.Ids.AllocatorInstance.Data);
  }
  pTVar10 = FPCGDataLayerSettings::InputPinProperties(&this->DataLayerSettings,&local_58);
  if (__return_storage_ptr__ == pTVar10) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar10;
    }
  }
  iVar7 = pTVar10->ArrayNum;
  if (iVar7 != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,iVar7,&__return_storage_ptr__->AllocatorInstance,piVar1,piVar2);
    memmove((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0x30,
            (pTVar10->AllocatorInstance).Data,(longlong)iVar7 * 0x30);
    pTVar10->ArrayNum = 0;
  }
  DestructItems<FPCGPinProperties,int>
            ((FPCGPinProperties *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if ((FPCGPinProperties *)local_58.AllocatorInstance.Data != (FPCGPinProperties *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b94070

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGCreateTargetActor::OutputPinProperties
          (UPCGCreateTargetActor *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar3 = FText::GetEmpty();
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Param);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,false,true,pFVar3);
  return __return_storage_ptr__;
}

// PostLoad @ 149b95980

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPCGCreateTargetActor::PostLoad(UPCGCreateTargetActor *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// SetAllowTemplateActorEditing @ 149b97b50

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
UPCGCreateTargetActor::SetAllowTemplateActorEditing(UPCGCreateTargetActor *this,bool param_1)

{
  this->bAllowTemplateActorEditing = param_1;
  return;
}

// SetTemplateActorClass @ 149b98030

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
UPCGCreateTargetActor::SetTemplateActorClass
          (UPCGCreateTargetActor *this,TSubclassOf<AActor> *param_1)

{
  UClass *pUVar1;
  
  if (!UE::GC::GIsIncrementalReachabilityPending) {
    (this->TemplateActorClass).Class.field0_0x0 = (param_1->Class).field0_0x0;
    return;
  }
  pUVar1 = (param_1->Class).field0_0x0.DebugPtr;
  if (pUVar1 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
    (this->TemplateActorClass).Class.field0_0x0 = (param_1->Class).field0_0x0;
    return;
  }
  (this->TemplateActorClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return;
}

// StaticRegisterNativesUPCGCreateTargetActor @ 149b98420

void __cdecl UPCGCreateTargetActor::StaticRegisterNativesUPCGCreateTargetActor(void)

{
  return;
}

// __VTableCtorCaller @ 149b9ac50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UPCGCreateTargetActor::__VTableCtorCaller(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UPCGSettings *this;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UPCGCreateTargetActor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&this[1].Seed = (double)fVar1;
    this[1].OriginalSettings = (UPCGSettings *)(double)fVar2;
    *(double *)&this[1].bUseSeed = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    this[1].CachedElement.Object =
         (IPCGElement *)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
    this[1].CachedElement.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)(double)fVar1;
    this[1].CacheLock.CriticalSection.Opaque1[0] = (void *)(double)fVar2;
    *(double *)this[1].CacheLock.CriticalSection.Opaque2 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    this[1].CacheLock.CriticalSection.Opaque3[0] =
         (void *)(double)GlobalVectorConstants::Float1110.m128_f32[0];
    this[1].CacheLock.CriticalSection.Opaque3[1] = (void *)(double)fVar1;
    this[1].CacheLock.CriticalSection.Opaque3[2] = (void *)(double)fVar2;
    this[1].CachedOverridableParams.AllocatorInstance.Data =
         (FScriptContainerElement *)(double)fVar3;
    this[1].CachedOverridableParams.ArrayNum = 0;
    this[1].CachedOverridableParams.ArrayMax = 0;
    this[1].OverriddenSettingsPropertyBag.field0_0x0.DebugPtr = (UPropertyBag *)0x0;
    this[1].bHasAnyOverridableHardReferences = false;
    this[1].bExecuteOnGPU = false;
    this[1].bDumpCookedHLSL = false;
    this[1].bDumpDataDescriptions = false;
    this[1].bPrintShaderDebugValues = false;
    *(undefined3 *)&this[1].field_0xbd = 0;
    *(undefined8 *)&this[1].DebugBufferSize = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    FPCGDataLayerSettings::FPCGDataLayerSettings((FPCGDataLayerSettings *)&this[2]._padding_);
    *(undefined1 *)(this[3].CacheLock.CriticalSection.Opaque3 + 2) = 0;
    this[3].CachedOverridableParams.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined1 *)&this[3].CachedOverridableParams.ArrayNum = 0;
    this[3].OverriddenSettingsPropertyBag.field0_0x0.DebugPtr = (UPropertyBag *)0x0;
    this[3].bHasAnyOverridableHardReferences = false;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

