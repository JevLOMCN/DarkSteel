// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// StaticClass @ 14b56ad40

UClass * __cdecl UDS_PostProcessEffectBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PostProcessEffectBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PostProcessEffectBase",
               &Z_Registration_Info_UClass_UDS_PostProcessEffectBase.InnerSingleton,
               StaticRegisterNativesUDS_PostProcessEffectBase,0x138,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UDS_PostProcessEffectBase>,
               InternalVTableHelperCtorCaller<UDS_PostProcessEffectBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PostProcessEffectBase.InnerSingleton;
}

// UDS_PostProcessEffectBase @ 14b56d800

UDS_PostProcessEffectBase * __thiscall
UDS_PostProcessEffectBase::UDS_PostProcessEffectBase
          (UDS_PostProcessEffectBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_PostProcessEffectBase__6B_;
  *(undefined8 *)&this->CachedMPC = 0;
  *(undefined8 *)&(this->CachedMPC).field_0x8 = 0;
  *(undefined8 *)&(this->CachedMPC).field_0x20 = 0;
  *(undefined4 *)&(this->CachedMPC).field_0x28 = 0;
  *(undefined4 *)&(this->CachedMPC).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedMPC).field_0x34 = 0;
  *(undefined4 *)&(this->CachedMPC).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CachedMPC).field_0x40 = 0;
  *(undefined4 *)&(this->CachedMPC).field_0x48 = 0;
  *(undefined8 *)&this->CachedMPCInstance = 0;
  *(undefined8 *)&(this->CachedMPCInstance).field_0x8 = 0;
  *(undefined8 *)&(this->CachedMPCInstance).field_0x20 = 0;
  *(undefined4 *)&(this->CachedMPCInstance).field_0x28 = 0;
  *(undefined4 *)&(this->CachedMPCInstance).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedMPCInstance).field_0x34 = 0;
  *(undefined4 *)&(this->CachedMPCInstance).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CachedMPCInstance).field_0x40 = 0;
  *(undefined4 *)&(this->CachedMPCInstance).field_0x48 = 0;
  (this->PPC).field0_0x0.DebugPtr = (UDS_PostProcessComponent *)0x0;
  (this->CachedCamera).field0_0x0.DebugPtr = (UDS_MainCameraComponent *)0x0;
  (this->PPMID).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  *(undefined8 *)&this->TimerHandles = 0;
  *(undefined8 *)&(this->TimerHandles).field_0x8 = 0;
  *(undefined8 *)&(this->TimerHandles).field_0x20 = 0;
  this->PPMIDIndex = -1;
  *(undefined4 *)&(this->TimerHandles).field_0x28 = 0;
  *(undefined4 *)&(this->TimerHandles).field_0x2c = 0x80;
  *(undefined4 *)&(this->TimerHandles).field_0x34 = 0;
  *(undefined4 *)&(this->TimerHandles).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TimerHandles).field_0x40 = 0;
  *(undefined4 *)&(this->TimerHandles).field_0x48 = 0;
  return this;
}

// UDS_PostProcessEffectBase @ 14b56d8f0

