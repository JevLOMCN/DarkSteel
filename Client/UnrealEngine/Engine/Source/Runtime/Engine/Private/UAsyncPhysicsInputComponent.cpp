// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 21

// StaticClass @ 1481b9eb0

UClass * __cdecl UAsyncPhysicsInputComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncPhysicsInputComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AsyncPhysicsInputComponent",
               &Z_Registration_Info_UClass_UAsyncPhysicsInputComponent.InnerSingleton,
               StaticRegisterNativesUAsyncPhysicsInputComponent,0xe8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UAsyncPhysicsInputComponent>,
               InternalVTableHelperCtorCaller<UAsyncPhysicsInputComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncPhysicsInputComponent.InnerSingleton;
}

// UAsyncPhysicsInputComponent @ 1481c8450

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAsyncPhysicsInputComponent * __thiscall
UAsyncPhysicsInputComponent::UAsyncPhysicsInputComponent
          (UAsyncPhysicsInputComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->DataClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->BufferedData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BufferedData).ArrayNum = 0;
  (this->BufferedData).ArrayMax = 0;
  (this->DataToConsume).field0_0x0.DebugPtr = (UAsyncPhysicsData *)0x0;
  (this->DataToWrite).field0_0x0.DebugPtr = (UAsyncPhysicsData *)0x0;
  return this;
}

// UAsyncPhysicsInputComponent @ 1481c84c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAsyncPhysicsInputComponent * __thiscall
UAsyncPhysicsInputComponent::UAsyncPhysicsInputComponent(UAsyncPhysicsInputComponent *this)

{
  byte *pbVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  UActorComponent::UActorComponent((UActorComponent *)this,pFVar2);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 8;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->DataClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->BufferedData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BufferedData).ArrayNum = 0;
  (this->BufferedData).ArrayMax = 0;
  (this->DataToConsume).field0_0x0.DebugPtr = (UAsyncPhysicsData *)0x0;
  (this->DataToWrite).field0_0x0.DebugPtr = (UAsyncPhysicsData *)0x0;
  UActorComponent::SetIsReplicatedByDefault((UActorComponent *)this,true);
  return this;
}

