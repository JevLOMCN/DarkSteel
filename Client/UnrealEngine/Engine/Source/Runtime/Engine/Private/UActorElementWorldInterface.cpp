// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 23

// StaticClass @ 147b27f40

UClass * __cdecl UActorElementWorldInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorElementWorldInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorElementWorldInterface",
               &Z_Registration_Info_UClass_UActorElementWorldInterface.InnerSingleton,
               StaticRegisterNativesUActorElementWorldInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UActorElementWorldInterface>,
               InternalVTableHelperCtorCaller<UActorElementWorldInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorElementWorldInterface.InnerSingleton;
}

// UActorElementWorldInterface @ 147b3a680

UActorElementWorldInterface * __thiscall
UActorElementWorldInterface::UActorElementWorldInterface
          (UActorElementWorldInterface *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementWorldInterface__;
  return this;
}

// UActorElementWorldInterface @ 147b3a6c0

UActorElementWorldInterface * __thiscall
UActorElementWorldInterface::UActorElementWorldInterface
          (UActorElementWorldInterface *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementWorldInterface__;
  return this;
}

// ~UActorElementWorldInterface @ 147b3d4e0

void __thiscall
UActorElementWorldInterface::~UActorElementWorldInterface(UActorElementWorldInterface *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7ITypedElementWorldInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddIgnoredCollisionQueryElement @ 147b42df0

void __cdecl
UActorElementWorldInterface::AddIgnoredCollisionQueryElement
          (FTypedElementHandle *param_1,FCollisionQueryParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  UTypedElementRegistry *this;
  ITypedElementWorldInterface *pIVar3;
  
  this = UTypedElementRegistry::GetInstance();
  if (this == (UTypedElementRegistry *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4400484106907942622>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Elements\\Actor\\ActorElementWorldInterface.cpp"
                       ,0x122,"Registry");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pIVar3 = UTypedElementRegistry::GetElementInterface<ITypedElementWorldInterface>(this,param_1);
    if (pIVar3 != (ITypedElementWorldInterface *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x120))(pIVar3,param_1,param_2,0);
    }
  }
  return;
}

// AddIgnoredElementToCollisionQueryParams @ 147b42e90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UActorElementWorldInterface::AddIgnoredElementToCollisionQueryParams
          (UActorElementWorldInterface *this,FTypedElementHandle *param_1,
          FCollisionQueryParams *param_2,bool param_3)

{
  FTypedElementInternalData *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  AActor *this_00;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_28;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_18;
  
  pFVar1 = param_1->DataPtr;
  if ((pFVar1 != (FTypedElementInternalData *)0x0) &&
     ((pFVar1->Id).field0_0x0._s_0.TypeId == FActorElementData::Private_RegisteredTypeId)) {
    lVar4 = (**(code **)(pFVar1->_padding_ + 0x10))();
    if (lVar4 != 0) {
      this_00 = (AActor *)FWeakObjectPtr::GetEvenIfUnreachable((FWeakObjectPtr *)(lVar4 + 8));
      if (this_00 != (AActor *)0x0) {
        local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_28.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,1,0,&local_28.AllocatorInstance,1,&local_28.ArrayMax);
        *(AActor **)local_28.AllocatorInstance.Data = this_00;
        if (param_3) {
          local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_18.ArrayNum = 0;
          local_18.ArrayMax = 0;
          AActor::GetAllChildActors(this_00,&local_18,true);
          iVar2 = local_18.ArrayNum;
          if (local_18.ArrayNum != 0) {
            iVar3 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (8,8,local_18.ArrayNum,&local_28.AllocatorInstance,&local_28.ArrayNum,
                               &local_28.ArrayMax);
            ConstructItems<UObject_*,AActor_*,int>
                      (local_28.AllocatorInstance.Data + (longlong)iVar3 * 8,
                       (AActor **)local_18.AllocatorInstance.Data,iVar2);
          }
          if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.AllocatorInstance.Data);
          }
        }
        FCollisionQueryParams::AddIgnoredSourceObjects(param_2,&local_28);
        if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.AllocatorInstance.Data);
        }
        return true;
      }
    }
  }
  return false;
}

