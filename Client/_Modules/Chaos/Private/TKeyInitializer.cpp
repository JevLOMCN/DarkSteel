// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// operator<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>_>_TTuple<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>_> @ 1437c2c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<int,TMap<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>_>
* __thiscall
TKeyInitializer<int_const_&>::
operator<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>_>_TTuple<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>_>
          (TKeyInitializer<int_const_&> *this,
          TTuple<int,TMap<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>_>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(int *)__return_storage_ptr__ = *this->Key;
  TSet<TTuple<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            (&__return_storage_ptr__->field_0x8,
             (TSet<TTuple<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(local_68,0,local_68._8_4_);
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<int,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>_>_TTuple<int,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>_> @ 1437c2dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<int,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>_>
* __thiscall
TKeyInitializer<int_const_&>::
operator<int,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>_>_TTuple<int,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<int_const_&> *this,
          TTuple<int,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(int *)__return_storage_ptr__ = *this->Key;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  ::
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
            ((TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> @ 143a25560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> * __thiscall
TKeyInitializer<int_const_&>::
operator<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<int_const_&> *this,
          TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *__return_storage_ptr__
          )

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(int *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = 0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
  Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x8,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<TTuple<TObjectPtr<UObject>_const_,TObjectPtr<UObject>_const_,enum_Chaos::Softs::EDeformableConstraintType>,Chaos::Softs::FConstraintObjectParticleHandel>_TTuple<TTuple<TObjectPtr<UObject>_const_,TObjectPtr<UObject>_const_,enum_Chaos::Softs::EDeformableConstraintType>,Chaos::Softs::FConstraintObjectParticleHandel> @ 143a256b0

TTuple<TTuple<TObjectPtr<UObject>_const_,TObjectPtr<UObject>_const_,Chaos::Softs::EDeformableConstraintType>,Chaos::Softs::FConstraintObjectParticleHandel>
* __thiscall
TKeyInitializer<TTuple<TObjectPtr<UObject>_const_,TObjectPtr<UObject>_const_,enum_Chaos::Softs::EDeformableConstraintType>_const_&>
::
operator<TTuple<TObjectPtr<UObject>_const_,TObjectPtr<UObject>_const_,enum_Chaos::Softs::EDeformableConstraintType>,Chaos::Softs::FConstraintObjectParticleHandel>_TTuple<TTuple<TObjectPtr<UObject>_const_,TObjectPtr<UObject>_const_,enum_Chaos::Softs::EDeformableConstraintType>,Chaos::Softs::FConstraintObjectParticleHandel>
          (void *this,
          TTuple<TTuple<TObjectPtr<UObject>_const_,TObjectPtr<UObject>_const_,Chaos::Softs::EDeformableConstraintType>,Chaos::Softs::FConstraintObjectParticleHandel>
          *__return_storage_ptr__)

{
  undefined8 *puVar1;
  UObject *pUVar2;
  
  puVar1 = *(undefined8 **)this;
  pUVar2 = (UObject *)*puVar1;
  *(UObject **)__return_storage_ptr__ = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  pUVar2 = (UObject *)puVar1[1];
  *(UObject **)&__return_storage_ptr__->field_0x8 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = *(undefined4 *)(puVar1 + 2);
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0xffffffffffffffff;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  return __return_storage_ptr__;
}

// operator<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData>_TTuple<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData> @ 143aa11b0

TTuple<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData> * __thiscall
TKeyInitializer<Chaos::FSingleParticlePhysicsProxy_*_const_&>::
operator<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData>_TTuple<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData>
          (TKeyInitializer<Chaos::FSingleParticlePhysicsProxy_*_const_&> *this,
          TTuple<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData>
          *__return_storage_ptr__)

{
  FSingleParticlePhysicsProxy *pFVar1;
  
  pFVar1 = *this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(FSingleParticlePhysicsProxy **)__return_storage_ptr__ = pFVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  __return_storage_ptr__->field_0x90 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x60 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x68 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x70 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x78 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x80 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x88 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// operator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData>_TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData> @ 143cb3820

TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData>
* __thiscall
TKeyInitializer<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&>::
operator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData>_TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData>
          (TKeyInitializer<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&> *this,
          TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData>
          *__return_storage_ptr__)

{
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  memset(&local_a8,0,0xa0);
  *(TPBDRigidParticleHandleImp<double,3,1> **)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = local_a8;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = uStack_a0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = local_98;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = uStack_90;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = local_88;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = uStack_80;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = local_78;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = uStack_70;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = local_68;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = uStack_60;
  *(undefined8 *)&__return_storage_ptr__->field_0x60 = local_58;
  *(undefined8 *)&__return_storage_ptr__->field_0x68 = uStack_50;
  *(undefined8 *)&__return_storage_ptr__->field_0x70 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x78 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x80 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x88 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x90 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x98 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0xa0 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0xa8 = 0;
  return __return_storage_ptr__;
}

// operator<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> @ 143dbf220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> * __thiscall
TKeyInitializer<int_&&>::
operator<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<int_&&> *this,
          TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *__return_storage_ptr__
          )

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(int *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = 0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
  Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x8,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<__int64,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_TTuple<__int64,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> @ 143dbf370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<__int64,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> * __thiscall
TKeyInitializer<__int64_const_&>::
operator<__int64,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_TTuple<__int64,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<__int64_const_&> *this,
          TTuple<__int64,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(long64 *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = 0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
  Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x8,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

