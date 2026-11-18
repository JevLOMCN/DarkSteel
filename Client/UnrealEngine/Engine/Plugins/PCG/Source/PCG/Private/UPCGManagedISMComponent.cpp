// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 16

// StaticClass @ 149f1e8b0

UClass * __cdecl UPCGManagedISMComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGManagedISMComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGManagedISMComponent",
               &Z_Registration_Info_UClass_UPCGManagedISMComponent.InnerSingleton,
               StaticRegisterNativesUPCGManagedISMComponent,0x330,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGManagedISMComponent>,
               InternalVTableHelperCtorCaller<UPCGManagedISMComponent>,local_res8,
               UPCGManagedComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGManagedISMComponent.InnerSingleton;
}

// UPCGManagedISMComponent @ 149f32910

UPCGManagedISMComponent * __thiscall
UPCGManagedISMComponent::UPCGManagedISMComponent
          (UPCGManagedISMComponent *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7UPCGManagedComponent__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FUtf8String::Reset((FUtf8String *)&this->_padding_,0);
  this->bHasDescriptor = false;
  this->_padding_ = (longlong)&___7UPCGManagedISMComponent__6B_;
  FISMComponentDescriptor::FISMComponentDescriptor(&this->Descriptor);
  this->bHasRootLocation = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RootLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RootLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->RootLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->SettingsCrc).Value = 0;
  (this->SettingsCrc).bValid = false;
  (this->DataCrc).Value = 0;
  (this->DataCrc).bValid = false;
  return this;
}

// UPCGManagedISMComponent @ 149f329d0

UPCGManagedISMComponent * __thiscall
UPCGManagedISMComponent::UPCGManagedISMComponent
          (UPCGManagedISMComponent *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7UPCGManagedComponent__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FUtf8String::Reset((FUtf8String *)&this->_padding_,0);
  this->bHasDescriptor = false;
  this->_padding_ = (longlong)&___7UPCGManagedISMComponent__6B_;
  FISMComponentDescriptor::FISMComponentDescriptor(&this->Descriptor);
  this->bHasRootLocation = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RootLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RootLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->RootLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->SettingsCrc).Value = 0;
  (this->SettingsCrc).bValid = false;
  (this->DataCrc).Value = 0;
  (this->DataCrc).bValid = false;
  return this;
}

// ~UPCGManagedISMComponent @ 149f349c0

void __thiscall UPCGManagedISMComponent::~UPCGManagedISMComponent(UPCGManagedISMComponent *this)

{
  this->_padding_ = (longlong)&___7UPCGManagedISMComponent__6B_;
  FISMComponentDescriptor::~FISMComponentDescriptor(&this->Descriptor);
  this->_padding_ = (longlong)&___7UPCGManagedComponent__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UPCGManagedResource__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetComponent @ 149f48e40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UInstancedStaticMeshComponent * __thiscall
UPCGManagedISMComponent::GetComponent(UPCGManagedISMComponent *this)

{
  int iVar1;
  UInstancedStaticMeshComponent *pUVar2;
  UClass *pUVar3;
  bool bVar4;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId888,"UPCGManagedISMComponent::GetComponent",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGManagedResource.cpp"
               ,0x378);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId888);
  }
  pUVar2 = (UInstancedStaticMeshComponent *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar2 != (UInstancedStaticMeshComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      pUVar3 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) goto LAB_149f48ee5;
    }
  }
  pUVar2 = (UInstancedStaticMeshComponent *)0x0;
LAB_149f48ee5:
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar2;
}

// GetPrivateStaticClass @ 149f4d800

UClass * __cdecl UPCGManagedISMComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGManagedISMComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGManagedISMComponent",
               &Z_Registration_Info_UClass_UPCGManagedISMComponent.InnerSingleton,
               StaticRegisterNativesUPCGManagedISMComponent,0x330,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGManagedISMComponent>,
               InternalVTableHelperCtorCaller<UPCGManagedISMComponent>,local_res8,
               UPCGManagedComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGManagedISMComponent.InnerSingleton;
}