// CanMoveElement @ 147b4a8e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UActorElementWorldInterface::CanMoveElement
          (UActorElementWorldInterface *this,FTypedElementHandle *param_1,
          ETypedElementWorldType param_2)

{
  bool bVar1;
  AActor *this_00;
  
  this_00 = ActorElementDataUtil::GetActorFromHandle(param_1,false);
  if (this_00 == (AActor *)0x0) {
    return false;
  }
  if (((param_2 == Game) && ((this_00->RootComponent).field0_0x0.DebugPtr != (USceneComponent *)0x0)
      ) && (bVar1 = AActor::IsRootComponentMovable(this_00), !bVar1)) {
    return false;
  }
  return true;
}

// CanScaleElement @ 147b4ae60

bool __thiscall
UActorElementWorldInterface::CanScaleElement
          (UActorElementWorldInterface *this,FTypedElementHandle *param_1)

{
  return true;
}

// FindSuitableTransformAlongPath @ 147b61750

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

bool __thiscall
UActorElementWorldInterface::FindSuitableTransformAlongPath
          (UActorElementWorldInterface *this,FTypedElementHandle *param_1,TVector<double> *param_2,
          TVector<double> *param_3,FCollisionShape *param_4,
          TArrayView<FTypedElementHandle_const_,int> *param_5,TTransform<double> *param_6)

