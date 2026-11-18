// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 29

// StaticClass @ 146f851b0

UClass * __cdecl ANavLinkProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANavLinkProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"NavLinkProxy",
               &Z_Registration_Info_UClass_ANavLinkProxy.InnerSingleton,
               StaticRegisterNativesANavLinkProxy,0x318,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ANavLinkProxy>,
               InternalVTableHelperCtorCaller<ANavLinkProxy>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANavLinkProxy.InnerSingleton;
}

// ANavLinkProxy @ 146f905b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ANavLinkProxy * __thiscall ANavLinkProxy::ANavLinkProxy(ANavLinkProxy *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavLinkHostInterface__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  (this->PointLinks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PointLinks).ArrayNum = 0;
  (this->PointLinks).ArrayMax = 0;
  (this->SegmentLinks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SegmentLinks).ArrayNum = 0;
  (this->SegmentLinks).ArrayMax = 0;
  (this->SmartLinkComp).field0_0x0.DebugPtr = (UNavLinkCustomComponent *)0x0;
  *(undefined8 *)&this->OnSmartLinkReached = 0;
  *(undefined8 *)&(this->OnSmartLinkReached).field_0x8 = 0;
  *(undefined8 *)&(this->OnSmartLinkReached).field_0x10 = 0;
  return this;
}

// ANavLinkProxy @ 146f90630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ANavLinkProxy * __thiscall
ANavLinkProxy::ANavLinkProxy(ANavLinkProxy *this,FObjectInitializer *param_1)

{
  TArray<FNavigationLink,TSizedDefaultAllocator<32>_> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  UNavLinkCustomComponent *pUVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  ANavLinkProxy *pAVar12;
  FNavigationLinkBase *pFVar13;
  ANavLinkProxy *local_res8;
  FName local_res18;
  FName local_res20;
  undefined1 local_108 [8];
  FDelegateAllocation local_100;
  code *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  bool local_d8;
  FDestructionSentinel local_c8;
  FDelegateAllocation *local_b0;
  FNavigationLinkBase local_a8;
  undefined8 local_68;
  undefined8 uStack_60;
  ulong64 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  pTVar1 = &this->PointLinks;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INavLinkHostInterface__;
  (this->PointLinks).ArrayNum = 0;
  (this->PointLinks).ArrayMax = 0;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  (this->SegmentLinks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SegmentLinks).ArrayNum = 0;
  (this->SegmentLinks).ArrayMax = 0;
  (this->SmartLinkComp).field0_0x0.DebugPtr = (UNavLinkCustomComponent *)0x0;
  *(undefined8 *)&this->OnSmartLinkReached = 0;
  *(undefined8 *)&(this->OnSmartLinkReached).field_0x8 = 0;
  *(undefined8 *)&(this->OnSmartLinkReached).field_0x10 = 0;
  pFVar6 = ::FName::FName(&local_res18,L"PositionComponent");
  FVar2 = *pFVar6;
  pUVar7 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar8 = UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar7,pUVar7,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  this->_padding_ = (longlong)pUVar8;
  AActor::SetHidden((AActor *)this,true);
  pFVar6 = ::FName::FName(&local_res20,L"SmartLinkComp");
  FVar2 = *pFVar6;
  pUVar7 = Z_Construct_UClass_UNavLinkCustomComponent_NoRegister();
  pUVar9 = (UNavLinkCustomComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar7,pUVar7,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (UNavLinkCustomComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  (this->SmartLinkComp).field0_0x0.DebugPtr = pUVar9;
  UNavRelevantComponent::SetNavigationRelevancy((UNavRelevantComponent *)pUVar9,false);
  pUVar9 = (this->SmartLinkComp).field0_0x0.DebugPtr;
  local_e8 = NotifySmartLinkReached;
  uStack_e0 = 0;
  local_108 = (undefined1  [8])0x0;
  local_100.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_100.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_108,
             (FWriteAccessScope *)&local_c8);
  local_b0 = &local_100;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_100);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6AXPEAVUNavLinkCustomComponent__PEAVUObject__AEBU__TVector_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VANavLinkProxy____A6AXPEAVUNavLinkCustomComponent__PEAVUObject__AEBU__TVector_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_res8);
    puVar10[4] = local_e8;
    puVar10[5] = CONCAT44(uStack_dc,uStack_e0);
  }
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  UNavLinkCustomComponent::SetMoveReachedLink
            (pUVar9,(TDelegate<void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
                     *)local_108);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_108,
             (FWriteAccessScope *)&local_e8);
  if ((local_100.DelegateSize != 0) &&
     (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_100.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_100,0,0,0x10);
    local_100.DelegateSize = 0;
  }
  if (local_d8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_dc,uStack_e0),
               (FDestructionSentinel *)&local_e8);
  }
  if (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_100.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_108);
  this->bSmartLinkIsRelevant = false;
  FNavigationLinkBase::FNavigationLinkBase(&local_a8);
  local_68 = ___xmm_c0490000000000000000000000000000;
  uStack_60 = _UNK_15149cb28;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = ___xmm_00000000000000004049000000000000;
  uStack_40 = _UNK_15149cb08;
  pUVar7 = Z_Construct_UClass_UNavArea_Default_NoRegister();
  FNavigationLinkBase::SetAreaClass(&local_a8,pUVar7);
  pFVar13 = (FNavigationLinkBase *)(pTVar1->AllocatorInstance).Data;
  if ((pFVar13 <= &local_a8) &&
     (&local_a8 <
      (FNavigationLinkBase *)((longlong)pFVar13 + (longlong)(this->PointLinks).ArrayMax * 0x70))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pAVar12 = (ANavLinkProxy *)(*pcVar3)();
      return pAVar12;
    }
  }
  iVar5 = (this->PointLinks).ArrayNum;
  if (iVar5 == (this->PointLinks).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x870,&pTVar1->AllocatorInstance,&(this->PointLinks).ArrayMax);
  }
  (this->PointLinks).ArrayNum = iVar5 + 1;
  pFVar13 = (FNavigationLinkBase *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x70);
  FNavigationLinkBase::FNavigationLinkBase(pFVar13,&local_a8);
  pFVar13[1].LeftProjectHeight = (float)(undefined4)local_68;
  pFVar13[1].MaxFallDownLength = (float)local_68._4_4_;
  *(undefined8 *)&pFVar13[1].UserId = uStack_60;
  pFVar13[1].NavLinkId.Id = local_58;
  pFVar13[1].SnapRadius = (float)(undefined4)uStack_50;
  pFVar13[1].SnapHeight = (float)uStack_50._4_4_;
  pFVar13[1].SupportedAgents = (FNavAgentSelector)(undefined4)local_48;
  pFVar13[1].field7_0x24 = (FNavigationLinkBase_u_36)local_48._4_4_;
  *(undefined8 *)&pFVar13[1].Direction = uStack_40;
  AActor::SetActorEnableCollision((AActor *)this,false);
  AActor::SetCanBeDamaged((AActor *)this,false);
  return this;
}

