// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 15

// StaticClass @ 145eceb10

UClass * __cdecl UGrassInstancedStaticMeshComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGrassInstancedStaticMeshComponent.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"GrassInstancedStaticMeshComponent",
               &Z_Registration_Info_UClass_UGrassInstancedStaticMeshComponent.InnerSingleton,
               StaticRegisterNativesUGrassInstancedStaticMeshComponent,0xba0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UGrassInstancedStaticMeshComponent>,
               InternalVTableHelperCtorCaller<UGrassInstancedStaticMeshComponent>,local_res8,
               UHierarchicalInstancedStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGrassInstancedStaticMeshComponent.InnerSingleton;
}

// UGrassInstancedStaticMeshComponent @ 145ed9220

UGrassInstancedStaticMeshComponent * __thiscall
UGrassInstancedStaticMeshComponent::UGrassInstancedStaticMeshComponent
          (UGrassInstancedStaticMeshComponent *this,FVTableHelper *param_1)

{
  UHierarchicalInstancedStaticMeshComponent::UHierarchicalInstancedStaticMeshComponent
            ((UHierarchicalInstancedStaticMeshComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x650 = &___7UGrassInstancedStaticMeshComponent__6B_;
  return this;
}

// UGrassInstancedStaticMeshComponent @ 145ed92a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UGrassInstancedStaticMeshComponent * __thiscall
UGrassInstancedStaticMeshComponent::UGrassInstancedStaticMeshComponent
          (UGrassInstancedStaticMeshComponent *this,FObjectInitializer *param_1)

{
  UHierarchicalInstancedStaticMeshComponent::UHierarchicalInstancedStaticMeshComponent
            ((UHierarchicalInstancedStaticMeshComponent *)this,param_1);
  this->field_0xb90 = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x650 = &___7UGrassInstancedStaticMeshComponent__6B_;
  FPrimitiveInstanceDataManager::SetMode
            ((FPrimitiveInstanceDataManager *)&this->field_0x7a0,ExternalLegacyData);
  return this;
}

// ~UGrassInstancedStaticMeshComponent @ 145eda500

void __thiscall
UGrassInstancedStaticMeshComponent::~UGrassInstancedStaticMeshComponent
          (UGrassInstancedStaticMeshComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x650 = &___7UGrassInstancedStaticMeshComponent__6B_;
  UHierarchicalInstancedStaticMeshComponent::~UHierarchicalInstancedStaticMeshComponent
            ((UHierarchicalInstancedStaticMeshComponent *)this);
  return;
}

// operator() @ 145edb350

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`UGrassInstancedStaticMeshComponent::BuildComponentInstanceData'::__l2::<lambda_1>::operator()
          (void *this,FISMInstanceUpdateChangeSet *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_28 [32];
  
  iVar5 = (int)param_1->_padding_;
  if ((((char)param_1->_padding_ == '\0') && (*(char *)((longlong)&param_1->_padding_ + 6) == '\0'))
     && (iVar4 = *(int *)((longlong)&param_1->_padding_ + 4) + (int)param_1->_padding_,
        iVar4 != iVar5)) {
    iVar5 = iVar4;
  }
  if ((iVar5 != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChangeSet.GetTransformDelta().IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Foliage\\Private\\InstancedGrass.cpp"
                         ,0x80,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((int)param_1->_padding_ != 0) && ((param_1->_padding_ & 0x20000) != 0)) {
    iVar5 = (int)param_1->_padding_;
    if (((char)param_1->_padding_ == '\0') &&
       (iVar4 = (int)param_1->_padding_ + (int)param_1->_padding_, iVar4 != iVar5)) {
      iVar5 = iVar4;
    }
    if ((iVar5 != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ChangeSet.GetCustomDataDelta().IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Foliage\\Private\\InstancedGrass.cpp"
                           ,0x81,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UInstancedStaticMeshComponent::BuildInstanceDataDeltaChangeSetCommon
            (*(UInstancedStaticMeshComponent **)this,param_1);
  puVar3 = (undefined8 *)(**(code **)(**(longlong **)this + 0xc58))(*(longlong **)this,local_28);
  uVar6 = (uint)*puVar3 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar7 = (uint)((ulonglong)*puVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar7,uVar6) &&
         (double)CONCAT44(uVar7,uVar6) != __real_3f1a36e2e0000000) ||
       (uVar6 = (uint)puVar3[1] & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar7 = (uint)((ulonglong)puVar3[1] >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar7,uVar6) &&
       (double)CONCAT44(uVar7,uVar6) != __real_3f1a36e2e0000000)) ||
      (uVar6 = (uint)puVar3[2] & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar7 = (uint)((ulonglong)puVar3[2] >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar7,uVar6) &&
      (double)CONCAT44(uVar7,uVar6) != __real_3f1a36e2e0000000)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetTranslatedInstanceSpaceOrigin().IsNearlyZero()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Foliage\\Private\\InstancedGrass.cpp"
                         ,0x84,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((*(int *)(*(longlong *)this + 0x660) != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PerInstanceSMData.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Foliage\\Private\\InstancedGrass.cpp"
                         ,0x85,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((*(int *)(*(longlong *)this + 0x670) != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PerInstancePrevTransform.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Foliage\\Private\\InstancedGrass.cpp"
                         ,0x86,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((*(int *)(*(longlong *)this + 0x728) != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceReorderTable.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Foliage\\Private\\InstancedGrass.cpp"
                         ,0x88,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((param_1->LegacyInstanceReorderTable).ArrayNum != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChangeSet.LegacyInstanceReorderTable.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Foliage\\Private\\InstancedGrass.cpp"
                         ,0x89,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// AcceptPrebuiltTree @ 145edc690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145edcc2f) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UGrassInstancedStaticMeshComponent::AcceptPrebuiltTree
          (UGrassInstancedStaticMeshComponent *this,
          TArray<FClusterNode,TSizedDefaultAllocator<32>_> *param_1,int param_2,int param_3,
          FStaticMeshInstanceData *param_4)

{
  int *piVar1;
  UStaticMesh *this_00;
  FScriptContainerElement *pFVar2;
  FStaticMeshVertexDataInterface *pFVar3;
  code *pcVar4;
  double dVar5;
  uchar *puVar6;
  uchar *puVar7;
  FStaticMeshVertexDataInterface *pFVar8;
  uchar *puVar9;
  FStaticMeshVertexDataInterface *pFVar10;
  uchar *puVar11;
  FStaticMeshVertexDataInterface *pFVar12;
  uchar *puVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  uchar uVar19;
  uchar uVar20;
  uchar uVar21;
  uchar uVar22;
  uchar uVar23;
  uchar uVar24;
  uchar uVar25;
  int iVar26;
  undefined7 uVar27;
  int iVar28;
  int iVar29;
  FStaticMeshInstanceData *pFVar30;
  bool bVar31;
  undefined7 uVar32;
  undefined8 uVar33;
  TUniquePtr<FStaticMeshInstanceData,TDefaultDelete<FStaticMeshInstanceData>_> TVar34;
  bool bVar35;
  bool bVar36;
  uint uVar37;
  FName *pFVar38;
  FThreadSafeStaticStat<_public:_void___cdecl_UGrassInstancedStaticMeshComponent::AcceptPrebuiltTree(TArray<FClusterNode,TSizedDefaultAllocator<32>_>_&,int,int,FStaticMeshInstanceData_*)_::_2_::FStat_STAT_UGrassInstancedStaticMeshComponent_AcceptPrebuiltTree>
  FVar39;
  TArray<FClusterNode,TSizedDefaultAllocator<32>_> *pTVar40;
  TArray<FClusterNode,TSizedDefaultAllocator<32>_> *pTVar41;
  TBox<double> *pTVar42;
  FThreadSafeStaticStat<_public:_void___cdecl_UGrassInstancedStaticMeshComponent::AcceptPrebuiltTree(TArray<FClusterNode,TSizedDefaultAllocator<32>_>_&,int,int,FStaticMeshInstanceData_*)_::_2_::FStat_STAT_UGrassInstancedStaticMeshComponent_AcceptPrebuiltTree_Mark>
  FVar43;
  FStaticMeshInstanceData *pFVar44;
  FStaticMeshInstanceData *pFVar45;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FColor_u_0 FVar46;
  FNameEntryId FVar47;
  FName FVar48;
  FName FVar49;
  undefined1 auStackY_1a8 [32];
  FColor_u_0 local_148;
  uint uStack_144;
  uint local_140;
  uint uStack_13c;
  FColor_u_0 local_138 [2];
  TArray<TRefCountPtr<HHitProxy>,TSizedDefaultAllocator<32>_> local_130;
  FColor_u_0 local_120;
  uint local_11c;
  FName local_118;
  FStaticMeshInstanceData *local_110;
  TUniquePtr<FStaticMeshInstanceData,TDefaultDelete<FStaticMeshInstanceData>_> local_108;
  FName local_100;
  FName local_f0;
  TRawPtrProxy<TArray<FClusterNode,TSizedDefaultAllocator<32>_>_> local_e0;
  LARGE_INTEGER local_d8;
  FStatMessage local_d0;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  TVector<double>_u_0 local_a0;
  TBox<double> local_88;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_110 = param_4;
  pTVar41 = (TArray<FClusterNode,TSizedDefaultAllocator<32>_> *)0x0;
  local_140 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_UGrassInstancedStaticMeshComponent_AcceptPrebuiltTree =
         (FThreadSafeStaticStat<_public:_void___cdecl_UGrassInstancedStaticMeshComponent::AcceptPrebuiltTree(TArray<FClusterNode,TSizedDefaultAllocator<32>_>_&,int,int,FStaticMeshInstanceData_*)_::_2_::FStat_STAT_UGrassInstancedStaticMeshComponent_AcceptPrebuiltTree>
          )0x0;
    pFVar38 = ::FName::FName(&local_c0,"STAT_UGrassInstancedStaticMeshComponent_AcceptPrebuiltTree")
    ;
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_UGrassInstancedStaticMeshComponent_AcceptPrebuiltTree,*pFVar38,
               L"STAT_UGrassInstancedStaticMeshComponent_AcceptPrebuiltTree","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar39 = StatPtr_STAT_UGrassInstancedStaticMeshComponent_AcceptPrebuiltTree;
  if (StatPtr_STAT_UGrassInstancedStaticMeshComponent_AcceptPrebuiltTree ==
      (FThreadSafeStaticStat<_public:_void___cdecl_UGrassInstancedStaticMeshComponent::AcceptPrebuiltTree(TArray<FClusterNode,TSizedDefaultAllocator<32>_>_&,int,int,FStaticMeshInstanceData_*)_::_2_::FStat_STAT_UGrassInstancedStaticMeshComponent_AcceptPrebuiltTree>
       )0x0) {
    pFVar38 = ::FName::FName(&local_b8,"STAT_UGrassInstancedStaticMeshComponent_AcceptPrebuiltTree")
    ;
    FVar39 = (FThreadSafeStaticStat<_public:_void___cdecl_UGrassInstancedStaticMeshComponent::AcceptPrebuiltTree(TArray<FClusterNode,TSizedDefaultAllocator<32>_>_&,int,int,FStaticMeshInstanceData_*)_::_2_::FStat_STAT_UGrassInstancedStaticMeshComponent_AcceptPrebuiltTree>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_UGrassInstancedStaticMeshComponent_AcceptPrebuiltTree,
                          *pFVar38,L"STAT_UGrassInstancedStaticMeshComponent_AcceptPrebuiltTree",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar49 = *(FName *)FVar39;
  bVar15 = false;
  bVar18 = false;
  local_100.ComparisonIndex.Value = 0;
  local_100.Number = 0;
  FVar46.Bits = (uint)FVar49.ComparisonIndex.Value;
  uVar37 = FVar49.Number;
  if ((FVar46.Bits == 0) && (uVar37 == 0)) {
LAB_145edc8aa:
    bVar16 = false;
    FVar49 = local_100;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_138[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_138[0]._s_0,(char *)*(FName *)((longlong)FVar39 + 0x10));
      bVar15 = false;
      bVar18 = true;
      if (-1 < CpuChannel->Enabled) {
        local_120.Bits = FVar46.Bits;
        local_11c = uVar37;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_120._s_0,(wchar_t *)*(FName *)((longlong)FVar39 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Foliage\\Private\\InstancedGrass.cpp"
                   ,0x31);
        bVar15 = true;
        bVar18 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145edc8aa;
    local_148.Bits = FVar46.Bits;
    uStack_144 = uVar37;
    FThreadStats::AddMessage(FVar49,CycleScopeStart);
    bVar16 = true;
  }
  if ((*(int *)&this->field_0x660 != 0) &&
     (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                         ("!PerInstanceSMData.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Foliage\\Private\\InstancedGrass.cpp"
                          ,0x34,L""), bVar35)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)&this->field_0xa40 = 0;
  uVar33 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&this->field_0xa18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&this->field_0xa20 = uVar33;
  *(double *)&this->field_0xa28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(int *)&this->field_0xa44 = param_3;
  if ((param_3 == 0) &&
     (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumBuiltRenderInstances",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Foliage\\Private\\InstancedGrass.cpp"
                          ,0x39,L""), bVar35)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar33 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&this->field_0xa98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&this->field_0xaa0 = uVar33;
  *(double *)&this->field_0xaa8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->field_0xab0 = 0;
  *(undefined8 *)&this->field_0xa80 = *(undefined8 *)&this->field_0xa98;
  *(undefined8 *)&this->field_0xa88 = *(undefined8 *)&this->field_0xaa0;
  *(undefined8 *)&this->field_0xa90 = *(undefined8 *)&this->field_0xaa8;
  *(undefined4 *)&this->field_0xac0 = 0;
  if (*(int *)&this->field_0xac4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)&this->field_0xab8,0,(int *)&this->field_0xac4);
  }
  pTVar40 = ::operator_new(0x10);
  if (pTVar40 != (TArray<FClusterNode,TSizedDefaultAllocator<32>_> *)0x0) {
    (pTVar40->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar40->ArrayNum = 0;
    pTVar40->ArrayMax = 0;
    pTVar41 = pTVar40;
  }
  local_e0.Object = pTVar41;
  TSharedPtr<TArray<FClusterNode,TSizedDefaultAllocator<32>_>,1>::
  operator=<TArray<FClusterNode,TSizedDefaultAllocator<32>_>_>
            ((TSharedPtr<TArray<FClusterNode,TSizedDefaultAllocator<32>_>,1> *)&this->field_0xa00,
             &local_e0);
  *(undefined4 *)&this->field_0x728 = 0;
  if (*(int *)&this->field_0x72c != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->field_0x720,0,(int *)&this->field_0x72c);
  }
  *(undefined4 *)&this->field_0xa38 = 0;
  if (*(int *)&this->field_0xa3c != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->field_0xa30,0,(int *)&this->field_0xa3c);
  }
  *(uint *)&this->field_0xad0 = local_140;
  local_a0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_a0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_a0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pTVar42 = UHierarchicalInstancedStaticMeshComponent::GetClusterTreeBounds
                      (&local_88,param_1,(TVector<double> *)&local_a0._s_0);
  dVar5 = (pTVar42->Min).field0_0x0._s_0.Y;
  *(double *)&this->field_0xa48 = (pTVar42->Min).field0_0x0._s_0.X;
  *(double *)&this->field_0xa50 = dVar5;
  dVar5 = (pTVar42->Max).field0_0x0._s_0.X;
  *(double *)&this->field_0xa58 = (pTVar42->Min).field0_0x0._s_0.Z;
  *(double *)&this->field_0xa60 = dVar5;
  dVar5 = (pTVar42->Max).field0_0x0._s_0.Z;
  *(double *)&this->field_0xa68 = (pTVar42->Max).field0_0x0._s_0.Y;
  *(double *)&this->field_0xa70 = dVar5;
  uVar19 = pTVar42->Pad[0];
  uVar20 = pTVar42->Pad[1];
  uVar21 = pTVar42->Pad[2];
  uVar22 = pTVar42->Pad[3];
  uVar23 = pTVar42->Pad[4];
  uVar24 = pTVar42->Pad[5];
  uVar25 = pTVar42->Pad[6];
  this->field_0xa78 = pTVar42->IsValid;
  this->field_0xa79 = uVar19;
  this->field_0xa7a = uVar20;
  this->field_0xa7b = uVar21;
  this->field_0xa7c = uVar22;
  this->field_0xa7d = uVar23;
  this->field_0xa7e = uVar24;
  this->field_0xa7f = uVar25;
  *(int *)&this->field_0xb10 = param_3;
  if ((0 < *(int *)&this->field_0xa44) && (*(UObject **)&this->field_0x5a0 != (UObject *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(*(UObject **)&this->field_0x5a0);
    }
    this_00 = *(UStaticMesh **)&this->field_0x5a0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    bVar35 = UStaticMesh::HasValidRenderData(this_00,true,-1);
    if (bVar35) {
      if ((*(longlong *)&this->field_0xa00 == 0) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar35)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar41 = *(TArray<FClusterNode,TSizedDefaultAllocator<32>_> **)&this->field_0xa00;
      if (pTVar41 != param_1) {
        pFVar2 = (pTVar41->AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pTVar41->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
        (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        pTVar41->ArrayNum = param_1->ArrayNum;
        pTVar41->ArrayMax = param_1->ArrayMax;
        param_1->ArrayNum = 0;
        param_1->ArrayMax = 0;
      }
      UHierarchicalInstancedStaticMeshComponent::PostBuildStats
                ((UHierarchicalInstancedStaticMeshComponent *)this);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    StatPtr_STAT_UGrassInstancedStaticMeshComponent_AcceptPrebuiltTree_Mark =
         (FThreadSafeStaticStat<_public:_void___cdecl_UGrassInstancedStaticMeshComponent::AcceptPrebuiltTree(TArray<FClusterNode,TSizedDefaultAllocator<32>_>_&,int,int,FStaticMeshInstanceData_*)_::_2_::FStat_STAT_UGrassInstancedStaticMeshComponent_AcceptPrebuiltTree_Mark>
          )0x0;
    pFVar38 = ::FName::FName(&local_b0,
                             "STAT_UGrassInstancedStaticMeshComponent_AcceptPrebuiltTree_Mark");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_UGrassInstancedStaticMeshComponent_AcceptPrebuiltTree_Mark,*pFVar38,
               L"STAT_UGrassInstancedStaticMeshComponent_AcceptPrebuiltTree_Mark","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS1);
  }
  pFVar45 = (FStaticMeshInstanceData *)0x0;
  FVar43 = StatPtr_STAT_UGrassInstancedStaticMeshComponent_AcceptPrebuiltTree_Mark;
  if (StatPtr_STAT_UGrassInstancedStaticMeshComponent_AcceptPrebuiltTree_Mark ==
      (FThreadSafeStaticStat<_public:_void___cdecl_UGrassInstancedStaticMeshComponent::AcceptPrebuiltTree(TArray<FClusterNode,TSizedDefaultAllocator<32>_>_&,int,int,FStaticMeshInstanceData_*)_::_2_::FStat_STAT_UGrassInstancedStaticMeshComponent_AcceptPrebuiltTree_Mark>
       )0x0) {
    pFVar38 = ::FName::FName(&local_a8,
                             "STAT_UGrassInstancedStaticMeshComponent_AcceptPrebuiltTree_Mark");
    FVar43 = (FThreadSafeStaticStat<_public:_void___cdecl_UGrassInstancedStaticMeshComponent::AcceptPrebuiltTree(TArray<FClusterNode,TSizedDefaultAllocator<32>_>_&,int,int,FStaticMeshInstanceData_*)_::_2_::FStat_STAT_UGrassInstancedStaticMeshComponent_AcceptPrebuiltTree_Mark>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_UGrassInstancedStaticMeshComponent_AcceptPrebuiltTree_Mark,
                          *pFVar38,
                          L"STAT_UGrassInstancedStaticMeshComponent_AcceptPrebuiltTree_Mark",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar48 = *(FName *)FVar43;
  bVar35 = false;
  bVar17 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  FVar47 = FVar48.ComparisonIndex.Value;
  uVar37 = FVar48.Number;
  if ((FVar47.Value != 0) || (uVar37 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148._s_0,(char *)*(FName *)((longlong)FVar43 + 0x10));
      bVar35 = false;
      bVar17 = true;
      if (-1 < CpuChannel->Enabled) {
        local_118.ComparisonIndex.Value = FVar47.Value;
        local_118.Number = uVar37;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_118,(wchar_t *)*(FName *)((longlong)FVar43 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Foliage\\Private\\InstancedGrass.cpp"
                   ,0x52);
        bVar35 = true;
        bVar17 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_140 = FVar47.Value;
      uStack_13c = uVar37;
      FThreadStats::AddMessage(FVar48,CycleScopeStart);
      bVar14 = true;
      goto LAB_145edcd6f;
    }
  }
  bVar14 = false;
  FVar48 = local_f0;
LAB_145edcd6f:
  pFVar30 = local_110;
  if (((*(int *)&this->field_0x660 != 0) && (local_110->NumInstances != *(int *)&this->field_0x660))
     && (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                            ("PerInstanceSMData.Num() == 0 || InSharedInstanceBufferData->GetNumInstances() == PerInstanceSMData.Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Foliage\\Private\\InstancedGrass.cpp"
                             ,0x54,L""), bVar36)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar44 = ::operator_new(0x50);
  if (pFVar44 != (FStaticMeshInstanceData *)0x0) {
    pFVar44->InstanceOriginData = (FStaticMeshVertexDataInterface *)0x0;
    pFVar44->InstanceOriginDataPtr = (uchar *)0x0;
    pFVar44->InstanceTransformData = (FStaticMeshVertexDataInterface *)0x0;
    pFVar44->InstanceTransformDataPtr = (uchar *)0x0;
    pFVar44->InstanceLightmapData = (FStaticMeshVertexDataInterface *)0x0;
    pFVar44->InstanceLightmapDataPtr = (uchar *)0x0;
    pFVar44->InstanceCustomData = (FStaticMeshVertexDataInterface *)0x0;
    pFVar44->InstanceCustomDataPtr = (uchar *)0x0;
    pFVar44->NumInstances = 0;
    pFVar44->NumCustomDataFloats = 0;
    pFVar44->bUseHalfFloat = false;
    pFVar45 = pFVar44;
  }
  puVar6 = pFVar30->InstanceOriginDataPtr;
  pFVar3 = pFVar45->InstanceOriginData;
  puVar7 = pFVar45->InstanceOriginDataPtr;
  local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8 = pFVar45->InstanceTransformData;
  puVar9 = pFVar45->InstanceTransformDataPtr;
  local_130.ArrayNum = 0;
  local_130.ArrayMax = 0;
  pFVar10 = pFVar45->InstanceLightmapData;
  puVar11 = pFVar45->InstanceLightmapDataPtr;
  pFVar12 = pFVar45->InstanceCustomData;
  puVar13 = pFVar45->InstanceCustomDataPtr;
  iVar28 = pFVar45->NumInstances;
  iVar29 = pFVar45->NumCustomDataFloats;
  bVar31 = pFVar45->bUseHalfFloat;
  uVar32 = *(undefined7 *)&pFVar45->field_0x49;
  pFVar45->InstanceOriginData = pFVar30->InstanceOriginData;
  pFVar45->InstanceOriginDataPtr = puVar6;
  puVar6 = pFVar30->InstanceTransformDataPtr;
  pFVar45->InstanceTransformData = pFVar30->InstanceTransformData;
  pFVar45->InstanceTransformDataPtr = puVar6;
  puVar6 = pFVar30->InstanceLightmapDataPtr;
  pFVar45->InstanceLightmapData = pFVar30->InstanceLightmapData;
  pFVar45->InstanceLightmapDataPtr = puVar6;
  puVar6 = pFVar30->InstanceCustomDataPtr;
  pFVar45->InstanceCustomData = pFVar30->InstanceCustomData;
  pFVar45->InstanceCustomDataPtr = puVar6;
  iVar26 = pFVar30->NumCustomDataFloats;
  bVar36 = pFVar30->bUseHalfFloat;
  uVar27 = *(undefined7 *)&pFVar30->field_0x49;
  pFVar45->NumInstances = pFVar30->NumInstances;
  pFVar45->NumCustomDataFloats = iVar26;
  pFVar45->bUseHalfFloat = bVar36;
  *(undefined7 *)&pFVar45->field_0x49 = uVar27;
  pFVar30->InstanceOriginData = pFVar3;
  pFVar30->InstanceOriginDataPtr = puVar7;
  pFVar30->InstanceTransformData = pFVar8;
  pFVar30->InstanceTransformDataPtr = puVar9;
  pFVar30->InstanceLightmapData = pFVar10;
  pFVar30->InstanceLightmapDataPtr = puVar11;
  pFVar30->InstanceCustomData = pFVar12;
  pFVar30->InstanceCustomDataPtr = puVar13;
  pFVar30->NumInstances = iVar28;
  pFVar30->NumCustomDataFloats = iVar29;
  pFVar30->bUseHalfFloat = bVar31;
  *(undefined7 *)&pFVar30->field_0x49 = uVar32;
  local_108.Ptr = pFVar45;
  FPrimitiveInstanceDataManager::MarkForRebuildFromLegacy
            ((FPrimitiveInstanceDataManager *)&this->field_0x7a0,&local_108,
             (TArray<int,TSizedDefaultAllocator<32>_> *)&this->field_0x720,&local_130);
  DestructItems<TRefCountPtr<HHitProxy>,int>
            ((TRefCountPtr<HHitProxy> *)local_130.AllocatorInstance.Data,local_130.ArrayNum);
  if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.AllocatorInstance.Data);
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  TVar34.Ptr = local_108.Ptr;
  if (local_108.Ptr != (FStaticMeshInstanceData *)0x0) {
    pFVar3 = (local_108.Ptr)->InstanceOriginData;
    if (pFVar3 != (FStaticMeshVertexDataInterface *)0x0) {
      (**(code **)*pFVar3)(pFVar3,1);
    }
    pFVar3 = (TVar34.Ptr)->InstanceLightmapData;
    if (pFVar3 != (FStaticMeshVertexDataInterface *)0x0) {
      (**(code **)*pFVar3)(pFVar3,1);
    }
    pFVar3 = (TVar34.Ptr)->InstanceTransformData;
    if (pFVar3 != (FStaticMeshVertexDataInterface *)0x0) {
      (**(code **)*pFVar3)(pFVar3,1);
    }
    pFVar3 = (TVar34.Ptr)->InstanceCustomData;
    if (pFVar3 != (FStaticMeshVertexDataInterface *)0x0) {
      (**(code **)*pFVar3)(pFVar3,1);
    }
    ::operator_delete(TVar34.Ptr,0x50);
  }
  if (bVar17) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar35) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar14) && (FVar48 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_d0.NameAndInfo.Index = FVar48.ComparisonIndex.Value;
      local_d0.NameAndInfo.Number = FVar48.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_d8);
      local_d0.StatData.Pad[4] = '\0';
      local_d0.StatData.Pad[5] = '\0';
      local_d0.StatData.Pad[6] = '\0';
      local_d0.StatData.Pad[7] = '\0';
      local_d0.StatData.Pad[0] = local_d8.s.LowPart._0_1_;
      local_d0.StatData.Pad[1] = local_d8.s.LowPart._1_1_;
      local_d0.StatData.Pad[2] = local_d8.s.LowPart._2_1_;
      local_d0.StatData.Pad[3] = local_d8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_d0);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  if (bVar18) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar16) {
    FThreadStats::AddMessage(FVar49,CycleScopeEnd);
  }
  return;
}

// BuildComponentInstanceData @ 145ede900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UGrassInstancedStaticMeshComponent::BuildComponentInstanceData
          (UGrassInstancedStaticMeshComponent *this,EShaderPlatform param_1,
          FInstanceUpdateComponentDesc *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  UStaticMesh *this_00;
  undefined8 uVar7;
  FInstanceDataFlags FVar8;
  double *pdVar9;
  undefined6 extraout_var;
  TBoxSphereBounds<double,double> *pTVar10;
  undefined1 auStack_158 [32];
  undefined1 local_138 [4];
  TVector2<float>_u_0 local_134;
  undefined8 uStack_12c;
  undefined1 local_118 [24];
  undefined8 uStack_100;
  undefined8 local_f8;
  double *pdStack_f0;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_158;
  pdVar9 = (double *)(**(code **)(*(longlong *)this + 0x808))(this,local_d8);
  dVar1 = pdVar9[1];
  (param_2->PrimitiveLocalToWorld).M[0][0] = *pdVar9;
  (param_2->PrimitiveLocalToWorld).M[0][1] = dVar1;
  dVar1 = pdVar9[3];
  (param_2->PrimitiveLocalToWorld).M[0][2] = pdVar9[2];
  (param_2->PrimitiveLocalToWorld).M[0][3] = dVar1;
  dVar1 = pdVar9[5];
  (param_2->PrimitiveLocalToWorld).M[1][0] = pdVar9[4];
  (param_2->PrimitiveLocalToWorld).M[1][1] = dVar1;
  dVar1 = pdVar9[7];
  (param_2->PrimitiveLocalToWorld).M[1][2] = pdVar9[6];
  (param_2->PrimitiveLocalToWorld).M[1][3] = dVar1;
  dVar1 = pdVar9[9];
  (param_2->PrimitiveLocalToWorld).M[2][0] = pdVar9[8];
  (param_2->PrimitiveLocalToWorld).M[2][1] = dVar1;
  dVar1 = pdVar9[0xb];
  (param_2->PrimitiveLocalToWorld).M[2][2] = pdVar9[10];
  (param_2->PrimitiveLocalToWorld).M[2][3] = dVar1;
  dVar1 = pdVar9[0xd];
  (param_2->PrimitiveLocalToWorld).M[3][0] = pdVar9[0xc];
  (param_2->PrimitiveLocalToWorld).M[3][1] = dVar1;
  dVar1 = pdVar9[0xf];
  (param_2->PrimitiveLocalToWorld).M[3][2] = pdVar9[0xe];
  (param_2->PrimitiveLocalToWorld).M[3][3] = dVar1;
  UPrimitiveComponent::GetUsedMaterialPropertyDesc
            ((UPrimitiveComponent *)this,(FPrimitiveMaterialPropertyDescriptor *)&local_134._s_0,
             param_1);
  (param_2->PrimitiveMaterialDesc).MinMaxMaterialDisplacement.field0_0x0 = local_134;
  (param_2->PrimitiveMaterialDesc).MaxWorldPositionOffsetDisplacement =
       (float)(undefined4)uStack_12c;
  (param_2->PrimitiveMaterialDesc).bAnyMaterialHasWorldPositionOffset = (bool)uStack_12c._4_1_;
  (param_2->PrimitiveMaterialDesc).bAnyMaterialHasPixelAnimation = (bool)uStack_12c._5_1_;
  (param_2->PrimitiveMaterialDesc).bAnyMaterialHasPerInstanceCustomData = (bool)uStack_12c._6_1_;
  (param_2->PrimitiveMaterialDesc).bAnyMaterialHasPerInstanceRandom = (bool)uStack_12c._7_1_;
  FVar8 = UInstancedStaticMeshComponent::MakeInstanceDataFlags
                    ((UInstancedStaticMeshComponent *)this,SUB81(local_138,0),
                     (param_2->PrimitiveMaterialDesc).bAnyMaterialHasPerInstanceRandom);
  (param_2->Flags).Packed = *(ushort *)CONCAT62(extraout_var,FVar8.Packed) & 0xfffb;
  this_00 = *(UStaticMesh **)&this->field_0x5a0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  pTVar10 = UStaticMesh::GetBounds
                      (this_00,(TBoxSphereBounds<double,double> *)
                               &((TVector<double>_u_0 *)local_118)->_s_0);
  dVar1 = (pTVar10->Origin).field0_0x0._s_0.X;
  dVar2 = (pTVar10->BoxExtent).field0_0x0._s_0.X;
  dVar3 = (pTVar10->Origin).field0_0x0._s_0.Y;
  dVar4 = (pTVar10->BoxExtent).field0_0x0._s_0.Y;
  dVar5 = (pTVar10->BoxExtent).field0_0x0._s_0.Z;
  dVar6 = (pTVar10->Origin).field0_0x0._s_0.Z;
  (param_2->StaticMeshBounds).Min.field0_0x0._s_0.X = (float)(dVar1 - dVar2);
  (param_2->StaticMeshBounds).Min.field0_0x0._s_0.Y = (float)(dVar3 - dVar4);
  (param_2->StaticMeshBounds).Min.field0_0x0._s_0.Z = (float)(dVar6 - dVar5);
  (param_2->StaticMeshBounds).Max.field0_0x0._s_0.X = (float)(dVar2 + dVar1);
  (param_2->StaticMeshBounds).Max.field0_0x0._s_0.Y = (float)(dVar4 + dVar3);
  (param_2->StaticMeshBounds).Max.field0_0x0._s_0.Z = (float)(dVar5 + dVar6);
  param_2->NumProxyInstances = *(int *)&this->field_0xb10;
  param_2->NumSourceInstances = 0;
  param_2->NumCustomDataFloats = *(int *)&this->field_0x6e0;
  local_118._0_8_ = *(undefined8 *)&param_2->BuildChangeSet;
  dVar1 = *(double *)&(param_2->BuildChangeSet).field_0x8;
  local_118._16_8_ = *(undefined8 *)&(param_2->BuildChangeSet).field_0x10;
  uStack_100 = *(undefined8 *)&(param_2->BuildChangeSet).field_0x18;
  uVar7 = *(undefined8 *)&(param_2->BuildChangeSet).field_0x20;
  pdStack_f0 = *(double **)&(param_2->BuildChangeSet).field_0x28;
  *(code **)&param_2->BuildChangeSet =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGrassInstancedStaticMeshComponent::BuildComponentInstanceData'::__l2::<lambda_1>,void,FISMInstanceUpdateChangeSet_&>
       ::Call;
  *(undefined8 *)&(param_2->BuildChangeSet).field_0x8 = local_118._8_8_;
  *(undefined4 *)&(param_2->BuildChangeSet).field_0x10 = 0x51182ec0;
  *(undefined4 *)&(param_2->BuildChangeSet).field_0x14 = 1;
  *(UGrassInstancedStaticMeshComponent **)&(param_2->BuildChangeSet).field_0x18 = this;
  *(undefined4 *)&(param_2->BuildChangeSet).field_0x20 = (undefined4)local_f8;
  *(undefined4 *)&(param_2->BuildChangeSet).field_0x24 = local_f8._4_4_;
  *(undefined4 *)&(param_2->BuildChangeSet).field_0x28 = 0;
  *(undefined4 *)&(param_2->BuildChangeSet).field_0x2c = 0;
  local_f8 = uVar7;
  if ((double)local_118._0_8_ != 0.0) {
    pdVar9 = &(((TVector<double>_u_0 *)local_118)->_s_0).Z;
    if (pdStack_f0 != (double *)0x0) {
      pdVar9 = pdStack_f0;
    }
    local_118._8_8_ = dVar1;
    (**(code **)((longlong)*pdVar9 + 0x10))();
  }
  return;
}

// BuildComponentInstanceData @ 145edeb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
UGrassInstancedStaticMeshComponent::BuildComponentInstanceData
          (UGrassInstancedStaticMeshComponent *this,Type param_1,
          FInstanceUpdateComponentDesc *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  UStaticMesh *this_00;
  undefined8 uVar7;
  undefined8 uVar8;
  FInstanceDataFlags FVar9;
  double *pdVar10;
  undefined6 extraout_var;
  TBoxSphereBounds<double,double> *pTVar11;
  longlong *plVar12;
  EShaderPlatform EVar13;
  undefined1 auStack_168 [32];
  undefined1 local_148 [4];
  TVector2<float>_u_0 local_144;
  undefined8 uStack_13c;
  TBoxSphereBounds<double,double> local_130;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong *plStack_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  if (param_1 == Num) {
    EVar13 = SP_NumPlatforms;
  }
  else {
    EVar13 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_1];
  }
  pdVar10 = (double *)(**(code **)(*(longlong *)this + 0x808))(this,local_c8);
  dVar1 = pdVar10[1];
  (param_2->PrimitiveLocalToWorld).M[0][0] = *pdVar10;
  (param_2->PrimitiveLocalToWorld).M[0][1] = dVar1;
  dVar1 = pdVar10[3];
  (param_2->PrimitiveLocalToWorld).M[0][2] = pdVar10[2];
  (param_2->PrimitiveLocalToWorld).M[0][3] = dVar1;
  dVar1 = pdVar10[5];
  (param_2->PrimitiveLocalToWorld).M[1][0] = pdVar10[4];
  (param_2->PrimitiveLocalToWorld).M[1][1] = dVar1;
  dVar1 = pdVar10[7];
  (param_2->PrimitiveLocalToWorld).M[1][2] = pdVar10[6];
  (param_2->PrimitiveLocalToWorld).M[1][3] = dVar1;
  dVar1 = pdVar10[9];
  (param_2->PrimitiveLocalToWorld).M[2][0] = pdVar10[8];
  (param_2->PrimitiveLocalToWorld).M[2][1] = dVar1;
  dVar1 = pdVar10[0xb];
  (param_2->PrimitiveLocalToWorld).M[2][2] = pdVar10[10];
  (param_2->PrimitiveLocalToWorld).M[2][3] = dVar1;
  dVar1 = pdVar10[0xd];
  (param_2->PrimitiveLocalToWorld).M[3][0] = pdVar10[0xc];
  (param_2->PrimitiveLocalToWorld).M[3][1] = dVar1;
  dVar1 = pdVar10[0xf];
  (param_2->PrimitiveLocalToWorld).M[3][2] = pdVar10[0xe];
  (param_2->PrimitiveLocalToWorld).M[3][3] = dVar1;
  UPrimitiveComponent::GetUsedMaterialPropertyDesc
            ((UPrimitiveComponent *)this,(FPrimitiveMaterialPropertyDescriptor *)&local_144._s_0,
             EVar13);
  (param_2->PrimitiveMaterialDesc).MinMaxMaterialDisplacement.field0_0x0 = local_144;
  (param_2->PrimitiveMaterialDesc).MaxWorldPositionOffsetDisplacement =
       (float)(undefined4)uStack_13c;
  (param_2->PrimitiveMaterialDesc).bAnyMaterialHasWorldPositionOffset = (bool)uStack_13c._4_1_;
  (param_2->PrimitiveMaterialDesc).bAnyMaterialHasPixelAnimation = (bool)uStack_13c._5_1_;
  (param_2->PrimitiveMaterialDesc).bAnyMaterialHasPerInstanceCustomData = (bool)uStack_13c._6_1_;
  (param_2->PrimitiveMaterialDesc).bAnyMaterialHasPerInstanceRandom = (bool)uStack_13c._7_1_;
  FVar9 = UInstancedStaticMeshComponent::MakeInstanceDataFlags
                    ((UInstancedStaticMeshComponent *)this,SUB81(local_148,0),
                     (param_2->PrimitiveMaterialDesc).bAnyMaterialHasPerInstanceRandom);
  (param_2->Flags).Packed = *(ushort *)CONCAT62(extraout_var,FVar9.Packed) & 0xfffb;
  this_00 = *(UStaticMesh **)&this->field_0x5a0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  pTVar11 = UStaticMesh::GetBounds(this_00,&local_130);
  dVar1 = (pTVar11->Origin).field0_0x0._s_0.X;
  dVar2 = (pTVar11->BoxExtent).field0_0x0._s_0.X;
  dVar3 = (pTVar11->Origin).field0_0x0._s_0.Y;
  dVar4 = (pTVar11->BoxExtent).field0_0x0._s_0.Y;
  dVar5 = (pTVar11->BoxExtent).field0_0x0._s_0.Z;
  dVar6 = (pTVar11->Origin).field0_0x0._s_0.Z;
  (param_2->StaticMeshBounds).Min.field0_0x0._s_0.X = (float)(dVar1 - dVar2);
  (param_2->StaticMeshBounds).Min.field0_0x0._s_0.Y = (float)(dVar3 - dVar4);
  (param_2->StaticMeshBounds).Min.field0_0x0._s_0.Z = (float)(dVar6 - dVar5);
  (param_2->StaticMeshBounds).Max.field0_0x0._s_0.X = (float)(dVar2 + dVar1);
  (param_2->StaticMeshBounds).Max.field0_0x0._s_0.Y = (float)(dVar4 + dVar3);
  (param_2->StaticMeshBounds).Max.field0_0x0._s_0.Z = (float)(dVar5 + dVar6);
  param_2->NumProxyInstances = *(int *)&this->field_0xb10;
  param_2->NumSourceInstances = 0;
  param_2->NumCustomDataFloats = *(int *)&this->field_0x6e0;
  local_f8 = *(longlong *)&param_2->BuildChangeSet;
  uVar8 = *(undefined8 *)&(param_2->BuildChangeSet).field_0x8;
  local_e8 = *(longlong *)&(param_2->BuildChangeSet).field_0x10;
  uStack_e0 = *(undefined8 *)&(param_2->BuildChangeSet).field_0x18;
  uVar7 = *(undefined8 *)&(param_2->BuildChangeSet).field_0x20;
  plStack_d0 = *(longlong **)&(param_2->BuildChangeSet).field_0x28;
  *(code **)&param_2->BuildChangeSet =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGrassInstancedStaticMeshComponent::BuildComponentInstanceData'::__l2::<lambda_1>,void,FISMInstanceUpdateChangeSet_&>
       ::Call;
  *(undefined8 *)&(param_2->BuildChangeSet).field_0x8 = uStack_f0;
  *(undefined4 *)&(param_2->BuildChangeSet).field_0x10 = 0x51182ec0;
  *(undefined4 *)&(param_2->BuildChangeSet).field_0x14 = 1;
  *(UGrassInstancedStaticMeshComponent **)&(param_2->BuildChangeSet).field_0x18 = this;
  *(undefined4 *)&(param_2->BuildChangeSet).field_0x20 = (undefined4)local_d8;
  *(undefined4 *)&(param_2->BuildChangeSet).field_0x24 = local_d8._4_4_;
  *(undefined4 *)&(param_2->BuildChangeSet).field_0x28 = 0;
  *(undefined4 *)&(param_2->BuildChangeSet).field_0x2c = 0;
  local_d8 = uVar7;
  if (local_f8 != 0) {
    plVar12 = &local_e8;
    if (plStack_d0 != (longlong *)0x0) {
      plVar12 = plStack_d0;
    }
    uStack_f0 = uVar8;
    (**(code **)(*plVar12 + 0x10))();
  }
  return;
}

// BuildTree @ 145edee20

void __thiscall
UGrassInstancedStaticMeshComponent::BuildTree(UGrassInstancedStaticMeshComponent *this)

{
  return;
}

// BuildTreeAnyThread @ 145edee30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGrassInstancedStaticMeshComponent::BuildTreeAnyThread
          (TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,int param_3,TBox<double> *param_4,
          TArray<FClusterNode,TSizedDefaultAllocator<32>_> *param_5,
          TArray<int,TSizedDefaultAllocator<32>_> *param_6,
          TArray<int,TSizedDefaultAllocator<32>_> *param_7,int *param_8,int param_9,bool param_10)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  TUniquePtr<UHierarchicalInstancedStaticMeshComponent::FClusterTree,TDefaultDelete<UHierarchicalInstancedStaticMeshComponent::FClusterTree>_>
  TVar5;
  undefined1 auStackY_1c8 [32];
  TArray<float,TSizedDefaultAllocator<32>_> local_170;
  TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> local_160;
  TBox<double> *local_150;
  int *local_148;
  FClusterBuilder local_138;
  ulonglong local_58;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_148 = param_8;
  local_150 = param_4;
  if (param_9 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaxInstancesPerLeaf > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Foliage\\Private\\InstancedGrass.cpp"
                       ,0x1e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_170.ArrayNum = param_2->ArrayNum;
  lVar4 = (longlong)local_170.ArrayNum;
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_170.ArrayNum == 0) {
    local_170.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_170.ArrayNum,0,&local_170.AllocatorInstance,local_170.ArrayNum,
               &local_170.ArrayMax);
    memcpy(local_170.AllocatorInstance.Data,pFVar1,lVar4 << 2);
  }
  local_160.ArrayNum = param_1->ArrayNum;
  lVar4 = (longlong)local_160.ArrayNum;
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_160.ArrayNum == 0) {
    local_160.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,local_160.ArrayNum,0,&local_160.AllocatorInstance,local_160.ArrayNum,
               &local_160.ArrayMax);
    memcpy(local_160.AllocatorInstance.Data,pFVar1,lVar4 << 7);
  }
  UHierarchicalInstancedStaticMeshComponent::FClusterBuilder::FClusterBuilder
            (&local_138,&local_160,&local_170,param_3,local_150,param_9,__real_3f800000,1,param_10);
  UHierarchicalInstancedStaticMeshComponent::FClusterBuilder::BuildTree(&local_138);
  TVar5.Ptr = local_138.Result.Ptr;
  *local_148 = (local_138.Result.Ptr)->OutOcclusionLayerNum;
  if ((FClusterTree *)param_5 != local_138.Result.Ptr) {
    pFVar1 = (param_5->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_5->AllocatorInstance).Data = ((TVar5.Ptr)->Nodes).AllocatorInstance.Data;
    ((TVar5.Ptr)->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    param_5->ArrayNum = ((TVar5.Ptr)->Nodes).ArrayNum;
    param_5->ArrayMax = ((TVar5.Ptr)->Nodes).ArrayMax;
    ((TVar5.Ptr)->Nodes).ArrayNum = 0;
    ((TVar5.Ptr)->Nodes).ArrayMax = 0;
  }
  TVar5.Ptr = local_138.Result.Ptr;
  pTVar6 = &(local_138.Result.Ptr)->InstanceReorderTable;
  if (param_7 != pTVar6) {
    pFVar1 = (param_7->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_7->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
    (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    param_7->ArrayNum = ((TVar5.Ptr)->InstanceReorderTable).ArrayNum;
    param_7->ArrayMax = ((TVar5.Ptr)->InstanceReorderTable).ArrayMax;
    ((TVar5.Ptr)->InstanceReorderTable).ArrayNum = 0;
    ((TVar5.Ptr)->InstanceReorderTable).ArrayMax = 0;
    TVar5.Ptr = local_138.Result.Ptr;
  }
  pTVar6 = &(TVar5.Ptr)->SortedInstances;
  if (param_6 != pTVar6) {
    pFVar1 = (param_6->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_6->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
    (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    param_6->ArrayNum = ((TVar5.Ptr)->SortedInstances).ArrayNum;
    param_6->ArrayMax = ((TVar5.Ptr)->SortedInstances).ArrayMax;
    ((TVar5.Ptr)->SortedInstances).ArrayNum = 0;
    ((TVar5.Ptr)->SortedInstances).ArrayMax = 0;
  }
  UHierarchicalInstancedStaticMeshComponent::FClusterBuilder::~FClusterBuilder(&local_138);
  return;
}

// BuildTreeAsync @ 145edf0e0

void __thiscall
UGrassInstancedStaticMeshComponent::BuildTreeAsync(UGrassInstancedStaticMeshComponent *this)

{
  return;
}

// GetNumRenderInstances @ 145ee4140

int __thiscall
UGrassInstancedStaticMeshComponent::GetNumRenderInstances(UGrassInstancedStaticMeshComponent *this)

{
  return *(int *)&this->field_0xa44;
}

// GetPrivateStaticClass @ 145ee5200

UClass * __cdecl UGrassInstancedStaticMeshComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGrassInstancedStaticMeshComponent.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"GrassInstancedStaticMeshComponent",
               &Z_Registration_Info_UClass_UGrassInstancedStaticMeshComponent.InnerSingleton,
               StaticRegisterNativesUGrassInstancedStaticMeshComponent,0xba0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UGrassInstancedStaticMeshComponent>,
               InternalVTableHelperCtorCaller<UGrassInstancedStaticMeshComponent>,local_res8,
               UHierarchicalInstancedStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGrassInstancedStaticMeshComponent.InnerSingleton;
}

// StaticRegisterNativesUGrassInstancedStaticMeshComponent @ 145eed060

void __cdecl
UGrassInstancedStaticMeshComponent::StaticRegisterNativesUGrassInstancedStaticMeshComponent(void)

{
  return;
}

// SupportsWorldPositionOffsetVelocity @ 145eed290

bool __thiscall
UGrassInstancedStaticMeshComponent::SupportsWorldPositionOffsetVelocity
          (UGrassInstancedStaticMeshComponent *this)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  longlong lVar3;
  
  pTVar1 = CVarEnableGrassInstancedWPOVelocity.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar3 = 1;
      goto LAB_145eed2bf;
    }
  }
  lVar3 = 0;
LAB_145eed2bf:
  if ((pTVar1->ShadowedValue[lVar3] != false) && ((this->field_0x5ac & 0x10) != 0)) {
    return true;
  }
  return false;
}