{
  bool bVar1;
  AActor *this_00;
  UWorld *pUVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 auStackY_158 [32];
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_f8;
  TStatId local_e8 [2];
  FCollisionQueryParams local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  this_00 = ActorElementDataUtil::GetActorFromHandle(param_1,false);
  if ((this_00 == (AActor *)0x0) || (pUVar2 = AActor::GetWorld(this_00), pUVar2 == (UWorld *)0x0)) {
    bVar1 = false;
  }
  else {
    piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c);
    if ((*piVar4 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_FindSuitableTransformAlongPath =
           (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_bool___cdecl_UActorElementWorldInterface::FindSuitableTransformAlongPath(FTypedElementHandle_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FCollisionShape_const_&,TArrayView<FTypedElementHandle_const_,int>,UE::Math::TTransform<double>_&)_::_8_::<lambda_2>::operator()(void)const_::_2_::FStat_FindSuitableTransformAlongPath>
            )0x0;
      pFVar3 = ::FName::FName((FName *)&local_f8,"FindSuitableTransformAlongPath");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_FindSuitableTransformAlongPath,*pFVar3,
                 L"FindSuitableTransformAlongPath","STATGROUP_CollisionTags","STATCAT_Advanced",
                 L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    local_e8[0].StatIdPtr = (TStatIdData *)StatPtr_FindSuitableTransformAlongPath;
    if (StatPtr_FindSuitableTransformAlongPath ==
        (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_bool___cdecl_UActorElementWorldInterface::FindSuitableTransformAlongPath(FTypedElementHandle_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FCollisionShape_const_&,TArrayView<FTypedElementHandle_const_,int>,UE::Math::TTransform<double>_&)_::_8_::<lambda_2>::operator()(void)const_::_2_::FStat_FindSuitableTransformAlongPath>
         )0x0) {
      pFVar3 = ::FName::FName((FName *)&local_f8,"FindSuitableTransformAlongPath");
      local_e8[0].StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_FindSuitableTransformAlongPath,*pFVar3,
                      L"FindSuitableTransformAlongPath","STATGROUP_CollisionTags","STATCAT_Advanced"
                      ,L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
    }
    if ((*piVar4 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&::StaticName,"FindSuitableTransformAlongPath");
      _Init_thread_footer(&::_TSS0);
    }
    FCollisionQueryParams::FCollisionQueryParams
              (&local_d8,::StaticName,local_e8,false,(AActor *)0x0);
    FCollisionQueryParams::AddIgnoredActor(&local_d8,this_00);
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ArrayNum = 0;
    local_f8.ArrayMax = 0;
    AActor::GetAllChildActors(this_00,&local_f8,true);
    FCollisionQueryParams::AddIgnoredActors(&local_d8,&local_f8);
    if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)param_5->DataPtr;
    local_f8.ArrayNum = param_5->ArrayNum;
    local_f8.ArrayMax = *(int *)&param_5->field_0xc;
    bVar1 = FindSuitableTransformAlongPath_WorldSweep
                      (pUVar2,param_2,param_3,param_4,
                       (TArrayView<FTypedElementHandle_const_,int> *)&local_f8,&local_d8,param_6);
    if (local_d8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_d8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_d8.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_d8.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
  }
  return bVar1;
}

// FindSuitableTransformAlongPath_WorldSweep @ 147b61d80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UActorElementWorldInterface::FindSuitableTransformAlongPath_WorldSweep
          (UWorld *param_1,TVector<double> *param_2,TVector<double> *param_3,
          FCollisionShape *param_4,TArrayView<FTypedElementHandle_const_,int> *param_5,
          FCollisionQueryParams *param_6,TTransform<double> *param_7)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  UTypedElementRegistry *this;
  UObject *this_00;
  UClass *pUVar9;
  longlong *plVar10;
  TQuat<double> *pTVar11;
  FTypedElementId *pFVar12;
  FTypedElementHandle *pFVar13;
  FTypedElementHandle *pFVar14;
  TObjectPtr<UClass>_u_0 local_1d8 [3];
  undefined8 local_1c0;
  undefined4 uStack_1b8;
  undefined1 uStack_1b4;
  undefined2 uStack_1b3;
  undefined1 uStack_1b1;
  TRotator<double> local_1b0 [2];
  undefined1 local_178 [24];
  double dStack_160;
  double local_158;
  TVector<double> local_138 [4];
  int local_d4;
  FWeakObjectPtr local_c0;
  FWeakObjectPtr FStack_b8;
  IActorInstanceManagerInterface *local_b0;
  undefined8 uStack_a8;
  TQuat<double> local_78 [2];
  
  this = UTypedElementRegistry::GetInstance();
  if (this == (UTypedElementRegistry *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4400484106907942655>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Elements\\Actor\\ActorElementWorldInterface.cpp"
                       ,0x101,"Registry");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      uVar8 = (*pcVar1)();
      return (bool)uVar8;
    }
  }
  else {
    pFVar13 = param_5->DataPtr;
    pFVar14 = pFVar13 + param_5->ArrayNum;
    for (; pFVar13 != pFVar14; pFVar13 = pFVar13 + 1) {
      local_1d8[0].DebugPtr = Z_Construct_UClass_UTypedElementWorldInterface_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_1d8[0].DebugPtr != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_1d8[0].DebugPtr);
      }
      pFVar12 = &pFVar13->DataPtr->Id;
      if (pFVar13->DataPtr == (FTypedElementInternalData *)0x0) {
        pFVar12 = &FTypedElementId::Unset;
      }
      this_00 = UTypedElementRegistry::GetElementInterfaceImpl
                          (this,(pFVar12->field0_0x0)._s_0.TypeId,
                           (TSubclassOf<UInterface> *)&local_1d8[0].ObjectPtr);
      if (this_00 != (UObject *)0x0) {
        pUVar9 = Z_Construct_UClass_UTypedElementWorldInterface_NoRegister();
        plVar10 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar9);
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x120))(plVar10,pFVar13,param_6,1);
        }
      }
    }
  }
  memset(local_178,0,0x100);
  uStack_1b3 = 0;
  uStack_1b1 = 0;
  local_1c0 = 0;
  uStack_1b4 = 0;
  local_c0.ObjectIndex = 0;
  local_c0.ObjectSerialNumber = 0;
  FStack_b8.ObjectIndex = 0;
  FStack_b8.ObjectSerialNumber = 0;
  uStack_1b8 = 0xffffffff;
  uStack_a8._0_4_ = -1;
  uStack_a8._4_1_ = Invalid;
  uStack_a8._5_3_ = 0;
  local_d4 = -1;
  local_178._4_4_ = 1.0;
  local_b0 = (IActorInstanceManagerInterface *)0x0;
  bVar7 = UWorld::SweepSingleByChannel
                    (param_1,(FHitResult *)local_178,param_2,param_3,
                     &UE::Math::TQuat<double>::Identity,ECC_WorldStatic,param_4,param_6,
                     &FCollisionResponseParams::DefaultResponseParam);
  if (bVar7) {
    dVar2 = local_158 + __real_3f1a36e2e0000000;
    UE::Math::TVector<double>::ToOrientationRotator(local_138,local_1b0);
    local_1b0[0].Pitch = local_1b0[0].Pitch + __real_c056800000000000;
    (param_7->Translation).XY.m128d_f64[0] = (double)local_178._16_8_;
    (param_7->Translation).XY.m128d_f64[1] = dStack_160;
    (param_7->Translation).ZW.m128d_f64[0] = dVar2;
    (param_7->Translation).ZW.m128d_f64[1] = 0.0;
    pTVar11 = UE::Math::TRotator<double>::Quaternion(local_1b0,local_78);
    dVar2 = pTVar11->Y;
    dVar3 = pTVar11->Z;
    dVar4 = pTVar11->W;
    (param_7->Rotation).XY.m128d_f64[0] = pTVar11->X;
    (param_7->Rotation).XY.m128d_f64[1] = dVar2;
    (param_7->Rotation).ZW.m128d_f64[0] = dVar3;
    (param_7->Rotation).ZW.m128d_f64[1] = dVar4;
    uVar6 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    uVar5 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    (param_7->Scale3D).XY.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    (param_7->Scale3D).XY.m128d_f64[1] = (double)uVar5;
    (param_7->Scale3D).ZW.m128d_f64[0] = (double)uVar6;
    (param_7->Scale3D).ZW.m128d_f64[1] = 0.0;
    return true;
  }
  return false;
}