UDS_PostProcessEffectBase * __thiscall
UDS_PostProcessEffectBase::UDS_PostProcessEffectBase
          (UDS_PostProcessEffectBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_PostProcessEffectBase__6B_;
  *(undefined8 *)&this->CachedMPC = 0;
  *(undefined8 *)&(this->CachedMPC).field_0x8 = 0;
  *(undefined8 *)&(this->CachedMPC).field_0x20 = 0;
  *(undefined4 *)&(this->CachedMPC).field_0x28 = 0;
  *(undefined4 *)&(this->CachedMPC).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedMPC).field_0x34 = 0;
  *(undefined4 *)&(this->CachedMPC).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CachedMPC).field_0x40 = 0;
  *(undefined4 *)&(this->CachedMPC).field_0x48 = 0;
  *(undefined8 *)&this->CachedMPCInstance = 0;
  *(undefined8 *)&(this->CachedMPCInstance).field_0x8 = 0;
  *(undefined8 *)&(this->CachedMPCInstance).field_0x20 = 0;
  *(undefined4 *)&(this->CachedMPCInstance).field_0x28 = 0;
  *(undefined4 *)&(this->CachedMPCInstance).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedMPCInstance).field_0x34 = 0;
  *(undefined4 *)&(this->CachedMPCInstance).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CachedMPCInstance).field_0x40 = 0;
  *(undefined4 *)&(this->CachedMPCInstance).field_0x48 = 0;
  (this->PPC).field0_0x0.DebugPtr = (UDS_PostProcessComponent *)0x0;
  (this->CachedCamera).field0_0x0.DebugPtr = (UDS_MainCameraComponent *)0x0;
  (this->PPMID).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  *(undefined8 *)&this->TimerHandles = 0;
  *(undefined8 *)&(this->TimerHandles).field_0x8 = 0;
  *(undefined8 *)&(this->TimerHandles).field_0x20 = 0;
  this->PPMIDIndex = -1;
  *(undefined4 *)&(this->TimerHandles).field_0x28 = 0;
  *(undefined4 *)&(this->TimerHandles).field_0x2c = 0x80;
  *(undefined4 *)&(this->TimerHandles).field_0x34 = 0;
  *(undefined4 *)&(this->TimerHandles).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TimerHandles).field_0x40 = 0;
  *(undefined4 *)&(this->TimerHandles).field_0x48 = 0;
  return this;
}

// ~UDS_PostProcessEffectBase @ 14b56e2c0

void __thiscall
UDS_PostProcessEffectBase::~UDS_PostProcessEffectBase(UDS_PostProcessEffectBase *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_PostProcessEffectBase__6B_;
  *(undefined4 *)&(this->TimerHandles).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TimerHandles).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FTimerHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FTimerHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FTimerHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TimerHandles);
  *(undefined4 *)&(this->CachedMPCInstance).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedMPCInstance).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMaterialParameterCollection>,TObjectPtr<UMaterialParameterCollectionInstance>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMaterialParameterCollection>,TObjectPtr<UMaterialParameterCollectionInstance>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMaterialParameterCollection>,TObjectPtr<UMaterialParameterCollectionInstance>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedMPCInstance);
  *(undefined4 *)&(this->CachedMPC).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedMPC).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EPPMaterialKind,TObjectPtr<UMaterialParameterCollection>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EPPMaterialKind,TObjectPtr<UMaterialParameterCollection>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->CachedMPC);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b56f580

UClass * __cdecl UDS_PostProcessEffectBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PostProcessEffectBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PostProcessEffectBase",
               &Z_Registration_Info_UClass_UDS_PostProcessEffectBase.InnerSingleton,
               StaticRegisterNativesUDS_PostProcessEffectBase,0x138,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UDS_PostProcessEffectBase>,
               InternalVTableHelperCtorCaller<UDS_PostProcessEffectBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PostProcessEffectBase.InnerSingleton;
}

// StaticRegisterNativesUDS_PostProcessEffectBase @ 14b56fd20

void __cdecl UDS_PostProcessEffectBase::StaticRegisterNativesUDS_PostProcessEffectBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_PostProcessEffectBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execInitPostProcessReferences @ 14b571000

void __cdecl
UDS_PostProcessEffectBase::execInitPostProcessReferences
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014b571018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2b0))();
  return;
}

// AddOrUpdatePostProcessBlendable @ 14bbec9b0

void __thiscall
UDS_PostProcessEffectBase::AddOrUpdatePostProcessBlendable
          (UDS_PostProcessEffectBase *this,EPPMaterialKind param_1,float param_2)

