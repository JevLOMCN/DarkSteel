// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// StaticClass @ 1482cd930

UClass * __cdecl UPhysicsObjectBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsObjectBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsObjectBlueprintLibrary",
               &Z_Registration_Info_UClass_UPhysicsObjectBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUPhysicsObjectBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPhysicsObjectBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UPhysicsObjectBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsObjectBlueprintLibrary.InnerSingleton;
}

// UPhysicsObjectBlueprintLibrary @ 1482dc090

UPhysicsObjectBlueprintLibrary * __thiscall
UPhysicsObjectBlueprintLibrary::UPhysicsObjectBlueprintLibrary
          (UPhysicsObjectBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPhysicsObjectBlueprintLibrary__6B_;
  return this;
}

// UPhysicsObjectBlueprintLibrary @ 1482dc0c0

UPhysicsObjectBlueprintLibrary * __thiscall
UPhysicsObjectBlueprintLibrary::UPhysicsObjectBlueprintLibrary
          (UPhysicsObjectBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPhysicsObjectBlueprintLibrary__6B_;
  return this;
}

// ~UPhysicsObjectBlueprintLibrary @ 1482de2c0

void __thiscall
UPhysicsObjectBlueprintLibrary::~UPhysicsObjectBlueprintLibrary
          (UPhysicsObjectBlueprintLibrary *this)