// FindSuitableTransformAtPoint @ 147b62080

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UActorElementWorldInterface::FindSuitableTransformAtPoint
          (UActorElementWorldInterface *this,FTypedElementHandle *param_1,
          TTransform<double> *param_2,TTransform<double> *param_3)

{
  USceneComponent *pUVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  AActor *this_00;
  UWorld *this_01;
  UClass *pUVar8;
  TQuat<double> *pTVar9;
  USceneComponent *pUVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  TVector<double>_u_0 local_98;
  TRotator<double> local_80;
  TQuat<double> local_68 [2];
  
  this_00 = ActorElementDataUtil::GetActorFromHandle(param_1,false);
  if (this_00 == (AActor *)0x0) {
    return false;
  }
  this_01 = AActor::GetWorld(this_00);
  pUVar10 = (this_00->RootComponent).field0_0x0.DebugPtr;
  if (pUVar10 != (USceneComponent *)0x0) {
    pUVar8 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar7 = (int)pUVar8->_padding_;
    if ((iVar7 <= *(int *)(pUVar10->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar7 * 8)
        == &pUVar8->_padding_)) goto LAB_147b62101;
  }
  pUVar10 = (USceneComponent *)0x0;
LAB_147b62101:
  if ((((this_01 == (UWorld *)0x0) || (pUVar10 == (USceneComponent *)0x0)) ||
      (iVar7 = (**(code **)(pUVar10->_padding_ + 0x5e0))(pUVar10), (iVar7 - 1U & 0xfffffff9) != 0))
     || (iVar7 == 7)) {
    dVar2 = (param_2->Rotation).XY.m128d_f64[1];
    (param_3->Rotation).XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
    (param_3->Rotation).XY.m128d_f64[1] = dVar2;
    dVar2 = (param_2->Rotation).ZW.m128d_f64[1];
    (param_3->Rotation).ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
    (param_3->Rotation).ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_2->Translation).XY.m128d_f64[1];
    (param_3->Translation).XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
    (param_3->Translation).XY.m128d_f64[1] = dVar2;
    dVar2 = (param_2->Translation).ZW.m128d_f64[1];
    (param_3->Translation).ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
    (param_3->Translation).ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_2->Scale3D).XY.m128d_f64[1];
    (param_3->Scale3D).XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
    (param_3->Scale3D).XY.m128d_f64[1] = dVar2;
    dVar2 = (param_2->Scale3D).ZW.m128d_f64[1];
    (param_3->Scale3D).ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
    (param_3->Scale3D).ZW.m128d_f64[1] = dVar2;
    return true;
  }
  pUVar1 = (this_00->RootComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (USceneComponent *)0x0) {
    uVar11 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar12 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  }
  else {
    uVar11 = *(undefined4 *)(pUVar1->ComponentToWorld).Translation.ZW.m128d_f64;
    uVar12 = *(undefined4 *)((longlong)(pUVar1->ComponentToWorld).Translation.ZW.m128d_f64 + 4);
    uVar13 = *(undefined4 *)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64;
    uVar14 = *(undefined4 *)((longlong)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64 + 4);
    uVar15 = *(undefined4 *)((pUVar1->ComponentToWorld).Translation.XY.m128d_f64 + 1);
    uVar16 = *(undefined4 *)((longlong)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
  }
  dVar2 = (pUVar10->Bounds).Origin.field0_0x0._s_0.X - (double)CONCAT44(uVar14,uVar13);
  local_80.Roll = (double)CONCAT44(uVar12,uVar11);
  dVar3 = (pUVar10->Bounds).Origin.field0_0x0._s_0.Y - (double)CONCAT44(uVar16,uVar15);
  local_98._s_0.Z = (param_2->Translation).ZW.m128d_f64[0];
  local_98._s_0.X = (param_2->Translation).XY.m128d_f64[0];
  local_98._s_0.Y = (param_2->Translation).XY.m128d_f64[1];
  dVar4 = (pUVar10->Bounds).Origin.field0_0x0._s_0.Z - local_80.Roll;
  local_68[0].X = (param_2->Rotation).XY.m128d_f64[0];
  local_68[0].Y = (param_2->Rotation).XY.m128d_f64[1];
  local_68[0].Z = (param_2->Rotation).ZW.m128d_f64[0];
  local_68[0].W = (param_2->Rotation).ZW.m128d_f64[1];
  UE::Math::TQuat<double>::Rotator(local_68,&local_80);
  local_98._s_0.X = local_98._s_0.X + dVar2;
  local_98._s_0.Y = local_98._s_0.Y + dVar3;
  local_98._s_0.Z = local_98._s_0.Z + dVar4;
  local_68[0].Z = local_80.Roll;
  local_68[0].X = local_80.Pitch;
  local_68[0].Y = local_80.Yaw;
  bVar6 = UWorld::FindTeleportSpot
                    (this_01,this_00,(TVector<double> *)&local_98._s_0,(TRotator<double> *)local_68)
  ;
  if (!bVar6) {
    return false;
  }
  dVar5 = (param_2->Rotation).XY.m128d_f64[1];
  local_98._s_0.X = local_98._s_0.X - dVar2;
  local_98._s_0.Z = local_98._s_0.Z - dVar4;
  (param_3->Rotation).XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  (param_3->Rotation).XY.m128d_f64[1] = dVar5;
  local_98._s_0.Y = local_98._s_0.Y - dVar3;
  dVar2 = (param_2->Rotation).ZW.m128d_f64[1];
  (param_3->Rotation).ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  (param_3->Rotation).ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_2->Translation).XY.m128d_f64[1];
  (param_3->Translation).XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  (param_3->Translation).XY.m128d_f64[1] = dVar2;
  dVar2 = (param_2->Translation).ZW.m128d_f64[1];
  (param_3->Translation).ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  (param_3->Translation).ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_2->Scale3D).XY.m128d_f64[1];
  (param_3->Scale3D).XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  (param_3->Scale3D).XY.m128d_f64[1] = dVar2;
  dVar2 = (param_2->Scale3D).ZW.m128d_f64[1];
  (param_3->Scale3D).ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  (param_3->Scale3D).ZW.m128d_f64[1] = dVar2;
  (param_3->Translation).XY.m128d_f64[0] = local_98._s_0.X;
  (param_3->Translation).XY.m128d_f64[1] = local_98._s_0.Y;
  (param_3->Translation).ZW.m128d_f64[0] = local_98._s_0.Z;
  (param_3->Translation).ZW.m128d_f64[1] = 0.0;
  pTVar9 = UE::Math::TRotator<double>::Quaternion(&local_80,local_68);
  dVar2 = pTVar9->Y;
  dVar3 = pTVar9->Z;
  dVar4 = pTVar9->W;
  (param_3->Rotation).XY.m128d_f64[0] = pTVar9->X;
  (param_3->Rotation).XY.m128d_f64[1] = dVar2;
  (param_3->Rotation).ZW.m128d_f64[0] = dVar3;
  (param_3->Rotation).ZW.m128d_f64[1] = dVar4;
  return true;
}

