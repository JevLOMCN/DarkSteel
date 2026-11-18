// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MRMesh
// Functions: 146

// `dynamic_initializer_for_'CVarPauseMRMeshBrickCulling'' @ 1410ac3b0

void __cdecl _dynamic_initializer_for__CVarPauseMRMeshBrickCulling__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPauseMRMeshBrickCulling,L"r.MrMesh.BrickCullingDebugState",local_res8,
             L"MR Mesh brick culling debug state: 0=off, 1=on, 2=paused",0);
  atexit(_dynamic_atexit_destructor_for__CVarPauseMRMeshBrickCulling__);
  return;
}

// `dynamic_initializer_for_'LogMockMeshDataTracker'' @ 1410ac400

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMockMeshDataTracker__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogMockMeshDataTracker,L"LogMockMeshDataTracker",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMockMeshDataTracker__);
  return;
}

// `dynamic_initializer_for_'LogMrMesh'' @ 1410ac440

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMrMesh__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogMrMesh,L"LogMrMesh",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogMrMesh__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantMRMesh'' @ 1410ac480

void __cdecl _dynamic_initializer_for__ModuleRegistrantMRMesh__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "MRMesh";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"MRMesh",6);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FMRMeshModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 1410ac4d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeGenerateTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeGenerateTree ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeGenerateTree>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeGenerateTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeGenerateTree,*pFVar1,
               L"AABBTreeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 1410ac560

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeInitialTimeSlice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeInitialTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeInitialTimeSlice>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeInitialTimeSlice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeInitialTimeSlice,*pFVar1,
               L"AABBTreeInitialTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 1410ac5f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeProgressTimeSlice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeProgressTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeProgressTimeSlice>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeProgressTimeSlice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeProgressTimeSlice,*pFVar1,
               L"AABBTreeProgressTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 1410ac680

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeTimeSliceSetup__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeTimeSliceSetup ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeTimeSliceSetup>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeTimeSliceSetup");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeTimeSliceSetup,*pFVar1,
               L"AABBTreeTimeSliceSetup","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 1410ac710

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeAddElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeAddElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeAddElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeAddElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeAddElement,*pFVar1,
               L"BoundingVolumeAddElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 1410ac7a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeComputeGlobalBox__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeComputeGlobalBox ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeComputeGlobalBox>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeComputeGlobalBox");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeComputeGlobalBox,*pFVar1,
               L"BoundingVolumeComputeGlobalBox","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 1410ac830

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeFillGrid__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeFillGrid ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeFillGrid>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeFillGrid");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeFillGrid,*pFVar1,
               L"BoundingVolumeFillGrid","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 1410ac8c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeGenerateTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeGenerateTree ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeGenerateTree>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeGenerateTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeGenerateTree,*pFVar1,
               L"BoundingVolumeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 1410ac950

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeRemoveElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeRemoveElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeRemoveElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeRemoveElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeRemoveElement,*pFVar1,
               L"BoundingVolumeRemoveElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 1410ac9e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeUpdateElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeUpdateElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeUpdateElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeUpdateElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeUpdateElement,*pFVar1,
               L"BoundingVolumeUpdateElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MrMesh_SetCollisionProfileName'' @ 1410aca70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MrMesh_SetCollisionProfileName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MrMesh_SetCollisionProfileName ==
      (FThreadSafeStaticStat<FStat_STAT_MrMesh_SetCollisionProfileName>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MrMesh_SetCollisionProfileName");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MrMesh_SetCollisionProfileName,*pFVar1,
               L"MrMesh SetCollisionProfileName","STATGROUP_Physics","STATCAT_Advanced",L"Physics",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdateCollision'' @ 1410acb00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UpdateCollision__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateCollision == (FThreadSafeStaticStat<FStat_STAT_UpdateCollision>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UpdateCollision");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateCollision,*pFVar1,
               L"Update Collision","STATGROUP_MRMESH","STATCAT_Advanced",L"MRMesh",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h__Script_MRMesh_3375750868'' @ 1410acb90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h__Script_MRMesh_3375750868__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MRMesh",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h__Script_MRMesh_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h__Script_MRMesh_1139885371'' @ 1410acbd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h__Script_MRMesh_1139885371__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MRMesh",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h__Script_MRMesh_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h__Script_MRMesh_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h__Script_MRMesh_2032349244'' @ 1410acc20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h__Script_MRMesh_2032349244__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MRMesh",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h__Script_MRMesh_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h__Script_MRMesh_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_MRMesh'' @ 1410acc70

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_MRMesh__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xab8d7837;
  local_res8[0].DeclarationsHash = 0xcbca5ecd;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_MRMesh,L"/Script/MRMesh",
             &Z_Registration_Info_UPackage__Script_MRMesh,local_res8);
  return;
}

// Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature @ 146c61fa0

UFunction * __cdecl
Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_MRMesh @ 146c61fe0

UPackage * __cdecl Z_Construct_UPackage__Script_MRMesh(void)

{
  if (Z_Registration_Info_UPackage__Script_MRMesh.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_MRMesh.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_MRMesh.OuterSingleton;
}

// Z_Construct_UClass_UMRMeshBodyHolder_NoRegister @ 146c620e0

UClass * __cdecl Z_Construct_UClass_UMRMeshBodyHolder_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMRMeshBodyHolder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MRMesh",L"MRMeshBodyHolder",
               &Z_Registration_Info_UClass_UMRMeshBodyHolder.InnerSingleton,
               UMRMeshBodyHolder::StaticRegisterNativesUMRMeshBodyHolder,0x230,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMRMeshBodyHolder>,
               InternalVTableHelperCtorCaller<UMRMeshBodyHolder>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMRMeshBodyHolder.InnerSingleton;
}

