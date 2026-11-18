// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 16

// StaticClass @ 14972d4d0

UClass * __cdecl UPCGManagedProceduralISMComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGManagedProceduralISMComponent.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGManagedProceduralISMComponent",
               &Z_Registration_Info_UClass_UPCGManagedProceduralISMComponent.InnerSingleton,
               StaticRegisterNativesUPCGManagedProceduralISMComponent,0x168,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGManagedProceduralISMComponent>,
               InternalVTableHelperCtorCaller<UPCGManagedProceduralISMComponent>,local_res8,
               UPCGManagedComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGManagedProceduralISMComponent.InnerSingleton;
}

// UPCGManagedProceduralISMComponent @ 14973bea0

UPCGManagedProceduralISMComponent * __thiscall
UPCGManagedProceduralISMComponent::UPCGManagedProceduralISMComponent
          (UPCGManagedProceduralISMComponent *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UPCGManagedComponent::UPCGManagedComponent((UPCGManagedComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGManagedProceduralISMComponent__6B_;
  FProceduralISMComponentDescriptor::FProceduralISMComponentDescriptor
            ((FProceduralISMComponentDescriptor *)&this->Descriptor);
  (this->Descriptor)._padding_ = (longlong)&___7FPCGProceduralISMComponentDescriptor__6B_;
  (this->Descriptor).ComponentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Descriptor).ComponentTags.ArrayNum = 0;
  (this->Descriptor).ComponentTags.ArrayMax = 0;
  this->bHasRootLocation = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RootLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RootLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->RootLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->SettingsUID = 0xffffffffffffffff;
  return this;
}

// UPCGManagedProceduralISMComponent @ 14973bf30

UPCGManagedProceduralISMComponent * __thiscall
UPCGManagedProceduralISMComponent::UPCGManagedProceduralISMComponent
          (UPCGManagedProceduralISMComponent *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UPCGManagedComponent::UPCGManagedComponent((UPCGManagedComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGManagedProceduralISMComponent__6B_;
  FProceduralISMComponentDescriptor::FProceduralISMComponentDescriptor
            ((FProceduralISMComponentDescriptor *)&this->Descriptor);
  (this->Descriptor)._padding_ = (longlong)&___7FPCGProceduralISMComponentDescriptor__6B_;
  (this->Descriptor).ComponentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Descriptor).ComponentTags.ArrayNum = 0;
  (this->Descriptor).ComponentTags.ArrayMax = 0;
  this->bHasRootLocation = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RootLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RootLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->RootLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->SettingsUID = 0xffffffffffffffff;
  return this;
}

// ~UPCGManagedProceduralISMComponent @ 14973e410

void __thiscall
UPCGManagedProceduralISMComponent::~UPCGManagedProceduralISMComponent
          (UPCGManagedProceduralISMComponent *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPCGManagedProceduralISMComponent__6B_;
  pFVar1 = (this->Descriptor).ComponentTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = (void *)(this->Descriptor)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->Descriptor)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->Descriptor)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UPCGManagedComponent::~UPCGManagedComponent((UPCGManagedComponent *)this);
  return;
}

// GetComponent @ 149754950

UPCGProceduralISMComponent * __thiscall
UPCGManagedProceduralISMComponent::GetComponent(UPCGManagedProceduralISMComponent *this)

{
  int iVar1;
  UPCGProceduralISMComponent *pUVar2;
  UClass *pUVar3;
  bool bVar4;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId607,"UPCGManagedProceduralISMComponent::GetComponent",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Components\\PCGProceduralISMComponent.cpp"
               ,0x25f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId607);
  }
  pUVar2 = (UPCGProceduralISMComponent *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar2 != (UPCGProceduralISMComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      pUVar3 = UPCGProceduralISMComponent::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) goto LAB_1497549f5;
    }
  }
  pUVar2 = (UPCGProceduralISMComponent *)0x0;
LAB_1497549f5:
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar2;
}

// GetPrivateStaticClass @ 14975c280

UClass * __cdecl UPCGManagedProceduralISMComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGManagedProceduralISMComponent.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGManagedProceduralISMComponent",
               &Z_Registration_Info_UClass_UPCGManagedProceduralISMComponent.InnerSingleton,
               StaticRegisterNativesUPCGManagedProceduralISMComponent,0x168,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGManagedProceduralISMComponent>,
               InternalVTableHelperCtorCaller<UPCGManagedProceduralISMComponent>,local_res8,
               UPCGManagedComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGManagedProceduralISMComponent.InnerSingleton;
}

