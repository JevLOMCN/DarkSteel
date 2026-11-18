// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 20

// StaticClass @ 147b294b0

UClass * __cdecl UComponentElementWorldInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComponentElementWorldInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ComponentElementWorldInterface",
               &Z_Registration_Info_UClass_UComponentElementWorldInterface.InnerSingleton,
               StaticRegisterNativesUComponentElementWorldInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UComponentElementWorldInterface>,
               InternalVTableHelperCtorCaller<UComponentElementWorldInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComponentElementWorldInterface.InnerSingleton;
}

// UComponentElementWorldInterface @ 147b3a960

UComponentElementWorldInterface * __thiscall
UComponentElementWorldInterface::UComponentElementWorldInterface
          (UComponentElementWorldInterface *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementWorldInterface__;
  return this;
}

// UComponentElementWorldInterface @ 147b3a9a0

UComponentElementWorldInterface * __thiscall
UComponentElementWorldInterface::UComponentElementWorldInterface
          (UComponentElementWorldInterface *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementWorldInterface__;
  return this;
}

// ~UComponentElementWorldInterface @ 147b3d5a0

void __thiscall
UComponentElementWorldInterface::~UComponentElementWorldInterface
          (UComponentElementWorldInterface *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7ITypedElementWorldInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddIgnoredElementToCollisionQueryParams @ 147b43000

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
UComponentElementWorldInterface::AddIgnoredElementToCollisionQueryParams
          (UComponentElementWorldInterface *this,FTypedElementHandle *param_1,
          FCollisionQueryParams *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  USceneComponent *this_00;
  UClass *pUVar8;
  ForAnyElementType FVar9;
  undefined1 local_res20 [8];
  USceneComponent *local_58;
  longlong local_50;
  TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> local_48;
  TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> local_38;
  
  this_00 = (USceneComponent *)ComponentElementDataUtil::GetComponentFromHandle(param_1,false);
  if (this_00 == (USceneComponent *)0x0) {
LAB_147b4313b:
    this_00 = (USceneComponent *)0x0;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
  }
  else {
    pUVar8 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar6 = (int)pUVar8->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar6 * 8)
        != &pUVar8->_padding_)) goto LAB_147b4313b;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    pUVar8 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar6 = (int)pUVar8->_padding_;
    if ((iVar6 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar6 * 8)
        == &pUVar8->_padding_)) {
      local_58 = this_00;
      if (((local_48.AllocatorInstance.Data <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 <
           local_48.AllocatorInstance.Data + (longlong)local_48.ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar6 = local_48.ArrayNum;
      if (local_48.ArrayNum == local_48.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_48.AllocatorInstance,&local_48.ArrayMax);
      }
      local_48.ArrayNum = iVar6 + 1;
      *(USceneComponent **)(local_48.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_58;
      goto LAB_147b4314b;
    }
  }
  local_58 = (USceneComponent *)0x0;
LAB_147b4314b:
  if (param_3) {
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    if (this_00 != (USceneComponent *)0x0) {
      pUVar8 = Z_Construct_UClass_USceneComponent_NoRegister();
      iVar6 = (int)pUVar8->_padding_;
      if ((iVar6 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar6 * 8) ==
          &pUVar8->_padding_)) {
        USceneComponent::GetChildrenComponents(this_00,true,&local_38);
      }
    }
    iVar6 = local_38.ArrayNum;
    pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
    FVar9.Data = local_38.AllocatorInstance.Data;
    while( true ) {
      if (local_38.ArrayNum != iVar6) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (FVar9.Data == pFVar1) break;
      lVar2 = *(longlong *)FVar9.Data;
      if (lVar2 == 0) {
LAB_147b432ae:
        local_50 = 0;
        FVar9.Data = FVar9.Data + 8;
      }
      else {
        pUVar8 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
        iVar7 = (int)pUVar8->_padding_;
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar7) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar7 * 8) !=
            &pUVar8->_padding_)) goto LAB_147b432ae;
        local_50 = lVar2;
        if ((local_48.AllocatorInstance.Data <= (FScriptContainerElement *)&local_50) &&
           (((FScriptContainerElement *)&local_50 <
             local_48.AllocatorInstance.Data + (longlong)local_48.ArrayMax * 8 &&
            (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)))) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        iVar7 = local_48.ArrayNum;
        if (local_48.ArrayNum == local_48.ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_48.AllocatorInstance,&local_48.ArrayMax);
        }
        FVar9.Data = FVar9.Data + 8;
        local_48.ArrayNum = iVar7 + 1;
        *(longlong *)(local_48.AllocatorInstance.Data + (longlong)iVar7 * 8) = local_50;
      }
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  bVar4 = local_48.ArrayNum != 0;
  if (bVar4) {
    FCollisionQueryParams::AddIgnoredComponents(param_2,&local_48);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return bVar4;
}