// ~ANavLinkProxy @ 146f96720

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ANavLinkProxy::~ANavLinkProxy(ANavLinkProxy *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavLinkHostInterface__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  pvVar1 = *(void **)&(this->OnSmartLinkReached).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSmartLinkReached);
  pFVar2 = (this->SegmentLinks).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PointLinks).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7INavRelevantInterface__6B_;
  this->_padding_ = (longlong)&___7INavLinkHostInterface__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// BeginDestroy @ 146f9bc70

void __thiscall ANavLinkProxy::BeginDestroy(ANavLinkProxy *this)

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

// BeginPlay @ 146f9be20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ANavLinkProxy::BeginPlay(ANavLinkProxy *this)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  UNavigationSystemBase *pUVar4;
  
  pUVar2 = AActor::GetWorld((AActor *)this);
  if (pUVar2 == (UWorld *)0x0) goto LAB_146f9be7e;
  pUVar4 = (pUVar2->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar4 == (UNavigationSystemBase *)0x0) {
LAB_146f9be67:
    pUVar4 = (UNavigationSystemBase *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_146f9be67;
  }
  if (pUVar4 != (UNavigationSystemBase *)0x0) {
    FVisualLogger::Redirect((UObject *)this,(UObject *)pUVar4);
  }
LAB_146f9be7e:
  AActor::BeginPlay((AActor *)this);
  return;
}