// ~UAsyncPhysicsInputComponent @ 1481c9620

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
UAsyncPhysicsInputComponent::~UAsyncPhysicsInputComponent(UAsyncPhysicsInputComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->BufferedData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// AsyncPhysicsTickComponent @ 1481d4940

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
UAsyncPhysicsInputComponent::AsyncPhysicsTickComponent
          (UAsyncPhysicsInputComponent *this,float param_1,float param_2)

{
  int *piVar1;
  TArray<TObjectPtr<UAsyncPhysicsData>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  UClass *pUVar4;
  UAsyncPhysicsData *pUVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_UAsyncPhysicsInputComponent::AsyncPhysicsTickComponent(float,float)_::_2_::FStat_AsyncPhysicsInputComponent_AsyncPhysicsTick>
  FVar17;
  UClass *pUVar18;
  UWorld *pUVar19;
  APlayerController *pAVar20;
  longlong lVar21;
  FName FVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  undefined1 local_res20 [8];
  FColor_u_0 local_98;
  uint local_94;
  int local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_AsyncPhysicsInputComponent_AsyncPhysicsTick ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UAsyncPhysicsInputComponent::AsyncPhysicsTickComponent(float,float)_::_2_::FStat_AsyncPhysicsInputComponent_AsyncPhysicsTick>
         )0x0) {
      pFVar16 = ::FName::FName(&local_78,"AsyncPhysicsInputComponent_AsyncPhysicsTick");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_AsyncPhysicsInputComponent_AsyncPhysicsTick,
                 *pFVar16,L"AsyncPhysicsInputComponent_AsyncPhysicsTick","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar17 = StatPtr_AsyncPhysicsInputComponent_AsyncPhysicsTick;
  if (StatPtr_AsyncPhysicsInputComponent_AsyncPhysicsTick ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UAsyncPhysicsInputComponent::AsyncPhysicsTickComponent(float,float)_::_2_::FStat_AsyncPhysicsInputComponent_AsyncPhysicsTick>
       )0x0) {
    pFVar16 = ::FName::FName(&local_70,"AsyncPhysicsInputComponent_AsyncPhysicsTick");
    FVar17 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UAsyncPhysicsInputComponent::AsyncPhysicsTickComponent(float,float)_::_2_::FStat_AsyncPhysicsInputComponent_AsyncPhysicsTick>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_AsyncPhysicsInputComponent_AsyncPhysicsTick,*pFVar16,
                          L"AsyncPhysicsInputComponent_AsyncPhysicsTick","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar17;
  bVar10 = false;
  bVar9 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  bVar12 = false;
  bVar11 = false;
  if ((FVar22.ComparisonIndex.Value.Value == 0) && (FVar22.Number == 0)) {
LAB_1481d4ae8:
    bVar10 = bVar12;
    bVar9 = bVar11;
    bVar11 = false;
    local_80 = local_68;
    FVar22 = local_68;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_98.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_98._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar10 = false;
      bVar9 = true;
      bVar12 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_88.ComparisonIndex.Value = FVar22.ComparisonIndex.Value.Value;
        local_88.Number = FVar22.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_88,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\AsyncPhysicsInputComponent.cpp"
                   ,0x7f);
        bVar10 = true;
        bVar9 = true;
        bVar12 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1481d4ae8;
    local_80 = FVar22;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar11 = true;
  }
  UActorComponent::ReceiveAsyncPhysicsTick((UActorComponent *)this,param_1,param_2);
  pUVar4 = (this->DataClass).Class.field0_0x0.DebugPtr;
  if ((pUVar4 != (UClass *)0x0) &&
     (pUVar18 = Z_Construct_UClass_UAsyncPhysicsData_NoRegister(), pUVar18 != (UClass *)0x0)) {
    iVar3 = (int)pUVar18->_padding_;
    if (((int)pUVar4->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar3 * 8) != &pUVar18->_padding_
       )) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if ((bVar12) && ((this->DataClass).Class.field0_0x0.DebugPtr != (UClass *)0x0))
    goto LAB_1481d4b6b;
  }
  local_res20[0] = 0;
  `UAsyncPhysicsInputComponent::AsyncPhysicsTickComponent'::__l2::<lambda_1>::operator()
            (local_res20);
LAB_1481d4b6b:
  pUVar19 = (UWorld *)this->_padding_;
  if (pUVar19 == (UWorld *)0x0) {
    pUVar19 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  local_90 = *(int *)(*(longlong *)(pUVar19->PhysicsScene->_padding_ + 0x240) + 0x38);
  (this->DataToConsume).field0_0x0.DebugPtr = (UAsyncPhysicsData *)0x0;
  uVar23 = (this->BufferedData).ArrayNum - 1;
  if (-1 < (int)uVar23) {
    pTVar2 = &this->BufferedData;
    lVar25 = (longlong)(int)uVar23;
    lVar21 = lVar25 * 8;
    do {
      iVar3 = local_90;
      local_94 = ~uVar23;
      uVar24 = local_94 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar23 < (this->BufferedData).ArrayNum) {
        uVar14 = uVar24;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pUVar5 = *(UAsyncPhysicsData **)((pTVar2->AllocatorInstance).Data + lVar21);
      iVar15 = pUVar5->ServerFrame;
      iVar7 = iVar15 - iVar3;
      if (iVar15 == iVar3) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar5 != (UAsyncPhysicsData *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        (this->DataToConsume).field0_0x0.DebugPtr = pUVar5;
        iVar15 = pUVar5->ServerFrame;
        iVar7 = iVar15 - iVar3;
      }
      bVar12 = SBORROW4(iVar15,iVar3) != iVar7 < 0;
      pAVar20 = GetPlayerController(this);
      if (((pAVar20 != (APlayerController *)0x0) &&
          (cVar13 = (**(code **)(pAVar20->_padding_ + 0x7f0))(pAVar20), cVar13 != '\0')) &&
         (InputCmdCVars::ForceInputDrop == 0)) {
        pUVar5->ReplicationRedundancy = pUVar5->ReplicationRedundancy + -1;
        bVar12 = pUVar5->ReplicationRedundancy < 1;
      }
      if (bVar12) {
        uVar14 = 0;
        if ((int)uVar23 < (this->BufferedData).ArrayNum) {
          uVar14 = uVar24;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar3 = (this->BufferedData).ArrayNum;
        iVar15 = local_94 + iVar3;
        pFVar6 = (pTVar2->AllocatorInstance).Data;
        if (1 < iVar15) {
          iVar15 = 1;
        }
        if (iVar15 != 0) {
          memmove(pFVar6 + lVar25 * 8,pFVar6 + (longlong)(iVar3 - iVar15) * 8,(longlong)iVar15 << 3)
          ;
        }
        piVar1 = &(this->BufferedData).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar2->AllocatorInstance,(this->BufferedData).ArrayNum,
                   &(this->BufferedData).ArrayMax);
      }
      lVar25 = lVar25 + -1;
      lVar21 = lVar21 + -8;
      uVar23 = uVar23 - 1;
      FVar22 = local_80;
    } while (-1 < (int)uVar23);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar22,CycleScopeEnd);
  }
  return;
}

// GetDataToConsume @ 1481f5490

UAsyncPhysicsData * __thiscall
UAsyncPhysicsInputComponent::GetDataToConsume(UAsyncPhysicsInputComponent *this)

{
  int iVar1;
  UAsyncPhysicsData *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  undefined1 local_res8 [8];
  
  pUVar5 = (this->DataClass).Class.field0_0x0.DebugPtr;
  if ((pUVar5 == (UClass *)0x0) ||
     (pUVar4 = Z_Construct_UClass_UAsyncPhysicsData_NoRegister(), pUVar4 == (UClass *)0x0)) {
LAB_1481f54e1:
    `UAsyncPhysicsInputComponent::GetDataToConsume'::__l2::<lambda_1>::operator()(local_res8);
  }
  else {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((!bVar3) || ((this->DataClass).Class.field0_0x0.DebugPtr == (UClass *)0x0))
    goto LAB_1481f54e1;
  }
  pUVar2 = (this->DataToConsume).field0_0x0.DebugPtr;
  if (pUVar2 != (UAsyncPhysicsData *)0x0) {
    return pUVar2;
  }
  pUVar5 = (this->DataClass).Class.field0_0x0.DebugPtr;
  if ((pUVar5 != (UClass *)0x0) &&
     (pUVar4 = Z_Construct_UClass_UAsyncPhysicsData_NoRegister(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar5 = (this->DataClass).Class.field0_0x0.DebugPtr;
      goto LAB_1481f553c;
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_1481f553c:
  if ((pUVar5->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar5);
  }
  return (UAsyncPhysicsData *)(pUVar5->ClassDefaultObject).field0_0x0.DebugPtr;
}

// GetDataToWrite @ 1481f5570

UAsyncPhysicsData * __thiscall
UAsyncPhysicsInputComponent::GetDataToWrite(UAsyncPhysicsInputComponent *this)

{
  return (this->DataToWrite).field0_0x0.DebugPtr;
}

// GetPlayerController @ 1481fdd90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APlayerController * __thiscall
UAsyncPhysicsInputComponent::GetPlayerController(UAsyncPhysicsInputComponent *this)

{
  int iVar1;
  APlayerController *pAVar2;
  longlong lVar3;
  UClass *pUVar4;
  
  pAVar2 = (APlayerController *)this->_padding_;
  if (pAVar2 != (APlayerController *)0x0) {
    pUVar4 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      return pAVar2;
    }
  }
  lVar3 = this->_padding_;
  if (lVar3 == 0) {
    return (APlayerController *)0x0;
  }
  pUVar4 = APawn::StaticClass();
  iVar1 = (int)pUVar4->_padding_;
  if (iVar1 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) {
    if ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_) {
      return (APlayerController *)0x0;
    }
    pAVar2 = *(APlayerController **)(lVar3 + 0x2f0);
    if (pAVar2 != (APlayerController *)0x0) {
      pUVar4 = Z_Construct_UClass_APlayerController_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        return pAVar2;
      }
    }
    return (APlayerController *)0x0;
  }
  return (APlayerController *)0x0;
}

