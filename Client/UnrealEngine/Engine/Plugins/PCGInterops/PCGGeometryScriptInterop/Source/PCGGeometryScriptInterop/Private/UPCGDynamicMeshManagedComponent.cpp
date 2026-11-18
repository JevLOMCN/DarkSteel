// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 11

// StaticClass @ 14cedd4a0

UClass * __cdecl UPCGDynamicMeshManagedComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDynamicMeshManagedComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGDynamicMeshManagedComponent",
               &Z_Registration_Info_UClass_UPCGDynamicMeshManagedComponent.InnerSingleton,
               StaticRegisterNativesUPCGDynamicMeshManagedComponent,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGDynamicMeshManagedComponent>,
               InternalVTableHelperCtorCaller<UPCGDynamicMeshManagedComponent>,local_res8,
               UPCGManagedComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDynamicMeshManagedComponent.InnerSingleton;
}

// UPCGDynamicMeshManagedComponent @ 14cee3800

UPCGDynamicMeshManagedComponent * __thiscall
UPCGDynamicMeshManagedComponent::UPCGDynamicMeshManagedComponent
          (UPCGDynamicMeshManagedComponent *this,FVTableHelper *param_1)

{
  UPCGManagedComponent::UPCGManagedComponent((UPCGManagedComponent *)this,param_1);
  this->DataUID = 0xffffffffffffffff;
  this->_padding_ = (longlong)&___7UPCGDynamicMeshManagedComponent__6B_;
  return this;
}

// UPCGDynamicMeshManagedComponent @ 14cee3830

UPCGDynamicMeshManagedComponent * __thiscall
UPCGDynamicMeshManagedComponent::UPCGDynamicMeshManagedComponent
          (UPCGDynamicMeshManagedComponent *this,FObjectInitializer *param_1)

{
  UPCGManagedComponent::UPCGManagedComponent((UPCGManagedComponent *)this,param_1);
  this->DataUID = 0xffffffffffffffff;
  this->_padding_ = (longlong)&___7UPCGDynamicMeshManagedComponent__6B_;
  return this;
}

// ~UPCGDynamicMeshManagedComponent @ 14cee4ae0

void __thiscall
UPCGDynamicMeshManagedComponent::~UPCGDynamicMeshManagedComponent
          (UPCGDynamicMeshManagedComponent *this)

{
  this->_padding_ = (longlong)&___7UPCGDynamicMeshManagedComponent__6B_;
  UPCGManagedComponent::~UPCGManagedComponent((UPCGManagedComponent *)this);
  return;
}

// GetComponent @ 14cef1d50

UDynamicMeshComponent * __thiscall
UPCGDynamicMeshManagedComponent::GetComponent(UPCGDynamicMeshManagedComponent *this)

{
  int iVar1;
  UDynamicMeshComponent *pUVar2;
  UClass *pUVar3;
  bool bVar4;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId39,"UPCGDynamicMeshManagedComponent::GetComponent",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Resources\\PCGDynamicMeshManagedComponent.cpp"
               ,0x27);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId39);
  }
  pUVar2 = (UDynamicMeshComponent *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar2 != (UDynamicMeshComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      pUVar3 = Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) goto LAB_14cef1df5;
    }
  }
  pUVar2 = (UDynamicMeshComponent *)0x0;
LAB_14cef1df5:
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar2;
}

// GetPrivateStaticClass @ 14cef3320

UClass * __cdecl UPCGDynamicMeshManagedComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDynamicMeshManagedComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGDynamicMeshManagedComponent",
               &Z_Registration_Info_UClass_UPCGDynamicMeshManagedComponent.InnerSingleton,
               StaticRegisterNativesUPCGDynamicMeshManagedComponent,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGDynamicMeshManagedComponent>,
               InternalVTableHelperCtorCaller<UPCGDynamicMeshManagedComponent>,local_res8,
               UPCGManagedComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDynamicMeshManagedComponent.InnerSingleton;
}

// MarkAsReused @ 14cef41b0

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

void __thiscall UPCGDynamicMeshManagedComponent::MarkAsReused(UPCGDynamicMeshManagedComponent *this)

{
  UDynamicMeshComponent *this_00;
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
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  if (this_00 != (UDynamicMeshComponent *)0x0) {
    local_98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    pUVar1 = USceneComponent::GetAttachmentRoot((USceneComponent *)this_00);
    if (pUVar1 != (USceneComponent *)0x0) {
      local_98 = (pUVar1->ComponentToWorld).Translation.ZW.m128d_f64[0];
      uVar2 = *(undefined4 *)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64;
      uVar3 = *(undefined4 *)((longlong)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64 + 4);
      uVar4 = *(undefined4 *)((pUVar1->ComponentToWorld).Translation.XY.m128d_f64 + 1);
      uVar5 = *(undefined4 *)((longlong)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
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

// ResetComponent @ 14cef8a80

void __thiscall
UPCGDynamicMeshManagedComponent::ResetComponent(UPCGDynamicMeshManagedComponent *this)

{
  return;
}

// SetComponent @ 14cef9880

void __thiscall
UPCGDynamicMeshManagedComponent::SetComponent
          (UPCGDynamicMeshManagedComponent *this,UDynamicMeshComponent *param_1)

{
  UDynamicMeshComponent *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UDynamicMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)&this->_padding_,(FObjectPtr)local_res8);
  return;
}

// StaticRegisterNativesUPCGDynamicMeshManagedComponent @ 14cef9bc0

void __cdecl
UPCGDynamicMeshManagedComponent::StaticRegisterNativesUPCGDynamicMeshManagedComponent(void)

{
  return;
}

// SupportsComponentReset @ 14cef9ca0

bool __thiscall
UPCGDynamicMeshManagedComponent::SupportsComponentReset(UPCGDynamicMeshManagedComponent *this)

{
  return true;
}

