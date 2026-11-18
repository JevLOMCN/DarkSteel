// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 8

// StaticClass @ 146300ef0

UClass * __cdecl UChaosSolverEngineBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosSolverEngineBlueprintLibrary.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosSolverEngine",L"ChaosSolverEngineBlueprintLibrary",
               &Z_Registration_Info_UClass_UChaosSolverEngineBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUChaosSolverEngineBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UChaosSolverEngineBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UChaosSolverEngineBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosSolverEngineBlueprintLibrary.InnerSingleton;
}

// UChaosSolverEngineBlueprintLibrary @ 14630a560

UChaosSolverEngineBlueprintLibrary * __thiscall
UChaosSolverEngineBlueprintLibrary::UChaosSolverEngineBlueprintLibrary
          (UChaosSolverEngineBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UChaosSolverEngineBlueprintLibrary__6B_;
  return this;
}

// UChaosSolverEngineBlueprintLibrary @ 14630a590

UChaosSolverEngineBlueprintLibrary * __thiscall
UChaosSolverEngineBlueprintLibrary::UChaosSolverEngineBlueprintLibrary
          (UChaosSolverEngineBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UChaosSolverEngineBlueprintLibrary__6B_;
  return this;
}

// ~UChaosSolverEngineBlueprintLibrary @ 14630b490

void __thiscall
UChaosSolverEngineBlueprintLibrary::~UChaosSolverEngineBlueprintLibrary
          (UChaosSolverEngineBlueprintLibrary *this)