// GetComponentsBoundingBox @ 146fac510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBox<double> * __thiscall
ANavLinkProxy::GetComponentsBoundingBox
          (ANavLinkProxy *this,TBox<double> *__return_storage_ptr__,bool param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  UNavLinkCustomComponent *pUVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  TBox<double> *pTVar10;
  TMatrix<double> *pTVar11;
  TVector<double> *pTVar12;
  double *pdVar13;
  longlong lVar14;
  double *pdVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  TVector<double> local_148;
  TVector<double> local_130;
  TVector<double>_u_0 local_118;
  double dStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  TMatrix<double> local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_178;
  uVar16 = 0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = -10.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 10.0;
  __return_storage_ptr__->IsValid = '\x01';
  if (0 < (this->PointLinks).ArrayNum) {
    lVar14 = 0;
    do {
      iVar3 = (this->PointLinks).ArrayNum;
      uVar9 = 0;
      if ((int)uVar16 < iVar3) {
        uVar9 = ~uVar16 >> 0x1f;
      }
      if (uVar9 == 0) {
        local_158 = (longlong)(int)uVar16;
        local_150 = (longlong)iVar3;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pTVar10 = (TBox<double> *)(*pcVar6)();
          return pTVar10;
        }
      }
      pdVar13 = &(__return_storage_ptr__->Max).field0_0x0._s_0.Z;
      pdVar15 = &(__return_storage_ptr__->Max).field0_0x0._s_0.Y;
      pFVar4 = (this->PointLinks).AllocatorInstance.Data;
      if (__return_storage_ptr__->IsValid == '\0') {
        dVar23 = *(double *)(pFVar4 + lVar14 + 0x40 + 8);
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = *(double *)(pFVar4 + lVar14 + 0x40);
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar23;
        dVar23 = *(double *)(pFVar4 + lVar14 + 0x50);
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar23;
        dVar25 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
        dVar26 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
        __return_storage_ptr__->IsValid = '\x01';
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar25;
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar26;
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar23;
      }
      else {
        dVar23 = *(double *)(pFVar4 + lVar14 + 0x40);
        uVar17 = SUB84(dVar23,0);
        uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
        dVar25 = *(double *)&(__return_storage_ptr__->Min).field0_0x0;
        if (dVar25 <= dVar23) {
          uVar17 = SUB84(dVar25,0);
          uVar19 = (undefined4)((ulonglong)dVar25 >> 0x20);
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar19,uVar17);
        dVar23 = *(double *)(pFVar4 + lVar14 + 0x48);
        uVar17 = SUB84(dVar23,0);
        uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
        dVar25 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8);
        if (dVar25 <= dVar23) {
          uVar17 = SUB84(dVar25,0);
          uVar19 = (undefined4)((ulonglong)dVar25 >> 0x20);
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar19,uVar17);
        dVar23 = *(double *)(pFVar4 + lVar14 + 0x50);
        uVar17 = SUB84(dVar23,0);
        uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
        dVar25 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10);
        if (dVar25 <= dVar23) {
          uVar17 = SUB84(dVar25,0);
          uVar19 = (undefined4)((ulonglong)dVar25 >> 0x20);
        }
        dVar23 = *(double *)&(__return_storage_ptr__->Max).field0_0x0;
        uVar18 = SUB84(dVar23,0);
        uVar20 = (undefined4)((ulonglong)dVar23 >> 0x20);
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar19,uVar17);
        dVar25 = *(double *)(pFVar4 + lVar14 + 0x40);
        if (dVar23 <= dVar25) {
          uVar18 = SUB84(dVar25,0);
          uVar20 = (undefined4)((ulonglong)dVar25 >> 0x20);
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar20,uVar18);
        dVar23 = *(double *)(pFVar4 + lVar14 + 0x48);
        uVar17 = SUB84(dVar23,0);
        uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
        dVar25 = *pdVar13;
        uVar18 = SUB84(dVar25,0);
        uVar20 = (undefined4)((ulonglong)dVar25 >> 0x20);
        dVar26 = *pdVar15;
        if (dVar23 <= dVar26) {
          uVar17 = SUB84(dVar26,0);
          uVar19 = (undefined4)((ulonglong)dVar26 >> 0x20);
        }
        *pdVar15 = (double)CONCAT44(uVar19,uVar17);
        dVar23 = *(double *)(pFVar4 + lVar14 + 0x50);
        if (dVar25 <= dVar23) {
          uVar18 = SUB84(dVar23,0);
          uVar20 = (undefined4)((ulonglong)dVar23 >> 0x20);
        }
        *pdVar13 = (double)CONCAT44(uVar20,uVar18);
      }
      dVar23 = *(double *)&(__return_storage_ptr__->Min).field0_0x0;
      uVar17 = SUB84(dVar23,0);
      uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
      uVar16 = uVar16 + 1;
      dVar25 = *(double *)(pFVar4 + lVar14 + 0x58);
      if (dVar25 <= dVar23) {
        uVar17 = SUB84(dVar25,0);
        uVar19 = (undefined4)((ulonglong)dVar25 >> 0x20);
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar19,uVar17);
      dVar23 = *(double *)(pFVar4 + lVar14 + 0x60);
      uVar17 = SUB84(dVar23,0);
      uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
      dVar25 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8);
      if (dVar25 <= dVar23) {
        uVar17 = SUB84(dVar25,0);
        uVar19 = (undefined4)((ulonglong)dVar25 >> 0x20);
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar19,uVar17);
      dVar23 = *(double *)(pFVar4 + lVar14 + 0x68);
      uVar17 = SUB84(dVar23,0);
      uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
      dVar25 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10);
      if (dVar25 <= dVar23) {
        uVar17 = SUB84(dVar25,0);
        uVar19 = (undefined4)((ulonglong)dVar25 >> 0x20);
      }
      dVar23 = *(double *)&(__return_storage_ptr__->Max).field0_0x0;
      uVar18 = SUB84(dVar23,0);
      uVar20 = (undefined4)((ulonglong)dVar23 >> 0x20);
      (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar19,uVar17);
      dVar25 = *(double *)(pFVar4 + lVar14 + 0x58);
      if (dVar23 <= dVar25) {
        uVar18 = SUB84(dVar25,0);
        uVar20 = (undefined4)((ulonglong)dVar25 >> 0x20);
      }
      (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar20,uVar18);
      dVar23 = *(double *)(pFVar4 + lVar14 + 0x60);
      uVar17 = SUB84(dVar23,0);
      uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
      dVar25 = *pdVar15;
      if (dVar23 <= dVar25) {
        uVar17 = SUB84(dVar25,0);
        uVar19 = (undefined4)((ulonglong)dVar25 >> 0x20);
      }
      *pdVar15 = (double)CONCAT44(uVar19,uVar17);
      dVar23 = *(double *)(pFVar4 + lVar14 + 0x68);
      uVar17 = SUB84(dVar23,0);
      uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
      lVar14 = lVar14 + 0x70;
      dVar25 = *pdVar13;
      if (dVar23 <= dVar25) {
        uVar17 = SUB84(dVar25,0);
        uVar19 = (undefined4)((ulonglong)dVar25 >> 0x20);
      }
      *pdVar13 = (double)CONCAT44(uVar19,uVar17);
    } while ((int)uVar16 < (this->PointLinks).ArrayNum);
  }
  uVar16 = 0;
  if (0 < (this->SegmentLinks).ArrayNum) {
    lVar14 = 0;
    do {
      iVar3 = (this->SegmentLinks).ArrayNum;
      uVar9 = 0;
      if ((int)uVar16 < iVar3) {
        uVar9 = ~uVar16 >> 0x1f;
      }
      if (uVar9 == 0) {
        local_158 = (longlong)(int)uVar16;
        local_150 = (longlong)iVar3;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pTVar10 = (TBox<double> *)(*pcVar6)();
          return pTVar10;
        }
      }
      pdVar13 = &(__return_storage_ptr__->Max).field0_0x0._s_0.Z;
      pdVar15 = &(__return_storage_ptr__->Max).field0_0x0._s_0.Y;
      pFVar4 = (this->SegmentLinks).AllocatorInstance.Data;
      if (__return_storage_ptr__->IsValid == '\0') {
        dVar23 = *(double *)(pFVar4 + lVar14 + 0x40 + 8);
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = *(double *)(pFVar4 + lVar14 + 0x40);
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar23;
        dVar23 = *(double *)(pFVar4 + lVar14 + 0x50);
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar23;
        dVar25 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
        dVar26 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
        __return_storage_ptr__->IsValid = '\x01';
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar25;
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar26;
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar23;
      }
      else {
        dVar23 = *(double *)(pFVar4 + lVar14 + 0x40);
        uVar17 = SUB84(dVar23,0);
        uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
        dVar25 = *(double *)&(__return_storage_ptr__->Min).field0_0x0;
        if (dVar25 <= dVar23) {
          uVar17 = SUB84(dVar25,0);
          uVar19 = (undefined4)((ulonglong)dVar25 >> 0x20);
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar19,uVar17);
        dVar23 = *(double *)(pFVar4 + lVar14 + 0x48);
        uVar17 = SUB84(dVar23,0);
        uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
        dVar25 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8);
        if (dVar25 <= dVar23) {
          uVar17 = SUB84(dVar25,0);
          uVar19 = (undefined4)((ulonglong)dVar25 >> 0x20);
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar19,uVar17);
        dVar23 = *(double *)(pFVar4 + lVar14 + 0x50);
        uVar17 = SUB84(dVar23,0);
        uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
        dVar25 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10);
        if (dVar25 <= dVar23) {
          uVar17 = SUB84(dVar25,0);
          uVar19 = (undefined4)((ulonglong)dVar25 >> 0x20);
        }
        dVar23 = *(double *)&(__return_storage_ptr__->Max).field0_0x0;
        uVar18 = SUB84(dVar23,0);
        uVar20 = (undefined4)((ulonglong)dVar23 >> 0x20);
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar19,uVar17);
        dVar25 = *(double *)(pFVar4 + lVar14 + 0x40);
        if (dVar23 <= dVar25) {
          uVar18 = SUB84(dVar25,0);
          uVar20 = (undefined4)((ulonglong)dVar25 >> 0x20);
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar20,uVar18);
        dVar23 = *(double *)(pFVar4 + lVar14 + 0x48);
        uVar17 = SUB84(dVar23,0);
        uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
        dVar25 = *pdVar15;
        if (dVar23 <= dVar25) {
          uVar17 = SUB84(dVar25,0);
          uVar19 = (undefined4)((ulonglong)dVar25 >> 0x20);
        }
        *pdVar15 = (double)CONCAT44(uVar19,uVar17);
        dVar23 = *(double *)(pFVar4 + lVar14 + 0x50);
        uVar17 = SUB84(dVar23,0);
        uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
        dVar25 = *pdVar13;
        if (dVar23 <= dVar25) {
          uVar17 = SUB84(dVar25,0);
          uVar19 = (undefined4)((ulonglong)dVar25 >> 0x20);
        }
        *pdVar13 = (double)CONCAT44(uVar19,uVar17);
      }
      dVar23 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
      uVar16 = uVar16 + 1;
      dVar25 = *pdVar15;
      uVar17 = SUB84(dVar25,0);
      uVar19 = (undefined4)((ulonglong)dVar25 >> 0x20);
      dVar26 = (__return_storage_ptr__->Min).field0_0x0._s_0.X;
      if (*(double *)(pFVar4 + lVar14 + 0x58) <= dVar26) {
        dVar26 = *(double *)(pFVar4 + lVar14 + 0x58);
      }
      dVar1 = *(double *)&(__return_storage_ptr__->Max).field0_0x0;
      uVar18 = SUB84(dVar1,0);
      uVar20 = (undefined4)((ulonglong)dVar1 >> 0x20);
      (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar26;
      if (*(double *)(pFVar4 + lVar14 + 0x60) <= dVar23) {
        dVar23 = *(double *)(pFVar4 + lVar14 + 0x60);
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar23;
      dVar2 = (__return_storage_ptr__->Min).field0_0x0._s_0.Z;
      dVar24 = *(double *)(pFVar4 + lVar14 + 0x68);
      if (dVar2 <= *(double *)(pFVar4 + lVar14 + 0x68)) {
        dVar24 = dVar2;
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar24;
      dVar2 = *(double *)(pFVar4 + lVar14 + 0x58);
      if (dVar1 <= dVar2) {
        uVar18 = SUB84(dVar2,0);
        uVar20 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar20,uVar18);
      dVar1 = *(double *)(pFVar4 + lVar14 + 0x60);
      if (dVar25 <= dVar1) {
        uVar17 = SUB84(dVar1,0);
        uVar19 = (undefined4)((ulonglong)dVar1 >> 0x20);
      }
      *pdVar15 = (double)CONCAT44(uVar19,uVar17);
      dVar25 = *(double *)(pFVar4 + lVar14 + 0x68);
      uVar21 = SUB84(dVar25,0);
      uVar22 = (undefined4)((ulonglong)dVar25 >> 0x20);
      dVar1 = *pdVar13;
      if (dVar25 <= dVar1) {
        uVar21 = SUB84(dVar1,0);
        uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
      }
      *pdVar13 = (double)CONCAT44(uVar22,uVar21);
      if (*(double *)(pFVar4 + lVar14 + 0x70) <= dVar26) {
        dVar26 = *(double *)(pFVar4 + lVar14 + 0x70);
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar26;
      dVar25 = *(double *)(pFVar4 + lVar14 + 0x78);
      if (dVar23 <= *(double *)(pFVar4 + lVar14 + 0x78)) {
        dVar25 = dVar23;
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar25;
      dVar23 = *(double *)(pFVar4 + lVar14 + 0x80);
      if (dVar24 <= *(double *)(pFVar4 + lVar14 + 0x80)) {
        dVar23 = dVar24;
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar23;
      dVar1 = *(double *)(pFVar4 + lVar14 + 0x70);
      if ((double)CONCAT44(uVar20,uVar18) <= dVar1) {
        uVar18 = SUB84(dVar1,0);
        uVar20 = (undefined4)((ulonglong)dVar1 >> 0x20);
      }
      (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar20,uVar18);
      dVar1 = *(double *)(pFVar4 + lVar14 + 0x78);
      if ((double)CONCAT44(uVar19,uVar17) <= dVar1) {
        uVar17 = SUB84(dVar1,0);
        uVar19 = (undefined4)((ulonglong)dVar1 >> 0x20);
      }
      *pdVar15 = (double)CONCAT44(uVar19,uVar17);
      dVar1 = *(double *)(pFVar4 + lVar14 + 0x80);
      if ((double)CONCAT44(uVar22,uVar21) <= dVar1) {
        uVar21 = SUB84(dVar1,0);
        uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
      }
      *pdVar13 = (double)CONCAT44(uVar22,uVar21);
      if (*(double *)(pFVar4 + lVar14 + 0x88) <= dVar26) {
        dVar26 = *(double *)(pFVar4 + lVar14 + 0x88);
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar26;
      if (*(double *)(pFVar4 + lVar14 + 0x90) <= dVar25) {
        dVar25 = *(double *)(pFVar4 + lVar14 + 0x90);
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar25;
      dVar25 = *(double *)(pFVar4 + lVar14 + 0x98);
      uVar17 = SUB84(dVar25,0);
      uVar19 = (undefined4)((ulonglong)dVar25 >> 0x20);
      if (dVar23 <= dVar25) {
        uVar17 = SUB84(dVar23,0);
        uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar19,uVar17);
      dVar23 = *(double *)(pFVar4 + lVar14 + 0x88);
      if ((double)CONCAT44(uVar20,uVar18) <= dVar23) {
        uVar18 = SUB84(dVar23,0);
        uVar20 = (undefined4)((ulonglong)dVar23 >> 0x20);
      }
      dVar23 = *pdVar15;
      uVar17 = SUB84(dVar23,0);
      uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
      (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar20,uVar18);
      dVar25 = *(double *)(pFVar4 + lVar14 + 0x90);
      if (dVar23 <= dVar25) {
        uVar17 = SUB84(dVar25,0);
        uVar19 = (undefined4)((ulonglong)dVar25 >> 0x20);
      }
      *pdVar15 = (double)CONCAT44(uVar19,uVar17);
      dVar23 = *(double *)(pFVar4 + lVar14 + 0x98);
      if ((double)CONCAT44(uVar22,uVar21) <= dVar23) {
        uVar21 = SUB84(dVar23,0);
        uVar22 = (undefined4)((ulonglong)dVar23 >> 0x20);
      }
      lVar14 = lVar14 + 0xa0;
      *pdVar13 = (double)CONCAT44(uVar22,uVar21);
    } while ((int)uVar16 < (this->SegmentLinks).ArrayNum);
  }
  pTVar11 = UE::Math::TTransform<double>::ToMatrixWithScale
                      ((TTransform<double> *)(this->_padding_ + 0x1f0),&local_d8);
  UE::Math::TBox<double>::TransformBy
            (__return_storage_ptr__,(TBox<double> *)&local_118._s_0,pTVar11);
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = local_118._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = local_118._s_0.Y;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = local_118._s_0.Z;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dStack_100;
  pdVar13 = &(__return_storage_ptr__->Max).field0_0x0._s_0.Y;
  *(undefined4 *)pdVar13 = local_f8;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0xc) = uStack_f4;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x10) = uStack_f0;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x14) = uStack_ec;
  __return_storage_ptr__->IsValid = (undefined1)local_e8;
  __return_storage_ptr__->Pad[0] = local_e8._1_1_;
  __return_storage_ptr__->Pad[1] = local_e8._2_1_;
  __return_storage_ptr__->Pad[2] = local_e8._3_1_;
  __return_storage_ptr__->Pad[3] = local_e8._4_1_;
  __return_storage_ptr__->Pad[4] = local_e8._5_1_;
  __return_storage_ptr__->Pad[5] = local_e8._6_1_;
  __return_storage_ptr__->Pad[6] = local_e8._7_1_;
  pUVar5 = (this->SmartLinkComp).field0_0x0.DebugPtr;
  if ((pUVar5 != (UNavLinkCustomComponent *)0x0) &&
     (cVar8 = (**(code **)(pUVar5->_padding_ + 0x4e0))(), cVar8 != '\0')) {
    pTVar12 = UNavLinkCustomComponent::GetStartPoint
                        ((this->SmartLinkComp).field0_0x0.DebugPtr,&local_148);
    if (__return_storage_ptr__->IsValid == '\0') {
      dVar23 = (pTVar12->field0_0x0)._s_0.Y;
      (__return_storage_ptr__->Max).field0_0x0._s_0.X = (pTVar12->field0_0x0)._s_0.X;
      (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar23;
      dVar23 = (pTVar12->field0_0x0)._s_0.Z;
      (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar23;
      dVar25 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
      dVar26 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
      __return_storage_ptr__->IsValid = '\x01';
      (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar25;
      (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar26;
      (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar23;
    }
    else {
      dVar23 = *(double *)&(__return_storage_ptr__->Min).field0_0x0;
      uVar17 = SUB84(dVar23,0);
      uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
      dVar25 = *(double *)&pTVar12->field0_0x0;
      if (dVar25 <= dVar23) {
        uVar17 = SUB84(dVar25,0);
        uVar19 = (undefined4)((ulonglong)dVar25 >> 0x20);
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar19,uVar17);
      dVar23 = *(double *)((longlong)&pTVar12->field0_0x0 + 8);
      uVar17 = SUB84(dVar23,0);
      uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
      dVar25 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8);
      if (dVar25 <= dVar23) {
        uVar17 = SUB84(dVar25,0);
        uVar19 = (undefined4)((ulonglong)dVar25 >> 0x20);
      }
      dVar23 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10);
      uVar18 = SUB84(dVar23,0);
      uVar20 = (undefined4)((ulonglong)dVar23 >> 0x20);
      (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar19,uVar17);
      dVar25 = *(double *)((longlong)&pTVar12->field0_0x0 + 0x10);
      if (dVar25 <= dVar23) {
        uVar18 = SUB84(dVar25,0);
        uVar20 = (undefined4)((ulonglong)dVar25 >> 0x20);
      }
      dVar23 = *(double *)&(__return_storage_ptr__->Max).field0_0x0;
      uVar17 = SUB84(dVar23,0);
      uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
      (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar20,uVar18);
      dVar25 = *(double *)&pTVar12->field0_0x0;
      if (dVar23 <= dVar25) {
        uVar17 = SUB84(dVar25,0);
        uVar19 = (undefined4)((ulonglong)dVar25 >> 0x20);
      }
      (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar19,uVar17);
      dVar23 = *(double *)((longlong)&pTVar12->field0_0x0 + 8);
      uVar17 = SUB84(dVar23,0);
      uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
      dVar25 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x10);
      uVar18 = SUB84(dVar25,0);
      uVar20 = (undefined4)((ulonglong)dVar25 >> 0x20);
      dVar26 = *pdVar13;
      if (dVar23 <= dVar26) {
        uVar17 = SUB84(dVar26,0);
        uVar19 = (undefined4)((ulonglong)dVar26 >> 0x20);
      }
      *pdVar13 = (double)CONCAT44(uVar19,uVar17);
      dVar23 = *(double *)((longlong)&pTVar12->field0_0x0 + 0x10);
      if (dVar25 <= dVar23) {
        uVar18 = SUB84(dVar23,0);
        uVar20 = (undefined4)((ulonglong)dVar23 >> 0x20);
      }
      (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (double)CONCAT44(uVar20,uVar18);
    }
    pTVar12 = UNavLinkCustomComponent::GetEndPoint
                        ((this->SmartLinkComp).field0_0x0.DebugPtr,&local_130);
    if (__return_storage_ptr__->IsValid == '\0') {
      dVar23 = (pTVar12->field0_0x0)._s_0.Y;
      (__return_storage_ptr__->Max).field0_0x0._s_0.X = (pTVar12->field0_0x0)._s_0.X;
      (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar23;
      dVar23 = (pTVar12->field0_0x0)._s_0.Z;
      (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar23;
      dVar25 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
      dVar26 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
      __return_storage_ptr__->IsValid = '\x01';
      (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar25;
      (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar26;
      (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar23;
    }
    else {
      dVar23 = *(double *)&(__return_storage_ptr__->Min).field0_0x0;
      uVar17 = SUB84(dVar23,0);
      uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
      dVar25 = *(double *)&pTVar12->field0_0x0;
      if (dVar25 <= dVar23) {
        uVar17 = SUB84(dVar25,0);
        uVar19 = (undefined4)((ulonglong)dVar25 >> 0x20);
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar19,uVar17);
      dVar23 = *(double *)((longlong)&pTVar12->field0_0x0 + 8);
      uVar17 = SUB84(dVar23,0);
      uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
      dVar25 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8);
      if (dVar25 <= dVar23) {
        uVar17 = SUB84(dVar25,0);
        uVar19 = (undefined4)((ulonglong)dVar25 >> 0x20);
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar19,uVar17);
      dVar23 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10);
      uVar17 = SUB84(dVar23,0);
      uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
      dVar25 = *(double *)((longlong)&pTVar12->field0_0x0 + 0x10);
      if (dVar25 <= dVar23) {
        uVar17 = SUB84(dVar25,0);
        uVar19 = (undefined4)((ulonglong)dVar25 >> 0x20);
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar19,uVar17);
      dVar23 = *(double *)&pTVar12->field0_0x0;
      uVar17 = SUB84(dVar23,0);
      uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
      dVar25 = *(double *)&(__return_storage_ptr__->Max).field0_0x0;
      if (dVar23 <= dVar25) {
        uVar17 = SUB84(dVar25,0);
        uVar19 = (undefined4)((ulonglong)dVar25 >> 0x20);
      }
      (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar19,uVar17);
      dVar23 = *(double *)((longlong)&pTVar12->field0_0x0 + 8);
      uVar17 = SUB84(dVar23,0);
      uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
      dVar25 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x10);
      uVar18 = SUB84(dVar25,0);
      uVar20 = (undefined4)((ulonglong)dVar25 >> 0x20);
      dVar26 = *pdVar13;
      if (dVar23 <= dVar26) {
        uVar17 = SUB84(dVar26,0);
        uVar19 = (undefined4)((ulonglong)dVar26 >> 0x20);
      }
      *pdVar13 = (double)CONCAT44(uVar19,uVar17);
      dVar23 = *(double *)((longlong)&pTVar12->field0_0x0 + 0x10);
      if (dVar25 <= dVar23) {
        uVar18 = SUB84(dVar23,0);
        uVar20 = (undefined4)((ulonglong)dVar23 >> 0x20);
      }
      (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (double)CONCAT44(uVar20,uVar18);
    }
  }
  return __return_storage_ptr__;
}

// GetNavigationBounds @ 146fb27e0

TBox<double> * __thiscall
ANavLinkProxy::GetNavigationBounds(ANavLinkProxy *this,TBox<double> *__return_storage_ptr__)

{
  (**(code **)(this[-1]._padding_ + 0x670))(&this[-1]._padding_,__return_storage_ptr__,0,0);
  return __return_storage_ptr__;
}

// GetNavigationData @ 146fb2810

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
ANavLinkProxy::GetNavigationData(ANavLinkProxy *this,FNavigationRelevantData *param_1)

{
  NavigationHelper::ProcessNavLinkAndAppend
            (&param_1->Modifiers,(AActor *)&this[-1]._padding_,
             (TArray<FNavigationLink,TSizedDefaultAllocator<32>_> *)&this->_padding_);
  NavigationHelper::ProcessNavLinkSegmentAndAppend
            (&param_1->Modifiers,(AActor *)&this[-1]._padding_,
             (TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_> *)&this->_padding_);
  return;
}

// GetNavigationLinksArray @ 146fb2870

bool __thiscall
ANavLinkProxy::GetNavigationLinksArray
          (ANavLinkProxy *this,TArray<FNavigationLink,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  uint uVar5;
  undefined4 uVar6;
  FNavAgentSelector FVar7;
  FNavigationLinkBase_u_36 FVar8;
  undefined7 uVar9;
  bool bVar10;
  undefined1 uVar11;
  char cVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  FNavigationLinkBase *pFVar16;
  FNavigationLinkBase *pFVar17;
  int *piVar18;
  undefined1 local_98 [112];
  
  if (param_1 == (TArray<FNavigationLink,TSizedDefaultAllocator<32>_> *)&this->_padding_) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)this != (void*)&Source",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x96e,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      uVar11 = (*pcVar3)();
      return (bool)uVar11;
    }
  }
  iVar15 = (int)this->_padding_;
  piVar1 = &param_1->ArrayMax;
  if (iVar15 != 0) {
    iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x70,8,iVar15,&param_1->AllocatorInstance,&param_1->ArrayNum,piVar1);
    ConstructItems<FNavigationLink,FNavigationLink,int>
              ((param_1->AllocatorInstance).Data + (longlong)iVar14 * 0x70,
               (FNavigationLink *)this->_padding_,iVar15);
  }
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    cVar12 = (**(code **)(*(longlong *)this->_padding_ + 0x4e0))();
    if (cVar12 != '\0') {
      bVar10 = true;
      pFVar16 = (FNavigationLinkBase *)
                (**(code **)(*(longlong *)this->_padding_ + 0x500))
                          ((longlong *)this->_padding_,local_98);
      pFVar17 = (FNavigationLinkBase *)(param_1->AllocatorInstance).Data;
      if ((pFVar17 <= pFVar16) &&
         (pFVar16 < (FNavigationLinkBase *)((longlong)pFVar17 + (longlong)*piVar1 * 0x70))) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar13) {
          pcVar3 = (code *)swi(3);
          uVar11 = (*pcVar3)();
          return (bool)uVar11;
        }
      }
      piVar18 = &param_1->ArrayNum;
      iVar15 = *piVar18;
      if (iVar15 == *piVar1) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x870,&param_1->AllocatorInstance,piVar1);
        *piVar18 = iVar15;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      *piVar18 = iVar15 + 1;
      pFVar17 = (FNavigationLinkBase *)(pFVar2 + (longlong)iVar15 * 0x70);
      FNavigationLinkBase::FNavigationLinkBase(pFVar17,pFVar16);
      fVar4 = pFVar16[1].MaxFallDownLength;
      uVar5 = pFVar16[1].UserId;
      uVar6 = *(undefined4 *)&pFVar16[1].field_0xc;
      pFVar17[1].LeftProjectHeight = pFVar16[1].LeftProjectHeight;
      pFVar17[1].MaxFallDownLength = fVar4;
      pFVar17[1].UserId = uVar5;
      *(undefined4 *)&pFVar17[1].field_0xc = uVar6;
      pFVar17[1].NavLinkId.Id = pFVar16[1].NavLinkId.Id;
      fVar4 = pFVar16[1].SnapHeight;
      FVar7.field0_0x0 = pFVar16[1].SupportedAgents.field0_0x0;
      FVar8 = pFVar16[1].field7_0x24;
      pFVar17[1].SnapRadius = pFVar16[1].SnapRadius;
      pFVar17[1].SnapHeight = fVar4;
      pFVar17[1].SupportedAgents = (FNavAgentSelector)FVar7.field0_0x0;
      pFVar17[1].field7_0x24 = FVar8;
      uVar9 = *(undefined7 *)&pFVar16[1].field_0x29;
      pFVar17[1].Direction = (TEnumAsByte<ENavLinkDirection::Type>)pFVar16[1].Direction.Value;
      *(undefined7 *)&pFVar17[1].field_0x29 = uVar9;
      goto LAB_146fb2a1c;
    }
  }
  bVar10 = false;
LAB_146fb2a1c:
  if (param_2 == (TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_> *)&this->_padding_) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)this != (void*)&Source",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x96e,L"");
    if (bVar13) {
      pcVar3 = (code *)swi(3);
      uVar11 = (*pcVar3)();
      return (bool)uVar11;
    }
  }
  iVar15 = (int)this->_padding_;
  if (iVar15 != 0) {
    iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0xa0,8,iVar15,&param_2->AllocatorInstance,&param_2->ArrayNum,
                        &param_2->ArrayMax);
    ConstructItems<FNavigationSegmentLink,FNavigationSegmentLink,int>
              ((param_2->AllocatorInstance).Data + (longlong)iVar14 * 0xa0,
               (FNavigationSegmentLink *)this->_padding_,iVar15);
  }
  if ((((int)this->_padding_ < 1) && ((int)this->_padding_ < 1)) && (!bVar10)) {
    return false;
  }
  return true;
}

