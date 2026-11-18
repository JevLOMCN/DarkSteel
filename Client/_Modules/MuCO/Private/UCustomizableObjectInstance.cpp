// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 214

// StaticClass @ 14abaa1b0

UClass * __cdecl UCustomizableObjectInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableObjectInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableObjectInstance",
               &Z_Registration_Info_UClass_UCustomizableObjectInstance.InnerSingleton,
               StaticRegisterNativesUCustomizableObjectInstance,0x2a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomizableObjectInstance>,
               InternalVTableHelperCtorCaller<UCustomizableObjectInstance>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectInstance.InnerSingleton;
}

// UCustomizableObjectInstance @ 14abbd650

UCustomizableObjectInstance * __thiscall
UCustomizableObjectInstance::UCustomizableObjectInstance
          (UCustomizableObjectInstance *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCustomizableObjectInstance__6B_;
  *(undefined8 *)&this->UpdatedDelegate = 0;
  *(undefined8 *)&(this->UpdatedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->UpdatedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->UpdatedNativeDelegate = 0;
  *(undefined8 *)&(this->UpdatedNativeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->UpdatedNativeDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->UpdatedNativeDelegate).field_0x18 = 2;
  *(undefined8 *)&this->PreSetSkeletalMeshDelegate = 0;
  *(undefined8 *)&(this->PreSetSkeletalMeshDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->PreSetSkeletalMeshDelegate).field_0x10 = 0;
  *(undefined8 *)&this->PreSetSkeletalMeshNativeDelegate = 0;
  *(undefined8 *)&(this->PreSetSkeletalMeshNativeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->PreSetSkeletalMeshNativeDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->PreSetSkeletalMeshNativeDelegate).field_0x18 = 2;
  FCustomizableObjectInstanceDescriptor::FCustomizableObjectInstanceDescriptor(&this->Descriptor);
  (this->PrivateData).field0_0x0.DebugPtr = (UCustomizableInstancePrivate *)0x0;
  (this->CustomizableObject_DEPRECATED).field0_0x0.DebugPtr = (UCustomizableObject *)0x0;
  (this->BoolParameters_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoolParameters_DEPRECATED).ArrayNum = 0;
  (this->BoolParameters_DEPRECATED).ArrayMax = 0;
  (this->IntParameters_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IntParameters_DEPRECATED).ArrayNum = 0;
  (this->IntParameters_DEPRECATED).ArrayMax = 0;
  (this->FloatParameters_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloatParameters_DEPRECATED).ArrayNum = 0;
  (this->FloatParameters_DEPRECATED).ArrayMax = 0;
  (this->TextureParameters_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureParameters_DEPRECATED).ArrayNum = 0;
  (this->TextureParameters_DEPRECATED).ArrayMax = 0;
  (this->VectorParameters_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VectorParameters_DEPRECATED).ArrayNum = 0;
  (this->VectorParameters_DEPRECATED).ArrayMax = 0;
  (this->ProjectorParameters_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProjectorParameters_DEPRECATED).ArrayNum = 0;
  (this->ProjectorParameters_DEPRECATED).ArrayMax = 0;
  this->bBuildParameterRelevancy_DEPRECATED = false;
  return this;
}

// UCustomizableObjectInstance @ 14abbd740

UCustomizableObjectInstance * __thiscall
UCustomizableObjectInstance::UCustomizableObjectInstance(UCustomizableObjectInstance *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UCustomizableObjectInstance__6B_;
  *(undefined8 *)&this->UpdatedDelegate = 0;
  *(undefined8 *)&(this->UpdatedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->UpdatedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->UpdatedNativeDelegate = 0;
  *(undefined8 *)&(this->UpdatedNativeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->UpdatedNativeDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->UpdatedNativeDelegate).field_0x18 = 2;
  *(undefined8 *)&this->PreSetSkeletalMeshDelegate = 0;
  *(undefined8 *)&(this->PreSetSkeletalMeshDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->PreSetSkeletalMeshDelegate).field_0x10 = 0;
  *(undefined8 *)&this->PreSetSkeletalMeshNativeDelegate = 0;
  *(undefined8 *)&(this->PreSetSkeletalMeshNativeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->PreSetSkeletalMeshNativeDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->PreSetSkeletalMeshNativeDelegate).field_0x18 = 2;
  FCustomizableObjectInstanceDescriptor::FCustomizableObjectInstanceDescriptor(&this->Descriptor);
  (this->PrivateData).field0_0x0.DebugPtr = (UCustomizableInstancePrivate *)0x0;
  (this->CustomizableObject_DEPRECATED).field0_0x0.DebugPtr = (UCustomizableObject *)0x0;
  (this->BoolParameters_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoolParameters_DEPRECATED).ArrayNum = 0;
  (this->BoolParameters_DEPRECATED).ArrayMax = 0;
  (this->IntParameters_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IntParameters_DEPRECATED).ArrayNum = 0;
  (this->IntParameters_DEPRECATED).ArrayMax = 0;
  (this->FloatParameters_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloatParameters_DEPRECATED).ArrayNum = 0;
  (this->FloatParameters_DEPRECATED).ArrayMax = 0;
  (this->TextureParameters_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureParameters_DEPRECATED).ArrayNum = 0;
  (this->TextureParameters_DEPRECATED).ArrayMax = 0;
  (this->VectorParameters_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VectorParameters_DEPRECATED).ArrayNum = 0;
  (this->VectorParameters_DEPRECATED).ArrayMax = 0;
  (this->ProjectorParameters_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProjectorParameters_DEPRECATED).ArrayNum = 0;
  (this->ProjectorParameters_DEPRECATED).ArrayMax = 0;
  this->bBuildParameterRelevancy_DEPRECATED = false;
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Transactional);
  return this;
}

// ~UCustomizableObjectInstance @ 14abbf7a0

void __thiscall
UCustomizableObjectInstance::~UCustomizableObjectInstance(UCustomizableObjectInstance *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UCustomizableObjectInstance__6B_;
  DestructItems<FCustomizableObjectProjectorParameterValue,int>
            ((FCustomizableObjectProjectorParameterValue *)
             (this->ProjectorParameters_DEPRECATED).AllocatorInstance.Data,
             (this->ProjectorParameters_DEPRECATED).ArrayNum);
  pFVar1 = (this->ProjectorParameters_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCustomizableObjectVectorParameterValue,int>
            ((FCustomizableObjectVectorParameterValue *)
             (this->VectorParameters_DEPRECATED).AllocatorInstance.Data,
             (this->VectorParameters_DEPRECATED).ArrayNum);
  pFVar1 = (this->VectorParameters_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCustomizableObjectTextureParameterValue,int>
            ((FCustomizableObjectTextureParameterValue *)
             (this->TextureParameters_DEPRECATED).AllocatorInstance.Data,
             (this->TextureParameters_DEPRECATED).ArrayNum);
  pFVar1 = (this->TextureParameters_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCustomizableObjectFloatParameterValue,int>
            ((FCustomizableObjectFloatParameterValue *)
             (this->FloatParameters_DEPRECATED).AllocatorInstance.Data,
             (this->FloatParameters_DEPRECATED).ArrayNum);
  pFVar1 = (this->FloatParameters_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCustomizableObjectIntParameterValue,int>
            ((FCustomizableObjectIntParameterValue *)
             (this->IntParameters_DEPRECATED).AllocatorInstance.Data,
             (this->IntParameters_DEPRECATED).ArrayNum);
  pFVar1 = (this->IntParameters_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCustomizableObjectBoolParameterValue,int>
            ((FCustomizableObjectBoolParameterValue *)
             (this->BoolParameters_DEPRECATED).AllocatorInstance.Data,
             (this->BoolParameters_DEPRECATED).ArrayNum);
  pFVar1 = (this->BoolParameters_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FCustomizableObjectInstanceDescriptor::~FCustomizableObjectInstanceDescriptor(&this->Descriptor);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PreSetSkeletalMeshNativeDelegate).field_0x8,
             *(int *)&(this->PreSetSkeletalMeshNativeDelegate).field_0x10);
  pvVar2 = *(void **)&(this->PreSetSkeletalMeshNativeDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PreSetSkeletalMeshNativeDelegate);
  pvVar2 = *(void **)&(this->PreSetSkeletalMeshDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PreSetSkeletalMeshDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->UpdatedNativeDelegate).field_0x8,
             *(int *)&(this->UpdatedNativeDelegate).field_0x10);
  pvVar2 = *(void **)&(this->UpdatedNativeDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->UpdatedNativeDelegate);
  pvVar2 = *(void **)&(this->UpdatedDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->UpdatedDelegate);
  UObject::~UObject((UObject *)this);
  return;
}

// AddValueToFloatRange @ 14abc3380

int __thiscall
UCustomizableObjectInstance::AddValueToFloatRange
          (UCustomizableObjectInstance *this,FString *param_1)

{
  int iVar1;
  
  iVar1 = FCustomizableObjectInstanceDescriptor::AddValueToFloatRange(&this->Descriptor,param_1);
  return iVar1;
}

// AddValueToIntRange @ 14abc33a0

int __thiscall
UCustomizableObjectInstance::AddValueToIntRange(UCustomizableObjectInstance *this,FString *param_1)

{
  int iVar1;
  
  iVar1 = FCustomizableObjectInstanceDescriptor::AddValueToIntRange(&this->Descriptor,param_1);
  return iVar1;
}

// AddValueToProjectorRange @ 14abc33c0

int __thiscall
UCustomizableObjectInstance::AddValueToProjectorRange
          (UCustomizableObjectInstance *this,FString *param_1)

{
  int iVar1;
  
  iVar1 = FCustomizableObjectInstanceDescriptor::AddValueToProjectorRange(&this->Descriptor,param_1)
  ;
  return iVar1;
}

// AnimInstanceFixup @ 14abc4f70

void __thiscall
UCustomizableObjectInstance::AnimInstanceFixup
          (UCustomizableObjectInstance *this,UAnimInstance *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  UObject *pUVar4;
  UCustomizableInstancePrivate *pUVar5;
  FProperty *this_00;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  FAnimBpGeneratedPhysicsAssets *pFVar10;
  UClass *pUVar11;
  UScriptStruct *pUVar12;
  void *pvVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res10 [8];
  int local_res18;
  UObject *local_res20;
  
  if (param_1 != (UAnimInstance *)0x0) {
    pUVar4 = *(UObject **)&param_1->field_0x10;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    pUVar5 = (this->PrivateData).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar4 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
    }
    local_res20 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    pFVar10 = TMapBase<TSubclassOf<UAnimInstance>,FAnimBpGeneratedPhysicsAssets,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<UAnimInstance>,FAnimBpGeneratedPhysicsAssets,0>_>
              ::Find((TMapBase<TSubclassOf<UAnimInstance>,FAnimBpGeneratedPhysicsAssets,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<UAnimInstance>,FAnimBpGeneratedPhysicsAssets,0>_>
                      *)&pUVar5->AnimBpPhysicsAssets,(TSubclassOf<UAnimInstance_const_>)&local_res20
                    );
    if (((pFVar10 != (FAnimBpGeneratedPhysicsAssets *)0x0) && (pUVar4 != (UObject *)0x0)) &&
       (pUVar11 = Z_Construct_UClass_UAnimInstance_NoRegister(), pUVar11 != (UClass *)0x0)) {
      iVar1 = (int)pUVar11->_padding_;
      if ((*(int *)&pUVar4[1].field_0x10 < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)&pUVar4[1].field_0x8 + (longlong)iVar1 * 8) !=
          &pUVar11->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        pUVar11 = Z_Construct_UClass_UAnimBlueprintGeneratedClass_NoRegister();
        iVar1 = (int)pUVar11->_padding_;
        if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar11->_padding_)) {
          local_res18 = *(int *)&pUVar4[0x19].field_0x20;
          pFVar15 = (pFVar10->AnimInstancePropertyIndexAndPhysicsAssets).AllocatorInstance.Data;
          iVar1 = (pFVar10->AnimInstancePropertyIndexAndPhysicsAssets).ArrayNum;
          pFVar16 = pFVar15 + (longlong)iVar1 * 0x10;
          iVar14 = local_res18;
LAB_14abc50c0:
          if ((pFVar10->AnimInstancePropertyIndexAndPhysicsAssets).ArrayNum != iVar1) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<FAnimInstanceOverridePhysicsAsset_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_res10);
          }
          if (pFVar15 == pFVar16) {
            return;
          }
          if (((int)*(uint *)pFVar15 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("PropIndexAndAsset.PropertyIndex >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                 ,0x1bbe,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar2 = *(uint *)pFVar15;
          if ((int)uVar2 < iVar14) {
            uVar9 = 0;
            if ((int)uVar2 < *(int *)&pUVar4[0x19].field_0x20) {
              uVar9 = ~uVar2 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            this_00 = *(FProperty **)
                       (*(longlong *)&pUVar4[0x19].field_0x18 + (longlong)(int)uVar2 * 8);
            if (this_00 == (FProperty *)0x0) {
              bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<7189396884065098697>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                 ,0x1bc9,"StructProperty");
              if (bVar8) goto code_r0x00014abc5224;
              pFVar15 = pFVar15 + 0x10;
              iVar14 = local_res18;
              goto LAB_14abc50c0;
            }
            lVar6 = this_00[1]._padding_;
            pUVar12 = FAnimNode_RigidBody::StaticStruct();
            iVar14 = local_res18;
            if (pUVar12 != (UScriptStruct *)0x0) {
              iVar3 = (int)pUVar12->_padding_;
              if ((*(int *)(lVar6 + 0x38) < iVar3) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar3 * 8) !=
                  &pUVar12->_padding_)) {
                bVar8 = false;
              }
              else {
                bVar8 = true;
              }
              if (!bVar8) goto LAB_14abc525e;
              pvVar13 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                  (this_00,(UObject *)param_1,0);
              if (pvVar13 == (void *)0x0) {
                bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<7189396884065098713>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                   ,0x1bd9,"RbanNode");
                iVar14 = local_res18;
                if (bVar8) {
code_r0x00014abc5224:
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              else {
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (*(UObject **)(pFVar15 + 8) != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(*(UObject **)(pFVar15 + 8));
                }
                *(undefined8 *)((longlong)pvVar13 + 200) = *(undefined8 *)(pFVar15 + 8);
                iVar14 = local_res18;
              }
            }
          }
LAB_14abc525e:
          pFVar15 = pFVar15 + 0x10;
          goto LAB_14abc50c0;
        }
      }
    }
  }
  return;
}

// AnimInstanceNeedsFixup @ 14abc52a0

bool __thiscall
UCustomizableObjectInstance::AnimInstanceNeedsFixup
          (UCustomizableObjectInstance *this,TSubclassOf<UAnimInstance> param_1)