{
  int *piVar1;
  uint uVar2;
  UDS_MainCameraComponent *pUVar3;
  UDS_PostProcessComponent *pUVar4;
  UDS_PostProcessDataAsset *pUVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  UMaterialInterface *pUVar10;
  longlong *plVar11;
  uint uVar12;
  float local_28 [2];
  UMaterialInstanceDynamic *local_20;
  
  pUVar3 = (this->CachedCamera).field0_0x0.DebugPtr;
  if (((pUVar3 != (UDS_MainCameraComponent *)0x0) &&
      (pUVar4 = (this->PPC).field0_0x0.DebugPtr, pUVar4 != (UDS_PostProcessComponent *)0x0)) &&
     (pUVar5 = pUVar4->PostProcessDataAsset, pUVar5 != (UDS_PostProcessDataAsset *)0x0)) {
    plVar11 = &pUVar3->_padding_;
    if ((this->PPMID).field0_0x0.DebugPtr == (UMaterialInstanceDynamic *)0x0) {
      if (param_1 == Construction) {
        pUVar10 = pUVar5->ConstructionMI;
      }
      else if (param_1 == Breach) {
        pUVar10 = pUVar5->BreachMI;
      }
      else if (param_1 == Detection) {
        pUVar10 = pUVar5->DetectionMI;
      }
      else {
        if (param_1 != WaterOnLens) {
          return;
        }
        pUVar10 = pUVar5->WaterOnLensMI;
      }
      if (pUVar10 != (UMaterialInterface *)0x0) {
        local_20 = UMaterialInstanceDynamic::Create(pUVar10,(UObject *)pUVar4->_padding_,(FName)0x0)
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_20 != (UMaterialInstanceDynamic *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_20);
        }
        (this->PPMID).field0_0x0.DebugPtr = local_20;
        local_28[0] = param_2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_20 != (UMaterialInstanceDynamic *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_20);
        }
        if ((((float *)*plVar11 <= local_28) &&
            (local_28 < (float *)*plVar11 + (longlong)*(int *)((longlong)&pUVar3->_padding_ + 4) * 4
            )) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar9 = (int)pUVar3->_padding_;
        piVar1 = (int *)((longlong)&pUVar3->_padding_ + 4);
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)plVar11,piVar1);
        }
        lVar6 = *plVar11;
        *(int *)&pUVar3->_padding_ = iVar9 + 1;
        *(float *)(lVar6 + (longlong)iVar9 * 0x10) = local_28[0];
        *(UMaterialInstanceDynamic **)(lVar6 + (longlong)iVar9 * 0x10 + 8) = local_20;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_20 != (UMaterialInstanceDynamic *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_20);
        }
        this->PPMIDIndex = iVar9;
      }
    }
    else {
      iVar9 = this->PPMIDIndex;
      if ((-1 < iVar9) && (iVar9 < (int)pUVar3->_padding_)) {
        if ((iVar9 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(UMaterialInstanceDynamic **)(*plVar11 + (longlong)iVar9 * 0x10 + 8) ==
            (this->PPMID).field0_0x0.DebugPtr) {
          uVar2 = this->PPMIDIndex;
          uVar12 = 0;
          if ((int)uVar2 < (int)pUVar3->_padding_) {
            uVar12 = ~uVar2 >> 0x1f;
          }
          if ((uVar12 == 0) &&
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
          *(float *)(*plVar11 + (longlong)(int)uVar2 * 0x10) = param_2;
        }
      }
    }
  }
  return;
}

// GetPostProcessMaterialParameter @ 14bbf8750

float __thiscall
UDS_PostProcessEffectBase::GetPostProcessMaterialParameter
          (UDS_PostProcessEffectBase *this,EPPMaterialKind param_1,FName param_2)

{
  UMaterialParameterCollectionInstance *this_00;
  undefined7 in_register_00000011;
  float local_res8 [8];
  
  this_00 = (UMaterialParameterCollectionInstance *)
            (**(code **)(this->_padding_ + 0x2c8))(this,CONCAT71(in_register_00000011,param_1));
  if (this_00 == (UMaterialParameterCollectionInstance *)0x0) {
    return 0.0;
  }
  UMaterialParameterCollectionInstance::GetScalarParameterValue(this_00,param_2,local_res8);
  return local_res8[0];
}

// InitPostProcessReferences @ 14bbf93b0