// GetBounds @ 147b63eb0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UActorElementWorldInterface::GetBounds
          (UActorElementWorldInterface *this,FTypedElementHandle *param_1,
          TBoxSphereBounds<double,double> *param_2)

{
  USceneComponent *pUVar1;
  double dVar2;
  AActor *pAVar3;
  
  pAVar3 = ActorElementDataUtil::GetActorFromHandle(param_1,false);
  if ((pAVar3 != (AActor *)0x0) &&
     (pUVar1 = (pAVar3->RootComponent).field0_0x0.DebugPtr, pUVar1 != (USceneComponent *)0x0)) {
    dVar2 = (pUVar1->Bounds).Origin.field0_0x0._s_0.Y;
    (param_2->Origin).field0_0x0._s_0.X = (pUVar1->Bounds).Origin.field0_0x0._s_0.X;
    (param_2->Origin).field0_0x0._s_0.Y = dVar2;
    dVar2 = (pUVar1->Bounds).BoxExtent.field0_0x0._s_0.X;
    (param_2->Origin).field0_0x0._s_0.Z = (pUVar1->Bounds).Origin.field0_0x0._s_0.Z;
    (param_2->BoxExtent).field0_0x0._s_0.X = dVar2;
    dVar2 = (pUVar1->Bounds).BoxExtent.field0_0x0._s_0.Z;
    (param_2->BoxExtent).field0_0x0._s_0.Y = (pUVar1->Bounds).BoxExtent.field0_0x0._s_0.Y;
    (param_2->BoxExtent).field0_0x0._s_0.Z = dVar2;
    param_2->SphereRadius = (pUVar1->Bounds).SphereRadius;
    return true;
  }
  return false;
}

