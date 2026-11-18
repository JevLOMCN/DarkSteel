// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEnginePlugin
// Functions: 2

// StartupModule @ 14daaecf0

void __thiscall FDataflowEnginePlugin::StartupModule(FDataflowEnginePlugin *this)

{
  FName FVar1;
  FContextCachingFactory *pFVar2;
  FName *pFVar3;
  FAnyTypesRegistry *this_00;
  FModuleManager *pFVar4;
  TPairInitializer<FName_&,UE::Dataflow::FAnyTypesRegistry::FTypeInfo_&> local_res10;
  FName local_res20;
  code *local_58;
  FName local_50;
  FTypeInfo **local_48;
  code **local_40;
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  if ((UE::Dataflow::FContextCachingFactory::Instance == (FContextCachingFactory *)0x0) &&
     (pFVar2 = ::operator_new(0x50),
     UE::Dataflow::FContextCachingFactory::Instance = (FContextCachingFactory *)0x0,
     pFVar2 != (FContextCachingFactory *)0x0)) {
    *(undefined8 *)&pFVar2->CachingMap = 0;
    *(undefined8 *)&(pFVar2->CachingMap).field_0x8 = 0;
    *(undefined8 *)&(pFVar2->CachingMap).field_0x20 = 0;
    *(undefined4 *)&(pFVar2->CachingMap).field_0x28 = 0;
    *(undefined4 *)&(pFVar2->CachingMap).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar2->CachingMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar2->CachingMap).field_0x34 = 0;
    *(undefined8 *)&(pFVar2->CachingMap).field_0x40 = 0;
    *(undefined4 *)&(pFVar2->CachingMap).field_0x48 = 0;
    UE::Dataflow::FContextCachingFactory::Instance = pFVar2;
  }
  pFVar2 = UE::Dataflow::FContextCachingFactory::Instance;
  local_10 = 0;
  local_28 = &
             ___7__TFunction_OwnedObject_P6APEAUFContextCacheElementBase_Dataflow_UE__AEAVFArchive__PEAU123__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = `UE::Dataflow::ContextCachingCallbacks'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<UE::Dataflow::FContextCacheElementBase_*_(__cdecl*)(FArchive_&,UE::Dataflow::FContextCacheElementBase_*),UE::Dataflow::FContextCacheElementBase_*,FArchive_&,UE::Dataflow::FContextCacheElementBase_*>
                ::Call;
  ::FName::FName((FName *)&local_res10,"FManagedArrayCollection");
  UE::Dataflow::FContextCachingFactory::RegisterSerializeFunction
            (pFVar2,(FName *)&local_res10,
             (TFunction<UE::Dataflow::FContextCacheElementBase_*___cdecl(FArchive_&,UE::Dataflow::FContextCacheElementBase_*)>
              *)local_38);
  pFVar3 = ::FName::FName(&local_res20,"FDataflowDynamicMeshArray");
  FVar1 = *pFVar3;
  this_00 = UE::Dataflow::FAnyTypesRegistry::GetInstance();
  local_58 = TDataflowMultiTypePolicy<TObjectPtr<UDynamicMesh>,TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_>
             ::SupportsTypeStatic;
  local_res10.Value = (FTypeInfo *)FVar1;
  ::FName::FName(&local_50,L"TArray<TObjectPtr<UDynamicMesh>>");
  local_48 = &local_res10.Value;
  local_40 = &local_58;
  TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&,UE::Dataflow::FAnyTypesRegistry::FTypeInfo_&>_>
            ((TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
              *)this_00,&local_res10,(bool *)&local_48);
  pFVar4 = FModuleManager::Get();
  pFVar3 = ::FName::FName((FName *)&local_res10,"DataflowEngine");
  FModuleManager::LoadModule(pFVar4,*pFVar3,None);
  pFVar4 = FModuleManager::Get();
  pFVar3 = ::FName::FName((FName *)&local_res10,"DataflowSimulation");
  FModuleManager::LoadModule(pFVar4,*pFVar3,None);
  return;
}

// ShutdownModule @ 14daaee80

void __thiscall FDataflowEnginePlugin::ShutdownModule(FDataflowEnginePlugin *this)

{
  return;
}

