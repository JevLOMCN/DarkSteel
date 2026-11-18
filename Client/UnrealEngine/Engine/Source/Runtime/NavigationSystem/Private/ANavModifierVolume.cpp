// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 16

// StaticClass @ 146e304b0

UClass * __cdecl ANavModifierVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANavModifierVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavModifierVolume",
               &Z_Registration_Info_UClass_ANavModifierVolume.InnerSingleton,
               StaticRegisterNativesANavModifierVolume,0x318,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ANavModifierVolume>,
               InternalVTableHelperCtorCaller<ANavModifierVolume>,local_res8,AVolume::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANavModifierVolume.InnerSingleton;
}

// ANavModifierVolume @ 146e35aa0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

ANavModifierVolume * __thiscall
ANavModifierVolume::ANavModifierVolume(ANavModifierVolume *this,FVTableHelper *param_1)

{
  AVolume::AVolume((AVolume *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AVolume__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  (this->AreaClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->AreaClassToReplace).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// ANavModifierVolume @ 146e35af0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ANavModifierVolume * __thiscall
ANavModifierVolume::ANavModifierVolume(ANavModifierVolume *this,FObjectInitializer *param_1)

{
  UClass *pUVar1;
  
  AVolume::AVolume((AVolume *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AVolume__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  pUVar1 = Z_Construct_UClass_UNavArea_Null_NoRegister();
  (this->AreaClass).Class.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->AreaClassToReplace).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->NavMeshResolution = Invalid;
  if ((UPrimitiveComponent *)this->_padding_ != (UPrimitiveComponent *)0x0) {
    UPrimitiveComponent::SetGenerateOverlapEvents((UPrimitiveComponent *)this->_padding_,false);
    (**(code **)(*(longlong *)this->_padding_ + 0x788))
              ((longlong *)this->_padding_,UCollisionProfile::NoCollision_ProfileName,1);
  }
  return this;
}

// ~ANavModifierVolume @ 146e37310

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall ANavModifierVolume::~ANavModifierVolume(ANavModifierVolume *this)

{
  this->_padding_ = (longlong)&_vftable__for__AVolume__;
  this->_padding_ = (longlong)&___7INavRelevantInterface__6B_;
  AVolume::~AVolume((AVolume *)this);
  return;
}

// BeginDestroy @ 146e420f0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall ANavModifierVolume::BeginDestroy(ANavModifierVolume *this)

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

// GetNavigationBounds @ 146e5be60

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

TBox<double> * __thiscall
ANavModifierVolume::GetNavigationBounds
          (ANavModifierVolume *this,TBox<double> *__return_storage_ptr__)

{
  (**(code **)(this[-1]._padding_ + 0x670))(&this[-1]._padding_,__return_storage_ptr__,1,0);
  return __return_storage_ptr__;
}

// GetNavigationData @ 146e5bf40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
ANavModifierVolume::GetNavigationData(ANavModifierVolume *this,FNavigationRelevantData *param_1)

{
  undefined1 *puVar1;
  ENavigationDataResolution EVar2;
  int iVar3;
  longlong lVar4;
  UObject *pUVar5;
  bool bVar6;
  UClass *pUVar7;
  TSubclassOf<UNavAreaBase> TVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_138 [32];
  UObject *local_118;
  UObject *local_110;
  TVector<double>_u_0 local_108;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined1 local_d8;
  FAreaNavModifier local_c8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_138;
  if (((this[-1]._padding_ != 0) && (lVar4 = this->_padding_, lVar4 != 0)) &&
     (pUVar7 = Z_Construct_UClass_UNavArea_NoRegister(), pUVar7 != (UClass *)0x0)) {
    iVar3 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar7->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((bVar6) && (lVar4 = this->_padding_, lVar4 != 0)) {
      pUVar7 = Z_Construct_UClass_UNavArea_NoRegister();
      lVar10 = 0;
      lVar9 = lVar10;
      if (pUVar7 != (UClass *)0x0) {
        iVar3 = (int)pUVar7->_padding_;
        if ((*(int *)(lVar4 + 0x38) < iVar3) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar7->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          lVar9 = this->_padding_;
        }
      }
      TVar8 = FNavigationSystem::GetDefaultWalkableArea();
      lVar4 = *(longlong *)TVar8.Class.field0_0x0;
      if ((lVar4 != 0) &&
         (pUVar7 = Z_Construct_UClass_UNavAreaBase_NoRegister(), pUVar7 != (UClass *)0x0)) {
        iVar3 = (int)pUVar7->_padding_;
        if ((*(int *)(lVar4 + 0x38) < iVar3) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar7->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          lVar10 = *(longlong *)TVar8.Class.field0_0x0;
        }
      }
      if (lVar9 == lVar10) {
        lVar4 = this->_padding_;
        if ((lVar4 == 0) ||
           (pUVar7 = Z_Construct_UClass_UNavArea_NoRegister(), pUVar7 == (UClass *)0x0))
        goto LAB_146e5c10f;
        iVar3 = (int)pUVar7->_padding_;
        if ((*(int *)(lVar4 + 0x38) < iVar3) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar7->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if ((!bVar6) || (this->_padding_ == 0)) goto LAB_146e5c10f;
      }
      local_110 = (UObject *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_110 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_110);
      }
      local_118 = (UObject *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_118 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_118);
      }
      FCompositeNavModifier::CreateAreaModifiers
                (&param_1->Modifiers,(UPrimitiveComponent *)this[-1]._padding_,
                 (TSubclassOf<UNavAreaBase>)&local_118,(TSubclassOf<UNavAreaBase>)&local_110);
    }
  }
LAB_146e5c10f:
  lVar4 = *(longlong *)(this[-1]._padding_ + 0x548);
  if (lVar4 != 0) {
    if ((char)this->_padding_ != '\0') {
      local_108._s_0.X = *(double *)(lVar4 + 0x280) - *(double *)(lVar4 + 0x298);
      local_f0 = *(double *)(lVar4 + 0x298) + *(double *)(lVar4 + 0x280);
      local_108._s_0.Y = *(double *)(lVar4 + 0x288) - *(double *)(lVar4 + 0x2a0);
      local_e8 = *(double *)(lVar4 + 0x2a0) + *(double *)(lVar4 + 0x288);
      local_118 = (UObject *)this->_padding_;
      local_108._s_0.Z = *(double *)(lVar4 + 0x290) - *(double *)(lVar4 + 0x2a8);
      local_e0 = *(double *)(lVar4 + 0x2a8) + *(double *)(lVar4 + 0x290);
      local_d8 = 1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_118 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_118);
      }
      FAreaNavModifier::FAreaNavModifier
                (&local_c8,(TBox<double> *)&local_108._s_0,
                 (TTransform<double> *)(this[-1]._padding_ + 0x1f0),
                 (TSubclassOf<UNavAreaBase>)&local_118);
      lVar4 = this->_padding_;
      if ((lVar4 != 0) &&
         (pUVar7 = Z_Construct_UClass_UNavArea_NoRegister(), pUVar7 != (UClass *)0x0)) {
        iVar3 = (int)pUVar7->_padding_;
        if ((*(int *)(lVar4 + 0x38) < iVar3) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar7->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if ((bVar6) && (pUVar5 = (UObject *)this->_padding_, pUVar5 != (UObject *)0x0)) {
          local_118 = pUVar5;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          FAreaNavModifier::SetAreaClassToReplace(&local_c8,(TSubclassOf<UNavAreaBase>)&local_118);
        }
      }
      (param_1->Modifiers).bMaskFillCollisionUnderneathForNavmesh = 1;
      FCompositeNavModifier::Add(&param_1->Modifiers,&local_c8);
      if (local_c8.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Points.AllocatorInstance.Data);
      }
    }
    EVar2 = *(ENavigationDataResolution *)((longlong)&this->_padding_ + 1);
    if (EVar2 != Invalid) {
      (param_1->Modifiers).NavMeshResolution = EVar2;
    }
  }
  return;
}

// GetPrivateStaticClass @ 146e5d080

UClass * __cdecl ANavModifierVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANavModifierVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavModifierVolume",
               &Z_Registration_Info_UClass_ANavModifierVolume.InnerSingleton,
               StaticRegisterNativesANavModifierVolume,0x318,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ANavModifierVolume>,
               InternalVTableHelperCtorCaller<ANavModifierVolume>,local_res8,AVolume::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANavModifierVolume.InnerSingleton;
}