void __thiscall
UDS_PostProcessEffectBase::InitPostProcessReferences(UDS_PostProcessEffectBase *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_PostProcessComponent *pUVar4;
  UDS_MainCameraComponent *pUVar5;
  FWeakObjectPtr local_res10;
  UClass *local_res18;
  
  ADS_MainCharacter::GetMainPlayer();
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_res10);
    pcVar1 = *(code **)(*(longlong *)pUVar3 + 0x738);
    local_res18 = Z_Construct_UClass_UDS_PostProcessComponent_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18);
    }
    pUVar4 = (UDS_PostProcessComponent *)(*pcVar1)(pUVar3,&local_res18);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar4 == (UDS_PostProcessComponent *)0x0)) {
      (this->PPC).field0_0x0.DebugPtr = pUVar4;
      if (pUVar4 == (UDS_PostProcessComponent *)0x0) {
        return;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
      (this->PPC).field0_0x0.DebugPtr = pUVar4;
    }
    pUVar3 = FWeakObjectPtr::Get(&local_res10);
    pcVar1 = *(code **)(*(longlong *)pUVar3 + 0x738);
    local_res18 = Z_Construct_UClass_UDS_MainCameraComponent_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18);
    }
    pUVar5 = (UDS_MainCameraComponent *)(*pcVar1)(pUVar3,&local_res18);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_MainCameraComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->CachedCamera).field0_0x0.DebugPtr = pUVar5;
  }
  return;
}

// OnPlayCurve @ 14bbfb560

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
UDS_PostProcessEffectBase::OnPlayCurve
          (UDS_PostProcessEffectBase *this,UCurveFloat *param_1,
          TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *param_2,FName param_3,
          float param_4,float param_5,double param_6)