{
  *(undefined ***)this = &___7UPhysicsObjectBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// ApplyRadialImpulse @ 1482e7bb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UPhysicsObjectBlueprintLibrary::ApplyRadialImpulse
          (UPrimitiveComponent *param_1,TVector<double> *param_2,float param_3,float param_4,
          ERadialImpulseFalloff param_5,bool param_6,float param_7,bool param_8,float param_9,
          float param_10)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  FChaosScene *pFVar5;
  undefined8 local_res8;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_a8;
  TArrayView<Chaos::FPhysicsObject_*_const,int> local_98;
  TVector<double>_u_0 local_88;
  FScopedSceneLock_Chaos local_68;
  FWritePhysicsObjectInterface<0> local_50 [72];
  
  if ((param_1 != (UPrimitiveComponent *)0x0) && (param_1->bIgnoreRadialImpulse == '\0')) {
    local_res8 = 0;
    lVar4 = (**(code **)(*(longlong *)&param_1->field_0x260 + 0x18))
                      (&param_1->field_0x260,&local_res8);
    if (lVar4 != 0) {
      local_d8.Data = (FScriptContainerElement *)0x0;
      local_d0 = 0;
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_d8,(int *)((longlong)&local_d0 + 4));
      local_c8 = local_d8.Data;
      iStack_c0 = iVar3 + 1;
      local_d0 = CONCAT44(local_d0._4_4_,iStack_c0);
      *(longlong *)(local_d8.Data + (longlong)iVar3 * 8) = lVar4;
      if ((iStack_c0 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_a8._12_4_ = uStack_bc;
      local_a8.ArrayNum = iStack_c0;
      local_a8.DataPtr = (FPhysicsObject **)local_c8;
      pFVar5 = PhysicsObjectPhysicsCoreInterface::GetScene(&local_a8);
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos(&local_68,pFVar5,Write);
      iStack_b0 = (int)local_d0;
      local_88._s_0.Z = (param_2->field0_0x0)._s_0.Z;
      local_b8 = local_d8.Data;
      local_88._s_0.X = (param_2->field0_0x0)._s_0.X;
      local_88._s_0.Y = (param_2->field0_0x0)._s_0.Y;
      if (((int)local_d0 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_98._12_4_ = uStack_ac;
      local_98.ArrayNum = iStack_b0;
      local_98.DataPtr = (FPhysicsObject **)local_b8;
      Chaos::FWritePhysicsObjectInterface<0>::AddRadialImpulse
                (local_50,&local_98,(TVector<double> *)&local_88._s_0,param_3,param_4,param_5,
                 param_6,param_7,true,param_8,param_9,param_10);
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_68);
      if (local_d8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data);
      }
    }
  }
  return;
}

// ExtractClosestPhysicsObjectResults @ 148302020

bool __cdecl
UPhysicsObjectBlueprintLibrary::ExtractClosestPhysicsObjectResults
          (FClosestPhysicsObjectResult *param_1,FName *param_2)

{
  FName FVar1;
  
  if (param_1->PhysicsObject == (FPhysicsObject *)0x0) {
    return false;
  }
  FVar1 = FClosestPhysicsObjectResult::HitName(param_1);
  *param_2 = *(FName *)FVar1;
  return true;
}

// GetClosestPhysicsObjectFromWorldLocation @ 148307980

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FClosestPhysicsObjectResult * __cdecl
UPhysicsObjectBlueprintLibrary::GetClosestPhysicsObjectFromWorldLocation
          (FClosestPhysicsObjectResult *__return_storage_ptr__,UPrimitiveComponent *param_1,
          TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  FClosestPhysicsObjectResult *pFVar6;
  FChaosScene *pFVar7;
  FScriptContainerElement *pFVar8;
  FPhysicsObject *local_res8;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  FScriptContainerElement *local_e8;
  int local_e0;
  undefined4 local_dc;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  FPhysicsObject **local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_a8;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_98;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_88;
  FScopedSceneLock_Chaos local_78;
  FReadPhysicsObjectInterface<0> local_60 [8];
  FClosestPhysicsObjectResult local_58;
  
  if (param_1 == (UPrimitiveComponent *)0x0) {
    __return_storage_ptr__->PhysicsObject = (FPhysicsObject *)0x0;
    (__return_storage_ptr__->ClosestLocation).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->ClosestLocation).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->ClosestLocation).field0_0x0._s_0.Z = 0.0;
    __return_storage_ptr__->ClosestDistance = 0.0;
    return __return_storage_ptr__;
  }
  (**(code **)(*(longlong *)&param_1->field_0x260 + 0x20))(&param_1->field_0x260,&local_e8);
  iStack_d0 = local_e0;
  local_d8 = local_e8;
  if ((local_e0 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FClosestPhysicsObjectResult *)(*pcVar2)();
    return pFVar6;
  }
  local_a8.DataPtr = (FPhysicsObject **)local_d8;
  pFVar7 = PhysicsObjectPhysicsCoreInterface::GetScene(&local_a8);
  FScopedSceneLock_Chaos::FScopedSceneLock_Chaos(&local_78,pFVar7,Read);
  local_f0._0_4_ = 0;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  pFVar1 = local_e8 + (longlong)local_e0 * 8;
  pFVar8 = local_e8;
  if (local_e8 != pFVar1) {
    do {
      local_res8 = *(FPhysicsObject **)pFVar8;
      local_c8 = &local_res8;
      uStack_c0 = 1;
      local_98._12_4_ = uStack_bc;
      local_98.ArrayNum = 1;
      local_98.DataPtr = local_c8;
      bVar4 = Chaos::FReadPhysicsObjectInterface<0>::AreAllDisabled(local_60,&local_98);
      if (!bVar4) {
        if (((local_f8.Data <= pFVar8) && (pFVar8 < local_f8.Data + (longlong)local_f0._4_4_ * 8))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FClosestPhysicsObjectResult *)(*pcVar2)();
          return pFVar6;
        }
        iVar5 = (int)local_f0;
        if ((int)local_f0 == local_f0._4_4_) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_f8,(int *)((longlong)&local_f0 + 4));
        }
        local_f0 = CONCAT44(local_f0._4_4_,iVar5 + 1);
        *(undefined8 *)(local_f8.Data + (longlong)iVar5 * 8) = *(undefined8 *)pFVar8;
      }
      pFVar8 = pFVar8 + 8;
    } while (pFVar8 != pFVar1);
  }
  iStack_b0 = (int)local_f0;
  if (local_e8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8);
    iStack_b0 = (int)local_f0;
  }
  local_e8 = local_f8.Data;
  local_b8 = local_f8.Data;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_dc = local_f0._4_4_;
  local_f0 = 0;
  local_e0 = iStack_b0;
  if ((iStack_b0 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FClosestPhysicsObjectResult *)(*pcVar2)();
    return pFVar6;
  }
  local_88._12_4_ = uStack_ac;
  local_88.ArrayNum = iStack_b0;
  local_88.DataPtr = (FPhysicsObject **)local_b8;
  pFVar6 = Chaos::FReadPhysicsObjectInterface<0>::GetClosestPhysicsBodyFromLocation
                     (local_60,&local_58,&local_88,param_2);
  dVar3 = (pFVar6->ClosestLocation).field0_0x0._s_0.X;
  __return_storage_ptr__->PhysicsObject = pFVar6->PhysicsObject;
  (__return_storage_ptr__->ClosestLocation).field0_0x0._s_0.X = dVar3;
  dVar3 = (pFVar6->ClosestLocation).field0_0x0._s_0.Z;
  (__return_storage_ptr__->ClosestLocation).field0_0x0._s_0.Y =
       (pFVar6->ClosestLocation).field0_0x0._s_0.Y;
  (__return_storage_ptr__->ClosestLocation).field0_0x0._s_0.Z = dVar3;
  __return_storage_ptr__->ClosestDistance = pFVar6->ClosestDistance;
  FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_78);
  if (local_e8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8);
  }
  return __return_storage_ptr__;
}