// MarkAsReused @ 149f54960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPCGManagedISMComponent::MarkAsReused(UPCGManagedISMComponent *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  UInstancedStaticMeshComponent *this_00;
  UInstancedStaticMeshComponent *pUVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  UInstancedStaticMeshComponent *pUVar16;
  longlong lVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStack_128 [32];
  double local_e0;
  TTransform<double> local_d8;
  ulonglong local_78;
  UPCGManagedISMComponent *pUVar15;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_128;
  UPCGManagedComponentBase::MarkAsReused((UPCGManagedComponentBase *)this);
  pUVar15 = this;
  this_00 = GetComponent(this);
  uVar11 = SUB84(pUVar15,0);
  if (this_00 == (UInstancedStaticMeshComponent *)0x0) {
    return;
  }
  local_e0 = (this->RootLocation).field0_0x0._s_0.Z;
  uVar25 = *(undefined4 *)&(this->RootLocation).field0_0x0;
  uVar26 = *(undefined4 *)((longlong)&(this->RootLocation).field0_0x0 + 4);
  uVar27 = *(undefined4 *)((longlong)&(this->RootLocation).field0_0x0 + 8);
  uVar28 = *(undefined4 *)((longlong)&(this->RootLocation).field0_0x0 + 0xc);
  pUVar10 = this_00;
  if (this->bHasRootLocation == false) {
    pUVar16 = this_00;
    pUVar10 = (UInstancedStaticMeshComponent *)
              USceneComponent::GetAttachmentRoot((USceneComponent *)this_00);
    uVar11 = SUB84(pUVar16,0);
    if (pUVar10 != (UInstancedStaticMeshComponent *)0x0) {
      local_e0 = (double)pUVar10->_padding_;
      uVar25 = (undefined4)pUVar10->_padding_;
      uVar26 = *(undefined4 *)((longlong)&pUVar10->_padding_ + 4);
      uVar27 = (undefined4)pUVar10->_padding_;
      uVar28 = *(undefined4 *)((longlong)&pUVar10->_padding_ + 4);
    }
  }
  local_d8.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
  local_d8.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
  dVar19 = (double)this_00->_padding_ - local_e0;
  dVar20 = (double)this_00->_padding_ - 0.0;
  dVar21 = (double)this_00->_padding_ - (double)CONCAT44(uVar26,uVar25);
  dVar23 = (double)this_00->_padding_ - (double)CONCAT44(uVar28,uVar27);
  local_d8.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
  local_d8.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
  lVar17 = -(ulonglong)
            (__real_3e45798ee2308c3a <
            (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar20,0) & _UNK_15061cc88));
  lVar18 = -(ulonglong)
            (__real_3e45798ee2308c3a <
            (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar23,0) & _UNK_15061cc88));
  auVar1._8_4_ = (int)lVar17;
  auVar1._0_8_ = -(ulonglong)
                  (__real_3e45798ee2308c3a <
                  (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar1._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
  uVar12 = movmskpd(uVar11,auVar1);
  auVar6._8_4_ = (int)lVar18;
  auVar6._0_8_ = -(ulonglong)
                  (__real_3e45798ee2308c3a <
                  (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar21,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar6._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
  iVar9 = movmskpd((int)pUVar10,auVar6);
  local_d8.Translation.ZW.m128d_f64[0] = local_e0;
  local_d8.Translation.ZW.m128d_f64[1] = 0.0;
  local_d8.Scale3D.XY.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_d8.Scale3D.XY.m128d_f64[1] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_d8.Scale3D.ZW.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_d8.Scale3D.ZW.m128d_f64[1] = 0.0;
  if ((uVar12 & 0x3fffffff) == 0 && iVar9 == 0) {
    dVar21 = UE::Math::TQuat<double>::Identity.Z + (double)this_00->_padding_;
    dVar23 = UE::Math::TQuat<double>::Identity.W + (double)this_00->_padding_;
    dVar19 = (double)this_00->_padding_ - UE::Math::TQuat<double>::Identity.Z;
    dVar20 = (double)this_00->_padding_ - UE::Math::TQuat<double>::Identity.W;
    dVar22 = (double)this_00->_padding_ - UE::Math::TQuat<double>::Identity.X;
    dVar24 = (double)this_00->_padding_ - UE::Math::TQuat<double>::Identity.Y;
    lVar17 = -(ulonglong)
              (__real_3e45798ee2308c3a <
              (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar20,0) & _UNK_15061cc88));
    auVar2._8_4_ = (int)lVar17;
    auVar2._0_8_ = -(ulonglong)
                    (__real_3e45798ee2308c3a <
                    (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar2._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    iVar13 = movmskpd(0,auVar2);
    lVar17 = -(ulonglong)
              (__real_3e45798ee2308c3a <
              (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar24,0) & _UNK_15061cc88));
    dVar19 = (double)this_00->_padding_ + UE::Math::TQuat<double>::Identity.X;
    dVar20 = (double)this_00->_padding_ + UE::Math::TQuat<double>::Identity.Y;
    auVar3._8_4_ = (int)lVar17;
    auVar3._0_8_ = -(ulonglong)
                    (__real_3e45798ee2308c3a <
                    (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar22,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar3._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    uVar12 = movmskpd(iVar9,auVar3);
    uVar14 = iVar13 << 2 | uVar12;
    if (uVar14 != 0) {
      lVar17 = -(ulonglong)
                (__real_3e45798ee2308c3a <
                (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar23,0) & _UNK_15061cc88));
      auVar4._8_4_ = (int)lVar17;
      auVar4._0_8_ = -(ulonglong)
                      (__real_3e45798ee2308c3a <
                      (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar21,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar4._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
      uVar14 = movmskpd(uVar14,auVar4);
      lVar17 = -(ulonglong)
                (__real_3e45798ee2308c3a <
                (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar20,0) & _UNK_15061cc88));
      auVar7._8_4_ = (int)lVar17;
      auVar7._0_8_ = -(ulonglong)
                      (__real_3e45798ee2308c3a <
                      (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar19,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar7._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
      uVar12 = movmskpd(uVar12,auVar7);
      if ((uVar14 & 0x3fffffff) != 0 || uVar12 != 0) goto LAB_149f54b79;
    }
    dVar19 = (double)this_00->_padding_ - UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    dVar20 = (double)this_00->_padding_ - 0.0;
    dVar21 = (double)this_00->_padding_ - UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    dVar23 = (double)this_00->_padding_ - UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    lVar17 = -(ulonglong)
              (__real_3e45798ee2308c3a <
              (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar20,0) & _UNK_15061cc88));
    auVar5._8_4_ = (int)lVar17;
    auVar5._0_8_ = -(ulonglong)
                    (__real_3e45798ee2308c3a <
                    (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar5._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    uVar14 = movmskpd(0,auVar5);
    lVar17 = -(ulonglong)
              (__real_3e45798ee2308c3a <
              (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar23,0) & _UNK_15061cc88));
    auVar8._8_4_ = (int)lVar17;
    auVar8._0_8_ = -(ulonglong)
                    (__real_3e45798ee2308c3a <
                    (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar21,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar8._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    iVar9 = movmskpd(uVar12,auVar8);
    if ((uVar14 & 0x3fffffff) == 0 && iVar9 == 0) {
      return;
    }
  }
LAB_149f54b79:
  local_d8.Translation.XY.m128d_f64[0]._0_4_ = uVar25;
  local_d8.Translation.XY.m128d_f64[0]._4_4_ = uVar26;
  local_d8.Translation.XY.m128d_f64[1]._0_4_ = uVar27;
  local_d8.Translation.XY.m128d_f64[1]._4_4_ = uVar28;
  UActorComponent::UnregisterComponent((UActorComponent *)this_00);
  USceneComponent::SetWorldTransform
            ((USceneComponent *)this_00,&local_d8,false,(FHitResult *)0x0,None);
  UActorComponent::RegisterComponent((UActorComponent *)this_00);
  return;
}

// MarkAsUsed @ 149f55240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPCGManagedISMComponent::MarkAsUsed(UPCGManagedISMComponent *this)

{
  double dVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined4 uVar13;
  int iVar14;
  UInstancedStaticMeshComponent *this_00;
  USceneComponent *pUVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  UInstancedStaticMeshComponent *pUVar19;
  longlong lVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_118 [32];
  TTransform<double> local_d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_118;
  lVar20 = this->_padding_;
  UPCGManagedComponentBase::MarkAsUsed((UPCGManagedComponentBase *)this);
  if ((char)lVar20 == '\0') {
    return;
  }
  this_00 = GetComponent(this);
  if (this_00 == (UInstancedStaticMeshComponent *)0x0) {
    return;
  }
  bVar2 = this->bHasRootLocation;
  pUVar19 = this_00;
  pUVar15 = USceneComponent::GetAttachmentRoot((USceneComponent *)this_00);
  if (pUVar15 == (USceneComponent *)0x0) {
    this->bHasRootLocation = false;
    uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar13 = 0;
    (this->RootLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
    ;
    (this->RootLocation).field0_0x0._s_0.Y = (double)uVar12;
    uVar21 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar22 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  }
  else {
    this->bHasRootLocation = true;
    dVar8 = (pUVar15->ComponentToWorld).Translation.XY.m128d_f64[1];
    dVar1 = (pUVar15->ComponentToWorld).Translation.ZW.m128d_f64[0];
    uVar21 = SUB84(dVar1,0);
    uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
    uVar13 = (undefined4)CONCAT71((int7)((ulonglong)pUVar15 >> 8),1);
    (this->RootLocation).field0_0x0._s_0.X = (pUVar15->ComponentToWorld).Translation.XY.m128d_f64[0]
    ;
    (this->RootLocation).field0_0x0._s_0.Y = dVar8;
  }
  (this->RootLocation).field0_0x0._s_0.Z = (double)CONCAT44(uVar22,uVar21);
  local_d8.Translation.XY.m128d_f64[0] = (this->RootLocation).field0_0x0._s_0.X;
  local_d8.Translation.XY.m128d_f64[1] = (this->RootLocation).field0_0x0._s_0.Y;
  local_d8.Translation.ZW.m128d_f64[0] = (this->RootLocation).field0_0x0._s_0.Z;
  local_d8.Scale3D.XY.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_d8.Scale3D.XY.m128d_f64[1] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_d8.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
  local_d8.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
  local_d8.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
  local_d8.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
  local_d8.Translation.ZW.m128d_f64[1] = 0.0;
  local_d8.Scale3D.ZW.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_d8.Scale3D.ZW.m128d_f64[1] = 0.0;
  if (bVar2 == SUB41(uVar13,0)) {
    dVar1 = (double)this_00->_padding_ - local_d8.Translation.ZW.m128d_f64[0];
    dVar8 = (double)this_00->_padding_ - 0.0;
    dVar23 = (double)this_00->_padding_ - local_d8.Translation.XY.m128d_f64[0];
    dVar25 = (double)this_00->_padding_ - local_d8.Translation.XY.m128d_f64[1];
    lVar20 = -(ulonglong)
              (__real_3e45798ee2308c3a <
              (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar8,0) & _UNK_15061cc88));
    auVar3._8_4_ = (int)lVar20;
    auVar3._0_8_ = -(ulonglong)
                    (__real_3e45798ee2308c3a <
                    (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
    ;
    auVar3._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
    uVar16 = movmskpd((int)pUVar19,auVar3);
    lVar20 = -(ulonglong)
              (__real_3e45798ee2308c3a <
              (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar25,0) & _UNK_15061cc88));
    auVar9._8_4_ = (int)lVar20;
    auVar9._0_8_ = -(ulonglong)
                    (__real_3e45798ee2308c3a <
                    (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar9._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
    iVar14 = movmskpd(uVar13,auVar9);
    if ((uVar16 & 0x3fffffff) == 0 && iVar14 == 0) {
      dVar23 = UE::Math::TQuat<double>::Identity.Z + (double)this_00->_padding_;
      dVar25 = UE::Math::TQuat<double>::Identity.W + (double)this_00->_padding_;
      dVar1 = (double)this_00->_padding_ - UE::Math::TQuat<double>::Identity.Z;
      dVar8 = (double)this_00->_padding_ - UE::Math::TQuat<double>::Identity.W;
      dVar24 = (double)this_00->_padding_ - UE::Math::TQuat<double>::Identity.X;
      dVar26 = (double)this_00->_padding_ - UE::Math::TQuat<double>::Identity.Y;
      lVar20 = -(ulonglong)
                (__real_3e45798ee2308c3a <
                (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar8,0) & _UNK_15061cc88));
      auVar4._8_4_ = (int)lVar20;
      auVar4._0_8_ = -(ulonglong)
                      (__real_3e45798ee2308c3a <
                      (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                                      ));
      auVar4._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
      iVar17 = movmskpd(0,auVar4);
      lVar20 = -(ulonglong)
                (__real_3e45798ee2308c3a <
                (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar26,0) & _UNK_15061cc88));
      dVar1 = (double)this_00->_padding_ + UE::Math::TQuat<double>::Identity.X;
      dVar8 = (double)this_00->_padding_ + UE::Math::TQuat<double>::Identity.Y;
      auVar5._8_4_ = (int)lVar20;
      auVar5._0_8_ = -(ulonglong)
                      (__real_3e45798ee2308c3a <
                      (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar24,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar5._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
      uVar16 = movmskpd(iVar14,auVar5);
      uVar18 = iVar17 << 2 | uVar16;
      if (uVar18 != 0) {
        lVar20 = -(ulonglong)
                  (__real_3e45798ee2308c3a <
                  (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar25,0) & _UNK_15061cc88));
        auVar6._8_4_ = (int)lVar20;
        auVar6._0_8_ = -(ulonglong)
                        (__real_3e45798ee2308c3a <
                        (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(dVar23,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar6._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
        uVar18 = movmskpd(uVar18,auVar6);
        lVar20 = -(ulonglong)
                  (__real_3e45798ee2308c3a <
                  (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar8,0) & _UNK_15061cc88));
        auVar10._8_4_ = (int)lVar20;
        auVar10._0_8_ =
             -(ulonglong)
              (__real_3e45798ee2308c3a <
              (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar10._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
        uVar16 = movmskpd(uVar16,auVar10);
        if ((uVar18 & 0x3fffffff) != 0 || uVar16 != 0) goto LAB_149f55494;
      }
      dVar1 = (double)this_00->_padding_ - UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      dVar8 = (double)this_00->_padding_ - 0.0;
      dVar23 = (double)this_00->_padding_ - UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      dVar25 = (double)this_00->_padding_ - UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      lVar20 = -(ulonglong)
                (__real_3e45798ee2308c3a <
                (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar8,0) & _UNK_15061cc88));
      auVar7._8_4_ = (int)lVar20;
      auVar7._0_8_ = -(ulonglong)
                      (__real_3e45798ee2308c3a <
                      (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                                      ));
      auVar7._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
      uVar18 = movmskpd(0,auVar7);
      lVar20 = -(ulonglong)
                (__real_3e45798ee2308c3a <
                (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar25,0) & _UNK_15061cc88));
      auVar11._8_4_ = (int)lVar20;
      auVar11._0_8_ =
           -(ulonglong)
            (__real_3e45798ee2308c3a <
            (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar11._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
      iVar14 = movmskpd(uVar16,auVar11);
      if ((uVar18 & 0x3fffffff) == 0 && iVar14 == 0) {
        return;
      }
    }
  }
LAB_149f55494:
  UActorComponent::UnregisterComponent((UActorComponent *)this_00);
  USceneComponent::SetWorldTransform
            ((USceneComponent *)this_00,&local_d8,false,(FHitResult *)0x0,None);
  UActorComponent::RegisterComponent((UActorComponent *)this_00);
  return;
}

// PostLoad @ 149f57f70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UPCGManagedISMComponent::PostLoad(UPCGManagedISMComponent *this)

{
  UObject::PostLoad((UObject *)this);
  GetComponent(this);
  return;
}

// ReleaseIfUnused @ 149f5cbe0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UPCGManagedISMComponent::ReleaseIfUnused
          (UPCGManagedISMComponent *this,
          TSet<TSoftObjectPtr<AActor>,DefaultKeyFuncs<TSoftObjectPtr<AActor>,0>,FDefaultSetAllocator>
          *param_1)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UInstancedStaticMeshComponent *pUVar4;
  
  if ((char)this->_padding_ != '\0') {
    (**(code **)(this->_padding_ + 0x2b8))(this,1,param_1);
    return true;
  }
  pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar2 == (UObject *)0x0) {
    return true;
  }
  pUVar3 = Z_Construct_UClass_UActorComponent_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if (*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) {
    return true;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      != &pUVar3->_padding_) {
    return true;
  }
  pUVar4 = GetComponent(this);
  if (pUVar4 == (UInstancedStaticMeshComponent *)0x0) {
    return true;
  }
  pUVar4 = GetComponent(this);
  iVar1 = UInstancedStaticMeshComponent::GetInstanceCount(pUVar4);
  if (iVar1 != 0) {
    return false;
  }
  pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_149f5cca3;
  }
  pUVar2 = (UObject *)0x0;
LAB_149f5cca3:
  (**(code **)(*(longlong *)pUVar2 + 0x4a0))(pUVar2,0);
  (**(code **)(this->_padding_ + 0x300))(this);
  return true;
}

// ResetComponent @ 149f5e3b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UPCGManagedISMComponent::ResetComponent(UPCGManagedISMComponent *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UInstancedStaticMeshComponent *pUVar1;
  
  (this->DataCrc).Value = 0;
  (this->DataCrc).bValid = false;
  *(undefined3 *)&(this->DataCrc).field_0x5 = 0;
  pUVar1 = GetComponent(this);
  if (pUVar1 != (UInstancedStaticMeshComponent *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0xc38))(pUVar1);
    UNRECOVERED_JUMPTABLE = *(code **)(pUVar1->_padding_ + 0x5b0);
                    /* WARNING: Could not recover jumptable at 0x000149f5e3ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pUVar1,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}

// SetComponent @ 149f60690

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UPCGManagedISMComponent::SetComponent
          (UPCGManagedISMComponent *this,UInstancedStaticMeshComponent *param_1)

{
  UInstancedStaticMeshComponent *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1 != (UInstancedStaticMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)&this->_padding_,(FObjectPtr)local_res8);
  return;
}

// SetDescriptor @ 149f60900

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UPCGManagedISMComponent::SetDescriptor
          (UPCGManagedISMComponent *this,FISMComponentDescriptor *param_1)

{
  UStaticMesh *pUVar1;
  UMaterialInterface *pUVar2;
  double dVar3;
  
  this->bHasDescriptor = true;
  FISMComponentDescriptorBase::operator=
            ((FISMComponentDescriptorBase *)&this->Descriptor,(FISMComponentDescriptorBase *)param_1
            );
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->StaticMesh).field0_0x0.DebugPtr, pUVar1 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Descriptor).StaticMesh.field0_0x0 = (param_1->StaticMesh).field0_0x0;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Descriptor).OverrideMaterials,&param_1->OverrideMaterials);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->OverlayMaterial).field0_0x0.DebugPtr, pUVar2 != (UMaterialInterface *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->Descriptor).OverlayMaterial.field0_0x0 = (param_1->OverlayMaterial).field0_0x0;
  TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Descriptor).RuntimeVirtualTextures,&param_1->RuntimeVirtualTextures);
  dVar3 = (param_1->LocalTransform).Rotation.XY.m128d_f64[1];
  (this->Descriptor).LocalTransform.Rotation.XY.m128d_f64[0] =
       (param_1->LocalTransform).Rotation.XY.m128d_f64[0];
  (this->Descriptor).LocalTransform.Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->LocalTransform).Rotation.ZW.m128d_f64[1];
  (this->Descriptor).LocalTransform.Rotation.ZW.m128d_f64[0] =
       (param_1->LocalTransform).Rotation.ZW.m128d_f64[0];
  (this->Descriptor).LocalTransform.Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->LocalTransform).Translation.XY.m128d_f64[1];
  (this->Descriptor).LocalTransform.Translation.XY.m128d_f64[0] =
       (param_1->LocalTransform).Translation.XY.m128d_f64[0];
  (this->Descriptor).LocalTransform.Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->LocalTransform).Translation.ZW.m128d_f64[1];
  (this->Descriptor).LocalTransform.Translation.ZW.m128d_f64[0] =
       (param_1->LocalTransform).Translation.ZW.m128d_f64[0];
  (this->Descriptor).LocalTransform.Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->LocalTransform).Scale3D.XY.m128d_f64[1];
  (this->Descriptor).LocalTransform.Scale3D.XY.m128d_f64[0] =
       (param_1->LocalTransform).Scale3D.XY.m128d_f64[0];
  (this->Descriptor).LocalTransform.Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->LocalTransform).Scale3D.ZW.m128d_f64[1];
  (this->Descriptor).LocalTransform.Scale3D.ZW.m128d_f64[0] =
       (param_1->LocalTransform).Scale3D.ZW.m128d_f64[0];
  (this->Descriptor).LocalTransform.Scale3D.ZW.m128d_f64[1] = dVar3;
  (this->Descriptor).StaticMeshComponent.WeakPtr = (param_1->StaticMeshComponent).WeakPtr;
  return;
}

// SetRootLocation @ 149f62bf0

void __thiscall
UPCGManagedISMComponent::SetRootLocation(UPCGManagedISMComponent *this,TVector<double> *param_1)

{
  double dVar1;
  
  this->bHasRootLocation = true;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->RootLocation).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->RootLocation).field0_0x0._s_0.Y = dVar1;
  (this->RootLocation).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return;
}

// StaticRegisterNativesUPCGManagedISMComponent @ 149f63a40

void __cdecl UPCGManagedISMComponent::StaticRegisterNativesUPCGManagedISMComponent(void)

{
  return;
}

// SupportsComponentReset @ 149f63cf0

bool __thiscall UPCGManagedISMComponent::SupportsComponentReset(UPCGManagedISMComponent *this)

{
  return true;
}