// Z_Construct_UClass_UMRMeshComponent_NoRegister @ 146c62190

UClass * __cdecl Z_Construct_UClass_UMRMeshComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMRMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MRMesh",L"MRMeshComponent",
               &Z_Registration_Info_UClass_UMRMeshComponent.InnerSingleton,
               UMRMeshComponent::StaticRegisterNativesUMRMeshComponent,0x5e0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UMRMeshComponent>,
               InternalVTableHelperCtorCaller<UMRMeshComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMRMeshComponent.InnerSingleton;
}

// Z_Construct_UClass_UMockDataMeshTrackerComponent @ 146c62510

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMockDataMeshTrackerComponent(void)

{
  if (Z_Registration_Info_UClass_UMockDataMeshTrackerComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMockDataMeshTrackerComponent.OuterSingleton,
               &Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMockDataMeshTrackerComponent.OuterSingleton;
}

// Z_Construct_UEnum_MRMesh_EMeshTrackerVertexColorMode @ 146c62550

UEnum * __cdecl Z_Construct_UEnum_MRMesh_EMeshTrackerVertexColorMode(void)

{
  if (Z_Registration_Info_UEnum_EMeshTrackerVertexColorMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMeshTrackerVertexColorMode.InnerSingleton,
               &Z_Construct_UEnum_MRMesh_EMeshTrackerVertexColorMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMeshTrackerVertexColorMode.InnerSingleton;
}

// EMeshTrackerVertexColorMode_StaticEnum @ 146c62590

UEnum * __cdecl EMeshTrackerVertexColorMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMeshTrackerVertexColorMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MRMesh();
    Z_Registration_Info_UEnum_EMeshTrackerVertexColorMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MRMesh_EMeshTrackerVertexColorMode,(UObject *)pUVar1,
                       L"EMeshTrackerVertexColorMode");
  }
  return Z_Registration_Info_UEnum_EMeshTrackerVertexColorMode.OuterSingleton;
}

// Z_Construct_UClass_UMRMeshBodyHolder @ 146c625d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMRMeshBodyHolder(void)

{
  if (Z_Registration_Info_UClass_UMRMeshBodyHolder.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMRMeshBodyHolder.OuterSingleton,
               &Z_Construct_UClass_UMRMeshBodyHolder_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMRMeshBodyHolder.OuterSingleton;
}

// Z_Construct_UClass_UMRMeshComponent @ 146c62610

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMRMeshComponent(void)

{
  if (Z_Registration_Info_UClass_UMRMeshComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMRMeshComponent.OuterSingleton,
               &Z_Construct_UClass_UMRMeshComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMRMeshComponent.OuterSingleton;
}

// Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh @ 146c62650

UFunction * __cdecl Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh @ 146c62690

UFunction * __cdecl Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMRMeshComponent_Clear @ 146c626d0

UFunction * __cdecl Z_Construct_UFunction_UMRMeshComponent_Clear(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMRMeshComponent_Clear_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ScanWorld_SetBit @ 146c62710

void __cdecl
Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_ScanWorld_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x268) = 1;
  return;
}

// NewProp_RequestNormals_SetBit @ 146c62720

void __cdecl
Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_RequestNormals_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x269) = 1;
  return;
}

// NewProp_RequestVertexConfidence_SetBit @ 146c62730

void __cdecl
Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_RequestVertexConfidence_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x26a) = 1;
  return;
}

// Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate @ 146c62740

UFunction * __cdecl Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c62780

void __cdecl
Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// `scalar_deleting_destructor' @ 146c62790

void * __thiscall IMRMeshModule::_scalar_deleting_destructor_(IMRMeshModule *this,uint param_1)

{
  *this = (IMRMeshModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion @ 146c627d0

UFunction * __cdecl Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 146c62810

void * __thiscall FMRMeshModule::_scalar_deleting_destructor_(FMRMeshModule *this,uint param_1)

{
  *this = (FMRMeshModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// NewProp_ReturnValue_SetBit @ 146c62850

void __cdecl
Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe @ 146c62860

UFunction * __cdecl Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMeshReconstructorBase @ 146c628a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMeshReconstructorBase(void)

{
  if (Z_Registration_Info_UClass_UMeshReconstructorBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMeshReconstructorBase.OuterSingleton,
               &Z_Construct_UClass_UMeshReconstructorBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMeshReconstructorBase.OuterSingleton;
}

// NewStructOps @ 146c628e0

void * __cdecl Z_Construct_UScriptStruct_FMRMeshConfiguration_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMRMeshConfiguration,&UE::CoreUObject::Private::Construct<FMRMeshConfiguration>,&UE::CoreUObject::Private::ConstructForTests<FMRMeshConfiguration>,&UE::CoreUObject::Private::Destruct<FMRMeshConfiguration>,&UE::CoreUObject::Private::Copy<FMRMeshConfiguration>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor @ 146c62920

UFunction * __cdecl Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c62960

void __cdecl
Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMRMeshComponent_IsConnected @ 146c62970

UFunction * __cdecl Z_Construct_UFunction_UMRMeshComponent_IsConnected(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMRMeshComponent_RequestNavMeshUpdate @ 146c629b0

UFunction * __cdecl Z_Construct_UFunction_UMRMeshComponent_RequestNavMeshUpdate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMRMeshComponent_RequestNavMeshUpdate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnable_SetBit @ 146c629f0

void __cdecl
Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::NewProp_bEnable_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion @ 146c62a00

UFunction * __cdecl Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh @ 146c62a40

UFunction * __cdecl Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUseWireframe_SetBit @ 146c62a80

void __cdecl
Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::NewProp_bUseWireframe_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh @ 146c62a90

UFunction * __cdecl Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe @ 146c62ad0

UFunction * __cdecl Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c62b10

void __cdecl
Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused @ 146c62b20

UFunction * __cdecl Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor @ 146c62b60

UFunction * __cdecl Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c62ba0

void __cdecl
Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted @ 146c62bb0

UFunction * __cdecl Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial @ 146c62bf0

UFunction * __cdecl Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction @ 146c62c30

UFunction * __cdecl Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bCreateMeshProxySections_SetBit @ 146c62c70

void __cdecl
Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bCreateMeshProxySections_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x560) = 1;
  return;
}

// NewProp_bUpdateNavMeshOnMeshUpdate_SetBit @ 146c62c80

void __cdecl
Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bUpdateNavMeshOnMeshUpdate_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x561) = 1;
  return;
}

// NewProp_bNeverCreateCollisionMesh_SetBit @ 146c62c90

void __cdecl
Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bNeverCreateCollisionMesh_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x563) = 1;
  return;
}

// Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction @ 146c62ca0

UFunction * __cdecl Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction @ 146c62ce0

UFunction * __cdecl Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// ConstructItems<UE::Math::TVector<float>,UE::Math::TVector<double>,int> @ 146c62d20

void __cdecl
ConstructItems<UE::Math::TVector<float>,UE::Math::TVector<double>,int>
          (void *param_1,TVector<double> *param_2,int param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  float *pfVar4;
  double *pdVar5;
  
  if (param_3 != 0) {
    pdVar5 = &(param_2->field0_0x0)._s_0.Y;
    pfVar4 = (float *)((longlong)param_1 + 8);
    do {
      pdVar1 = pdVar5 + 1;
      dVar2 = *pdVar5;
      dVar3 = ((TVector<double>_u_0_s_0 *)(pdVar5 + -1))->X;
      pdVar5 = pdVar5 + 3;
      *pfVar4 = (float)*pdVar1;
      pfVar4[-1] = (float)dVar2;
      pfVar4[-2] = (float)dVar3;
      param_3 = param_3 + -1;
      pfVar4 = pfVar4 + 3;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FMockDataMeshTrackerImpl::FRawMockMeshData,int> @ 146c62d70

void __cdecl
DefaultConstructItems<FMockDataMeshTrackerImpl::FRawMockMeshData,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      lVar1 = lVar1 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FMockDataMeshTrackerImpl::FRawMockMeshData,int> @ 146c62df0

void __cdecl
DestructItems<FMockDataMeshTrackerImpl::FRawMockMeshData,int>(FRawMockMeshData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Normals;
    do {
      pFVar1 = (((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FRawMockMeshData *)(pTVar2 + -1))->Vertices).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FMockDataMeshTrackerImpl::FCachedMeshData,1>,int> @ 146c62e50

void __cdecl
DestructItems<TSharedPtr<FMockDataMeshTrackerImpl::FCachedMeshData,1>,int>
          (TSharedPtr<FMockDataMeshTrackerImpl::FCachedMeshData,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Enqueue<TRenderCommandTag<`UMRMeshComponent::ClearAllBrickData_Internal'::__l2::TSTR_FClearAllBricksLambda813>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 146c63340

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UMRMeshComponent::ClearAllBrickData_Internal_::__l2::TSTR_FClearAllBricksLambda813>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UMRMeshComponent::ClearAllBrickData_Internal'::__l2::TSTR_FClearAllBricksLambda813>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_146c63491;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_146c63685;
  }
LAB_146c63491:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_146c6356f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146c6356f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_146c63685:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UMRMeshComponent::SendBrickData_Internal'::__l84::TSTR_FSendBrickDataLambda764>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 146c636c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UMRMeshComponent::SendBrickData_Internal_::__l84::TSTR_FSendBrickDataLambda764>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UMRMeshComponent::SendBrickData_Internal'::__l84::TSTR_FSendBrickDataLambda764>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_146c63811;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_146c63a05;
  }
LAB_146c63811:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_146c638ef:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146c638ef;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_146c63a05:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UMRMeshComponent::SetEnableMeshOcclusion'::__l5::TSTR_FSetEnableMeshOcclusionLambda1078>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 146c63a40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UMRMeshComponent::SetEnableMeshOcclusion_::__l5::TSTR_FSetEnableMeshOcclusionLambda1078>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UMRMeshComponent::SetEnableMeshOcclusion'::__l5::TSTR_FSetEnableMeshOcclusionLambda1078>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_146c63b91;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_146c63d85;
  }
LAB_146c63b91:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_146c63c6f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146c63c6f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_146c63d85:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UMRMeshComponent::SendRenderDynamicData_Concurrent'::__l5::TSTR_FSetMaterialLambda863>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 146c63dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UMRMeshComponent::SendRenderDynamicData_Concurrent_::__l5::TSTR_FSetMaterialLambda863>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UMRMeshComponent::SendRenderDynamicData_Concurrent'::__l5::TSTR_FSetMaterialLambda863>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_146c63f11;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_146c64105;
  }
LAB_146c63f11:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_146c63fef:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146c63fef;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_146c64105:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`InitVertexFactory'::__l2::TSTR_InitMrMeshVertexFactory134>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 146c64140

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_InitVertexFactory_::__l2::TSTR_InitMrMeshVertexFactory134>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`InitVertexFactory'::__l2::TSTR_InitMrMeshVertexFactory134>::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_146c64291;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_146c64485;
  }
LAB_146c64291:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_146c6436f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146c6436f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_146c64485:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InternalConstructor<UMRMeshBodyHolder> @ 146c644c0

void __cdecl InternalConstructor<UMRMeshBodyHolder>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UMRMeshBodyHolder::_vftable__for__UObject__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)(this + 1) =
         &UMRMeshBodyHolder::_vftable__for__IInterface_CollisionDataProvider__;
    FBodyInstance::FBodyInstance((FBodyInstance *)&this[1].field_0x10);
    *(undefined8 *)&this[0xb].field_0x20 = 0;
    *(undefined8 *)(this + 0xc) = 0;
    *(undefined8 *)&this[0xc].field_0x8 = 0;
    *(undefined8 *)&this[0xc].field_0x10 = 0;
    *(undefined8 *)&this[0xc].field_0x18 = 0;
    *(undefined8 *)&this[0xc].field_0x20 = 0;
    *(undefined8 *)(this + 0xd) = 0;
    *(undefined8 *)&this[0xd].field_0x8 = 0;
    *(undefined8 *)&this[0xd].field_0x10 = 0;
    *(undefined8 *)&this[0xb].field_0x10 = 0;
    *(undefined8 *)&this[0xb].field_0x18 = 0;
    this[0xd].field_0x18 = 0;
    *(undefined8 *)&this[0xd].field_0x19 = 0;
  }
  return;
}

// InternalConstructor<UMRMeshComponent> @ 146c64580

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<UMRMeshComponent>(FObjectInitializer *param_1)

{
  UPrimitiveComponent *this;
  
  this = (UPrimitiveComponent *)param_1->Obj;
  if (this != (UPrimitiveComponent *)0x0) {
    UPrimitiveComponent::UPrimitiveComponent(this,param_1);
    *(undefined8 *)&this[1].field_0x30 = 2;
    *(undefined ***)this = &UMRMeshComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 = &UMRMeshComponent::_vftable__for__IInterface_AssetUserData__
    ;
    *(undefined ***)&this->field_0x30 =
         &UMRMeshComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x250 = &UMRMeshComponent::_vftable__for__INavRelevantInterface__;
    *(undefined ***)&this->field_0x258 =
         &UMRMeshComponent::_vftable__for__IInterface_AsyncCompilation__;
    *(undefined ***)&this->field_0x260 = &UMRMeshComponent::_vftable__for__IPhysicsComponent__;
    *(undefined ***)&this->field_0x548 = &___7UMRMeshComponent__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined4 *)&this[1].field_0x10 = 0x101;
    *(undefined4 *)&this[1].field_0x14 = 1;
    *(FLinearColor_u_0 *)&this[1].field_0x38 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
    *(undefined8 *)&this[1].field_0x48 = 0;
    *(undefined8 *)&this[1].field_0x50 = 0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    *(undefined8 *)&this[1].field_0x60 = 2;
    *(undefined8 *)&this[1].field_0x68 = 0;
    *(undefined8 *)&this[1].field_0x70 = 0;
    *(undefined8 *)&this[1].field_0x78 = 0;
    *(undefined8 *)&this[1].field_0x80 = 0;
  }
  return;
}

// InternalConstructor<UMeshReconstructorBase> @ 146c64690

void __cdecl InternalConstructor<UMeshReconstructorBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMeshReconstructorBase__6B_;
  }
  return;
}

// InternalConstructor<UMockDataMeshTrackerComponent> @ 146c646c0

void __cdecl InternalConstructor<UMockDataMeshTrackerComponent>(FObjectInitializer *param_1)

{
  if ((UMockDataMeshTrackerComponent *)param_1->Obj != (UMockDataMeshTrackerComponent *)0x0) {
    UMockDataMeshTrackerComponent::UMockDataMeshTrackerComponent
              ((UMockDataMeshTrackerComponent *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalVTableHelperCtorCaller<UMRMeshBodyHolder> @ 146c646e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMRMeshBodyHolder>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMRMeshBodyHolder::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UMRMeshBodyHolder::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UMRMeshBodyHolder::_vftable__for__IInterface_CollisionDataProvider__;
    FBodyInstance::FBodyInstance((FBodyInstance *)&pUVar1[1].field_0x10);
    *(undefined8 *)&pUVar1[0xb].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0xc) = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0xd) = 0;
    *(undefined8 *)&pUVar1[0xd].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xd].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x18 = 0;
    pUVar1[0xd].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0xd].field_0x19 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMRMeshComponent> @ 146c64810

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMRMeshComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPrimitiveComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMRMeshComponent::GetPrivateStaticClass();
  this = (UPrimitiveComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPrimitiveComponent *)0x0) {
    UPrimitiveComponent::UPrimitiveComponent(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &UMRMeshComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 = &UMRMeshComponent::_vftable__for__IInterface_AssetUserData__
    ;
    *(undefined ***)&this->field_0x30 =
         &UMRMeshComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x250 = &UMRMeshComponent::_vftable__for__INavRelevantInterface__;
    *(undefined ***)&this->field_0x258 =
         &UMRMeshComponent::_vftable__for__IInterface_AsyncCompilation__;
    *(undefined ***)&this->field_0x260 = &UMRMeshComponent::_vftable__for__IPhysicsComponent__;
    *(undefined ***)&this->field_0x548 = &___7UMRMeshComponent__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x30 = 2;
    *(undefined4 *)&this[1].field_0x10 = 0x101;
    *(undefined2 *)&this[1].field_0x14 = 1;
    *(FLinearColor_u_0 *)&this[1].field_0x38 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
    *(undefined8 *)&this[1].field_0x48 = 0;
    *(undefined8 *)&this[1].field_0x50 = 0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    *(undefined8 *)&this[1].field_0x60 = 2;
    *(undefined8 *)&this[1].field_0x68 = 0;
    *(undefined8 *)&this[1].field_0x70 = 0;
    *(undefined8 *)&this[1].field_0x78 = 0;
    *(undefined8 *)&this[1].field_0x80 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMeshReconstructorBase> @ 146c649a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMeshReconstructorBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMeshReconstructorBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMeshReconstructorBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMockDataMeshTrackerComponent> @ 146c64a50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMockDataMeshTrackerComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USceneComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMockDataMeshTrackerComponent::GetPrivateStaticClass();
  this = (USceneComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USceneComponent *)0x0) {
    USceneComponent::USceneComponent(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&UMockDataMeshTrackerComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UMockDataMeshTrackerComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UMockDataMeshTrackerComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0x40400000;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 4;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IsObjectPtrEqual<UMRMeshComponent,UMRMeshComponent_*,0> @ 146c64b70

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UMRMeshComponent,UMRMeshComponent_*,0>
          (TObjectPtr<UMRMeshComponent> *param_1,UMRMeshComponent **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UMRMeshComponent *)0x0) {
    return *param_2 == (UMRMeshComponent *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// NewObject<UBodySetup> @ 146c64b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UBodySetup * __cdecl
NewObject<UBodySetup>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UBodySetup *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UBodySetup_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UBodySetup *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UMRMeshBodyHolder> @ 146c64c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMRMeshBodyHolder * __cdecl
NewObject<UMRMeshBodyHolder>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMRMeshBodyHolder *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UMRMeshBodyHolder::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMRMeshBodyHolder *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// StaticEnum<enum_EMeshTrackerVertexColorMode> @ 146c64f60

UEnum * __cdecl StaticEnum<enum_EMeshTrackerVertexColorMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMeshTrackerVertexColorMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MRMesh();
    Z_Registration_Info_UEnum_EMeshTrackerVertexColorMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MRMesh_EMeshTrackerVertexColorMode,(UObject *)pUVar1,
                       L"EMeshTrackerVertexColorMode");
  }
  return Z_Registration_Info_UEnum_EMeshTrackerVertexColorMode.OuterSingleton;
}

// ~TFunction_OwnedObject<`UMRMeshComponent::ClearAllBrickData_Internal'::__l2::<lambda_1>,1,0> @ 146c66910

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMRMeshComponent::ClearAllBrickData_Internal'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UMRMeshComponent::ClearAllBrickData_Internal_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMRMeshComponent::ClearAllBrickData_Internal'::`2'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`InitVertexFactory'::__l2::<lambda_1>,1,0> @ 146c66930

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`InitVertexFactory'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_InitVertexFactory_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this = &TFunction_OwnedObject<`InitVertexFactory'::`2'::<lambda_1>,1,0>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`UMRMeshComponent::SendRenderDynamicData_Concurrent'::__l5::<lambda_1>,1,1> @ 146c66950

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMRMeshComponent::SendRenderDynamicData_Concurrent'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UMRMeshComponent::SendRenderDynamicData_Concurrent_::__l5::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMRMeshComponent::SendRenderDynamicData_Concurrent'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UMRMeshComponent::SetEnableMeshOcclusion'::__l5::<lambda_1>,1,0> @ 146c66970

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMRMeshComponent::SetEnableMeshOcclusion'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UMRMeshComponent::SetEnableMeshOcclusion_::__l5::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMRMeshComponent::SetEnableMeshOcclusion'::`5'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UMRMeshComponent::SendBrickData_Internal'::__l84::<lambda_1>,1,1> @ 146c66990

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMRMeshComponent::SendBrickData_Internal'::__l84::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UMRMeshComponent::SendBrickData_Internal_::__l84::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMRMeshComponent::SendBrickData_Internal'::`84'::<lambda_1>,1,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  return;
}

// operator() @ 146c670f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`InitVertexFactory'::__l2::<lambda_1>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  undefined1 auStack_158 [32];
  longlong *local_138;
  undefined1 *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [56];
  undefined8 auStack_c0 [7];
  int local_88;
  int local_84 [5];
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  FVertexBuffer *local_38;
  undefined8 local_30;
  FRHIShaderResourceView *local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_158;
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MRMesh\\Private\\MRMeshComponent.cpp"
                       ,0x89,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = *(longlong *)((longlong)this + 8);
  local_f8._16_8_ = 0;
  lVar4 = lVar1 + 0x38;
  local_f8._24_8_ = 0;
  local_f8._32_8_ = 0;
  local_f8._40_8_ = 0;
  local_88 = 0;
  local_84[0] = 4;
  local_84[1] = 0;
  local_84[2] = 0;
  local_84[3] = 0;
  local_84[4] = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  lStack_50 = 0;
  local_48 = 0;
  local_40 = 0xffffffff;
  local_3c = 0xff;
  local_3a = 0;
  local_38 = (FVertexBuffer *)0x0;
  local_30._0_4_ = 0;
  local_30._4_1_ = '\0';
  local_30._5_1_ = '\0';
  local_30._6_1_ = '\0';
  local_30._7_1_ = Default;
  local_28 = (FRHIShaderResourceView *)0x0;
  local_60 = *(longlong *)(lVar1 + 0x360);
  local_f8._0_8_ = lVar1 + 8;
  local_f8._8_4_ = 0;
  local_f8._12_4_ = 0x30c00;
  if (*(int *)(lVar1 + 0x60) != 0) {
    lStack_50 = *(longlong *)(lVar1 + 0x368);
    uStack_100 = 0;
    uStack_fc = 0x4020800;
    local_108 = lVar4;
    if ((local_f8 + 0x30 <= &local_108) && (&local_108 < &local_88)) {
      local_118 = 0x10;
      local_130 = local_f8 + 0x30;
      local_120 = 0;
      local_128 = 4;
      local_138 = &local_108;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (local_88 == local_84[0]) {
      local_88 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FVertexStreamComponent>_>
                           (0x810,(ForElementType<FVertexStreamComponent> *)(local_f8 + 0x30),
                            local_84);
    }
    lVar4 = (longlong)local_88;
    local_88 = local_88 + 1;
    *(longlong *)(local_f8 + lVar4 * 0x10 + 0x30) = local_108;
    auStack_c0[lVar4 * 2] = CONCAT44(uStack_fc,uStack_100);
    local_3c = CONCAT11(1,(undefined1)local_3c);
  }
  lVar4 = *(longlong *)((longlong)this + 8);
  if (*(int *)(lVar4 + 0x90) != 0) {
    local_58 = *(longlong *)(lVar4 + 0x370);
    local_f8._24_8_ = 0x405080000000000;
    local_f8._40_8_ = 0x405080400000000;
    local_f8._16_8_ = lVar4 + 0x68;
    local_f8._32_8_ = lVar4 + 0x68;
  }
  if (*(int *)(lVar4 + 0xc0) != 0) {
    local_48 = *(longlong *)(lVar4 + 0x378);
    local_68 = 0x408040000000000;
    local_70 = lVar4 + 0x98;
  }
  FLocalVertexFactory::SetData
            (*(FLocalVertexFactory **)this,(FRHICommandListBase *)param_1,(FDataType *)local_f8);
  (**(code **)(**(longlong **)this + 0x18))(*(longlong **)this,param_1);
  return;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146c67328

/* [thunk]:public: virtual void * __ptr64 __cdecl UMRMeshBodyHolder::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UMRMeshBodyHolder::_vector_deleting_destructor__adjustor_40__(UMRMeshBodyHolder *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMRMeshBodyHolder *)&this[-1].Bounds.Max,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 146c67338

/* [thunk]:public: virtual void * __ptr64 __cdecl UMRMeshComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UMRMeshComponent::_vector_deleting_destructor__adjustor_592__(UMRMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMRMeshComponent *)&this[-1].field_0x390,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 146c6734c

/* [thunk]:public: virtual void * __ptr64 __cdecl UMRMeshComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UMRMeshComponent::_vector_deleting_destructor__adjustor_600__(UMRMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMRMeshComponent *)&this[-1].field_0x388,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 146c67360

/* [thunk]:public: virtual void * __ptr64 __cdecl UMRMeshComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UMRMeshComponent::_vector_deleting_destructor__adjustor_608__(UMRMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMRMeshComponent *)&this[-1].field_0x380,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146c67374

/* [thunk]:public: virtual void * __ptr64 __cdecl UMRMeshComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UMRMeshComponent::_vector_deleting_destructor__adjustor_40__(UMRMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMRMeshComponent *)&this[-1].BodyHolders,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146c67384

/* [thunk]:public: virtual void * __ptr64 __cdecl UMockDataMeshTrackerComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UMockDataMeshTrackerComponent::_vector_deleting_destructor__adjustor_40__
          (UMockDataMeshTrackerComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMockDataMeshTrackerComponent *)&this[-1].MRMesh,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 146c673a0

void * __thiscall
FMRMeshVertexBuffer<UE::Math::TVector2<double>_>::_scalar_deleting_destructor_
          (FMRMeshVertexBuffer<UE::Math::TVector2<double>_> *this,uint param_1)

{
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c673e0

void * __thiscall
FMRMeshVertexBuffer<UE::Math::TVector<float>_>::_scalar_deleting_destructor_
          (FMRMeshVertexBuffer<UE::Math::TVector<float>_> *this,uint param_1)

{
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c67420

void * __thiscall
FMRMeshVertexBuffer<FColor>::_scalar_deleting_destructor_
          (FMRMeshVertexBuffer<FColor> *this,uint param_1)

{
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c67460

void * __thiscall
FMRMeshVertexBuffer<FPackedNormal>::_scalar_deleting_destructor_
          (FMRMeshVertexBuffer<FPackedNormal> *this,uint param_1)

{
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c674a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshBodyHolder,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMRMeshBodyHolder,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c674d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c67500

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c67540

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c67580

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c675b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMRMeshComponent::ClearAllBrickData_Internal'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMRMeshComponent::ClearAllBrickData_Internal'::`2'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c675f0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`InitVertexFactory'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &TFunction_OwnedObject<`InitVertexFactory'::`2'::<lambda_1>,1,0>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c67630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMRMeshComponent::SendRenderDynamicData_Concurrent'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMRMeshComponent::SendRenderDynamicData_Concurrent'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c67670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMRMeshComponent::SetEnableMeshOcclusion'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMRMeshComponent::SetEnableMeshOcclusion'::`5'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c676b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMRMeshComponent::SendBrickData_Internal'::__l84::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMRMeshComponent::SendBrickData_Internal'::`84'::<lambda_1>,1,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c67700

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMeshArrayHolder,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FMeshArrayHolder,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c67740

void * __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FDynamicPrimitiveUniformBuffer>::_scalar_deleting_destructor_
          (TObject<FDynamicPrimitiveUniformBuffer> *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFDynamicPrimitiveUniformBuffer_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  FDynamicPrimitiveUniformBuffer::~FDynamicPrimitiveUniformBuffer
            ((FDynamicPrimitiveUniformBuffer *)(this + 1));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c67790

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMockDataMeshTrackerImpl::FCachedMeshData,SharedPointerInternals::DefaultDeleter<FMockDataMeshTrackerImpl::FCachedMeshData>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMockDataMeshTrackerImpl::FCachedMeshData,SharedPointerInternals::DefaultDeleter<FMockDataMeshTrackerImpl::FCachedMeshData>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c677d0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMeshArrayHolder,SharedPointerInternals::DefaultDeleter<FMeshArrayHolder>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMeshArrayHolder,SharedPointerInternals::DefaultDeleter<FMeshArrayHolder>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c67810

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMockDataMeshTrackerImpl::FMeshTrackerComponentBrickDataReceipt,SharedPointerInternals::DefaultDeleter<FMockDataMeshTrackerImpl::FMeshTrackerComponentBrickDataReceipt>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMockDataMeshTrackerImpl::FMeshTrackerComponentBrickDataReceipt,SharedPointerInternals::DefaultDeleter<FMockDataMeshTrackerImpl::FMeshTrackerComponentBrickDataReceipt>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c67850

void * __thiscall
IMRMesh::FBrickDataReceipt::_scalar_deleting_destructor_(FBrickDataReceipt *this,uint param_1)

{
  *this = (FBrickDataReceipt)&___7FBrickDataReceipt_IMRMesh__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c67890

void * __thiscall
FMockDataMeshTrackerImpl::FCachedMeshData::_scalar_deleting_destructor_
          (FCachedMeshData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Confidence).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Triangles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Tangents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VertexColors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UV0).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Normals).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorldVertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OffsetVertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c67940

void * __thiscall
FMRMeshIndexBuffer::_scalar_deleting_destructor_(FMRMeshIndexBuffer *this,uint param_1)

{
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c67980

void * __thiscall FMRMeshProxy::_scalar_deleting_destructor_(FMRMeshProxy *this,uint param_1)

{
  ~FMRMeshProxy(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c679c0

void * __thiscall
FMRMeshProxySection::_scalar_deleting_destructor_(FMRMeshProxySection *this,uint param_1)

{
  FRHIShaderResourceView *pFVar1;
  
  pFVar1 = (this->ColorBufferSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->TangentXZBufferSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->UVBufferSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->PositionBufferSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  FLocalVertexFactory::~FLocalVertexFactory(&this->VertexFactory);
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)&this->IndexBuffer);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&this->ColorBuffer);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&this->TangentXZBuffer);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&this->UVBuffer);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&this->PositionBuffer);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x380);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c67a80

void * __thiscall
FMeshArrayHolder::_scalar_deleting_destructor_(FMeshArrayHolder *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->BogusColors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BogusTangents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BogusUVs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Indices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Vertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FBrickDataReceipt_IMRMesh__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c67b10

void * __thiscall
FMockDataMeshTrackerImpl::FMeshTrackerComponentBrickDataReceipt::_scalar_deleting_destructor_
          (FMeshTrackerComponentBrickDataReceipt *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  this->_padding_ =
       (longlong)&___7FMeshTrackerComponentBrickDataReceipt_FMockDataMeshTrackerImpl__6B_;
  if ((this->CachedMeshData).Object == (FCachedMeshData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  FCachedMeshData::Recycle((this->CachedMeshData).Object,&this->CachedMeshData);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CachedMeshData).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FBrickDataReceipt_IMRMesh__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c67bb0

void * __thiscall
IInterface_CollisionDataProvider::_scalar_deleting_destructor_
          (IInterface_CollisionDataProvider *this,uint param_1)

{
  *this = (IInterface_CollisionDataProvider)&___7IInterface_CollisionDataProvider__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c67bf0

void * __thiscall
UMRMeshBodyHolder::_scalar_deleting_destructor_(UMRMeshBodyHolder *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_CollisionDataProvider__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BrickDataReceipt).SharedReferenceCount.ReferenceController);
  FBodyInstance::~FBodyInstance(&this->BodyInstance);
  this->_padding_ = (longlong)&___7IInterface_CollisionDataProvider__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x230);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c67c80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
UMRMeshComponent::_scalar_deleting_destructor_(UMRMeshComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x548 = &___7UMRMeshComponent__6B_;
  pFVar1 = (this->BodyIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BodyHolders).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnBrickDataUpdatedDelegate).field_0x8,
             *(int *)&(this->OnBrickDataUpdatedDelegate).field_0x10);
  pvVar2 = *(void **)&(this->OnBrickDataUpdatedDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBrickDataUpdatedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnClearEvent).field_0x8,*(int *)&(this->OnClearEvent).field_0x10);
  pvVar2 = *(void **)&(this->OnClearEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClearEvent);
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x5e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c67dc0

void * __thiscall
UMeshReconstructorBase::_scalar_deleting_destructor_(UMeshReconstructorBase *this,uint param_1)

{
  *(undefined ***)this = &___7UMeshReconstructorBase__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c67e20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UMockDataMeshTrackerComponent::_scalar_deleting_destructor_
          (UMockDataMeshTrackerComponent *this,uint param_1)

{
  FMockDataMeshTrackerImpl *pFVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  pFVar1 = this->Impl;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  if (pFVar1 != (FMockDataMeshTrackerImpl *)0x0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)&pFVar1->FreeCachedMeshDatasMutex);
    DestructItems<TSharedPtr<FMockDataMeshTrackerImpl::FCachedMeshData,1>,int>
              ((TSharedPtr<FMockDataMeshTrackerImpl::FCachedMeshData,1> *)
               (pFVar1->FreeCachedMeshDatas).AllocatorInstance.Data,
               (pFVar1->FreeCachedMeshDatas).ArrayNum);
    pFVar2 = (pFVar1->FreeCachedMeshDatas).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<TSharedPtr<FMockDataMeshTrackerImpl::FCachedMeshData,1>,int>
              ((TSharedPtr<FMockDataMeshTrackerImpl::FCachedMeshData,1> *)
               (pFVar1->CachedMeshDatas).AllocatorInstance.Data,(pFVar1->CachedMeshDatas).ArrayNum);
    pFVar2 = (pFVar1->CachedMeshDatas).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    *(undefined4 *)&(pFVar1->MeshBrickCache).field_0x48 = 0;
    pvVar3 = *(void **)&(pFVar1->MeshBrickCache).field_0x40;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar1->MeshBrickCache);
    DestructItems<FMockDataMeshTrackerImpl::FRawMockMeshData,int>
              ((FRawMockMeshData *)(pFVar1->RawMockMeshData).AllocatorInstance.Data,
               (pFVar1->RawMockMeshData).ArrayNum);
    pFVar2 = (pFVar1->RawMockMeshData).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0xf0);
  }
  pFVar2 = (this->BlockVertexColors).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar3 = *(void **)&(this->OnMeshTrackerUpdated).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMeshTrackerUpdated);
  USceneComponent::~USceneComponent((USceneComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2d0);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeMRMeshComponent @ 146c69a50

void __cdecl EmptyLinkFunctionForGeneratedCodeMRMeshComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMRMesh_init @ 146c69a60

void __cdecl EmptyLinkFunctionForGeneratedCodeMRMesh_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshReconstructorBase @ 146c69a70

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshReconstructorBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMockDataMeshTrackerComponent @ 146c69a80

void __cdecl EmptyLinkFunctionForGeneratedCodeMockDataMeshTrackerComponent(void)

{
  return;
}

// Z_Construct_UClass_UMeshReconstructorBase_NoRegister @ 146c73430

UClass * __cdecl Z_Construct_UClass_UMeshReconstructorBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshReconstructorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MRMesh",L"MeshReconstructorBase",
               &Z_Registration_Info_UClass_UMeshReconstructorBase.InnerSingleton,
               UMeshReconstructorBase::StaticRegisterNativesUMeshReconstructorBase,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMeshReconstructorBase>,
               InternalVTableHelperCtorCaller<UMeshReconstructorBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshReconstructorBase.InnerSingleton;
}

// Z_Construct_UClass_UMockDataMeshTrackerComponent_NoRegister @ 146c734e0

UClass * __cdecl Z_Construct_UClass_UMockDataMeshTrackerComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockDataMeshTrackerComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MRMesh",L"MockDataMeshTrackerComponent",
               &Z_Registration_Info_UClass_UMockDataMeshTrackerComponent.InnerSingleton,
               UMockDataMeshTrackerComponent::StaticRegisterNativesUMockDataMeshTrackerComponent,
               0x2d0,0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UMockDataMeshTrackerComponent>,
               InternalVTableHelperCtorCaller<UMockDataMeshTrackerComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockDataMeshTrackerComponent.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMRMeshConfiguration @ 146c735a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMRMeshConfiguration(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMRMeshConfiguration.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMRMeshConfiguration.InnerSingleton,
               &Z_Construct_UScriptStruct_FMRMeshConfiguration_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMRMeshConfiguration.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FMRMeshConfiguration.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// IMPLEMENT_MODULE_MRMesh @ 146c73f70

void __cdecl IMPLEMENT_MODULE_MRMesh(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarPauseMRMeshBrickCulling'' @ 1503dfc70

void __cdecl _dynamic_atexit_destructor_for__CVarPauseMRMeshBrickCulling__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPauseMRMeshBrickCulling);
  return;
}

// `dynamic_atexit_destructor_for_'EmptyTangents'' @ 1503dfc90

void __cdecl
`UMockDataMeshTrackerComponent::RemoveBlock'::__l5::_dynamic_atexit_destructor_for__EmptyTangents__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmptyTangents.AllocatorInstance.Data;
  if (EmptyTangents.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmptyTangents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmptyTriangles'' @ 1503dfcb0

void __cdecl
`UMockDataMeshTrackerComponent::RemoveBlock'::__l5::_dynamic_atexit_destructor_for__EmptyTriangles__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmptyTriangles.AllocatorInstance.Data;
  if (EmptyTriangles.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmptyTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmptyUVs'' @ 1503dfcd0

void __cdecl
`UMockDataMeshTrackerComponent::RemoveBlock'::__l5::_dynamic_atexit_destructor_for__EmptyUVs__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmptyUVs.AllocatorInstance.Data;
  if (EmptyUVs.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmptyUVs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmptyVertexColors'' @ 1503dfcf0

void __cdecl
`UMockDataMeshTrackerComponent::RemoveBlock'::__l5::
_dynamic_atexit_destructor_for__EmptyVertexColors__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmptyVertexColors.AllocatorInstance.Data;
  if (EmptyVertexColors.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmptyVertexColors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmptyVertices'' @ 1503dfd10

void __cdecl
`UMockDataMeshTrackerComponent::RemoveBlock'::__l5::_dynamic_atexit_destructor_for__EmptyVertices__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmptyVertices.AllocatorInstance.Data;
  if (EmptyVertices.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmptyVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogMockMeshDataTracker'' @ 1503dfd30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMockMeshDataTracker__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMockMeshDataTracker);
  return;
}

// `dynamic_atexit_destructor_for_'LogMrMesh'' @ 1503dfd50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMrMesh__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMrMesh);
  return;
}