// GetPhysicsObjectWorldTransform @ 14830b9d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TTransform<double> * __cdecl
UPhysicsObjectBlueprintLibrary::GetPhysicsObjectWorldTransform
          (TTransform<double> *__return_storage_ptr__,UPrimitiveComponent *param_1,FName param_2)

{
  FChaosScene *pFVar1;
  FPhysicsObject *local_res10;
  FName local_res18 [2];
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_38;
  FScopedSceneLock_Chaos local_28;
  FReadPhysicsObjectInterface<0> local_10 [8];
  
  if (param_1 != (UPrimitiveComponent *)0x0) {
    local_res18[0] = param_2;
    local_res10 = (FPhysicsObject *)
                  (**(code **)(*(longlong *)&param_1->field_0x260 + 0x18))
                            (&param_1->field_0x260,local_res18);
    if (local_res10 != (FPhysicsObject *)0x0) {
      local_38.ArrayNum = 1;
      local_38.DataPtr = &local_res10;
      pFVar1 = PhysicsObjectPhysicsCoreInterface::GetScene(&local_38);
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos(&local_28,pFVar1,Read);
      Chaos::FReadPhysicsObjectInterface<0>::GetTransform
                (local_10,__return_storage_ptr__,local_res10);
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
      return __return_storage_ptr__;
    }
  }
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14830c7c0

UClass * __cdecl UPhysicsObjectBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsObjectBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsObjectBlueprintLibrary",
               &Z_Registration_Info_UClass_UPhysicsObjectBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUPhysicsObjectBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPhysicsObjectBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UPhysicsObjectBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsObjectBlueprintLibrary.InnerSingleton;
}

// StaticRegisterNativesUPhysicsObjectBlueprintLibrary @ 148323be0

void __cdecl
UPhysicsObjectBlueprintLibrary::StaticRegisterNativesUPhysicsObjectBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UPhysicsObjectBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execApplyRadialImpulse @ 14832ca60

/* WARNING: Type propagation algorithm not settling */