{
  *(undefined ***)this = &___7UChaosSolverEngineBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// ConvertPhysicsCollisionToHitResult @ 14630dcc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHitResult * __cdecl
UChaosSolverEngineBlueprintLibrary::ConvertPhysicsCollisionToHitResult
          (FHitResult *__return_storage_ptr__,FChaosPhysicsCollisionInfo *param_1)

{
  double dVar1;
  UPrimitiveComponent *pUVar2;
  FWeakObjectPtr FVar3;
  IActorInstanceManagerInterface *pIVar4;
  double dVar5;
  int iVar6;
  EResolutionStatus EVar7;
  undefined3 uVar8;
  bool bVar9;
  UObject *pUVar10;
  FActorInstanceHandle *pFVar11;
  AActor *pAVar12;
  FWeakObjectPtr local_res8;
  UPrimitiveComponent *local_res10;
  FActorInstanceHandle local_38;
  
  memset(__return_storage_ptr__,0,0x100);
  pAVar12 = (AActor *)0x0;
  __return_storage_ptr__->MyItem = -1;
  __return_storage_ptr__->Time = 0.0;
  (__return_storage_ptr__->HitObjectHandle).ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (__return_storage_ptr__->HitObjectHandle).ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  local_38._29_2_ = 0;
  local_38._31_1_ = 0;
  local_38.ManagerInterface.InterfaceInstance = (IActorInstanceManagerInterface *)0x0;
  local_38.InstanceIndex = -1;
  local_38.ResolutionStatus = Invalid;
  (__return_storage_ptr__->HitObjectHandle).ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (__return_storage_ptr__->HitObjectHandle).InstanceIndex = -1;
  (__return_storage_ptr__->HitObjectHandle).ResolutionStatus = Invalid;
  *(undefined3 *)&(__return_storage_ptr__->HitObjectHandle).field_0x1d = 0;
  pUVar2 = (param_1->OtherComponent).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar2 != (UPrimitiveComponent *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UPrimitiveComponent *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (__return_storage_ptr__->Component).WeakPtr = local_res8;
  bVar9 = FWeakObjectPtr::IsValid(&(__return_storage_ptr__->Component).WeakPtr);
  if (bVar9) {
    pUVar10 = FWeakObjectPtr::Get(&(__return_storage_ptr__->Component).WeakPtr);
    pAVar12 = *(AActor **)&pUVar10[4].field_0x8;
  }
  pFVar11 = FActorInstanceHandle::FActorInstanceHandle(&local_38,pAVar12);
  FVar3 = (pFVar11->ManagerInterface).ObjectInstance.WeakPtr;
  (__return_storage_ptr__->HitObjectHandle).ReferenceObject.WeakPtr =
       (pFVar11->ReferenceObject).WeakPtr;
  (__return_storage_ptr__->HitObjectHandle).ManagerInterface.ObjectInstance.WeakPtr = FVar3;
  pIVar4 = (pFVar11->ManagerInterface).InterfaceInstance;
  iVar6 = pFVar11->InstanceIndex;
  EVar7 = pFVar11->ResolutionStatus;
  uVar8 = *(undefined3 *)&pFVar11->field_0x1d;
  __return_storage_ptr__->bBlockingHit = '\x01';
  (__return_storage_ptr__->HitObjectHandle).ManagerInterface.InterfaceInstance = pIVar4;
  (__return_storage_ptr__->HitObjectHandle).InstanceIndex = iVar6;
  (__return_storage_ptr__->HitObjectHandle).ResolutionStatus = EVar7;
  *(undefined3 *)&(__return_storage_ptr__->HitObjectHandle).field_0x1d = uVar8;
  dVar5 = (param_1->Normal).field0_0x0._s_0.Y;
  dVar1 = (param_1->Normal).field0_0x0._s_0.Z;
  *(double *)&__return_storage_ptr__->Normal = (param_1->Normal).field0_0x0._s_0.X;
  *(double *)&(__return_storage_ptr__->Normal).field_0x8 = dVar5;
  *(double *)&(__return_storage_ptr__->Normal).field_0x10 = dVar1;
  dVar5 = (param_1->Normal).field0_0x0._s_0.Y;
  dVar1 = (param_1->Normal).field0_0x0._s_0.Z;
  *(double *)&__return_storage_ptr__->ImpactNormal = (param_1->Normal).field0_0x0._s_0.X;
  *(double *)&(__return_storage_ptr__->ImpactNormal).field_0x8 = dVar5;
  *(double *)&(__return_storage_ptr__->ImpactNormal).field_0x10 = dVar1;
  dVar5 = (param_1->Location).field0_0x0._s_0.Y;
  dVar1 = (param_1->Location).field0_0x0._s_0.Z;
  *(double *)&__return_storage_ptr__->Location = (param_1->Location).field0_0x0._s_0.X;
  *(double *)&(__return_storage_ptr__->Location).field_0x8 = dVar5;
  *(double *)&(__return_storage_ptr__->Location).field_0x10 = dVar1;
  dVar5 = (param_1->Location).field0_0x0._s_0.Y;
  dVar1 = (param_1->Location).field0_0x0._s_0.Z;
  *(double *)&__return_storage_ptr__->ImpactPoint = (param_1->Location).field0_0x0._s_0.X;
  *(double *)&(__return_storage_ptr__->ImpactPoint).field_0x8 = dVar5;
  *(double *)&(__return_storage_ptr__->ImpactPoint).field_0x10 = dVar1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1463139e0

UClass * __cdecl UChaosSolverEngineBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosSolverEngineBlueprintLibrary.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosSolverEngine",L"ChaosSolverEngineBlueprintLibrary",
               &Z_Registration_Info_UClass_UChaosSolverEngineBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUChaosSolverEngineBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UChaosSolverEngineBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UChaosSolverEngineBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosSolverEngineBlueprintLibrary.InnerSingleton;
}

// StaticRegisterNativesUChaosSolverEngineBlueprintLibrary @ 146320330

void __cdecl
UChaosSolverEngineBlueprintLibrary::StaticRegisterNativesUChaosSolverEngineBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execConvertPhysicsCollisionToHitResult @ 146323bf0

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
UChaosSolverEngineBlueprintLibrary::execConvertPhysicsCollisionToHitResult
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  UObject *pUVar7;
  FActorInstanceHandle *pFVar8;
  undefined8 *puVar9;
  longlong lVar10;
  AActor *pAVar11;
  uchar *puVar12;
  FWeakObjectPtr local_res10;
  UObject *local_res18;
  FActorInstanceHandle local_1f8;
  uchar local_1d8 [16];
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double local_180;
  double dStack_178;
  double local_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double dStack_148;
  double local_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 local_74;
  byte local_6b;
  FWeakObjectPtr local_60;
  FWeakObjectPtr FStack_58;
  IActorInstanceManagerInterface *local_50;
  undefined8 uStack_48;
  FWeakObjectPtr local_40 [5];
  
  dStack_190 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_198 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  pAVar11 = (AActor *)0x0;
  local_120 = 0;
  local_1d8[0] = '\0';
  local_1d8[1] = '\0';
  local_1d8[2] = '\0';
  local_1d8[3] = '\0';
  local_1d8[4] = '\0';
  local_1d8[5] = '\0';
  local_1d8[6] = '\0';
  local_1d8[7] = '\0';
  local_1d8[8] = '\0';
  local_1d8[9] = '\0';
  local_1d8[10] = '\0';
  local_1d8[0xb] = '\0';
  local_1d8[0xc] = '\0';
  local_1d8[0xd] = '\0';
  local_1d8[0xe] = '\0';
  local_1d8[0xf] = '\0';
  local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_1a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_188 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_170 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_158 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_140 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_128 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_1b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_1a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_180 = local_198;
  dStack_178 = dStack_190;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_168 = local_198;
  dStack_160 = dStack_190;
  local_150 = local_198;
  dStack_148 = dStack_190;
  local_138 = local_198;
  dStack_130 = dStack_190;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1d8);
  }
  puVar12 = local_1d8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar12 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  memset(&local_118,0,0x100);
  pUVar7 = *(UObject **)(puVar12 + 8);
  local_1f8._29_2_ = 0;
  local_1f8._31_1_ = 0;
  local_1f8.ManagerInterface.InterfaceInstance = (IActorInstanceManagerInterface *)0x0;
  local_1f8.InstanceIndex = -1;
  local_1f8.ResolutionStatus = Invalid;
  local_74 = 0xffffffff;
  local_118._4_4_ = 0;
  local_60.ObjectIndex = 0;
  local_60.ObjectSerialNumber = 0;
  FStack_58.ObjectIndex = 0;
  FStack_58.ObjectSerialNumber = 0;
  uStack_48 = 0xffffffff;
  local_50 = (IActorInstanceManagerInterface *)0x0;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar7 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar7);
    }
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  local_40[0] = local_res10;
  bVar6 = FWeakObjectPtr::IsValid(local_40);
  if (bVar6) {
    pUVar7 = FWeakObjectPtr::Get(local_40);
    pAVar11 = *(AActor **)&pUVar7[4].field_0x8;
  }
  pFVar8 = FActorInstanceHandle::FActorInstanceHandle(&local_1f8,pAVar11);
  lVar10 = 2;
  local_60 = (pFVar8->ReferenceObject).WeakPtr;
  FStack_58 = (pFVar8->ManagerInterface).ObjectInstance.WeakPtr;
  local_6b = local_6b | 1;
  local_50 = (pFVar8->ManagerInterface).InterfaceInstance;
  uStack_48._0_4_ = pFVar8->InstanceIndex;
  uStack_48._4_1_ = pFVar8->ResolutionStatus;
  uStack_48._5_3_ = *(undefined3 *)&pFVar8->field_0x1d;
  local_d8 = *(undefined8 *)(puVar12 + 0x28);
  uStack_d0 = *(undefined8 *)(puVar12 + 0x30);
  uStack_c0 = *(undefined8 *)(puVar12 + 0x28);
  uStack_b8 = *(undefined8 *)(puVar12 + 0x30);
  local_c8 = *(undefined8 *)(puVar12 + 0x38);
  uStack_b0 = *(undefined8 *)(puVar12 + 0x38);
  local_f8 = *(undefined8 *)(puVar12 + 0x20);
  uStack_e0 = *(undefined8 *)(puVar12 + 0x20);
  local_108 = *(undefined8 *)(puVar12 + 0x10);
  uStack_100 = *(undefined8 *)(puVar12 + 0x18);
  uStack_f0 = *(undefined8 *)(puVar12 + 0x10);
  uStack_e8 = *(undefined8 *)(puVar12 + 0x18);
  puVar9 = &local_118;
  do {
    uVar2 = puVar9[1];
    uVar3 = puVar9[2];
    uVar4 = puVar9[3];
    *(undefined8 *)param_3 = *puVar9;
    *(undefined8 *)((longlong)param_3 + 8) = uVar2;
    uVar2 = puVar9[4];
    uVar5 = puVar9[5];
    *(undefined8 *)((longlong)param_3 + 0x10) = uVar3;
    *(undefined8 *)((longlong)param_3 + 0x18) = uVar4;
    uVar3 = puVar9[6];
    uVar4 = puVar9[7];
    *(undefined8 *)((longlong)param_3 + 0x20) = uVar2;
    *(undefined8 *)((longlong)param_3 + 0x28) = uVar5;
    uVar2 = puVar9[8];
    uVar5 = puVar9[9];
    *(undefined8 *)((longlong)param_3 + 0x30) = uVar3;
    *(undefined8 *)((longlong)param_3 + 0x38) = uVar4;
    uVar3 = puVar9[10];
    uVar4 = puVar9[0xb];
    *(undefined8 *)((longlong)param_3 + 0x40) = uVar2;
    *(undefined8 *)((longlong)param_3 + 0x48) = uVar5;
    uVar2 = puVar9[0xc];
    uVar5 = puVar9[0xd];
    *(undefined8 *)((longlong)param_3 + 0x50) = uVar3;
    *(undefined8 *)((longlong)param_3 + 0x58) = uVar4;
    uVar3 = puVar9[0xe];
    uVar4 = puVar9[0xf];
    *(undefined8 *)((longlong)param_3 + 0x60) = uVar2;
    *(undefined8 *)((longlong)param_3 + 0x68) = uVar5;
    *(undefined8 *)((longlong)param_3 + 0x70) = uVar3;
    *(undefined8 *)((longlong)param_3 + 0x78) = uVar4;
    lVar10 = lVar10 + -1;
    puVar9 = puVar9 + 0x10;
    param_3 = (undefined8 *)((longlong)param_3 + 0x80);
  } while (lVar10 != 0);
  return;
}