{
  UCustomizableInstancePrivate *pUVar1;
  TObjectPtr<UClass>_u_0 TVar2;
  int iVar3;
  uint uVar4;
  TObjectPtr<UClass>_u_0 local_res8;
  
  pUVar1 = (this->PrivateData).field0_0x0.DebugPtr;
  TVar2 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (TVar2.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
  }
  local_res8 = TVar2;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (TVar2.DebugPtr != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar2.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    }
  }
  uVar4 = ((uint)((ulonglong)TVar2.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar2.DebugPtr >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar3 = TSet<TTuple<TSubclassOf<UAnimInstance>,FAnimBpGeneratedPhysicsAssets>,TDefaultMapHashableKeyFuncs<TSubclassOf<UAnimInstance>,FAnimBpGeneratedPhysicsAssets,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSubclassOf<UAnimInstance_const_>_>
                    ((TSet<TTuple<TSubclassOf<UAnimInstance>,FAnimBpGeneratedPhysicsAssets>,TDefaultMapHashableKeyFuncs<TSubclassOf<UAnimInstance>,FAnimBpGeneratedPhysicsAssets,0>,FDefaultSetAllocator>
                      *)&pUVar1->AnimBpPhysicsAssets,uVar4 >> 0x10 ^ uVar4,
                     (TSubclassOf<UAnimInstance_const_> *)&local_res8.ObjectPtr);
  return iVar3 != -1;
}

// BeginDestroy @ 14abc63d0

void __thiscall UCustomizableObjectInstance::BeginDestroy(UCustomizableObjectInstance *this)

{
  UCustomizableInstancePrivate *pUVar1;
  UCustomizableObjectSystem *pUVar2;
  UCustomizableObjectSystemPrivate *pUVar3;
  
  pUVar1 = (this->PrivateData).field0_0x0.DebugPtr;
  if (((pUVar1 != (UCustomizableInstancePrivate *)0x0) && (pUVar1->LiveUpdateModeInstanceID != 0))
     && (UCustomizableObjectSystemPrivate::SSystem != (UCustomizableObjectSystem *)0x0)) {
    pUVar2 = UCustomizableObjectSystem::GetInstance();
    if (pUVar2 != (UCustomizableObjectSystem *)0x0) {
      pUVar2 = UCustomizableObjectSystem::GetInstance();
      pUVar3 = UCustomizableObjectSystem::GetPrivate(pUVar2);
      if (pUVar3 != (UCustomizableObjectSystemPrivate *)0x0) {
        pUVar2 = UCustomizableObjectSystem::GetInstance();
        pUVar3 = UCustomizableObjectSystem::GetPrivate(pUVar2);
        UCustomizableObjectSystemPrivate::InitInstanceIDRelease
                  (pUVar3,((this->PrivateData).field0_0x0.DebugPtr)->LiveUpdateModeInstanceID);
        ((this->PrivateData).field0_0x0.DebugPtr)->LiveUpdateModeInstanceID = 0;
      }
    }
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// Clone @ 14abd3380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCustomizableObjectInstance * __thiscall
UCustomizableObjectInstance::Clone(UCustomizableObjectInstance *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UCustomizableObjectInstance *pUVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2507,"Mutable_UCustomizableObjectInstance::Clone",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
               ,0x9cb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2507);
  }
  pUVar3 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar4);
  local_98._8_8_ = pUVar3;
  pUVar5 = (UCustomizableObjectInstance *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (((pUVar5->PrivateData).field0_0x0.DebugPtr == (UCustomizableInstancePrivate *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewInstance->PrivateData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                         ,0x9cf,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar5 = (UCustomizableObjectInstance *)(*pcVar1)();
    return pUVar5;
  }
  CopyParametersFromInstance(pUVar5,this);
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar5;
}

// CloneStatic @ 14abd34c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCustomizableObjectInstance * __thiscall
UCustomizableObjectInstance::CloneStatic(UCustomizableObjectInstance *this,UObject *param_1)

{
  UClass *pUVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UCustomizableObjectInstance *pUVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar1 = (UClass *)this->_padding_;
  local_b8 = 0;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = StaticClass();
  CheckIsClassChildOf_Internal(pUVar4,pUVar1);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar1);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._16_4_ = 0;
  local_a8._20_4_ = 0;
  local_a8._24_4_ = RF_NoFlags;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = param_1;
  pUVar5 = (UCustomizableObjectInstance *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar6 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  CopyParametersFromInstance(pUVar5,this);
  if (((pUVar5->PrivateData).field0_0x0.DebugPtr == (UCustomizableInstancePrivate *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrivateData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                         ,0xce2,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UCustomizableObjectInstance *)(*pcVar2)();
    return pUVar5;
  }
  ((pUVar5->PrivateData).field0_0x0.DebugPtr)->bShowOnlyRuntimeParameters = false;
  return pUVar5;
}

// ContainsBoolParameter @ 14abd39d0

bool __thiscall
UCustomizableObjectInstance::ContainsBoolParameter
          (UCustomizableObjectInstance *this,FString *param_1)

{
  int iVar1;
  
  iVar1 = FCustomizableObjectInstanceDescriptor::FindTypedParameterIndex
                    (&this->Descriptor,param_1,Bool);
  return iVar1 != -1;
}

// ContainsEnumParameter @ 14abd3a00

bool __thiscall
UCustomizableObjectInstance::ContainsEnumParameter
          (UCustomizableObjectInstance *this,FString *param_1)

{
  int iVar1;
  
  iVar1 = FCustomizableObjectInstanceDescriptor::FindTypedParameterIndex
                    (&this->Descriptor,param_1,Int);
  return iVar1 != -1;
}

// ContainsFloatParameter @ 14abd3b30

bool __thiscall
UCustomizableObjectInstance::ContainsFloatParameter
          (UCustomizableObjectInstance *this,FString *param_1)

{
  int iVar1;
  
  iVar1 = FCustomizableObjectInstanceDescriptor::FindTypedParameterIndex
                    (&this->Descriptor,param_1,Float);
  return iVar1 != -1;
}

// ContainsIntParameter @ 14abd3b60

bool __thiscall
UCustomizableObjectInstance::ContainsIntParameter
          (UCustomizableObjectInstance *this,FString *param_1)

{
  int iVar1;
  
  iVar1 = FCustomizableObjectInstanceDescriptor::FindTypedParameterIndex
                    (&this->Descriptor,param_1,Int);
  return iVar1 != -1;
}

// ContainsMaterialParameter @ 14abd3b90

bool __thiscall
UCustomizableObjectInstance::ContainsMaterialParameter
          (UCustomizableObjectInstance *this,FString *param_1)

{
  int iVar1;
  
  iVar1 = FCustomizableObjectInstanceDescriptor::FindTypedParameterIndex
                    (&this->Descriptor,param_1,Material);
  return iVar1 != -1;
}

// ContainsProjectorParameter @ 14abd3c50

bool __thiscall
UCustomizableObjectInstance::ContainsProjectorParameter
          (UCustomizableObjectInstance *this,FString *param_1)

{
  int iVar1;
  
  iVar1 = FCustomizableObjectInstanceDescriptor::FindTypedParameterIndex
                    (&this->Descriptor,param_1,Projector);
  return iVar1 != -1;
}

// ContainsSkeletalMeshParameter @ 14abd3c80

bool __thiscall
UCustomizableObjectInstance::ContainsSkeletalMeshParameter
          (UCustomizableObjectInstance *this,FString *param_1)

{
  int iVar1;
  
  iVar1 = FCustomizableObjectInstanceDescriptor::FindTypedParameterIndex
                    (&this->Descriptor,param_1,SkeletalMesh);
  return iVar1 != -1;
}

// ContainsTextureParameter @ 14abd3cb0

bool __thiscall
UCustomizableObjectInstance::ContainsTextureParameter
          (UCustomizableObjectInstance *this,FString *param_1)

{
  int iVar1;
  
  iVar1 = FCustomizableObjectInstanceDescriptor::FindTypedParameterIndex
                    (&this->Descriptor,param_1,Texture);
  return iVar1 != -1;
}

// ContainsTransformParameter @ 14abd3ce0

bool __thiscall
UCustomizableObjectInstance::ContainsTransformParameter
          (UCustomizableObjectInstance *this,FString *param_1)

{
  int iVar1;
  
  iVar1 = FCustomizableObjectInstanceDescriptor::FindTypedParameterIndex
                    (&this->Descriptor,param_1,Transform);
  return iVar1 != -1;
}

// ContainsVectorParameter @ 14abd3d10

bool __thiscall
UCustomizableObjectInstance::ContainsVectorParameter
          (UCustomizableObjectInstance *this,FString *param_1)

{
  int iVar1;
  
  iVar1 = FCustomizableObjectInstanceDescriptor::FindTypedParameterIndex
                    (&this->Descriptor,param_1,Color);
  return iVar1 != -1;
}

// CopyParametersFromInstance @ 14abd46c0

void __thiscall
UCustomizableObjectInstance::CopyParametersFromInstance
          (UCustomizableObjectInstance *this,UCustomizableObjectInstance *param_1)

{
  FCustomizableObjectInstanceDescriptor *this_00;
  UCustomizableInstancePrivate *this_01;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  UCustomizableObject *pUVar4;
  UCustomizableObject *pUVar5;
  
  if ((this->PrivateData).field0_0x0.DebugPtr == (UCustomizableInstancePrivate *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrivateData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xce2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_01 = (this->PrivateData).field0_0x0.DebugPtr;
  if ((param_1->PrivateData).field0_0x0.DebugPtr == (UCustomizableInstancePrivate *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrivateData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xce2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = ((param_1->PrivateData).field0_0x0.DebugPtr)->_padding_;
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Public",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xc38,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = (FCustomizableObjectInstanceDescriptor *)(lVar1 + 0x98);
  pUVar4 = FCustomizableObjectInstanceDescriptor::GetCustomizableObject(this_00);
  lVar1 = this_01->_padding_;
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Public",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xc38,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar5 = FCustomizableObjectInstanceDescriptor::GetCustomizableObject
                     ((FCustomizableObjectInstanceDescriptor *)(lVar1 + 0x98));
  lVar1 = this_01->_padding_;
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Public",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xc38,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FCustomizableObjectInstanceDescriptor::operator=
            ((FCustomizableObjectInstanceDescriptor *)(lVar1 + 0x98),this_00);
  if (pUVar5 != pUVar4) {
    UCustomizableInstancePrivate::InitCustomizableObjectData(this_01,pUVar4);
  }
  return;
}

// DestroyLiveUpdateInstance @ 14abd5cf0

void __thiscall
UCustomizableObjectInstance::DestroyLiveUpdateInstance(UCustomizableObjectInstance *this)

{
  UCustomizableInstancePrivate *pUVar1;
  UCustomizableObjectSystem *pUVar2;
  UCustomizableObjectSystemPrivate *pUVar3;
  
  pUVar1 = (this->PrivateData).field0_0x0.DebugPtr;
  if (((pUVar1 != (UCustomizableInstancePrivate *)0x0) && (pUVar1->LiveUpdateModeInstanceID != 0))
     && (UCustomizableObjectSystemPrivate::SSystem != (UCustomizableObjectSystem *)0x0)) {
    pUVar2 = UCustomizableObjectSystem::GetInstance();
    if (pUVar2 != (UCustomizableObjectSystem *)0x0) {
      pUVar2 = UCustomizableObjectSystem::GetInstance();
      pUVar3 = UCustomizableObjectSystem::GetPrivate(pUVar2);
      if (pUVar3 != (UCustomizableObjectSystemPrivate *)0x0) {
        pUVar2 = UCustomizableObjectSystem::GetInstance();
        pUVar3 = UCustomizableObjectSystem::GetPrivate(pUVar2);
        UCustomizableObjectSystemPrivate::InitInstanceIDRelease
                  (pUVar3,((this->PrivateData).field0_0x0.DebugPtr)->LiveUpdateModeInstanceID);
        ((this->PrivateData).field0_0x0.DebugPtr)->LiveUpdateModeInstanceID = 0;
      }
    }
  }
  return;
}

// ForEachAnimInstance @ 14abd8cd0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UCustomizableObjectInstance::ForEachAnimInstance
          (UCustomizableObjectInstance *this,int param_1,
          TDelegate<void___cdecl(FName,TSubclassOf<UAnimInstance>),FDefaultDelegateUserPolicy>
          *param_2)

{
  UCustomizableObject *pUVar1;
  UModelResources *pUVar2;
  code *pcVar3;
  bool bVar4;
  TDelegate<void___cdecl(FName,TSubclassOf<UAnimInstance>),FDefaultDelegateUserPolicy> *pTVar5;
  FName FVar6;
  TDelegate<void___cdecl(FName,TSubclassOf<UAnimInstance>),FDefaultDelegateUserPolicy> local_28;
  
  pUVar1 = (this->Descriptor).CustomizableObject.field0_0x0.DebugPtr;
  if (pUVar1 != (UCustomizableObject *)0x0) {
    if ((pUVar1->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x3c0,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pUVar2 = (((pUVar1->Private).field0_0x0.DebugPtr)->ModelResources).field0_0x0.DebugPtr;
    if (((pUVar2 == (UModelResources *)0x0) || (param_1 < 0)) ||
       (*(int *)((longlong)&pUVar2->ComponentNamesPerObjectComponent + 8) <= param_1)) {
      FVar6.ComparisonIndex.Value = 0;
      FVar6.Number = 0;
    }
    else {
      if (param_1 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FVar6 = *(FName *)(*(longlong *)&(pUVar2->ComponentNamesPerObjectComponent).AllocatorInstance
                        + (longlong)param_1 * 8);
    }
    pTVar5 = TDelegate<void___cdecl(FName,TSubclassOf<UAnimInstance>),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(FName,TSubclassOf<UAnimInstance>),FDefaultDelegateUserPolicy>
                       (&local_28,param_2);
    if ((this->PrivateData).field0_0x0.DebugPtr == (UCustomizableInstancePrivate *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrivateData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                         ,0xce2,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    UE::Mutable::Private::
    InternalForEachAnimInstance<TDelegate<void___cdecl(FName,TSubclassOf<UAnimInstance>),FDefaultDelegateUserPolicy>_>
              ((this->PrivateData).field0_0x0.DebugPtr,FVar6,pTVar5);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return;
}

// ForEachAnimInstance @ 14abd8e20

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UCustomizableObjectInstance::ForEachAnimInstance
          (UCustomizableObjectInstance *this,int param_1,
          FEachComponentAnimInstanceClassDelegate *param_2)

{
  UCustomizableObject *pUVar1;
  UModelResources *pUVar2;
  code *pcVar3;
  bool bVar4;
  FName FVar5;
  FEachComponentAnimInstanceClassDelegate local_38;
  FReadAccessScope local_20;
  
  pUVar1 = (this->Descriptor).CustomizableObject.field0_0x0.DebugPtr;
  if (pUVar1 != (UCustomizableObject *)0x0) {
    if ((pUVar1->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x3c0,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pUVar2 = (((pUVar1->Private).field0_0x0.DebugPtr)->ModelResources).field0_0x0.DebugPtr;
    if (((pUVar2 == (UModelResources *)0x0) || (param_1 < 0)) ||
       (*(int *)((longlong)&pUVar2->ComponentNamesPerObjectComponent + 8) <= param_1)) {
      FVar5.ComparisonIndex.Value = 0;
      FVar5.Number = 0;
    }
    else {
      if (param_1 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FVar5 = *(FName *)(*(longlong *)&(pUVar2->ComponentNamesPerObjectComponent).AllocatorInstance
                        + (longlong)param_1 * 8);
    }
    local_38._0_8_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_20);
    local_38._8_8_ = *(undefined8 *)&param_2->field_0x8;
    local_38._16_8_ = *(undefined8 *)&param_2->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    if ((this->PrivateData).field0_0x0.DebugPtr == (UCustomizableInstancePrivate *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrivateData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                         ,0xce2,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    UE::Mutable::Private::InternalForEachAnimInstance<FEachComponentAnimInstanceClassDelegate>
              ((this->PrivateData).field0_0x0.DebugPtr,FVar5,&local_38);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// ForEachComponentAnimInstance @ 14abd8f90

void __thiscall
UCustomizableObjectInstance::ForEachComponentAnimInstance
          (UCustomizableObjectInstance *this,FName param_1,
          TDelegate<void___cdecl(FName,TSubclassOf<UAnimInstance>),FDefaultDelegateUserPolicy>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  TDelegate<void___cdecl(FName,TSubclassOf<UAnimInstance>),FDefaultDelegateUserPolicy> *pTVar3;
  TDelegate<void___cdecl(FName,TSubclassOf<UAnimInstance>),FDefaultDelegateUserPolicy> local_28;
  
  pTVar3 = TDelegate<void___cdecl(FName,TSubclassOf<UAnimInstance>),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(FName,TSubclassOf<UAnimInstance>),FDefaultDelegateUserPolicy>
                     (&local_28,param_2);
  if ((this->PrivateData).field0_0x0.DebugPtr == (UCustomizableInstancePrivate *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrivateData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xce2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UE::Mutable::Private::
  InternalForEachAnimInstance<TDelegate<void___cdecl(FName,TSubclassOf<UAnimInstance>),FDefaultDelegateUserPolicy>_>
            ((this->PrivateData).field0_0x0.DebugPtr,param_1,pTVar3);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return;
}

// ForEachComponentAnimInstance @ 14abd9030

void __thiscall
UCustomizableObjectInstance::ForEachComponentAnimInstance
          (UCustomizableObjectInstance *this,FName param_1,
          FEachComponentAnimInstanceClassDelegate *param_2)

{
  code *pcVar1;
  bool bVar2;
  FEachComponentAnimInstanceClassDelegate local_38;
  FReadAccessScope local_20;
  
  local_38._0_8_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_20);
  local_38._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_38._16_8_ = *(undefined8 *)&param_2->field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
  if ((this->PrivateData).field0_0x0.DebugPtr == (UCustomizableInstancePrivate *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrivateData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xce2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UE::Mutable::Private::InternalForEachAnimInstance<FEachComponentAnimInstanceClassDelegate>
            ((this->PrivateData).field0_0x0.DebugPtr,param_1,&local_38);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// GetAnimBP @ 14abd9750

/* WARNING: Enum "Type": Some values do not have unique names */

TSubclassOf<UAnimInstance> __thiscall
UCustomizableObjectInstance::GetAnimBP
          (UCustomizableObjectInstance *this,FName param_1,FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  TSubclassOf<UAnimInstance> TVar3;
  FCustomizableInstanceComponentData *this_00;
  TSoftClassPtr<UAnimInstance> *this_01;
  UClass *pUVar4;
  FName *in_R9;
  FName local_res18;
  FString local_28;
  FString local_18;
  
  local_res18 = (FName)param_2;
  if (((this->PrivateData).field0_0x0.DebugPtr == (UCustomizableInstancePrivate *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrivateData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                         ,0xce2,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar3.Class.field0_0x0 = (TObjectPtr<UClass>)(*pcVar1)();
    return (TSubclassOf<UAnimInstance>)TVar3.Class.field0_0x0;
  }
  this_00 = UCustomizableInstancePrivate::GetComponentData
                      ((this->PrivateData).field0_0x0.DebugPtr,&local_res18);
  if (this_00 == (FCustomizableInstanceComponentData *)0x0) {
    ::FName::ToString(&local_res18,&local_18);
    ::FString::PrintfImpl
              (&local_28,L"Tried to access an invalid component index [%s] in a Mutable Instance.");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
    *(undefined8 *)param_1 = 0;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    this_01 = TMapBase<FName,TSoftClassPtr<UAnimInstance>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>_>
              ::Find((TMapBase<FName,TSoftClassPtr<UAnimInstance>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>_>
                      *)this_00,*in_R9);
    pUVar4 = (UClass *)0x0;
    if (this_01 != (TSoftClassPtr<UAnimInstance> *)0x0) {
      pUVar4 = TSoftClassPtr<UAnimInstance>::Get(this_01);
    }
    *(UClass **)param_1 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
  }
  return (TSubclassOf<UAnimInstance>)param_1;
}

// GetAnimationGameplayTags @ 14abd9890

FGameplayTagContainer * __thiscall
UCustomizableObjectInstance::GetAnimationGameplayTags(UCustomizableObjectInstance *this)

{
  code *pcVar1;
  bool bVar2;
  FGameplayTagContainer *pFVar3;
  
  if ((this->PrivateData).field0_0x0.DebugPtr == (UCustomizableInstancePrivate *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrivateData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xce2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FGameplayTagContainer *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &((this->PrivateData).field0_0x0.DebugPtr)->AnimBPGameplayTags;
}

// GetBoolParameterSelectedOption @ 14abd9a80

bool __thiscall
UCustomizableObjectInstance::GetBoolParameterSelectedOption
          (UCustomizableObjectInstance *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = FCustomizableObjectInstanceDescriptor::GetBoolParameterSelectedOption
                    (&this->Descriptor,param_1);
  return bVar1;
}

// GetBuildParameterRelevancy @ 14abd9ac0

bool __thiscall
UCustomizableObjectInstance::GetBuildParameterRelevancy(UCustomizableObjectInstance *this)

{
  bool bVar1;
  
  bVar1 = FCustomizableObjectInstanceDescriptor::GetBuildParameterRelevancy(&this->Descriptor);
  return bVar1;
}

// GetColorParameterSelectedOption @ 14abd9c90

FLinearColor * __thiscall
UCustomizableObjectInstance::GetColorParameterSelectedOption
          (UCustomizableObjectInstance *this,FLinearColor *__return_storage_ptr__,FString *param_1)

{
  FCustomizableObjectInstanceDescriptor::GetColorParameterSelectedOption
            (&this->Descriptor,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetComponentMeshSkeletalMesh @ 14abda0b0

USkeletalMesh * __thiscall
UCustomizableObjectInstance::GetComponentMeshSkeletalMesh
          (UCustomizableObjectInstance *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  USkeletalMesh *pUVar3;
  TTuple<FName,TObjectPtr<USkeletalMesh>_> *pTVar4;
  undefined8 *puVar5;
  
  if ((this->PrivateData).field0_0x0.DebugPtr == (UCustomizableInstancePrivate *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrivateData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xce2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (USkeletalMesh *)(*pcVar1)();
      return pUVar3;
    }
  }
  pTVar4 = TSet<TTuple<FName,TObjectPtr<USkeletalMesh>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TObjectPtr<USkeletalMesh>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>,FDefaultSetAllocator>
                   *)&((this->PrivateData).field0_0x0.DebugPtr)->SkeletalMeshes,*param_1);
  puVar5 = (undefined8 *)&pTVar4->field_0x8;
  if (pTVar4 == (TTuple<FName,TObjectPtr<USkeletalMesh>_> *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  if (puVar5 != (undefined8 *)0x0) {
    pUVar3 = (USkeletalMesh *)*puVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (USkeletalMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    return pUVar3;
  }
  return (USkeletalMesh *)0x0;
}

// GetComponentNames @ 14abda280

/* WARNING: Type propagation algorithm not settling */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UCustomizableObjectInstance::GetComponentNames
          (UCustomizableObjectInstance *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  TMap<FName,TObjectPtr<USkeletalMesh>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>_>
  *pTVar4;
  int iVar5;
  UCustomizableInstancePrivate *pUVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  TMap<FName,TObjectPtr<USkeletalMesh>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>_>
  *pTVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  TMap<FName,TObjectPtr<USkeletalMesh>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>_>
  *local_res20;
  undefined4 local_ac;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  iVar16 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (((this->PrivateData).field0_0x0.DebugPtr == (UCustomizableInstancePrivate *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("PrivateData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                          ,0xce2,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    pTVar13 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
    return pTVar13;
  }
  pUVar6 = (this->PrivateData).field0_0x0.DebugPtr;
  iVar5 = *(int *)&(pUVar6->SkeletalMeshes).field_0x28;
  puVar3 = &(pUVar6->SkeletalMeshes).field_0x10;
  uVar11 = 1;
  iVar17 = 0;
  pTVar4 = &pUVar6->SkeletalMeshes;
  iVar12 = iVar16;
  if (iVar5 != 0) {
    puVar19 = *(uint **)&(pUVar6->SkeletalMeshes).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar3;
    }
    uVar15 = *puVar19;
    iVar17 = 0;
    iVar16 = 0;
    while (uVar15 == 0) {
      lVar14 = (longlong)iVar16;
      iVar17 = iVar17 + 0x20;
      iVar16 = iVar16 + 1;
      iVar12 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14abda360;
      uVar15 = puVar19[lVar14 + 1];
    }
    uVar11 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uVar11 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res10 = (int)lVar14;
    iVar12 = iVar17 + -1 + local_res10;
    if (iVar5 < iVar12) {
      iVar12 = iVar5;
    }
  }
LAB_14abda360:
  uVar15 = *(uint *)&(pUVar6->SkeletalMeshes).field_0x28;
  uVar20 = uVar15 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar11,iVar16);
  TStack_70.CurrentBitIndex = iVar12;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_70._28_4_ = local_ac;
  TStack_70.BaseBitIndex = iVar17;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(pUVar6->SkeletalMeshes).field_0x8 -
                       *(int *)&(pUVar6->SkeletalMeshes).field_0x34);
  local_res20 = pTVar4;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar15 < 0) || (iVar5 < (int)uVar15)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    pTVar13 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
    return pTVar13;
  }
  pTVar9 = local_res20;
  uVar11 = *(uint *)&(pUVar6->SkeletalMeshes).field_0x28;
  if (uVar15 != uVar11) {
    puVar18 = *(undefined1 **)&(pUVar6->SkeletalMeshes).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar3;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      lVar14 = (longlong)iVar16;
      uVar20 = uVar20 + 0x20;
      iVar16 = iVar16 + 1;
      uVar15 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto LAB_14abda470;
      uVar15 = *(uint *)(puVar18 + lVar14 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res18 = (int)lVar14;
    uVar15 = local_res18 + -1 + uVar20;
    if ((int)uVar11 < (int)uVar15) {
      uVar15 = uVar11;
    }
  }
LAB_14abda470:
  while( true ) {
    if (*(int *)&(pUVar6->SkeletalMeshes).field_0x8 - *(int *)&(pUVar6->SkeletalMeshes).field_0x34
        != (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<USkeletalMesh>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar15) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar4 == pTVar9))
    break;
    pFVar1 = (FScriptContainerElement *)
             (*(longlong *)pTVar4 + (longlong)TStack_70.CurrentBitIndex * 0x18);
    if (*(longlong *)(*(longlong *)pTVar4 + 8 + (longlong)TStack_70.CurrentBitIndex * 0x18) != 0) {
      pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar7 <= pFVar1) && (pFVar1 < pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 8))
         && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar10)) {
        pcVar8 = (code *)swi(3);
        pTVar13 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar13;
      }
      iVar16 = __return_storage_ptr__->ArrayNum;
      if (iVar16 == __return_storage_ptr__->ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&__return_storage_ptr__->AllocatorInstance,
                            &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar16 + 1;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar16 * 8) =
           *(undefined8 *)pFVar1;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return __return_storage_ptr__;
}

// GetCurrentState @ 14abda580

FString * __thiscall
UCustomizableObjectInstance::GetCurrentState
          (UCustomizableObjectInstance *this,FString *__return_storage_ptr__)

{
  FCustomizableObjectInstanceDescriptor::GetCurrentState(&this->Descriptor,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetCustomizableObject @ 14abda5b0

UCustomizableObject * __thiscall
UCustomizableObjectInstance::GetCustomizableObject(UCustomizableObjectInstance *this)

{
  return (this->Descriptor).CustomizableObject.field0_0x0.DebugPtr;
}

// GetDesc @ 14abda6b0

FString * __thiscall
UCustomizableObjectInstance::GetDesc
          (UCustomizableObjectInstance *this,FString *__return_storage_ptr__)

{
  UCustomizableObject *pUVar1;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_28,"Missing Object");
  pUVar1 = (this->Descriptor).CustomizableObject.field0_0x0.DebugPtr;
  if (pUVar1 != (UCustomizableObject *)0x0) {
    local_res8 = (FName)pUVar1->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    local_28.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_28.Data.ArrayNum = local_18.Data.ArrayNum;
    local_28.Data.ArrayMax = local_18.Data.ArrayMax;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"Instance of [%s]");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetEnumParameterSelectedOption @ 14abdabb0

FString * __thiscall
UCustomizableObjectInstance::GetEnumParameterSelectedOption
          (UCustomizableObjectInstance *this,FString *param_1,int param_2)

{
  FString *pFVar1;
  
  pFVar1 = FCustomizableObjectInstanceDescriptor::GetIntParameterSelectedOption
                     (&this->Descriptor,param_1,param_2);
  return pFVar1;
}

// GetExtensionInstanceData @ 14abdadf0

FInstancedStruct * __thiscall
UCustomizableObjectInstance::GetExtensionInstanceData
          (UCustomizableObjectInstance *this,FInstancedStruct *__return_storage_ptr__,
          UCustomizableObjectExtension *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UCustomizableInstancePrivate *pUVar3;
  bool bVar4;
  FScriptContainerElement *this_00;
  undefined1 local_res8 [8];
  
  pUVar3 = (this->PrivateData).field0_0x0.DebugPtr;
  iVar2 = (pUVar3->ExtensionInstanceData).ArrayNum;
  this_00 = (pUVar3->ExtensionInstanceData).AllocatorInstance.Data;
  pFVar1 = this_00 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((pUVar3->ExtensionInstanceData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FExtensionInstanceData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar1) goto LAB_14abdae7e;
    bVar4 = TWeakObjectPtr<UCustomizableObjectExtension_const_,FWeakObjectPtr>::
            UEOpEquals<UCustomizableObjectExtension,bool>
                      ((TWeakObjectPtr<UCustomizableObjectExtension_const_,FWeakObjectPtr> *)this_00
                       ,param_1);
    if (bVar4) break;
    this_00 = this_00 + 0x18;
  }
  if (this_00 == (FScriptContainerElement *)0x0) {
LAB_14abdae7e:
    FInstancedStruct::FInstancedStruct(__return_storage_ptr__);
  }
  else {
    (__return_storage_ptr__->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    __return_storage_ptr__->StructMemory = (uchar *)0x0;
    FInstancedStruct::InitializeAs
              (__return_storage_ptr__,*(UScriptStruct **)(this_00 + 8),*(uchar **)(this_00 + 0x10));
  }
  return __return_storage_ptr__;
}

// GetFloatParameterSelectedOption @ 14abdb040

float __thiscall
UCustomizableObjectInstance::GetFloatParameterSelectedOption
          (UCustomizableObjectInstance *this,FString *param_1,int param_2)

{
  float fVar1;
  
  fVar1 = FCustomizableObjectInstanceDescriptor::GetFloatParameterSelectedOption
                    (&this->Descriptor,param_1,param_2);
  return fVar1;
}

// GetFloatValueRange @ 14abdb060

int __thiscall
UCustomizableObjectInstance::GetFloatValueRange(UCustomizableObjectInstance *this,FString *param_1)

{
  int iVar1;
  
  iVar1 = FCustomizableObjectInstanceDescriptor::GetFloatValueRange(&this->Descriptor,param_1);
  return iVar1;
}

// GetIntParameterSelectedOption @ 14abdb500

FString * __thiscall
UCustomizableObjectInstance::GetIntParameterSelectedOption
          (UCustomizableObjectInstance *this,FString *param_1,int param_2)

{
  FString *pFVar1;
  
  pFVar1 = FCustomizableObjectInstanceDescriptor::GetIntParameterSelectedOption
                     (&this->Descriptor,param_1,param_2);
  return pFVar1;
}

// GetIntValueRange @ 14abdb520

int __thiscall
UCustomizableObjectInstance::GetIntValueRange(UCustomizableObjectInstance *this,FString *param_1)

{
  int iVar1;
  
  iVar1 = FCustomizableObjectInstanceDescriptor::GetIntValueRange(&this->Descriptor,param_1);
  return iVar1;
}

// GetIsBeingUsedByComponentInPlay @ 14abdb540

bool __thiscall
UCustomizableObjectInstance::GetIsBeingUsedByComponentInPlay(UCustomizableObjectInstance *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->PrivateData).field0_0x0.DebugPtr == (UCustomizableInstancePrivate *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrivateData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xce2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)((byte)(((this->PrivateData).field0_0x0.DebugPtr)->InstanceFlagsPrivate >> 6) & 1);
}

// GetIsDiscardedBecauseOfTooManyInstances @ 14abdb5a0

bool __thiscall
UCustomizableObjectInstance::GetIsDiscardedBecauseOfTooManyInstances
          (UCustomizableObjectInstance *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->PrivateData).field0_0x0.DebugPtr == (UCustomizableInstancePrivate *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrivateData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xce2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)((byte)(((this->PrivateData).field0_0x0.DebugPtr)->InstanceFlagsPrivate >> 8) & 1);
}

// GetMaterialParameterSelectedOption @ 14abdba20

UMaterialInterface * __thiscall
UCustomizableObjectInstance::GetMaterialParameterSelectedOption
          (UCustomizableObjectInstance *this,FString *param_1,int param_2)

{
  UMaterialInterface *pUVar1;
  
  pUVar1 = FCustomizableObjectInstanceDescriptor::GetMaterialParameterSelectedOption
                     (&this->Descriptor,param_1,param_2);
  return pUVar1;
}

// GetMergedAssetUserData @ 14abdba40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSet<UAssetUserData_*,DefaultKeyFuncs<UAssetUserData_*,0>,FDefaultSetAllocator> * __thiscall
UCustomizableObjectInstance::GetMergedAssetUserData
          (UCustomizableObjectInstance *this,
          TSet<UAssetUserData_*,DefaultKeyFuncs<UAssetUserData_*,0>,FDefaultSetAllocator>
          *__return_storage_ptr__,int param_1)

{
  uint *puVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  UCustomizableInstancePrivate *pUVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TSet<UAssetUserData_*,DefaultKeyFuncs<UAssetUserData_*,0>,FDefaultSetAllocator> *pTVar10;
  ulong64 uVar11;
  ulonglong uVar12;
  byte bVar13;
  ForElementType<unsigned_int> FVar14;
  ForAnyElementType FVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  uint uVar18;
  uint uVar19;
  ulonglong *puVar20;
  uint uVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  ulonglong uVar23;
  ulonglong *puVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8 [4];
  int local_1a4;
  TSet<UAssetUserData_*,DefaultKeyFuncs<UAssetUserData_*,0>,FDefaultSetAllocator> *local_1a0;
  int local_198;
  uint uStack_194;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_190;
  uint local_188;
  uint uStack_184;
  uint uStack_180;
  undefined4 uStack_17c;
  uint local_178;
  uint uStack_174;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_170;
  undefined4 local_168;
  uint uStack_164;
  uint uStack_160;
  undefined4 uStack_15c;
  FScriptContainerElement *local_158;
  undefined8 uStack_150;
  TBitArray<FDefaultBitArrayAllocator> *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  int iStack_130;
  undefined4 uStack_12c;
  FScriptContainerElement *local_128;
  longlong *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_118;
  FScriptContainerElement *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  FSparseArrayAllocationInfo local_c8 [2];
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  uint local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_1a0 = __return_storage_ptr__;
  if (((this->PrivateData).field0_0x0.DebugPtr == (UCustomizableInstancePrivate *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrivateData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                         ,0xce2,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TSet<UAssetUserData_*,DefaultKeyFuncs<UAssetUserData_*,0>,FDefaultSetAllocator> *)
              (*pcVar6)();
    return pTVar10;
  }
  pUVar3 = (this->PrivateData).field0_0x0.DebugPtr;
  if (((pUVar3 == (UCustomizableInstancePrivate *)0x0) || (param_1 < 0)) ||
     ((pUVar3->ComponentsData).ArrayNum <= param_1)) {
    *(undefined8 *)&(local_1a0->Elements).field_0x10 = 0;
    *(undefined8 *)&(local_1a0->Elements).field_0x18 = 0;
    (local_1a0->Hash).InlineData[0] = '\0';
    (local_1a0->Hash).InlineData[1] = '\0';
    (local_1a0->Hash).InlineData[2] = '\0';
    (local_1a0->Hash).InlineData[3] = '\0';
    (local_1a0->Hash)._padding_ = 0;
    *(undefined8 *)&local_1a0->HashSize = 0;
    *(undefined8 *)&local_1a0->Elements = 0;
    *(undefined8 *)&(local_1a0->Elements).field_0x8 = 0;
    *(undefined8 *)&(local_1a0->Elements).field_0x20 = 0;
    *(undefined4 *)&(local_1a0->Elements).field_0x28 = 0;
    *(undefined4 *)&(local_1a0->Elements).field_0x2c = 0x80;
    *(undefined4 *)&(local_1a0->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(local_1a0->Elements).field_0x34 = 0;
    (local_1a0->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
    pTVar10 = local_1a0;
  }
  else {
    puVar20 = (ulonglong *)0x0;
    uVar21 = 0;
    uVar18 = 0;
    if (param_1 < (pUVar3->ComponentsData).ArrayNum) {
      uVar18 = (uint)~param_1 >> 0x1f;
    }
    local_98._0_8_ = (FScriptContainerElement *)0x0;
    local_98._8_8_ = 0;
    local_78 = (ForElementType<unsigned_int>)0x0;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = -1;
    local_64 = 0;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = 0;
    if ((uVar18 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSet<UAssetUserData_*,DefaultKeyFuncs<UAssetUserData_*,0>,FDefaultSetAllocator> *)
                (*pcVar6)();
      return pTVar10;
    }
    pFVar4 = (pUVar3->ComponentsData).AllocatorInstance.Data;
    uVar18 = *(uint *)(pFVar4 + (longlong)param_1 * 0x150 + 0x78);
    pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar4 + (longlong)param_1 * 0x150 + 0x60);
    uVar8 = 1;
    local_158 = pFVar4 + (longlong)param_1 * 0x150 + 0x50;
    uStack_140._4_4_ = 0;
    local_138._0_4_ = 0;
    if (uVar18 != 0) {
      pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)
                 (pFVar4 + (longlong)param_1 * 0x150 + 0x70);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar4 + (longlong)param_1 * 0x150 + 0x70) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar22 = pTVar2;
      }
      uVar26 = *(uint *)(pTVar22->AllocatorInstance).InlineData;
      puVar17 = puVar20;
      puVar24 = puVar20;
      local_138._0_4_ = 0;
      uVar21 = 0;
      while (uVar26 == 0) {
        iVar25 = (int)puVar17;
        local_138._0_4_ = (int)puVar24 + 0x20;
        puVar24 = (ulonglong *)(ulonglong)(uint)local_138;
        uVar21 = iVar25 + 1;
        puVar17 = (ulonglong *)(ulonglong)uVar21;
        uStack_140._4_4_ = uVar18;
        if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar21)
        goto LAB_14abdbbfe;
        uVar26 = *(uint *)((pTVar22->AllocatorInstance).InlineData + (longlong)iVar25 * 4 + 4);
      }
      uVar8 = -uVar26 & uVar26;
      uVar23 = (ulonglong)uVar8 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      local_1a4 = (int)lVar5;
      uStack_140._4_4_ = local_1a4 + -1 + (uint)local_138;
      if ((int)uVar18 < (int)uStack_140._4_4_) {
        uStack_140._4_4_ = uVar18;
      }
    }
LAB_14abdbbfe:
    iStack_130 = *(int *)(pFVar4 + (longlong)param_1 * 0x150 + 0x58) -
                 *(int *)(pFVar4 + (longlong)param_1 * 0x150 + 0x84);
    uVar18 = *(uint *)(pFVar4 + (longlong)param_1 * 0x150 + 0x78);
    bVar13 = (byte)uVar18 & 0x1f;
    iVar25 = (int)uVar18 >> 5;
    uStack_194 = 1 << bVar13;
    uVar19 = uVar18 & 0xffffffe0;
    uVar26 = -1 << bVar13;
    uStack_150 = CONCAT44(uVar8,uVar21);
    uStack_140._0_4_ = 0xffffffff;
    local_138._4_4_ = local_9c;
    TStack_f0._padding_ = uStack_150;
    uStack_d0 = CONCAT44(uStack_12c,iStack_130);
    TStack_f0.UnvisitedBitMask = 0xffffffff;
    TStack_f0.CurrentBitIndex = uStack_140._4_4_;
    TStack_f0.BaseBitIndex = (uint)local_138;
    TStack_f0._28_4_ = local_9c;
    local_198 = iVar25;
    pTStack_190 = pTVar2;
    local_188 = uVar26;
    uStack_184 = uVar18;
    uStack_180 = uVar19;
    local_128 = local_158;
    local_f8 = local_158;
    TStack_f0.Array = pTVar2;
    if (((int)uVar18 < 0) &&
       (local_148 = pTVar2,
       bVar7 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSet<UAssetUserData_*,DefaultKeyFuncs<UAssetUserData_*,0>,FDefaultSetAllocator> *)
                (*pcVar6)();
      return pTVar10;
    }
    uVar21 = *(uint *)(pFVar4 + (longlong)param_1 * 0x150 + 0x78);
    if (uVar18 != uVar21) {
      pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)
                 (pFVar4 + (longlong)param_1 * 0x150 + 0x70);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar4 + (longlong)param_1 * 0x150 + 0x70) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar22 = pTVar2;
      }
      uVar26 = uVar26 & *(uint *)((pTVar22->AllocatorInstance).InlineData + (longlong)iVar25 * 4);
      while (uVar26 == 0) {
        uStack_180 = uVar19 + 0x20;
        local_198 = iVar25 + 1;
        if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < local_198)
        goto LAB_14abdbd3d;
        uVar26 = *(uint *)((pTVar22->AllocatorInstance).InlineData + (longlong)iVar25 * 4 + 4);
        local_188 = 0xffffffff;
        iVar25 = local_198;
        uVar19 = uStack_180;
      }
      uStack_194 = -uVar26 & uVar26;
      uVar23 = (ulonglong)uStack_194 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      uStack_184 = (uVar19 - 1) + (int)lVar5;
      if ((int)uVar21 < (int)uStack_184) {
LAB_14abdbd3d:
        uStack_184 = uVar21;
      }
    }
    uStack_150 = CONCAT44(uStack_194,local_198);
    uStack_140 = CONCAT44(uStack_184,local_188);
    local_138 = CONCAT44(uStack_17c,uStack_180);
    local_148 = pTStack_190;
    while( true ) {
      pFVar4 = local_f8;
      if (*(int *)(local_f8 + 8) - *(int *)(local_f8 + 0x34) != (int)uStack_d0) {
        `TSparseArray<TSparseSetElement<TObjectPtr<UAssetUserData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1a8);
      }
      pTVar10 = local_1a0;
      if (((TStack_f0.CurrentBitIndex == uStack_140._4_4_) && (TStack_f0.Array == local_148)) &&
         (pFVar4 == local_128)) break;
      uVar23 = *(ulonglong *)(*(longlong *)pFVar4 + (longlong)TStack_f0.CurrentBitIndex * 0x10);
      if (local_64 == 0) {
        iVar25 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                            (int *)(local_98 + 0xc));
        uVar21 = local_70;
        if (local_70 == 0) {
          iVar27 = 0;
LAB_14abdbe20:
          if ((int)local_6c < (int)(local_70 + 1)) {
            uVar18 = local_6c + 0x1f >> 5;
            uVar8 = local_70 + 0x20 >> 5;
            if (uVar8 < 5) {
              iVar9 = 4;
            }
            else {
              uVar12 = (ulonglong)uVar8;
              if (uVar18 < 5) {
                uVar18 = 0;
              }
              if (uVar18 == 0) {
                uVar16 = 4;
                if (4 < uVar12) {
                  uVar16 = uVar12;
                }
              }
              else {
                uVar16 = ((ulonglong)uVar8 * 3 >> 3) + 0x10 + uVar12;
              }
              uVar11 = FMemory::QuantizeSize(uVar16 * 4,0);
              iVar9 = (int)(uVar11 >> 2);
              if (iVar9 < (int)uVar8) {
                iVar9 = 0x7fffffff;
              }
            }
            local_6c = iVar9 << 5;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),local_70);
          }
          local_70 = local_70 + 1;
          uVar8 = (int)local_70 >> 0x1f & 0x1f;
          uVar18 = local_70 + uVar8;
          iVar9 = (uVar18 & 0x1f) - uVar8;
          if (iVar9 != 0) {
            FVar14 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
            if (local_78 != (ForElementType<unsigned_int>)0x0) {
              FVar14 = local_78;
            }
            puVar1 = (uint *)((longlong)FVar14 + (longlong)((int)uVar18 >> 5) * 4);
            *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar9 & 0x1f);
          }
        }
        else {
          iVar27 = (int)(local_70 + ((int)local_70 >> 0x1f & 0x1fU)) >> 5;
          if (iVar27 != (int)(((int)(local_70 - 1) >> 0x1f & 0x1fU) + (local_70 - 1)) >> 5)
          goto LAB_14abdbe20;
          local_70 = local_70 + 1;
        }
        FVar14 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
        if (local_78 != (ForElementType<unsigned_int>)0x0) {
          FVar14 = local_78;
        }
        puVar1 = (uint *)((longlong)FVar14 + (longlong)iVar27 * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)uVar21 & 0x1f));
        iVar27 = local_68;
      }
      else {
        iVar27 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0x10 + 4);
        local_64 = local_64 + -1;
        iVar25 = local_68;
        if (local_64 != 0) {
          *(undefined4 *)(local_98._0_8_ + (longlong)iVar27 * 0x10) = 0xffffffff;
        }
      }
      local_68 = iVar27;
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_98,local_c8,iVar25);
      puVar17 = puVar20;
      if (local_c8[0].Pointer != (ulonglong *)0x0) {
        *(ulonglong *)local_c8[0].Pointer = uVar23;
        *(undefined4 *)((longlong)local_c8[0].Pointer + 8) = 0xffffffff;
        puVar17 = local_c8[0].Pointer;
      }
      uVar23 = *puVar17;
      uVar21 = ((uint)(uVar23 >> 0x14) & 0xffff ^ (uint)(uVar23 >> 4)) * -0x7a143595;
      uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
      uVar21 = uVar21 >> 0x10 ^ uVar21;
      if ((local_98._8_4_ - local_64 != 1) && (local_98._8_4_ != local_64)) {
        FVar15.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar15.Data = local_58.Data;
        }
        for (iVar25 = *(int *)(FVar15.Data + (ulonglong)(local_50 - 1 & uVar21) * 4); iVar25 != -1;
            iVar25 = *(int *)(local_98._0_8_ + (longlong)iVar25 * 0x10 + 8)) {
          if (*(ulonglong *)(local_98._0_8_ + (longlong)iVar25 * 0x10) == uVar23) {
            if (iVar25 != -1) {
              *(ulonglong *)(local_98._0_8_ + (longlong)iVar25 * 0x10) = uVar23;
              TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_98,local_c8[0].Index,1);
              goto LAB_14abdc2e0;
            }
            break;
          }
        }
      }
      uVar8 = local_98._8_4_ - local_64;
      uVar18 = 1;
      if (3 < uVar8) {
        uVar23 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar5 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        uVar18 = 1 << ((byte)lVar5 & 0x1f);
      }
      if (((int)uVar8 < 1) || ((int)uVar18 <= (int)local_50)) {
        uVar21 = local_50 - 1 & uVar21;
        *(uint *)((longlong)puVar17 + 0xc) = uVar21;
        FVar15.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar15.Data = local_58.Data;
        }
        uVar23 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar21;
        *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(FVar15.Data + uVar23 * 4);
        *(int *)(FVar15.Data + uVar23 * 4) = local_c8[0].Index;
      }
      else {
        local_50 = uVar18;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
        }
        if (uVar18 != 0) {
          uVar21 = uVar18;
          if (uVar18 < 2) {
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              uVar21 = 0;
              goto LAB_14abdc0d3;
            }
          }
          else {
LAB_14abdc0d3:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_58,0,uVar21,4);
          }
          if (0 < (int)uVar18) {
            uVar23 = (ulonglong)uVar18;
            puVar17 = puVar20;
            do {
              FVar15.Data = local_60;
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                FVar15.Data = local_58.Data;
              }
              uVar12 = (ulonglong)puVar17 & (longlong)(int)uVar18 - 1U;
              puVar17 = (ulonglong *)((longlong)puVar17 + 1);
              *(undefined4 *)(FVar15.Data + uVar12 * 4) = 0xffffffff;
              uVar23 = uVar23 - 1;
            } while (uVar23 != 0);
          }
        }
        if (local_50 != 0) {
          pTStack_170 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
          local_178 = 0;
          uStack_174 = 1;
          uStack_164 = 0;
          uStack_160 = 0;
          puVar17 = puVar20;
          if (local_70 != 0) {
            FVar14 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
            if (local_78 != (ForElementType<unsigned_int>)0x0) {
              FVar14 = local_78;
            }
            uVar21 = *(uint *)FVar14;
            puVar24 = puVar20;
            while (uVar21 == 0) {
              uStack_160 = (int)puVar24 + 0x20;
              puVar24 = (ulonglong *)(ulonglong)uStack_160;
              iVar25 = (int)puVar17;
              local_178 = iVar25 + 1;
              puVar17 = (ulonglong *)(ulonglong)local_178;
              if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 <
                  (int)local_178) goto LAB_14abdc1df;
              uVar21 = ((uint *)((longlong)FVar14 + 4))[iVar25];
            }
            uStack_174 = -uVar21 & uVar21;
            uVar23 = (ulonglong)uStack_174 * 2 + 1;
            lVar5 = 0x3f;
            if (uVar23 != 0) {
              for (; uVar23 >> lVar5 == 0; lVar5 = lVar5 + -1) {
              }
            }
            uStack_164 = (uStack_160 - 1) + (int)lVar5;
            puVar17 = (ulonglong *)(ulonglong)uStack_164;
            if ((int)local_70 < (int)uStack_164) {
LAB_14abdc1df:
              puVar17 = (ulonglong *)(ulonglong)local_70;
              uStack_164 = local_70;
            }
          }
          local_168 = 0xffffffff;
          local_120 = (longlong *)local_98;
          local_118._padding_ = CONCAT44(uStack_174,local_178);
          local_118.CurrentBitIndex = uStack_164;
          local_118.UnvisitedBitMask = 0xffffffff;
          local_118._28_4_ = uStack_15c;
          local_118.BaseBitIndex = uStack_160;
          local_118.Array = pTStack_170;
          if ((int)puVar17 < (int)local_70) {
            do {
              puVar24 = (ulonglong *)((longlong)(int)puVar17 * 0x10 + *local_120);
              uVar21 = ((uint)(*puVar24 >> 0x14) & 0xffff ^ (uint)(*puVar24 >> 4)) * -0x7a143595;
              uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
              uVar21 = (uVar21 >> 0x10 ^ uVar21) & local_50 - 1;
              *(uint *)((longlong)puVar24 + 0xc) = uVar21;
              FVar15.Data = local_60;
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                FVar15.Data = local_58.Data;
              }
              uVar23 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar21;
              *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(FVar15.Data + uVar23 * 4);
              *(int *)(FVar15.Data + uVar23 * 4) = (int)puVar17;
              local_118.UnvisitedBitMask = local_118.UnvisitedBitMask & ~local_118._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_118);
              puVar17 = (ulonglong *)(ulonglong)(uint)local_118.CurrentBitIndex;
            } while (local_118.CurrentBitIndex < (local_118.Array)->NumBits);
          }
        }
      }
LAB_14abdc2e0:
      TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
    }
    *(undefined8 *)&local_1a0->Elements = 0;
    *(undefined8 *)&(local_1a0->Elements).field_0x8 = 0;
    *(undefined8 *)&(local_1a0->Elements).field_0x20 = 0;
    *(undefined4 *)&(local_1a0->Elements).field_0x28 = 0;
    *(undefined4 *)&(local_1a0->Elements).field_0x2c = 0x80;
    *(undefined4 *)&(local_1a0->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(local_1a0->Elements).field_0x34 = 0;
    (local_1a0->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_1a0->HashSize = 0;
    TSet<UAssetUserData_*,DefaultKeyFuncs<UAssetUserData_*,0>,FDefaultSetAllocator>::
    Move<TSet<UAssetUserData_*,DefaultKeyFuncs<UAssetUserData_*,0>,FDefaultSetAllocator>_>
              (local_1a0,
               (TSet<UAssetUserData_*,DefaultKeyFuncs<UAssetUserData_*,0>,FDefaultSetAllocator> *)
               local_98);
    local_50 = 0;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    iVar25 = SUB84(local_98._8_8_,4);
    local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
    if (iVar25 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
    }
    local_68 = -1;
    local_64 = 0;
    local_70 = 0;
    if (0x80 < local_6c) {
      local_6c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
    }
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_78);
    }
    if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_98._0_8_);
    }
  }
  return pTVar10;
}

// GetMinSquareDistToPlayer @ 14abdc620

float __thiscall
UCustomizableObjectInstance::GetMinSquareDistToPlayer(UCustomizableObjectInstance *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((this->PrivateData).field0_0x0.DebugPtr != (UCustomizableInstancePrivate *)0x0) {
    return ((this->PrivateData).field0_0x0.DebugPtr)->MinSquareDistFromComponentToPlayer;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("PrivateData",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                     ,0xce2,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return ((this->PrivateData).field0_0x0.DebugPtr)->MinSquareDistFromComponentToPlayer;
}

// GetNumComponents @ 14abdc7a0

/* WARNING: Type propagation algorithm not settling */

int __thiscall UCustomizableObjectInstance::GetNumComponents(UCustomizableObjectInstance *this)

{
  UModelResources *pUVar1;
  UCustomizableObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  pUVar2 = (this->Descriptor).CustomizableObject.field0_0x0.DebugPtr;
  if (pUVar2 == (UCustomizableObject *)0x0) {
    return 0;
  }
  if ((pUVar2->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x3b9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  pUVar1 = (((pUVar2->Private).field0_0x0.DebugPtr)->ModelResources).field0_0x0.DebugPtr;
  if (pUVar1 != (UModelResources *)0x0) {
    return *(int *)((longlong)&pUVar1->ComponentNamesPerObjectComponent + 8);
  }
  return 0;
}

// GetOverrideMaterials @ 14abdef20

/* WARNING: Type propagation algorithm not settling */

TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> * __thiscall
UCustomizableObjectInstance::GetOverrideMaterials(UCustomizableObjectInstance *this,int param_1)

{
  UCustomizableObject *pUVar1;
  UModelResources *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar6;
  FCustomizableInstanceComponentData *pFVar7;
  FName local_res8;
  
  pUVar1 = (this->Descriptor).CustomizableObject.field0_0x0.DebugPtr;
  if (pUVar1 != (UCustomizableObject *)0x0) {
    if ((pUVar1->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x3c0,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar6;
      }
    }
    pUVar2 = (((pUVar1->Private).field0_0x0.DebugPtr)->ModelResources).field0_0x0.DebugPtr;
    if (((pUVar2 != (UModelResources *)0x0) && (-1 < param_1)) &&
       (param_1 < *(int *)((longlong)&pUVar2->ComponentNamesPerObjectComponent + 8))) {
      uVar5 = 0;
      if (param_1 < *(int *)((longlong)&pUVar2->ComponentNamesPerObjectComponent + 8)) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)(*pcVar3)()
          ;
          return pTVar6;
        }
      }
      local_res8 = *(FName *)(*(longlong *)
                               &(pUVar2->ComponentNamesPerObjectComponent).AllocatorInstance +
                             (longlong)param_1 * 8);
      pFVar7 = UCustomizableInstancePrivate::GetComponentData
                         ((this->PrivateData).field0_0x0.DebugPtr,&local_res8);
      pTVar6 = &pFVar7->OverrideMaterials;
      if (pFVar7 == (FCustomizableInstanceComponentData *)0x0) {
        pTVar6 = (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)0x0;
      }
      return pTVar6;
    }
  }
  return (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)0x0;
}

// GetPrivate @ 14abdfae0

UCustomizableInstancePrivate * __thiscall
UCustomizableObjectInstance::GetPrivate(UCustomizableObjectInstance *this)

{
  code *pcVar1;
  bool bVar2;
  UCustomizableInstancePrivate *pUVar3;
  
  if ((this->PrivateData).field0_0x0.DebugPtr != (UCustomizableInstancePrivate *)0x0) {
    return (this->PrivateData).field0_0x0.DebugPtr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("PrivateData",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                     ,0xce2,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UCustomizableInstancePrivate *)(*pcVar1)();
    return pUVar3;
  }
  return (this->PrivateData).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 14abdfd60

UClass * __cdecl UCustomizableObjectInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableObjectInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableObjectInstance",
               &Z_Registration_Info_UClass_UCustomizableObjectInstance.InnerSingleton,
               StaticRegisterNativesUCustomizableObjectInstance,0x2a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomizableObjectInstance>,
               InternalVTableHelperCtorCaller<UCustomizableObjectInstance>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectInstance.InnerSingleton;
}

// GetProjector @ 14abe0190

FCustomizableObjectProjector * __thiscall
UCustomizableObjectInstance::GetProjector
          (UCustomizableObjectInstance *this,FCustomizableObjectProjector *__return_storage_ptr__,
          FString *param_1,int param_2)

{
  FCustomizableObjectInstanceDescriptor::GetProjector
            (&this->Descriptor,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetProjectorAngle @ 14abe01c0

float __thiscall
UCustomizableObjectInstance::GetProjectorAngle
          (UCustomizableObjectInstance *this,FString *param_1,int param_2)

{
  float fVar1;
  
  fVar1 = FCustomizableObjectInstanceDescriptor::GetProjectorAngle
                    (&this->Descriptor,param_1,param_2);
  return fVar1;
}

// GetProjectorDirection @ 14abe01e0

TVector<double> * __thiscall
UCustomizableObjectInstance::GetProjectorDirection
          (UCustomizableObjectInstance *this,TVector<double> *__return_storage_ptr__,
          FString *param_1,int param_2)

{
  FCustomizableObjectInstanceDescriptor::GetProjectorDirection
            (&this->Descriptor,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetProjectorParameterType @ 14abe04b0

ECustomizableObjectProjectorType __thiscall
UCustomizableObjectInstance::GetProjectorParameterType
          (UCustomizableObjectInstance *this,FString *param_1,int param_2)

{
  ECustomizableObjectProjectorType EVar1;
  
  EVar1 = FCustomizableObjectInstanceDescriptor::GetProjectorParameterType
                    (&this->Descriptor,param_1,param_2);
  return EVar1;
}

// GetProjectorPosition @ 14abe04d0

TVector<double> * __thiscall
UCustomizableObjectInstance::GetProjectorPosition
          (UCustomizableObjectInstance *this,TVector<double> *__return_storage_ptr__,
          FString *param_1,int param_2)

{
  FCustomizableObjectInstanceDescriptor::GetProjectorPosition
            (&this->Descriptor,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetProjectorScale @ 14abe0500

TVector<double> * __thiscall
UCustomizableObjectInstance::GetProjectorScale
          (UCustomizableObjectInstance *this,TVector<double> *__return_storage_ptr__,
          FString *param_1,int param_2)

{
  FCustomizableObjectInstanceDescriptor::GetProjectorScale
            (&this->Descriptor,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetProjectorUp @ 14abe0530

TVector<double> * __thiscall
UCustomizableObjectInstance::GetProjectorUp
          (UCustomizableObjectInstance *this,TVector<double> *__return_storage_ptr__,
          FString *param_1,int param_2)

{
  FCustomizableObjectInstanceDescriptor::GetProjectorUp
            (&this->Descriptor,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetProjectorValue @ 14abe0560

void __thiscall
UCustomizableObjectInstance::GetProjectorValue
          (UCustomizableObjectInstance *this,FString *param_1,TVector<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4,TVector<double> *param_5,float *param_6,
          ECustomizableObjectProjectorType *param_7,int param_8)

{
  FCustomizableObjectInstanceDescriptor::GetProjectorValue
            (&this->Descriptor,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

// GetProjectorValueF @ 14abe0580

void __thiscall
UCustomizableObjectInstance::GetProjectorValueF
          (UCustomizableObjectInstance *this,FString *param_1,TVector<float> *param_2,
          TVector<float> *param_3,TVector<float> *param_4,TVector<float> *param_5,float *param_6,
          ECustomizableObjectProjectorType *param_7,int param_8)

{
  FCustomizableObjectInstanceDescriptor::GetProjectorValueF
            (&this->Descriptor,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

// GetProjectorValueRange @ 14abe05a0

int __thiscall
UCustomizableObjectInstance::GetProjectorValueRange
          (UCustomizableObjectInstance *this,FString *param_1)

{
  int iVar1;
  
  iVar1 = FCustomizableObjectInstanceDescriptor::GetProjectorValueRange(&this->Descriptor,param_1);
  return iVar1;
}

// GetSkeletalMesh @ 14abe0660

USkeletalMesh * __thiscall
UCustomizableObjectInstance::GetSkeletalMesh(UCustomizableObjectInstance *this,int param_1)

{
  FName *pFVar1;
  USkeletalMesh *pUVar2;
  int iVar3;
  FName local_res18 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_18,param_1);
  iVar3 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  pFVar1 = ::FName::FName(local_res18,iVar3,(wchar_t *)local_18.Data.AllocatorInstance.Data,
                          FNAME_Add);
  local_res18[0] = *pFVar1;
  pUVar2 = GetComponentMeshSkeletalMesh(this,local_res18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return pUVar2;
}

// GetSkeletalMeshComponentOverrideMaterials @ 14abe06e0

TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> * __thiscall
UCustomizableObjectInstance::GetSkeletalMeshComponentOverrideMaterials
          (UCustomizableObjectInstance *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FCustomizableInstanceComponentData *pFVar6;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  undefined8 local_38;
  ForAnyElementType local_30;
  undefined8 local_28;
  
  pFVar6 = UCustomizableInstancePrivate::GetComponentData
                     ((this->PrivateData).field0_0x0.DebugPtr,param_1);
  if (pFVar6 == (FCustomizableInstanceComponentData *)0x0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  iVar8 = 0;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = 0;
  pFVar9 = (pFVar6->OverrideMaterials).AllocatorInstance.Data;
  iVar2 = (pFVar6->OverrideMaterials).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pFVar6->OverrideMaterials).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMaterialInterface>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
      iVar8 = (int)local_28;
    }
    if (pFVar9 == pFVar1) break;
    local_38 = *(undefined8 *)pFVar9;
    iVar5 = iVar8;
    if ((local_30.Data <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 < local_30.Data + (longlong)local_28._4_4_ * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      iVar5 = (int)local_28;
    }
    if (iVar5 == local_28._4_4_) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_30,(int *)((longlong)&local_28 + 4));
    }
    iVar8 = iVar5 + 1;
    pFVar9 = pFVar9 + 8;
    local_28 = CONCAT44(local_28._4_4_,iVar8);
    *(undefined8 *)(local_30.Data + (longlong)iVar5 * 8) = local_38;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = local_30.Data;
  __return_storage_ptr__->ArrayNum = iVar8;
  __return_storage_ptr__->ArrayMax = local_28._4_4_;
  return __return_storage_ptr__;
}

// GetSkeletalMeshComponentSkeletalMesh @ 14abe0870

USkeletalMesh * __thiscall
UCustomizableObjectInstance::GetSkeletalMeshComponentSkeletalMesh
          (UCustomizableObjectInstance *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  USkeletalMesh *pUVar3;
  TTuple<FName,TObjectPtr<USkeletalMesh>_> *pTVar4;
  undefined8 *puVar5;
  
  if ((this->PrivateData).field0_0x0.DebugPtr == (UCustomizableInstancePrivate *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrivateData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xce2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (USkeletalMesh *)(*pcVar1)();
      return pUVar3;
    }
  }
  pTVar4 = TSet<TTuple<FName,TObjectPtr<USkeletalMesh>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TObjectPtr<USkeletalMesh>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>,FDefaultSetAllocator>
                   *)&((this->PrivateData).field0_0x0.DebugPtr)->SkeletalMeshes,*param_1);
  puVar5 = (undefined8 *)&pTVar4->field_0x8;
  if (pTVar4 == (TTuple<FName,TObjectPtr<USkeletalMesh>_> *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  if (puVar5 != (undefined8 *)0x0) {
    pUVar3 = (USkeletalMesh *)*puVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (USkeletalMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    return pUVar3;
  }
  return (USkeletalMesh *)0x0;
}

// GetSkeletalMeshParameterSelectedOption @ 14abe0960

USkeletalMesh * __thiscall
UCustomizableObjectInstance::GetSkeletalMeshParameterSelectedOption
          (UCustomizableObjectInstance *this,FString *param_1,int param_2)

{
  USkeletalMesh *pUVar1;
  
  pUVar1 = FCustomizableObjectInstanceDescriptor::GetSkeletalMeshParameterSelectedOption
                     (&this->Descriptor,param_1,param_2);
  return pUVar1;
}

// GetTextureParameterSelectedOption @ 14abe0fd0

UTexture * __thiscall
UCustomizableObjectInstance::GetTextureParameterSelectedOption
          (UCustomizableObjectInstance *this,FString *param_1,int param_2)

{
  UTexture *pUVar1;
  
  pUVar1 = FCustomizableObjectInstanceDescriptor::GetTextureParameterSelectedOption
                     (&this->Descriptor,param_1,param_2);
  return pUVar1;
}

// GetTextureValueRange @ 14abe0ff0

int __thiscall
UCustomizableObjectInstance::GetTextureValueRange
          (UCustomizableObjectInstance *this,FString *param_1)

{
  int iVar1;
  
  iVar1 = FCustomizableObjectInstanceDescriptor::GetTextureValueRange(&this->Descriptor,param_1);
  return iVar1;
}

// GetTransformParameterSelectedOption @ 14abe12d0

TTransform<double> * __thiscall
UCustomizableObjectInstance::GetTransformParameterSelectedOption
          (UCustomizableObjectInstance *this,TTransform<double> *__return_storage_ptr__,
          FString *param_1)

{
  FCustomizableObjectInstanceDescriptor::GetTransformParameterSelectedOption
            (&this->Descriptor,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// HasAnyParameters @ 14abe1490

bool __thiscall UCustomizableObjectInstance::HasAnyParameters(UCustomizableObjectInstance *this)

{
  bool bVar1;
  
  bVar1 = FCustomizableObjectInstanceDescriptor::HasAnyParameters(&this->Descriptor);
  return bVar1;
}

// HasAnySkeletalMesh @ 14abe14b0

bool __thiscall UCustomizableObjectInstance::HasAnySkeletalMesh(UCustomizableObjectInstance *this)

{
  UCustomizableInstancePrivate *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((this->PrivateData).field0_0x0.DebugPtr == (UCustomizableInstancePrivate *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrivateData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xce2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pUVar1 = (this->PrivateData).field0_0x0.DebugPtr;
  return *(int *)&(pUVar1->SkeletalMeshes).field_0x8 != *(int *)&(pUVar1->SkeletalMeshes).field_0x34
  ;
}

// IsEditorOnly @ 14abe34b0

bool __thiscall UCustomizableObjectInstance::IsEditorOnly(UCustomizableObjectInstance *this)

{
  UCustomizableObject *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->Descriptor).CustomizableObject.field0_0x0.DebugPtr;
  if (pUVar1 != (UCustomizableObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014abe34bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x120))();
    return (bool)uVar2;
  }
  return false;
}

// IsParameterDirty @ 14abe3610

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UCustomizableObjectInstance::IsParameterDirty
          (UCustomizableObjectInstance *this,FString *param_1,int param_2)

{
  FCustomizableObjectBoolParameterValue *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  FString *pFVar7;
  EMutableParameterType EVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  float fVar14;
  FCustomizableObjectProjectorParameterValue *pFVar15;
  UCustomizableInstancePrivate *pUVar16;
  FCustomizableObjectBoolParameterValue *pFVar17;
  FCustomizableObjectVectorParameterValue *pFVar18;
  float fVar19;
  FCustomizableObjectBoolParameterValue *pFVar20;
  FCustomizableObjectVectorParameterValue *pFVar21;
  longlong lVar22;
  FCustomizableObjectProjectorParameterValue *pFVar23;
  FCustomizableObjectProjectorParameterValue *pFVar24;
  FCustomizableObjectVectorParameterValue *pFVar25;
  FCustomizableObjectProjectorParameterValue *pFVar26;
  
  lVar22 = (longlong)param_2;
  EVar8 = UCustomizableObject::GetParameterTypeByName
                    ((this->Descriptor).CustomizableObject.field0_0x0.DebugPtr,param_1);
  switch(EVar8) {
  case None:
    break;
  case Bool:
    pFVar17 = TArray<FCustomizableObjectBoolParameterValue,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_UCustomizableObjectInstance::IsParameterDirty_::__l37::<lambda_5>_>
                        (&(this->Descriptor).BoolParameters,(<lambda_5>)param_1);
    pUVar16 = GetPrivate(this);
    pFVar20 = (FCustomizableObjectBoolParameterValue *)
              (pUVar16->CommittedDescriptor).BoolParameters.AllocatorInstance.Data;
    pFVar1 = pFVar20 + (pUVar16->CommittedDescriptor).BoolParameters.ArrayNum;
    for (; pFVar20 != pFVar1; pFVar20 = pFVar20 + 1) {
      iVar11 = (pFVar20->ParameterName).Data.ArrayNum;
      iVar13 = (param_1->Data).ArrayNum;
      if (iVar11 == iVar13) {
        if (iVar11 < 2) goto LAB_14abe3995;
        iVar11 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)(pFVar20->ParameterName).Data.AllocatorInstance.Data,
                            (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar9 = iVar11 == 0;
      }
      else {
        bVar9 = iVar11 + iVar13 == 1;
      }
      if (bVar9) goto LAB_14abe3995;
    }
    pFVar20 = (FCustomizableObjectBoolParameterValue *)0x0;
LAB_14abe3995:
    if ((pFVar17 == (FCustomizableObjectBoolParameterValue *)0x0) ||
       (pFVar20 == (FCustomizableObjectBoolParameterValue *)0x0)) {
      return pFVar17 != pFVar20;
    }
    if (param_2 == -1) {
      return pFVar17->ParameterValue == pFVar20->ParameterValue;
    }
    break;
  case Int:
    pFVar15 = (FCustomizableObjectProjectorParameterValue *)
              TArray<FCustomizableObjectIntParameterValue,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_UCustomizableObjectInstance::IsParameterDirty_::__l48::<lambda_7>_>
                        (&(this->Descriptor).IntParameters,(<lambda_7>)param_1);
    pUVar16 = GetPrivate(this);
    pFVar23 = (FCustomizableObjectProjectorParameterValue *)
              (pUVar16->CommittedDescriptor).IntParameters.AllocatorInstance.Data;
    iVar11 = (pUVar16->CommittedDescriptor).IntParameters.ArrayNum;
    pFVar7 = &pFVar23->ParameterName;
    for (; pFVar24 = (FCustomizableObjectProjectorParameterValue *)0x0,
        pFVar23 != (FCustomizableObjectProjectorParameterValue *)(pFVar7 + (longlong)iVar11 * 4);
        pFVar23 = (FCustomizableObjectProjectorParameterValue *)&(pFVar23->Value).ProjectionType) {
      iVar13 = (pFVar23->ParameterName).Data.ArrayNum;
      iVar2 = (param_1->Data).ArrayNum;
      pFVar24 = pFVar23;
      if (iVar13 == iVar2) {
        if (iVar13 < 2) break;
        iVar13 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)(pFVar23->ParameterName).Data.AllocatorInstance.Data,
                            (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar9 = iVar13 == 0;
      }
      else {
        bVar9 = iVar13 + iVar2 == 1;
      }
      if (bVar9) break;
    }
    if ((pFVar15 != (FCustomizableObjectProjectorParameterValue *)0x0) &&
       (pFVar24 != (FCustomizableObjectProjectorParameterValue *)0x0)) {
      if (param_2 == -1) {
        fVar14 = *(float *)((longlong)&(pFVar15->Value).Position.field0_0x0 + 8);
        fVar19 = (pFVar24->Value).Position.field0_0x0._s_0.Z;
        if (fVar14 == fVar19) {
          if ((int)fVar14 < 2) {
            return true;
          }
          iVar11 = FGenericPlatformStricmp::Stricmp
                             (*(wchar_t **)&(pFVar15->Value).Position.field0_0x0,
                              *(wchar_t **)&(pFVar24->Value).Position.field0_0x0);
          return iVar11 == 0;
        }
      }
      else {
        if (((param_2 < 0) || ((int)(pFVar15->Value).Scale.field0_0x0._s_0.Y <= param_2)) ||
           ((int)(pFVar24->Value).Scale.field0_0x0._s_0.Y <= param_2)) {
          return (pFVar15->Value).Scale.field0_0x0._s_0.Y !=
                 (pFVar24->Value).Scale.field0_0x0._s_0.Y;
        }
        uVar12 = 0;
        if (param_2 < (int)(pFVar24->Value).Scale.field0_0x0._s_0.Y) {
          uVar12 = (uint)~param_2 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        lVar4 = *(longlong *)((longlong)&(pFVar24->Value).Up.field0_0x0 + 8);
        uVar12 = 0;
        if (param_2 < (int)(pFVar15->Value).Scale.field0_0x0._s_0.Y) {
          uVar12 = (uint)~param_2 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        lVar5 = *(longlong *)((longlong)&(pFVar15->Value).Up.field0_0x0 + 8);
        fVar19 = *(float *)(lVar4 + 8 + lVar22 * 0x10);
        fVar14 = *(float *)(lVar5 + 8 + lVar22 * 0x10);
        if (fVar14 == fVar19) {
          if ((int)fVar14 < 2) {
            return true;
          }
          iVar11 = FGenericPlatformStricmp::Stricmp
                             (*(wchar_t **)(lVar5 + lVar22 * 0x10),
                              *(wchar_t **)(lVar4 + lVar22 * 0x10));
          return iVar11 == 0;
        }
      }
      return (int)fVar14 + (int)fVar19 == 1;
    }
    goto LAB_14abe37bd;
  case Float:
    pFVar15 = (FCustomizableObjectProjectorParameterValue *)
              TArray<FCustomizableObjectFloatParameterValue,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_UCustomizableObjectInstance::IsParameterDirty_::__l64::<lambda_9>_>
                        (&(this->Descriptor).FloatParameters,(<lambda_9>)param_1);
    pUVar16 = GetPrivate(this);
    pFVar23 = (FCustomizableObjectProjectorParameterValue *)
              (pUVar16->CommittedDescriptor).FloatParameters.AllocatorInstance.Data;
    iVar11 = (pUVar16->CommittedDescriptor).FloatParameters.ArrayNum;
    pFVar7 = &pFVar23->ParameterName;
    for (; pFVar24 = (FCustomizableObjectProjectorParameterValue *)0x0,
        pFVar23 !=
        (FCustomizableObjectProjectorParameterValue *)((longlong)pFVar7 + (longlong)iVar11 * 0x38);
        pFVar23 = (FCustomizableObjectProjectorParameterValue *)
                  ((pFVar23->Value).Scale.field0_0x0.XYZ + 1)) {
      iVar13 = (pFVar23->ParameterName).Data.ArrayNum;
      iVar2 = (param_1->Data).ArrayNum;
      pFVar24 = pFVar23;
      if (iVar13 == iVar2) {
        if (iVar13 < 2) break;
        iVar13 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)(pFVar23->ParameterName).Data.AllocatorInstance.Data,
                            (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar9 = iVar13 == 0;
      }
      else {
        bVar9 = iVar13 + iVar2 == 1;
      }
      if (bVar9) break;
    }
    if ((pFVar15 == (FCustomizableObjectProjectorParameterValue *)0x0) ||
       (pFVar24 == (FCustomizableObjectProjectorParameterValue *)0x0)) goto LAB_14abe37bd;
    if (param_2 == -1) {
      if ((pFVar24->Value).Position.field0_0x0._s_0.X == (pFVar15->Value).Position.field0_0x0._s_0.X
         ) {
        return true;
      }
    }
    else {
      if (((param_2 < 0) || ((int)(pFVar15->Value).Up.field0_0x0._s_0.Z <= param_2)) ||
         ((int)(pFVar24->Value).Up.field0_0x0._s_0.Z <= param_2)) goto LAB_14abe3914;
      uVar12 = 0;
      if (param_2 < (int)(pFVar24->Value).Up.field0_0x0._s_0.Z) {
        uVar12 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      lVar4 = *(longlong *)&(pFVar24->Value).Up.field0_0x0;
      uVar12 = 0;
      if (param_2 < (int)(pFVar15->Value).Up.field0_0x0._s_0.Z) {
        uVar12 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      if (*(float *)(lVar4 + lVar22 * 4) ==
          *(float *)(*(longlong *)&(pFVar15->Value).Up.field0_0x0 + lVar22 * 4)) {
        return true;
      }
    }
    break;
  case Color:
    pFVar18 = TArray<FCustomizableObjectVectorParameterValue,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_UCustomizableObjectInstance::IsParameterDirty_::__l80::<lambda_11>_>
                        (&(this->Descriptor).VectorParameters,(<lambda_11>)param_1);
    pUVar16 = GetPrivate(this);
    pFVar21 = (FCustomizableObjectVectorParameterValue *)
              (pUVar16->CommittedDescriptor).VectorParameters.AllocatorInstance.Data;
    pFVar25 = pFVar21 + (pUVar16->CommittedDescriptor).VectorParameters.ArrayNum;
    for (; pFVar21 != pFVar25; pFVar21 = pFVar21 + 1) {
      iVar11 = (pFVar21->ParameterName).Data.ArrayNum;
      iVar13 = (param_1->Data).ArrayNum;
      if (iVar11 == iVar13) {
        if (iVar11 < 2) goto LAB_14abe3d45;
        iVar11 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)(pFVar21->ParameterName).Data.AllocatorInstance.Data,
                            (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar9 = iVar11 == 0;
      }
      else {
        bVar9 = iVar11 + iVar13 == 1;
      }
      if (bVar9) goto LAB_14abe3d45;
    }
    pFVar21 = (FCustomizableObjectVectorParameterValue *)0x0;
LAB_14abe3d45:
    if ((pFVar18 == (FCustomizableObjectVectorParameterValue *)0x0) ||
       (pFVar21 == (FCustomizableObjectVectorParameterValue *)0x0)) {
      return pFVar18 != pFVar21;
    }
    if ((((param_2 == -1) &&
         ((pFVar21->ParameterValue).field0_0x0._s_0.R == (pFVar18->ParameterValue).field0_0x0._s_0.R
         )) && ((pFVar21->ParameterValue).field0_0x0._s_0.G ==
                (pFVar18->ParameterValue).field0_0x0._s_0.G)) &&
       (((pFVar21->ParameterValue).field0_0x0._s_0.B == (pFVar18->ParameterValue).field0_0x0._s_0.B
        && ((pFVar21->ParameterValue).field0_0x0._s_0.A ==
            (pFVar18->ParameterValue).field0_0x0._s_0.A)))) {
      return true;
    }
    break;
  case Projector:
    pFVar15 = TArray<FCustomizableObjectProjectorParameterValue,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_UCustomizableObjectInstance::IsParameterDirty_::__l5::<lambda_1>_>
                        (&(this->Descriptor).ProjectorParameters,(<lambda_1>)param_1);
    pUVar16 = GetPrivate(this);
    pFVar23 = (FCustomizableObjectProjectorParameterValue *)
              (pUVar16->CommittedDescriptor).ProjectorParameters.AllocatorInstance.Data;
    pFVar26 = pFVar23 + (pUVar16->CommittedDescriptor).ProjectorParameters.ArrayNum;
    for (; pFVar24 = (FCustomizableObjectProjectorParameterValue *)0x0, pFVar23 != pFVar26;
        pFVar23 = pFVar23 + 1) {
      iVar11 = (pFVar23->ParameterName).Data.ArrayNum;
      iVar13 = (param_1->Data).ArrayNum;
      pFVar24 = pFVar23;
      if (iVar11 == iVar13) {
        if (iVar11 < 2) break;
        iVar11 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)(pFVar23->ParameterName).Data.AllocatorInstance.Data,
                            (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar9 = iVar11 == 0;
      }
      else {
        bVar9 = iVar11 + iVar13 == 1;
      }
      if (bVar9) break;
    }
    if ((pFVar15 != (FCustomizableObjectProjectorParameterValue *)0x0) &&
       (pFVar24 != (FCustomizableObjectProjectorParameterValue *)0x0)) {
      if (param_2 == -1) {
        bVar9 = FCustomizableObjectProjector::operator==(&pFVar15->Value,&pFVar24->Value);
        return bVar9;
      }
      if (((-1 < param_2) && (param_2 < (pFVar15->RangeValues).ArrayNum)) &&
         (param_2 < (pFVar24->RangeValues).ArrayNum)) {
        uVar12 = 0;
        if (param_2 < (pFVar15->RangeValues).ArrayNum) {
          uVar12 = (uint)~param_2 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        pFVar3 = (pFVar15->RangeValues).AllocatorInstance.Data;
        uVar12 = 0;
        if (param_2 < (pFVar24->RangeValues).ArrayNum) {
          uVar12 = (uint)~param_2 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        bVar9 = FCustomizableObjectProjector::operator==
                          ((FCustomizableObjectProjector *)(pFVar3 + lVar22 * 0x38),
                           (FCustomizableObjectProjector *)
                           ((pFVar24->RangeValues).AllocatorInstance.Data + lVar22 * 0x38));
        return bVar9;
      }
      return (pFVar15->RangeValues).ArrayNum != (pFVar24->RangeValues).ArrayNum;
    }
    goto LAB_14abe37bd;
  case Texture:
    pFVar15 = (FCustomizableObjectProjectorParameterValue *)
              TArray<FCustomizableObjectTextureParameterValue,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_UCustomizableObjectInstance::IsParameterDirty_::__l21::<lambda_3>_>
                        (&(this->Descriptor).TextureParameters,(<lambda_3>)param_1);
    pUVar16 = GetPrivate(this);
    pFVar23 = (FCustomizableObjectProjectorParameterValue *)
              (pUVar16->CommittedDescriptor).TextureParameters.AllocatorInstance.Data;
    iVar11 = (pUVar16->CommittedDescriptor).TextureParameters.ArrayNum;
    pFVar7 = &pFVar23->ParameterName;
    for (; pFVar24 = (FCustomizableObjectProjectorParameterValue *)0x0,
        pFVar23 !=
        (FCustomizableObjectProjectorParameterValue *)((longlong)pFVar7 + (longlong)iVar11 * 0x38);
        pFVar23 = (FCustomizableObjectProjectorParameterValue *)
                  ((pFVar23->Value).Scale.field0_0x0.XYZ + 1)) {
      iVar13 = (pFVar23->ParameterName).Data.ArrayNum;
      iVar2 = (param_1->Data).ArrayNum;
      pFVar24 = pFVar23;
      if (iVar13 == iVar2) {
        if (iVar13 < 2) break;
        iVar13 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)(pFVar23->ParameterName).Data.AllocatorInstance.Data,
                            (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar9 = iVar13 == 0;
      }
      else {
        bVar9 = iVar13 + iVar2 == 1;
      }
      if (bVar9) break;
    }
    if ((pFVar15 != (FCustomizableObjectProjectorParameterValue *)0x0) &&
       (pFVar24 != (FCustomizableObjectProjectorParameterValue *)0x0)) {
      if (param_2 == -1) {
        return *(longlong *)&(pFVar15->Value).Position.field0_0x0 ==
               *(longlong *)&(pFVar24->Value).Position.field0_0x0;
      }
      if (((-1 < param_2) && (param_2 < (int)(pFVar15->Value).Up.field0_0x0._s_0.Z)) &&
         (param_2 < (int)(pFVar24->Value).Up.field0_0x0._s_0.Z)) {
        uVar12 = 0;
        if (param_2 < (int)(pFVar24->Value).Up.field0_0x0._s_0.Z) {
          uVar12 = (uint)~param_2 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        lVar4 = *(longlong *)&(pFVar24->Value).Up.field0_0x0;
        uVar12 = 0;
        if (param_2 < (int)(pFVar15->Value).Up.field0_0x0._s_0.Z) {
          uVar12 = (uint)~param_2 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        return *(longlong *)(*(longlong *)&(pFVar15->Value).Up.field0_0x0 + lVar22 * 8) ==
               *(longlong *)(lVar4 + lVar22 * 8);
      }
LAB_14abe3914:
      return (pFVar15->Value).Up.field0_0x0._s_0.Z != (pFVar24->Value).Up.field0_0x0._s_0.Z;
    }
LAB_14abe37bd:
    return pFVar15 != pFVar24;
  default:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Unimplemented function called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0x3b2,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
  }
  return false;
}

// IsParameterRelevant @ 14abe3ff0

bool __thiscall
UCustomizableObjectInstance::IsParameterRelevant(UCustomizableObjectInstance *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  UCustomizableObject *pUVar2;
  UCustomizableInstancePrivate *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FMutableParameterIndex *pFVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  
  pUVar2 = (this->Descriptor).CustomizableObject.field0_0x0.DebugPtr;
  if (pUVar2 != (UCustomizableObject *)0x0) {
    if (((pUVar2->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Private",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                           ,0x3c0,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pFVar7 = TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
             ::Find((TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
                     *)&((pUVar2->Private).field0_0x0.DebugPtr)->ParameterPropertiesLookupTable,
                    param_1);
    if (pFVar7 == (FMutableParameterIndex *)0x0) {
      iVar9 = -1;
    }
    else {
      iVar9 = pFVar7->Index;
    }
    if (((this->PrivateData).field0_0x0.DebugPtr == (UCustomizableInstancePrivate *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PrivateData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                           ,0xce2,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pUVar3 = (this->PrivateData).field0_0x0.DebugPtr;
    pFVar8 = (pUVar3->RelevantParameters).AllocatorInstance.Data;
    pFVar1 = pFVar8 + (longlong)(pUVar3->RelevantParameters).ArrayNum * 4;
    for (; pFVar8 != pFVar1; pFVar8 = pFVar8 + 4) {
      if (*(int *)pFVar8 == iVar9) {
        return true;
      }
    }
  }
  return false;
}

// IsParameterRelevant @ 14abe40f0

bool __thiscall
UCustomizableObjectInstance::IsParameterRelevant(UCustomizableObjectInstance *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  UCustomizableInstancePrivate *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FScriptContainerElement *pFVar6;
  
  if (((this->PrivateData).field0_0x0.DebugPtr == (UCustomizableInstancePrivate *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrivateData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                         ,0xce2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pUVar2 = (this->PrivateData).field0_0x0.DebugPtr;
  pFVar6 = (pUVar2->RelevantParameters).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)(pUVar2->RelevantParameters).ArrayNum * 4;
  while( true ) {
    if (pFVar6 == pFVar1) {
      return false;
    }
    if (*(int *)pFVar6 == param_1) break;
    pFVar6 = pFVar6 + 4;
  }
  return true;
}

// IsReadyForFinishDestroy @ 14abe4180

bool __thiscall
UCustomizableObjectInstance::IsReadyForFinishDestroy(UCustomizableObjectInstance *this)

{
  return true;
}

// LoadDescriptor @ 14abe7ab0

void __thiscall
UCustomizableObjectInstance::LoadDescriptor(UCustomizableObjectInstance *this,FArchive *param_1)

{
  FCustomizableObjectInstanceDescriptor::LoadDescriptor(&this->Descriptor,param_1);
  return;
}

// MultilayerProjectorCreateLayer @ 14abe9fa0

void __thiscall
UCustomizableObjectInstance::MultilayerProjectorCreateLayer
          (UCustomizableObjectInstance *this,FName *param_1,int param_2)

{
  FCustomizableObjectInstanceDescriptor::CreateLayer(&this->Descriptor,param_1,param_2);
  return;
}

// MultilayerProjectorGetLayer @ 14abe9fc0

FMultilayerProjectorLayer * __thiscall
UCustomizableObjectInstance::MultilayerProjectorGetLayer
          (UCustomizableObjectInstance *this,FMultilayerProjectorLayer *__return_storage_ptr__,
          FName *param_1,int param_2)

{
  FCustomizableObjectInstanceDescriptor::GetLayer
            (&this->Descriptor,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// MultilayerProjectorNumLayers @ 14abe9ff0

int __thiscall
UCustomizableObjectInstance::MultilayerProjectorNumLayers
          (UCustomizableObjectInstance *this,FName *param_1)

{
  int iVar1;
  
  iVar1 = FCustomizableObjectInstanceDescriptor::NumProjectorLayers(&this->Descriptor,param_1);
  return iVar1;
}

// MultilayerProjectorRemoveLayerAt @ 14abea010

void __thiscall
UCustomizableObjectInstance::MultilayerProjectorRemoveLayerAt
          (UCustomizableObjectInstance *this,FName *param_1,int param_2)

{
  FCustomizableObjectInstanceDescriptor::RemoveLayerAt(&this->Descriptor,param_1,param_2);
  return;
}

// MultilayerProjectorUpdateLayer @ 14abea030

void __thiscall
UCustomizableObjectInstance::MultilayerProjectorUpdateLayer
          (UCustomizableObjectInstance *this,FName *param_1,int param_2,
          FMultilayerProjectorLayer *param_3)

{
  FCustomizableObjectInstanceDescriptor::UpdateLayer(&this->Descriptor,param_1,param_2,param_3);
  return;
}

// PostInitProperties @ 14abeb940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UCustomizableObjectInstance::PostInitProperties(UCustomizableObjectInstance *this)

{
  int iVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UCustomizableInstancePrivate *pUVar5;
  longlong *plVar6;
  undefined1 auStackY_e8 [32];
  FName local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  UObject::PostInitProperties((UObject *)this);
  if (((uint)this->_padding_ >> 4 & 1) != 0) {
    return;
  }
  pUVar5 = (this->PrivateData).field0_0x0.DebugPtr;
  if (pUVar5 == (UCustomizableInstancePrivate *)0x0) {
    pFVar3 = ::FName::FName(&local_a0,"Private");
    FVar2 = *pFVar3;
    if (FVar2 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar4 = Z_Construct_UClass_UCustomizableInstancePrivate_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar4);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._24_4_ = RF_NoFlags;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    local_98._16_8_ = FVar2;
    pUVar5 = (UCustomizableInstancePrivate *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  else {
    if ((UCustomizableObjectInstance *)pUVar5->_padding_ == this) {
      return;
    }
    pFVar3 = ::FName::FName(&local_a0,"Private");
    pUVar5 = (UCustomizableInstancePrivate *)
             StaticDuplicateObject
                       ((UObject *)(this->PrivateData).field0_0x0.DebugPtr,(UObject *)this,*pFVar3,
                        RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                        RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                        RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                        RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient|
                        RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                        RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
                        RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|
                        RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|
                        RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|RF_Standalone|
                        RF_Public,(UClass *)0x0,Normal,
                        PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|
                        ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|
                        AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|
                        ReachabilityFlag0);
    if (pUVar5 != (UCustomizableInstancePrivate *)0x0) {
      pUVar4 = Z_Construct_UClass_UCustomizableInstancePrivate_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) goto LAB_14abebaa4;
    }
    pUVar5 = (UCustomizableInstancePrivate *)0x0;
  }
LAB_14abebaa4:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UCustomizableInstancePrivate *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->PrivateData).field0_0x0.DebugPtr = pUVar5;
  return;
}

// PostLoad @ 14abebc90

void __thiscall UCustomizableObjectInstance::PostLoad(UCustomizableObjectInstance *this)

{
  UObject::PostLoad((UObject *)this);
  FCustomizableObjectInstanceDescriptor::ReloadParameters(&this->Descriptor);
  UCustomizableInstancePrivate::InitCustomizableObjectData
            ((this->PrivateData).field0_0x0.DebugPtr,
             (this->Descriptor).CustomizableObject.field0_0x0.DebugPtr);
  return;
}

// RemoveValueFromFloatRange @ 14abeef70

int __thiscall
UCustomizableObjectInstance::RemoveValueFromFloatRange
          (UCustomizableObjectInstance *this,FString *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FCustomizableObjectInstanceDescriptor::RemoveValueFromFloatRange
                    (&this->Descriptor,param_1,param_2);
  return iVar1;
}

// RemoveValueFromIntRange @ 14abeef90

int __thiscall
UCustomizableObjectInstance::RemoveValueFromIntRange
          (UCustomizableObjectInstance *this,FString *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FCustomizableObjectInstanceDescriptor::RemoveValueFromIntRange
                    (&this->Descriptor,param_1,param_2);
  return iVar1;
}

// RemoveValueFromProjectorRange @ 14abeefb0

int __thiscall
UCustomizableObjectInstance::RemoveValueFromProjectorRange
          (UCustomizableObjectInstance *this,FString *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FCustomizableObjectInstanceDescriptor::RemoveValueFromProjectorRange
                    (&this->Descriptor,param_1,param_2);
  return iVar1;
}

// SaveDescriptor @ 14abef860

void __thiscall
UCustomizableObjectInstance::SaveDescriptor
          (UCustomizableObjectInstance *this,FArchive *param_1,bool param_2)

{
  FCustomizableObjectInstanceDescriptor::SaveDescriptor(&this->Descriptor,param_1,param_2);
  return;
}

// Serialize @ 14abefdc0

void __thiscall
UCustomizableObjectInstance::Serialize(UCustomizableObjectInstance *this,FArchive *param_1)

{
  int *piVar1;
  TArray<FCustomizableObjectIntParameterValue,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FCustomizableObjectFloatParameterValue,TSizedDefaultAllocator<32>_> *pTVar3;
  UCustomizableObject *pUVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  wchar_t *_Str;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  uint local_88 [2];
  ForAnyElementType local_80;
  uint local_78;
  uint local_74;
  FString local_70;
  FString local_60;
  FGuid local_48 [2];
  
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FCustomizableObjectCustomVersion::GUID);
  local_48[0] = FCustomizableObjectCustomVersion::GUID;
  iVar10 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,local_48);
  if (iVar10 < 0x10) {
    pTVar2 = &this->IntParameters_DEPRECATED;
    uVar17 = 0;
    local_78 = 0;
    local_80.Data = (FScriptContainerElement *)0x0;
    local_74 = 0;
    local_88[0] = 0;
    uVar13 = uVar17;
    if (0 < (this->IntParameters_DEPRECATED).ArrayNum) {
      do {
        uVar20 = (uint)uVar13;
        uVar15 = 0;
        uVar16 = uVar15;
        if ((int)uVar20 < (this->IntParameters_DEPRECATED).ArrayNum) {
          uVar16 = ~uVar20 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar10 = NUM_LAYERS_PARAMETER_POSTFIX.Data.ArrayNum + -1;
        FVar8.Data = NUM_LAYERS_PARAMETER_POSTFIX.Data.AllocatorInstance.Data;
        if (NUM_LAYERS_PARAMETER_POSTFIX.Data.ArrayNum == 0) {
          iVar10 = 0;
          FVar8.Data = (FScriptContainerElement *)L"";
        }
        bVar9 = ::FString::EndsWith((FString *)
                                    ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar20 * 0x40
                                    ),(wchar_t *)FVar8.Data,iVar10,CaseSensitive);
        if (bVar9) {
          lVar14 = (longlong)(int)local_88[0];
          local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_70.Data.ArrayNum = 0;
          local_70.Data.ArrayMax = 0;
          local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          uVar16 = uVar15;
          if ((int)local_88[0] < (this->IntParameters_DEPRECATED).ArrayNum) {
            uVar16 = ~local_88[0] >> 0x1f;
          }
          local_60.Data.ArrayNum = 0;
          local_60.Data.ArrayMax = 0;
          if ((uVar16 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          bVar9 = ::FString::Split((FString *)((pTVar2->AllocatorInstance).Data + lVar14 * 0x40),
                                   &NUM_LAYERS_PARAMETER_POSTFIX,&local_70,&local_60);
          if ((!bVar9) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("bSplit",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                 ,0x22b,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar13 = uVar17;
          if (0 < (this->IntParameters_DEPRECATED).ArrayNum) {
            do {
              uVar16 = (uint)uVar13;
              if (local_88[0] != uVar16) {
                uVar20 = uVar15;
                if ((int)uVar16 < (this->IntParameters_DEPRECATED).ArrayNum) {
                  uVar20 = ~uVar16 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                uVar13 = (ulonglong)(local_70.Data.ArrayNum - 1);
                FVar8.Data = local_70.Data.AllocatorInstance.Data;
                if (local_70.Data.ArrayNum == 0) {
                  uVar13 = uVar17;
                  FVar8.Data = (FScriptContainerElement *)L"";
                }
                bVar9 = ::FString::StartsWith
                                  ((FString *)
                                   ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar16 * 0x40)
                                   ,(wchar_t *)FVar8.Data,(int)uVar13,CaseSensitive);
                if (bVar9) {
                  uVar20 = uVar15;
                  if ((int)uVar16 < (this->IntParameters_DEPRECATED).ArrayNum) {
                    uVar20 = ~uVar16 >> 0x1f;
                  }
                  if ((uVar20 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  uVar13 = (ulonglong)(POSE_PARAMETER_POSTFIX.Data.ArrayNum - 1);
                  FVar8.Data = POSE_PARAMETER_POSTFIX.Data.AllocatorInstance.Data;
                  if (POSE_PARAMETER_POSTFIX.Data.ArrayNum == 0) {
                    uVar13 = uVar17;
                    FVar8.Data = (FScriptContainerElement *)L"";
                  }
                  bVar9 = ::FString::EndsWith((FString *)
                                              ((pTVar2->AllocatorInstance).Data +
                                              (longlong)(int)uVar16 * 0x40),(wchar_t *)FVar8.Data,
                                              (int)uVar13,CaseSensitive);
                  if (bVar9) {
                    if (((local_80.Data <= (FScriptContainerElement *)local_88) &&
                        ((FScriptContainerElement *)local_88 <
                         local_80.Data + (longlong)(int)local_74 * 4)) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar9)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    if (local_78 == local_74) {
                      local_78 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x404,&local_80,(int *)&local_74);
                    }
                    *(uint *)(local_80.Data + (longlong)(int)local_78 * 4) = local_88[0];
                    local_78 = local_78 + 1;
                    break;
                  }
                }
              }
              uVar13 = (ulonglong)(uVar16 + 1);
            } while ((int)(uVar16 + 1) < (this->IntParameters_DEPRECATED).ArrayNum);
          }
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
        }
        local_88[0] = local_88[0] + 1;
        uVar13 = (ulonglong)local_88[0];
      } while ((int)local_88[0] < (this->IntParameters_DEPRECATED).ArrayNum);
      uVar13 = (ulonglong)local_78;
    }
    if (0 < (int)uVar13) {
      pTVar3 = &this->FloatParameters_DEPRECATED;
      uVar18 = uVar17;
      do {
        iVar10 = (this->FloatParameters_DEPRECATED).ArrayNum;
        if (iVar10 == (this->FloatParameters_DEPRECATED).ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x838,&pTVar3->AllocatorInstance,
                              &(this->FloatParameters_DEPRECATED).ArrayMax);
        }
        (this->FloatParameters_DEPRECATED).ArrayNum = iVar10 + 1;
        DefaultConstructItems<FCustomizableObjectFloatParameterValue,int>
                  ((pTVar3->AllocatorInstance).Data + (longlong)iVar10 * 0x38,1);
        uVar15 = (uint)uVar17;
        uVar20 = ~uVar15 >> 0x1f;
        uVar16 = 0;
        if ((int)uVar15 < (int)local_78) {
          uVar16 = uVar20;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar16 = *(uint *)(local_80.Data + uVar18);
        uVar12 = 0;
        if ((int)uVar16 < (this->IntParameters_DEPRECATED).ArrayNum) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar10 = (this->FloatParameters_DEPRECATED).ArrayNum;
        pFVar19 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar16 * 0x40;
        uVar12 = iVar10 - 1;
        uVar16 = 0;
        if ((int)uVar12 < iVar10) {
          uVar16 = ~uVar12 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar11 = *(int *)(pFVar19 + 8);
        iVar10 = iVar11 + -1;
        if (iVar11 == 0) {
          iVar10 = 0;
        }
        ::FString::AssignRange
                  ((FString *)
                   ((pTVar3->AllocatorInstance).Data +
                   (longlong)((this->FloatParameters_DEPRECATED).ArrayNum + -1) * 0x38),
                   *(wchar_t **)pFVar19,iVar10);
        uVar16 = 0;
        if ((int)uVar15 < (int)local_78) {
          uVar16 = uVar20;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar16 = *(uint *)(local_80.Data + uVar18);
        uVar12 = 0;
        if ((int)uVar16 < (this->IntParameters_DEPRECATED).ArrayNum) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar19 = (pTVar2->AllocatorInstance).Data;
        if (*(int *)(pFVar19 + (longlong)(int)uVar16 * 0x40 + 0x18) == 0) {
          _Str = L"";
        }
        else {
          _Str = *(wchar_t **)(pFVar19 + (longlong)(int)uVar16 * 0x40 + 0x10);
        }
        iVar11 = _wtoi(_Str);
        iVar10 = (this->FloatParameters_DEPRECATED).ArrayNum;
        uVar12 = iVar10 - 1;
        uVar16 = 0;
        if ((int)uVar12 < iVar10) {
          uVar16 = ~uVar12 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(float *)((pTVar3->AllocatorInstance).Data +
                  (longlong)(this->FloatParameters_DEPRECATED).ArrayNum * 0x38 + -0x28) =
             (float)iVar11;
        uVar16 = 0;
        if ((int)uVar15 < (int)local_78) {
          uVar16 = uVar20;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar16 = *(uint *)(local_80.Data + uVar18);
        uVar20 = 0;
        if ((int)uVar16 < (this->IntParameters_DEPRECATED).ArrayNum) {
          uVar20 = ~uVar16 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar10 = (this->FloatParameters_DEPRECATED).ArrayNum;
        uVar20 = iVar10 - 1;
        pFVar19 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar16 * 0x40 + 0x20;
        uVar6 = *(undefined8 *)pFVar19;
        uVar7 = *(undefined8 *)(pFVar19 + 8);
        uVar16 = 0;
        if ((int)uVar20 < iVar10) {
          uVar16 = ~uVar20 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar17 = (ulonglong)(uVar15 + 1);
        uVar18 = uVar18 + 4;
        pFVar19 = (pTVar3->AllocatorInstance).Data +
                  (longlong)(this->FloatParameters_DEPRECATED).ArrayNum * 0x38 + -0x24;
        *(undefined8 *)pFVar19 = uVar6;
        *(undefined8 *)(pFVar19 + 8) = uVar7;
        uVar13 = (ulonglong)local_78;
      } while ((int)(uVar15 + 1) < (int)local_78);
    }
    uVar16 = (int)uVar13 - 1;
    if (-1 < (int)uVar16) {
      lVar14 = (longlong)(int)uVar16 * 4;
      while( true ) {
        uVar15 = 0;
        if ((int)uVar16 < (int)uVar13) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar15 = *(uint *)(local_80.Data + lVar14);
        uVar20 = 0;
        if ((int)uVar15 < (this->IntParameters_DEPRECATED).ArrayNum) {
          uVar20 = ~uVar15 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar19 = (this->IntParameters_DEPRECATED).AllocatorInstance.Data +
                  (longlong)(int)uVar15 * 0x40;
        DestructItems<FString,int>(*(FString **)(pFVar19 + 0x30),*(int *)(pFVar19 + 0x38));
        if (*(void **)(pFVar19 + 0x30) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar19 + 0x30));
        }
        if (*(void **)(pFVar19 + 0x10) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar19 + 0x10));
        }
        if (*(void **)pFVar19 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar19);
        }
        iVar10 = (this->IntParameters_DEPRECATED).ArrayNum + ~uVar15;
        if (iVar10 != 0) {
          memmove(pFVar19,pFVar19 + 0x40,(longlong)iVar10 << 6);
        }
        piVar1 = &(this->IntParameters_DEPRECATED).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,&(this->IntParameters_DEPRECATED).AllocatorInstance,
                   (this->IntParameters_DEPRECATED).ArrayNum,
                   &(this->IntParameters_DEPRECATED).ArrayMax);
        lVar14 = lVar14 + -4;
        uVar16 = uVar16 - 1;
        if ((int)uVar16 < 0) break;
        uVar13 = (ulonglong)local_78;
      }
    }
    if (local_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data);
    }
  }
  else if (0x14 < iVar10) {
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (this->CustomizableObject_DEPRECATED).field0_0x0.DebugPtr,
     pUVar4 != (UCustomizableObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->Descriptor).CustomizableObject.field0_0x0 =
       (this->CustomizableObject_DEPRECATED).field0_0x0;
  TArray<FCustomizableObjectBoolParameterValue,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Descriptor).BoolParameters,&this->BoolParameters_DEPRECATED);
  TArray<FCustomizableObjectIntParameterValue,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Descriptor).IntParameters,&this->IntParameters_DEPRECATED);
  TArray<FCustomizableObjectFloatParameterValue,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Descriptor).FloatParameters,&this->FloatParameters_DEPRECATED);
  TArray<FCustomizableObjectTextureParameterValue,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Descriptor).TextureParameters,&this->TextureParameters_DEPRECATED);
  TArray<FCustomizableObjectVectorParameterValue,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Descriptor).VectorParameters,&this->VectorParameters_DEPRECATED);
  TArray<FCustomizableObjectProjectorParameterValue,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Descriptor).ProjectorParameters,&this->ProjectorParameters_DEPRECATED);
  return;
}

// Serialize @ 14abf0790

void __thiscall
UCustomizableObjectInstance::Serialize
          (UCustomizableObjectInstance *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetBoolParameterSelectedOption @ 14abf08f0

void __thiscall
UCustomizableObjectInstance::SetBoolParameterSelectedOption
          (UCustomizableObjectInstance *this,FString *param_1,bool param_2)

{
  FCustomizableObjectInstanceDescriptor::SetBoolParameterSelectedOption
            (&this->Descriptor,param_1,param_2);
  return;
}

// SetBuildParameterRelevancy @ 14abf0910

void __thiscall
UCustomizableObjectInstance::SetBuildParameterRelevancy
          (UCustomizableObjectInstance *this,bool param_1)

{
  FCustomizableObjectInstanceDescriptor::SetBuildParameterRelevancy(&this->Descriptor,param_1);
  return;
}

// SetColorParameterSelectedOption @ 14abf0930

void __thiscall
UCustomizableObjectInstance::SetColorParameterSelectedOption
          (UCustomizableObjectInstance *this,FString *param_1,FLinearColor *param_2)

{
  FCustomizableObjectInstanceDescriptor::SetColorParameterSelectedOption
            (&this->Descriptor,param_1,param_2);
  return;
}

// SetCurrentState @ 14abf0950

void __thiscall
UCustomizableObjectInstance::SetCurrentState(UCustomizableObjectInstance *this,FString *param_1)

{
  FCustomizableObjectInstanceDescriptor::SetCurrentState(&this->Descriptor,param_1);
  return;
}

// SetDefaultValue @ 14abf09c0

void __thiscall
UCustomizableObjectInstance::SetDefaultValue(UCustomizableObjectInstance *this,FString *param_1)

{
  UCustomizableObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  FMutableParameterIndex *pFVar4;
  int iVar5;
  
  pUVar1 = (this->Descriptor).CustomizableObject.field0_0x0.DebugPtr;
  if (pUVar1 != (UCustomizableObject *)0x0) {
    if ((pUVar1->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x3c0,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar4 = TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
             ::Find((TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
                     *)&((pUVar1->Private).field0_0x0.DebugPtr)->ParameterPropertiesLookupTable,
                    param_1);
    if (pFVar4 == (FMutableParameterIndex *)0x0) {
      iVar5 = -1;
    }
    else {
      iVar5 = pFVar4->Index;
    }
    FCustomizableObjectInstanceDescriptor::SetDefaultValue(&this->Descriptor,iVar5);
  }
  return;
}

// SetDefaultValues @ 14abf0a60

void __thiscall UCustomizableObjectInstance::SetDefaultValues(UCustomizableObjectInstance *this)

{
  FCustomizableObjectInstanceDescriptor::SetDefaultValues(&this->Descriptor);
  return;
}

// SetEnumParameterSelectedOption @ 14abf0b70

void __thiscall
UCustomizableObjectInstance::SetEnumParameterSelectedOption
          (UCustomizableObjectInstance *this,FString *param_1,FString *param_2,int param_3)

{
  FCustomizableObjectInstanceDescriptor::SetIntParameterSelectedOption
            (&this->Descriptor,param_1,param_2,param_3);
  return;
}

// SetFloatParameterSelectedOption @ 14abf0b90

void __thiscall
UCustomizableObjectInstance::SetFloatParameterSelectedOption
          (UCustomizableObjectInstance *this,FString *param_1,float param_2,int param_3)

{
  FCustomizableObjectInstanceDescriptor::SetFloatParameterSelectedOption
            (&this->Descriptor,param_1,param_2,param_3);
  return;
}

// SetForceGenerateResidentMips @ 14abf0bb0

void __thiscall
UCustomizableObjectInstance::SetForceGenerateResidentMips
          (UCustomizableObjectInstance *this,bool param_1)

{
  ECOInstanceFlags *pEVar1;
  UCustomizableInstancePrivate *pUVar2;
  code *pcVar3;
  bool bVar4;
  
  pUVar2 = (this->PrivateData).field0_0x0.DebugPtr;
  if (!param_1) {
    if (pUVar2 == (UCustomizableInstancePrivate *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrivateData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                         ,0xce2,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pEVar1 = &((this->PrivateData).field0_0x0.DebugPtr)->InstanceFlagsPrivate;
    *pEVar1 = *pEVar1 & ~ForceGenerateMipTail;
    return;
  }
  if (pUVar2 == (UCustomizableInstancePrivate *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrivateData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xce2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pEVar1 = &((this->PrivateData).field0_0x0.DebugPtr)->InstanceFlagsPrivate;
  *pEVar1 = *pEVar1 | ForceGenerateMipTail;
  return;
}

// SetIntParameterSelectedOption @ 14abf0c50

void __thiscall
UCustomizableObjectInstance::SetIntParameterSelectedOption
          (UCustomizableObjectInstance *this,FString *param_1,FString *param_2,int param_3)

{
  FCustomizableObjectInstanceDescriptor::SetIntParameterSelectedOption
            (&this->Descriptor,param_1,param_2,param_3);
  return;
}

// SetIsBeingUsedByComponentInPlay @ 14abf0c70

void __thiscall
UCustomizableObjectInstance::SetIsBeingUsedByComponentInPlay
          (UCustomizableObjectInstance *this,bool param_1)

{
  ECOInstanceFlags *pEVar1;
  UCustomizableInstancePrivate *pUVar2;
  code *pcVar3;
  bool bVar4;
  
  pUVar2 = (this->PrivateData).field0_0x0.DebugPtr;
  if (!param_1) {
    if (pUVar2 == (UCustomizableInstancePrivate *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrivateData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                         ,0xce2,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pEVar1 = &((this->PrivateData).field0_0x0.DebugPtr)->InstanceFlagsPrivate;
    *pEVar1 = *pEVar1 & ~UsedByComponentInPlay;
    return;
  }
  if (pUVar2 == (UCustomizableInstancePrivate *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrivateData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xce2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pEVar1 = &((this->PrivateData).field0_0x0.DebugPtr)->InstanceFlagsPrivate;
  *pEVar1 = *pEVar1 | UsedByComponentInPlay;
  return;
}

// SetIsDiscardedBecauseOfTooManyInstances @ 14abf0d10

void __thiscall
UCustomizableObjectInstance::SetIsDiscardedBecauseOfTooManyInstances
          (UCustomizableObjectInstance *this,bool param_1)

{
  ECOInstanceFlags *pEVar1;
  UCustomizableInstancePrivate *pUVar2;
  code *pcVar3;
  bool bVar4;
  
  pUVar2 = (this->PrivateData).field0_0x0.DebugPtr;
  if (!param_1) {
    if (pUVar2 == (UCustomizableInstancePrivate *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrivateData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                         ,0xce2,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pEVar1 = &((this->PrivateData).field0_0x0.DebugPtr)->InstanceFlagsPrivate;
    *pEVar1 = *pEVar1 & ~DiscardedByNumInstancesLimit;
    return;
  }
  if (pUVar2 == (UCustomizableInstancePrivate *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrivateData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xce2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pEVar1 = &((this->PrivateData).field0_0x0.DebugPtr)->InstanceFlagsPrivate;
  *pEVar1 = *pEVar1 | DiscardedByNumInstancesLimit;
  return;
}

// SetIsPlayerOrNearIt @ 14abf0db0

void __thiscall
UCustomizableObjectInstance::SetIsPlayerOrNearIt(UCustomizableObjectInstance *this,bool param_1)

{
  ECOInstanceFlags *pEVar1;
  UCustomizableInstancePrivate *pUVar2;
  code *pcVar3;
  bool bVar4;
  
  pUVar2 = (this->PrivateData).field0_0x0.DebugPtr;
  if (!param_1) {
    if (pUVar2 == (UCustomizableInstancePrivate *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrivateData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                         ,0xce2,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pEVar1 = &((this->PrivateData).field0_0x0.DebugPtr)->InstanceFlagsPrivate;
    *pEVar1 = *pEVar1 & ~UsedByPlayerOrNearIt;
    return;
  }
  if (pUVar2 == (UCustomizableInstancePrivate *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrivateData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xce2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pEVar1 = &((this->PrivateData).field0_0x0.DebugPtr)->InstanceFlagsPrivate;
  *pEVar1 = *pEVar1 | UsedByPlayerOrNearIt;
  return;
}

// SetMaterialParameterSelectedOption @ 14abf0e50

void __thiscall
UCustomizableObjectInstance::SetMaterialParameterSelectedOption
          (UCustomizableObjectInstance *this,FString *param_1,UMaterialInterface *param_2,
          int param_3)

{
  FCustomizableObjectInstanceDescriptor::SetMaterialParameterSelectedOption
            (&this->Descriptor,param_1,param_2,param_3);
  return;
}

// SetMinSquareDistToPlayer @ 14abf0ea0

void __thiscall
UCustomizableObjectInstance::SetMinSquareDistToPlayer
          (UCustomizableObjectInstance *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->PrivateData).field0_0x0.DebugPtr != (UCustomizableInstancePrivate *)0x0) {
    ((this->PrivateData).field0_0x0.DebugPtr)->MinSquareDistFromComponentToPlayer = param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("PrivateData",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                     ,0xce2,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ((this->PrivateData).field0_0x0.DebugPtr)->MinSquareDistFromComponentToPlayer = param_1;
  return;
}

// SetObject @ 14abf1100

void __thiscall
UCustomizableObjectInstance::SetObject
          (UCustomizableObjectInstance *this,UCustomizableObject *param_1)

{
  FCustomizableObjectInstanceDescriptor::SetCustomizableObject(&this->Descriptor,param_1);
  UCustomizableInstancePrivate::InitCustomizableObjectData
            ((this->PrivateData).field0_0x0.DebugPtr,param_1);
  return;
}

// SetProjectorAngle @ 14abf1140

void __thiscall
UCustomizableObjectInstance::SetProjectorAngle
          (UCustomizableObjectInstance *this,FString *param_1,float param_2,int param_3)

{
  FCustomizableObjectInstanceDescriptor::SetProjectorAngle
            (&this->Descriptor,param_1,param_2,param_3);
  return;
}

// SetProjectorDirection @ 14abf1160

void __thiscall
UCustomizableObjectInstance::SetProjectorDirection
          (UCustomizableObjectInstance *this,FString *param_1,TVector<double> *param_2,int param_3)

{
  FCustomizableObjectInstanceDescriptor::SetProjectorDirection
            (&this->Descriptor,param_1,param_2,param_3);
  return;
}

// SetProjectorPosition @ 14abf1180

void __thiscall
UCustomizableObjectInstance::SetProjectorPosition
          (UCustomizableObjectInstance *this,FString *param_1,TVector<double> *param_2,int param_3)

{
  FCustomizableObjectInstanceDescriptor::SetProjectorPosition
            (&this->Descriptor,param_1,param_2,param_3);
  return;
}

// SetProjectorScale @ 14abf11a0

void __thiscall
UCustomizableObjectInstance::SetProjectorScale
          (UCustomizableObjectInstance *this,FString *param_1,TVector<double> *param_2,int param_3)

{
  FCustomizableObjectInstanceDescriptor::SetProjectorScale
            (&this->Descriptor,param_1,param_2,param_3);
  return;
}

// SetProjectorUp @ 14abf11c0

void __thiscall
UCustomizableObjectInstance::SetProjectorUp
          (UCustomizableObjectInstance *this,FString *param_1,TVector<double> *param_2,int param_3)

{
  FCustomizableObjectInstanceDescriptor::SetProjectorUp(&this->Descriptor,param_1,param_2,param_3);
  return;
}

// SetProjectorValue @ 14abf11e0

void __thiscall
UCustomizableObjectInstance::SetProjectorValue
          (UCustomizableObjectInstance *this,FString *param_1,TVector<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4,TVector<double> *param_5,float param_6,
          int param_7)

{
  FCustomizableObjectInstanceDescriptor::SetProjectorValue
            (&this->Descriptor,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

// SetRandomValues @ 14abf1200

void __thiscall UCustomizableObjectInstance::SetRandomValues(UCustomizableObjectInstance *this)

{
  FCustomizableObjectInstanceDescriptor::SetRandomValues(&this->Descriptor);
  return;
}

// SetRandomValuesFromStream @ 14abf1220

void __thiscall
UCustomizableObjectInstance::SetRandomValuesFromStream
          (UCustomizableObjectInstance *this,FRandomStream *param_1)

{
  FCustomizableObjectInstanceDescriptor::SetRandomValuesFromStream(&this->Descriptor,param_1);
  return;
}

// SetReplacePhysicsAssets @ 14abf1550

void __thiscall
UCustomizableObjectInstance::SetReplacePhysicsAssets(UCustomizableObjectInstance *this,bool param_1)

{
  ECOInstanceFlags *pEVar1;
  UCustomizableInstancePrivate *pUVar2;
  code *pcVar3;
  bool bVar4;
  
  pUVar2 = (this->PrivateData).field0_0x0.DebugPtr;
  if (!param_1) {
    if (pUVar2 == (UCustomizableInstancePrivate *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrivateData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                         ,0xce2,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pEVar1 = &((this->PrivateData).field0_0x0.DebugPtr)->InstanceFlagsPrivate;
    *pEVar1 = *pEVar1 & ~ReplacePhysicsAssets;
    return;
  }
  if (pUVar2 == (UCustomizableInstancePrivate *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrivateData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xce2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pEVar1 = &((this->PrivateData).field0_0x0.DebugPtr)->InstanceFlagsPrivate;
  *pEVar1 = *pEVar1 | ReplacePhysicsAssets;
  return;
}

// SetRequestedLODs @ 14abf15f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UCustomizableObjectInstance::SetRequestedLODs
          (UCustomizableObjectInstance *this,
          TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
          *param_1,TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                   *param_2,
          TMap<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,0>_>
          *param_3)

{
  ECOInstanceFlags *pEVar1;
  UCustomizableObject *pUVar2;
  TObjectPtr<UModelResources>_u_0 TVar3;
  undefined8 uVar4;
  code *pcVar5;
  FMutableUpdateCandidate *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  UCustomizableInstancePrivate *pUVar10;
  UCustomizableObjectPrivate *pUVar11;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  *pTVar12;
  TTuple<FName,unsigned_char> *pTVar13;
  UCustomizableObjectSystem *this_00;
  ulonglong uVar14;
  undefined1 *puVar15;
  byte *pbVar16;
  char *pcVar17;
  longlong lVar18;
  char cVar19;
  byte bVar20;
  FMutableUpdateCandidate *pFVar21;
  uint uVar22;
  undefined1 auStack_228 [32];
  undefined8 local_208;
  byte local_1f8;
  byte local_1f7;
  byte local_1f6;
  undefined1 local_1f5;
  int local_1f4;
  uint local_1f0;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  *local_1e8;
  undefined1 local_1e0 [8];
  TPairInitializer<UCustomizableObjectInstance_const_*_&&,FMutableUpdateCandidate_const_&> local_1d8
  ;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  *local_1c8;
  FMutableUpdateCandidate *local_1c0;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  *local_1b8;
  UCustomizableObjectInstance *local_1b0;
  TSet<TTuple<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate>,TDefaultMapHashableKeyFuncs<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,0>,FDefaultSetAllocator>
  *local_1a8;
  FMutableUpdateCandidate *local_1a0;
  byte *local_198;
  FMutableUpdateCandidate *local_190;
  byte *local_188;
  UCustomizableObjectInstance **local_180;
  undefined1 *local_178;
  undefined1 local_168 [88];
  int local_110;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  local_108;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_228;
  local_1c8 = (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)param_2;
  local_1b8 = (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)param_1;
  local_1a8 = (TSet<TTuple<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate>,TDefaultMapHashableKeyFuncs<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,0>,FDefaultSetAllocator>
               *)param_3;
  if (((this->PrivateData).field0_0x0.DebugPtr == (UCustomizableInstancePrivate *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrivateData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                         ,0x1a5c,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->PrivateData).field0_0x0.DebugPtr == (UCustomizableInstancePrivate *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrivateData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                         ,0xce2,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar18 = ((this->PrivateData).field0_0x0.DebugPtr)->_padding_;
  if ((lVar18 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Public",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                         ,0xc38,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar2 = *(UCustomizableObject **)(lVar18 + 0x98);
  if ((pUVar2 != (UCustomizableObject *)0x0) &&
     (bVar7 = UCustomizableObject::IsCompiled(pUVar2), bVar7)) {
    if (((this->PrivateData).field0_0x0.DebugPtr == (UCustomizableInstancePrivate *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("PrivateData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                           ,0xce2,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((((((this->PrivateData).field0_0x0.DebugPtr)->SkeletalMeshStatus != Error) &&
         (pUVar2 = (this->Descriptor).CustomizableObject.field0_0x0.DebugPtr,
         pUVar2 != (UCustomizableObject *)0x0)) &&
        (bVar7 = IsStreamingEnabled(pUVar2,(this->Descriptor).State), !bVar7)) &&
       (((bVar7 = TAutoConsoleVariable<bool>::GetValueOnGameThread
                            (&CVarPreserveUserLODsOnFirstGeneration), !bVar7 ||
         (pUVar2->bPreserveUserLODsOnFirstGeneration == false)) ||
        (pUVar10 = GetPrivate(this), pUVar10->SkeletalMeshStatus == Success)))) {
      FMutableUpdateCandidate::FMutableUpdateCandidate((FMutableUpdateCandidate *)local_168,this);
      pUVar11 = UCustomizableObject::GetPrivate(pUVar2);
      TVar3 = (pUVar11->ModelResources).field0_0x0;
      if (TVar3.DebugPtr != (UModelResources *)0x0) {
        local_1f6 = 0;
        TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
        ::operator=((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                     *)(local_168 + 0x10),
                    (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                     *)param_1);
        pTVar12 = (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                   *)FCustomizableObjectInstanceDescriptor::GetFirstRequestedLOD(&this->Descriptor);
        TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
        ::operator=(&local_b8,pTVar12);
        pUVar10 = GetPrivate(this);
        local_1f0 = ((TVar3.DebugPtr)->ComponentNamesPerObjectComponent).ArrayNum;
        uVar14 = (ulonglong)(int)local_1f0;
        local_1e8 = (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                     *)&(pUVar10->CommittedDescriptorHash).FirstRequestedLOD;
        pFVar21 = *(FMutableUpdateCandidate **)((longlong)TVar3 + 0x400);
        local_1c0 = (FMutableUpdateCandidate *)
                    ((FNameEntryId *)&pFVar21->CustomizableObjectInstance + uVar14 * 2);
        while( true ) {
          pFVar6 = local_1c0;
          uVar22 = 0;
          if (((TVar3.DebugPtr)->ComponentNamesPerObjectComponent).ArrayNum != (int)uVar14) {
            local_1f5 = 0;
            `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_1f5);
          }
          if (pFVar21 == pFVar6) break;
          uVar4 = *(undefined8 *)&pFVar21->CustomizableObjectInstance;
          uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
          uVar8 = uVar8 + (int)((ulonglong)uVar4 >> 0x20);
          if (local_168._24_4_ != local_168._68_4_) {
            puVar15 = local_168 + 0x48;
            if ((undefined1 *)local_168._80_8_ != (undefined1 *)0x0) {
              puVar15 = (undefined1 *)local_168._80_8_;
            }
            iVar9 = *(int *)(puVar15 + (ulonglong)(local_110 - 1U & uVar8) * 4);
            if (iVar9 != -1) {
              do {
                lVar18 = local_168._16_8_ + (longlong)iVar9 * 0x14;
                if (*(longlong *)(local_168._16_8_ + (longlong)iVar9 * 0x14) ==
                    *(longlong *)&pFVar21->CustomizableObjectInstance) {
                  if (lVar18 != 0) goto LAB_14abf18d0;
                  break;
                }
                iVar9 = *(int *)(lVar18 + 0xc);
              } while (iVar9 != -1);
            }
          }
          local_208 = 0;
          local_1d8.Value = pFVar21;
          TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
                    ((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                      *)(local_168 + 0x10),(uint)&local_1f4,
                     (TKeyInitializer<FName_const_&> *)(ulonglong)uVar8,(bool *)&local_1d8.Value);
          lVar18 = local_168._16_8_ + (longlong)local_1f4 * 0x14;
LAB_14abf18d0:
          pTVar13 = TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                            *)param_1,*(FName *)&pFVar21->CustomizableObjectInstance);
          puVar15 = &pTVar13->field_0x8;
          if (pTVar13 == (TTuple<FName,unsigned_char> *)0x0) {
            puVar15 = (undefined1 *)0x0;
          }
          if (puVar15 != (undefined1 *)0x0) {
            *(undefined1 *)(lVar18 + 8) = *puVar15;
          }
          if (((pUVar2->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Private",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                                 ,0x3c0,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_1f7 = UCustomizableObjectPrivate::GetMinLODIndex
                                ((pUVar2->Private).field0_0x0.DebugPtr,(FName *)pFVar21);
          local_198 = &local_1f7;
          local_1a0 = pFVar21;
          TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,unsigned_char_const_&>_>
                    (&local_108,(TPairInitializer<FName_const_&,unsigned_char_const_&> *)local_1e0,
                     (bool *)&local_1a0);
          pTVar13 = TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                            *)&(TVar3.DebugPtr)->NumLODsAvailable,
                           *(FName *)&pFVar21->CustomizableObjectInstance);
          pbVar16 = &pTVar13->field_0x8;
          if (pTVar13 == (TTuple<FName,unsigned_char> *)0x0) {
            pbVar16 = (byte *)0x0;
          }
          if (pbVar16 != (byte *)0x0) {
            uVar22 = *pbVar16 - 1;
          }
          uVar8 = uVar22;
          if ((int)(uint)*(byte *)(lVar18 + 8) < (int)uVar22) {
            uVar8 = (uint)*(byte *)(lVar18 + 8);
          }
          bVar20 = local_1f7;
          if ((int)(uint)local_1f7 < (int)uVar8) {
            bVar20 = (byte)uVar8;
          }
          cVar19 = '\0';
          *(byte *)(lVar18 + 8) = bVar20;
          pTVar13 = TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                            *)&(this->Descriptor).MinLOD,
                           *(FName *)&pFVar21->CustomizableObjectInstance);
          pcVar17 = &pTVar13->field_0x8;
          if (pTVar13 == (TTuple<FName,unsigned_char> *)0x0) {
            pcVar17 = (char *)0x0;
          }
          if (pcVar17 != (char *)0x0) {
            cVar19 = *pcVar17;
          }
          local_1f6 = local_1f6 | cVar19 != *(char *)(lVar18 + 8);
          this_00 = UCustomizableObjectSystem::GetInstance();
          bVar7 = UCustomizableObjectSystem::IsOnlyGenerateRequestedLODsEnabled(this_00);
          if (bVar7) {
            bVar20 = 0;
            if (((this->PrivateData).field0_0x0.DebugPtr == (UCustomizableInstancePrivate *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("PrivateData",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                   ,0xce2,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pTVar13 = TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                              *)&(((this->PrivateData).field0_0x0.DebugPtr)->CommittedDescriptor).
                                 MinLOD,*(FName *)&pFVar21->CustomizableObjectInstance);
            pbVar16 = &pTVar13->field_0x8;
            if (pTVar13 == (TTuple<FName,unsigned_char> *)0x0) {
              pbVar16 = (byte *)0x0;
            }
            if (pbVar16 != (byte *)0x0) {
              bVar20 = *pbVar16;
            }
            pEVar1 = &((this->PrivateData).field0_0x0.DebugPtr)->InstanceFlagsPrivate;
            *pEVar1 = *pEVar1 | -(uint)(bVar20 < *(byte *)(lVar18 + 8)) & PendingLODsDowngrade;
            local_1f8 = 0;
            pTVar13 = TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                              *)&(TVar3.DebugPtr)->NumLODsToStream,
                             *(FName *)&pFVar21->CustomizableObjectInstance);
            pbVar16 = &pTVar13->field_0x8;
            if (pTVar13 == (TTuple<FName,unsigned_char> *)0x0) {
              pbVar16 = (byte *)0x0;
            }
            if (pbVar16 != (byte *)0x0) {
              local_1f8 = *pbVar16;
            }
            local_188 = &local_1f8;
            local_190 = pFVar21;
            TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_const_&,unsigned_char_const_&>_>
                      (&local_b8,
                       (TPairInitializer<FName_const_&,unsigned_char_const_&> *)(local_1e0 + 4),
                       (bool *)&local_190);
            bVar20 = local_1f8;
            pTVar13 = TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                      ::Find(local_1c8,*(FName *)&pFVar21->CustomizableObjectInstance);
            pbVar16 = &pTVar13->field_0x8;
            if (pTVar13 == (TTuple<FName,unsigned_char> *)0x0) {
              pbVar16 = (byte *)0x0;
            }
            if ((pbVar16 != (byte *)0x0) && (*pbVar16 < bVar20)) {
              bVar20 = *pbVar16;
            }
            pTVar13 = TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                      ::Find(local_1e8,*(FName *)&pFVar21->CustomizableObjectInstance);
            pbVar16 = &pTVar13->field_0x8;
            if (pTVar13 == (TTuple<FName,unsigned_char> *)0x0) {
              pbVar16 = (byte *)0x0;
            }
            if ((pbVar16 != (byte *)0x0) && (*pbVar16 < bVar20)) {
              bVar20 = *pbVar16;
            }
            if ((int)(uint)bVar20 < (int)uVar22) {
              uVar22 = (uint)bVar20;
            }
            bVar20 = local_1f7;
            if ((int)(uint)local_1f7 < (int)uVar22) {
              bVar20 = (byte)uVar22;
            }
            pTVar13 = TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                      ::Find(&local_b8,*(FName *)&pFVar21->CustomizableObjectInstance);
            if ((pTVar13 == (TTuple<FName,unsigned_char> *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Pair != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                   ,0x288,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pTVar13->field_0x8 = bVar20;
          }
          uVar14 = (ulonglong)local_1f0;
          pFVar21 = (FMutableUpdateCandidate *)&pFVar21->Priority;
          param_1 = (TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                     *)local_1b8;
        }
        if ((local_1f6 != 0) ||
           (bVar7 = TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                    ::OrderIndependentCompareEqual
                              ((TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                                *)local_1e8,
                               (TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                                *)&local_b8), !bVar7)) {
          pEVar1 = &((this->PrivateData).field0_0x0.DebugPtr)->InstanceFlagsPrivate;
          *pEVar1 = *pEVar1 | PendingLODsUpdate;
          local_180 = &local_1b0;
          local_178 = local_168;
          local_1b0 = this;
          TSet<TTuple<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate>,TDefaultMapHashableKeyFuncs<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<UCustomizableObjectInstance_const_*_&&,FMutableUpdateCandidate_const_&>_>
                    (local_1a8,&local_1d8,(bool *)&local_180);
        }
      }
      FMutableUpdateCandidate::~FMutableUpdateCandidate((FMutableUpdateCandidate *)local_168);
    }
  }
  return;
}

// SetReuseInstanceTextures @ 14abf1c30

void __thiscall
UCustomizableObjectInstance::SetReuseInstanceTextures
          (UCustomizableObjectInstance *this,bool param_1)

{
  ECOInstanceFlags *pEVar1;
  UCustomizableInstancePrivate *pUVar2;
  code *pcVar3;
  bool bVar4;
  
  pUVar2 = (this->PrivateData).field0_0x0.DebugPtr;
  if (!param_1) {
    if (pUVar2 == (UCustomizableInstancePrivate *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrivateData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                         ,0xce2,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pEVar1 = &((this->PrivateData).field0_0x0.DebugPtr)->InstanceFlagsPrivate;
    *pEVar1 = *pEVar1 & ~ReuseTextures;
    return;
  }
  if (pUVar2 == (UCustomizableInstancePrivate *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrivateData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xce2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pEVar1 = &((this->PrivateData).field0_0x0.DebugPtr)->InstanceFlagsPrivate;
  *pEVar1 = *pEVar1 | ReuseTextures;
  return;
}

// SetSkeletalMeshParameterSelectedOption @ 14abf1d10

void __thiscall
UCustomizableObjectInstance::SetSkeletalMeshParameterSelectedOption
          (UCustomizableObjectInstance *this,FString *param_1,USkeletalMesh *param_2,int param_3)

{
  FCustomizableObjectInstanceDescriptor::SetSkeletalMeshParameterSelectedOption
            (&this->Descriptor,param_1,param_2,param_3);
  return;
}

// SetTextureParameterSelectedOption @ 14abf1ee0

void __thiscall
UCustomizableObjectInstance::SetTextureParameterSelectedOption
          (UCustomizableObjectInstance *this,FString *param_1,UTexture *param_2,int param_3)

{
  FCustomizableObjectInstanceDescriptor::SetTextureParameterSelectedOption
            (&this->Descriptor,param_1,param_2,param_3);
  return;
}

// SetTransformParameterSelectedOption @ 14abf1f90

void __thiscall
UCustomizableObjectInstance::SetTransformParameterSelectedOption
          (UCustomizableObjectInstance *this,FString *param_1,TTransform<double> *param_2)

{
  FCustomizableObjectInstanceDescriptor::SetTransformParameterSelectedOption
            (&this->Descriptor,param_1,param_2);
  return;
}

// SetVectorParameterSelectedOption @ 14abf1fb0

void __thiscall
UCustomizableObjectInstance::SetVectorParameterSelectedOption
          (UCustomizableObjectInstance *this,FString *param_1,FLinearColor *param_2)

{
  FCustomizableObjectInstanceDescriptor::SetVectorParameterSelectedOption
            (&this->Descriptor,param_1,param_2);
  return;
}

// StaticRegisterNativesUCustomizableObjectInstance @ 14abf2030

void __cdecl UCustomizableObjectInstance::StaticRegisterNativesUCustomizableObjectInstance(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x58;
  local_18.DataPtr = Z_Construct_UClass_UCustomizableObjectInstance_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateSkeletalMeshAsync @ 14abf6580

void __thiscall
UCustomizableObjectInstance::UpdateSkeletalMeshAsync
          (UCustomizableObjectInstance *this,bool param_1,bool param_2)

{
  UCustomizableObjectSystem *this_00;
  UCustomizableObjectSystemPrivate *this_01;
  TSharedRef<FUpdateContextPrivate,1> local_18;
  
  this_00 = UCustomizableObjectSystem::GetInstance();
  this_01 = UCustomizableObjectSystem::GetPrivate(this_00);
  MakeShared<FUpdateContextPrivate,1,UCustomizableObjectInstance_&>(&local_18,this);
  (local_18.Object)->bIgnoreCloseDist = param_1;
  (local_18.Object)->bForceHighPriority = param_2;
  UCustomizableObjectSystemPrivate::EnqueueUpdateSkeletalMesh(this_01,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// UpdateSkeletalMeshAsyncResult @ 14abf6610

void __thiscall
UCustomizableObjectInstance::UpdateSkeletalMeshAsyncResult
          (UCustomizableObjectInstance *this,
          TMulticastDelegate<void___cdecl(FUpdateContext_const_&),FDefaultDelegateUserPolicy>
          *param_1,bool param_2,bool param_3)

{
  UCustomizableObjectSystem *this_00;
  UCustomizableObjectSystemPrivate *this_01;
  TSharedRef<FUpdateContextPrivate,1> local_18;
  
  this_00 = UCustomizableObjectSystem::GetInstance();
  this_01 = UCustomizableObjectSystem::GetPrivate(this_00);
  MakeShared<FUpdateContextPrivate,1,UCustomizableObjectInstance_&>(&local_18,this);
  (local_18.Object)->bIgnoreCloseDist = param_2;
  (local_18.Object)->bForceHighPriority = param_3;
  if (param_1 != &(local_18.Object)->UpdateNativeCallback) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FUpdateContext_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &(local_18.Object)->UpdateNativeCallback,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)param_1);
  }
  UCustomizableObjectSystemPrivate::EnqueueUpdateSkeletalMesh(this_01,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&param_1->field_0x8,
             *(int *)&param_1->field_0x10);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// UpdateSkeletalMeshAsyncResult @ 14abf66e0

void __thiscall
UCustomizableObjectInstance::UpdateSkeletalMeshAsyncResult
          (UCustomizableObjectInstance *this,FInstanceUpdateDelegate *param_1,bool param_2,
          bool param_3)

{
  UCustomizableObjectSystem *this_00;
  UCustomizableObjectSystemPrivate *this_01;
  TSharedRef<FUpdateContextPrivate,1> local_18;
  
  this_00 = UCustomizableObjectSystem::GetInstance();
  this_01 = UCustomizableObjectSystem::GetPrivate(this_00);
  MakeShared<FUpdateContextPrivate,1,UCustomizableObjectInstance_&>(&local_18,this);
  (local_18.Object)->bIgnoreCloseDist = param_2;
  (local_18.Object)->bForceHighPriority = param_3;
  TScriptDelegate<FNotThreadSafeDelegateMode>::operator=
            ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&(local_18.Object)->UpdateCallback,
             (TScriptDelegate<FNotThreadSafeDelegateMode> *)param_1);
  UCustomizableObjectSystemPrivate::EnqueueUpdateSkeletalMesh(this_01,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// execAddValueToFloatRange @ 14abf97a0

void __cdecl
UCustomizableObjectInstance::execAddValueToFloatRange
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = FCustomizableObjectInstanceDescriptor::AddValueToFloatRange
                    ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18);
  *(int *)param_3 = iVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execAddValueToIntRange @ 14abf9860

void __cdecl
UCustomizableObjectInstance::execAddValueToIntRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = FCustomizableObjectInstanceDescriptor::AddValueToIntRange
                    ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18);
  *(int *)param_3 = iVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execAddValueToProjectorRange @ 14abf9920

void __cdecl
UCustomizableObjectInstance::execAddValueToProjectorRange
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = FCustomizableObjectInstanceDescriptor::AddValueToProjectorRange
                    ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18);
  *(int *)param_3 = iVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execClone @ 14abf99e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl UCustomizableObjectInstance::execClone(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UCustomizableObjectInstance *this;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2507,"Mutable_UCustomizableObjectInstance::Clone",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
               ,0x9cb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2507);
  }
  pUVar3 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar4);
  local_a8._8_8_ = pUVar3;
  this = (UCustomizableObjectInstance *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar5 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (((this->PrivateData).field0_0x0.DebugPtr == (UCustomizableInstancePrivate *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewInstance->PrivateData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                         ,0x9cf,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  CopyParametersFromInstance(this,(UCustomizableObjectInstance *)param_1);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  *(UCustomizableObjectInstance **)param_3 = this;
  return;
}

// execCloneStatic @ 14abf9b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UCustomizableObjectInstance::execCloneStatic(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UClass *pUVar2;
  code *pcVar3;
  UObject *pUVar4;
  bool bVar5;
  UClass *pUVar6;
  UCustomizableObjectInstance *this;
  longlong *plVar7;
  undefined1 auStack_e8 [32];
  UObject *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  pUVar4 = local_c8;
  local_c0 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = *(UClass **)&param_1->field_0x10;
  FObjectInitializer::AssertIfInConstructor
            (local_c8,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = StaticClass();
  CheckIsClassChildOf_Internal(pUVar6,pUVar2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar2);
  local_b8._8_8_ = pUVar4;
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._16_4_ = 0;
  local_b8._20_4_ = 0;
  local_b8._24_4_ = RF_NoFlags;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  this = (UCustomizableObjectInstance *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar7 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  CopyParametersFromInstance(this,(UCustomizableObjectInstance *)param_1);
  if (((this->PrivateData).field0_0x0.DebugPtr == (UCustomizableInstancePrivate *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrivateData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                         ,0xce2,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ((this->PrivateData).field0_0x0.DebugPtr)->bShowOnlyRuntimeParameters = false;
  *(UCustomizableObjectInstance **)param_3 = this;
  return;
}

// execContainsBoolParameter @ 14abf9e80

void __cdecl
UCustomizableObjectInstance::execContainsBoolParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = FCustomizableObjectInstanceDescriptor::FindTypedParameterIndex
                    ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18,Bool)
  ;
  *(bool *)param_3 = iVar2 != -1;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execContainsEnumParameter @ 14abf9f40

void __cdecl
UCustomizableObjectInstance::execContainsEnumParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = FCustomizableObjectInstanceDescriptor::FindTypedParameterIndex
                    ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18,Int);
  *(bool *)param_3 = iVar2 != -1;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execContainsFloatParameter @ 14abfa250

void __cdecl
UCustomizableObjectInstance::execContainsFloatParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = FCustomizableObjectInstanceDescriptor::FindTypedParameterIndex
                    ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18,Float
                    );
  *(bool *)param_3 = iVar2 != -1;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execContainsIntParameter @ 14abfa310

void __cdecl
UCustomizableObjectInstance::execContainsIntParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = FCustomizableObjectInstanceDescriptor::FindTypedParameterIndex
                    ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18,Int);
  *(bool *)param_3 = iVar2 != -1;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execContainsMaterialParameter @ 14abfa3d0

void __cdecl
UCustomizableObjectInstance::execContainsMaterialParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = FCustomizableObjectInstanceDescriptor::FindTypedParameterIndex
                    ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18,
                     Material);
  *(bool *)param_3 = iVar2 != -1;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execContainsProjectorParameter @ 14abfa5d0

void __cdecl
UCustomizableObjectInstance::execContainsProjectorParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = FCustomizableObjectInstanceDescriptor::FindTypedParameterIndex
                    ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18,
                     Projector);
  *(bool *)param_3 = iVar2 != -1;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execContainsSkeletalMeshParameter @ 14abfa690

void __cdecl
UCustomizableObjectInstance::execContainsSkeletalMeshParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = FCustomizableObjectInstanceDescriptor::FindTypedParameterIndex
                    ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18,
                     SkeletalMesh);
  *(bool *)param_3 = iVar2 != -1;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execContainsTextureParameter @ 14abfa750

void __cdecl
UCustomizableObjectInstance::execContainsTextureParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = FCustomizableObjectInstanceDescriptor::FindTypedParameterIndex
                    ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18,
                     Texture);
  *(bool *)param_3 = iVar2 != -1;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execContainsTransformParameter @ 14abfa810

void __cdecl
UCustomizableObjectInstance::execContainsTransformParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = FCustomizableObjectInstanceDescriptor::FindTypedParameterIndex
                    ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18,
                     Transform);
  *(bool *)param_3 = iVar2 != -1;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execContainsVectorParameter @ 14abfa8d0

void __cdecl
UCustomizableObjectInstance::execContainsVectorParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = FCustomizableObjectInstanceDescriptor::FindTypedParameterIndex
                    ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18,Color
                    );
  *(bool *)param_3 = iVar2 != -1;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execForEachAnimInstance @ 14abfab50

void __cdecl
UCustomizableObjectInstance::execForEachAnimInstance(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  FName FVar7;
  int local_res8 [2];
  undefined8 local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_90 [3];
  FEachComponentAnimInstanceClassDelegate local_78;
  FReadAccessScope local_60;
  FReadAccessScope local_48;
  
  FVar7.ComparisonIndex.Value = 0;
  FVar7.Number = 0;
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_a0 = 0;
  local_98 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_90[0].AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_a8,&local_60);
  local_90[1].AccessDetector.State =
       (FMRSWRecursiveAccessDetector)(FMRSWRecursiveAccessDetector)local_a0;
  local_90[2].AccessDetector.State =
       (FMRSWRecursiveAccessDetector)(FMRSWRecursiveAccessDetector)local_98;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_60);
  iVar4 = local_res8[0];
  lVar2 = *(longlong *)&param_1[3].field_0x20;
  lVar6 = (longlong)local_res8[0];
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x128) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x3c0,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x128) + 0x40);
    if (((lVar2 == 0) || (iVar4 < 0)) || (*(int *)(lVar2 + 0x408) <= iVar4)) {
      local_res10 = 0;
    }
    else {
      if (iVar4 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FVar7 = *(FName *)(*(longlong *)(lVar2 + 0x400) + lVar6 * 8);
    }
    local_78._0_8_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(local_90,&local_48);
    local_78._8_8_ = local_90[1].AccessDetector.State;
    local_78._16_8_ = local_90[2].AccessDetector.State;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    if (*(longlong *)&param_1[0xd].field_0x20 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrivateData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                         ,0xce2,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    UE::Mutable::Private::InternalForEachAnimInstance<FEachComponentAnimInstanceClassDelegate>
              (*(UCustomizableInstancePrivate **)&param_1[0xd].field_0x20,FVar7,&local_78);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_90[0].AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
  return;
}

// execForEachComponentAnimInstance @ 14abfad80

void __cdecl
UCustomizableObjectInstance::execForEachComponentAnimInstance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FName local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  undefined8 local_80;
  undefined8 local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_70 [3];
  FEachComponentAnimInstanceClassDelegate local_58;
  FReadAccessScope local_40;
  FReadAccessScope local_28;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_80 = 0;
  local_78 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_70[0].AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_88,&local_40);
  local_70[1].AccessDetector.State =
       (FMRSWRecursiveAccessDetector)(FMRSWRecursiveAccessDetector)local_80;
  local_70[2].AccessDetector.State =
       (FMRSWRecursiveAccessDetector)(FMRSWRecursiveAccessDetector)local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  FVar3 = local_res8;
  local_58._0_8_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(local_70,&local_28);
  local_58._8_8_ = local_70[1].AccessDetector.State;
  local_58._16_8_ = local_70[2].AccessDetector.State;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (*(longlong *)&param_1[0xd].field_0x20 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrivateData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xce2,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UE::Mutable::Private::InternalForEachAnimInstance<FEachComponentAnimInstanceClassDelegate>
            (*(UCustomizableInstancePrivate **)&param_1[0xd].field_0x20,FVar3,&local_58);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_70[0].AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
  return;
}

// execGetAnimBP @ 14abfaf10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UCustomizableObjectInstance::execGetAnimBP(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FCustomizableInstanceComponentData *this;
  TSoftClassPtr<UAnimInstance> *this_00;
  UClass *pUVar4;
  FName *pFVar5;
  FName local_res8;
  FName local_res10;
  FName local_res18 [2];
  FString local_48;
  FString local_38;
  
  pUVar4 = (UClass *)0x0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pFVar5 = &local_res8;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar5 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18[0] = local_res10;
  if ((*(longlong *)&param_1[0xd].field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrivateData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                         ,0xce2,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this = UCustomizableInstancePrivate::GetComponentData
                   (*(UCustomizableInstancePrivate **)&param_1[0xd].field_0x20,local_res18);
  if (this == (FCustomizableInstanceComponentData *)0x0) {
    ::FName::ToString(local_res18,&local_38);
    ::FString::PrintfImpl
              (&local_48,L"Tried to access an invalid component index [%s] in a Mutable Instance.");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  else {
    this_00 = TMapBase<FName,TSoftClassPtr<UAnimInstance>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>_>
              ::Find((TMapBase<FName,TSoftClassPtr<UAnimInstance>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>_>
                      *)this,*pFVar5);
    if (this_00 != (TSoftClassPtr<UAnimInstance> *)0x0) {
      pUVar4 = TSoftClassPtr<UAnimInstance>::Get(this_00);
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14abfb0e3;
    if (pUVar4 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
LAB_14abfb0e3:
  *(UClass **)param_3 = pUVar4;
  return;
}

// execGetAnimationGameplayTags @ 14abfb100

void __cdecl
UCustomizableObjectInstance::execGetAnimationGameplayTags
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0xd].field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrivateData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xce2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FGameplayTagContainer::operator=
            (param_3,(FGameplayTagContainer *)(*(longlong *)&param_1[0xd].field_0x20 + 0x198));
  return;
}

// execGetBoolParameterSelectedOption @ 14abfb3b0

void __cdecl
UCustomizableObjectInstance::execGetBoolParameterSelectedOption
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FCustomizableObjectInstanceDescriptor::GetBoolParameterSelectedOption
                    ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetBuildParameterRelevancy @ 14abfb470

void __cdecl
UCustomizableObjectInstance::execGetBuildParameterRelevancy
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FCustomizableObjectInstanceDescriptor::GetBuildParameterRelevancy
                    ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20);
  *(bool *)param_3 = bVar1;
  return;
}

// execGetColorParameterSelectedOption @ 14abfb570

void __cdecl
UCustomizableObjectInstance::execGetColorParameterSelectedOption
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_28;
  FLinearColor_u_0 local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::GetColorParameterSelectedOption
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,
             (FLinearColor *)&local_18._s_0,&local_28);
  *(undefined8 *)param_3 = local_18._0_8_;
  *(undefined8 *)((longlong)param_3 + 8) = local_18._8_8_;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetComponentMeshSkeletalMesh @ 14abfb770

void __cdecl
UCustomizableObjectInstance::execGetComponentMeshSkeletalMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  USkeletalMesh *pUVar2;
  FName *pFVar3;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar3 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetComponentMeshSkeletalMesh((UCustomizableObjectInstance *)param_1,pFVar3);
  *(USkeletalMesh **)param_3 = pUVar2;
  return;
}

// execGetComponentNames @ 14abfb960

void __cdecl
UCustomizableObjectInstance::execGetComponentNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetComponentNames((UCustomizableObjectInstance *)param_1,&local_18);
  if (param_3 != pTVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar1->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetCurrentState @ 14abfb9e0

void __cdecl
UCustomizableObjectInstance::execGetCurrentState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::GetCurrentState
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetCustomizableObject @ 14abfba70

void __cdecl
UCustomizableObjectInstance::execGetCustomizableObject
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[3].field_0x20;
  return;
}

// execGetEnumParameterSelectedOption @ 14abfbfc0

void __cdecl
UCustomizableObjectInstance::execGetEnumParameterSelectedOption
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  int local_res8 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FCustomizableObjectInstanceDescriptor::GetIntParameterSelectedOption
                     ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18,
                      local_res8[0]);
  ::FString::operator=(param_3,pFVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetExtensionInstanceData @ 14abfc5c0

void __cdecl
UCustomizableObjectInstance::execGetExtensionInstanceData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TWeakObjectPtr<UCustomizableObjectExtension_const_,FWeakObjectPtr> *pTVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  UCustomizableObjectExtension *pUVar5;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar6;
  undefined8 uVar7;
  bool bVar8;
  TWeakObjectPtr<UCustomizableObjectExtension_const_,FWeakObjectPtr> *this;
  undefined1 local_res8 [8];
  UCustomizableObjectExtension *local_res10;
  TObjectPtr<UScriptStruct_const_>_u_0 local_38;
  undefined8 uStack_30;
  
  local_res10 = (UCustomizableObjectExtension *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar5 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = *(longlong *)&param_1[0xd].field_0x20;
  iVar2 = *(int *)(lVar4 + 0x210);
  this = *(TWeakObjectPtr<UCustomizableObjectExtension_const_,FWeakObjectPtr> **)(lVar4 + 0x208);
  pTVar1 = this + (longlong)iVar2 * 3;
  while( true ) {
    if (*(int *)(lVar4 + 0x210) != iVar2) {
      `TCheckedPointerIterator<FExtensionInstanceData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this == pTVar1) goto LAB_14abfc6a3;
    bVar8 = TWeakObjectPtr<UCustomizableObjectExtension_const_,FWeakObjectPtr>::
            UEOpEquals<UCustomizableObjectExtension,bool>(this,pUVar5);
    if (bVar8) break;
    this = this + 3;
  }
  if (this == (TWeakObjectPtr<UCustomizableObjectExtension_const_,FWeakObjectPtr> *)0x0) {
LAB_14abfc6a3:
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_38.ObjectPtr);
  }
  else {
    local_38.DebugPtr = (UScriptStruct *)0x0;
    uStack_30 = 0;
    FInstancedStruct::InitializeAs
              ((FInstancedStruct *)&local_38.ObjectPtr,(UScriptStruct *)this[1].WeakPtr,
               (uchar *)this[2].WeakPtr);
  }
  if (param_3 != &local_38) {
    FInstancedStruct::Reset(param_3);
    uVar7 = uStack_30;
    TVar6 = local_38;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_38.DebugPtr != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_38.DebugPtr);
    }
    *(TObjectPtr<UScriptStruct_const_>_u_0 *)param_3 = TVar6;
    local_38.DebugPtr = (UScriptStruct *)0x0;
    uStack_30 = 0;
    *(undefined8 *)((longlong)param_3 + 8) = uVar7;
  }
  FInstancedStruct::Reset((FInstancedStruct *)&local_38.ObjectPtr);
  return;
}

// execGetFloatParameterSelectedOption @ 14abfc950

void __cdecl
UCustomizableObjectInstance::execGetFloatParameterSelectedOption
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  int local_res8 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar2 = FCustomizableObjectInstanceDescriptor::GetFloatParameterSelectedOption
                    ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18,
                     local_res8[0]);
  *(float *)param_3 = fVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetFloatValueRange @ 14abfca50

void __cdecl
UCustomizableObjectInstance::execGetFloatValueRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = FCustomizableObjectInstanceDescriptor::GetFloatValueRange
                    ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18);
  *(int *)param_3 = iVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetIntParameterSelectedOption @ 14abfcb10

void __cdecl
UCustomizableObjectInstance::execGetIntParameterSelectedOption
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  int local_res8 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FCustomizableObjectInstanceDescriptor::GetIntParameterSelectedOption
                     ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18,
                      local_res8[0]);
  ::FString::operator=(param_3,pFVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetIntValueRange @ 14abfcc10

void __cdecl
UCustomizableObjectInstance::execGetIntValueRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = FCustomizableObjectInstanceDescriptor::GetIntValueRange
                    ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18);
  *(int *)param_3 = iVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetMaterialParameterSelectedOption @ 14abfce00

void __cdecl
UCustomizableObjectInstance::execGetMaterialParameterSelectedOption
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMaterialInterface *pUVar2;
  int local_res8 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = FCustomizableObjectInstanceDescriptor::GetMaterialParameterSelectedOption
                     ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18,
                      local_res8[0]);
  *(UMaterialInterface **)param_3 = pUVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetMergedAssetUserData @ 14abfcf00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UCustomizableObjectInstance::execGetMergedAssetUserData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TSet<UAssetUserData_*,DefaultKeyFuncs<UAssetUserData_*,0>,FDefaultSetAllocator> *pTVar2;
  undefined1 auStack_a8 [32];
  int local_88 [4];
  TSet<UAssetUserData_*,DefaultKeyFuncs<UAssetUserData_*,0>,FDefaultSetAllocator> local_78;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetMergedAssetUserData((UCustomizableObjectInstance *)param_1,&local_78,local_88[0]);
  if (param_3 != pTVar2) {
    TSet<UAssetUserData_*,DefaultKeyFuncs<UAssetUserData_*,0>,FDefaultSetAllocator>::
    Move<TSet<UAssetUserData_*,DefaultKeyFuncs<UAssetUserData_*,0>,FDefaultSetAllocator>_>
              (param_3,pTVar2);
  }
  local_78.HashSize = 0;
  if (local_78.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_78.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<UAssetUserData_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UAssetUserData_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_78.Elements);
  return;
}

// execGetNumComponents @ 14abfcfe0

void __cdecl
UCustomizableObjectInstance::execGetNumComponents(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UCustomizableObject **)&param_1[3].field_0x20 != (UCustomizableObject *)0x0) {
    iVar1 = UCustomizableObject::GetComponentCount(*(UCustomizableObject **)&param_1[3].field_0x20);
    *(int *)param_3 = iVar1;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetProjectorAngle @ 14abfd3c0

void __cdecl
UCustomizableObjectInstance::execGetProjectorAngle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  int local_res8 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar2 = FCustomizableObjectInstanceDescriptor::GetProjectorAngle
                    ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18,
                     local_res8[0]);
  *(float *)param_3 = fVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetProjectorDirection @ 14abfd4c0

void __cdecl
UCustomizableObjectInstance::execGetProjectorDirection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  FString local_38;
  TVector<double>_u_0 local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::GetProjectorDirection
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,
             (TVector<double> *)&local_28._s_0,&local_38,local_res8[0]);
  *(double *)param_3 = local_28._s_0.X;
  *(double *)((longlong)param_3 + 8) = local_28._s_0.Y;
  *(double *)((longlong)param_3 + 0x10) = local_28._s_0.Z;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetProjectorParameterType @ 14abfd6b0

void __cdecl
UCustomizableObjectInstance::execGetProjectorParameterType
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ECustomizableObjectProjectorType EVar2;
  int local_res8 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar2 = FCustomizableObjectInstanceDescriptor::GetProjectorParameterType
                    ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18,
                     local_res8[0]);
  *(ECustomizableObjectProjectorType *)param_3 = EVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetProjectorPosition @ 14abfd7b0

void __cdecl
UCustomizableObjectInstance::execGetProjectorPosition
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  FString local_38;
  TVector<double>_u_0 local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::GetProjectorPosition
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,
             (TVector<double> *)&local_28._s_0,&local_38,local_res8[0]);
  *(double *)param_3 = local_28._s_0.X;
  *(double *)((longlong)param_3 + 8) = local_28._s_0.Y;
  *(double *)((longlong)param_3 + 0x10) = local_28._s_0.Z;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetProjectorScale @ 14abfd8c0

void __cdecl
UCustomizableObjectInstance::execGetProjectorScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  FString local_38;
  TVector<double>_u_0 local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::GetProjectorScale
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,
             (TVector<double> *)&local_28._s_0,&local_38,local_res8[0]);
  *(double *)param_3 = local_28._s_0.X;
  *(double *)((longlong)param_3 + 8) = local_28._s_0.Y;
  *(double *)((longlong)param_3 + 0x10) = local_28._s_0.Z;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetProjectorUp @ 14abfd9d0

void __cdecl
UCustomizableObjectInstance::execGetProjectorUp(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  FString local_38;
  TVector<double>_u_0 local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::GetProjectorUp
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,
             (TVector<double> *)&local_28._s_0,&local_38,local_res8[0]);
  *(double *)param_3 = local_28._s_0.X;
  *(double *)((longlong)param_3 + 8) = local_28._s_0.Y;
  *(double *)((longlong)param_3 + 0x10) = local_28._s_0.Z;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetProjectorValue @ 14abfdae0

void __cdecl
UCustomizableObjectInstance::execGetProjectorValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  TVector<double> *pTVar1;
  float *pfVar2;
  FProperty *pFVar3;
  ECustomizableObjectProjectorType *pEVar4;
  TVector<double> *pTVar5;
  TVector<double> *pTVar6;
  float *pfVar7;
  TVector<double> *pTVar8;
  ECustomizableObjectProjectorType local_res10 [8];
  float local_res20 [2];
  int local_b8 [2];
  FString local_b0;
  TVector<double> *local_a0;
  TVector<double> local_98;
  TVector<double> local_80;
  TVector<double> local_68;
  TVector<double> local_50;
  
  local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.Data.ArrayNum = 0;
  local_b0.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pTVar1 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_a0 = &local_98;
  if (pTVar1 != (TVector<double> *)0x0) {
    local_a0 = pTVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  pTVar1 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar6 = &local_80;
  if (pTVar1 != (TVector<double> *)0x0) {
    pTVar6 = pTVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  pTVar1 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar5 = &local_68;
  if (pTVar1 != (TVector<double> *)0x0) {
    pTVar5 = pTVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  pTVar1 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  local_res20[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pTVar8 = &local_50;
  if (pTVar1 != (TVector<double> *)0x0) {
    pTVar8 = pTVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pfVar2 = (float *)param_2->MostRecentPropertyAddress;
  local_res10[0] = Planar;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar7 = local_res20;
  if (pfVar2 != (float *)0x0) {
    pfVar7 = pfVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_b8[0] = 0;
  pEVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (ECustomizableObjectProjectorType *)0x0) {
    pEVar4 = param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::GetProjectorValue
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_b0,local_a0,
             pTVar6,pTVar5,pTVar8,pfVar7,pEVar4,local_b8[0]);
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetProjectorValueRange @ 14abfddc0

void __cdecl
UCustomizableObjectInstance::execGetProjectorValueRange
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = FCustomizableObjectInstanceDescriptor::GetProjectorValueRange
                    ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18);
  *(int *)param_3 = iVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetSkeletalMesh @ 14abfde80

void __cdecl
UCustomizableObjectInstance::execGetSkeletalMesh(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  USkeletalMesh *pUVar3;
  int iVar4;
  int local_res10 [2];
  FName local_res18 [2];
  FString local_28;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::AppendInt(&local_28,local_res10[0]);
  iVar4 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  pFVar2 = ::FName::FName(local_res18,iVar4,(wchar_t *)local_28.Data.AllocatorInstance.Data,
                          FNAME_Add);
  local_res18[0] = *pFVar2;
  pUVar3 = GetComponentMeshSkeletalMesh((UCustomizableObjectInstance *)param_1,local_res18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(USkeletalMesh **)param_3 = pUVar3;
  return;
}

// execGetSkeletalMeshComponentOverrideMaterials @ 14abfdf60

void __cdecl
UCustomizableObjectInstance::execGetSkeletalMeshComponentOverrideMaterials
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FCustomizableInstanceComponentData *pFVar7;
  ForAnyElementType FVar8;
  FName *pFVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  FName local_res10;
  undefined8 local_68;
  ForAnyElementType local_60;
  uint local_58;
  uint local_54;
  undefined1 local_50 [24];
  
  pFVar13 = (FScriptContainerElement *)0x0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar9 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar9 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar7 = UCustomizableInstancePrivate::GetComponentData
                     (*(UCustomizableInstancePrivate **)&param_1[0xd].field_0x20,pFVar9);
  uVar6 = 0;
  FVar8.Data = pFVar13;
  uVar11 = uVar6;
  if (pFVar7 != (FCustomizableInstanceComponentData *)0x0) {
    local_60.Data = (FScriptContainerElement *)0x0;
    local_58 = 0;
    local_54 = 0;
    pFVar12 = (pFVar7->OverrideMaterials).AllocatorInstance.Data;
    iVar2 = (pFVar7->OverrideMaterials).ArrayNum;
    pFVar1 = pFVar12 + (longlong)iVar2 * 8;
    pFVar10 = pFVar13;
    while( true ) {
      uVar6 = (uint)pFVar10;
      if ((pFVar7->OverrideMaterials).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UMaterialInterface>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
        uVar6 = local_58;
      }
      FVar8.Data = local_60.Data;
      uVar11 = local_54;
      if (pFVar12 == pFVar1) break;
      local_68 = *(undefined8 *)pFVar12;
      if (((local_60.Data <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 < local_60.Data + (longlong)(int)local_54 * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), uVar6 = local_58, bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar6 == local_54) {
        uVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_60,(int *)&local_54);
      }
      local_58 = uVar6 + 1;
      pFVar12 = pFVar12 + 8;
      *(undefined8 *)(local_60.Data + (longlong)(int)uVar6 * 8) = local_68;
      pFVar10 = (FScriptContainerElement *)(ulonglong)local_58;
    }
  }
  if (param_3 != local_50) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = FVar8.Data;
    *(uint *)((longlong)param_3 + 8) = uVar6;
    *(uint *)((longlong)param_3 + 0xc) = uVar11;
    FVar8.Data = pFVar13;
  }
  if (FVar8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  return;
}

// execGetSkeletalMeshComponentSkeletalMesh @ 14abfe250

void __cdecl
UCustomizableObjectInstance::execGetSkeletalMeshComponentSkeletalMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  USkeletalMesh *pUVar2;
  FName *pFVar3;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar3 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetComponentMeshSkeletalMesh((UCustomizableObjectInstance *)param_1,pFVar3);
  *(USkeletalMesh **)param_3 = pUVar2;
  return;
}

// execGetSkeletalMeshParameterSelectedOption @ 14abfe440

void __cdecl
UCustomizableObjectInstance::execGetSkeletalMeshParameterSelectedOption
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  USkeletalMesh *pUVar2;
  int local_res8 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = FCustomizableObjectInstanceDescriptor::GetSkeletalMeshParameterSelectedOption
                     ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18,
                      local_res8[0]);
  *(USkeletalMesh **)param_3 = pUVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetTextureParameterSelectedOption @ 14abfedd0

void __cdecl
UCustomizableObjectInstance::execGetTextureParameterSelectedOption
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UTexture *pUVar2;
  int local_res8 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = FCustomizableObjectInstanceDescriptor::GetTextureParameterSelectedOption
                     ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18,
                      local_res8[0]);
  *(UTexture **)param_3 = pUVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetTextureValueRange @ 14abfeed0

void __cdecl
UCustomizableObjectInstance::execGetTextureValueRange
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = FCustomizableObjectInstanceDescriptor::GetTextureValueRange
                    ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18);
  *(int *)param_3 = iVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetTransformParameterSelectedOption @ 14abff080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UCustomizableObjectInstance::execGetTransformParameterSelectedOption
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auStack_b8 [32];
  FString local_98;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::GetTransformParameterSelectedOption
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_88,&local_98);
  *(double *)param_3 = local_88.Rotation.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 8) = local_88.Rotation.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x10) = local_88.Rotation.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x18) = local_88.Rotation.ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x20) = local_88.Translation.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x28) = local_88.Translation.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x30) = local_88.Translation.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x38) = local_88.Translation.ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x40) = local_88.Scale3D.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x48) = local_88.Scale3D.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x50) = local_88.Scale3D.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x58) = local_88.Scale3D.ZW.m128d_f64[1];
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return;
}

// execHasAnyParameters @ 14abff190

void __cdecl
UCustomizableObjectInstance::execHasAnyParameters(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FCustomizableObjectInstanceDescriptor::HasAnyParameters
                    ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20);
  *(bool *)param_3 = bVar1;
  return;
}

// execHasAnySkeletalMesh @ 14abff1d0

void __cdecl
UCustomizableObjectInstance::execHasAnySkeletalMesh(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0xd].field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrivateData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xce2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(bool *)param_3 =
       *(int *)(*(longlong *)&param_1[0xd].field_0x20 + 0x30) !=
       *(int *)(*(longlong *)&param_1[0xd].field_0x20 + 0x5c);
  return;
}

// execIsParameterDirty @ 14abff310

void __cdecl
UCustomizableObjectInstance::execIsParameterDirty(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = IsParameterDirty((UCustomizableObjectInstance *)param_1,&local_18,local_res10[0]);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execIsParameterRelevant @ 14abff610

void __cdecl
UCustomizableObjectInstance::execIsParameterRelevant(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar8 = *(longlong *)&param_1[3].field_0x20;
  if (lVar8 == 0) goto LAB_14abff780;
  if ((*(longlong *)(lVar8 + 0x128) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x3c0,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar8 = *(longlong *)(lVar8 + 0x128);
  iVar7 = local_18.Data.ArrayNum + -1;
  FVar3.Data = local_18.Data.AllocatorInstance.Data;
  if (local_18.Data.ArrayNum == 0) {
    iVar7 = 0;
    FVar3.Data = (FScriptContainerElement *)L"";
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar3.Data);
  iVar7 = TSet<TTuple<FString,FMutableParameterIndex>,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FMutableParameterIndex>,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>,FDefaultSetAllocator>
                      *)(lVar8 + 0x170),uVar6,&local_18);
  if (iVar7 == -1) {
LAB_14abff721:
    iVar7 = -1;
  }
  else {
    lVar8 = (longlong)iVar7 * 0x20 + *(longlong *)(lVar8 + 0x170);
    piVar10 = (int *)(lVar8 + 0x10);
    if (lVar8 == 0) {
      piVar10 = (int *)0x0;
    }
    if (piVar10 == (int *)0x0) goto LAB_14abff721;
    iVar7 = *piVar10;
  }
  if ((*(longlong *)&param_1[0xd].field_0x20 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrivateData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                         ,0xce2,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  piVar9 = *(int **)(*(longlong *)&param_1[0xd].field_0x20 + 0x98);
  piVar10 = piVar9 + *(int *)(*(longlong *)&param_1[0xd].field_0x20 + 0xa0);
  for (; piVar9 != piVar10; piVar9 = piVar9 + 1) {
    if (*piVar9 == iVar7) {
      uVar5 = 1;
      goto LAB_14abff782;
    }
  }
LAB_14abff780:
  uVar5 = 0;
LAB_14abff782:
  *(undefined1 *)param_3 = uVar5;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execMultilayerProjectorCreateLayer @ 14abff7c0

void __cdecl
UCustomizableObjectInstance::execMultilayerProjectorCreateLayer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  int local_res8 [2];
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  pFVar2 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar2 = (FName *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::CreateLayer
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,pFVar2,local_res8[0]);
  return;
}

// execMultilayerProjectorGetLayer @ 14abff8a0

void __cdecl
UCustomizableObjectInstance::execMultilayerProjectorGetLayer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  ForAnyElementType *pFVar1;
  FProperty *pFVar2;
  FName *pFVar3;
  int local_res8 [2];
  FName local_res10;
  TVector<double>_u_0 local_a8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  ForAnyElementType local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  pFVar3 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::GetLayer
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,
             (FMultilayerProjectorLayer *)&local_a8._s_0,pFVar3,local_res8[0]);
  pFVar1 = (ForAnyElementType *)((longlong)param_3 + 0x68);
  *(double *)param_3 = local_a8._s_0.X;
  *(double *)((longlong)param_3 + 8) = local_a8._s_0.Y;
  *(double *)((longlong)param_3 + 0x10) = local_a8._s_0.Z;
  *(undefined8 *)((longlong)param_3 + 0x18) = local_90;
  *(undefined8 *)((longlong)param_3 + 0x20) = uStack_88;
  *(undefined8 *)((longlong)param_3 + 0x28) = local_80;
  *(undefined8 *)((longlong)param_3 + 0x30) = local_78;
  *(undefined8 *)((longlong)param_3 + 0x38) = uStack_70;
  *(undefined8 *)((longlong)param_3 + 0x40) = local_68;
  *(undefined8 *)((longlong)param_3 + 0x48) = local_60;
  *(undefined8 *)((longlong)param_3 + 0x50) = uStack_58;
  *(undefined4 *)((longlong)param_3 + 0x60) = local_48;
  *(undefined8 *)((longlong)param_3 + 0x58) = local_50;
  if (pFVar1 != &local_40) {
    if (pFVar1->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1->Data);
    }
    pFVar1->Data = local_40.Data;
    *(undefined4 *)((longlong)param_3 + 0x70) = (undefined4)local_38;
    *(undefined4 *)((longlong)param_3 + 0x74) = local_38._4_4_;
    local_38 = 0;
    local_40.Data = (FScriptContainerElement *)0x0;
  }
  *(undefined4 *)((longlong)param_3 + 0x78) = local_30;
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  return;
}

// execMultilayerProjectorNumLayers @ 14abffa40

void __cdecl
UCustomizableObjectInstance::execMultilayerProjectorNumLayers
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FName *pFVar3;
  FName local_res8;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pFVar3 = &local_res8;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = FCustomizableObjectInstanceDescriptor::NumProjectorLayers
                    ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,pFVar3);
  *(int *)param_3 = iVar2;
  return;
}

// execMultilayerProjectorRemoveLayerAt @ 14abffaf0

void __cdecl
UCustomizableObjectInstance::execMultilayerProjectorRemoveLayerAt
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  int local_res8 [2];
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  pFVar2 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar2 = (FName *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::RemoveLayerAt
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,pFVar2,local_res8[0]);
  return;
}

// execMultilayerProjectorUpdateLayer @ 14abffbd0

void __cdecl
UCustomizableObjectInstance::execMultilayerProjectorUpdateLayer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  FMultilayerProjectorLayer *pFVar3;
  int local_res8 [2];
  FName local_res10;
  FMultilayerProjectorLayer local_98;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  pFVar2 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar2 = (FName *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_98.Image.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Image.Data.ArrayNum = 0;
  local_98.Image.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pFVar3 = &local_98;
  if ((FMultilayerProjectorLayer *)param_2->MostRecentPropertyAddress !=
      (FMultilayerProjectorLayer *)0x0) {
    pFVar3 = (FMultilayerProjectorLayer *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::UpdateLayer
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,pFVar2,local_res8[0],
             pFVar3);
  if (local_98.Image.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Image.Data.AllocatorInstance.Data);
  }
  return;
}

// execRemoveValueFromFloatRange @ 14abffd40

void __cdecl
UCustomizableObjectInstance::execRemoveValueFromFloatRange
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int local_res8 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = FCustomizableObjectInstanceDescriptor::RemoveValueFromFloatRange
                    ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18,
                     local_res8[0]);
  *(int *)param_3 = iVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execRemoveValueFromIntRange @ 14abffe40

void __cdecl
UCustomizableObjectInstance::execRemoveValueFromIntRange
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int local_res8 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = FCustomizableObjectInstanceDescriptor::RemoveValueFromIntRange
                    ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18,
                     local_res8[0]);
  *(int *)param_3 = iVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execRemoveValueFromProjectorRange @ 14abfff40

void __cdecl
UCustomizableObjectInstance::execRemoveValueFromProjectorRange
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int local_res8 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = FCustomizableObjectInstanceDescriptor::RemoveValueFromProjectorRange
                    ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18,
                     local_res8[0]);
  *(int *)param_3 = iVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetBoolParameterSelectedOption @ 14ac00040

void __cdecl
UCustomizableObjectInstance::execSetBoolParameterSelectedOption
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::SetBoolParameterSelectedOption
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18,
             local_res8[0] != 0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetBuildParameterRelevancy @ 14ac00130

void __cdecl
UCustomizableObjectInstance::execSetBuildParameterRelevancy
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::SetBuildParameterRelevancy
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,local_res8[0] != 0);
  return;
}

// execSetColorParameterSelectedOption @ 14ac001d0

void __cdecl
UCustomizableObjectInstance::execSetColorParameterSelectedOption
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FLinearColor *pFVar2;
  FString local_28;
  FLinearColor local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar2 = &local_18;
  if ((FLinearColor *)param_2->MostRecentPropertyAddress != (FLinearColor *)0x0) {
    pFVar2 = (FLinearColor *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::SetColorParameterSelectedOption
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_28,pFVar2);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetCurrentState @ 14ac002c0

void __cdecl
UCustomizableObjectInstance::execSetCurrentState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::SetCurrentState
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetDefaultValue @ 14ac00370

void __cdecl
UCustomizableObjectInstance::execSetDefaultValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar7 = *(longlong *)&param_1[3].field_0x20;
  if (lVar7 == 0) goto LAB_14ac00498;
  if ((*(longlong *)(lVar7 + 0x128) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x3c0,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar7 = *(longlong *)(lVar7 + 0x128);
  iVar6 = local_18.Data.ArrayNum + -1;
  FVar3.Data = local_18.Data.AllocatorInstance.Data;
  if (local_18.Data.ArrayNum == 0) {
    iVar6 = 0;
    FVar3.Data = (FScriptContainerElement *)L"";
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar3.Data);
  iVar6 = TSet<TTuple<FString,FMutableParameterIndex>,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FMutableParameterIndex>,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>,FDefaultSetAllocator>
                      *)(lVar7 + 0x170),uVar5,&local_18);
  if (iVar6 == -1) {
LAB_14ac00487:
    iVar6 = -1;
  }
  else {
    lVar7 = (longlong)iVar6 * 0x20 + *(longlong *)(lVar7 + 0x170);
    piVar8 = (int *)(lVar7 + 0x10);
    if (lVar7 == 0) {
      piVar8 = (int *)0x0;
    }
    if (piVar8 == (int *)0x0) goto LAB_14ac00487;
    iVar6 = *piVar8;
  }
  FCustomizableObjectInstanceDescriptor::SetDefaultValue
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,iVar6);
LAB_14ac00498:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetDefaultValues @ 14ac004d0

void __cdecl
UCustomizableObjectInstance::execSetDefaultValues(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::SetDefaultValues
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20);
  return;
}

// execSetEnumParameterSelectedOption @ 14ac00500

void __cdecl
UCustomizableObjectInstance::execSetEnumParameterSelectedOption
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::SetIntParameterSelectedOption
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18,&local_28,
             local_res8[0]);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetFloatParameterSelectedOption @ 14ac00640

void __cdecl
UCustomizableObjectInstance::execSetFloatParameterSelectedOption
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  float local_res10 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::SetFloatParameterSelectedOption
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18,
             local_res10[0],local_res8[0]);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetIntParameterSelectedOption @ 14ac00770

void __cdecl
UCustomizableObjectInstance::execSetIntParameterSelectedOption
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::SetIntParameterSelectedOption
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18,&local_28,
             local_res8[0]);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetMaterialParameterSelectedOption @ 14ac008b0

void __cdecl
UCustomizableObjectInstance::execSetMaterialParameterSelectedOption
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  UMaterialInterface *local_res10;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10 = (UMaterialInterface *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::SetMaterialParameterSelectedOption
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18,local_res10,
             local_res8[0]);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetObject @ 14ac009e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UCustomizableObjectInstance::execSetObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar2;
  atomic<int> aVar3;
  FProperty *pFVar4;
  code *pcVar5;
  UCustomizableObject *this;
  TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
  *pTVar6;
  FWeakReferencer<1> FVar7;
  bool bVar8;
  uint uVar9;
  atomic<int> aVar10;
  uint uVar11;
  int iVar12;
  FEntry *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  longlong lVar15;
  UCustomizableInstancePrivate *this_00;
  FWeakReferencer<1> FVar16;
  undefined1 auStackY_218 [32];
  uint local_1c8 [2];
  UCustomizableObject *local_1c0;
  FHandle local_1b8;
  UCustomizableInstancePrivate *local_1a0;
  FCustomizableInstanceComponentData local_198;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1c0 = (UCustomizableObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c0);
  }
  this = local_1c0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::SetCustomizableObject
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,local_1c0);
  this_00 = *(UCustomizableInstancePrivate **)&param_1[0xd].field_0x20;
  local_1a0 = this_00;
  UCustomizableInstancePrivate::InvalidateGeneratedData(this_00);
  if ((this != (UCustomizableObject *)0x0) && (bVar8 = UCustomizableObject::IsCompiled(this), bVar8)
     ) {
    FCustomizableInstanceComponentData::FCustomizableInstanceComponentData(&local_198);
    local_1b8.WeakRegistry.Object =
         (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
          *)0x0;
    local_1b8.WeakRegistry.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_1b8._4_4_ = 0;
    local_1b8.Id = 0xffffffff;
    DestructItems<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,int>
              ((FHandle *)local_198.LastMeshIdPerLOD.AllocatorInstance.Data,
               local_198.LastMeshIdPerLOD.ArrayNum);
    local_198.LastMeshIdPerLOD.ArrayNum = 0;
    pTVar14 = (TReferenceControllerBase<1> *)0x0;
    if (local_198.LastMeshIdPerLOD.ArrayMax != 8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,8,&local_198.LastMeshIdPerLOD.AllocatorInstance,0,
                 &local_198.LastMeshIdPerLOD.ArrayMax);
      pTVar14 = (TReferenceControllerBase<1> *)(ulonglong)(uint)local_198.LastMeshIdPerLOD.ArrayNum;
    }
    lVar15 = 8;
    while( true ) {
      uVar9 = (uint)pTVar14;
      if (((local_198.LastMeshIdPerLOD.AllocatorInstance.Data <= &local_1b8) &&
          (&local_1b8 <
           (FHandle *)
           (local_198.LastMeshIdPerLOD.AllocatorInstance.Data +
           (longlong)local_198.LastMeshIdPerLOD.ArrayMax * 0x18))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), uVar9 = local_198.LastMeshIdPerLOD.ArrayNum, bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar9 == local_198.LastMeshIdPerLOD.ArrayMax) {
        uVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&local_198.LastMeshIdPerLOD.AllocatorInstance,
                           &local_198.LastMeshIdPerLOD.ArrayMax);
      }
      local_198.LastMeshIdPerLOD.ArrayNum = uVar9 + 1;
      TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::
      FHandle::FHandle((FHandle *)
                       (local_198.LastMeshIdPerLOD.AllocatorInstance.Data +
                       (longlong)(int)uVar9 * 0x18),&local_1b8);
      FVar7.ReferenceController = local_1b8.WeakRegistry.WeakReferenceCount.ReferenceController;
      pTVar6 = local_1b8.WeakRegistry.Object;
      uVar9 = local_1b8.Id;
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      pTVar14 = (TReferenceControllerBase<1> *)(ulonglong)(uint)local_198.LastMeshIdPerLOD.ArrayNum;
    }
    FVar16.ReferenceController = FVar7.ReferenceController;
    if (local_1b8.WeakRegistry.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      aVar3 = (local_1b8.WeakRegistry.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        FVar16.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (aVar3 == (atomic<int>)0x0) goto LAB_14ac00cd5;
        LOCK();
        aVar10 = (local_1b8.WeakRegistry.WeakReferenceCount.ReferenceController)->
                 SharedReferenceCount;
        bVar8 = aVar3 == aVar10;
        if (bVar8) {
          (local_1b8.WeakRegistry.WeakReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar3 + 1);
          aVar10 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar10;
      } while (!bVar8);
      this_00 = local_1a0;
      FVar16.ReferenceController = FVar7.ReferenceController;
      if (local_1b8.WeakRegistry.Object !=
          (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
           *)0x0) {
        lpCriticalSection = &(local_1b8.WeakRegistry.Object)->CriticalSection;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        pFVar13 = TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>_>
                  ::FindChecked((TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>_>
                                 *)&pTVar6->Entries,uVar9);
        pFVar13->RefCount = pFVar13->RefCount - 1;
        if (pFVar13->RefCount == 0) {
          if (*(int *)&(pTVar6->KeyIndex).field_0x8 != *(int *)&(pTVar6->KeyIndex).field_0x34) {
            uVar11 = UE::Mutable::Private::GetTypeHash((pFVar13->KeyContainer).Key.Object);
            TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
            ::
            RemoveImpl<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer>
                      ((TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
                        *)&pTVar6->KeyIndex,uVar11,&pFVar13->KeyContainer);
          }
          local_1c8[0] = uVar9;
          if (*(int *)&(pTVar6->Entries).field_0x8 != *(int *)&(pTVar6->Entries).field_0x34) {
            TSet<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>,FDefaultSetAllocator>
            ::RemoveImpl<unsigned_int>
                      ((TSet<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>,FDefaultSetAllocator>
                        *)&pTVar6->Entries,uVar9,local_1c8);
          }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        this_00 = local_1a0;
      }
    }
LAB_14ac00cd5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar16.ReferenceController);
    if (local_1b8.WeakRegistry.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_1b8.WeakRegistry.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_1b8.WeakRegistry.WeakReferenceCount.ReferenceController)->_padding_ + 8)
        )(local_1b8.WeakRegistry.WeakReferenceCount.ReferenceController,1);
      }
    }
    iVar12 = UCustomizableObject::GetComponentCount(this);
    TArray<FCustomizableInstanceComponentData,TSizedDefaultAllocator<32>_>::Init
              (&this_00->ComponentsData,&local_198,iVar12);
    DestructItems<FExtensionInstanceData,int>
              ((FExtensionInstanceData *)(this_00->ExtensionInstanceData).AllocatorInstance.Data,
               (this_00->ExtensionInstanceData).ArrayNum);
    piVar2 = &(this_00->ExtensionInstanceData).ArrayMax;
    (this_00->ExtensionInstanceData).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this_00->ExtensionInstanceData).AllocatorInstance,0,piVar2);
    }
    FCustomizableInstanceComponentData::~FCustomizableInstanceComponentData(&local_198);
  }
  return;
}

// execSetProjectorAngle @ 14ac00da0

void __cdecl
UCustomizableObjectInstance::execSetProjectorAngle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  float local_res10 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::SetProjectorAngle
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18,
             local_res10[0],local_res8[0]);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetProjectorDirection @ 14ac00ed0

void __cdecl
UCustomizableObjectInstance::execSetProjectorDirection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  int local_res8 [2];
  FString local_38;
  TVector<double> local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res8[0] = 0;
  pTVar2 = &local_28;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::SetProjectorDirection
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_38,pTVar2,
             local_res8[0]);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetProjectorPosition @ 14ac01010

void __cdecl
UCustomizableObjectInstance::execSetProjectorPosition
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  int local_res8 [2];
  FString local_38;
  TVector<double> local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res8[0] = 0;
  pTVar2 = &local_28;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::SetProjectorPosition
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_38,pTVar2,
             local_res8[0]);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetProjectorScale @ 14ac01150

void __cdecl
UCustomizableObjectInstance::execSetProjectorScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  int local_res8 [2];
  FString local_38;
  TVector<double> local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res8[0] = 0;
  pTVar2 = &local_28;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::SetProjectorScale
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_38,pTVar2,
             local_res8[0]);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetProjectorUp @ 14ac01290

void __cdecl
UCustomizableObjectInstance::execSetProjectorUp(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  int local_res8 [2];
  FString local_38;
  TVector<double> local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res8[0] = 0;
  pTVar2 = &local_28;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::SetProjectorUp
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_38,pTVar2,
             local_res8[0]);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetProjectorValue @ 14ac013d0

void __cdecl
UCustomizableObjectInstance::execSetProjectorValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  TVector<double> *pTVar3;
  TVector<double> *pTVar4;
  TVector<double> *pTVar5;
  int local_res8 [2];
  float local_res10 [2];
  FString local_a8;
  TVector<double> local_98;
  TVector<double> local_80;
  TVector<double> local_68;
  TVector<double> local_50;
  
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar3 = &local_98;
  if (pTVar2 != (TVector<double> *)0x0) {
    pTVar3 = pTVar2;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar5 = &local_80;
  if (pTVar2 != (TVector<double> *)0x0) {
    pTVar5 = pTVar2;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar4 = &local_68;
  if (pTVar2 != (TVector<double> *)0x0) {
    pTVar4 = pTVar2;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_res10[0] = 0.0;
  pTVar2 = &local_50;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::SetProjectorValue
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_a8,pTVar3,pTVar5
             ,pTVar4,pTVar2,local_res10[0],local_res8[0]);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetRandomValues @ 14ac01650

void __cdecl
UCustomizableObjectInstance::execSetRandomValues(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::SetRandomValues
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20);
  return;
}

// execSetRandomValuesFromStream @ 14ac01680

void __cdecl
UCustomizableObjectInstance::execSetRandomValuesFromStream
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FRandomStream *pFVar2;
  FRandomStream local_res8;
  
  local_res8.InitialSeed = 0;
  local_res8.Seed = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pFVar2 = &local_res8;
  if ((FRandomStream *)param_2->MostRecentPropertyAddress != (FRandomStream *)0x0) {
    pFVar2 = (FRandomStream *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::SetRandomValuesFromStream
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,pFVar2);
  return;
}

// execSetReplacePhysicsAssets @ 14ac01720

void __cdecl
UCustomizableObjectInstance::execSetReplacePhysicsAssets
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  uint *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != 0) {
    if (*(longlong *)&param_1[0xd].field_0x20 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrivateData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                         ,0xce2,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    puVar1 = (uint *)(*(longlong *)&param_1[0xd].field_0x20 + 0x238);
    *puVar1 = *puVar1 | 0x10;
    return;
  }
  if (*(longlong *)&param_1[0xd].field_0x20 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrivateData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xce2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar1 = (uint *)(*(longlong *)&param_1[0xd].field_0x20 + 0x238);
  *puVar1 = *puVar1 & 0xffffffef;
  return;
}

// execSetSkeletalMeshParameterSelectedOption @ 14ac01830

void __cdecl
UCustomizableObjectInstance::execSetSkeletalMeshParameterSelectedOption
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  USkeletalMesh *local_res10;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10 = (USkeletalMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::SetSkeletalMeshParameterSelectedOption
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18,local_res10,
             local_res8[0]);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetTextureParameterSelectedOption @ 14ac01960

void __cdecl
UCustomizableObjectInstance::execSetTextureParameterSelectedOption
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  UTexture *local_res10;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10 = (UTexture *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::SetTextureParameterSelectedOption
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_18,local_res10,
             local_res8[0]);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetTransformParameterSelectedOption @ 14ac01a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UCustomizableObjectInstance::execSetTransformParameterSelectedOption
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  TTransform<double> *pTVar12;
  undefined1 auStack_a8 [32];
  FString local_88;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_78.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_78.Rotation.ZW.m128d_f64[0] = (double)fVar6;
  local_78.Rotation.ZW.m128d_f64[1] = (double)fVar9;
  local_78.Translation.ZW.m128d_f64[0] = (double)fVar7;
  local_78.Translation.ZW.m128d_f64[1] = (double)fVar10;
  local_78.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar4,0);
  local_78.Translation.XY.m128d_f64[0] = (double)fVar2;
  local_78.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  local_78.Scale3D.ZW.m128d_f64[0] = (double)fVar8;
  local_78.Scale3D.ZW.m128d_f64[1] = (double)fVar11;
  local_78.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar5,0);
  local_78.Scale3D.XY.m128d_f64[0] = (double)fVar3;
  local_78.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pTVar12 = &local_78;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar12 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::SetTransformParameterSelectedOption
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_88,pTVar12);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetVectorParameterSelectedOption @ 14ac01c00

void __cdecl
UCustomizableObjectInstance::execSetVectorParameterSelectedOption
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FLinearColor *pFVar2;
  FString local_28;
  FLinearColor local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar2 = &local_18;
  if ((FLinearColor *)param_2->MostRecentPropertyAddress != (FLinearColor *)0x0) {
    pFVar2 = (FLinearColor *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCustomizableObjectInstanceDescriptor::SetVectorParameterSelectedOption
            ((FCustomizableObjectInstanceDescriptor *)&param_1[3].field_0x20,&local_28,pFVar2);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execUpdateSkeletalMeshAsync @ 14ac01cf0

void __cdecl
UCustomizableObjectInstance::execUpdateSkeletalMeshAsync
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UCustomizableObjectSystem *this;
  UCustomizableObjectSystemPrivate *this_00;
  bool bVar2;
  bool bVar3;
  int local_res10 [2];
  int local_res20 [2];
  TSharedRef<FUpdateContextPrivate,1> local_28;
  
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
  bVar2 = local_res10[0] != 0;
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
  bVar3 = local_res20[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = UCustomizableObjectSystem::GetInstance();
  this_00 = UCustomizableObjectSystem::GetPrivate(this);
  MakeShared<FUpdateContextPrivate,1,UCustomizableObjectInstance_&>
            (&local_28,(UCustomizableObjectInstance *)param_1);
  (local_28.Object)->bIgnoreCloseDist = bVar2;
  (local_28.Object)->bForceHighPriority = bVar3;
  UCustomizableObjectSystemPrivate::EnqueueUpdateSkeletalMesh(this_00,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// execUpdateSkeletalMeshAsyncResult @ 14ac01e10

void __cdecl
UCustomizableObjectInstance::execUpdateSkeletalMeshAsyncResult
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UCustomizableObjectSystem *this;
  UCustomizableObjectSystemPrivate *this_00;
  bool bVar2;
  bool bVar3;
  int local_res10 [4];
  int local_res20 [2];
  FReadAccessScope local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_60;
  FWeakObjectPtr local_58;
  FName local_50;
  TScriptDelegate<FNotThreadSafeDelegateMode> local_48;
  
  local_60.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_58.ObjectIndex = 0;
  local_58.ObjectSerialNumber = 0;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
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
  bVar2 = local_res10[0] != 0;
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
  bVar3 = local_res20[0] != 0;
  local_48._padding_ = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_60,&local_78);
  local_48.Object = local_58;
  local_48.FunctionName = local_50;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_78);
  this = UCustomizableObjectSystem::GetInstance();
  this_00 = UCustomizableObjectSystem::GetPrivate(this);
  MakeShared<FUpdateContextPrivate,1,UCustomizableObjectInstance_&>
            ((TSharedRef<FUpdateContextPrivate,1> *)&local_78,(UCustomizableObjectInstance *)param_1
            );
  *(bool *)(local_78.DestructionSentinel._0_8_ + 0x2f9) = bVar2;
  *(bool *)(local_78.DestructionSentinel._0_8_ + 0x2fa) = bVar3;
  TScriptDelegate<FNotThreadSafeDelegateMode>::operator=
            ((TScriptDelegate<FNotThreadSafeDelegateMode> *)(local_78.DestructionSentinel._0_8_ + 8)
             ,&local_48);
  UCustomizableObjectSystemPrivate::EnqueueUpdateSkeletalMesh
            (this_00,(TSharedRef<FUpdateContextPrivate,1> *)&local_78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_78.DestructionSentinel.Accessor);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_48);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_60.AccessDetector);
  return;
}