void __cdecl
UPhysicsObjectBlueprintLibrary::execApplyRadialImpulse
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  FChaosScene *pFVar12;
  bool bVar13;
  bool bVar14;
  byte local_res10 [16];
  int local_res20 [2];
  int local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  ForAnyElementType local_160;
  undefined8 local_158;
  longlong local_150 [3];
  FScriptContainerElement *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  FScriptContainerElement *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  double local_118;
  double dStack_110;
  double local_108;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_f8;
  TArrayView<Chaos::FPhysicsObject_*_const,int> local_e8;
  TVector<double>_u_0 local_d8;
  FScopedSceneLock_Chaos local_b8;
  FWritePhysicsObjectInterface<0> local_a0 [120];
  
  local_150[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_150,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_150);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  local_164 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_164,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_164);
  }
  local_168 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
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
  bVar13 = local_res20[0] != 0;
  local_16c = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_16c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_16c);
  }
  local_178 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_178,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_178);
  }
  bVar14 = local_178 != 0;
  local_170 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_170,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_170);
  }
  local_174 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_174,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_174);
  }
  fVar8 = local_164;
  fVar7 = local_168;
  fVar6 = local_16c;
  fVar5 = local_170;
  fVar4 = local_174;
  bVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_150[0] != 0) && ((*(byte *)(local_150[0] + 0x280) & 0x10) == 0)) {
    local_150[1] = 0;
    lVar11 = (**(code **)(*(longlong *)(local_150[0] + 0x260) + 0x18))
                       ((longlong *)(local_150[0] + 0x260),local_150 + 1);
    if (lVar11 != 0) {
      local_160.Data = (FScriptContainerElement *)0x0;
      local_158 = 0;
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_160,(int *)((longlong)&local_158 + 4));
      local_138 = local_160.Data;
      iStack_130 = iVar10 + 1;
      local_158 = CONCAT44(local_158._4_4_,iStack_130);
      *(longlong *)(local_160.Data + (longlong)iVar10 * 8) = lVar11;
      if (iStack_130 < 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar9) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_f8._12_4_ = uStack_12c;
      local_f8.ArrayNum = iStack_130;
      local_f8.DataPtr = (FPhysicsObject **)local_138;
      pFVar12 = PhysicsObjectPhysicsCoreInterface::GetScene(&local_f8);
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos(&local_b8,pFVar12,Write);
      iStack_120 = (int)local_158;
      local_128 = local_160.Data;
      if ((int)local_158 < 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar9) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_e8._12_4_ = uStack_11c;
      local_e8.ArrayNum = iStack_120;
      local_d8._s_0.X = local_118;
      local_d8._s_0.Y = dStack_110;
      local_d8._s_0.Z = local_108;
      local_e8.DataPtr = (FPhysicsObject **)local_128;
      Chaos::FWritePhysicsObjectInterface<0>::AddRadialImpulse
                (local_a0,&local_e8,(TVector<double> *)&local_d8._s_0,fVar8,fVar7,(uint)bVar3,bVar13
                 ,fVar6,true,bVar14,fVar5,fVar4);
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_b8);
      if (local_160.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Data);
      }
    }
  }
  return;
}

// execExtractClosestPhysicsObjectResults @ 14832cf60