// GetOwnerLevel @ 147b6a330

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevel * __thiscall
UActorElementWorldInterface::GetOwnerLevel
          (UActorElementWorldInterface *this,FTypedElementHandle *param_1)

{
  AActor *this_00;
  ULevel *pUVar1;
  
  this_00 = ActorElementDataUtil::GetActorFromHandle(param_1,false);
  if (this_00 != (AActor *)0x0) {
    pUVar1 = AActor::GetLevel(this_00);
    return pUVar1;
  }
  return (ULevel *)0x0;
}

// GetOwnerWorld @ 147b6a620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall
UActorElementWorldInterface::GetOwnerWorld
          (UActorElementWorldInterface *this,FTypedElementHandle *param_1)

{
  AActor *this_00;
  UWorld *pUVar1;
  
  this_00 = ActorElementDataUtil::GetActorFromHandle(param_1,false);
  if (this_00 != (AActor *)0x0) {
    pUVar1 = AActor::GetWorld(this_00);
    return pUVar1;
  }
  return (UWorld *)0x0;
}

// GetPrivateStaticClass @ 147b6b6b0

UClass * __cdecl UActorElementWorldInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorElementWorldInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorElementWorldInterface",
               &Z_Registration_Info_UClass_UActorElementWorldInterface.InnerSingleton,
               StaticRegisterNativesUActorElementWorldInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UActorElementWorldInterface>,
               InternalVTableHelperCtorCaller<UActorElementWorldInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorElementWorldInterface.InnerSingleton;
}

// GetRelativeTransform @ 147b6d410

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

bool __thiscall
UActorElementWorldInterface::GetRelativeTransform
          (UActorElementWorldInterface *this,FTypedElementHandle *param_1,
          TTransform<double> *param_2)