// MarkAsReused @ 14976c920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPCGManagedProceduralISMComponent::MarkAsReused(UPCGManagedProceduralISMComponent *this)

{
  UPCGProceduralISMComponent *this_00;
  USceneComponent *pUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_d8 [32];
  double local_98;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  UPCGManagedComponentBase::MarkAsReused((UPCGManagedComponentBase *)this);
  this_00 = GetComponent(this);
  if (this_00 != (UPCGProceduralISMComponent *)0x0) {
    local_98 = (this->RootLocation).field0_0x0._s_0.Z;
    uVar2 = *(undefined4 *)&(this->RootLocation).field0_0x0;
    uVar3 = *(undefined4 *)((longlong)&(this->RootLocation).field0_0x0 + 4);
    uVar4 = *(undefined4 *)((longlong)&(this->RootLocation).field0_0x0 + 8);
    uVar5 = *(undefined4 *)((longlong)&(this->RootLocation).field0_0x0 + 0xc);
    if (this->bHasRootLocation == false) {
      pUVar1 = USceneComponent::GetAttachmentRoot((USceneComponent *)this_00);
      if (pUVar1 != (USceneComponent *)0x0) {
        local_98 = (pUVar1->ComponentToWorld).Translation.ZW.m128d_f64[0];
        uVar2 = *(undefined4 *)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64;
        uVar3 = *(undefined4 *)((longlong)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64 + 4);
        uVar4 = *(undefined4 *)((pUVar1->ComponentToWorld).Translation.XY.m128d_f64 + 1);
        uVar5 = *(undefined4 *)((longlong)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64 + 0xc)
        ;
      }
    }
    UActorComponent::UnregisterComponent((UActorComponent *)this_00);
    local_88.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
    local_88.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
    local_88.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
    local_88.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
    local_88.Translation.ZW.m128d_f64[0] = local_98;
    local_88.Translation.ZW.m128d_f64[1] = 0.0;
    local_88.Scale3D.XY.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    local_88.Scale3D.XY.m128d_f64[1] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    local_88.Scale3D.ZW.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    local_88.Scale3D.ZW.m128d_f64[1] = 0.0;
    local_88.Translation.XY.m128d_f64[0]._0_4_ = uVar2;
    local_88.Translation.XY.m128d_f64[0]._4_4_ = uVar3;
    local_88.Translation.XY.m128d_f64[1]._0_4_ = uVar4;
    local_88.Translation.XY.m128d_f64[1]._4_4_ = uVar5;
    USceneComponent::SetWorldTransform
              ((USceneComponent *)this_00,&local_88,false,(FHitResult *)0x0,None);
    UActorComponent::RegisterComponent((UActorComponent *)this_00);
  }
  return;
}

// MarkAsUsed @ 14976ca60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPCGManagedProceduralISMComponent::MarkAsUsed(UPCGManagedProceduralISMComponent *this)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  undefined8 uVar4;
  UPCGProceduralISMComponent *this_00;
  USceneComponent *pUVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_a8 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  lVar3 = this->_padding_;
  UPCGManagedComponentBase::MarkAsUsed((UPCGManagedComponentBase *)this);
  if ((char)lVar3 != '\0') {
    this_00 = GetComponent(this);
    if (this_00 != (UPCGProceduralISMComponent *)0x0) {
      pUVar5 = USceneComponent::GetAttachmentRoot((USceneComponent *)this_00);
      if (pUVar5 == (USceneComponent *)0x0) {
        this->bHasRootLocation = false;
        uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        (this->RootLocation).field0_0x0._s_0.X =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        (this->RootLocation).field0_0x0._s_0.Y = (double)uVar4;
        uVar6 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar7 = (undefined4)
                ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      }
      else {
        this->bHasRootLocation = true;
        dVar2 = (pUVar5->ComponentToWorld).Translation.XY.m128d_f64[1];
        dVar1 = (pUVar5->ComponentToWorld).Translation.ZW.m128d_f64[0];
        uVar6 = SUB84(dVar1,0);
        uVar7 = (undefined4)((ulonglong)dVar1 >> 0x20);
        (this->RootLocation).field0_0x0._s_0.X =
             (pUVar5->ComponentToWorld).Translation.XY.m128d_f64[0];
        (this->RootLocation).field0_0x0._s_0.Y = dVar2;
      }
      (this->RootLocation).field0_0x0._s_0.Z = (double)CONCAT44(uVar7,uVar6);
      UActorComponent::UnregisterComponent((UActorComponent *)this_00);
      local_78.Translation.XY.m128d_f64[0] = (this->RootLocation).field0_0x0._s_0.X;
      local_78.Translation.XY.m128d_f64[1] = (this->RootLocation).field0_0x0._s_0.Y;
      local_78.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
      local_78.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
      local_78.Translation.ZW.m128d_f64[0] = (this->RootLocation).field0_0x0._s_0.Z;
      local_78.Translation.ZW.m128d_f64[1] = 0.0;
      local_78.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
      local_78.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
      local_78.Scale3D.XY.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      local_78.Scale3D.XY.m128d_f64[1] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      local_78.Scale3D.ZW.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      local_78.Scale3D.ZW.m128d_f64[1] = 0.0;
      USceneComponent::SetWorldTransform
                ((USceneComponent *)this_00,&local_78,false,(FHitResult *)0x0,None);
      UActorComponent::RegisterComponent((UActorComponent *)this_00);
    }
  }
  return;
}

