// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 10

// StaticClass @ 14cf36bc0

UClass * __cdecl AARActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AARActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARActor",
               &Z_Registration_Info_UClass_AARActor.InnerSingleton,StaticRegisterNativesAARActor,
               0x2c0,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AARActor>,InternalVTableHelperCtorCaller<AARActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AARActor.InnerSingleton;
}

// AARActor @ 14cf402f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AARActor * __thiscall AARActor::AARActor(AARActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  *(undefined ***)this = &___7AARActor__6B_;
  return this;
}

// AARActor @ 14cf40320

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AARActor * __thiscall AARActor::AARActor(AARActor *this)

{
  AActor::AActor((AActor *)this);
  this->field_0x5b = this->field_0x5b | 8;
  this->field_0x58 = this->field_0x58 | 8;
  *(undefined ***)this = &___7AARActor__6B_;
  return this;
}

// ~AARActor @ 14cf43c80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AARActor::~AARActor(AARActor *this)

{
  *(undefined ***)this = &___7AARActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// AddARComponent @ 14cf49410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

UARComponent * __thiscall
AARActor::AddARComponent(AARActor *this,TSubclassOf<UARComponent> param_1,FGuid *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FName FVar7;
  FName FVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  UARComponent *this_00;
  longlong *plVar11;
  undefined1 auStack_d8 [32];
  FName local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar2 != 0) && (pUVar9 = UARComponent::StaticClass(), pUVar9 != (UClass *)0x0)) {
    iVar1 = (int)pUVar9->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar9->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar2 = *(longlong *)param_1.Class.field0_0x0, lVar2 != 0)) {
      pUVar9 = (UClass *)0x0;
      local_b8.ComparisonIndex.Value = 0;
      local_b8.Number = 0;
      pUVar10 = UARComponent::StaticClass();
      FVar7 = local_b8;
      if (pUVar10 != (UClass *)0x0) {
        iVar1 = (int)pUVar10->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar10->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pUVar9 = *(UClass **)param_1.Class.field0_0x0;
        }
      }
      if (local_b8 == (FName)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
      }
      pUVar10 = UARComponent::StaticClass();
      CheckIsClassChildOf_Internal(pUVar10,pUVar9);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_a8,pUVar9);
      FVar8 = local_b8;
      local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_a8._56_8_ = (UPackage *)0x0;
      local_b8.ComparisonIndex = FVar7.ComparisonIndex.Value;
      local_b8.Number = FVar7.Number;
      local_a8._16_4_ = local_b8.ComparisonIndex.Value;
      local_a8._20_4_ = local_b8.Number;
      local_a8._24_4_ = RF_NoFlags;
      local_a8._40_8_ = (UObject *)0x0;
      local_a8[0x20] = false;
      local_b8 = FVar8;
      local_a8._8_8_ = this;
      this_00 = (UARComponent *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
      if (local_a8._64_8_ != 0) {
        plVar11 = (longlong *)(local_a8 + 0x50);
        if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
          plVar11 = (longlong *)local_a8._104_8_;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      uVar4 = param_2->B;
      uVar5 = param_2->C;
      uVar6 = param_2->D;
      (this_00->NativeID).A = param_2->A;
      (this_00->NativeID).B = uVar4;
      (this_00->NativeID).C = uVar5;
      (this_00->NativeID).D = uVar6;
      UActorComponent::SetIsReplicated((UActorComponent *)this_00,true);
      local_b8.ComparisonIndex.Value = 0;
      local_b8.Number = 0;
      USceneComponent::SetupAttachment
                ((USceneComponent *)this_00,*(USceneComponent **)&this->field_0x1b8,(FName)0x0);
      UActorComponent::RegisterComponent((UActorComponent *)this_00);
      return this_00;
    }
  }
  return (UARComponent *)0x0;
}

// GetPrivateStaticClass @ 14cf53860

UClass * __cdecl AARActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AARActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARActor",
               &Z_Registration_Info_UClass_AARActor.InnerSingleton,StaticRegisterNativesAARActor,
               0x2c0,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AARActor>,InternalVTableHelperCtorCaller<AARActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AARActor.InnerSingleton;
}