{
  USceneComponent *this_00;
  double dVar1;
  bool bVar2;
  AActor *pAVar3;
  TTransform<double> *pTVar4;
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  pAVar3 = ActorElementDataUtil::GetActorFromHandle(param_1,false);
  bVar2 = false;
  if (pAVar3 != (AActor *)0x0) {
    this_00 = (pAVar3->RootComponent).field0_0x0.DebugPtr;
    if (this_00 == (USceneComponent *)0x0) {
      bVar2 = true;
      *&(param_2->Rotation).XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      *&(param_2->Rotation).ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      *&(param_2->Translation).XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      *&(param_2->Translation).ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      *&(param_2->Scale3D).XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      *&(param_2->Scale3D).ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      pTVar4 = USceneComponent::GetRelativeTransform(this_00,&local_78);
      dVar1 = (pTVar4->Rotation).XY.m128d_f64[1];
      (param_2->Rotation).XY.m128d_f64[0] = (pTVar4->Rotation).XY.m128d_f64[0];
      (param_2->Rotation).XY.m128d_f64[1] = dVar1;
      dVar1 = (pTVar4->Rotation).ZW.m128d_f64[1];
      (param_2->Rotation).ZW.m128d_f64[0] = (pTVar4->Rotation).ZW.m128d_f64[0];
      (param_2->Rotation).ZW.m128d_f64[1] = dVar1;
      dVar1 = (pTVar4->Translation).XY.m128d_f64[1];
      (param_2->Translation).XY.m128d_f64[0] = (pTVar4->Translation).XY.m128d_f64[0];
      (param_2->Translation).XY.m128d_f64[1] = dVar1;
      dVar1 = (pTVar4->Translation).ZW.m128d_f64[1];
      (param_2->Translation).ZW.m128d_f64[0] = (pTVar4->Translation).ZW.m128d_f64[0];
      (param_2->Translation).ZW.m128d_f64[1] = dVar1;
      dVar1 = (pTVar4->Scale3D).XY.m128d_f64[1];
      (param_2->Scale3D).XY.m128d_f64[0] = (pTVar4->Scale3D).XY.m128d_f64[0];
      (param_2->Scale3D).XY.m128d_f64[1] = dVar1;
      dVar1 = (pTVar4->Scale3D).ZW.m128d_f64[1];
      bVar2 = true;
      (param_2->Scale3D).ZW.m128d_f64[0] = (pTVar4->Scale3D).ZW.m128d_f64[0];
      (param_2->Scale3D).ZW.m128d_f64[1] = dVar1;
    }
  }
  return bVar2;
}

// GetSelectionElementsFromSelectionFunction @ 147b6f4b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> * __thiscall
UActorElementWorldInterface::GetSelectionElementsFromSelectionFunction
          (UActorElementWorldInterface *this,
          TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FTypedElementHandle *param_1,FWorldSelectionElementArgs *param_2,
          TFunction<bool___cdecl(FTypedElementHandle_const_&,FWorldSelectionElementArgs_const_&)>
          *param_3)