// PostInitProperties @ 146e688c0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ANavModifierVolume::PostInitProperties(ANavModifierVolume *this)

{
  UObject::PostInitProperties((UObject *)this);
  *(byte *)&this->_padding_ = *(byte *)((longlong)&this->_padding_ + 3) >> 3 & 1;
  if ((this->_padding_ & 0x10) == 0) {
    AActor::ResetOwnedComponents((AActor *)this);
    return;
  }
  return;
}

// RebuildNavigationData @ 146e6eb00

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall ANavModifierVolume::RebuildNavigationData(ANavModifierVolume *this)

{
  longlong *plVar1;
  FReadAccessScope FStack_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FNavigationSystem::Delegates.UpdateActorData,&FStack_28);
  plVar1 = (longlong *)0x0;
  if (FNavigationSystem::Delegates.UpdateActorData._16_4_ != 0) {
    plVar1 = (longlong *)FNavigationSystem::Delegates.UpdateActorData._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,this);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_28);
  return;
}

// SetAreaClass @ 146e71c80

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
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
ANavModifierVolume::SetAreaClass(ANavModifierVolume *this,TSubclassOf<UNavArea> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  pUVar6 = (UClass *)0x0;
  pUVar7 = pUVar6;
  if ((lVar2 != 0) && (pUVar4 = Z_Construct_UClass_UNavArea_NoRegister(), pUVar4 != (UClass *)0x0))
  {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar7 = *(UClass **)param_1.Class.field0_0x0;
    }
  }
  pUVar4 = (this->AreaClass).Class.field0_0x0.DebugPtr;
  if ((pUVar4 != (UClass *)0x0) &&
     (pUVar5 = Z_Construct_UClass_UNavArea_NoRegister(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar6 = (this->AreaClass).Class.field0_0x0.DebugPtr;
    }
  }
  if (pUVar7 != pUVar6) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
    }
    (this->AreaClass).Class.field0_0x0 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
    FNavigationSystem::UpdateActorData((AActor *)this);
  }
  return;
}