// GetNavigationLinksClasses @ 146fb2b00

bool __thiscall
ANavLinkProxy::GetNavigationLinksClasses
          (ANavLinkProxy *this,
          TArray<TSubclassOf<UNavLinkDefinition>,TSizedDefaultAllocator<32>_> *param_1)

{
  return false;
}

// GetPrivateStaticClass @ 146fb34a0

UClass * __cdecl ANavLinkProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANavLinkProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"NavLinkProxy",
               &Z_Registration_Info_UClass_ANavLinkProxy.InnerSingleton,
               StaticRegisterNativesANavLinkProxy,0x318,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ANavLinkProxy>,
               InternalVTableHelperCtorCaller<ANavLinkProxy>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANavLinkProxy.InnerSingleton;
}

// HasMovingAgents @ 146fb7000

bool __thiscall ANavLinkProxy::HasMovingAgents(ANavLinkProxy *this)

{
  bool bVar1;
  
  bVar1 = UNavLinkCustomComponent::HasMovingAgents((this->SmartLinkComp).field0_0x0.DebugPtr);
  return bVar1;
}

// IsNavigationRelevant @ 146fb9af0

bool __thiscall ANavLinkProxy::IsNavigationRelevant(ANavLinkProxy *this)

{
  if ((((int)this->_padding_ < 1) && ((int)this->_padding_ < 1)) && ((char)this->_padding_ == '\0'))
  {
    return false;
  }
  return true;
}