// RequestDestroyARActor @ 14cf5cd00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl AARActor::RequestDestroyARActor(AARActor *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  FDestructionSentinel local_28;
  
  if (param_1 != (AARActor *)0x0) {
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &UARLifeCycleComponent::RequestDestroyARActorDelegate);
    if (bVar2) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &UARLifeCycleComponent::RequestDestroyARActorDelegate,
                 (FWriteAccessScope *)&local_28);
      bVar2 = false;
      UARLifeCycleComponent::RequestDestroyARActorDelegate._28_4_ =
           UARLifeCycleComponent::RequestDestroyARActorDelegate._28_4_ + 1;
      uVar6 = UARLifeCycleComponent::RequestDestroyARActorDelegate._16_4_ - 1;
      if (-1 < (int)uVar6) {
        lVar7 = (longlong)(int)uVar6 << 4;
        bVar2 = false;
        do {
          uVar5 = 0;
          if ((int)uVar6 < (int)UARLifeCycleComponent::RequestDestroyARActorDelegate._16_4_) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (((*(int *)(lVar7 + 8 + UARLifeCycleComponent::RequestDestroyARActorDelegate._8_8_) ==
                0) || (*(longlong **)
                        (lVar7 + UARLifeCycleComponent::RequestDestroyARActorDelegate._8_8_) ==
                       (longlong *)0x0)) ||
             (cVar4 = (**(code **)(**(longlong **)
                                     (lVar7 + UARLifeCycleComponent::RequestDestroyARActorDelegate.
                                              _8_8_) + 0x68))(), cVar4 == '\0')) {
            bVar2 = true;
          }
          lVar7 = lVar7 + -0x10;
          uVar6 = uVar6 - 1;
        } while (-1 < (int)uVar6);
      }
      UARLifeCycleComponent::RequestDestroyARActorDelegate._28_4_ =
           UARLifeCycleComponent::RequestDestroyARActorDelegate._28_4_ + -1;
      if (bVar2) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &UARLifeCycleComponent::RequestDestroyARActorDelegate,false);
      }
      if (local_28.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
        return;
      }
    }
    else {
      AActor::Destroy((AActor *)param_1,false,true);
    }
  }
  return;
}

// RequestSpawnARActor @ 14cf5ce70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl AARActor::RequestSpawnARActor(FGuid *param_1,UClass *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  UEngine *this;
  bool bVar4;
  bool bVar5;
  char cVar6;
  UClass *pUVar7;
  UWorld *this_00;
  FActorSpawnParameters *pFVar8;
  AActor *this_01;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  UClass *local_138;
  FDestructionSentinel local_130;
  undefined8 local_118;
  undefined8 uStack_110;
  TTransform<double> local_108;
  undefined1 local_a8 [112];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &UARLifeCycleComponent::RequestSpawnARActorDelegate);
  this = GEngine;
  if (bVar4) {
    uVar2._0_4_ = param_1->A;
    uVar2._4_4_ = param_1->B;
    uVar3._0_4_ = param_1->C;
    uVar3._4_4_ = param_1->D;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &UARLifeCycleComponent::RequestSpawnARActorDelegate,(FWriteAccessScope *)&local_130);
    bVar4 = false;
    UARLifeCycleComponent::RequestSpawnARActorDelegate._28_4_ =
         UARLifeCycleComponent::RequestSpawnARActorDelegate._28_4_ + 1;
    iVar10 = UARLifeCycleComponent::RequestSpawnARActorDelegate._16_4_ + -1;
    if (-1 < iVar10) {
      lVar11 = (longlong)iVar10;
      lVar12 = lVar11 << 4;
      bVar4 = false;
      do {
        if (((int)UARLifeCycleComponent::RequestSpawnARActorDelegate._16_4_ <= iVar10) &&
           (local_148 = lVar11,
           local_140 = (longlong)(int)UARLifeCycleComponent::RequestSpawnARActorDelegate._16_4_,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (((*(int *)(lVar12 + 8 + UARLifeCycleComponent::RequestSpawnARActorDelegate._8_8_) == 0)
            || (plVar9 = *(longlong **)
                          (lVar12 + UARLifeCycleComponent::RequestSpawnARActorDelegate._8_8_),
               plVar9 == (longlong *)0x0)) ||
           (local_118 = uVar2, uStack_110 = uVar3,
           cVar6 = (**(code **)(*plVar9 + 0x68))(plVar9,param_2,&local_118), cVar6 == '\0')) {
          bVar4 = true;
        }
        lVar11 = lVar11 + -1;
        lVar12 = lVar12 + -0x10;
        iVar10 = iVar10 + -1;
      } while (-1 < iVar10);
    }
    UARLifeCycleComponent::RequestSpawnARActorDelegate._28_4_ =
         UARLifeCycleComponent::RequestSpawnARActorDelegate._28_4_ + -1;
    if (bVar4) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &UARLifeCycleComponent::RequestSpawnARActorDelegate,false);
    }
    if (local_130.bDestroyed != false) {
      return;
    }
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_130.Accessor,&local_130);
    return;
  }
  if (GEngine == (UEngine *)0x0) {
LAB_14cf5d125:
    if (4 < (byte)LogAR._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
    }
    return;
  }
  pUVar7 = Z_Construct_UClass_UGameEngine_NoRegister();
  lVar11 = this->_padding_;
  iVar10 = (int)pUVar7->_padding_;
  if (((*(int *)(lVar11 + 0x38) < iVar10) ||
      ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar10 * 8) !=
       &pUVar7->_padding_)) ||
     (this_00 = UGameEngine::GetGameWorld((UGameEngine *)this), this_00 == (UWorld *)0x0))
  goto LAB_14cf5d125;
  local_108.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_108.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_108.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_108.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_108.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_108.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  pFVar8 = FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_a8);
  pUVar7 = StaticClass();
  this_01 = UWorld::SpawnActor(this_00,pUVar7,&local_108,pFVar8);
  if (this_01 != (AActor *)0x0) {
    pUVar7 = StaticClass();
    iVar10 = (int)pUVar7->_padding_;
    if ((iVar10 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
        &pUVar7->_padding_)) goto LAB_14cf5d0c1;
  }
  this_01 = (AActor *)0x0;
