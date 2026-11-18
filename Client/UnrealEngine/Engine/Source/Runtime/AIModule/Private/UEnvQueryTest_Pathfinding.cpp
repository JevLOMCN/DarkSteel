// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 18

// StaticClass @ 146f0dd40

UClass * __cdecl UEnvQueryTest_Pathfinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTest_Pathfinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTest_Pathfinding",
               &Z_Registration_Info_UClass_UEnvQueryTest_Pathfinding.InnerSingleton,
               StaticRegisterNativesUEnvQueryTest_Pathfinding,0x280,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UEnvQueryTest_Pathfinding>,
               InternalVTableHelperCtorCaller<UEnvQueryTest_Pathfinding>,local_res8,
               UEnvQueryTest::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_Pathfinding.InnerSingleton;
}

// UEnvQueryTest_Pathfinding @ 146f2d2d0

UEnvQueryTest_Pathfinding * __thiscall
UEnvQueryTest_Pathfinding::UEnvQueryTest_Pathfinding
          (UEnvQueryTest_Pathfinding *this,FVTableHelper *param_1)

{
  FFieldClass *pFVar1;
  
  UEnvQueryTest::UEnvQueryTest((UEnvQueryTest *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryTest_Pathfinding__6B_;
  (this->Context).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->PathFromContext)._padding_ = 0;
  (this->PathFromContext)._padding_ = 0;
  (this->PathFromContext)._padding_ = 0;
  (this->PathFromContext)._padding_ = 0;
  (this->PathFromContext)._padding_ = 0;
  (this->PathFromContext)._padding_ = (longlong)&___7FAIDataProviderBoolValue__6B_;
  (this->PathFromContext).DefaultValue = false;
  pFVar1 = FBoolProperty::StaticClass();
  (this->PathFromContext)._padding_ = (longlong)pFVar1;
  (this->SkipUnreachable)._padding_ = 0;
  (this->SkipUnreachable)._padding_ = 0;
  (this->SkipUnreachable)._padding_ = 0;
  (this->SkipUnreachable)._padding_ = 0;
  (this->SkipUnreachable)._padding_ = 0;
  (this->SkipUnreachable)._padding_ = (longlong)&___7FAIDataProviderBoolValue__6B_;
  (this->SkipUnreachable).DefaultValue = false;
  pFVar1 = FBoolProperty::StaticClass();
  (this->SkipUnreachable)._padding_ = (longlong)pFVar1;
  (this->FilterClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UEnvQueryTest_Pathfinding @ 146f2d3a0

UEnvQueryTest_Pathfinding * __thiscall
UEnvQueryTest_Pathfinding::UEnvQueryTest_Pathfinding
          (UEnvQueryTest_Pathfinding *this,FObjectInitializer *param_1)

{
  char cVar1;
  FFieldClass *pFVar2;
  UClass *pUVar3;
  
  UEnvQueryTest::UEnvQueryTest((UEnvQueryTest *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryTest_Pathfinding__6B_;
  (this->Context).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->PathFromContext)._padding_ = 0;
  (this->PathFromContext)._padding_ = 0;
  (this->PathFromContext)._padding_ = 0;
  (this->PathFromContext)._padding_ = 0;
  (this->PathFromContext)._padding_ = 0;
  (this->PathFromContext)._padding_ = (longlong)&___7FAIDataProviderBoolValue__6B_;
  (this->PathFromContext).DefaultValue = false;
  pFVar2 = FBoolProperty::StaticClass();
  (this->PathFromContext)._padding_ = (longlong)pFVar2;
  (this->SkipUnreachable)._padding_ = 0;
  (this->SkipUnreachable)._padding_ = 0;
  (this->SkipUnreachable)._padding_ = 0;
  (this->SkipUnreachable)._padding_ = 0;
  (this->SkipUnreachable)._padding_ = 0;
  (this->SkipUnreachable)._padding_ = (longlong)&___7FAIDataProviderBoolValue__6B_;
  (this->SkipUnreachable).DefaultValue = false;
  pFVar2 = FBoolProperty::StaticClass();
  (this->SkipUnreachable)._padding_ = (longlong)pFVar2;
  (this->FilterClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  pUVar3 = UEnvQueryContext_Querier::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->Context).Class.field0_0x0.DebugPtr = pUVar3;
  *(undefined1 *)&this->_padding_ = 2;
  pUVar3 = UEnvQueryItemType_VectorBase::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  this->_padding_ = (longlong)pUVar3;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  (this->TestMode).Value = '\0';
  (this->PathFromContext).DefaultValue = true;
  (this->SkipUnreachable).DefaultValue = true;
  *(undefined4 *)&this->_padding_ = 0x447a0000;
  *(undefined4 *)&this->_padding_ = 0x447a0000;
  cVar1 = *(char *)((longlong)&this->_padding_ + 2);
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 4;
  if (cVar1 != '\x03') {
    *(undefined1 *)((longlong)&this->_padding_ + 2) = 3;
  }
  return this;
}

// ~UEnvQueryTest_Pathfinding @ 146f2f200

void __thiscall
UEnvQueryTest_Pathfinding::~UEnvQueryTest_Pathfinding(UEnvQueryTest_Pathfinding *this)

{
  this->_padding_ = (longlong)&___7UEnvQueryTest_Pathfinding__6B_;
  (this->SkipUnreachable)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->PathFromContext)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  UEnvQueryTest::~UEnvQueryTest((UEnvQueryTest *)this);
  return;
}

// FindNavigationData @ 146f49b60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ANavigationData * __thiscall
UEnvQueryTest_Pathfinding::FindNavigationData
          (UEnvQueryTest_Pathfinding *this,UNavigationSystemV1 *param_1,UObject *param_2)

{
  code *pcVar1;
  UClass *pUVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ANavigationData *pAVar6;
  undefined1 local_28 [32];
  
  if (param_2 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UNavAgentInterface_NoRegister();
    plVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_2,pUVar2);
    if (plVar3 != (longlong *)0x0) {
      pcVar1 = *(code **)(*(longlong *)param_1 + 0x350);
      uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,local_28);
      uVar5 = (**(code **)(*plVar3 + 0x10))(plVar3);
      pAVar6 = (ANavigationData *)
               (*pcVar1)(param_1,uVar5,uVar4,&UE::Math::TVector<double>::ZeroVector);
      return pAVar6;
    }
  }
  pAVar6 = UNavigationSystemV1::GetDefaultNavDataInstance(param_1,DontCreate);
  return pAVar6;
}

// FindPathCostFrom @ 146f49d30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
UEnvQueryTest_Pathfinding::FindPathCostFrom
          (UEnvQueryTest_Pathfinding *this,TVector<double> *param_1,TVector<double> *param_2,
          Type param_3,ANavigationData *param_4,UNavigationSystemV1 *param_5,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_6,UObject *param_7)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  FPathFindingQuery *pFVar4;
  float fVar5;
  FPathFindingResult local_1b8;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_1a0;
  TSharedPtr<FNavigationPath,1> local_190;
  undefined1 local_178 [176];
  FPathFindingQuery local_c8;
  
  local_190.Object = (FNavigationPath *)0x0;
  local_190.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1a0.Object = param_6->Object;
  local_1a0.SharedReferenceCount.ReferenceController =
       (param_6->SharedReferenceCount).ReferenceController;
  if (local_1a0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FPathFindingQuery::FPathFindingQuery
            ((FPathFindingQuery *)local_178,param_7,param_4,param_1,param_2,&local_1a0,&local_190,
             __real_7fefffffffffffff,true);
  local_178._84_4_ = local_178._84_4_ & 0xfffffffe;
  pFVar4 = FPathFindingQuery::FPathFindingQuery(&local_c8,(FPathFindingQuery *)local_178);
  UNavigationSystemV1::FindPathSync(param_5,&local_1b8,pFVar4,param_3);
  fVar5 = __real_7f7fc99e;
  if (local_1b8.Result == Success) {
    if ((local_1b8.Path.Object == (FNavigationPath *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
    dVar2 = (double)(**(code **)((local_1b8.Path.Object)->_padding_ + 0x48))
                              (local_1b8.Path.Object,0);
    fVar5 = (float)dVar2;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b8.Path.SharedReferenceCount.ReferenceController);
  if ((void *)local_178._152_8_ != (void *)0x0) {
    FMemory::Free((void *)local_178._152_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_178._104_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_178._64_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_6->SharedReferenceCount).ReferenceController);
  return fVar5;
}

// FindPathCostTo @ 146f49eb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
UEnvQueryTest_Pathfinding::FindPathCostTo
          (UEnvQueryTest_Pathfinding *this,TVector<double> *param_1,TVector<double> *param_2,
          Type param_3,ANavigationData *param_4,UNavigationSystemV1 *param_5,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_6,UObject *param_7)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  FPathFindingQuery *pFVar4;
  float fVar5;
  FPathFindingResult local_1b8;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_1a0;
  TSharedPtr<FNavigationPath,1> local_190;
  undefined1 local_178 [176];
  FPathFindingQuery local_c8;
  
  local_190.Object = (FNavigationPath *)0x0;
  local_190.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1a0.Object = param_6->Object;
  local_1a0.SharedReferenceCount.ReferenceController =
       (param_6->SharedReferenceCount).ReferenceController;
  if (local_1a0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FPathFindingQuery::FPathFindingQuery
            ((FPathFindingQuery *)local_178,param_7,param_4,param_2,param_1,&local_1a0,&local_190,
             __real_7fefffffffffffff,true);
  local_178._84_4_ = local_178._84_4_ & 0xfffffffe;
  pFVar4 = FPathFindingQuery::FPathFindingQuery(&local_c8,(FPathFindingQuery *)local_178);
  UNavigationSystemV1::FindPathSync(param_5,&local_1b8,pFVar4,param_3);
  fVar5 = __real_7f7fc99e;
  if (local_1b8.Result == Success) {
    if ((local_1b8.Path.Object == (FNavigationPath *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
    dVar2 = (double)(**(code **)((local_1b8.Path.Object)->_padding_ + 0x48))
                              (local_1b8.Path.Object,0);
    fVar5 = (float)dVar2;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b8.Path.SharedReferenceCount.ReferenceController);
  if ((void *)local_178._152_8_ != (void *)0x0) {
    FMemory::Free((void *)local_178._152_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_178._104_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_178._64_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_6->SharedReferenceCount).ReferenceController);
  return fVar5;
}

// FindPathLengthFrom @ 146f4a030

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
UEnvQueryTest_Pathfinding::FindPathLengthFrom
          (UEnvQueryTest_Pathfinding *this,TVector<double> *param_1,TVector<double> *param_2,
          Type param_3,ANavigationData *param_4,UNavigationSystemV1 *param_5,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_6,UObject *param_7)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  FPathFindingQuery *pFVar4;
  float fVar5;
  FPathFindingResult local_1b8;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_1a0;
  TSharedPtr<FNavigationPath,1> local_190;
  undefined1 local_178 [176];
  FPathFindingQuery local_c8;
  
  local_190.Object = (FNavigationPath *)0x0;
  local_190.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1a0.Object = param_6->Object;
  local_1a0.SharedReferenceCount.ReferenceController =
       (param_6->SharedReferenceCount).ReferenceController;
  if (local_1a0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FPathFindingQuery::FPathFindingQuery
            ((FPathFindingQuery *)local_178,param_7,param_4,param_1,param_2,&local_1a0,&local_190,
             __real_7fefffffffffffff,true);
  local_178._84_4_ = local_178._84_4_ & 0xfffffffe;
  pFVar4 = FPathFindingQuery::FPathFindingQuery(&local_c8,(FPathFindingQuery *)local_178);
  UNavigationSystemV1::FindPathSync(param_5,&local_1b8,pFVar4,param_3);
  fVar5 = __real_7f7fc99e;
  if (local_1b8.Result == Success) {
    if ((local_1b8.Path.Object == (FNavigationPath *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
    dVar2 = FNavigationPath::GetLength(local_1b8.Path.Object);
    fVar5 = (float)dVar2;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b8.Path.SharedReferenceCount.ReferenceController);
  if ((void *)local_178._152_8_ != (void *)0x0) {
    FMemory::Free((void *)local_178._152_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_178._104_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_178._64_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_6->SharedReferenceCount).ReferenceController);
  return fVar5;
}

// FindPathLengthTo @ 146f4a1b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
UEnvQueryTest_Pathfinding::FindPathLengthTo
          (UEnvQueryTest_Pathfinding *this,TVector<double> *param_1,TVector<double> *param_2,
          Type param_3,ANavigationData *param_4,UNavigationSystemV1 *param_5,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_6,UObject *param_7)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  FPathFindingQuery *pFVar4;
  float fVar5;
  FPathFindingResult local_1b8;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_1a0;
  TSharedPtr<FNavigationPath,1> local_190;
  undefined1 local_178 [176];
  FPathFindingQuery local_c8;
  
  local_190.Object = (FNavigationPath *)0x0;
  local_190.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1a0.Object = param_6->Object;
  local_1a0.SharedReferenceCount.ReferenceController =
       (param_6->SharedReferenceCount).ReferenceController;
  if (local_1a0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FPathFindingQuery::FPathFindingQuery
            ((FPathFindingQuery *)local_178,param_7,param_4,param_2,param_1,&local_1a0,&local_190,
             __real_7fefffffffffffff,true);
  local_178._84_4_ = local_178._84_4_ & 0xfffffffe;
  pFVar4 = FPathFindingQuery::FPathFindingQuery(&local_c8,(FPathFindingQuery *)local_178);
  UNavigationSystemV1::FindPathSync(param_5,&local_1b8,pFVar4,param_3);
  fVar5 = __real_7f7fc99e;
  if (local_1b8.Result == Success) {
    if ((local_1b8.Path.Object == (FNavigationPath *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
    dVar2 = FNavigationPath::GetLength(local_1b8.Path.Object);
    fVar5 = (float)dVar2;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b8.Path.SharedReferenceCount.ReferenceController);
  if ((void *)local_178._152_8_ != (void *)0x0) {
    FMemory::Free((void *)local_178._152_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_178._104_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_178._64_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_6->SharedReferenceCount).ReferenceController);
  return fVar5;
}

// GetDescriptionDetails @ 146f532e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UEnvQueryTest_Pathfinding::GetDescriptionDetails
          (UEnvQueryTest_Pathfinding *this,FText *__return_storage_ptr__)

{
  FText *pFVar1;
  FString *pFVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  bool bVar7;
  undefined4 local_res8 [2];
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  FText local_28;
  
  pwVar6 = L"score unreachable as 0";
  pwVar5 = L"ScoreUnreachable";
  local_res8[0] = 0;
  bVar7 = *(char *)((longlong)&this->_padding_ + 4) != '\x01';
  pFVar1 = &local_a8;
  if (*(char *)((longlong)&this->_padding_ + 4) != '\x01') {
    pwVar6 = L"discard unreachable";
    pwVar5 = L"DiscardUnreachable";
    pFVar1 = &local_88;
  }
  pFVar1 = FText::AsLocalizable_Advanced_LocText(pFVar1,L"EnvQueryGenerator",pwVar5,pwVar6);
  FText::FText(&local_68,pFVar1);
  if (((bVar7 + 1U & 2) != 0) && (local_88.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  if ((!bVar7) && (local_a8.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  FText::FText(&local_98);
  if ((this->SkipUnreachable)._padding_ == 0) {
    if ((this->SkipUnreachable).DefaultValue != false) {
      FText::operator=(&local_98,&local_68);
    }
  }
  else {
    pFVar2 = FAIDataProviderValue::ToString
                       ((FAIDataProviderValue *)&this->SkipUnreachable,(FString *)&local_58);
    pFVar1 = FText::FromString(&local_28,pFVar2);
    local_a8.TextData.Reference = local_68.TextData.Reference;
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 8))
                (local_68.TextData.Reference,local_res8);
    }
    local_a8.Flags = local_68.Flags;
    pFVar3 = FText::FromString(&local_48,"{0}: {1}");
    pFVar4 = FTextFormat::FTextFormat(&local_38,pFVar3,Default);
    pFVar1 = FText::Format<FText,FText>(&local_88,pFVar4,&local_a8,pFVar1);
    FText::operator=(&local_98,pFVar1);
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_58.TextData.Reference);
    }
  }
  bVar7 = (this->_padding_ & 1) == 0;
  if (bVar7) {
    ::FString::FString((FString *)&local_a8,"existing path");
    pFVar1 = UEnvQueryTest::DescribeBoolTestParams
                       ((UEnvQueryTest *)this,&local_58,(FString *)&local_a8);
  }
  else {
    pFVar1 = UEnvQueryTest::DescribeFloatTestParams((UEnvQueryTest *)this,&local_48);
  }
  FText::FText(&local_78,pFVar1);
  if ((bVar7) && (local_58.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if ((bVar7) && (local_a8.TextData.Reference != (ITextData *)0x0)) {
    FMemory::Free(local_a8.TextData.Reference);
  }
  if ((!bVar7) && (local_48.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  bVar7 = FText::IsEmpty(&local_98);
  if (bVar7) {
    FText::FText(__return_storage_ptr__,&local_78);
  }
  else {
    local_a8.TextData.Reference = local_78.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 8))
                (local_78.TextData.Reference,local_res8);
    }
    local_a8.Flags = local_78.Flags;
    local_88.TextData.Reference = local_98.TextData.Reference;
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 8))
                (local_98.TextData.Reference,local_res8);
    }
    local_88.Flags = local_98.Flags;
    pFVar1 = FText::FromString(&local_58,"{0}\n{1}");
    pFVar4 = FTextFormat::FTextFormat(&local_38,pFVar1,Default);
    FText::Format<FText,FText>(__return_storage_ptr__,pFVar4,&local_88,&local_a8);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetDescriptionTitle @ 146f55020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FText * __thiscall
UEnvQueryTest_Pathfinding::GetDescriptionTitle
          (UEnvQueryTest_Pathfinding *this,FText *__return_storage_ptr__)

{
  ulonglong *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  UClass *pUVar9;
  wchar_t *pwVar10;
  UClass *pUVar11;
  longlong lVar12;
  ulonglong *puVar13;
  FString *__return_storage_ptr___00;
  undefined1 auStack_e8 [32];
  FText local_c8;
  undefined4 local_b8;
  FText local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_b8 = 0;
  ::FString::FString(&local_70,L"PathExist");
  ::FString::FString(&local_60,L"PathCost");
  ::FString::FString(&local_50,L"PathLength");
  if ((this->PathFromContext)._padding_ == 0) {
    pUVar11 = (this->Context).Class.field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar11 != (UClass *)0x0) goto LAB_146f55177;
LAB_146f551a5:
      pUVar11 = (UClass *)0x0;
    }
    else {
      if (pUVar11 == (UClass *)0x0) goto LAB_146f551a5;
      UE::GC::MarkAsReachable((UObject *)pUVar11);
LAB_146f55177:
      pUVar9 = UEnvQueryContext::StaticClass();
      if (pUVar9 == (UClass *)0x0) goto LAB_146f551a5;
      iVar2 = (int)pUVar9->_padding_;
      if (((int)pUVar11->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar9->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_146f551a5;
    }
    UEnvQueryTypes::GetShortTypeName(&local_b0,(UObject *)pUVar11);
    FText::ToString(&local_b0);
    bVar8 = false;
    bVar7 = false;
    bVar6 = false;
    bVar5 = true;
    bVar4 = true;
    __return_storage_ptr___00 = &local_a0;
    pwVar10 = L"%s %s";
    goto LAB_146f551fe;
  }
  FAIDataProviderValue::ToString((FAIDataProviderValue *)&this->PathFromContext,&local_80);
  pUVar11 = (this->Context).Class.field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar11 != (UClass *)0x0) goto LAB_146f550e7;
LAB_146f55115:
    pUVar11 = (UClass *)0x0;
  }
  else {
    if (pUVar11 == (UClass *)0x0) goto LAB_146f55115;
    UE::GC::MarkAsReachable((UObject *)pUVar11);
LAB_146f550e7:
    pUVar9 = UEnvQueryContext::StaticClass();
    if (pUVar9 == (UClass *)0x0) goto LAB_146f55115;
    iVar2 = (int)pUVar9->_padding_;
    if (((int)pUVar11->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar2 * 8) != &pUVar9->_padding_
       )) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_146f55115;
  }
  UEnvQueryTypes::GetShortTypeName(&local_c8,(UObject *)pUVar11);
  FText::ToString(&local_c8);
  __return_storage_ptr___00 = &local_90;
  bVar8 = true;
  bVar7 = true;
  bVar6 = true;
  bVar5 = false;
  bVar4 = false;
  pwVar10 = L"%s, direction: %s";
LAB_146f551fe:
  ::FString::PrintfImpl(__return_storage_ptr___00,pwVar10);
  pFVar3 = (__return_storage_ptr___00->Data).AllocatorInstance.Data;
  (__return_storage_ptr___00->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr___00->Data).ArrayNum = 0;
  (__return_storage_ptr___00->Data).ArrayMax = 0;
  if ((bVar4) && (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_b0.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
  }
  if ((bVar6) && (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  if ((bVar7) && (local_c8.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
  }
  if ((bVar8) && (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl((FString *)&local_c8,L"%s: %s");
  FText::FromString(__return_storage_ptr__,(FString *)&local_c8);
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_c8.TextData.Reference);
  }
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  puVar13 = &local_40;
  lVar12 = 3;
  do {
    puVar1 = puVar13 + -2;
    puVar13 = puVar13 + -2;
    lVar12 = lVar12 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar12 != 0);
  return __return_storage_ptr__;
}

// GetNavFilterClass @ 146f56ff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSubclassOf<UNavigationQueryFilter> __thiscall
UEnvQueryTest_Pathfinding::GetNavFilterClass
          (UEnvQueryTest_Pathfinding *this,FEnvQueryInstance *param_1)

{
  UClass *pUVar1;
  
  pUVar1 = (this->FilterClass).Class.field0_0x0.DebugPtr;
  param_1->_padding_ = (longlong)pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UNavigationQueryFilter>)(TObjectPtr<UClass>)param_1;
}

// GetPrivateStaticClass @ 146f59310

UClass * __cdecl UEnvQueryTest_Pathfinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTest_Pathfinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTest_Pathfinding",
               &Z_Registration_Info_UClass_UEnvQueryTest_Pathfinding.InnerSingleton,
               StaticRegisterNativesUEnvQueryTest_Pathfinding,0x280,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UEnvQueryTest_Pathfinding>,
               InternalVTableHelperCtorCaller<UEnvQueryTest_Pathfinding>,local_res8,
               UEnvQueryTest::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_Pathfinding.InnerSingleton;
}

// PostLoad @ 146f5ffc0

void __thiscall UEnvQueryTest_Pathfinding::PostLoad(UEnvQueryTest_Pathfinding *this)

{
  uchar uVar1;
  char cVar2;
  
  UEnvQueryTest::PostLoad((UEnvQueryTest *)this);
  uVar1 = (this->TestMode).Value;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | (uint)(uVar1 != '\0');
  cVar2 = *(char *)((longlong)&this->_padding_ + 2);
  if (uVar1 == '\0') {
    if (cVar2 != '\x03') {
      *(undefined1 *)((longlong)&this->_padding_ + 2) = 3;
    }
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 4;
  }
  else if (cVar2 == '\x03') {
    *(undefined1 *)((longlong)&this->_padding_ + 2) = 2;
    return;
  }
  return;
}

// RunTest @ 146f6e2d0

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
UEnvQueryTest_Pathfinding::RunTest(UEnvQueryTest_Pathfinding *this,FEnvQueryInstance *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  FName FVar3;
  UWorld *pUVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  FNavigationQueryFilter *pFVar8;
  FSharedReferencer<1> FVar9;
  double dVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  UObject *pUVar14;
  FProperty *pFVar15;
  undefined1 *puVar16;
  char *pcVar17;
  float *pfVar18;
  UClass *pUVar19;
  ANavigationData *pAVar20;
  UClass *pUVar21;
  TSubclassOf<UNavigationQueryFilter> TVar22;
  code *pcVar23;
  undefined8 *puVar24;
  ulong64 uVar25;
  FPathFindingQuery *pFVar26;
  ForElementType<TAlignedBytes<16,16>_> FVar27;
  int iVar28;
  UNavigationSystemV1 *pUVar29;
  code *pcVar30;
  longlong lVar31;
  FEnvQueryInstance *pFVar32;
  uint uVar33;
  char cVar34;
  undefined1 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 local_res8 [8];
  FEnvQueryInstance *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_538;
  undefined1 local_537 [7];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_530;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_520;
  FDelegateAllocation local_518;
  UObject *local_508;
  UNavigationSystemV1 *local_500;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_4f8;
  FItemIterator local_4e8;
  ANavigationData *local_4c0;
  FItemIterator local_4b8;
  FItemIterator local_490;
  UEnvQueryTest_Pathfinding *local_468;
  LARGE_INTEGER local_460;
  LARGE_INTEGER local_458;
  LARGE_INTEGER local_450;
  FNavigationQueryFilter *local_448;
  TReferenceControllerBase<1> *local_440;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_438;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_428;
  FDestructionSentinel local_418;
  FDestructionSentinel local_400;
  FDelegateAllocation *local_3e8;
  undefined1 local_3e0 [8];
  TSharedPtr<FNavigationPath,1> local_3d8;
  TSharedPtr<FNavigationPath,1> local_3c8;
  TVector<double> local_3b8;
  FReadAccessScope local_3a0;
  TVector<double> local_388;
  TVector<double> local_370;
  undefined1 local_358 [176];
  undefined1 local_2a8 [176];
  FPathFindingQuery local_1f8;
  FPathFindingQuery local_150;
  
  local_res10 = param_1;
  pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_1->_padding_ + 4));
  plVar2 = (longlong *)this->_padding_;
  lVar31 = param_1->_padding_;
  local_508 = pUVar14;
  if (plVar2 != (longlong *)0x0) {
    if (pUVar14 == (UObject *)0x0) {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1120252505884721189>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\DataProviders\\AIDataProvider.cpp"
                          ,0x25,"Owner");
      if (bVar11) {
        pcVar30 = (code *)swi(3);
        (*pcVar30)();
        return;
      }
    }
    else {
      this->_padding_ = 0;
      (**(code **)(*plVar2 + 0x2b0))(plVar2,pUVar14,(int)lVar31);
      if ((FName)this->_padding_ != (FName)0x0) {
        pFVar15 = UStruct::FindPropertyByName
                            (*(UStruct **)(this->_padding_ + 0x10),(FName)this->_padding_);
        if ((pFVar15 == (FProperty *)0x0) ||
           (cVar12 = (**(code **)(this->_padding_ + 8))(&this->_padding_), cVar12 == '\0')) {
          local_res8[0] = 0;
          bVar11 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(local_res8);
          if (!bVar11) goto LAB_146f6e3b5;
        }
        this->_padding_ = (longlong)pFVar15;
      }
    }
  }
LAB_146f6e3b5:
  lVar31 = param_1->_padding_;
  plVar2 = (longlong *)(this->PathFromContext)._padding_;
  if (plVar2 != (longlong *)0x0) {
    if (pUVar14 == (UObject *)0x0) {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1120252505884721189>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\DataProviders\\AIDataProvider.cpp"
                          ,0x25,"Owner");
      if (bVar11) {
        pcVar30 = (code *)swi(3);
        (*pcVar30)();
        return;
      }
    }
    else {
      (this->PathFromContext)._padding_ = 0;
      (**(code **)(*plVar2 + 0x2b0))(plVar2,pUVar14,(int)lVar31);
      FVar3 = (FName)(this->PathFromContext)._padding_;
      if (FVar3 != (FName)0x0) {
        pFVar15 = UStruct::FindPropertyByName
                            (*(UStruct **)((this->PathFromContext)._padding_ + 0x10),FVar3);
        if ((pFVar15 == (FProperty *)0x0) ||
           (cVar12 = (**(code **)((this->PathFromContext)._padding_ + 8))(&this->PathFromContext),
           cVar12 == '\0')) {
          local_res18[0] = 0;
          bVar11 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(local_res18);
          if (!bVar11) goto LAB_146f6e45b;
        }
        (this->PathFromContext)._padding_ = (longlong)pFVar15;
      }
    }
  }
LAB_146f6e45b:
  lVar31 = param_1->_padding_;
  plVar2 = (longlong *)(this->SkipUnreachable)._padding_;
  if (plVar2 != (longlong *)0x0) {
    if (pUVar14 == (UObject *)0x0) {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1120252505884721189>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\DataProviders\\AIDataProvider.cpp"
                          ,0x25,"Owner");
      if (bVar11) {
        pcVar30 = (code *)swi(3);
        (*pcVar30)();
        return;
      }
    }
    else {
      (this->SkipUnreachable)._padding_ = 0;
      (**(code **)(*plVar2 + 0x2b0))(plVar2,pUVar14,(int)lVar31);
      FVar3 = (FName)(this->SkipUnreachable)._padding_;
      if (FVar3 != (FName)0x0) {
        pFVar15 = UStruct::FindPropertyByName
                            (*(UStruct **)((this->SkipUnreachable)._padding_ + 0x10),FVar3);
        if ((pFVar15 == (FProperty *)0x0) ||
           (cVar12 = (**(code **)((this->SkipUnreachable)._padding_ + 8))(&this->SkipUnreachable),
           cVar12 == '\0')) {
          local_res20[0] = 0;
          bVar11 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(local_res20);
          if (!bVar11) goto LAB_146f6e50f;
        }
        (this->SkipUnreachable)._padding_ = (longlong)pFVar15;
      }
    }
  }
LAB_146f6e50f:
  plVar2 = (longlong *)this->_padding_;
  lVar31 = local_res10->_padding_;
  if (plVar2 != (longlong *)0x0) {
    if (pUVar14 == (UObject *)0x0) {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1120252505884721189>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\DataProviders\\AIDataProvider.cpp"
                          ,0x25,"Owner");
      if (bVar11) {
        pcVar30 = (code *)swi(3);
        (*pcVar30)();
        return;
      }
    }
    else {
      this->_padding_ = 0;
      (**(code **)(*plVar2 + 0x2b0))(plVar2,pUVar14,(int)lVar31);
      if ((FName)this->_padding_ != (FName)0x0) {
        pFVar15 = UStruct::FindPropertyByName
                            (*(UStruct **)(this->_padding_ + 0x10),(FName)this->_padding_);
        if ((pFVar15 == (FProperty *)0x0) ||
           (cVar12 = (**(code **)(this->_padding_ + 8))(&this->_padding_), cVar12 == '\0')) {
          local_538 = 0;
          bVar11 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(&local_538);
          if (!bVar11) goto LAB_146f6e5b8;
        }
        this->_padding_ = (longlong)pFVar15;
      }
    }
  }
LAB_146f6e5b8:
  plVar2 = (longlong *)this->_padding_;
  if (plVar2 != (longlong *)0x0) {
    if (pUVar14 == (UObject *)0x0) {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1120252505884721189>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\DataProviders\\AIDataProvider.cpp"
                          ,0x25,"Owner");
      if (bVar11) {
        pcVar30 = (code *)swi(3);
        (*pcVar30)();
        return;
      }
    }
    else {
      this->_padding_ = 0;
      (**(code **)(*plVar2 + 0x2b0))(plVar2,pUVar14);
      if ((FName)this->_padding_ != (FName)0x0) {
        pFVar15 = UStruct::FindPropertyByName
                            (*(UStruct **)(this->_padding_ + 0x10),(FName)this->_padding_);
        if ((pFVar15 == (FProperty *)0x0) ||
           (cVar12 = (**(code **)(this->_padding_ + 8))(&this->_padding_,pFVar15), cVar12 == '\0'))
        {
          local_537[0] = 0;
          bVar11 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(local_537);
          if (!bVar11) goto LAB_146f6e668;
        }
        this->_padding_ = (longlong)pFVar15;
      }
    }
  }
LAB_146f6e668:
  if (((FProperty *)this->_padding_ == (FProperty *)0x0) ||
     (puVar16 = FProperty::ContainerUObjectPtrToValuePtrInternal
                          ((FProperty *)this->_padding_,(UObject *)this->_padding_,0),
     puVar16 == (undefined1 *)0x0)) {
    uVar35 = (undefined1)this->_padding_;
  }
  else {
    uVar35 = *puVar16;
  }
  pFVar15 = (FProperty *)(this->PathFromContext)._padding_;
  if ((pFVar15 == (FProperty *)0x0) ||
     (pcVar17 = FProperty::ContainerUObjectPtrToValuePtrInternal
                          (pFVar15,(UObject *)(this->PathFromContext)._padding_,0),
     pcVar17 == (char *)0x0)) {
    cVar12 = (this->PathFromContext).DefaultValue;
  }
  else {
    cVar12 = *pcVar17;
  }
  pFVar15 = (FProperty *)(this->SkipUnreachable)._padding_;
  if ((pFVar15 == (FProperty *)0x0) ||
     (pcVar17 = FProperty::ContainerUObjectPtrToValuePtrInternal
                          (pFVar15,(UObject *)(this->SkipUnreachable)._padding_,0),
     pcVar17 == (char *)0x0)) {
    cVar34 = (this->SkipUnreachable).DefaultValue;
  }
  else {
    cVar34 = *pcVar17;
  }
  if (((FProperty *)this->_padding_ == (FProperty *)0x0) ||
     (pfVar18 = FProperty::ContainerUObjectPtrToValuePtrInternal
                          ((FProperty *)this->_padding_,(UObject *)this->_padding_,0),
     pfVar18 == (float *)0x0)) {
    fVar38 = *(float *)&this->_padding_;
  }
  else {
    fVar38 = *pfVar18;
  }
  if (((FProperty *)this->_padding_ == (FProperty *)0x0) ||
     (pfVar18 = FProperty::ContainerUObjectPtrToValuePtrInternal
                          ((FProperty *)this->_padding_,(UObject *)this->_padding_,0),
     pfVar18 == (float *)0x0)) {
    fVar37 = *(float *)&this->_padding_;
  }
  else {
    fVar37 = *pfVar18;
  }
  pUVar4 = (local_res10->World).field0_0x0.DebugPtr;
  if (pUVar4 == (UWorld *)0x0) {
    return;
  }
  pUVar29 = (UNavigationSystemV1 *)(pUVar4->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar29 == (UNavigationSystemV1 *)0x0) {
LAB_146f6e799:
    pUVar29 = (UNavigationSystemV1 *)0x0;
    local_500 = (UNavigationSystemV1 *)0x0;
  }
  else {
    local_500 = pUVar29;
    pUVar19 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar28 = (int)pUVar19->_padding_;
    if ((*(int *)(*(longlong *)&pUVar29->field_0x10 + 0x38) < iVar28) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar29->field_0x10 + 0x30) + (longlong)iVar28 * 8) !=
        &pUVar19->_padding_)) goto LAB_146f6e799;
  }
  pUVar14 = local_508;
  if (pUVar29 == (UNavigationSystemV1 *)0x0) {
    return;
  }
  if (local_508 == (UObject *)0x0) {
    return;
  }
  pAVar20 = FindNavigationData(this,pUVar29,local_508);
  if (pAVar20 == (ANavigationData *)0x0) {
    return;
  }
  local_530.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_530.ArrayNum = 0;
  local_530.ArrayMax = 0;
  pUVar19 = (this->Context).Class.field0_0x0.DebugPtr;
  local_4c0 = pAVar20;
  if ((pUVar19 != (UClass *)0x0) &&
     (pUVar21 = UEnvQueryContext::StaticClass(), pUVar21 != (UClass *)0x0)) {
    iVar28 = (int)pUVar21->_padding_;
    if (((int)pUVar19->_padding_ < iVar28) ||
       ((longlong *)*(undefined1 **)(pUVar19->_padding_ + (longlong)iVar28 * 8) !=
        &pUVar21->_padding_)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) {
      pUVar19 = (this->Context).Class.field0_0x0.DebugPtr;
      goto LAB_146f6e824;
    }
  }
  pUVar19 = (UClass *)0x0;
LAB_146f6e824:
  pFVar32 = local_res10;
  bVar11 = FEnvQueryInstance::PrepareContext(local_res10,pUVar19,&local_530);
  if (bVar11) {
    TVar22.Class.field0_0x0 =
         (TObjectPtr<UClass>)(**(code **)(this->_padding_ + 0x2d8))(this,local_3e0,pFVar32);
    UNavigationQueryFilter::GetQueryFilter(&local_4f8,pAVar20,pUVar14,TVar22);
    if ((this->_padding_ & 1) == 0) {
      (**(code **)(pAVar20->_padding_ + 0x848))(pAVar20);
      pFVar32 = local_res10;
      if (cVar12 == '\0') {
        FEnvQueryInstance::FItemIterator::FItemIterator
                  (&local_490,(UEnvQueryTest *)this,local_res10,-1);
        pUVar14 = local_508;
        dVar7 = __real_7fefffffffffffff;
        dVar5 = __real_4170000000000000;
        while (((dVar10 = local_490.Deadline, iVar28 = (int)local_490._padding_,
                lVar31 = local_490._padding_,
                (int)local_490._padding_ < *(int *)(local_490._padding_ + 8) &&
                ((*(byte *)(local_490._padding_ + 0x10c) & 2) == 0)) &&
               ((local_490.Deadline < 0.0 ||
                (QueryPerformanceCounter(&local_450),
                (double)local_450.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5 < dVar10)
                )))) {
          UEnvQueryTest::GetItemLocation((UEnvQueryTest *)this,&local_370,pFVar32,iVar28);
          uVar33 = 0;
          if (0 < local_530.ArrayNum) {
            do {
              FVar9.ReferenceController = local_4f8.SharedReferenceCount.ReferenceController;
              pFVar8 = local_4f8.Object;
              iVar28 = local_530.ArrayNum;
              if (local_4f8.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_4f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_4f8.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
                iVar28 = local_530.ArrayNum;
              }
              uVar13 = 0;
              if ((int)uVar33 < iVar28) {
                uVar13 = ~uVar33 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar30 = (code *)swi(3);
                (*pcVar30)();
                return;
              }
              local_428.Object = pFVar8;
              local_428.SharedReferenceCount.ReferenceController = FVar9.ReferenceController;
              local_3c8.Object = (FNavigationPath *)0x0;
              local_3c8.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (FVar9.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
                UNLOCK();
              }
              FPathFindingQuery::FPathFindingQuery
                        ((FPathFindingQuery *)local_2a8,pUVar14,pAVar20,&local_370,
                         (TVector<double> *)
                         (local_530.AllocatorInstance.Data + (longlong)(int)uVar33 * 0x18),
                         &local_428,&local_3c8,dVar7,true);
              local_2a8._84_4_ = local_2a8._84_4_ & 0xfffffffe;
              pFVar26 = FPathFindingQuery::FPathFindingQuery
                                  (&local_150,(FPathFindingQuery *)local_2a8);
              bVar11 = UNavigationSystemV1::TestPathSync(local_500,pFVar26,Regular,(int *)0x0);
              if ((void *)local_2a8._152_8_ != (void *)0x0) {
                FMemory::Free((void *)local_2a8._152_8_);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)local_2a8._104_8_);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)local_2a8._64_8_);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (FVar9.ReferenceController);
              FEnvQueryInstance::FItemIterator::SetScore
                        (&local_490,(uint)*(byte *)((longlong)&this->_padding_ + 4),
                         (uint)*(byte *)((longlong)&this->_padding_ + 2),bVar11,(bool)uVar35);
              uVar33 = uVar33 + 1;
              pFVar32 = local_res10;
            } while ((int)uVar33 < local_530.ArrayNum);
          }
          FEnvQueryInstance::FItemIterator::StoreTestResult(&local_490);
          if ((*(byte *)(local_490._padding_ + 0x10c) & 2) == 0) {
            local_490.ItemScore = 0.0;
            local_490.NumPassedForItem = 0;
            local_490.NumTestsForItem = 0;
            local_490.bForced = '\0';
            local_490.bPassed = '\x01';
            FEnvQueryInstance::FConstItemIterator::operator++((FConstItemIterator *)&local_490);
          }
        }
      }
      else {
        FEnvQueryInstance::FItemIterator::FItemIterator
                  (&local_4b8,(UEnvQueryTest *)this,local_res10,-1);
        pUVar14 = local_508;
        dVar7 = __real_7fefffffffffffff;
        dVar5 = __real_4170000000000000;
        while (((dVar10 = local_4b8.Deadline, iVar28 = (int)local_4b8._padding_,
                lVar31 = local_4b8._padding_,
                (int)local_4b8._padding_ < *(int *)(local_4b8._padding_ + 8) &&
                ((*(byte *)(local_4b8._padding_ + 0x10c) & 2) == 0)) &&
               ((local_4b8.Deadline < 0.0 ||
                (QueryPerformanceCounter(&local_458),
                (double)local_458.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5 < dVar10)
                )))) {
          UEnvQueryTest::GetItemLocation((UEnvQueryTest *)this,&local_388,pFVar32,iVar28);
          uVar33 = 0;
          if (0 < local_530.ArrayNum) {
            do {
              FVar9.ReferenceController = local_4f8.SharedReferenceCount.ReferenceController;
              pFVar8 = local_4f8.Object;
              iVar28 = local_530.ArrayNum;
              if (local_4f8.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_4f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_4f8.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
                iVar28 = local_530.ArrayNum;
              }
              uVar13 = 0;
              if ((int)uVar33 < iVar28) {
                uVar13 = ~uVar33 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar30 = (code *)swi(3);
                (*pcVar30)();
                return;
              }
              local_438.Object = pFVar8;
              local_438.SharedReferenceCount.ReferenceController = FVar9.ReferenceController;
              local_3d8.Object = (FNavigationPath *)0x0;
              local_3d8.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (FVar9.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
                UNLOCK();
              }
              FPathFindingQuery::FPathFindingQuery
                        ((FPathFindingQuery *)local_358,pUVar14,pAVar20,
                         (TVector<double> *)
                         (local_530.AllocatorInstance.Data + (longlong)(int)uVar33 * 0x18),
                         &local_388,&local_438,&local_3d8,dVar7,true);
              local_358._84_4_ = local_358._84_4_ & 0xfffffffe;
              pFVar26 = FPathFindingQuery::FPathFindingQuery
                                  (&local_1f8,(FPathFindingQuery *)local_358);
              bVar11 = UNavigationSystemV1::TestPathSync(local_500,pFVar26,Regular,(int *)0x0);
              if ((void *)local_358._152_8_ != (void *)0x0) {
                FMemory::Free((void *)local_358._152_8_);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)local_358._104_8_);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)local_358._64_8_);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (FVar9.ReferenceController);
              FEnvQueryInstance::FItemIterator::SetScore
                        (&local_4b8,(uint)*(byte *)((longlong)&this->_padding_ + 4),
                         (uint)*(byte *)((longlong)&this->_padding_ + 2),bVar11,(bool)uVar35);
              uVar33 = uVar33 + 1;
              pFVar32 = local_res10;
            } while ((int)uVar33 < local_530.ArrayNum);
          }
          FEnvQueryInstance::FItemIterator::StoreTestResult(&local_4b8);
          if ((*(byte *)(local_4b8._padding_ + 0x10c) & 2) == 0) {
            local_4b8.ItemScore = 0.0;
            local_4b8.NumPassedForItem = 0;
            local_4b8.NumTestsForItem = 0;
            local_4b8.bForced = '\0';
            local_4b8.bPassed = '\x01';
            FEnvQueryInstance::FConstItemIterator::operator++((FConstItemIterator *)&local_4b8);
          }
        }
      }
      *(int *)(lVar31 + 0xec) = iVar28;
      (**(code **)(pAVar20->_padding_ + 0x850))(pAVar20);
    }
    else {
      local_520.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_518.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_518.DelegateSize = 0;
      if ((this->TestMode).Value == '\x02') {
        pcVar30 = FindPathLengthFrom;
        pcVar23 = FindPathLengthTo;
      }
      else {
        pcVar30 = FindPathCostFrom;
        pcVar23 = FindPathCostTo;
      }
      if (cVar12 != '\0') {
        pcVar30 = pcVar23;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_520,(FWriteAccessScope *)&local_400);
      local_3e8 = &local_518;
      puVar24 = UE::Core::Private::DelegateAllocate(0x28,&local_518);
      if (puVar24 != (undefined8 *)0x0) {
        *puVar24 = &
                   ___7__TCommonDelegateInstanceState___A6AMAEBU__TVector_N_Math_UE__0W4Type_EPathFindingMode__AEBVANavigationData__AEAVUNavigationSystemV1__V__TSharedPtr___CBUFNavigationQueryFilter___00__PEBVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar25 = FDelegateHandle::GenerateNewID();
        puVar24[2] = uVar25;
        *puVar24 = &
                   ___7__TBaseUObjectMethodDelegateInstance__00__CBVUEnvQueryTest_Pathfinding____A6AMAEBU__TVector_N_Math_UE__0W4Type_EPathFindingMode__AEBVANavigationData__AEAVUNavigationSystemV1__V__TSharedPtr___CBUFNavigationQueryFilter___00__PEBVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar24[3] = 0;
        local_468 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar24 + 3),(FObjectPtr)&local_468);
        puVar24[4] = pcVar30;
      }
      if (local_400.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_400.Accessor,&local_400);
      }
      pAVar20 = local_4c0;
      (**(code **)(local_4c0->_padding_ + 0x848))(local_4c0);
      pFVar32 = local_res10;
      FEnvQueryInstance::FItemIterator::FItemIterator
                (&local_4e8,(UEnvQueryTest *)this,local_res10,-1);
      fVar6 = __real_7f7fc99e;
      dVar5 = __real_4170000000000000;
      while (((dVar7 = local_4e8.Deadline, iVar28 = (int)local_4e8._padding_,
              lVar31 = local_4e8._padding_,
              (int)local_4e8._padding_ < *(int *)(local_4e8._padding_ + 8) &&
              ((*(byte *)(local_4e8._padding_ + 0x10c) & 2) == 0)) &&
             ((local_4e8.Deadline < 0.0 ||
              (QueryPerformanceCounter(&local_460),
              (double)local_460.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5 < dVar7))))
            ) {
        UEnvQueryTest::GetItemLocation((UEnvQueryTest *)this,&local_3b8,pFVar32,iVar28);
        uVar33 = 0;
        if (0 < local_530.ArrayNum) {
          do {
            FVar9.ReferenceController = local_4f8.SharedReferenceCount.ReferenceController;
            pFVar8 = local_4f8.Object;
            iVar28 = local_530.ArrayNum;
            if (local_4f8.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_4f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_4f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
              iVar28 = local_530.ArrayNum;
            }
            uVar13 = 0;
            if ((int)uVar33 < iVar28) {
              uVar13 = ~uVar33 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar30 = (code *)swi(3);
              (*pcVar30)();
              return;
            }
            pFVar1 = local_530.AllocatorInstance.Data + (longlong)(int)uVar33 * 0x18;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      (&local_520,&local_3a0);
            local_440 = FVar9.ReferenceController;
            FVar27 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            if (local_518.DelegateSize != 0) {
              FVar27 = local_518.DelegateAllocator;
            }
            local_448 = pFVar8;
            fVar36 = (float)(**(code **)(*(longlong *)FVar27 + 0x60))
                                      (FVar27,&local_3b8,pFVar1,0,pAVar20,local_500,&local_448,
                                       local_508);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_3a0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            FEnvQueryInstance::FItemIterator::SetScore
                      (&local_4e8,(uint)*(byte *)((longlong)&this->_padding_ + 4),
                       (uint)*(byte *)((longlong)&this->_padding_ + 2),fVar36,fVar38,fVar37);
            if ((cVar34 != '\0') && (fVar6 <= fVar36)) {
              local_4e8.ItemScore = -3.4028235e+38;
              local_4e8._34_1_ = local_4e8._34_1_ & 0xfe | 2;
            }
            uVar33 = uVar33 + 1;
            pFVar32 = local_res10;
          } while ((int)uVar33 < local_530.ArrayNum);
        }
        FEnvQueryInstance::FItemIterator::StoreTestResult(&local_4e8);
        if ((*(byte *)(local_4e8._padding_ + 0x10c) & 2) == 0) {
          local_4e8.ItemScore = 0.0;
          local_4e8.NumPassedForItem = 0;
          local_4e8.NumTestsForItem = 0;
          local_4e8.bForced = '\0';
          local_4e8.bPassed = '\x01';
          FEnvQueryInstance::FConstItemIterator::operator++((FConstItemIterator *)&local_4e8);
        }
      }
      *(int *)(lVar31 + 0xec) = iVar28;
      (**(code **)(pAVar20->_padding_ + 0x850))(pAVar20);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_520,(FWriteAccessScope *)&local_418);
      if ((local_518.DelegateSize != 0) &&
         (local_518.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_518.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_518,0,0,0x10);
        local_518.DelegateSize = 0;
      }
      if (local_418.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_418.Accessor,&local_418);
      }
      if (local_518.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_518.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_520.AccessDetector);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4f8.SharedReferenceCount.ReferenceController);
  }
  if (local_530.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_530.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUEnvQueryTest_Pathfinding @ 146f76ee0

void __cdecl UEnvQueryTest_Pathfinding::StaticRegisterNativesUEnvQueryTest_Pathfinding(void)

{
  return;
}

// TestPathFrom @ 146f78440

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UEnvQueryTest_Pathfinding::TestPathFrom
          (UEnvQueryTest_Pathfinding *this,TVector<double> *param_1,TVector<double> *param_2,
          Type param_3,ANavigationData *param_4,UNavigationSystemV1 *param_5,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_6,UObject *param_7)

{
  bool bVar1;
  FPathFindingQuery *pFVar2;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_188;
  TSharedPtr<FNavigationPath,1> local_178;
  undefined1 local_168 [176];
  FPathFindingQuery local_b8;
  
  local_178.Object = (FNavigationPath *)0x0;
  local_178.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_188.Object = param_6->Object;
  local_188.SharedReferenceCount.ReferenceController =
       (param_6->SharedReferenceCount).ReferenceController;
  if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FPathFindingQuery::FPathFindingQuery
            ((FPathFindingQuery *)local_168,param_7,param_4,param_1,param_2,&local_188,&local_178,
             __real_7fefffffffffffff,true);
  local_168._84_4_ = local_168._84_4_ & 0xfffffffe;
  pFVar2 = FPathFindingQuery::FPathFindingQuery(&local_b8,(FPathFindingQuery *)local_168);
  bVar1 = UNavigationSystemV1::TestPathSync(param_5,pFVar2,param_3,(int *)0x0);
  if ((void *)local_168._152_8_ != (void *)0x0) {
    FMemory::Free((void *)local_168._152_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_168._104_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_168._64_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_6->SharedReferenceCount).ReferenceController);
  return bVar1;
}

// TestPathTo @ 146f78550

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UEnvQueryTest_Pathfinding::TestPathTo
          (UEnvQueryTest_Pathfinding *this,TVector<double> *param_1,TVector<double> *param_2,
          Type param_3,ANavigationData *param_4,UNavigationSystemV1 *param_5,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_6,UObject *param_7)

{
  bool bVar1;
  FPathFindingQuery *pFVar2;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_188;
  TSharedPtr<FNavigationPath,1> local_178;
  undefined1 local_168 [176];
  FPathFindingQuery local_b8;
  
  local_178.Object = (FNavigationPath *)0x0;
  local_178.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_188.Object = param_6->Object;
  local_188.SharedReferenceCount.ReferenceController =
       (param_6->SharedReferenceCount).ReferenceController;
  if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FPathFindingQuery::FPathFindingQuery
            ((FPathFindingQuery *)local_168,param_7,param_4,param_2,param_1,&local_188,&local_178,
             __real_7fefffffffffffff,true);
  local_168._84_4_ = local_168._84_4_ & 0xfffffffe;
  pFVar2 = FPathFindingQuery::FPathFindingQuery(&local_b8,(FPathFindingQuery *)local_168);
  bVar1 = UNavigationSystemV1::TestPathSync(param_5,pFVar2,param_3,(int *)0x0);
  if ((void *)local_168._152_8_ != (void *)0x0) {
    FMemory::Free((void *)local_168._152_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_168._104_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_168._64_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_6->SharedReferenceCount).ReferenceController);
  return bVar1;
}