{
  int iVar1;
  bool bVar2;
  AActor *pAVar3;
  UClass *pUVar4;
  UWorld *this_00;
  
  pAVar3 = ActorElementDataUtil::GetActorFromHandle(param_1,false);
  if (pAVar3 != (AActor *)0x0) {
    if ((param_2->ShowFlags != (FEngineShowFlags *)0x0) && (param_2->ShowFlags->Volumes == 0)) {
      pUVar4 = Z_Construct_UClass_AVolume_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(pAVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) goto LAB_147b6f560;
    }
    bVar2 = FActorEditorUtils::IsABuilderBrush(pAVar3);
    if (!bVar2) {
      this_00 = (UWorld *)(**(code **)(*(longlong *)this + 0x48))(this,param_1);
      bVar2 = UWorld::IsEditorWorld(this_00);
      if ((bVar2) || (!(bool)pAVar3->bHidden)) {
        ITypedElementWorldInterface::GetSelectionElementsFromSelectionFunction
                  ((ITypedElementWorldInterface *)this,__return_storage_ptr__,param_1,param_2,
                   param_3);
        return __return_storage_ptr__;
      }
    }
  }
LAB_147b6f560:
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetWorldTransform @ 147b72c00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UActorElementWorldInterface::GetWorldTransform
          (UActorElementWorldInterface *this,FTypedElementHandle *param_1,
          TTransform<double> *param_2)

{
  USceneComponent *pUVar1;
  double dVar2;
  AActor *pAVar3;
  TTransform<double> *pTVar4;
  
  pAVar3 = ActorElementDataUtil::GetActorFromHandle(param_1,false);
  if (pAVar3 != (AActor *)0x0) {
    pUVar1 = (pAVar3->RootComponent).field0_0x0.DebugPtr;
    if (pUVar1 == (USceneComponent *)0x0) {
      pTVar4 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar4 = &pUVar1->ComponentToWorld;
    }
    dVar2 = (pTVar4->Rotation).XY.m128d_f64[1];
    (param_2->Rotation).XY.m128d_f64[0] = (pTVar4->Rotation).XY.m128d_f64[0];
    (param_2->Rotation).XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar4->Rotation).ZW.m128d_f64[1];
    (param_2->Rotation).ZW.m128d_f64[0] = (pTVar4->Rotation).ZW.m128d_f64[0];
    (param_2->Rotation).ZW.m128d_f64[1] = dVar2;
    dVar2 = (pTVar4->Translation).XY.m128d_f64[1];
    (param_2->Translation).XY.m128d_f64[0] = (pTVar4->Translation).XY.m128d_f64[0];
    (param_2->Translation).XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar4->Translation).ZW.m128d_f64[1];
    (param_2->Translation).ZW.m128d_f64[0] = (pTVar4->Translation).ZW.m128d_f64[0];
    (param_2->Translation).ZW.m128d_f64[1] = dVar2;
    dVar2 = (pTVar4->Scale3D).XY.m128d_f64[1];
    (param_2->Scale3D).XY.m128d_f64[0] = (pTVar4->Scale3D).XY.m128d_f64[0];
    (param_2->Scale3D).XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar4->Scale3D).ZW.m128d_f64[1];
    (param_2->Scale3D).ZW.m128d_f64[0] = (pTVar4->Scale3D).ZW.m128d_f64[0];
    (param_2->Scale3D).ZW.m128d_f64[1] = dVar2;
    return true;
  }
  return false;
}

// IsTemplateElement @ 147b78530

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UActorElementWorldInterface::IsTemplateElement
          (UActorElementWorldInterface *this,FTypedElementHandle *param_1)

{
  bool bVar1;
  AActor *this_00;
  
  this_00 = ActorElementDataUtil::GetActorFromHandle(param_1,false);
  if (this_00 != (AActor *)0x0) {
    bVar1 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this_00,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// SetRelativeTransform @ 147b8ce20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UActorElementWorldInterface::SetRelativeTransform
          (UActorElementWorldInterface *this,FTypedElementHandle *param_1,
          TTransform<double> *param_2)

{
  USceneComponent *this_00;
  AActor *pAVar1;
  
  pAVar1 = ActorElementDataUtil::GetActorFromHandle(param_1,false);
  if ((pAVar1 != (AActor *)0x0) &&
     (this_00 = (pAVar1->RootComponent).field0_0x0.DebugPtr, this_00 != (USceneComponent *)0x0)) {
    USceneComponent::SetRelativeTransform(this_00,param_2,false,(FHitResult *)0x0,None);
    return true;
  }
  return false;
}

// SetWorldTransform @ 147b8e030

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UActorElementWorldInterface::SetWorldTransform
          (UActorElementWorldInterface *this,FTypedElementHandle *param_1,
          TTransform<double> *param_2)

{
  bool bVar1;
  AActor *this_00;
  
  this_00 = ActorElementDataUtil::GetActorFromHandle(param_1,false);
  if (this_00 != (AActor *)0x0) {
    bVar1 = AActor::SetActorTransform(this_00,param_2,false,(FHitResult *)0x0,None);
    return bVar1;
  }
  return false;
}

// StaticRegisterNativesUActorElementWorldInterface @ 147b8eb20

void __cdecl UActorElementWorldInterface::StaticRegisterNativesUActorElementWorldInterface(void)

{
  return;
}

// _getUObject @ 147b91f80

UObject * __thiscall UActorElementWorldInterface::_getUObject(UActorElementWorldInterface *this)

{
  return (UObject *)&this[-1].field_0x8;
}