// IsSmartLinkEnabled @ 146fba150

bool __thiscall ANavLinkProxy::IsSmartLinkEnabled(ANavLinkProxy *this)

{
  return ((this->SmartLinkComp).field0_0x0.DebugPtr)->bLinkEnabled;
}

// NotifySmartLinkReached @ 146fbc920

void __thiscall
ANavLinkProxy::NotifySmartLinkReached
          (ANavLinkProxy *this,UNavLinkCustomComponent *param_1,UObject *param_2,
          TVector<double> *param_3)

{
  int iVar1;
  UClass *pUVar2;
  UFunction *pUVar3;
  UObject *pUVar4;
  UObject *local_28;
  double local_20;
  double dStack_18;
  double local_10;
  
  if (param_2 != (UObject *)0x0) {
    pUVar2 = UPathFollowingComponent::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      pUVar4 = *(UObject **)&param_2[4].field_0x8;
      if (pUVar4 != (UObject *)0x0) {
        pUVar2 = Z_Construct_UClass_AController_NoRegister();
        iVar1 = (int)pUVar2->_padding_;
        if ((((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar2->_padding_)) &&
            (pUVar4 = *(UObject **)&pUVar4[0x13].field_0x18,
            UE::GC::GIsIncrementalReachabilityPending != false)) && (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
      }
      local_20 = (param_3->field0_0x0)._s_0.X;
      dStack_18 = (param_3->field0_0x0)._s_0.Y;
      local_10 = (param_3->field0_0x0)._s_0.Z;
      local_28 = pUVar4;
      pUVar3 = UObject::FindFunctionChecked
                         ((UObject *)this,NAME_ANavLinkProxy_ReceiveSmartLinkReached);
      (**(code **)(this->_padding_ + 0x260))(this,pUVar3,&local_28);
      local_20 = (param_3->field0_0x0)._s_0.X;
      dStack_18 = (param_3->field0_0x0)._s_0.Y;
      local_10 = (param_3->field0_0x0)._s_0.Z;
      local_28 = pUVar4;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSmartLinkReached,
                 &local_28);
    }
  }
  return;
}