// SetAreaClassToReplace @ 146e71e70

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
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
ANavModifierVolume::SetAreaClassToReplace(ANavModifierVolume *this,TSubclassOf<UNavArea> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  pUVar6 = (UClass *)0x0;
  pUVar7 = pUVar6;
  if ((lVar2 != 0) && (pUVar4 = Z_Construct_UClass_UNavArea_NoRegister(), pUVar4 != (UClass *)0x0))
  {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar7 = *(UClass **)param_1.Class.field0_0x0;
    }
  }
  pUVar4 = (this->AreaClassToReplace).Class.field0_0x0.DebugPtr;
  if ((pUVar4 != (UClass *)0x0) &&
     (pUVar5 = Z_Construct_UClass_UNavArea_NoRegister(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar6 = (this->AreaClassToReplace).Class.field0_0x0.DebugPtr;
    }
  }
  if (pUVar7 != pUVar6) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
    }
    (this->AreaClassToReplace).Class.field0_0x0 =
         *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
    FNavigationSystem::UpdateActorData((AActor *)this);
  }
  return;
}

// StaticRegisterNativesANavModifierVolume @ 146e73b60

void __cdecl ANavModifierVolume::StaticRegisterNativesANavModifierVolume(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_ANavModifierVolume_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// _getUObject @ 146e761c0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

UObject * __thiscall ANavModifierVolume::_getUObject(ANavModifierVolume *this)

{
  return (UObject *)&this[-1]._padding_;
}

// execSetAreaClass @ 146e76a50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ANavModifierVolume::execSetAreaClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  UObject *local_res8;
  
  pUVar8 = (UObject *)0x0;
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar5 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (local_res8 != (UObject *)0x0) goto LAB_146e76adf;
  }
  else if (local_res8 != (UObject *)0x0) {
    UE::GC::MarkAsReachable(local_res8);
LAB_146e76adf:
    pUVar6 = Z_Construct_UClass_UNavArea_NoRegister();
    if (pUVar6 != (UClass *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)&pUVar5[1].field_0x10 < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)&pUVar5[1].field_0x8 + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      pUVar7 = pUVar5;
      if (bVar4) goto LAB_146e76b13;
    }
  }
  pUVar7 = pUVar8;
LAB_146e76b13:
  lVar3 = *(longlong *)&param_1[0x13].field_0x8;
  if (lVar3 != 0) {
    pUVar6 = Z_Construct_UClass_UNavArea_NoRegister();
    if (pUVar6 != (UClass *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar8 = *(UObject **)&param_1[0x13].field_0x8;
      }
    }
  }
  if (pUVar7 != pUVar8) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    *(UObject **)&param_1[0x13].field_0x8 = pUVar5;
    FNavigationSystem::UpdateActorData((AActor *)param_1);
  }
  return;
}

// execSetAreaClassToReplace @ 146e76d00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
ANavModifierVolume::execSetAreaClassToReplace(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  UObject *local_res8;
  
  pUVar8 = (UObject *)0x0;
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar5 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (local_res8 != (UObject *)0x0) goto LAB_146e76d8f;
  }
  else if (local_res8 != (UObject *)0x0) {
    UE::GC::MarkAsReachable(local_res8);
LAB_146e76d8f:
    pUVar6 = Z_Construct_UClass_UNavArea_NoRegister();
    if (pUVar6 != (UClass *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)&pUVar5[1].field_0x10 < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)&pUVar5[1].field_0x8 + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      pUVar7 = pUVar5;
      if (bVar4) goto LAB_146e76dc3;
    }
  }
  pUVar7 = pUVar8;
LAB_146e76dc3:
  lVar3 = *(longlong *)&param_1[0x13].field_0x10;
  if (lVar3 != 0) {
    pUVar6 = Z_Construct_UClass_UNavArea_NoRegister();
    if (pUVar6 != (UClass *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar8 = *(UObject **)&param_1[0x13].field_0x10;
      }
    }
  }
  if (pUVar7 != pUVar8) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    *(UObject **)&param_1[0x13].field_0x10 = pUVar5;
    FNavigationSystem::UpdateActorData((AActor *)param_1);
  }
  return;
}