{
  UWorld *this_00;
  FTimerHandle *pFVar1;
  FTimerManager *this_01;
  FTimerData *pFVar2;
  double dVar3;
  float fVar4;
  
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if (this_00 != (UWorld *)0x0) {
    if (param_1 != (UCurveFloat *)0x0) {
      dVar3 = UDS_TimeUtilManager::GetCurrentServerTime();
      fVar4 = (float)(dVar3 - param_6);
      if ((0.0 <= fVar4) && (fVar4 < param_5)) {
        fVar4 = UCurveFloat::GetFloatValue(param_1,fVar4);
        TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::ExecuteIfBound(param_2,fVar4);
        goto LAB_14bbfb640;
      }
      if (param_4 != __real_7f7fffff) {
        TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::ExecuteIfBound(param_2,param_4);
      }
    }
    pFVar1 = TMapBase<FName,FTimerHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTimerHandle,0>_>
             ::Find((TMapBase<FName,FTimerHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTimerHandle,0>_>
                     *)&this->TimerHandles,param_3);
    if (pFVar1 != (FTimerHandle *)0x0) {
      this_01 = UWorld::GetTimerManager(this_00);
      pFVar2 = FTimerManager::FindTimer(this_01,pFVar1);
      if (pFVar2 != (FTimerData *)0x0) {
        FTimerManager::InternalClearTimer(this_01,(FTimerHandle)pFVar1->Handle);
      }
      pFVar1->Handle = 0;
      TMapBase<FName,FTimerHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTimerHandle,0>_>
      ::Remove((TMapBase<FName,FTimerHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTimerHandle,0>_>
                *)&this->TimerHandles,param_3);
    }
  }
LAB_14bbfb640:
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// PlayCurveByTimer @ 14bc02190

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
UDS_PostProcessEffectBase::PlayCurveByTimer
          (UDS_PostProcessEffectBase *this,UCurveFloat *param_1,float param_2,
          TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *param_3,FName param_4,
          float param_5)

{
  float fVar1;
  FName FVar2;
  uint uVar3;
  UWorld *this_00;
  FRichCurveKey *pFVar4;
  FTimerHandle *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FTimerManager *this_01;
  double dVar8;
  UDS_PostProcessEffectBase *local_res10;
  FDelegateAllocation local_88;
  FRichCurveKey local_78 [2];
  
  if (((param_1 != (UCurveFloat *)0x0) && (0.0 < param_2)) &&
     (this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(), this_00 != (UWorld *)0x0)) {
    if ((param_1->FloatCurve).Keys.ArrayNum == 0) {
      if (param_5 != __real_7f7fffff) {
        TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::ExecuteIfBound(param_3,param_5);
      }
      TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::
      ~TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>(param_3);
      return;
    }
    pFVar4 = FRichCurve::GetLastKey(&param_1->FloatCurve,local_78);
    FVar2 = param_4;
    fVar1 = pFVar4->Time;
    uVar3 = ::GetTypeHash(param_4.ComparisonIndex.Value);
    pFVar5 = TMapBase<FName,FTimerHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTimerHandle,0>_>
             ::FindOrAddImpl<FName_const_&>
                       ((TMapBase<FName,FTimerHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTimerHandle,0>_>
                         *)&this->TimerHandles,uVar3 + FVar2.Number,&param_4);
    dVar8 = UDS_TimeUtilManager::GetCurrentServerTime();
    local_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_88.DelegateSize = 0;
    puVar6 = UE::Core::Private::DelegateAllocate(0x58,&local_88);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__PEAVUCurveFloat__V__TDelegate___A6AXM_ZUFDefaultDelegateUserPolicy____VFName__MMN__6B_
      ;
      puVar6[1] = param_1;
      TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)(puVar6 + 2),param_3);
      *(FName *)(puVar6 + 5) = param_4;
      *(float *)(puVar6 + 6) = param_5;
      *(float *)((longlong)puVar6 + 0x34) = fVar1;
      puVar6[7] = dVar8;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[8] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_PostProcessEffectBase____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__PEAVUCurveFloat__V__TDelegate___A6AXM_ZUFDefaultDelegateUserPolicy____VFName__MMN__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[9] = 0;
      local_res10 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 9),(FObjectPtr)&local_res10);
      puVar6[10] = OnPlayCurve;
    }
    this_01 = UWorld::GetTimerManager(this_00);
    FTimerManager::SetTimer
              (this_01,pFVar5,
               (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_88
               ,param_2,true,__real_bf800000);
    if ((local_88.DelegateSize != 0) &&
       (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_88.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_88.DelegateSize = 0;
    }
    if (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_88.DelegateAllocator);
    }
    TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::
    ~TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>(param_3);
    return;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  if (*(void **)&param_3->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  return;
}

// ResolveMPC @ 14bc18960

UMaterialParameterCollection * __thiscall
UDS_PostProcessEffectBase::ResolveMPC(UDS_PostProcessEffectBase *this,EPPMaterialKind param_1)

{
  longlong lVar1;
  longlong lVar2;
  UDS_PostProcessDataAsset *pUVar3;
  int iVar4;
  undefined8 *puVar5;
  UMaterialParameterCollection *pUVar6;
  undefined1 *puVar7;
  TPairInitializer<EPPMaterialKind_const_&,TObjectPtr<UMaterialParameterCollection>_&&> local_res8;
  UMaterialParameterCollection *local_res18;
  TObjectPtr<UMaterialParameterCollection> **local_18;
  UMaterialParameterCollection **local_10;
  
  if (*(int *)&(this->CachedMPC).field_0x8 != *(int *)&(this->CachedMPC).field_0x34) {
    puVar7 = *(undefined1 **)&(this->CachedMPC).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->CachedMPC).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + ((ulonglong)(*(int *)&(this->CachedMPC).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&this->CachedMPC;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        if (*(EPPMaterialKind *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          puVar5 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar5 = (undefined8 *)0x0;
          }
          if (puVar5 != (undefined8 *)0x0) {
            return (UMaterialParameterCollection *)*puVar5;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  pUVar3 = ((this->PPC).field0_0x0.DebugPtr)->PostProcessDataAsset;
  if (pUVar3 == (UDS_PostProcessDataAsset *)0x0) {
    return (UMaterialParameterCollection *)0x0;
  }
  if (param_1 == Construction) {
    pUVar6 = pUVar3->ConstructionMPC;
  }
  else if (param_1 == Breach) {
    pUVar6 = pUVar3->BreachMPC;
  }
  else if (param_1 == Detection) {
    pUVar6 = pUVar3->DetectionMPC;
  }
  else {
    if (param_1 != WaterOnLens) {
      return (UMaterialParameterCollection *)0x0;
    }
    pUVar6 = pUVar3->WaterOnLensMPC;
  }
  if (pUVar6 != (UMaterialParameterCollection *)0x0) {
    local_res8.Value._0_1_ = param_1;
    local_res18 = pUVar6;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    local_18 = &local_res8.Value;
    local_10 = &local_res18;
    TSet<TTuple<enum_EPPMaterialKind,TObjectPtr<UMaterialParameterCollection>_>,TDefaultMapHashableKeyFuncs<enum_EPPMaterialKind,TObjectPtr<UMaterialParameterCollection>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<enum_EPPMaterialKind_const_&,TObjectPtr<UMaterialParameterCollection>_&&>_>
              (&this->CachedMPC,&local_res8,(bool *)&local_18);
  }
  return pUVar6;
}

// ResolveMPCInstance @ 14bc18a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMaterialParameterCollectionInstance * __thiscall
UDS_PostProcessEffectBase::ResolveMPCInstance
          (UDS_PostProcessEffectBase *this,EPPMaterialKind param_1)

{
  TMap<TObjectPtr<UMaterialParameterCollection>,TObjectPtr<UMaterialParameterCollectionInstance>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMaterialParameterCollection>,TObjectPtr<UMaterialParameterCollectionInstance>,0>_>
  *this_00;
  longlong lVar1;
  int iVar2;
  TObjectPtr<UMaterialParameterCollection_const_>_u_0 TVar3;
  undefined8 *puVar4;
  UWorld *this_01;
  UMaterialParameterCollectionInstance *pUVar5;
  uint uVar6;
  undefined7 in_register_00000011;
  TObjectPtr<UMaterialParameterCollection_const_>_u_0 local_res8 [2];
  TObjectPtr<UMaterialParameterCollection_const_>_u_0 local_res18;
  UMaterialParameterCollectionInstance *local_res20;
  TObjectPtr<UMaterialParameterCollection_const_>_u_0 *local_28;
  UMaterialParameterCollectionInstance **local_20;
  
  TVar3.DebugPtr =
       (UMaterialParameterCollection *)
       (**(code **)(this->_padding_ + 0x2c0))(this,CONCAT71(in_register_00000011,param_1));
  if (TVar3.DebugPtr != (UMaterialParameterCollection *)0x0) {
    this_00 = &this->CachedMPCInstance;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
    }
    local_res8[0].DebugPtr = TVar3.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
      }
    }
    uVar6 = ((uint)((ulonglong)TVar3.DebugPtr >> 0x14) & 0xffff ^
            (uint)((ulonglong)TVar3.DebugPtr >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    iVar2 = TSet<TTuple<TObjectPtr<UMaterialParameterCollection>,TObjectPtr<UMaterialParameterCollectionInstance>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMaterialParameterCollection>,TObjectPtr<UMaterialParameterCollectionInstance>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TObjectPtr<UMaterialParameterCollection_const_>_>
                      ((TSet<TTuple<TObjectPtr<UMaterialParameterCollection>,TObjectPtr<UMaterialParameterCollectionInstance>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMaterialParameterCollection>,TObjectPtr<UMaterialParameterCollectionInstance>,0>,FDefaultSetAllocator>
                        *)this_00,uVar6 >> 0x10 ^ uVar6,
                       (TObjectPtr<UMaterialParameterCollection_const_> *)&local_res8[0].ObjectPtr);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this_00->field_0x0 + (longlong)iVar2 * 0x18;
      puVar4 = (undefined8 *)(lVar1 + 8);
      if (lVar1 == 0) {
        puVar4 = (undefined8 *)0x0;
      }
      if (puVar4 != (undefined8 *)0x0) {
        return (UMaterialParameterCollectionInstance *)*puVar4;
      }
    }
    this_01 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    if (this_01 != (UWorld *)0x0) {
      pUVar5 = UWorld::GetParameterCollectionInstance(this_01,TVar3.DebugPtr);
      if (pUVar5 != (UMaterialParameterCollectionInstance *)0x0) {
        local_res20 = pUVar5;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        local_res18.DebugPtr = TVar3.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
        }
        local_28 = &local_res18;
        local_20 = &local_res20;
        TSet<TTuple<TObjectPtr<UMaterialParameterCollection>,TObjectPtr<UMaterialParameterCollectionInstance>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMaterialParameterCollection>,TObjectPtr<UMaterialParameterCollectionInstance>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<TObjectPtr<UMaterialParameterCollection>_&&,TObjectPtr<UMaterialParameterCollectionInstance>_&&>_>
                  ((TSet<TTuple<TObjectPtr<UMaterialParameterCollection>,TObjectPtr<UMaterialParameterCollectionInstance>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMaterialParameterCollection>,TObjectPtr<UMaterialParameterCollectionInstance>,0>,FDefaultSetAllocator>
                    *)this_00,
                   (TPairInitializer<TObjectPtr<UMaterialParameterCollection>_&&,TObjectPtr<UMaterialParameterCollectionInstance>_&&>
                    *)&local_res8[0].ObjectPtr,(bool *)&local_28);
      }
      return pUVar5;
    }
  }
  return (UMaterialParameterCollectionInstance *)0x0;
}

// SetPostProcessMaterialParameter @ 14bc1eee0

void __thiscall
UDS_PostProcessEffectBase::SetPostProcessMaterialParameter
          (UDS_PostProcessEffectBase *this,EPPMaterialKind param_1,FName param_2,float param_3)

{
  UMaterialParameterCollectionInstance *this_00;
  undefined7 in_register_00000011;
  
  this_00 = (UMaterialParameterCollectionInstance *)
            (**(code **)(this->_padding_ + 0x2c8))(this,CONCAT71(in_register_00000011,param_1));
  if (this_00 != (UMaterialParameterCollectionInstance *)0x0) {
    UMaterialParameterCollectionInstance::SetScalarParameterValue(this_00,param_2,param_3);
  }
  return;
}

// SetPostProcessMaterialParameter @ 14bc1ef20

void __thiscall
UDS_PostProcessEffectBase::SetPostProcessMaterialParameter
          (UDS_PostProcessEffectBase *this,EPPMaterialKind param_1,FName param_2,
          UCurveFloat *param_3,float param_4)

{
  code *pcVar1;
  FWeakObjectPtr FVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  undefined7 in_register_00000011;
  FWeakObjectPtr local_res8;
  UObject *local_68;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_60;
  FDelegateAllocation local_58;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  local_68 = (UObject *)
             (**(code **)(this->_padding_ + 0x2c8))(this,CONCAT71(in_register_00000011,param_1));
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_68);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_68);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_68);
  bVar3 = TWeakObjectPtr<UMaterialParameterCollectionInstance,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UMaterialParameterCollectionInstance,FWeakObjectPtr> *)
                     &local_res8,(void *)0x0);
  FVar2 = local_res8;
  if ((!bVar3) && (param_3 != (UCurveFloat *)0x0)) {
    pcVar1 = *(code **)(this->_padding_ + 0x2d0);
    local_60.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_58.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_60,(FWriteAccessScope *)&local_48);
    local_30 = &local_58;
    puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_58);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`UDS_PostProcessEffectBase::SetPostProcessMaterialParameter'::`2'::<lambda_1>_>
                 ::_vftable_;
      puVar4[3] = this;
      *(FWeakObjectPtr *)(puVar4 + 4) = FVar2;
      *(FName *)(puVar4 + 5) = param_2;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    (*pcVar1)(this,param_3,__real_3c83126f,&local_60,param_2,param_4);
  }
  return;
}

// SetPostProcessMaterialParameter @ 14bc1f0a0

void __thiscall
UDS_PostProcessEffectBase::SetPostProcessMaterialParameter
          (UDS_PostProcessEffectBase *this,EPPMaterialKind param_1,FName param_2,
          TVector<double> *param_3)

{
  UMaterialParameterCollectionInstance *this_00;
  undefined7 in_register_00000011;
  FLinearColor_u_0 local_18;
  
  this_00 = (UMaterialParameterCollectionInstance *)
            (**(code **)(this->_padding_ + 0x2c8))(this,CONCAT71(in_register_00000011,param_1));
  if (this_00 != (UMaterialParameterCollectionInstance *)0x0) {
    local_18._s_0.R = (float)(param_3->field0_0x0)._s_0.X;
    local_18._s_0.A = 1.0;
    local_18._s_0.G = (float)(param_3->field0_0x0)._s_0.Y;
    local_18._s_0.B = (float)(param_3->field0_0x0)._s_0.Z;
    UMaterialParameterCollectionInstance::SetVectorParameterValue
              (this_00,param_2,(FLinearColor *)&local_18._s_0);
  }
  return;
}

