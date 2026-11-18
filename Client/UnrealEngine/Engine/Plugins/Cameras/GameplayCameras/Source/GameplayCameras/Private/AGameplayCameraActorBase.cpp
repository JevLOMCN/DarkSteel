// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// StaticClass @ 14d5e2bc0

UClass * __cdecl AGameplayCameraActorBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGameplayCameraActorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"GameplayCameraActorBase",
               &Z_Registration_Info_UClass_AGameplayCameraActorBase.InnerSingleton,
               StaticRegisterNativesAGameplayCameraActorBase,0x2c0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AGameplayCameraActorBase>,
               InternalVTableHelperCtorCaller<AGameplayCameraActorBase>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGameplayCameraActorBase.InnerSingleton;
}

// AGameplayCameraActorBase @ 14d5fb220

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AGameplayCameraActorBase * __thiscall
AGameplayCameraActorBase::AGameplayCameraActorBase
          (AGameplayCameraActorBase *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  *(undefined ***)this = &___7AGameplayCameraActorBase__6B_;
  return this;
}

// AGameplayCameraActorBase @ 14d5fb250

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AGameplayCameraActorBase * __thiscall
AGameplayCameraActorBase::AGameplayCameraActorBase
          (AGameplayCameraActorBase *this,FObjectInitializer *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  *(undefined ***)this = &___7AGameplayCameraActorBase__6B_;
  return this;
}

// ~AGameplayCameraActorBase @ 14d600130

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameplayCameraActorBase::~AGameplayCameraActorBase(AGameplayCameraActorBase *this)

{
  *(undefined ***)this = &___7AGameplayCameraActorBase__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// CalcCamera @ 14d60ddb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AGameplayCameraActorBase::CalcCamera
          (AGameplayCameraActorBase *this,float param_1,FMinimalViewInfo *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  ulonglong uVar9;
  longlong *plVar10;
  UClass *pUVar11;
  undefined1 auStack_148 [32];
  undefined1 auStack_128 [8];
  UClass *pUStack_120;
  longlong alStack_118 [24];
  longlong *plStack_58;
  uint uStack_50;
  undefined4 uStack_4c;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  if ((this->field_0x5a & 0x20) == 0) goto LAB_1473856f1;
  pUVar8 = (UClass *)0x0;
  pUVar11 = (UClass *)0x0;
  uStack_4c = 0x18;
  plStack_58 = (longlong *)0x0;
  uStack_50 = 0;
  pUVar6 = Z_Construct_UClass_UCameraComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar6 != (UClass *)0x0) goto LAB_1473855d1;
  }
  else {
    pUVar11 = pUVar8;
    if (pUVar6 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
LAB_1473855d1:
      pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
      pUVar11 = pUVar8;
      if (pUVar7 != (UClass *)0x0) {
        iVar2 = (int)pUVar7->_padding_;
        if (((int)pUVar6->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar7->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          pUVar11 = pUVar6;
        }
      }
    }
  }
  pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUStack_120 = pUVar6;
  if (pUVar11 == pUVar8) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    AActor::
    ForEachComponent_Internal<UCameraComponent,1,0,_AActor::GetComponents<UCameraComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&pUStack_120,
               (TArray<UCameraComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)alStack_118);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    AActor::
    ForEachComponent_Internal<UCameraComponent,0,0,_AActor::GetComponents<UCameraComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&pUStack_120,
               (TArray<UCameraComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)alStack_118);
  }
  uVar5 = uStack_50;
  uVar9 = (ulonglong)(int)uStack_50;
  plVar10 = alStack_118;
  if (plStack_58 != (longlong *)0x0) {
    plVar10 = plStack_58;
  }
  plVar1 = plVar10 + uVar9;
  while( true ) {
    if ((uint)uVar9 != uVar5) {
      `TCheckedPointerIterator<UCameraComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStack_128);
      uVar9 = (ulonglong)uStack_50;
    }
    if (plVar10 == plVar1) break;
    plVar3 = (longlong *)*plVar10;
    if ((*(byte *)((longlong)plVar3 + 0x9a) & 0x10) != 0) {
      (**(code **)(*plVar3 + 0x660))(plVar3,param_1,param_2);
      if (plStack_58 != (longlong *)0x0) {
        FMemory::Free(plStack_58);
      }
      return;
    }
    plVar10 = plVar10 + 1;
  }
  if (plStack_58 != (longlong *)0x0) {
    FMemory::Free(plStack_58);
  }
LAB_1473856f1:
  (**(code **)(*(longlong *)this + 0x720))(this,param_2,&param_2->Rotation);
  return;
}

// GetCameraComponentBase @ 14d6193d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UGameplayCameraComponentBase * __thiscall
AGameplayCameraActorBase::GetCameraComponentBase(AGameplayCameraActorBase *this)

{
  return (UGameplayCameraComponentBase *)0x0;
}

// GetPrivateStaticClass @ 14d61b5e0

UClass * __cdecl AGameplayCameraActorBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGameplayCameraActorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"GameplayCameraActorBase",
               &Z_Registration_Info_UClass_AGameplayCameraActorBase.InnerSingleton,
               StaticRegisterNativesAGameplayCameraActorBase,0x2c0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AGameplayCameraActorBase>,
               InternalVTableHelperCtorCaller<AGameplayCameraActorBase>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGameplayCameraActorBase.InnerSingleton;
}

// StaticRegisterNativesAGameplayCameraActorBase @ 14d639000

void __cdecl AGameplayCameraActorBase::StaticRegisterNativesAGameplayCameraActorBase(void)

{
  return;
}