// PostInitProperties @ 146fc2ac0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ANavLinkProxy::PostInitProperties(ANavLinkProxy *this)

{
  UObject::PostInitProperties((UObject *)this);
  *(byte *)&this->_padding_ = *(byte *)((longlong)&this->_padding_ + 3) >> 3 & 1;
  if ((this->_padding_ & 0x10) == 0) {
    AActor::ResetOwnedComponents((AActor *)this);
    return;
  }
  return;
}

// PostLoad @ 146fc2c60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ANavLinkProxy::PostLoad(ANavLinkProxy *this)

{
  int iVar1;
  FNavigationLinkBase *this_00;
  FNavigationLinkBase *pFVar2;
  undefined1 local_res8 [8];
  
  AActor::PostLoad((AActor *)this);
  iVar1 = (this->PointLinks).ArrayNum;
  this_00 = (FNavigationLinkBase *)(this->PointLinks).AllocatorInstance.Data;
  pFVar2 = (FNavigationLinkBase *)((longlong)this_00 + (longlong)iVar1 * 0x70);
  while( true ) {
    if ((this->PointLinks).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNavigationLink,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_00 == pFVar2) break;
    FNavigationLinkBase::InitializeAreaClass(this_00,false);
    this_00 = (FNavigationLinkBase *)&this_00[1].AreaClass;
  }
  return;
}