void __cdecl
UPhysicsObjectBlueprintLibrary::execExtractClosestPhysicsObjectResults
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FClosestPhysicsObjectResult *pFVar1;
  FProperty *pFVar2;
  FName FVar3;
  FClosestPhysicsObjectResult *this;
  uchar *puVar4;
  uchar local_res10 [16];
  FClosestPhysicsObjectResult local_48;
  
  local_48.ClosestDistance = 0.0;
  local_48.PhysicsObject = (FPhysicsObject *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pFVar1 = (FClosestPhysicsObjectResult *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_48;
  if (pFVar1 != (FClosestPhysicsObjectResult *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (this->PhysicsObject == (FPhysicsObject *)0x0) {
    *(undefined1 *)param_3 = 0;
  }
  else {
    FVar3 = FClosestPhysicsObjectResult::HitName(this);
    *(undefined8 *)puVar4 = *(undefined8 *)FVar3;
    *(undefined1 *)param_3 = 1;
  }
  return;
}

// execGetClosestPhysicsObjectFromWorldLocation @ 14832d1a0

void __cdecl
UPhysicsObjectBlueprintLibrary::execGetClosestPhysicsObjectFromWorldLocation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FChaosScene *pFVar6;
  FClosestPhysicsObjectResult *pFVar7;
  FScriptContainerElement *pFVar8;
  TVector<double> *pTVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  longlong local_res10;
  FPhysicsObject *local_res18;
  ForAnyElementType local_168;
  undefined8 local_160;
  FScriptContainerElement *local_158;
  int local_150;
  undefined4 local_14c;
  FScriptContainerElement *local_148;
  int iStack_140;
  FPhysicsObject **local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  FScriptContainerElement *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_e8;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_d8;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_c8;
  TVector<double> local_b8;
  FScopedSceneLock_Chaos local_a0;
  FReadPhysicsObjectInterface<0> local_88 [8];
  FClosestPhysicsObjectResult local_80 [2];
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  pTVar9 = &local_b8;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar9 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == 0) {
    local_118 = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    uVar10 = 0;
    uVar11 = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    uVar12 = uStack_108;
    uVar13 = uStack_104;
    uVar14 = uStack_100;
    uVar15 = uStack_fc;
    uVar16 = local_118;
    uVar17 = uStack_114;
    uVar18 = uStack_110;
    uVar19 = uStack_10c;
  }
  else {
    (**(code **)(*(longlong *)(local_res10 + 0x260) + 0x20))
              ((longlong *)(local_res10 + 0x260),&local_158);
    iStack_140 = local_150;
    local_148 = local_158;
    if ((local_150 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_e8.DataPtr = (FPhysicsObject **)local_148;
    pFVar6 = PhysicsObjectPhysicsCoreInterface::GetScene(&local_e8);
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos(&local_a0,pFVar6,Read);
    local_168.Data = (FScriptContainerElement *)0x0;
    local_160 = 0;
    pFVar1 = local_158 + (longlong)local_150 * 8;
    pFVar8 = local_158;
    local_160._0_4_ = 0;
    if (local_158 != pFVar1) {
      do {
        local_res18 = *(FPhysicsObject **)pFVar8;
        local_138 = &local_res18;
        uStack_130 = 1;
        local_d8._12_4_ = uStack_12c;
        local_d8.ArrayNum = 1;
        local_d8.DataPtr = local_138;
        bVar4 = Chaos::FReadPhysicsObjectInterface<0>::AreAllDisabled(local_88,&local_d8);
        if (!bVar4) {
          if (((local_168.Data <= pFVar8) &&
              (pFVar8 < local_168.Data + (longlong)local_160._4_4_ * 8)) &&
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
          iVar5 = (int)local_160;
          if ((int)local_160 == local_160._4_4_) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_168,(int *)((longlong)&local_160 + 4));
          }
          local_160 = CONCAT44(local_160._4_4_,iVar5 + 1);
          *(undefined8 *)(local_168.Data + (longlong)iVar5 * 8) = *(undefined8 *)pFVar8;
        }
        pFVar8 = pFVar8 + 8;
      } while (pFVar8 != pFVar1);
    }
    iStack_120 = (int)local_160;
    if (local_158 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158);
      iStack_120 = (int)local_160;
    }
    local_158 = local_168.Data;
    local_128 = local_168.Data;
    local_168.Data = (FScriptContainerElement *)0x0;
    local_14c = local_160._4_4_;
    local_160 = 0;
    local_150 = iStack_120;
    if ((iStack_120 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_c8._12_4_ = uStack_11c;
    local_c8.ArrayNum = iStack_120;
    local_c8.DataPtr = (FPhysicsObject **)local_128;
    pFVar7 = Chaos::FReadPhysicsObjectInterface<0>::GetClosestPhysicsBodyFromLocation
                       (local_88,local_80,&local_c8,pTVar9);
    uVar16 = *(undefined4 *)&pFVar7->PhysicsObject;
    uVar17 = *(undefined4 *)((longlong)&pFVar7->PhysicsObject + 4);
    uVar18 = *(undefined4 *)&(pFVar7->ClosestLocation).field0_0x0;
    uVar19 = *(undefined4 *)((longlong)&(pFVar7->ClosestLocation).field0_0x0 + 4);
    uVar12 = *(undefined4 *)((longlong)&(pFVar7->ClosestLocation).field0_0x0 + 8);
    uVar13 = *(undefined4 *)((longlong)&(pFVar7->ClosestLocation).field0_0x0 + 0xc);
    uVar14 = *(undefined4 *)((longlong)&(pFVar7->ClosestLocation).field0_0x0 + 0x10);
    uVar15 = *(undefined4 *)((longlong)&(pFVar7->ClosestLocation).field0_0x0 + 0x14);
    uVar10 = SUB84(pFVar7->ClosestDistance,0);
    uVar11 = (undefined4)((ulonglong)pFVar7->ClosestDistance >> 0x20);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_a0);
    if (local_158 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158);
    }
  }
  *(undefined4 *)param_3 = uVar16;
  *(undefined4 *)((longlong)param_3 + 4) = uVar17;
  *(undefined4 *)((longlong)param_3 + 8) = uVar18;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar19;
  *(undefined4 *)((longlong)param_3 + 0x10) = uVar12;
  *(undefined4 *)((longlong)param_3 + 0x14) = uVar13;
  *(undefined4 *)((longlong)param_3 + 0x18) = uVar14;
  *(undefined4 *)((longlong)param_3 + 0x1c) = uVar15;
  *(ulonglong *)((longlong)param_3 + 0x20) = CONCAT44(uVar11,uVar10);
  return;
}

// execGetPhysicsObjectWorldTransform @ 14832da60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPhysicsObjectBlueprintLibrary::execGetPhysicsObjectWorldTransform
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FChaosScene *pFVar2;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong local_f0;
  FPhysicsObject *local_e8 [2];
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_d8;
  undefined8 local_c8;
  FScopedSceneLock_Chaos local_c0;
  FReadPhysicsObjectInterface<0> local_a8 [16];
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_f0 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  local_f8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_c8 = local_f8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_f0 != 0) {
    local_e8[0] = (FPhysicsObject *)
                  (**(code **)(*(longlong *)(local_f0 + 0x260) + 0x18))
                            ((longlong *)(local_f0 + 0x260),&local_c8);
    if (local_e8[0] != (FPhysicsObject *)0x0) {
      local_d8.ArrayNum = 1;
      local_d8.DataPtr = local_e8;
      pFVar2 = PhysicsObjectPhysicsCoreInterface::GetScene(&local_d8);
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos(&local_c0,pFVar2,Read);
      Chaos::FReadPhysicsObjectInterface<0>::GetTransform(local_a8,&local_98,local_e8[0]);
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_c0);
      goto LAB_14832dbe0;
    }
  }
  local_98.Rotation.XY.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
  local_98.Rotation.XY.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
  local_98.Rotation.XY.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
  local_98.Rotation.XY.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
  local_98.Rotation.ZW.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
  local_98.Rotation.ZW.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
  local_98.Rotation.ZW.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
  local_98.Rotation.ZW.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
  local_98.Translation.XY.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
  local_98.Translation.XY.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
  local_98.Translation.XY.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
  local_98.Translation.XY.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
  local_98.Translation.ZW.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
  local_98.Translation.ZW.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
  local_98.Translation.ZW.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
  local_98.Translation.ZW.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
  local_98.Scale3D.XY.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
  local_98.Scale3D.XY.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
  local_98.Scale3D.XY.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
  local_98.Scale3D.XY.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
  local_98.Scale3D.ZW.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
  local_98.Scale3D.ZW.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
  local_98.Scale3D.ZW.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
  local_98.Scale3D.ZW.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
LAB_14832dbe0:
  *(undefined4 *)param_3 = local_98.Rotation.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 4) = local_98.Rotation.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 8) = local_98.Rotation.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0xc) = local_98.Rotation.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x10) = local_98.Rotation.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x14) = local_98.Rotation.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x18) = local_98.Rotation.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x1c) = local_98.Rotation.ZW.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x20) = local_98.Translation.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x24) = local_98.Translation.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x28) = local_98.Translation.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x2c) = local_98.Translation.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x30) = local_98.Translation.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x34) = local_98.Translation.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x38) = local_98.Translation.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x3c) = local_98.Translation.ZW.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x40) = local_98.Scale3D.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x44) = local_98.Scale3D.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x48) = local_98.Scale3D.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x4c) = local_98.Scale3D.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x50) = local_98.Scale3D.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x54) = local_98.Scale3D.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x58) = local_98.Scale3D.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x5c) = local_98.Scale3D.ZW.m128d_f64[1]._4_4_;
  return;
}