// PostLoad @ 14976e860

void __thiscall UPCGManagedProceduralISMComponent::PostLoad(UPCGManagedProceduralISMComponent *this)

{
  UObject::PostLoad((UObject *)this);
  GetComponent(this);
  return;
}

// ReleaseIfUnused @ 149774200

bool __thiscall
UPCGManagedProceduralISMComponent::ReleaseIfUnused
          (UPCGManagedProceduralISMComponent *this,
          TSet<TSoftObjectPtr<AActor>,DefaultKeyFuncs<TSoftObjectPtr<AActor>,0>,FDefaultSetAllocator>
          *param_1)

{
  int iVar1;
  bool bVar2;
  UPCGProceduralISMComponent *pUVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  bVar2 = UPCGManagedComponent::ReleaseIfUnused((UPCGManagedComponent *)this,param_1);
  if (bVar2) {
    return true;
  }
  pUVar3 = GetComponent(this);
  if (pUVar3 == (UPCGProceduralISMComponent *)0x0) {
    return true;
  }
  pUVar3 = GetComponent(this);
  if (pUVar3->NumInstances != 0) {
    return false;
  }
  pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14977426b;
  }
  pUVar4 = (UObject *)0x0;
LAB_14977426b:
  (**(code **)(*(longlong *)pUVar4 + 0x4a0))(pUVar4,0);
  (**(code **)(this->_padding_ + 0x300))(this);
  return true;
}

// ResetComponent @ 149775560

void __thiscall
UPCGManagedProceduralISMComponent::ResetComponent(UPCGManagedProceduralISMComponent *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UPCGProceduralISMComponent *pUVar1;
  
  pUVar1 = GetComponent(this);
  if (pUVar1 != (UPCGProceduralISMComponent *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(pUVar1->_padding_ + 0x5b0);
                    /* WARNING: Could not recover jumptable at 0x00014977557f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pUVar1,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}

// SetComponent @ 149775f70

void __thiscall
UPCGManagedProceduralISMComponent::SetComponent
          (UPCGManagedProceduralISMComponent *this,UPCGProceduralISMComponent *param_1)

{
  UPCGProceduralISMComponent *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UPCGProceduralISMComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)&this->_padding_,(FObjectPtr)local_res8);
  return;
}

// SetDescriptor @ 149776040

void __thiscall
UPCGManagedProceduralISMComponent::SetDescriptor
          (UPCGManagedProceduralISMComponent *this,FPCGProceduralISMComponentDescriptor *param_1)

{
  FProceduralISMComponentDescriptor::operator=
            ((FProceduralISMComponentDescriptor *)&this->Descriptor,
             (FProceduralISMComponentDescriptor *)param_1);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Descriptor).ComponentTags,&param_1->ComponentTags);
  return;
}

// SetRootLocation @ 149776b70

void __thiscall
UPCGManagedProceduralISMComponent::SetRootLocation
          (UPCGManagedProceduralISMComponent *this,TVector<double> *param_1)

{
  double dVar1;
  
  this->bHasRootLocation = true;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->RootLocation).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->RootLocation).field0_0x0._s_0.Y = dVar1;
  (this->RootLocation).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return;
}

// StaticRegisterNativesUPCGManagedProceduralISMComponent @ 1497787c0

void __cdecl
UPCGManagedProceduralISMComponent::StaticRegisterNativesUPCGManagedProceduralISMComponent(void)

{
  return;
}

// SupportsComponentReset @ 149778940

bool __thiscall
UPCGManagedProceduralISMComponent::SupportsComponentReset(UPCGManagedProceduralISMComponent *this)

{
  return true;
}