// PostRegisterAllComponents @ 146fc3990

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ANavLinkProxy::PostRegisterAllComponents(ANavLinkProxy *this)

{
  UNavLinkCustomComponent *this_00;
  
  this_00 = (this->SmartLinkComp).field0_0x0.DebugPtr;
  if (this_00 != (UNavLinkCustomComponent *)0x0) {
    UNavRelevantComponent::SetNavigationRelevancy
              ((UNavRelevantComponent *)this_00,this->bSmartLinkIsRelevant);
  }
  AActor::PostRegisterAllComponents((AActor *)this);
  return;
}

// ReceiveSmartLinkReached @ 146fc6af0

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
ANavLinkProxy::ReceiveSmartLinkReached(ANavLinkProxy *this,AActor *param_1,TVector<double> *param_2)

{
  UFunction *pUVar1;
  AActor *local_28;
  double local_20;
  double dStack_18;
  double local_10;
  
  local_20 = (param_2->field0_0x0)._s_0.X;
  dStack_18 = (param_2->field0_0x0)._s_0.Y;
  local_10 = (param_2->field0_0x0)._s_0.Z;
  local_28 = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ANavLinkProxy_ReceiveSmartLinkReached);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_28);
  return;
}

// ResumePathFollowing @ 146fce250

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ANavLinkProxy::ResumePathFollowing(ANavLinkProxy *this,AActor *param_1)