// GetPrivateStaticClass @ 1481fdf10

UClass * __cdecl UAsyncPhysicsInputComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncPhysicsInputComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AsyncPhysicsInputComponent",
               &Z_Registration_Info_UClass_UAsyncPhysicsInputComponent.InnerSingleton,
               StaticRegisterNativesUAsyncPhysicsInputComponent,0xe8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UAsyncPhysicsInputComponent>,
               InternalVTableHelperCtorCaller<UAsyncPhysicsInputComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncPhysicsInputComponent.InnerSingleton;
}

// OnDispatchPhysicsTick @ 148208850

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UAsyncPhysicsInputComponent::OnDispatchPhysicsTick
          (UAsyncPhysicsInputComponent *this,int param_1,int param_2,int param_3)

{
  UObject *pUVar1;
  TObjectPtr<UAsyncPhysicsData>_u_0 *pTVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  UClass *pUVar7;
  APlayerController *pAVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  UAsyncPhysicsData *pUVar11;
  TObjectPtr<UAsyncPhysicsData>_u_0 TVar12;
  int iVar13;
  UClass *pUVar14;
  TArray<TObjectPtr<UAsyncPhysicsData>,TSizedDefaultAllocator<32>_> *pTVar15;
  undefined1 local_res8 [8];
  TObjectPtr<UAsyncPhysicsData>_u_0 local_48;
  FName local_40;
  undefined8 local_38;
  
  pUVar10 = (this->DataClass).Class.field0_0x0.DebugPtr;
  if ((pUVar10 != (UClass *)0x0) &&
     (pUVar7 = Z_Construct_UClass_UAsyncPhysicsData_NoRegister(), pUVar7 != (UClass *)0x0)) {
    iVar13 = (int)pUVar7->_padding_;
    if (((int)pUVar10->_padding_ < iVar13) ||
       ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar13 * 8) !=
        &pUVar7->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && ((this->DataClass).Class.field0_0x0.DebugPtr != (UClass *)0x0))
    goto LAB_1482088bc;
  }
  local_res8[0] = 0;
  `UAsyncPhysicsInputComponent::OnDispatchPhysicsTick'::__l2::<lambda_1>::operator()(local_res8);
LAB_1482088bc:
  if ((this->DataToWrite).field0_0x0.DebugPtr == (UAsyncPhysicsData *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1886031104448659267>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\AsyncPhysicsInputComponent.cpp"
                       ,0xbd,"DataToWrite != nullptr");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pAVar8 = GetPlayerController(this);
    if ((pAVar8 != (APlayerController *)0x0) &&
       (cVar5 = (**(code **)(pAVar8->_padding_ + 0x7f0))(pAVar8), cVar5 != '\0')) {
      pUVar10 = (this->DataClass).Class.field0_0x0.DebugPtr;
      TVar12 = (TObjectPtr<UAsyncPhysicsData>_u_0)(this->DataToWrite).field0_0x0.DebugPtr;
      pUVar14 = (UClass *)0x0;
      local_40.ComparisonIndex.Value = 0;
      local_40.Number = 0;
      pUVar7 = pUVar14;
      if ((pUVar10 != (UClass *)0x0) &&
         (pUVar9 = Z_Construct_UClass_UAsyncPhysicsData_NoRegister(), pUVar9 != (UClass *)0x0)) {
        iVar13 = (int)pUVar9->_padding_;
        if (((int)pUVar10->_padding_ < iVar13) ||
           ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar13 * 8) !=
            &pUVar9->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          pUVar7 = (this->DataClass).Class.field0_0x0.DebugPtr;
        }
      }
      if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar7);
      }
      pUVar1 = (pUVar7->ClassDefaultObject).field0_0x0.DebugPtr;
      pUVar10 = Z_Construct_UClass_UAsyncPhysicsData_NoRegister();
      pUVar11 = (UAsyncPhysicsData *)
                DuplicateObject_Internal(pUVar10,pUVar1,(UObject *)0x0,local_40);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar11 != (UAsyncPhysicsData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar11);
      }
      (this->DataToWrite).field0_0x0.DebugPtr = pUVar11;
      if (0 < param_2) {
        pTVar15 = &this->BufferedData;
        do {
          iVar13 = (int)pUVar14;
          if (iVar13 != 0) {
            local_38 = 0;
            pUVar10 = Z_Construct_UClass_UAsyncPhysicsData_NoRegister();
            TVar12.DebugPtr =
                 (UAsyncPhysicsData *)
                 DuplicateObject_Internal(pUVar10,TVar12.DebugPtr,(UObject *)0x0,(FName)0x0);
          }
          (TVar12.DebugPtr)->ServerFrame = param_3 + 1 + iVar13;
          local_48 = TVar12;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)TVar12.DebugPtr);
          }
          pTVar2 = (TObjectPtr<UAsyncPhysicsData>_u_0 *)(pTVar15->AllocatorInstance).Data;
          if (((pTVar2 <= &local_48) && (&local_48 < pTVar2 + (this->BufferedData).ArrayMax)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar6 = (this->BufferedData).ArrayNum;
          if (iVar6 == (this->BufferedData).ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&pTVar15->AllocatorInstance,&(this->BufferedData).ArrayMax);
          }
          (this->BufferedData).ArrayNum = iVar6 + 1;
          ((TObjectPtr<UAsyncPhysicsData>_u_0 *)
          ((pTVar15->AllocatorInstance).Data + (longlong)iVar6 * 8))->DebugPtr =
               (UAsyncPhysicsData *)local_48;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_48.DebugPtr != (UAsyncPhysicsData *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_48.DebugPtr);
          }
          pUVar14 = (UClass *)(ulonglong)(iVar13 + 1U);
        } while ((int)(iVar13 + 1U) < param_2);
      }
    }
  }
  return;
}

// ServerRPCBufferInput @ 148215f80

void __thiscall
UAsyncPhysicsInputComponent::ServerRPCBufferInput
          (UAsyncPhysicsInputComponent *this,UAsyncPhysicsData *param_1)

{
  UFunction *pUVar1;
  UAsyncPhysicsData *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UAsyncPhysicsInputComponent_ServerRPCBufferInput);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// ServerRPCBufferInput_Implementation @ 148215fc0

void __thiscall
UAsyncPhysicsInputComponent::ServerRPCBufferInput_Implementation
          (UAsyncPhysicsInputComponent *this,UAsyncPhysicsData *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->BufferedData).AllocatorInstance.Data;
  iVar2 = (this->BufferedData).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->BufferedData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UAsyncPhysicsData>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((pFVar3 == pFVar1) || (*(int *)(*(longlong *)pFVar3 + 0x28) == param_1->ServerFrame)) break;
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// SetDataClass @ 148216c50

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
UAsyncPhysicsInputComponent::SetDataClass
          (UAsyncPhysicsInputComponent *this,TSubclassOf<UAsyncPhysicsData> param_1)

{
  uchar uVar1;
  UObject *pUVar2;
  FPBDRigidsSolver *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UAsyncPhysicsData *pUVar8;
  UWorld *pUVar9;
  FChaosSolversModule *this_01;
  IChaosSettingsProvider *pIVar10;
  TObjectPtr<UClass>_u_0 TVar11;
  TObjectPtr<UClass>_u_0 TVar12;
  undefined1 local_res8 [8];
  FName local_res10;
  TObjectPtr<UClass>_u_0 local_res18;
  TObjectPtr<UClass>_u_0 local_res20;
  
  pUVar7 = (this->DataClass).Class.field0_0x0.DebugPtr;
  if ((pUVar7 != (UClass *)0x0) &&
     (pUVar6 = Z_Construct_UClass_UAsyncPhysicsData_NoRegister(), pUVar6 != (UClass *)0x0)) {
    iVar5 = (int)pUVar6->_padding_;
    if (((int)pUVar7->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar5 * 8) != &pUVar6->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && ((this->DataClass).Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
      local_res8[0] = 0;
      `UAsyncPhysicsInputComponent::SetDataClass'::__l2::<lambda_1>::operator()(local_res8);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
  }
  pUVar7 = *(UClass **)param_1.Class.field0_0x0;
  TVar12.DebugPtr = (UClass *)0x0;
  (this->DataClass).Class.field0_0x0.DebugPtr = pUVar7;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  TVar11.DebugPtr = TVar12.DebugPtr;
  if ((pUVar7 != (UClass *)0x0) &&
     (pUVar6 = Z_Construct_UClass_UAsyncPhysicsData_NoRegister(), pUVar6 != (UClass *)0x0)) {
    iVar5 = (int)pUVar6->_padding_;
    if (((int)pUVar7->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar5 * 8) != &pUVar6->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      TVar11.DebugPtr = (this->DataClass).Class.field0_0x0.DebugPtr;
    }
  }
  if (((TVar11.DebugPtr)->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(TVar11.DebugPtr);
  }
  pUVar2 = ((TVar11.DebugPtr)->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar7 = Z_Construct_UClass_UAsyncPhysicsData_NoRegister();
  pUVar8 = (UAsyncPhysicsData *)DuplicateObject_Internal(pUVar7,pUVar2,(UObject *)0x0,local_res10);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UAsyncPhysicsData *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (this->DataToWrite).field0_0x0.DebugPtr = pUVar8;
  UActorComponent::SetAsyncPhysicsTickEnabled((UActorComponent *)this,true);
  pUVar9 = (UWorld *)this->_padding_;
  if (pUVar9 == (UWorld *)0x0) {
    pUVar9 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  uVar1 = (pUVar9->WorldType).Value;
  if ((uVar1 == '\x03') || (uVar1 == '\x01')) {
    if (pUVar9->PhysicsScene == (FPhysScene_Chaos *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1886031104448659351>,true,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\AsyncPhysicsInputComponent.cpp"
                         ,0x69,"PhysScene");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      this_00 = (FPBDRigidsSolver *)pUVar9->PhysicsScene->_padding_;
      if (this_00->_padding_ == 0) {
        this_01 = FChaosSolversModule::GetModule();
        pIVar10 = FChaosSolversModule::GetSettingsProvider(this_01);
        iVar5 = (**(code **)((longlong)*pIVar10 + 0x68))(pIVar10);
        TVar11.DebugPtr = ::operator_new(0x40);
        if (TVar11.DebugPtr != (UClass *)0x0) {
          (TVar11.DebugPtr)->_padding_ = 0;
          (TVar11.DebugPtr)->_padding_ = (longlong)&___7FAsyncPhysicsInputRewindCallback__6B_;
          (TVar11.DebugPtr)->_padding_ = (longlong)pUVar9;
          (TVar11.DebugPtr)->_padding_ = 0;
          (TVar11.DebugPtr)->_padding_ = 0;
          (TVar11.DebugPtr)->_padding_ = 0;
          (TVar11.DebugPtr)->_padding_ = 2;
          *(undefined4 *)&(TVar11.DebugPtr)->_padding_ = 0;
          TVar12.DebugPtr = TVar11.DebugPtr;
        }
        local_res18 = TVar12;
        Chaos::FPBDRigidsSolver::EnableRewindCapture
                  (this_00,iVar5,true,
                   (TUniquePtr<Chaos::IRewindCallback,TDefaultDelete<Chaos::IRewindCallback>_> *)
                   &local_res18.ObjectPtr);
        if (local_res18.DebugPtr != (UClass *)0x0) {
          (**(code **)(local_res18.DebugPtr)->_padding_)(local_res18.DebugPtr,1);
        }
      }
      TMulticastDelegateRegistration<void___cdecl(int,int,int),FDefaultDelegateUserPolicy>::
      AddUObject<UAsyncPhysicsInputComponent>
                ((TMulticastDelegateRegistration<void___cdecl(int,int,int),FDefaultDelegateUserPolicy>
                  *)(this_00->_padding_ + 0x18),
                 (UAsyncPhysicsInputComponent *)&local_res20.ObjectPtr,(pmf_8066eea1 *)this);
    }
  }
  return;
}

// StaticRegisterNativesUAsyncPhysicsInputComponent @ 148220570

void __cdecl UAsyncPhysicsInputComponent::StaticRegisterNativesUAsyncPhysicsInputComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetDataToConsume @ 148228110

void __cdecl
UAsyncPhysicsInputComponent::execGetDataToConsume(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  TObjectPtr<UObject>_u_0 TVar5;
  UClass *this;
  undefined1 local_res8 [8];
  
  this = (UClass *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[4].field_0x20;
  if (lVar2 != 0) {
    pUVar4 = Z_Construct_UClass_UAsyncPhysicsData_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (*(longlong *)&param_1[4].field_0x20 != 0)) goto LAB_14822818d;
    }
  }
  `UAsyncPhysicsInputComponent::GetDataToConsume'::__l2::<lambda_1>::operator()(local_res8);
LAB_14822818d:
  TVar5 = (TObjectPtr<UObject>_u_0)*(TObjectPtr<UObject>_u_0 *)&param_1[5].field_0x10;
  if (TVar5.DebugPtr == (UObject *)0x0) {
    lVar2 = *(longlong *)&param_1[4].field_0x20;
    if (lVar2 != 0) {
      pUVar4 = Z_Construct_UClass_UAsyncPhysicsData_NoRegister();
      if (pUVar4 != (UClass *)0x0) {
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
          this = *(UClass **)&param_1[4].field_0x20;
        }
      }
    }
    if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this);
    }
    TVar5 = (this->ClassDefaultObject).field0_0x0;
  }
  *(TObjectPtr<UObject>_u_0 *)param_3 = TVar5;
  return;
}

// execGetDataToWrite @ 148228220

void __cdecl
UAsyncPhysicsInputComponent::execGetDataToWrite(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[5].field_0x18;
  return;
}

// execServerRPCBufferInput @ 148228990

void __cdecl
UAsyncPhysicsInputComponent::execServerRPCBufferInput
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x4f8))(param_1,local_res8);
  return;
}

// operator() @ 150527ac0

bool __thiscall
`UAsyncPhysicsInputComponent::AsyncPhysicsTickComponent'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1886031104448659326>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1886031104448659326>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150527b40

bool __thiscall
`UAsyncPhysicsInputComponent::GetDataToConsume'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1886031104448659213>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1886031104448659213>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150527c00

bool __thiscall
`UAsyncPhysicsInputComponent::OnDispatchPhysicsTick'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1886031104448659268>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1886031104448659268>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150527c40

bool __thiscall
`UAsyncPhysicsInputComponent::SetDataClass'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1886031104448659362>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1886031104448659362>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

