// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaPlate
// Functions: 17

// StaticClass @ 14ea87330

UClass * __cdecl AMediaPlate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AMediaPlate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaPlate",L"MediaPlate",
               &Z_Registration_Info_UClass_AMediaPlate.InnerSingleton,
               StaticRegisterNativesAMediaPlate,0x2d8,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<AMediaPlate>,
               InternalVTableHelperCtorCaller<AMediaPlate>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AMediaPlate.InnerSingleton;
}

// AMediaPlate @ 14ea88e30

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AMediaPlate * __thiscall AMediaPlate::AMediaPlate(AMediaPlate *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AMediaPlate__6B_;
  (this->MediaPlateComponent).field0_0x0.DebugPtr = (UMediaPlateComponent *)0x0;
  (this->StaticMeshComponent).field0_0x0.DebugPtr = (UStaticMeshComponent *)0x0;
  this->bEnableHoldoutComposite = false;
  return this;
}

// AMediaPlate @ 14ea88e70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AMediaPlate * __thiscall AMediaPlate::AMediaPlate(AMediaPlate *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  UMediaPlateComponent *pUVar6;
  UStaticMeshComponent *pUVar7;
  TObjectPtr<UStaticMesh>_u_0 TVar8;
  FName local_res8;
  TVector<double>_u_0 local_28;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AMediaPlate__6B_;
  (this->MediaPlateComponent).field0_0x0.DebugPtr = (UMediaPlateComponent *)0x0;
  (this->StaticMeshComponent).field0_0x0.DebugPtr = (UStaticMeshComponent *)0x0;
  this->bEnableHoldoutComposite = false;
  pFVar3 = ::FName::FName(&local_res8,L"Root");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  this->_padding_ = (longlong)pUVar5;
  FLazyName::Resolve(&MediaPlateComponentName);
  pUVar4 = UMediaPlateComponent::StaticClass();
  pUVar6 = (UMediaPlateComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,local_res8,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UMediaPlateComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->MediaPlateComponent).field0_0x0.DebugPtr = pUVar6;
  pFVar3 = ::FName::FName(&local_res8,L"StaticMeshComponent");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  pUVar7 = (UStaticMeshComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (UStaticMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->StaticMeshComponent).field0_0x0.DebugPtr = pUVar7;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)pUVar7,(USceneComponent *)this->_padding_,(FName)0x0);
  pbVar1 = (byte *)((longlong)&((this->StaticMeshComponent).field0_0x0.DebugPtr)->_padding_ + 6);
  *pbVar1 = *pbVar1 & 0xbf;
  pbVar1 = (byte *)((longlong)&((this->StaticMeshComponent).field0_0x0.DebugPtr)->_padding_ + 6);
  *pbVar1 = *pbVar1 & 0xdf;
  pUVar6 = (this->MediaPlateComponent).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 = (this->StaticMeshComponent).field0_0x0.DebugPtr,
     pUVar7 != (UStaticMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (pUVar6->StaticMeshComponent).field0_0x0 = (this->StaticMeshComponent).field0_0x0;
  pUVar6 = (this->MediaPlateComponent).field0_0x0.DebugPtr;
  pUVar7 = (pUVar6->StaticMeshComponent).field0_0x0.DebugPtr;
  if (pUVar7 != (UStaticMeshComponent *)0x0) {
    local_28._s_0.X = (double)___xmm_3ff00000000000003ff0000000000000;
    local_28._s_0.Y = _UNK_150689688;
    local_28._s_0.Z = __real_3fe2000000000000;
    USceneComponent::SetRelativeScale3D((USceneComponent *)pUVar7,(TVector<double> *)&local_28._s_0)
    ;
    UMediaPlateComponent::UpdateLetterboxes(pUVar6);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FGCObject::RegisterGCObject((FGCObject *)&::ConstructorStatics);
      ::ConstructorStatics.Plane.Object.field0_0x0 = (TObjectPtr<UStaticMesh>_u_0)(FObjectPtr)0x0;
      ::ConstructorStatics.Plane._padding_ =
           (longlong)&___7__FObjectFinder_VUStaticMesh___ConstructorHelpers__6B_;
      ConstructorHelpers::CheckIfIsInConstructor(L"/MediaPlate/SM_MediaPlateScreen");
      ::FString::FString((FString *)&local_28._s_0,L"/MediaPlate/SM_MediaPlateScreen");
      ConstructorHelpers::StripObjectClass((FString *)&local_28._s_0,true);
      TVar8.DebugPtr =
           ConstructorHelpersInternal::FindOrLoadObject<UStaticMesh>((FString *)&local_28._s_0,0);
      if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
         (TVar8.DebugPtr == (UStaticMesh *)0x0)) {
        ::ConstructorStatics.Plane.Object.field0_0x0 =
             (TObjectPtr<UStaticMesh>_u_0)(TObjectPtr<UStaticMesh>_u_0)TVar8.DebugPtr;
        if (TVar8.DebugPtr == (UStaticMesh *)0x0) {
          ConstructorHelpers::FailedToFind(L"/MediaPlate/SM_MediaPlateScreen");
        }
      }
      else {
        UE::GC::MarkAsReachable((UObject *)TVar8.DebugPtr);
        ::ConstructorStatics.Plane.Object.field0_0x0 =
             (TObjectPtr<UStaticMesh>_u_0)(TObjectPtr<UStaticMesh>_u_0)TVar8.DebugPtr;
      }
      if ((void *)local_28._s_0.X != (void *)0x0) {
        FMemory::Free((void *)local_28._s_0.X);
      }
      atexit(`AMediaPlate::AMediaPlate'::__l2::_dynamic_atexit_destructor_for__ConstructorStatics__)
      ;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (::ConstructorStatics.Plane.Object.field0_0x0 != (UStaticMesh *)0x0) {
    (**(code **)(((this->StaticMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb28))();
  }
  return this;
}

// ~AMediaPlate @ 14ea89850

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AMediaPlate::~AMediaPlate(AMediaPlate *this)

{
  this->_padding_ = (longlong)&___7AMediaPlate__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// BeginDestroy @ 14ea8a410

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall AMediaPlate::BeginDestroy(AMediaPlate *this)

{
  int iVar1;
  uint uVar2;
  UClass *pUVar3;
  longlong lVar4;
  int *piVar5;
  
  if ((this->_padding_ & 0x30) == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&CSVActorClassNameToCountMapLock);
    pUVar3 = GetParentNativeClass((UClass *)this->_padding_);
    piVar5 = (int *)0x0;
    if (pUVar3 != (UClass *)0x0) {
      piVar5 = (int *)pUVar3->_padding_;
    }
    uVar2 = ::GetTypeHash((FNameEntryId)(uint)piVar5);
    if (CSVActorClassNameToCountMap._8_4_ != CSVActorClassNameToCountMap._52_4_) {
      lVar4 = 0x154c1e3c8;
      if (CSVActorClassNameToCountMap._64_8_ != 0) {
        lVar4 = CSVActorClassNameToCountMap._64_8_;
      }
      iVar1 = *(int *)(lVar4 + (ulonglong)
                               (CSVActorClassNameToCountMap._72_4_ - 1 &
                               (int)((ulonglong)piVar5 >> 0x20) + uVar2) * 4);
      while (iVar1 != -1) {
        lVar4 = CSVActorClassNameToCountMap._0_8_ + (longlong)iVar1 * 0x14;
        if (*(int **)(CSVActorClassNameToCountMap._0_8_ + (longlong)iVar1 * 0x14) == piVar5) {
          piVar5 = (int *)(lVar4 + 8);
          if (lVar4 == 0) {
            piVar5 = (int *)0x0;
          }
          if (piVar5 != (int *)0x0) {
            *piVar5 = *piVar5 + -1;
          }
          break;
        }
        iVar1 = *(int *)(lVar4 + 0xc);
      }
    }
    CSVActorTotalCount = CSVActorTotalCount + -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&CSVActorClassNameToCountMapLock);
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// ConditionallyEnableHoldoutComposite @ 14ea8a760

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall AMediaPlate::ConditionallyEnableHoldoutComposite(AMediaPlate *this)

{
  if (this->bEnableHoldoutComposite != false) {
    SetHoldoutCompositeEnabled(this,true);
    return;
  }
  return;
}

// GetCurrentMaterial @ 14ea8aff0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

UMaterialInterface * __thiscall AMediaPlate::GetCurrentMaterial(AMediaPlate *this)

{
  UStaticMeshComponent *pUVar1;
  UMaterialInterface *pUVar2;
  
  pUVar1 = (this->StaticMeshComponent).field0_0x0.DebugPtr;
  if ((pUVar1 != (UStaticMeshComponent *)0x0) && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)) {
    pUVar2 = UStaticMeshComponent::GetMaterial((this->StaticMeshComponent).field0_0x0.DebugPtr,0);
    return pUVar2;
  }
  return (UMaterialInterface *)0x0;
}

// GetCurrentOverlayMaterial @ 14ea8b020

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

UMaterialInterface * __thiscall AMediaPlate::GetCurrentOverlayMaterial(AMediaPlate *this)

{
  UStaticMeshComponent *pUVar1;
  UMaterialInterface *pUVar2;
  
  pUVar1 = (this->StaticMeshComponent).field0_0x0.DebugPtr;
  if ((pUVar1 != (UStaticMeshComponent *)0x0) && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)) {
    pUVar2 = UMeshComponent::GetOverlayMaterial
                       ((UMeshComponent *)(this->StaticMeshComponent).field0_0x0.DebugPtr);
    return pUVar2;
  }
  return (UMaterialInterface *)0x0;
}

// GetPrivateStaticClass @ 14ea8b2e0

UClass * __cdecl AMediaPlate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AMediaPlate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaPlate",L"MediaPlate",
               &Z_Registration_Info_UClass_AMediaPlate.InnerSingleton,
               StaticRegisterNativesAMediaPlate,0x2d8,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<AMediaPlate>,
               InternalVTableHelperCtorCaller<AMediaPlate>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AMediaPlate.InnerSingleton;
}

// IsHoldoutCompositeEnabled @ 14ea8be70

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall AMediaPlate::IsHoldoutCompositeEnabled(AMediaPlate *this)

{
  return this->bEnableHoldoutComposite;
}

// PostActorCreated @ 14ea8d4e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall AMediaPlate::PostActorCreated(AMediaPlate *this)

{
  return;
}

// PostLoad @ 14ea8d540

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall AMediaPlate::PostLoad(AMediaPlate *this)

{
  byte *pbVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPackageFileVersion FVar6;
  ForAnyElementType *pFVar7;
  AMediaPlate *apAStack_18 [2];
  
  UObject::PostLoad((UObject *)this);
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pFVar7 = (ForAnyElementType *)(lVar2 + 0x1a8);
    apAStack_18[0] = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    if ((pFVar7->Data <= (FScriptContainerElement *)apAStack_18) &&
       ((FScriptContainerElement *)apAStack_18 <
        pFVar7->Data + (longlong)*(int *)(lVar2 + 0x1b4) * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = *(int *)(lVar2 + 0x1b0);
    if (iVar5 == *(int *)(lVar2 + 0x1b4)) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar7,(int *)(lVar2 + 0x1b4));
    }
    *(int *)(lVar2 + 0x1b0) = iVar5 + 1;
    *(AMediaPlate **)(pFVar7->Data + (longlong)iVar5 * 8) = apAStack_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (apAStack_18[0] != (AMediaPlate *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)apAStack_18[0]);
    }
  }
  FVar6 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  if (*(int *)FVar6 < 0x156) {
    *(byte *)((longlong)&this->_padding_ + 3) =
         -((char)this->_padding_ != '\0') & 8U | *(byte *)((longlong)&this->_padding_ + 3) & 0xf7;
  }
  if ((this->_padding_ & 0x10) != 0) {
    pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
    *pbVar1 = *pbVar1 & 0xfb;
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 | 1;
  return;
}

// PostRegisterAllComponents @ 14ea8d550

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AMediaPlate::PostRegisterAllComponents(AMediaPlate *this)

{
  UStaticMeshComponent *pUVar1;
  
  AActor::PostRegisterAllComponents((AActor *)this);
  pUVar1 = (this->StaticMeshComponent).field0_0x0.DebugPtr;
  if (((pUVar1 != (UStaticMeshComponent *)0x0) && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)) &&
     (this->bEnableHoldoutComposite != false)) {
    SetHoldoutCompositeEnabled(this,true);
    return;
  }
  return;
}

// SetHoldoutCompositeEnabled @ 14ea8f380

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AMediaPlate::SetHoldoutCompositeEnabled(AMediaPlate *this,bool param_1)

{
  int iVar1;
  UStaticMeshComponent *pUVar2;
  bool bVar3;
  UWorld *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UCompositeCoreSubsystem *this_00;
  
  this->bEnableHoldoutComposite = param_1;
  pUVar4 = AActor::GetWorld((AActor *)this);
  if (pUVar4 == (UWorld *)0x0) {
    return;
  }
  pUVar5 = Z_Construct_UClass_UCompositeCoreSubsystem_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar5 != (UClass *)0x0) goto LAB_14ea8f3ce;
  }
  else if (pUVar5 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
LAB_14ea8f3ce:
    pUVar6 = Z_Construct_UClass_UCompositeCoreSubsystem_NoRegister();
    if (pUVar6 != (UClass *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if (((int)pUVar5->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_14ea8f3fe;
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_14ea8f3fe:
  this_00 = (UCompositeCoreSubsystem *)
            FSubsystemCollectionBase::GetSubsystemInternal
                      ((FSubsystemCollectionBase *)&pUVar4->SubsystemCollection,pUVar5);
  if ((this_00 != (UCompositeCoreSubsystem *)0x0) && (((uint)this_00->_padding_ >> 0x1e & 1) == 0))
  {
    pUVar2 = (this->StaticMeshComponent).field0_0x0.DebugPtr;
    if (this->bEnableHoldoutComposite != false) {
      UCompositeCoreSubsystem::RegisterPrimitive(this_00,(UPrimitiveComponent *)pUVar2);
      return;
    }
    UCompositeCoreSubsystem::UnregisterPrimitive(this_00,(UPrimitiveComponent *)pUVar2);
  }
  return;
}

// StaticRegisterNativesAMediaPlate @ 14ea8fe10

void __cdecl AMediaPlate::StaticRegisterNativesAMediaPlate(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_AMediaPlate_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIsHoldoutCompositeEnabled @ 14ea91be0

void __cdecl
AMediaPlate::execIsHoldoutCompositeEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 0x12);
  return;
}

// execSetHoldoutCompositeEnabled @ 14ea92610

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
AMediaPlate::execSetHoldoutCompositeEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetHoldoutCompositeEnabled((AMediaPlate *)param_1,local_res10[0] != 0);
  return;
}