{
  int iVar1;
  code *pcVar2;
  AActor *this_00;
  UNavLinkCustomComponent *pUVar3;
  UPathFollowingComponent *pUVar4;
  UClass *pUVar5;
  longlong *plVar6;
  UClass *local_res10;
  
  if (param_1 != (AActor *)0x0) {
    pcVar2 = *(code **)(param_1->_padding_ + 0x738);
    local_res10 = UPathFollowingComponent::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10);
    }
    pUVar4 = (UPathFollowingComponent *)(*pcVar2)(param_1,&local_res10);
    if (pUVar4 == (UPathFollowingComponent *)0x0) {
      pUVar5 = Z_Construct_UClass_APawn_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if (*(int *)(param_1->_padding_ + 0x38) < iVar1) {
        return;
      }
      if ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_) {
        return;
      }
      this_00 = (AActor *)param_1[1].PrimaryActorTick._padding_;
      if (this_00 == (AActor *)0x0) {
        return;
      }
      pUVar4 = AActor::FindComponentByClass<UPathFollowingComponent>(this_00);
      if (pUVar4 == (UPathFollowingComponent *)0x0) {
        return;
      }
    }
    pUVar3 = (this->SmartLinkComp).field0_0x0.DebugPtr;
    plVar6 = &pUVar3->_padding_;
    if (pUVar3 == (UNavLinkCustomComponent *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    (**(code **)(pUVar4->_padding_ + 0x598))(pUVar4,plVar6);
  }
  return;
}

// SetSmartLinkEnabled @ 146fd2600

void __thiscall ANavLinkProxy::SetSmartLinkEnabled(ANavLinkProxy *this,bool param_1)

{
  UNavLinkCustomComponent::SetEnabled((this->SmartLinkComp).field0_0x0.DebugPtr,param_1);
  return;
}

// StaticRegisterNativesANavLinkProxy @ 146fd3420

void __cdecl ANavLinkProxy::StaticRegisterNativesANavLinkProxy(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_ANavLinkProxy_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// _getUObject @ 146fe4050

UObject * __thiscall ANavLinkProxy::_getUObject(ANavLinkProxy *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{8}' @ 146fe4060

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl ANavLinkProxy::_getUObject`adjustor{8}'
   (void)const __ptr64 */

UObject * __thiscall ANavLinkProxy::_getUObject_adjustor_8__(ANavLinkProxy *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((ANavLinkProxy *)&this[-1].OnSmartLinkReached.field_0x10);
  return (UObject *)pUVar1;
}

// execHasMovingAgents @ 146fe5bf0

void __cdecl ANavLinkProxy::execHasMovingAgents(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = UNavLinkCustomComponent::HasMovingAgents
                    (*(UNavLinkCustomComponent **)&param_1[0x12].field_0x20);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsSmartLinkEnabled @ 146fe5e90

void __cdecl ANavLinkProxy::execIsSmartLinkEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = *(byte *)(*(longlong *)&param_1[0x12].field_0x20 + 0x17c) & 1;
  return;
}

// execResumePathFollowing @ 146fe7eb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ANavLinkProxy::execResumePathFollowing(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  longlong *plVar4;
  UPathFollowingComponent *pUVar5;
  UClass *pUVar6;
  longlong lVar7;
  longlong *local_res10 [2];
  UClass *local_res20;
  
  local_res10[0] = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  plVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == (longlong *)0x0) {
    return;
  }
  pcVar3 = *(code **)(*local_res10[0] + 0x738);
  local_res20 = UPathFollowingComponent::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  pUVar5 = (UPathFollowingComponent *)(*pcVar3)(plVar4,&local_res20);
  if (pUVar5 == (UPathFollowingComponent *)0x0) {
    pUVar6 = Z_Construct_UClass_APawn_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if (*(int *)(plVar4[2] + 0x38) < iVar1) {
      return;
    }
    if ((longlong *)*(undefined1 **)(*(longlong *)(plVar4[2] + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_) {
      return;
    }
    if ((AActor *)plVar4[0x5e] == (AActor *)0x0) {
      return;
    }
    pUVar5 = AActor::FindComponentByClass<UPathFollowingComponent>((AActor *)plVar4[0x5e]);
    if (pUVar5 == (UPathFollowingComponent *)0x0) {
      return;
    }
  }
  lVar7 = *(longlong *)&param_1[0x12].field_0x20 + 0x110;
  if (*(longlong *)&param_1[0x12].field_0x20 == 0) {
    lVar7 = 0;
  }
  (**(code **)(pUVar5->_padding_ + 0x598))(pUVar5,lVar7);
  return;
}

// execSetSmartLinkEnabled @ 146fe8370

void __cdecl ANavLinkProxy::execSetSmartLinkEnabled(UObject *param_1,FFrame *param_2,void *param_3)

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
  UNavLinkCustomComponent::SetEnabled
            (*(UNavLinkCustomComponent **)&param_1[0x12].field_0x20,local_res8[0] != 0);
  return;
}