LAB_14cf5d0c1:
  if (local_a8._64_8_ != 0) {
    plVar9 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (this_01 == (AActor *)0x0) {
    return;
  }
  AActor::SetReplicates(this_01,true);
  local_138 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  AddARComponent((AARActor *)this_01,(TSubclassOf<UARComponent>)&local_138,param_1);
  return;
}

// StaticRegisterNativesAARActor @ 14cf60cb0

void __cdecl AARActor::StaticRegisterNativesAARActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_AARActor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddARComponent @ 14cf6ab30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __cdecl AARActor::execAddARComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  bool bVar4;
  FName FVar5;
  FName FVar6;
  UClass *pUVar7;
  USceneComponent *this;
  longlong *plVar8;
  longlong *plVar9;
  UClass *pUVar10;
  undefined1 auStack_f8 [32];
  FName local_d8;
  UClass *local_d0;
  longlong local_c8 [2];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_d0 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_c8[0] = 0;
  local_c8[1] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  pUVar10 = local_d0;
  plVar9 = local_c8;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar9 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (local_d0 == (UClass *)0x0) goto LAB_14cf6ad65;
  }
  else {
    if (local_d0 == (UClass *)0x0) goto LAB_14cf6ad65;
    UE::GC::MarkAsReachable((UObject *)local_d0);
  }
  pUVar7 = UARComponent::StaticClass();
  if (pUVar7 == (UClass *)0x0) {
LAB_14cf6ad65:
    *(undefined8 *)param_3 = 0;
    return;
  }
  iVar1 = (int)pUVar7->_padding_;
  if (((int)pUVar10->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar1 * 8) != &pUVar7->_padding_))
  {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) goto LAB_14cf6ad65;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  pUVar7 = UARComponent::StaticClass();
  FVar5 = local_d8;
  if (pUVar7 != (UClass *)0x0) {
    iVar1 = (int)pUVar7->_padding_;
    if (((int)pUVar10->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar1 * 8) != &pUVar7->_padding_
       )) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14cf6aca1;
  }
  pUVar10 = (UClass *)0x0;
LAB_14cf6aca1:
  if (local_d8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar7 = UARComponent::StaticClass();
  CheckIsClassChildOf_Internal(pUVar7,pUVar10);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar10);
  FVar6 = local_d8;
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_d8.ComparisonIndex = FVar5.ComparisonIndex.Value;
  local_d8.Number = FVar5.Number;
  local_b8._16_4_ = local_d8.ComparisonIndex.Value;
  local_b8._20_4_ = local_d8.Number;
  local_b8._24_4_ = RF_NoFlags;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_d8 = FVar6;
  local_b8._8_8_ = param_1;
  this = (USceneComponent *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar8 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  lVar3 = plVar9[1];
  this[1]._padding_ = *plVar9;
  this[1]._padding_ = lVar3;
  UActorComponent::SetIsReplicated((UActorComponent *)this,true);
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  USceneComponent::SetupAttachment(this,*(USceneComponent **)(param_1 + 0xb),(FName)0x0);
  UActorComponent::RegisterComponent((UActorComponent *)this);
  *(USceneComponent **)param_3 = this;
  return;
}