// CanEditElement @ 147b4a5e0

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
UComponentElementWorldInterface::CanEditElement
          (UComponentElementWorldInterface *this,FTypedElementHandle *param_1)

{
  bool bVar1;
  UActorComponent *this_00;
  
  this_00 = ComponentElementDataUtil::GetComponentFromHandle(param_1,false);
  if (this_00 != (UActorComponent *)0x0) {
    bVar1 = UActorComponent::IsEditableWhenInherited(this_00);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// CanMoveElement @ 147b4a930

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
UComponentElementWorldInterface::CanMoveElement
          (UComponentElementWorldInterface *this,FTypedElementHandle *param_1,
          ETypedElementWorldType param_2)

{
  int iVar1;
  UActorComponent *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = ComponentElementDataUtil::GetComponentFromHandle(param_1,false);
  if (pUVar2 != (UActorComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if (((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
         == &pUVar3->_padding_)) &&
       ((param_2 == Editor || (*(char *)((longlong)&pUVar2[2]._padding_ + 3) == '\x02')))) {
      return true;
    }
  }
  return false;
}

// CanScaleElement @ 147b4ae70

bool __thiscall
UComponentElementWorldInterface::CanScaleElement
          (UComponentElementWorldInterface *this,FTypedElementHandle *param_1)

{
  return false;
}

// FindSuitableTransformAlongPath @ 147b61a70

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
UComponentElementWorldInterface::FindSuitableTransformAlongPath
          (UComponentElementWorldInterface *this,FTypedElementHandle *param_1,
          TVector<double> *param_2,TVector<double> *param_3,FCollisionShape *param_4,
          TArrayView<FTypedElementHandle_const_,int> *param_5,TTransform<double> *param_6)

{
  int iVar1;
  bool bVar2;
  UPrimitiveComponent *this_00;
  UWorld *pUVar3;
  FName *pFVar4;
  UClass *pUVar5;
  int *piVar6;
  undefined1 auStackY_158 [32];
  TStatId local_f8 [2];
  TArrayView<FTypedElementHandle_const_,int> local_e8;
  FCollisionQueryParams local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  this_00 = (UPrimitiveComponent *)ComponentElementDataUtil::GetComponentFromHandle(param_1,false);
  if ((this_00 == (UPrimitiveComponent *)0x0) ||
     ((pUVar3 = *(UWorld **)&this_00->field_0xb0, pUVar3 == (UWorld *)0x0 &&
      (pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_00),
      pUVar3 == (UWorld *)0x0)))) {
    bVar2 = false;
  }
  else {
    piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c);
    if ((*piVar6 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_FindSuitableTransformAlongPath =
           (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_bool___cdecl_UComponentElementWorldInterface::FindSuitableTransformAlongPath(FTypedElementHandle_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FCollisionShape_const_&,TArrayView<FTypedElementHandle_const_,int>,UE::Math::TTransform<double>_&)_::_8_::<lambda_2>::operator()(void)const_::_2_::FStat_FindSuitableTransformAlongPath>
            )0x0;
      pFVar4 = ::FName::FName((FName *)&local_e8,"FindSuitableTransformAlongPath");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_FindSuitableTransformAlongPath,*pFVar4,
                 L"FindSuitableTransformAlongPath","STATGROUP_CollisionTags","STATCAT_Advanced",
                 L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    local_f8[0].StatIdPtr = (TStatIdData *)StatPtr_FindSuitableTransformAlongPath;
    if (StatPtr_FindSuitableTransformAlongPath ==
        (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_bool___cdecl_UComponentElementWorldInterface::FindSuitableTransformAlongPath(FTypedElementHandle_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FCollisionShape_const_&,TArrayView<FTypedElementHandle_const_,int>,UE::Math::TTransform<double>_&)_::_8_::<lambda_2>::operator()(void)const_::_2_::FStat_FindSuitableTransformAlongPath>
         )0x0) {
      pFVar4 = ::FName::FName((FName *)&local_e8,"FindSuitableTransformAlongPath");
      local_f8[0].StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_FindSuitableTransformAlongPath,*pFVar4,
                      L"FindSuitableTransformAlongPath","STATGROUP_CollisionTags","STATCAT_Advanced"
                      ,L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
    }
    if ((*piVar6 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&::StaticName,"FindSuitableTransformAlongPath");
      _Init_thread_footer(&::_TSS0);
    }
    FCollisionQueryParams::FCollisionQueryParams
              (&local_d8,::StaticName,local_f8,false,(AActor *)0x0);
    pUVar5 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      FCollisionQueryParams::AddIgnoredComponent(&local_d8,this_00);
    }
    local_e8.DataPtr = param_5->DataPtr;
    local_e8.ArrayNum = param_5->ArrayNum;
    local_e8._12_4_ = *(undefined4 *)&param_5->field_0xc;
    bVar2 = UActorElementWorldInterface::FindSuitableTransformAlongPath_WorldSweep
                      (pUVar3,param_2,param_3,param_4,&local_e8,&local_d8,param_6);
    if (local_d8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_d8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_d8.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_d8.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
  }
  return bVar2;
}

// GetBounds @ 147b63f20

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
UComponentElementWorldInterface::GetBounds
          (UComponentElementWorldInterface *this,FTypedElementHandle *param_1,
          TBoxSphereBounds<double,double> *param_2)

{
  int iVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  UActorComponent *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = ComponentElementDataUtil::GetComponentFromHandle(param_1,false);
  if (pUVar4 != (UActorComponent *)0x0) {
    pUVar5 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      dVar2 = (double)pUVar4[1].PrimaryComponentTick._padding_;
      (param_2->Origin).field0_0x0._s_0.X = (double)pUVar4[1].PrimaryComponentTick._padding_;
      (param_2->Origin).field0_0x0._s_0.Y = dVar2;
      pFVar3 = pUVar4[1].ComponentTags.AllocatorInstance.Data;
      (param_2->Origin).field0_0x0._s_0.Z = (double)pUVar4[1].PrimaryComponentTick.Target;
      (param_2->BoxExtent).field0_0x0._s_0.X = (double)pFVar3;
      pFVar3 = pUVar4[1].AssetUserData.AllocatorInstance.Data;
      (param_2->BoxExtent).field0_0x0._s_0.Y = *(double *)&pUVar4[1].ComponentTags.ArrayNum;
      (param_2->BoxExtent).field0_0x0._s_0.Z = (double)pFVar3;
      param_2->SphereRadius = *(double *)&pUVar4[1].AssetUserData.ArrayNum;
      return true;
    }
  }
  return false;
}

// GetOwnerLevel @ 147b6a360

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
UComponentElementWorldInterface::GetOwnerLevel
          (UComponentElementWorldInterface *this,FTypedElementHandle *param_1)

{
  UActorComponent *pUVar1;
  ULevel *pUVar2;
  
  pUVar1 = ComponentElementDataUtil::GetComponentFromHandle(param_1,false);
  if ((pUVar1 != (UActorComponent *)0x0) && (pUVar1->OwnerPrivate != (AActor *)0x0)) {
    pUVar2 = AActor::GetLevel(pUVar1->OwnerPrivate);
    return pUVar2;
  }
  return (ULevel *)0x0;
}

// GetOwnerWorld @ 147b6a650

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
UComponentElementWorldInterface::GetOwnerWorld
          (UComponentElementWorldInterface *this,FTypedElementHandle *param_1)

{
  UActorComponent *this_00;
  UWorld *pUVar1;
  
  this_00 = ComponentElementDataUtil::GetComponentFromHandle(param_1,false);
  pUVar1 = (UWorld *)0x0;
  if ((this_00 != (UActorComponent *)0x0) &&
     (pUVar1 = this_00->WorldPrivate, pUVar1 == (UWorld *)0x0)) {
    pUVar1 = UActorComponent::GetWorld_Uncached(this_00);
    return pUVar1;
  }
  return pUVar1;
}

// GetPrivateStaticClass @ 147b6bad0

UClass * __cdecl UComponentElementWorldInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComponentElementWorldInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ComponentElementWorldInterface",
               &Z_Registration_Info_UClass_UComponentElementWorldInterface.InnerSingleton,
               StaticRegisterNativesUComponentElementWorldInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UComponentElementWorldInterface>,
               InternalVTableHelperCtorCaller<UComponentElementWorldInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComponentElementWorldInterface.InnerSingleton;
}

// GetRelativeTransform @ 147b6d4f0

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
UComponentElementWorldInterface::GetRelativeTransform
          (UComponentElementWorldInterface *this,FTypedElementHandle *param_1,
          TTransform<double> *param_2)

{
  int iVar1;
  double dVar2;
  USceneComponent *this_00;
  UClass *pUVar3;
  TTransform<double> *pTVar4;
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  this_00 = (USceneComponent *)ComponentElementDataUtil::GetComponentFromHandle(param_1,false);
  if (this_00 != (USceneComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      this_00 = (USceneComponent *)0x0;
    }
    if (this_00 != (USceneComponent *)0x0) {
      pTVar4 = USceneComponent::GetRelativeTransform(this_00,&local_78);
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
  }
  return false;
}

// GetWorldTransform @ 147b72c80

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
UComponentElementWorldInterface::GetWorldTransform
          (UComponentElementWorldInterface *this,FTypedElementHandle *param_1,
          TTransform<double> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  AActor *pAVar4;
  UActorComponent *pUVar5;
  UClass *pUVar6;
  
  pUVar5 = ComponentElementDataUtil::GetComponentFromHandle(param_1,false);
  if (pUVar5 != (UActorComponent *)0x0) {
    pUVar6 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      pFVar2 = pUVar5[2].AssetUserData.AllocatorInstance.Data;
      (param_2->Rotation).XY.m128d_f64[0] = *(double *)&pUVar5[2].ComponentTags.ArrayNum;
      (param_2->Rotation).XY.m128d_f64[1] = (double)pFVar2;
      dVar3 = *(double *)&pUVar5[2].field_0x88;
      (param_2->Rotation).ZW.m128d_f64[0] = *(double *)&pUVar5[2].AssetUserData.ArrayNum;
      (param_2->Rotation).ZW.m128d_f64[1] = dVar3;
      dVar3 = *(double *)&pUVar5[2].field_0x98;
      (param_2->Translation).XY.m128d_f64[0] = *(double *)&pUVar5[2].UCSSerializationIndex;
      (param_2->Translation).XY.m128d_f64[1] = dVar3;
      pAVar4 = pUVar5[2].OwnerPrivate;
      (param_2->Translation).ZW.m128d_f64[0] = (double)pUVar5[2].PhysicsStateAsyncCreationScene;
      (param_2->Translation).ZW.m128d_f64[1] = (double)pAVar4;
      dVar3 = *(double *)&pUVar5[2].field_0xb8;
      (param_2->Scale3D).XY.m128d_f64[0] = (double)pUVar5[2].WorldPrivate;
      (param_2->Scale3D).XY.m128d_f64[1] = dVar3;
      dVar3 = (double)pUVar5[3]._padding_;
      (param_2->Scale3D).ZW.m128d_f64[0] = (double)pUVar5[3]._padding_;
      (param_2->Scale3D).ZW.m128d_f64[1] = dVar3;
      return true;
    }
  }
  return false;
}

// IsTemplateElement @ 147b78570

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
UComponentElementWorldInterface::IsTemplateElement
          (UComponentElementWorldInterface *this,FTypedElementHandle *param_1)

{
  bool bVar1;
  UActorComponent *this_00;
  
  this_00 = ComponentElementDataUtil::GetComponentFromHandle(param_1,false);
  if (this_00 != (UActorComponent *)0x0) {
    bVar1 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this_00,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// SetRelativeTransform @ 147b8ce70

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
UComponentElementWorldInterface::SetRelativeTransform
          (UComponentElementWorldInterface *this,FTypedElementHandle *param_1,
          TTransform<double> *param_2)

{
  int iVar1;
  USceneComponent *this_00;
  UClass *pUVar2;
  
  this_00 = (USceneComponent *)ComponentElementDataUtil::GetComponentFromHandle(param_1,false);
  if (this_00 != (USceneComponent *)0x0) {
    pUVar2 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      USceneComponent::SetRelativeTransform(this_00,param_2,false,(FHitResult *)0x0,None);
      return true;
    }
  }
  return false;
}

// SetWorldTransform @ 147b8e070

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
UComponentElementWorldInterface::SetWorldTransform
          (UComponentElementWorldInterface *this,FTypedElementHandle *param_1,
          TTransform<double> *param_2)

{
  int iVar1;
  USceneComponent *this_00;
  UClass *pUVar2;
  
  this_00 = (USceneComponent *)ComponentElementDataUtil::GetComponentFromHandle(param_1,false);
  if (this_00 != (USceneComponent *)0x0) {
    pUVar2 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      USceneComponent::SetWorldTransform(this_00,param_2,false,(FHitResult *)0x0,None);
      return true;
    }
  }
  return false;
}

// StaticRegisterNativesUComponentElementWorldInterface @ 147b8ebb0

void __cdecl
UComponentElementWorldInterface::StaticRegisterNativesUComponentElementWorldInterface(void)

{
  return;
}

// _getUObject @ 147b91fd0

UObject * __thiscall
UComponentElementWorldInterface::_getUObject(UComponentElementWorldInterface *this)

{
  return (UObject *)&this[-1].field_0x8;
}

