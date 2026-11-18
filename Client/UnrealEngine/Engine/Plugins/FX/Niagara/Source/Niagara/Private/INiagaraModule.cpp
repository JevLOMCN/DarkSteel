// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 19

// StartupModule @ 1492c2710

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall INiagaraModule::StartupModule(INiagaraModule *this)

{
  TPimplPtr<FNiagaraDebuggerClient,0> *pTVar1;
  FWeakObjectPtr *pFVar2;
  FNiagaraDebuggerClient *pFVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<FNiagaraSimCacheCaptureInfo,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  FNiagaraTypeRegistry *pFVar10;
  UClass *pUVar11;
  UObject *pUVar12;
  UNiagaraMeshRendererProperties *pUVar13;
  FName *pFVar14;
  FModuleManager *pFVar15;
  INiagaraShaderModule *this_00;
  undefined8 *puVar16;
  ulong64 uVar17;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  FString *pFVar18;
  TArray<FNiagaraSimCacheCaptureInfo,TSizedDefaultAllocator<32>_> *pTVar19;
  ulonglong uVar20;
  ForAnyElementType this_02;
  wchar_t *pwVar21;
  wchar_t *pwVar22;
  undefined1 local_res8 [8];
  FLLMScope local_res10 [2];
  TObjectPtr<UObject>_u_0 local_res18;
  FName local_res20;
  undefined1 local_1238 [8];
  FDelegateAllocation local_1230;
  TObjectPtr<UObject>_u_0 local_1220;
  undefined2 local_1218;
  undefined1 local_1216;
  undefined8 local_1214;
  undefined4 local_120c;
  TObjectPtr<UObject>_u_0 local_1208;
  undefined2 local_1200;
  undefined1 local_11fe;
  undefined8 local_11fc;
  undefined4 local_11f4;
  TObjectPtr<UObject>_u_0 local_11f0;
  undefined2 local_11e8;
  undefined1 local_11e6;
  undefined8 local_11e4;
  undefined4 local_11dc;
  TObjectPtr<UObject>_u_0 local_11d8;
  undefined2 local_11d0;
  undefined1 local_11ce;
  undefined8 local_11cc;
  undefined4 local_11c4;
  TObjectPtr<UObject>_u_0 local_11c0;
  undefined2 local_11b8;
  undefined1 local_11b6;
  undefined8 local_11b4;
  undefined4 local_11ac;
  TObjectPtr<UObject>_u_0 local_11a8;
  undefined2 local_11a0;
  undefined1 local_119e;
  undefined8 local_119c;
  undefined4 local_1194;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1190;
  FDelegateAllocation local_1188;
  FName local_1178;
  FName local_1170;
  FName local_1168;
  FName local_1160;
  FName local_1158;
  FName local_1150;
  FName local_1148;
  FName local_1140;
  FName local_1138;
  FName local_1130;
  FName local_1128;
  FName local_1120;
  FName local_1118;
  FName local_1110;
  FName local_1108;
  FName local_1100;
  FName local_10f8;
  FName local_10f0;
  FName local_10e8;
  FName local_10e0;
  FName local_10d8;
  FName local_10d0;
  TObjectPtr<UObject>_u_0 *local_10c8;
  FName local_10c0;
  FName local_10b8;
  FName local_10b0;
  FName local_10a8;
  FName local_10a0;
  FName local_1098;
  FName local_1090;
  FName local_1088;
  FName local_1080;
  FName local_1078;
  FName local_1070;
  FName local_1068;
  FName local_1060;
  FName local_1058;
  FName local_1050;
  FName local_1048;
  FName local_1040;
  FName local_1038;
  FName local_1030;
  FName local_1028;
  FName local_1020;
  FName local_1018;
  FName local_1010;
  FName local_1008;
  FName local_1000;
  FName local_ff8;
  FName local_ff0;
  FName local_fe8;
  FName local_fe0;
  FName local_fd8;
  FName local_fd0;
  FName local_fc8;
  FName local_fc0;
  FName local_fb8;
  FName local_fb0;
  FName local_fa8;
  FName local_fa0;
  FName local_f98;
  FName local_f90;
  FName local_f88;
  FName local_f80;
  FName local_f78;
  FName local_f70;
  FName local_f68;
  FName local_f60;
  FName local_f58;
  FName local_f50;
  FName local_f48;
  FName local_f40;
  FName local_f38;
  FName local_f30;
  FName local_f28;
  FName local_f20;
  FName local_f18;
  FName local_f10;
  FName local_f08;
  FName local_f00;
  FName local_ef8;
  FName local_ef0;
  FName local_ee8;
  FName local_ee0;
  FName local_ed8;
  FName local_ed0;
  FName local_ec8;
  FName local_ec0;
  FName local_eb8;
  FName local_eb0;
  FName local_ea8;
  FName local_ea0;
  FName local_e98;
  FName local_e90;
  FName local_e88;
  FName local_e80;
  FMemScope local_e78;
  FName local_e70;
  FName local_e68;
  FName local_e60;
  FName local_e58;
  FName local_e50;
  FName local_e48;
  FName local_e40;
  FName local_e38;
  undefined1 local_e30 [16];
  ForAnyElementType local_e20;
  undefined8 local_e18;
  FNiagaraVariable local_e10;
  undefined1 local_df0 [16];
  ForAnyElementType local_de0;
  undefined8 local_dd8;
  undefined1 local_dd0 [16];
  ForAnyElementType local_dc0;
  undefined8 local_db8;
  undefined1 local_db0 [16];
  ForAnyElementType local_da0;
  undefined8 local_d98;
  undefined1 local_d90 [16];
  ForAnyElementType local_d80;
  undefined8 local_d78;
  undefined1 local_d70 [16];
  ForAnyElementType local_d60;
  undefined8 local_d58;
  undefined1 local_d50 [16];
  ForAnyElementType local_d40;
  undefined8 local_d38;
  undefined1 local_d30 [16];
  ForAnyElementType local_d20;
  undefined8 local_d18;
  undefined1 local_d10 [16];
  ForAnyElementType local_d00;
  undefined8 local_cf8;
  undefined1 local_cf0 [16];
  ForAnyElementType local_ce0;
  undefined8 local_cd8;
  undefined1 local_cd0 [16];
  ForAnyElementType local_cc0;
  undefined8 local_cb8;
  FNiagaraVariable local_cb0;
  undefined1 local_c90 [16];
  ForAnyElementType local_c80;
  undefined8 local_c78;
  undefined1 local_c70 [16];
  ForAnyElementType local_c60;
  undefined8 local_c58;
  undefined1 local_c50 [16];
  ForAnyElementType local_c40;
  undefined8 local_c38;
  undefined1 local_c30 [16];
  ForAnyElementType local_c20;
  undefined8 local_c18;
  undefined1 local_c10 [16];
  ForAnyElementType local_c00;
  undefined8 local_bf8;
  undefined1 local_bf0 [16];
  ForAnyElementType local_be0;
  undefined8 local_bd8;
  undefined1 local_bd0 [16];
  ForAnyElementType local_bc0;
  undefined8 local_bb8;
  undefined1 local_bb0 [16];
  ForAnyElementType local_ba0;
  undefined8 local_b98;
  undefined1 local_b90 [16];
  ForAnyElementType local_b80;
  undefined8 local_b78;
  undefined1 local_b70 [16];
  ForAnyElementType local_b60;
  undefined8 local_b58;
  undefined1 local_b50 [16];
  ForAnyElementType local_b40;
  undefined8 local_b38;
  undefined1 local_b30 [16];
  ForAnyElementType local_b20;
  undefined8 local_b18;
  undefined1 local_b10 [16];
  ForAnyElementType local_b00;
  undefined8 local_af8;
  undefined1 local_af0 [16];
  ForAnyElementType local_ae0;
  undefined8 local_ad8;
  undefined1 local_ad0 [16];
  ForAnyElementType local_ac0;
  undefined8 local_ab8;
  undefined1 local_ab0 [16];
  ForAnyElementType local_aa0;
  undefined8 local_a98;
  undefined1 local_a90 [16];
  ForAnyElementType local_a80;
  undefined8 local_a78;
  undefined1 local_a70 [16];
  ForAnyElementType local_a60;
  undefined8 local_a58;
  undefined1 local_a50 [16];
  ForAnyElementType local_a40;
  undefined8 local_a38;
  undefined1 local_a30 [16];
  ForAnyElementType local_a20;
  undefined8 local_a18;
  undefined1 local_a10 [16];
  ForAnyElementType local_a00;
  undefined8 local_9f8;
  undefined1 local_9f0 [16];
  ForAnyElementType local_9e0;
  undefined8 local_9d8;
  undefined1 local_9d0 [16];
  ForAnyElementType local_9c0;
  undefined8 local_9b8;
  undefined1 local_9b0 [16];
  ForAnyElementType local_9a0;
  undefined8 local_998;
  undefined1 local_990 [16];
  ForAnyElementType local_980;
  undefined8 local_978;
  FNiagaraVariable local_970;
  undefined1 local_950 [16];
  ForAnyElementType local_940;
  undefined8 local_938;
  undefined1 local_930 [16];
  ForAnyElementType local_920;
  undefined8 local_918;
  undefined1 local_910 [16];
  ForAnyElementType local_900;
  undefined8 local_8f8;
  undefined1 local_8f0 [16];
  ForAnyElementType local_8e0;
  undefined8 local_8d8;
  undefined1 local_8d0 [16];
  ForAnyElementType local_8c0;
  undefined8 local_8b8;
  undefined1 local_8b0 [16];
  ForAnyElementType local_8a0;
  undefined8 local_898;
  undefined1 local_890 [16];
  ForAnyElementType local_880;
  undefined8 local_878;
  undefined1 local_870 [16];
  ForAnyElementType local_860;
  undefined8 local_858;
  undefined1 local_850 [16];
  ForAnyElementType local_840;
  undefined8 local_838;
  undefined1 local_830 [16];
  ForAnyElementType local_820;
  undefined8 local_818;
  undefined1 local_810 [16];
  ForAnyElementType local_800;
  undefined8 local_7f8;
  undefined1 local_7f0 [16];
  ForAnyElementType local_7e0;
  undefined8 local_7d8;
  undefined1 local_7d0 [16];
  ForAnyElementType local_7c0;
  undefined8 local_7b8;
  undefined1 local_7b0 [16];
  ForAnyElementType local_7a0;
  undefined8 local_798;
  undefined1 local_790 [16];
  ForAnyElementType local_780;
  undefined8 local_778;
  undefined1 local_770 [16];
  ForAnyElementType local_760;
  undefined8 local_758;
  undefined1 local_750 [16];
  ForAnyElementType local_740;
  undefined8 local_738;
  undefined1 local_730 [16];
  ForAnyElementType local_720;
  undefined8 local_718;
  undefined1 local_710 [16];
  ForAnyElementType local_700;
  undefined8 local_6f8;
  undefined1 local_6f0 [16];
  ForAnyElementType local_6e0;
  undefined8 local_6d8;
  undefined1 local_6d0 [16];
  ForAnyElementType local_6c0;
  undefined8 local_6b8;
  undefined1 local_6b0 [16];
  ForAnyElementType local_6a0;
  undefined8 local_698;
  undefined1 local_690 [16];
  ForAnyElementType local_680;
  undefined8 local_678;
  undefined1 local_670 [16];
  ForAnyElementType local_660;
  undefined8 local_658;
  undefined1 local_650 [16];
  ForAnyElementType local_640;
  undefined8 local_638;
  undefined1 local_630 [16];
  ForAnyElementType local_620;
  undefined8 local_618;
  undefined1 local_610 [16];
  ForAnyElementType local_600;
  undefined8 local_5f8;
  undefined1 local_5f0 [16];
  ForAnyElementType local_5e0;
  undefined8 local_5d8;
  undefined1 local_5d0 [16];
  ForAnyElementType local_5c0;
  undefined8 local_5b8;
  undefined1 local_5b0 [16];
  ForAnyElementType local_5a0;
  undefined8 local_598;
  undefined1 local_590 [16];
  ForAnyElementType local_580;
  undefined8 local_578;
  undefined1 local_570 [16];
  ForAnyElementType local_560;
  undefined8 local_558;
  undefined1 local_550 [16];
  ForAnyElementType local_540;
  undefined8 local_538;
  undefined1 local_530 [16];
  ForAnyElementType local_520;
  undefined8 local_518;
  undefined1 local_510 [16];
  ForAnyElementType local_500;
  undefined8 local_4f8;
  undefined1 local_4f0 [16];
  ForAnyElementType local_4e0;
  undefined8 local_4d8;
  undefined1 local_4d0 [16];
  ForAnyElementType local_4c0;
  undefined8 local_4b8;
  undefined1 local_4b0 [16];
  ForAnyElementType local_4a0;
  undefined8 local_498;
  undefined1 local_490 [16];
  ForAnyElementType local_480;
  undefined8 local_478;
  undefined1 local_470 [16];
  ForAnyElementType local_460;
  undefined8 local_458;
  undefined1 local_450 [16];
  ForAnyElementType local_440;
  undefined8 local_438;
  undefined1 local_430 [16];
  ForAnyElementType local_420;
  undefined8 local_418;
  undefined1 local_410 [16];
  ForAnyElementType local_400;
  undefined8 local_3f8;
  undefined1 local_3f0 [16];
  ForAnyElementType local_3e0;
  undefined8 local_3d8;
  undefined1 local_3d0 [16];
  ForAnyElementType local_3c0;
  undefined8 local_3b8;
  undefined1 local_3b0 [16];
  ForAnyElementType local_3a0;
  undefined8 local_398;
  FNiagaraVariable local_390;
  FNiagaraVariable local_370;
  FDestructionSentinel local_350;
  FDestructionSentinel local_338;
  FDelegateAllocation *local_320;
  FDestructionSentinel local_318;
  FDelegateAllocation *local_300;
  FDestructionSentinel local_2f8;
  undefined8 local_2e0;
  longlong local_2d8;
  FName local_2d0;
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  FName local_288;
  int local_280;
  FName local_268;
  int local_260;
  FName local_248;
  int local_240;
  FName local_228;
  int local_220;
  FName local_208;
  int local_200;
  FName local_1e8;
  int local_1e0;
  FName local_1c8;
  int local_1c0;
  FName local_1a8;
  int local_1a0;
  FName local_188;
  int local_180;
  FName local_168;
  int local_160;
  FName local_148;
  int local_140;
  FName local_128;
  int local_120;
  FName local_108;
  int local_100;
  FName local_e8;
  int local_e0;
  FName local_c8;
  int local_c0;
  FName local_a8;
  int local_a0;
  FName local_88;
  int local_80;
  FString local_68;
  FString local_58;
  FString local_48;
  
  FNiagaraTypeRegistry::Init();
  VectorVM::Init();
  FNiagaraTypeHelper::InitLWCTypes();
  FLLMScope::FLLMScope(local_res10,Niagara,false,None,Default,true);
  FMemScope::FMemScope(&local_e78,Niagara,true);
  FNiagaraTypeDefinition::Init();
  FNiagaraTypeRegistry::ProcessRegistryQueue();
  FNiagaraWorldManager::OnStartup();
  NiagaraSimulationTaskPriority::Initialize();
  pTVar8 = ::operator_new(0xd0);
  pTVar19 = (TArray<FNiagaraSimCacheCaptureInfo,TSizedDefaultAllocator<32>_> *)0x0;
  if (pTVar8 != (TArray<FNiagaraSimCacheCaptureInfo,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar8->ArrayNum = 0;
    pTVar8->ArrayMax = 0;
    (pTVar8->AllocatorInstance).Data =
         (FScriptContainerElement *)UE::Core::Private::PimplPtr::DeleterFunc<FNiagaraDebuggerClient>
    ;
    FNiagaraDebuggerClient::FNiagaraDebuggerClient((FNiagaraDebuggerClient *)(pTVar8 + 1));
    pTVar19 = pTVar8;
  }
  pTVar1 = &this->DebuggerClient;
  if ((TPimplPtr<FNiagaraDebuggerClient,0> *)&local_2d8 == pTVar1) {
    if ((FNiagaraDebuggerClient *)(pTVar19 + 1) == (FNiagaraDebuggerClient *)0x0)
    goto LAB_1492c27e7;
    pFVar9 = (pTVar19->AllocatorInstance).Data;
  }
  else {
    pFVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (FNiagaraDebuggerClient *)(pTVar19 + 1);
    if (pFVar3 == (FNiagaraDebuggerClient *)0x0) goto LAB_1492c27e7;
    pFVar9 = pFVar3[-1].SimCacheCaptures.AllocatorInstance.Data;
    pTVar19 = &pFVar3[-1].SimCacheCaptures;
  }
  (*(code *)pFVar9)(pTVar19);
LAB_1492c27e7:
  ::FName::FName(&local_res20,L"Engine.WorldDeltaTime");
  iVar7 = -1;
  local_228 = local_res20;
  if (FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    Engine_WorldDeltaTime._padding_._0_4_ = -1;
  }
  else {
    pFVar10 = FNiagaraTypeRegistry::Get();
    Engine_WorldDeltaTime._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(pFVar10,&FNiagaraTypeDefinition::FloatDef);
  }
  Engine_WorldDeltaTime._padding_._0_4_ = local_228.ComparisonIndex.Value;
  Engine_WorldDeltaTime._padding_._4_4_ = local_228.Number;
  local_220 = (int)Engine_WorldDeltaTime._padding_;
  if (Engine_WorldDeltaTime.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Engine_WorldDeltaTime.VarData.AllocatorInstance.Data);
  }
  Engine_WorldDeltaTime.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  Engine_WorldDeltaTime.VarData.ArrayNum = 0;
  Engine_WorldDeltaTime.VarData.ArrayMax = 0;
  ::FName::FName(&local_f18,L"Engine.DeltaTime");
  local_208 = local_f18;
  if (FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    Engine_DeltaTime._padding_._0_4_ = -1;
  }
  else {
    pFVar10 = FNiagaraTypeRegistry::Get();
    Engine_DeltaTime._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(pFVar10,&FNiagaraTypeDefinition::FloatDef);
  }
  Engine_DeltaTime._padding_._0_4_ = local_208.ComparisonIndex.Value;
  Engine_DeltaTime._padding_._4_4_ = local_208.Number;
  local_200 = (int)Engine_DeltaTime._padding_;
  if (Engine_DeltaTime.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Engine_DeltaTime.VarData.AllocatorInstance.Data);
  }
  Engine_DeltaTime.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  Engine_DeltaTime.VarData.ArrayNum = 0;
  Engine_DeltaTime.VarData.ArrayMax = 0;
  ::FName::FName(&local_e70,L"Engine.InverseDeltaTime");
  local_1e8 = local_e70;
  if (FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    Engine_InvDeltaTime._padding_._0_4_ = -1;
  }
  else {
    pFVar10 = FNiagaraTypeRegistry::Get();
    Engine_InvDeltaTime._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(pFVar10,&FNiagaraTypeDefinition::FloatDef);
  }
  Engine_InvDeltaTime._padding_._0_4_ = local_1e8.ComparisonIndex.Value;
  Engine_InvDeltaTime._padding_._4_4_ = local_1e8.Number;
  local_1e0 = (int)Engine_InvDeltaTime._padding_;
  if (Engine_InvDeltaTime.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Engine_InvDeltaTime.VarData.AllocatorInstance.Data);
  }
  Engine_InvDeltaTime.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  Engine_InvDeltaTime.VarData.ArrayNum = 0;
  Engine_InvDeltaTime.VarData.ArrayMax = 0;
  ::FName::FName(&local_e68,L"Engine.Time");
  local_1c8 = local_e68;
  if (FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    Engine_Time._padding_._0_4_ = -1;
  }
  else {
    pFVar10 = FNiagaraTypeRegistry::Get();
    Engine_Time._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(pFVar10,&FNiagaraTypeDefinition::FloatDef);
  }
  Engine_Time._padding_._0_4_ = local_1c8.ComparisonIndex.Value;
  Engine_Time._padding_._4_4_ = local_1c8.Number;
  local_1c0 = (int)Engine_Time._padding_;
  if (Engine_Time.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Engine_Time.VarData.AllocatorInstance.Data);
  }
  Engine_Time.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  Engine_Time.VarData.ArrayNum = 0;
  Engine_Time.VarData.ArrayMax = 0;
  ::FName::FName(&local_e60,L"Engine.RealTime");
  local_1a8 = local_e60;
  if (FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    Engine_RealTime._padding_._0_4_ = -1;
  }
  else {
    pFVar10 = FNiagaraTypeRegistry::Get();
    Engine_RealTime._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(pFVar10,&FNiagaraTypeDefinition::FloatDef);
  }
  Engine_RealTime._padding_._0_4_ = local_1a8.ComparisonIndex.Value;
  Engine_RealTime._padding_._4_4_ = local_1a8.Number;
  local_1a0 = (int)Engine_RealTime._padding_;
  if (Engine_RealTime.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Engine_RealTime.VarData.AllocatorInstance.Data);
  }
  Engine_RealTime.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  Engine_RealTime.VarData.ArrayNum = 0;
  Engine_RealTime.VarData.ArrayMax = 0;
  ::FName::FName(&local_e58,L"Engine.QualityLevel");
  local_188 = local_e58;
  if (FNiagaraTypeDefinition::IntDef.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    Engine_QualityLevel._padding_._0_4_ = -1;
  }
  else {
    pFVar10 = FNiagaraTypeRegistry::Get();
    Engine_QualityLevel._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(pFVar10,&FNiagaraTypeDefinition::IntDef);
  }
  Engine_QualityLevel._padding_._0_4_ = local_188.ComparisonIndex.Value;
  Engine_QualityLevel._padding_._4_4_ = local_188.Number;
  local_180 = (int)Engine_QualityLevel._padding_;
  if (Engine_QualityLevel.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Engine_QualityLevel.VarData.AllocatorInstance.Data);
  }
  Engine_QualityLevel.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  Engine_QualityLevel.VarData.ArrayNum = 0;
  Engine_QualityLevel.VarData.ArrayMax = 0;
  ::FName::FName(&local_e50,L"Engine.Owner.Position");
  local_168 = local_e50;
  if (FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    Engine_Owner_Position._padding_._0_4_ = -1;
  }
  else {
    pFVar10 = FNiagaraTypeRegistry::Get();
    Engine_Owner_Position._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(pFVar10,&FNiagaraTypeDefinition::PositionDef);
  }
  Engine_Owner_Position._padding_._0_4_ = local_168.ComparisonIndex.Value;
  Engine_Owner_Position._padding_._4_4_ = local_168.Number;
  local_160 = (int)Engine_Owner_Position._padding_;
  if (Engine_Owner_Position.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Engine_Owner_Position.VarData.AllocatorInstance.Data);
  }
  Engine_Owner_Position.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  Engine_Owner_Position.VarData.ArrayNum = 0;
  Engine_Owner_Position.VarData.ArrayMax = 0;
  ::FName::FName(&local_e48,L"Engine.Owner.Velocity");
  local_148 = local_e48;
  if (FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    Engine_Owner_Velocity._padding_._0_4_ = -1;
  }
  else {
    pFVar10 = FNiagaraTypeRegistry::Get();
    Engine_Owner_Velocity._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(pFVar10,&FNiagaraTypeDefinition::Vec3Def);
  }
  Engine_Owner_Velocity._padding_._0_4_ = local_148.ComparisonIndex.Value;
  Engine_Owner_Velocity._padding_._4_4_ = local_148.Number;
  local_140 = (int)Engine_Owner_Velocity._padding_;
  if (Engine_Owner_Velocity.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Engine_Owner_Velocity.VarData.AllocatorInstance.Data);
  }
  Engine_Owner_Velocity.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  Engine_Owner_Velocity.VarData.ArrayNum = 0;
  Engine_Owner_Velocity.VarData.ArrayMax = 0;
  ::FName::FName(&local_e40,L"Engine.Owner.SystemXAxis");
  local_128 = local_e40;
  if (FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    Engine_Owner_XAxis._padding_._0_4_ = -1;
  }
  else {
    pFVar10 = FNiagaraTypeRegistry::Get();
    Engine_Owner_XAxis._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(pFVar10,&FNiagaraTypeDefinition::Vec3Def);
  }
  Engine_Owner_XAxis._padding_._0_4_ = local_128.ComparisonIndex.Value;
  Engine_Owner_XAxis._padding_._4_4_ = local_128.Number;
  local_120 = (int)Engine_Owner_XAxis._padding_;
  if (Engine_Owner_XAxis.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Engine_Owner_XAxis.VarData.AllocatorInstance.Data);
  }
  Engine_Owner_XAxis.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  Engine_Owner_XAxis.VarData.ArrayNum = 0;
  Engine_Owner_XAxis.VarData.ArrayMax = 0;
  ::FName::FName(&local_1178,L"Engine.Owner.SystemYAxis");
  local_108 = local_1178;
  if (FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    Engine_Owner_YAxis._padding_._0_4_ = -1;
  }
  else {
    pFVar10 = FNiagaraTypeRegistry::Get();
    Engine_Owner_YAxis._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(pFVar10,&FNiagaraTypeDefinition::Vec3Def);
  }
  Engine_Owner_YAxis._padding_._0_4_ = local_108.ComparisonIndex.Value;
  Engine_Owner_YAxis._padding_._4_4_ = local_108.Number;
  local_100 = (int)Engine_Owner_YAxis._padding_;
  if (Engine_Owner_YAxis.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Engine_Owner_YAxis.VarData.AllocatorInstance.Data);
  }
  Engine_Owner_YAxis.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  Engine_Owner_YAxis.VarData.ArrayNum = 0;
  Engine_Owner_YAxis.VarData.ArrayMax = 0;
  ::FName::FName(&local_1170,L"Engine.Owner.SystemZAxis");
  local_e8 = local_1170;
  if (FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    Engine_Owner_ZAxis._padding_._0_4_ = -1;
  }
  else {
    pFVar10 = FNiagaraTypeRegistry::Get();
    Engine_Owner_ZAxis._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(pFVar10,&FNiagaraTypeDefinition::Vec3Def);
  }
  Engine_Owner_ZAxis._padding_._0_4_ = local_e8.ComparisonIndex.Value;
  Engine_Owner_ZAxis._padding_._4_4_ = local_e8.Number;
  local_e0 = (int)Engine_Owner_ZAxis._padding_;
  if (Engine_Owner_ZAxis.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Engine_Owner_ZAxis.VarData.AllocatorInstance.Data);
  }
  Engine_Owner_ZAxis.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  Engine_Owner_ZAxis.VarData.ArrayNum = 0;
  Engine_Owner_ZAxis.VarData.ArrayMax = 0;
  ::FName::FName(&local_1168,L"Engine.Owner.Scale");
  local_c8 = local_1168;
  if (FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    Engine_Owner_Scale._padding_._0_4_ = -1;
  }
  else {
    pFVar10 = FNiagaraTypeRegistry::Get();
    Engine_Owner_Scale._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(pFVar10,&FNiagaraTypeDefinition::Vec3Def);
  }
  Engine_Owner_Scale._padding_._0_4_ = local_c8.ComparisonIndex.Value;
  Engine_Owner_Scale._padding_._4_4_ = local_c8.Number;
  local_c0 = (int)Engine_Owner_Scale._padding_;
  if (Engine_Owner_Scale.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Engine_Owner_Scale.VarData.AllocatorInstance.Data);
  }
  Engine_Owner_Scale.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  Engine_Owner_Scale.VarData.ArrayNum = 0;
  Engine_Owner_Scale.VarData.ArrayMax = 0;
  ::FName::FName(&local_1160,L"Engine.Owner.Rotation");
  local_a8 = local_1160;
  if (FNiagaraTypeDefinition::QuatDef.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    Engine_Owner_Rotation._padding_._0_4_ = -1;
  }
  else {
    pFVar10 = FNiagaraTypeRegistry::Get();
    Engine_Owner_Rotation._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(pFVar10,&FNiagaraTypeDefinition::QuatDef);
  }
  Engine_Owner_Rotation._padding_._0_4_ = local_a8.ComparisonIndex.Value;
  Engine_Owner_Rotation._padding_._4_4_ = local_a8.Number;
  local_a0 = (int)Engine_Owner_Rotation._padding_;
  if (Engine_Owner_Rotation.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Engine_Owner_Rotation.VarData.AllocatorInstance.Data);
  }
  Engine_Owner_Rotation.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  Engine_Owner_Rotation.VarData.ArrayNum = 0;
  Engine_Owner_Rotation.VarData.ArrayMax = 0;
  ::FName::FName(&local_1158,L"Engine.Owner.LWCTile");
  local_88 = local_1158;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    Engine_Owner_LWC_Tile._padding_._0_4_ = -1;
  }
  else {
    pFVar10 = FNiagaraTypeRegistry::Get();
    Engine_Owner_LWC_Tile._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(pFVar10,&FNiagaraTypeDefinition::Vec4Def);
  }
  Engine_Owner_LWC_Tile._padding_._0_4_ = local_88.ComparisonIndex.Value;
  Engine_Owner_LWC_Tile._padding_._4_4_ = local_88.Number;
  local_80 = (int)Engine_Owner_LWC_Tile._padding_;
  if (Engine_Owner_LWC_Tile.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Engine_Owner_LWC_Tile.VarData.AllocatorInstance.Data);
  }
  Engine_Owner_LWC_Tile.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  Engine_Owner_LWC_Tile.VarData.ArrayNum = 0;
  Engine_Owner_LWC_Tile.VarData.ArrayMax = 0;
  ::FName::FName(&local_1150,L"Engine.ExecIndex");
  local_288 = local_1150;
  if (FNiagaraTypeDefinition::IntDef.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    Engine_ExecIndex._padding_._0_4_ = -1;
  }
  else {
    pFVar10 = FNiagaraTypeRegistry::Get();
    Engine_ExecIndex._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(pFVar10,&FNiagaraTypeDefinition::IntDef);
  }
  Engine_ExecIndex._padding_._0_4_ = local_288.ComparisonIndex.Value;
  Engine_ExecIndex._padding_._4_4_ = local_288.Number;
  local_280 = (int)Engine_ExecIndex._padding_;
  if (Engine_ExecIndex.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Engine_ExecIndex.VarData.AllocatorInstance.Data);
  }
  Engine_ExecIndex.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  Engine_ExecIndex.VarData.ArrayNum = 0;
  Engine_ExecIndex.VarData.ArrayMax = 0;
  ::FName::FName(&local_1148,L"Engine.Owner.SystemLocalToWorld");
  local_268 = local_1148;
  if (FNiagaraTypeDefinition::Matrix4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    Engine_Owner_SystemLocalToWorld._padding_._0_4_ = -1;
  }
  else {
    pFVar10 = FNiagaraTypeRegistry::Get();
    Engine_Owner_SystemLocalToWorld._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(pFVar10,&FNiagaraTypeDefinition::Matrix4Def);
  }
  Engine_Owner_SystemLocalToWorld._padding_._0_4_ = local_268.ComparisonIndex.Value;
  Engine_Owner_SystemLocalToWorld._padding_._4_4_ = local_268.Number;
  local_260 = (int)Engine_Owner_SystemLocalToWorld._padding_;
  if (Engine_Owner_SystemLocalToWorld.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(Engine_Owner_SystemLocalToWorld.VarData.AllocatorInstance.Data);
  }
  Engine_Owner_SystemLocalToWorld.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  Engine_Owner_SystemLocalToWorld.VarData.ArrayNum = 0;
  Engine_Owner_SystemLocalToWorld.VarData.ArrayMax = 0;
  ::FName::FName(&local_1140,L"Engine.Owner.SystemWorldToLocal");
  local_248 = local_1140;
  if (FNiagaraTypeDefinition::Matrix4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    Engine_Owner_SystemWorldToLocal._padding_._0_4_ = -1;
  }
  else {
    pFVar10 = FNiagaraTypeRegistry::Get();
    Engine_Owner_SystemWorldToLocal._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(pFVar10,&FNiagaraTypeDefinition::Matrix4Def);
  }
  Engine_Owner_SystemWorldToLocal._padding_._0_4_ = local_248.ComparisonIndex.Value;
  Engine_Owner_SystemWorldToLocal._padding_._4_4_ = local_248.Number;
  local_240 = (int)Engine_Owner_SystemWorldToLocal._padding_;
  if (Engine_Owner_SystemWorldToLocal.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(Engine_Owner_SystemWorldToLocal.VarData.AllocatorInstance.Data);
  }
  Engine_Owner_SystemWorldToLocal.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  Engine_Owner_SystemWorldToLocal.VarData.ArrayNum = 0;
  Engine_Owner_SystemWorldToLocal.VarData.ArrayMax = 0;
  ::FName::FName(&local_1138,L"Engine.Owner.SystemLocalToWorldTransposed");
  local_d90._0_4_ = local_1138.ComparisonIndex.Value;
  local_d90._4_4_ = local_1138.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_d90 + 8),&FNiagaraTypeDefinition::Matrix4Def);
  local_d80.Data = (FScriptContainerElement *)0x0;
  local_d78._0_4_ = 0;
  local_d78._4_4_ = 0;
  FNiagaraVariable::operator=
            (&Engine_Owner_SystemLocalToWorldTransposed,(FNiagaraVariable *)local_d90);
  if (local_d80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d80.Data);
  }
  ::FName::FName(&local_1130,L"Engine.Owner.SystemWorldToLocalTransposed");
  local_d70._0_4_ = local_1130.ComparisonIndex.Value;
  local_d70._4_4_ = local_1130.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_d70 + 8),&FNiagaraTypeDefinition::Matrix4Def);
  local_d60.Data = (FScriptContainerElement *)0x0;
  local_d58._0_4_ = 0;
  local_d58._4_4_ = 0;
  FNiagaraVariable::operator=
            (&Engine_Owner_SystemWorldToLocalTransposed,(FNiagaraVariable *)local_d70);
  if (local_d60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d60.Data);
  }
  ::FName::FName(&local_1128,L"Engine.Owner.SystemLocalToWorldNoScale");
  local_d50._0_4_ = local_1128.ComparisonIndex.Value;
  local_d50._4_4_ = local_1128.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_d50 + 8),&FNiagaraTypeDefinition::Matrix4Def);
  local_d40.Data = (FScriptContainerElement *)0x0;
  local_d38._0_4_ = 0;
  local_d38._4_4_ = 0;
  FNiagaraVariable::operator=(&Engine_Owner_SystemLocalToWorldNoScale,(FNiagaraVariable *)local_d50)
  ;
  if (local_d40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d40.Data);
  }
  ::FName::FName(&local_1120,L"Engine.Owner.SystemWorldToLocalNoScale");
  local_d30._0_4_ = local_1120.ComparisonIndex.Value;
  local_d30._4_4_ = local_1120.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_d30 + 8),&FNiagaraTypeDefinition::Matrix4Def);
  local_d20.Data = (FScriptContainerElement *)0x0;
  local_d18._0_4_ = 0;
  local_d18._4_4_ = 0;
  FNiagaraVariable::operator=(&Engine_Owner_SystemWorldToLocalNoScale,(FNiagaraVariable *)local_d30)
  ;
  if (local_d20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d20.Data);
  }
  ::FName::FName(&local_1118,L"Engine.Owner.TimeSinceRendered");
  local_d10._0_4_ = local_1118.ComparisonIndex.Value;
  local_d10._4_4_ = local_1118.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_d10 + 8),&FNiagaraTypeDefinition::FloatDef);
  local_d00.Data = (FScriptContainerElement *)0x0;
  local_cf8._0_4_ = 0;
  local_cf8._4_4_ = 0;
  FNiagaraVariable::operator=(&Engine_Owner_TimeSinceRendered,(FNiagaraVariable *)local_d10);
  if (local_d00.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d00.Data);
  }
  ::FName::FName(&local_1110,L"Engine.Owner.LODDistance");
  local_cf0._0_4_ = local_1110.ComparisonIndex.Value;
  local_cf0._4_4_ = local_1110.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_cf0 + 8),&FNiagaraTypeDefinition::FloatDef);
  local_ce0.Data = (FScriptContainerElement *)0x0;
  local_cd8._0_4_ = 0;
  local_cd8._4_4_ = 0;
  FNiagaraVariable::operator=(&Engine_Owner_LODDistance,(FNiagaraVariable *)local_cf0);
  if (local_ce0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ce0.Data);
  }
  ::FName::FName(&local_1108,L"Engine.Owner.LODDistanceFraction");
  local_cd0._0_4_ = local_1108.ComparisonIndex.Value;
  local_cd0._4_4_ = local_1108.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_cd0 + 8),&FNiagaraTypeDefinition::FloatDef);
  local_cc0.Data = (FScriptContainerElement *)0x0;
  local_cb8._0_4_ = 0;
  local_cb8._4_4_ = 0;
  FNiagaraVariable::operator=(&Engine_Owner_LODDistanceFraction,(FNiagaraVariable *)local_cd0);
  if (local_cc0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cc0.Data);
  }
  ::FName::FName(&local_1100,L"Engine.Owner.ExecutionState");
  local_11d8.DebugPtr = (UObject *)FNiagaraTypeDefinition::ExecutionStateEnum;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (FNiagaraTypeDefinition::ExecutionStateEnum != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FNiagaraTypeDefinition::ExecutionStateEnum);
  }
  local_11ce = 0;
  local_11d0 = 3;
  local_11cc = 0xffffffffffffffff;
  local_11c4 = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_11d8.ObjectPtr);
  local_cb0._padding_._0_4_ = local_1100.ComparisonIndex.Value;
  local_cb0._padding_._4_4_ = local_1100.Number;
  if ((UEnum *)local_11d8.DebugPtr == (UEnum *)0x0) {
    local_cb0._padding_._0_4_ = -1;
  }
  else {
    pFVar10 = FNiagaraTypeRegistry::Get();
    local_cb0._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal
                   (pFVar10,(FNiagaraTypeDefinition *)&local_11d8.ObjectPtr);
  }
  local_cb0.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_cb0.VarData.ArrayNum = 0;
  local_cb0.VarData.ArrayMax = 0;
  FNiagaraVariable::operator=(&Engine_Owner_ExecutionState,&local_cb0);
  if (local_cb0.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cb0.VarData.AllocatorInstance.Data);
  }
  ::FName::FName(&local_10f8,L"Engine.ExecutionCount");
  local_c90._0_4_ = local_10f8.ComparisonIndex.Value;
  local_c90._4_4_ = local_10f8.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_c90 + 8),&FNiagaraTypeDefinition::IntDef);
  local_c80.Data = (FScriptContainerElement *)0x0;
  local_c78._0_4_ = 0;
  local_c78._4_4_ = 0;
  FNiagaraVariable::operator=(&Engine_ExecutionCount,(FNiagaraVariable *)local_c90);
  if (local_c80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c80.Data);
  }
  ::FName::FName(&local_10f0,L"Engine.Emitter.NumParticles");
  local_c70._0_4_ = local_10f0.ComparisonIndex.Value;
  local_c70._4_4_ = local_10f0.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_c70 + 8),&FNiagaraTypeDefinition::IntDef);
  local_c60.Data = (FScriptContainerElement *)0x0;
  local_c58._0_4_ = 0;
  local_c58._4_4_ = 0;
  FNiagaraVariable::operator=(&Engine_Emitter_NumParticles,(FNiagaraVariable *)local_c70);
  if (local_c60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c60.Data);
  }
  ::FName::FName(&local_10e8,L"Engine.Emitter.SimulationPosition");
  local_c50._0_4_ = local_10e8.ComparisonIndex.Value;
  local_c50._4_4_ = local_10e8.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_c50 + 8),&FNiagaraTypeDefinition::PositionDef);
  local_c40.Data = (FScriptContainerElement *)0x0;
  local_c38._0_4_ = 0;
  local_c38._4_4_ = 0;
  FNiagaraVariable::operator=(&Engine_Emitter_SimulationPosition,(FNiagaraVariable *)local_c50);
  if (local_c40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c40.Data);
  }
  ::FName::FName(&local_10e0,L"Engine.Emitter.TotalSpawnedParticles");
  local_c30._0_4_ = local_10e0.ComparisonIndex.Value;
  local_c30._4_4_ = local_10e0.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_c30 + 8),&FNiagaraTypeDefinition::IntDef);
  local_c20.Data = (FScriptContainerElement *)0x0;
  local_c18._0_4_ = 0;
  local_c18._4_4_ = 0;
  FNiagaraVariable::operator=(&Engine_Emitter_TotalSpawnedParticles,(FNiagaraVariable *)local_c30);
  if (local_c20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c20.Data);
  }
  ::FName::FName(&local_10d8,L"Engine.Emitter.SpawnCountScale");
  local_c10._0_4_ = local_10d8.ComparisonIndex.Value;
  local_c10._4_4_ = local_10d8.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_c10 + 8),&FNiagaraTypeDefinition::FloatDef);
  local_c00.Data = (FScriptContainerElement *)0x0;
  local_bf8._0_4_ = 0;
  local_bf8._4_4_ = 0;
  FNiagaraVariable::operator=(&Engine_Emitter_SpawnCountScale,(FNiagaraVariable *)local_c10);
  if (local_c00.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c00.Data);
  }
  ::FName::FName(&local_10d0,L"Engine.Emitter.InstanceSeed");
  local_bf0._0_4_ = local_10d0.ComparisonIndex.Value;
  local_bf0._4_4_ = local_10d0.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_bf0 + 8),&FNiagaraTypeDefinition::IntDef);
  local_be0.Data = (FScriptContainerElement *)0x0;
  local_bd8._0_4_ = 0;
  local_bd8._4_4_ = 0;
  FNiagaraVariable::operator=(&Engine_Emitter_InstanceSeed,(FNiagaraVariable *)local_bf0);
  if (local_be0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_be0.Data);
  }
  ::FName::FName(&local_10c0,L"Engine.Emitter.ID");
  local_res18.DebugPtr = (UObject *)FNiagaraEmitterID::StaticStruct();
  local_11a8.DebugPtr = local_res18.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UScriptStruct *)local_res18.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable(local_res18.DebugPtr);
  }
  local_119e = 0;
  local_11a0 = 2;
  local_119c = 0xffffffffffffffff;
  local_1194 = 0xffffffff;
  bVar6 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct
                    ((UScriptStruct *)local_res18.DebugPtr,UserFacing);
  if (!bVar6) {
    local_10c8 = &local_res18;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_10c8);
  }
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_11a8.ObjectPtr);
  local_bd0._0_4_ = local_10c0.ComparisonIndex.Value;
  local_bd0._4_4_ = local_10c0.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_bd0 + 8),
             (FNiagaraTypeDefinition *)&local_11a8.ObjectPtr);
  local_bc0.Data = (FScriptContainerElement *)0x0;
  local_bb8._0_4_ = 0;
  local_bb8._4_4_ = 0;
  FNiagaraVariable::operator=(&Engine_Emitter_ID,(FNiagaraVariable *)local_bd0);
  if (local_bc0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bc0.Data);
  }
  ::FName::FName(&local_10b8,L"Engine.System.TickCount");
  local_bb0._0_4_ = local_10b8.ComparisonIndex.Value;
  local_bb0._4_4_ = local_10b8.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_bb0 + 8),&FNiagaraTypeDefinition::IntDef);
  local_ba0.Data = (FScriptContainerElement *)0x0;
  local_b98._0_4_ = 0;
  local_b98._4_4_ = 0;
  FNiagaraVariable::operator=(&Engine_System_TickCount,(FNiagaraVariable *)local_bb0);
  if (local_ba0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ba0.Data);
  }
  ::FName::FName(&local_10b0,L"Engine.System.NumEmittersAlive");
  local_b90._0_4_ = local_10b0.ComparisonIndex.Value;
  local_b90._4_4_ = local_10b0.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_b90 + 8),&FNiagaraTypeDefinition::IntDef);
  local_b80.Data = (FScriptContainerElement *)0x0;
  local_b78._0_4_ = 0;
  local_b78._4_4_ = 0;
  FNiagaraVariable::operator=(&Engine_System_NumEmittersAlive,(FNiagaraVariable *)local_b90);
  if (local_b80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b80.Data);
  }
  ::FName::FName(&local_10a8,L"Engine.System.SignificanceIndex");
  local_b70._0_4_ = local_10a8.ComparisonIndex.Value;
  local_b70._4_4_ = local_10a8.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_b70 + 8),&FNiagaraTypeDefinition::IntDef);
  local_b60.Data = (FScriptContainerElement *)0x0;
  local_b58._0_4_ = 0;
  local_b58._4_4_ = 0;
  FNiagaraVariable::operator=(&Engine_System_SignificanceIndex,(FNiagaraVariable *)local_b70);
  if (local_b60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b60.Data);
  }
  ::FName::FName(&local_10a0,L"Engine.System.RandomSeed");
  local_b50._0_4_ = local_10a0.ComparisonIndex.Value;
  local_b50._4_4_ = local_10a0.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_b50 + 8),&FNiagaraTypeDefinition::IntDef);
  local_b40.Data = (FScriptContainerElement *)0x0;
  local_b38._0_4_ = 0;
  local_b38._4_4_ = 0;
  FNiagaraVariable::operator=(&Engine_System_RandomSeed,(FNiagaraVariable *)local_b50);
  if (local_b40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b40.Data);
  }
  ::FName::FName(&local_1098,L"Engine.System.CurrentTimeStep");
  local_db0._0_4_ = local_1098.ComparisonIndex.Value;
  local_db0._4_4_ = local_1098.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_db0 + 8),&FNiagaraTypeDefinition::IntDef);
  local_da0.Data = (FScriptContainerElement *)0x0;
  local_d98._0_4_ = 0;
  local_d98._4_4_ = 0;
  FNiagaraVariable::operator=(&Engine_System_CurrentTimeStep,(FNiagaraVariable *)local_db0);
  if (local_da0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_da0.Data);
  }
  ::FName::FName(&local_1090,L"Engine.System.NumTimeSteps");
  local_b30._0_4_ = local_1090.ComparisonIndex.Value;
  local_b30._4_4_ = local_1090.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_b30 + 8),&FNiagaraTypeDefinition::IntDef);
  local_b20.Data = (FScriptContainerElement *)0x0;
  local_b18._0_4_ = 0;
  local_b18._4_4_ = 0;
  FNiagaraVariable::operator=(&Engine_System_NumTimeSteps,(FNiagaraVariable *)local_b30);
  if (local_b20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b20.Data);
  }
  ::FName::FName(&local_1088,L"Engine.System.TimeStepFraction");
  local_b10._0_4_ = local_1088.ComparisonIndex.Value;
  local_b10._4_4_ = local_1088.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_b10 + 8),&FNiagaraTypeDefinition::FloatDef);
  local_b00.Data = (FScriptContainerElement *)0x0;
  local_af8._0_4_ = 0;
  local_af8._4_4_ = 0;
  FNiagaraVariable::operator=(&Engine_System_TimeStepFraction,(FNiagaraVariable *)local_b10);
  if (local_b00.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b00.Data);
  }
  ::FName::FName(&local_1080,L"Engine.System.NumParticles");
  local_af0._0_4_ = local_1080.ComparisonIndex.Value;
  local_af0._4_4_ = local_1080.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_af0 + 8),&FNiagaraTypeDefinition::IntDef);
  local_ae0.Data = (FScriptContainerElement *)0x0;
  local_ad8._0_4_ = 0;
  local_ad8._4_4_ = 0;
  FNiagaraVariable::operator=(&Engine_System_NumParticles,(FNiagaraVariable *)local_af0);
  if (local_ae0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ae0.Data);
  }
  ::FName::FName(&local_1078,L"Engine.System.NumEmitters");
  local_ad0._0_4_ = local_1078.ComparisonIndex.Value;
  local_ad0._4_4_ = local_1078.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_ad0 + 8),&FNiagaraTypeDefinition::IntDef);
  local_ac0.Data = (FScriptContainerElement *)0x0;
  local_ab8._0_4_ = 0;
  local_ab8._4_4_ = 0;
  FNiagaraVariable::operator=(&Engine_System_NumEmitters,(FNiagaraVariable *)local_ad0);
  if (local_ac0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ac0.Data);
  }
  ::FName::FName(&local_1070,L"Engine.NumSystemInstances");
  local_ab0._0_4_ = local_1070.ComparisonIndex.Value;
  local_ab0._4_4_ = local_1070.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_ab0 + 8),&FNiagaraTypeDefinition::IntDef);
  local_aa0.Data = (FScriptContainerElement *)0x0;
  local_a98._0_4_ = 0;
  local_a98._4_4_ = 0;
  FNiagaraVariable::operator=(&Engine_NumSystemInstances,(FNiagaraVariable *)local_ab0);
  if (local_aa0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_aa0.Data);
  }
  ::FName::FName(&local_1068,L"Engine.GlobalSpawnCountScale");
  local_a90._0_4_ = local_1068.ComparisonIndex.Value;
  local_a90._4_4_ = local_1068.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_a90 + 8),&FNiagaraTypeDefinition::FloatDef);
  local_a80.Data = (FScriptContainerElement *)0x0;
  local_a78._0_4_ = 0;
  local_a78._4_4_ = 0;
  FNiagaraVariable::operator=(&Engine_GlobalSpawnCountScale,(FNiagaraVariable *)local_a90);
  if (local_a80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a80.Data);
  }
  ::FName::FName(&local_1060,L"Engine.GlobalSystemCountScale");
  local_a70._0_4_ = local_1060.ComparisonIndex.Value;
  local_a70._4_4_ = local_1060.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_a70 + 8),&FNiagaraTypeDefinition::FloatDef);
  local_a60.Data = (FScriptContainerElement *)0x0;
  local_a58._0_4_ = 0;
  local_a58._4_4_ = 0;
  FNiagaraVariable::operator=(&Engine_GlobalSystemScale,(FNiagaraVariable *)local_a70);
  if (local_a60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a60.Data);
  }
  ::FName::FName(&local_1058,L"Engine.System.Age");
  local_a50._0_4_ = local_1058.ComparisonIndex.Value;
  local_a50._4_4_ = local_1058.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_a50 + 8),&FNiagaraTypeDefinition::FloatDef);
  local_a40.Data = (FScriptContainerElement *)0x0;
  local_a38._0_4_ = 0;
  local_a38._4_4_ = 0;
  FNiagaraVariable::operator=(&Engine_System_Age,(FNiagaraVariable *)local_a50);
  if (local_a40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a40.Data);
  }
  ::FName::FName(&local_1050,L"Emitter.Age");
  local_a30._0_4_ = local_1050.ComparisonIndex.Value;
  local_a30._4_4_ = local_1050.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_a30 + 8),&FNiagaraTypeDefinition::FloatDef);
  local_a20.Data = (FScriptContainerElement *)0x0;
  local_a18._0_4_ = 0;
  local_a18._4_4_ = 0;
  FNiagaraVariable::operator=(&Emitter_Age,(FNiagaraVariable *)local_a30);
  if (local_a20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a20.Data);
  }
  ::FName::FName(&local_1048,L"Emitter.LocalSpace");
  local_a10._0_4_ = local_1048.ComparisonIndex.Value;
  local_a10._4_4_ = local_1048.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_a10 + 8),&FNiagaraTypeDefinition::BoolDef);
  local_a00.Data = (FScriptContainerElement *)0x0;
  local_9f8._0_4_ = 0;
  local_9f8._4_4_ = 0;
  FNiagaraVariable::operator=(&Emitter_LocalSpace,(FNiagaraVariable *)local_a10);
  if (local_a00.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a00.Data);
  }
  ::FName::FName(&local_1040,L"Emitter.RandomSeed");
  local_9f0._0_4_ = local_1040.ComparisonIndex.Value;
  local_9f0._4_4_ = local_1040.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_9f0 + 8),&FNiagaraTypeDefinition::IntDef);
  local_9e0.Data = (FScriptContainerElement *)0x0;
  local_9d8._0_4_ = 0;
  local_9d8._4_4_ = 0;
  FNiagaraVariable::operator=(&Emitter_RandomSeed,(FNiagaraVariable *)local_9f0);
  if (local_9e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9e0.Data);
  }
  ::FName::FName(&local_1038,L"Emitter.Determinism");
  local_9d0._0_4_ = local_1038.ComparisonIndex.Value;
  local_9d0._4_4_ = local_1038.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_9d0 + 8),&FNiagaraTypeDefinition::BoolDef);
  local_9c0.Data = (FScriptContainerElement *)0x0;
  local_9b8._0_4_ = 0;
  local_9b8._4_4_ = 0;
  FNiagaraVariable::operator=(&Emitter_Determinism,(FNiagaraVariable *)local_9d0);
  if (local_9c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9c0.Data);
  }
  ::FName::FName(&local_1030,L"Emitter.InterpolatedSpawn");
  local_9b0._0_4_ = local_1030.ComparisonIndex.Value;
  local_9b0._4_4_ = local_1030.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_9b0 + 8),&FNiagaraTypeDefinition::BoolDef);
  local_9a0.Data = (FScriptContainerElement *)0x0;
  local_998._0_4_ = 0;
  local_998._4_4_ = 0;
  FNiagaraVariable::operator=(&Emitter_InterpolatedSpawn,(FNiagaraVariable *)local_9b0);
  if (local_9a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9a0.Data);
  }
  ::FName::FName(&local_1028,L"Emitter.OverrideGlobalSpawnCountScale");
  local_990._0_4_ = local_1028.ComparisonIndex.Value;
  local_990._4_4_ = local_1028.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_990 + 8),&FNiagaraTypeDefinition::BoolDef);
  local_980.Data = (FScriptContainerElement *)0x0;
  local_978._0_4_ = 0;
  local_978._4_4_ = 0;
  FNiagaraVariable::operator=(&Emitter_OverrideGlobalSpawnCountScale,(FNiagaraVariable *)local_990);
  if (local_980.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_980.Data);
  }
  ::FName::FName(&local_1020,L"Emitter.SimulationTarget");
  local_11f0.DebugPtr = (UObject *)FNiagaraTypeDefinition::SimulationTargetEnum;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (FNiagaraTypeDefinition::SimulationTargetEnum != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FNiagaraTypeDefinition::SimulationTargetEnum);
  }
  local_11e8 = 3;
  local_11e6 = 0;
  local_11e4 = 0xffffffffffffffff;
  local_11dc = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_11f0.ObjectPtr);
  local_970._padding_._0_4_ = local_1020.ComparisonIndex.Value;
  local_970._padding_._4_4_ = local_1020.Number;
  if ((UEnum *)local_11f0.DebugPtr == (UEnum *)0x0) {
    local_970._padding_._0_4_ = -1;
  }
  else {
    pFVar10 = FNiagaraTypeRegistry::Get();
    local_970._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal
                   (pFVar10,(FNiagaraTypeDefinition *)&local_11f0.ObjectPtr);
  }
  local_970.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_970.VarData.ArrayNum = 0;
  local_970.VarData.ArrayMax = 0;
  FNiagaraVariable::operator=(&Emitter_SimulationTarget,&local_970);
  if (local_970.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_970.VarData.AllocatorInstance.Data);
  }
  ::FName::FName(&local_1018,L"Emitter.SpawnRate");
  local_950._0_4_ = local_1018.ComparisonIndex.Value;
  local_950._4_4_ = local_1018.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_950 + 8),&FNiagaraTypeDefinition::FloatDef);
  local_940.Data = (FScriptContainerElement *)0x0;
  local_938._0_4_ = 0;
  local_938._4_4_ = 0;
  FNiagaraVariable::operator=(&Emitter_SpawnRate,(FNiagaraVariable *)local_950);
  if (local_940.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_940.Data);
  }
  ::FName::FName(&local_1010,L"Emitter.SpawnInterval");
  local_930._0_4_ = local_1010.ComparisonIndex.Value;
  local_930._4_4_ = local_1010.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_930 + 8),&FNiagaraTypeDefinition::FloatDef);
  local_920.Data = (FScriptContainerElement *)0x0;
  local_918._0_4_ = 0;
  local_918._4_4_ = 0;
  FNiagaraVariable::operator=(&Emitter_SpawnInterval,(FNiagaraVariable *)local_930);
  if (local_920.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_920.Data);
  }
  ::FName::FName(&local_1008,L"Emitter.InterpSpawnStartDt");
  local_910._0_4_ = local_1008.ComparisonIndex.Value;
  local_910._4_4_ = local_1008.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_910 + 8),&FNiagaraTypeDefinition::FloatDef);
  local_900.Data = (FScriptContainerElement *)0x0;
  local_8f8._0_4_ = 0;
  local_8f8._4_4_ = 0;
  FNiagaraVariable::operator=(&Emitter_InterpSpawnStartDt,(FNiagaraVariable *)local_910);
  if (local_900.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_900.Data);
  }
  ::FName::FName(&local_1000,L"Emitter.SpawnGroup");
  local_8f0._0_4_ = local_1000.ComparisonIndex.Value;
  local_8f0._4_4_ = local_1000.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_8f0 + 8),&FNiagaraTypeDefinition::IntDef);
  local_8e0.Data = (FScriptContainerElement *)0x0;
  local_8d8._0_4_ = 0;
  local_8d8._4_4_ = 0;
  FNiagaraVariable::operator=(&Emitter_SpawnGroup,(FNiagaraVariable *)local_8f0);
  if (local_8e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8e0.Data);
  }
  ::FName::FName(&local_ff8,L"Particles.UniqueID");
  local_8d0._0_4_ = local_ff8.ComparisonIndex.Value;
  local_8d0._4_4_ = local_ff8.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_8d0 + 8),&FNiagaraTypeDefinition::IntDef);
  local_8c0.Data = (FScriptContainerElement *)0x0;
  local_8b8._0_4_ = 0;
  local_8b8._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_UniqueID,(FNiagaraVariable *)local_8d0);
  if (local_8c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8c0.Data);
  }
  ::FName::FName(&local_ff0,L"Particles.ID");
  local_8b0._0_4_ = local_ff0.ComparisonIndex.Value;
  local_8b0._4_4_ = local_ff0.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_8b0 + 8),&FNiagaraTypeDefinition::IDDef);
  local_8a0.Data = (FScriptContainerElement *)0x0;
  local_898._0_4_ = 0;
  local_898._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_ID,(FNiagaraVariable *)local_8b0);
  if (local_8a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8a0.Data);
  }
  ::FName::FName(&local_fe8,L"Particles.Position");
  local_890._0_4_ = local_fe8.ComparisonIndex.Value;
  local_890._4_4_ = local_fe8.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_890 + 8),&FNiagaraTypeDefinition::PositionDef);
  local_880.Data = (FScriptContainerElement *)0x0;
  local_878._0_4_ = 0;
  local_878._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_Position,(FNiagaraVariable *)local_890);
  if (local_880.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_880.Data);
  }
  ::FName::FName(&local_fe0,L"Particles.Velocity");
  local_870._0_4_ = local_fe0.ComparisonIndex.Value;
  local_870._4_4_ = local_fe0.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_870 + 8),&FNiagaraTypeDefinition::Vec3Def);
  local_860.Data = (FScriptContainerElement *)0x0;
  local_858._0_4_ = 0;
  local_858._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_Velocity,(FNiagaraVariable *)local_870);
  if (local_860.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_860.Data);
  }
  ::FName::FName(&local_fd8,L"Particles.Color");
  local_850._0_4_ = local_fd8.ComparisonIndex.Value;
  local_850._4_4_ = local_fd8.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_850 + 8),&FNiagaraTypeDefinition::ColorDef);
  local_840.Data = (FScriptContainerElement *)0x0;
  local_838._0_4_ = 0;
  local_838._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_Color,(FNiagaraVariable *)local_850);
  if (local_840.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_840.Data);
  }
  ::FName::FName(&local_fd0,L"Particles.SpriteRotation");
  local_830._0_4_ = local_fd0.ComparisonIndex.Value;
  local_830._4_4_ = local_fd0.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_830 + 8),&FNiagaraTypeDefinition::FloatDef);
  local_820.Data = (FScriptContainerElement *)0x0;
  local_818._0_4_ = 0;
  local_818._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_SpriteRotation,(FNiagaraVariable *)local_830);
  if (local_820.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_820.Data);
  }
  ::FName::FName(&local_fc8,L"Particles.Age");
  local_810._0_4_ = local_fc8.ComparisonIndex.Value;
  local_810._4_4_ = local_fc8.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_810 + 8),&FNiagaraTypeDefinition::FloatDef);
  local_800.Data = (FScriptContainerElement *)0x0;
  local_7f8._0_4_ = 0;
  local_7f8._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_Age,(FNiagaraVariable *)local_810);
  if (local_800.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_800.Data);
  }
  ::FName::FName(&local_fc0,L"Particles.NormalizedAge");
  local_7f0._0_4_ = local_fc0.ComparisonIndex.Value;
  local_7f0._4_4_ = local_fc0.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_7f0 + 8),&FNiagaraTypeDefinition::FloatDef);
  local_7e0.Data = (FScriptContainerElement *)0x0;
  local_7d8._0_4_ = 0;
  local_7d8._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_NormalizedAge,(FNiagaraVariable *)local_7f0);
  if (local_7e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7e0.Data);
  }
  ::FName::FName(&local_fb8,L"Particles.SpriteSize");
  local_7d0._0_4_ = local_fb8.ComparisonIndex.Value;
  local_7d0._4_4_ = local_fb8.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_7d0 + 8),&FNiagaraTypeDefinition::Vec2Def);
  local_7c0.Data = (FScriptContainerElement *)0x0;
  local_7b8._0_4_ = 0;
  local_7b8._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_SpriteSize,(FNiagaraVariable *)local_7d0);
  if (local_7c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7c0.Data);
  }
  ::FName::FName(&local_fb0,L"Particles.SpriteFacing");
  local_7b0._0_4_ = local_fb0.ComparisonIndex.Value;
  local_7b0._4_4_ = local_fb0.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_7b0 + 8),&FNiagaraTypeDefinition::Vec3Def);
  local_7a0.Data = (FScriptContainerElement *)0x0;
  local_798._0_4_ = 0;
  local_798._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_SpriteFacing,(FNiagaraVariable *)local_7b0);
  if (local_7a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7a0.Data);
  }
  ::FName::FName(&local_fa8,L"Particles.SpriteAlignment");
  local_790._0_4_ = local_fa8.ComparisonIndex.Value;
  local_790._4_4_ = local_fa8.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_790 + 8),&FNiagaraTypeDefinition::Vec3Def);
  local_780.Data = (FScriptContainerElement *)0x0;
  local_778._0_4_ = 0;
  local_778._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_SpriteAlignment,(FNiagaraVariable *)local_790);
  if (local_780.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_780.Data);
  }
  ::FName::FName(&local_fa0,L"Particles.SubImageIndex");
  local_770._0_4_ = local_fa0.ComparisonIndex.Value;
  local_770._4_4_ = local_fa0.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_770 + 8),&FNiagaraTypeDefinition::FloatDef);
  local_760.Data = (FScriptContainerElement *)0x0;
  local_758._0_4_ = 0;
  local_758._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_SubImageIndex,(FNiagaraVariable *)local_770);
  if (local_760.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_760.Data);
  }
  ::FName::FName(&local_f98,L"Particles.DynamicMaterialParameter");
  local_750._0_4_ = local_f98.ComparisonIndex.Value;
  local_750._4_4_ = local_f98.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_750 + 8),&FNiagaraTypeDefinition::Vec4Def);
  local_740.Data = (FScriptContainerElement *)0x0;
  local_738._0_4_ = 0;
  local_738._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_DynamicMaterialParameter,(FNiagaraVariable *)local_750);
  if (local_740.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_740.Data);
  }
  ::FName::FName(&local_f90,L"Particles.DynamicMaterialParameter1");
  local_730._0_4_ = local_f90.ComparisonIndex.Value;
  local_730._4_4_ = local_f90.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_730 + 8),&FNiagaraTypeDefinition::Vec4Def);
  local_720.Data = (FScriptContainerElement *)0x0;
  local_718._0_4_ = 0;
  local_718._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_DynamicMaterialParameter1,(FNiagaraVariable *)local_730);
  if (local_720.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_720.Data);
  }
  ::FName::FName(&local_f88,L"Particles.DynamicMaterialParameter2");
  local_710._0_4_ = local_f88.ComparisonIndex.Value;
  local_710._4_4_ = local_f88.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_710 + 8),&FNiagaraTypeDefinition::Vec4Def);
  local_700.Data = (FScriptContainerElement *)0x0;
  local_6f8._0_4_ = 0;
  local_6f8._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_DynamicMaterialParameter2,(FNiagaraVariable *)local_710);
  if (local_700.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_700.Data);
  }
  ::FName::FName(&local_f80,L"Particles.DynamicMaterialParameter3");
  local_6f0._0_4_ = local_f80.ComparisonIndex.Value;
  local_6f0._4_4_ = local_f80.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_6f0 + 8),&FNiagaraTypeDefinition::Vec4Def);
  local_6e0.Data = (FScriptContainerElement *)0x0;
  local_6d8._0_4_ = 0;
  local_6d8._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_DynamicMaterialParameter3,(FNiagaraVariable *)local_6f0);
  if (local_6e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6e0.Data);
  }
  ::FName::FName(&local_f78,L"Particles.Scale");
  local_6d0._0_4_ = local_f78.ComparisonIndex.Value;
  local_6d0._4_4_ = local_f78.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_6d0 + 8),&FNiagaraTypeDefinition::Vec3Def);
  local_6c0.Data = (FScriptContainerElement *)0x0;
  local_6b8._0_4_ = 0;
  local_6b8._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_Scale,(FNiagaraVariable *)local_6d0);
  if (local_6c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6c0.Data);
  }
  ::FName::FName(&local_f70,L"Particles.Lifetime");
  local_6b0._0_4_ = local_f70.ComparisonIndex.Value;
  local_6b0._4_4_ = local_f70.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_6b0 + 8),&FNiagaraTypeDefinition::FloatDef);
  local_6a0.Data = (FScriptContainerElement *)0x0;
  local_698._0_4_ = 0;
  local_698._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_Lifetime,(FNiagaraVariable *)local_6b0);
  if (local_6a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6a0.Data);
  }
  ::FName::FName(&local_f68,L"Particles.MeshOrientation");
  local_690._0_4_ = local_f68.ComparisonIndex.Value;
  local_690._4_4_ = local_f68.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_690 + 8),&FNiagaraTypeDefinition::QuatDef);
  local_680.Data = (FScriptContainerElement *)0x0;
  local_678._0_4_ = 0;
  local_678._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_MeshOrientation,(FNiagaraVariable *)local_690);
  if (local_680.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_680.Data);
  }
  ::FName::FName(&local_f60,L"Particles.UVScale");
  local_670._0_4_ = local_f60.ComparisonIndex.Value;
  local_670._4_4_ = local_f60.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_670 + 8),&FNiagaraTypeDefinition::Vec2Def);
  local_660.Data = (FScriptContainerElement *)0x0;
  local_658._0_4_ = 0;
  local_658._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_UVScale,(FNiagaraVariable *)local_670);
  if (local_660.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_660.Data);
  }
  ::FName::FName(&local_f58,L"Particles.PivotOffset");
  local_650._0_4_ = local_f58.ComparisonIndex.Value;
  local_650._4_4_ = local_f58.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_650 + 8),&FNiagaraTypeDefinition::Vec2Def);
  local_640.Data = (FScriptContainerElement *)0x0;
  local_638._0_4_ = 0;
  local_638._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_PivotOffset,(FNiagaraVariable *)local_650);
  if (local_640.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_640.Data);
  }
  ::FName::FName(&local_f50,L"Particles.CameraOffset");
  local_630._0_4_ = local_f50.ComparisonIndex.Value;
  local_630._4_4_ = local_f50.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_630 + 8),&FNiagaraTypeDefinition::FloatDef);
  local_620.Data = (FScriptContainerElement *)0x0;
  local_618._0_4_ = 0;
  local_618._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_CameraOffset,(FNiagaraVariable *)local_630);
  if (local_620.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_620.Data);
  }
  ::FName::FName(&local_f48,L"Particles.MaterialRandom");
  local_610._0_4_ = local_f48.ComparisonIndex.Value;
  local_610._4_4_ = local_f48.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_610 + 8),&FNiagaraTypeDefinition::FloatDef);
  local_600.Data = (FScriptContainerElement *)0x0;
  local_5f8._0_4_ = 0;
  local_5f8._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_MaterialRandom,(FNiagaraVariable *)local_610);
  if (local_600.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_600.Data);
  }
  ::FName::FName(&local_f40,L"Particles.LightRadius");
  local_5f0._0_4_ = local_f40.ComparisonIndex.Value;
  local_5f0._4_4_ = local_f40.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_5f0 + 8),&FNiagaraTypeDefinition::FloatDef);
  local_5e0.Data = (FScriptContainerElement *)0x0;
  local_5d8._0_4_ = 0;
  local_5d8._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_LightRadius,(FNiagaraVariable *)local_5f0);
  if (local_5e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5e0.Data);
  }
  ::FName::FName(&local_f38,L"Particles.LightExponent");
  local_5d0._0_4_ = local_f38.ComparisonIndex.Value;
  local_5d0._4_4_ = local_f38.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_5d0 + 8),&FNiagaraTypeDefinition::FloatDef);
  local_5c0.Data = (FScriptContainerElement *)0x0;
  local_5b8._0_4_ = 0;
  local_5b8._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_LightExponent,(FNiagaraVariable *)local_5d0);
  if (local_5c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5c0.Data);
  }
  ::FName::FName(&local_f30,L"Particles.LightEnabled");
  local_5b0._0_4_ = local_f30.ComparisonIndex.Value;
  local_5b0._4_4_ = local_f30.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_5b0 + 8),&FNiagaraTypeDefinition::BoolDef);
  local_5a0.Data = (FScriptContainerElement *)0x0;
  local_598._0_4_ = 0;
  local_598._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_LightEnabled,(FNiagaraVariable *)local_5b0);
  if (local_5a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5a0.Data);
  }
  ::FName::FName(&local_f28,L"Particles.LightVolumetricScattering");
  local_590._0_4_ = local_f28.ComparisonIndex.Value;
  local_590._4_4_ = local_f28.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_590 + 8),&FNiagaraTypeDefinition::FloatDef);
  local_580.Data = (FScriptContainerElement *)0x0;
  local_578._0_4_ = 0;
  local_578._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_LightVolumetricScattering,(FNiagaraVariable *)local_590);
  if (local_580.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_580.Data);
  }
  ::FName::FName(&local_f20,L"Particles.LightSpecularScale");
  local_570._0_4_ = local_f20.ComparisonIndex.Value;
  local_570._4_4_ = local_f20.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_570 + 8),&FNiagaraTypeDefinition::FloatDef);
  local_560.Data = (FScriptContainerElement *)0x0;
  local_558._0_4_ = 0;
  local_558._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_LightSpecularScale,(FNiagaraVariable *)local_570);
  if (local_560.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_560.Data);
  }
  ::FName::FName(&local_ea8,L"Particles.LightDiffuseScale");
  local_550._0_4_ = local_ea8.ComparisonIndex.Value;
  local_550._4_4_ = local_ea8.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_550 + 8),&FNiagaraTypeDefinition::FloatDef);
  local_540.Data = (FScriptContainerElement *)0x0;
  local_538._0_4_ = 0;
  local_538._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_LightDiffuseScale,(FNiagaraVariable *)local_550);
  if (local_540.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_540.Data);
  }
  ::FName::FName(&local_f10,L"Particles.RibbonID");
  local_530._0_4_ = local_f10.ComparisonIndex.Value;
  local_530._4_4_ = local_f10.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_530 + 8),&FNiagaraTypeDefinition::IDDef);
  local_520.Data = (FScriptContainerElement *)0x0;
  local_518._0_4_ = 0;
  local_518._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_RibbonID,(FNiagaraVariable *)local_530);
  if (local_520.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_520.Data);
  }
  ::FName::FName(&local_f08,L"Particles.RibbonWidth");
  local_510._0_4_ = local_f08.ComparisonIndex.Value;
  local_510._4_4_ = local_f08.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_510 + 8),&FNiagaraTypeDefinition::FloatDef);
  local_500.Data = (FScriptContainerElement *)0x0;
  local_4f8._0_4_ = 0;
  local_4f8._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_RibbonWidth,(FNiagaraVariable *)local_510);
  if (local_500.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_500.Data);
  }
  ::FName::FName(&local_f00,L"Particles.RibbonTwist");
  local_4f0._0_4_ = local_f00.ComparisonIndex.Value;
  local_4f0._4_4_ = local_f00.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_4f0 + 8),&FNiagaraTypeDefinition::FloatDef);
  local_4e0.Data = (FScriptContainerElement *)0x0;
  local_4d8._0_4_ = 0;
  local_4d8._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_RibbonTwist,(FNiagaraVariable *)local_4f0);
  if (local_4e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e0.Data);
  }
  ::FName::FName(&local_ef8,L"Particles.RibbonFacing");
  local_4d0._0_4_ = local_ef8.ComparisonIndex.Value;
  local_4d0._4_4_ = local_ef8.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_4d0 + 8),&FNiagaraTypeDefinition::Vec3Def);
  local_4c0.Data = (FScriptContainerElement *)0x0;
  local_4b8._0_4_ = 0;
  local_4b8._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_RibbonFacing,(FNiagaraVariable *)local_4d0);
  if (local_4c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c0.Data);
  }
  ::FName::FName(&local_ef0,L"Particles.RibbonLinkOrder");
  local_4b0._0_4_ = local_ef0.ComparisonIndex.Value;
  local_4b0._4_4_ = local_ef0.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_4b0 + 8),&FNiagaraTypeDefinition::FloatDef);
  local_4a0.Data = (FScriptContainerElement *)0x0;
  local_498._0_4_ = 0;
  local_498._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_RibbonLinkOrder,(FNiagaraVariable *)local_4b0);
  if (local_4a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a0.Data);
  }
  ::FName::FName(&local_ee8,L"Particles.RibbonUVDistance");
  local_490._0_4_ = local_ee8.ComparisonIndex.Value;
  local_490._4_4_ = local_ee8.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_490 + 8),&FNiagaraTypeDefinition::FloatDef);
  local_480.Data = (FScriptContainerElement *)0x0;
  local_478._0_4_ = 0;
  local_478._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_RibbonUVDistance,(FNiagaraVariable *)local_490);
  if (local_480.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_480.Data);
  }
  ::FName::FName(&local_ee0,L"Particles.RibbonU0Override");
  local_470._0_4_ = local_ee0.ComparisonIndex.Value;
  local_470._4_4_ = local_ee0.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_470 + 8),&FNiagaraTypeDefinition::FloatDef);
  local_460.Data = (FScriptContainerElement *)0x0;
  local_458._0_4_ = 0;
  local_458._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_RibbonU0Override,(FNiagaraVariable *)local_470);
  if (local_460.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_460.Data);
  }
  ::FName::FName(&local_ed8,L"Particles.RibbonV0RangeOverride");
  local_450._0_4_ = local_ed8.ComparisonIndex.Value;
  local_450._4_4_ = local_ed8.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_450 + 8),&FNiagaraTypeDefinition::Vec2Def);
  local_440.Data = (FScriptContainerElement *)0x0;
  local_438._0_4_ = 0;
  local_438._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_RibbonV0RangeOverride,(FNiagaraVariable *)local_450);
  if (local_440.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_440.Data);
  }
  ::FName::FName(&local_ed0,L"Particles.RibbonU1Override");
  local_430._0_4_ = local_ed0.ComparisonIndex.Value;
  local_430._4_4_ = local_ed0.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_430 + 8),&FNiagaraTypeDefinition::FloatDef);
  local_420.Data = (FScriptContainerElement *)0x0;
  local_418._0_4_ = 0;
  local_418._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_RibbonU1Override,(FNiagaraVariable *)local_430);
  if (local_420.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_420.Data);
  }
  ::FName::FName(&local_ec8,L"Particles.RibbonV1RangeOverride");
  local_410._0_4_ = local_ec8.ComparisonIndex.Value;
  local_410._4_4_ = local_ec8.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_410 + 8),&FNiagaraTypeDefinition::Vec2Def);
  local_400.Data = (FScriptContainerElement *)0x0;
  local_3f8._0_4_ = 0;
  local_3f8._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_RibbonV1RangeOverride,(FNiagaraVariable *)local_410);
  if (local_400.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_400.Data);
  }
  ::FName::FName(&local_ec0,L"Particles.VisibilityTag");
  local_3f0._0_4_ = local_ec0.ComparisonIndex.Value;
  local_3f0._4_4_ = local_ec0.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_3f0 + 8),&FNiagaraTypeDefinition::IntDef);
  local_3e0.Data = (FScriptContainerElement *)0x0;
  local_3d8._0_4_ = 0;
  local_3d8._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_VisibilityTag,(FNiagaraVariable *)local_3f0);
  if (local_3e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e0.Data);
  }
  ::FName::FName(&local_eb8,L"Particles.MeshIndex");
  local_3d0._0_4_ = local_eb8.ComparisonIndex.Value;
  local_3d0._4_4_ = local_eb8.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_3d0 + 8),&FNiagaraTypeDefinition::IntDef);
  local_3c0.Data = (FScriptContainerElement *)0x0;
  local_3b8._0_4_ = 0;
  local_3b8._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_MeshIndex,(FNiagaraVariable *)local_3d0);
  if (local_3c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c0.Data);
  }
  ::FName::FName(&local_eb0,L"Particles.ComponentsEnabled");
  local_3b0._0_4_ = local_eb0.ComparisonIndex.Value;
  local_3b0._4_4_ = local_eb0.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_3b0 + 8),&FNiagaraTypeDefinition::BoolDef);
  local_3a0.Data = (FScriptContainerElement *)0x0;
  local_398._0_4_ = 0;
  local_398._4_4_ = 0;
  FNiagaraVariable::operator=(&Particles_ComponentsEnabled,(FNiagaraVariable *)local_3b0);
  if (local_3a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a0.Data);
  }
  ::FName::FName(&local_e38,L"Script.Usage");
  local_1208.DebugPtr = (UObject *)FNiagaraTypeDefinition::ScriptUsageEnum;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (FNiagaraTypeDefinition::ScriptUsageEnum != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FNiagaraTypeDefinition::ScriptUsageEnum);
  }
  local_1200 = 3;
  local_11fe = 0;
  local_11fc = 0xffffffffffffffff;
  local_11f4 = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_1208.ObjectPtr);
  local_390._padding_._0_4_ = local_e38.ComparisonIndex.Value;
  local_390._padding_._4_4_ = local_e38.Number;
  if ((UEnum *)local_1208.DebugPtr == (UEnum *)0x0) {
    local_390._padding_._0_4_ = -1;
  }
  else {
    pFVar10 = FNiagaraTypeRegistry::Get();
    local_390._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal
                   (pFVar10,(FNiagaraTypeDefinition *)&local_1208.ObjectPtr);
  }
  local_390.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_390.VarData.ArrayNum = 0;
  local_390.VarData.ArrayMax = 0;
  FNiagaraVariable::operator=(&ScriptUsage,&local_390);
  if (local_390.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_390.VarData.AllocatorInstance.Data);
  }
  ::FName::FName(&local_ea0,L"Script.Context");
  local_1220.DebugPtr = (UObject *)FNiagaraTypeDefinition::ScriptContextEnum;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (FNiagaraTypeDefinition::ScriptContextEnum != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FNiagaraTypeDefinition::ScriptContextEnum);
  }
  local_1218 = 3;
  local_1216 = 0;
  local_1214 = 0xffffffffffffffff;
  local_120c = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_1220.ObjectPtr);
  local_370._padding_._0_4_ = local_ea0.ComparisonIndex.Value;
  local_370._padding_._4_4_ = local_ea0.Number;
  if ((UEnum *)local_1220.DebugPtr == (UEnum *)0x0) {
    local_370._padding_._0_4_ = -1;
  }
  else {
    pFVar10 = FNiagaraTypeRegistry::Get();
    local_370._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal
                   (pFVar10,(FNiagaraTypeDefinition *)&local_1220.ObjectPtr);
  }
  local_370.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_370.VarData.ArrayNum = 0;
  local_370.VarData.ArrayMax = 0;
  FNiagaraVariable::operator=(&ScriptContext,&local_370);
  if (local_370.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_370.VarData.AllocatorInstance.Data);
  }
  ::FName::FName(&local_e98,L"DataInstance.Alive");
  local_e30._0_4_ = local_e98.ComparisonIndex.Value;
  local_e30._4_4_ = local_e98.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_e30 + 8),&FNiagaraTypeDefinition::BoolDef);
  local_e20.Data = (FScriptContainerElement *)0x0;
  local_e18._0_4_ = 0;
  local_e18._4_4_ = 0;
  FNiagaraVariable::operator=(&DataInstance_Alive,(FNiagaraVariable *)local_e30);
  if (local_e20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e20.Data);
  }
  ::FName::FName(&local_e90,L"Function.DebugState");
  local_11c0.DebugPtr = (UObject *)FNiagaraTypeDefinition::FunctionDebugStateEnum;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (FNiagaraTypeDefinition::FunctionDebugStateEnum != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FNiagaraTypeDefinition::FunctionDebugStateEnum);
  }
  local_11b8 = 3;
  local_11b6 = 0;
  local_11b4 = 0xffffffffffffffff;
  local_11ac = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_11c0.ObjectPtr);
  local_e10._padding_._0_4_ = local_e90.ComparisonIndex.Value;
  local_e10._padding_._4_4_ = local_e90.Number;
  if ((UEnum *)local_11c0.DebugPtr != (UEnum *)0x0) {
    pFVar10 = FNiagaraTypeRegistry::Get();
    iVar7 = FNiagaraTypeRegistry::RegisterTypeInternal
                      (pFVar10,(FNiagaraTypeDefinition *)&local_11c0.ObjectPtr);
  }
  local_e10.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e10.VarData.ArrayNum = 0;
  local_e10.VarData.ArrayMax = 0;
  local_e10._padding_._0_4_ = iVar7;
  FNiagaraVariable::operator=(&FunctionDebugState,&local_e10);
  if (local_e10.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e10.VarData.AllocatorInstance.Data);
  }
  ::FName::FName(&local_e88,L"Begin Defaults");
  local_df0._0_4_ = local_e88.ComparisonIndex.Value;
  local_df0._4_4_ = local_e88.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_df0 + 8),
             &FNiagaraTypeDefinition::ParameterMapDef);
  local_de0.Data = (FScriptContainerElement *)0x0;
  local_dd8._0_4_ = 0;
  local_dd8._4_4_ = 0;
  FNiagaraVariable::operator=(&Translator_BeginDefaults,(FNiagaraVariable *)local_df0);
  if (local_de0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_de0.Data);
  }
  ::FName::FName(&local_e80,L"Translator.CallID");
  local_dd0._0_4_ = local_e80.ComparisonIndex.Value;
  local_dd0._4_4_ = local_e80.Number;
  FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
            ((FNiagaraTypeDefinitionHandle *)(local_dd0 + 8),&FNiagaraTypeDefinition::IntDef);
  local_dc0.Data = (FScriptContainerElement *)0x0;
  local_db8._0_4_ = 0;
  local_db8._4_4_ = 0;
  FNiagaraVariable::operator=(&Translator_CallID,(FNiagaraVariable *)local_dd0);
  if (local_dc0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_dc0.Data);
  }
  FNiagaraConstants::Init();
  UNiagaraDecalRendererProperties::InitCDOPropertiesAfterModuleStartup();
  UNiagaraLightRendererProperties::InitCDOPropertiesAfterModuleStartup();
  UNiagaraSpriteRendererProperties::InitCDOPropertiesAfterModuleStartup();
  UNiagaraRibbonRendererProperties::InitCDOPropertiesAfterModuleStartup();
  pUVar11 = UNiagaraMeshRendererProperties::StaticClass();
  if ((pUVar11->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar11);
  }
  pUVar13 = (UNiagaraMeshRendererProperties *)(pUVar11->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar13 == (UNiagaraMeshRendererProperties *)0x0) {
    pFVar18 = GetTypeName<UNiagaraMeshRendererProperties>(&local_48);
    if ((pFVar18->Data).ArrayNum == 0) {
      pwVar21 = L"";
    }
    else {
      pwVar21 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar21);
  }
  pUVar11 = UNiagaraMeshRendererProperties::StaticClass();
  iVar7 = (int)pUVar11->_padding_;
  if ((*(int *)(pUVar13->_padding_ + 0x38) < iVar7) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar13->_padding_ + 0x30) + (longlong)iVar7 * 8)
      != &pUVar11->_padding_)) {
    pFVar18 = GetTypeName<UNiagaraMeshRendererProperties>(&local_68);
    pwVar21 = L"";
    if ((pFVar18->Data).ArrayNum == 0) {
      pwVar22 = L"";
    }
    else {
      pwVar22 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
    }
    pFVar18 = GetFullNameForCastLogError<UObject>(&local_58,(UObject *)pUVar13);
    if ((pFVar18->Data).ArrayNum != 0) {
      pwVar21 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar21,pwVar22);
  }
  UNiagaraMeshRendererProperties::InitBindings(pUVar13);
  iVar7 = UNiagaraMeshRendererProperties::MeshRendererPropertiesToDeferredInit.ArrayNum;
  uVar20 = (ulonglong)UNiagaraMeshRendererProperties::MeshRendererPropertiesToDeferredInit.ArrayNum;
  pFVar2 = (FWeakObjectPtr *)
           (UNiagaraMeshRendererProperties::MeshRendererPropertiesToDeferredInit.AllocatorInstance.
            Data + uVar20 * 8);
  this_02 = UNiagaraMeshRendererProperties::MeshRendererPropertiesToDeferredInit.AllocatorInstance;
  while( true ) {
    if ((int)uVar20 != iVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UNiagaraMeshRendererProperties,FWeakObjectPtr>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FWeakObjectPtr *)this_02.Data == pFVar2) break;
    pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.Data);
    if (pUVar12 != (UObject *)0x0) {
      pUVar13 = (UNiagaraMeshRendererProperties *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.Data);
      UNiagaraMeshRendererProperties::InitBindings(pUVar13);
    }
    uVar20 = (ulonglong)
             (uint)UNiagaraMeshRendererProperties::MeshRendererPropertiesToDeferredInit.ArrayNum;
    this_02.Data = this_02.Data + 8;
  }
  UNiagaraComponentRendererProperties::InitCDOPropertiesAfterModuleStartup();
  UNiagaraVolumeRendererProperties::InitCDOPropertiesAfterModuleStartup();
  NiagaraStatelessCommon::Initialize();
  pFVar14 = ::FName::FName(&local_2d0,"NiagaraShader");
  FVar4 = *pFVar14;
  pFVar15 = FModuleManager::Get();
  this_00 = (INiagaraShaderModule *)FModuleManager::LoadModuleChecked(pFVar15,FVar4);
  local_1190.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_1188.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1188.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1190,(FWriteAccessScope *)&local_338);
  local_320 = &local_1188;
  puVar16 = UE::Core::Private::DelegateAllocate(0x20,&local_1188);
  if (puVar16 != (undefined8 *)0x0) {
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6APEAVUNiagaraDataInterfaceBase__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar17;
    *puVar16 = &TBaseFunctorDelegateInstance<UNiagaraDataInterfaceBase_*___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`INiagaraModule::StartupModule'::`2'::<lambda_1>_>
                ::_vftable_;
  }
  if (local_338.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_338.Accessor,&local_338);
  }
  INiagaraShaderModule::SetOnRequestDefaultDataInterfaceHandler
            (this_00,(TDelegate<UNiagaraDataInterfaceBase_*___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
                      *)local_2c8);
  local_1238 = (undefined1  [8])0x0;
  local_1230.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1230.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1238,
             (FWriteAccessScope *)&local_318);
  local_300 = &local_1230;
  puVar16 = UE::Core::Private::DelegateAllocate(0x20,&local_1230);
  if (puVar16 != (undefined8 *)0x0) {
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6APEAVFFXSystemInterface__W4Type_ERHIFeatureLevel__W4EShaderPlatform__PEAVFGPUSortManager___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar17;
    *puVar16 = &TBaseFunctorDelegateInstance<FFXSystemInterface_*___cdecl(enum_ERHIFeatureLevel::Type,enum_EShaderPlatform,FGPUSortManager_*),FDefaultDelegateUserPolicy,`INiagaraModule::StartupModule'::`2'::<lambda_2>_>
                ::_vftable_;
  }
  if (local_318.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_318.Accessor,&local_318);
  }
  FFXSystemInterface::RegisterCustomFXSystem
            (&FNiagaraGpuComputeDispatch::Name,
             (TDelegate<FFXSystemInterface_*___cdecl(ERHIFeatureLevel::Type,EShaderPlatform,FGPUSortManager_*),FDefaultDelegateUserPolicy>
              *)local_1238);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1238,
             (FWriteAccessScope *)&local_350);
  if ((local_1230.DelegateSize != 0) &&
     (local_1230.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_1230.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1230,0,0,0x10);
    local_1230.DelegateSize = 0;
  }
  if (local_350.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_350.Accessor,&local_350);
  }
  if (local_1230.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_1230.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1238);
  pFVar15 = FModuleManager::Get();
  pFVar14 = ::FName::FName((FName *)(local_2c8 + 8),L"SignalProcessing");
  FModuleManager::LoadModule(pFVar15,*pFVar14,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &UNiagaraEffectType::GeneratePerfBaselinesDelegate,(FWriteAccessScope *)&local_2f8);
  local_2e0 = 0x155277c98;
  puVar16 = UE::Core::Private::DelegateAllocate
                      (0x28,(FDelegateAllocation *)
                            &UNiagaraEffectType::GeneratePerfBaselinesDelegate.field_0x8);
  if (puVar16 != (undefined8 *)0x0) {
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6AXAEAV__TArray_PEAVUNiagaraEffectType__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar17;
    *puVar16 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VINiagaraModule____A6AXAEAV__TArray_PEAVUNiagaraEffectType__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar16[3] = this;
    puVar16[4] = GeneratePerfBaselines;
    if ((this == (INiagaraModule *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (local_2f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2f8.Accessor,&local_2f8);
  }
  RegisterInternalAssetTagDefinitions(this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<INiagaraModule>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPostEngineInit,(INiagaraModule *)(local_298 + 8),(pmf_a5e90810)this)
  ;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<INiagaraModule>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPreExit,(INiagaraModule *)local_298,(pmf_a5e90810)this);
  TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>::
  AddRaw<INiagaraModule>
            ((TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy> *)
             &FWorldDelegates::OnWorldBeginTearDown,(INiagaraModule *)(local_2a8 + 8),
             (pmf_d071c317)this);
  TMulticastDelegateRegistration<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
  ::AddRaw<INiagaraModule>
            (&FWorldDelegates::OnWorldTickStart,(INiagaraModule *)local_2a8,(pmf_1943c2b3)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<INiagaraModule>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnBeginFrame,(INiagaraModule *)(local_2b8 + 8),(pmf_a5e90810)this);
  this_01 = FCoreUObjectDelegates::GetPostGarbageCollect();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<INiagaraModule>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             this_01,(INiagaraModule *)local_2b8,(pmf_a5e90810)this);
  FMemScope::~FMemScope(&local_e78);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// ShutdownModule @ 1492c5b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall INiagaraModule::ShutdownModule(INiagaraModule *this)

{
  FName FVar1;
  FNiagaraDebuggerClient *pFVar2;
  FName *pFVar3;
  FModuleManager *this_00;
  INiagaraShaderModule *this_01;
  FName local_res8;
  
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &FWorldDelegates::OnWorldBeginTearDown,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FWorldDelegates::OnWorldTickStart,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnBeginFrame,
             this);
  FNiagaraWorldManager::OnShutdown();
  pFVar3 = ::FName::FName(&local_res8,"NiagaraShader");
  FVar1 = *pFVar3;
  this_00 = FModuleManager::Get();
  this_01 = (INiagaraShaderModule *)FModuleManager::LoadModuleChecked(this_00,FVar1);
  INiagaraShaderModule::ResetOnRequestDefaultDataInterfaceHandler(this_01);
  FFXSystemInterface::UnregisterCustomFXSystem(&FNiagaraGpuComputeDispatch::Name);
  FNiagaraTypeRegistry::TearDown();
  FNDIDataChannelLayoutManager::TearDown();
  pFVar2 = (this->DebuggerClient).Ptr;
  if (pFVar2 != (FNiagaraDebuggerClient *)0x0) {
    (this->DebuggerClient).Ptr = (FNiagaraDebuggerClient *)0x0;
    (*(code *)pFVar2[-1].SimCacheCaptures.AllocatorInstance.Data)();
  }
  FNiagaraDataChannelDebugUtilities::TearDown();
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &UNiagaraEffectType::GeneratePerfBaselinesDelegate);
  return;
}

// GeneratePerfBaselines @ 1492ec480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
INiagaraModule::GeneratePerfBaselines
          (INiagaraModule *this,TArray<UNiagaraEffectType_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FNiagaraPerfBaselineHandler *pFVar4;
  UObject *pUVar5;
  FScriptContainerElement *pFVar6;
  UObject *pUStackX_10;
  FWeakObjectPtr aFStackX_18 [2];
  
  if ((param_1->ArrayNum != 0) &&
     (pFVar4 = (this->BaselineHandler).Ptr, pFVar4 != (FNiagaraPerfBaselineHandler *)0x0)) {
    iVar3 = param_1->ArrayNum;
    if (0 < iVar3) {
      piVar1 = &(pFVar4->BaselinesToGenerate).ArrayMax;
      if (*piVar1 < iVar3) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar3,&(pFVar4->BaselinesToGenerate).AllocatorInstance,
                   (pFVar4->BaselinesToGenerate).ArrayNum,piVar1);
      }
      pFVar6 = (param_1->AllocatorInstance).Data;
      iVar3 = param_1->ArrayNum;
      pFVar2 = pFVar6 + (longlong)iVar3 * 8;
      while( true ) {
        if (param_1->ArrayNum != iVar3) {
          `TCheckedPointerIterator<UNiagaraEffectType_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&pUStackX_10);
        }
        if (pFVar6 == pFVar2) break;
        pUVar5 = *(UObject **)pFVar6;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        aFStackX_18[0].ObjectIndex = 0;
        aFStackX_18[0].ObjectSerialNumber = 0;
        pUStackX_10 = pUVar5;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        FWeakObjectPtr::operator=(aFStackX_18,(FObjectPtr)&pUStackX_10);
        TArray<TWeakObjectPtr<UNiagaraEffectType,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<TWeakObjectPtr<UNiagaraEffectType,FWeakObjectPtr>_>
                  (&pFVar4->BaselinesToGenerate,
                   (TWeakObjectPtr<UNiagaraEffectType,FWeakObjectPtr> *)aFStackX_18);
        pFVar6 = pFVar6 + 8;
      }
      if (pFVar4->BaselineGenerationState == Complete) {
        pFVar4->BaselineGenerationState = Begin;
      }
    }
    return;
  }
  return;
}

// Get @ 1492ed450

/* WARNING: Enum "Type": Some values do not have unique names */

INiagaraModule * __cdecl INiagaraModule::Get(void)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this;
  INiagaraModule *pIVar3;
  FName local_res8 [4];
  
  pFVar2 = ::FName::FName(local_res8,"Niagara");
  FVar1 = *pFVar2;
  this = FModuleManager::Get();
  pIVar3 = (INiagaraModule *)FModuleManager::LoadModuleChecked(this,FVar1);
  return pIVar3;
}

// GetInternalAssetTagDefinitions @ 1492f0060

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FNiagaraAssetTagDefinition_const_*,TSizedDefaultAllocator<32>_> * __thiscall
INiagaraModule::GetInternalAssetTagDefinitions(INiagaraModule *this)

{
  return &this->InternalAssetTagDefinitions;
}

// OnBeginFrame @ 1492f93f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall INiagaraModule::OnBeginFrame(INiagaraModule *this)

{
  FNiagaraComponentSettings::UpdateSettings();
  NiagaraStatelessCommon::UpdateSettings();
  FNiagaraPlatformSet::RefreshScalability();
  return;
}

// OnDataChannelsEnabledChanged @ 1492f9410

void __cdecl INiagaraModule::OnDataChannelsEnabledChanged(IConsoleVariable *param_1)

{
  ForAnyElementType FVar1;
  int iVar2;
  <lambda_1> local_res10;
  TObjectPtr<UObject>_u_0 local_d8;
  undefined2 local_d0;
  undefined1 local_ce;
  undefined8 local_cc;
  uint local_c4;
  FString local_c0;
  FNiagaraSystemUpdateContext local_b0;
  
  if (bDataChannelsEnabled) {
    local_d8.DebugPtr =
         (UObject *)Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_d8.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable(local_d8.DebugPtr);
    }
    local_ce = 0;
    local_d0 = 1;
    local_cc = 0xffffffffffffffff;
    if (((UClass *)local_d8.DebugPtr == (UClass *)0x0) ||
       (*(longlong *)&(local_d8.DebugPtr)->field_0x10 == 0)) {
      ::FString::FString(&local_c0,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)local_d8.DebugPtr,&local_c0,(UObject *)0x0,None);
    }
    iVar2 = local_c0.Data.ArrayNum + -1;
    FVar1.Data = local_c0.Data.AllocatorInstance.Data;
    if (local_c0.Data.ArrayNum == 0) {
      iVar2 = 0;
      FVar1.Data = (FScriptContainerElement *)L"";
    }
    local_c4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar2,(wchar_t *)FVar1.Data);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    FNiagaraTypeRegistry::Register
              ((FNiagaraTypeDefinition *)&local_d8.ObjectPtr,AllowParameter|AllowAnyVariable);
    local_d8.DebugPtr =
         (UObject *)Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_d8.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable(local_d8.DebugPtr);
    }
    local_d0 = 1;
    local_ce = 0;
    local_cc = 0xffffffffffffffff;
    if (((UClass *)local_d8.DebugPtr == (UClass *)0x0) ||
       (*(longlong *)&(local_d8.DebugPtr)->field_0x10 == 0)) {
      ::FString::FString(&local_c0,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)local_d8.DebugPtr,&local_c0,(UObject *)0x0,None);
    }
    iVar2 = local_c0.Data.ArrayNum + -1;
    FVar1.Data = local_c0.Data.AllocatorInstance.Data;
    if (local_c0.Data.ArrayNum == 0) {
      iVar2 = 0;
      FVar1.Data = (FScriptContainerElement *)L"";
    }
    local_c4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar2,(wchar_t *)FVar1.Data);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    FNiagaraTypeRegistry::Register
              ((FNiagaraTypeDefinition *)&local_d8.ObjectPtr,AllowParameter|AllowAnyVariable);
    FNiagaraWorldManager::
    ForAllWorldManagers<_INiagaraModule::OnDataChannelsEnabledChanged_::__l8::<lambda_1>_>
              (local_res10);
  }
  local_b0.ComponentsToReset.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ComponentsToReset.ArrayNum = 0;
  local_b0.ComponentsToReset.ArrayMax = 0;
  local_b0.ComponentsToReInit.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ComponentsToReInit.ArrayNum = 0;
  local_b0.ComponentsToReInit.ArrayMax = 0;
  local_b0.PreWork._0_8_ = 0;
  local_b0.PreWork._8_8_ = 0;
  local_b0.ComponentsToNotifySimDestroy.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.PostWork._0_8_ = 0;
  local_b0.PostWork._8_8_ = 0;
  local_b0.ComponentsToNotifySimDestroy.ArrayNum = 0;
  local_b0.ComponentsToNotifySimDestroy.ArrayMax = 0;
  local_b0.ComponentsToDestroyInstance.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ComponentsToDestroyInstance.ArrayNum = 0;
  local_b0.ComponentsToDestroyInstance.ArrayMax = 0;
  local_b0.SystemSimsToDestroy.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.SystemSimsToDestroy.ArrayNum = 0;
  local_b0.SystemSimsToDestroy.ArrayMax = 0;
  local_b0.SystemSimsToRecache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.SystemSimsToRecache.ArrayNum = 0;
  local_b0.SystemSimsToRecache.ArrayMax = 0;
  local_b0.bDestroyOnAdd = false;
  local_b0.bOnlyActive = false;
  local_b0.bDestroySystemSim = true;
  local_b0.PreWork._16_4_ = 0;
  local_b0.PostWork._16_4_ = 0;
  FNiagaraSystemUpdateContext::AddAll(&local_b0,true);
  FNiagaraSystemUpdateContext::~FNiagaraSystemUpdateContext(&local_b0);
  return;
}

// OnPostEngineInit @ 1492f9640

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall INiagaraModule::OnPostEngineInit(INiagaraModule *this)

{
  TUniquePtr<FNiagaraPerfBaselineHandler,TDefaultDelete<FNiagaraPerfBaselineHandler>_> *pTVar1;
  FNiagaraPerfBaselineHandler *this_00;
  code *pcVar2;
  bool bVar3;
  FNiagaraPerfBaselineHandler *pFVar4;
  TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
  *this_01;
  FDelegateHandle FVar5;
  <lambda_1> local_res10 [8];
  undefined8 local_28 [2];
  
  pTVar1 = &this->BaselineHandler;
  if ((this->BaselineHandler).Ptr == (FNiagaraPerfBaselineHandler *)0x0) {
    pFVar4 = ::operator_new(0x48);
    if (pFVar4 == (FNiagaraPerfBaselineHandler *)0x0) {
      pFVar4 = (FNiagaraPerfBaselineHandler *)0x0;
    }
    else {
      pFVar4 = FNiagaraPerfBaselineHandler::FNiagaraPerfBaselineHandler(pFVar4);
    }
    if (pTVar1 == (TUniquePtr<FNiagaraPerfBaselineHandler,TDefaultDelete<FNiagaraPerfBaselineHandler>_>
                   *)local_28) {
      if (pFVar4 == (FNiagaraPerfBaselineHandler *)0x0) goto LAB_1492f96c2;
      FNiagaraPerfBaselineHandler::~FNiagaraPerfBaselineHandler(pFVar4);
    }
    else {
      this_00 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar4;
      if (this_00 == (FNiagaraPerfBaselineHandler *)0x0) goto LAB_1492f96c2;
      FNiagaraPerfBaselineHandler::~FNiagaraPerfBaselineHandler(this_00);
      pFVar4 = this_00;
    }
    ::operator_delete(pFVar4,0x48);
  }
LAB_1492f96c2:
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_01 = (TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *)(**(code **)((longlong)*IConsoleManager::Singleton + 0x140))();
  FVar5 = TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
          ::AddLambda<_INiagaraModule::OnPostEngineInit_::__l2::<lambda_1>_>(this_01,local_res10);
                    /* WARNING: Load size is inaccurate */
  (this->OnCVarUnregisteredHandle).ID = *FVar5.ID;
  FNiagaraComponentSettings::UpdateSettings();
  NiagaraStatelessCommon::UpdateSettings();
  return;
}

// OnPostGarbageCollect @ 1492f9750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall INiagaraModule::OnPostGarbageCollect(INiagaraModule *this)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  FUObjectItem *this_00;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  longlong lStack_58;
  TSet<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *plStack_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong lStack_28;
  TSet<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>,FDefaultSetAllocator>
  *pTStack_18;
  char cStack_10;
  char cStack_f;
  
  if (FNiagaraTypeHelper::RemapTableDirty != (atomic<bool>)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)&FNiagaraTypeHelper::RemapTableLock);
    TSet<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)auStack_78,
               (TSet<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>,FDefaultSetAllocator>
                *)&FNiagaraTypeHelper::RemapTable);
    pTStack_18 = (TSet<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>,FDefaultSetAllocator>
                  *)&FNiagaraTypeHelper::RemapTable;
    cStack_10 = '\0';
    cStack_f = '\0';
    stack0xffffffffffffffc8 = auStack_78._16_16_;
    plStack_48 = (longlong *)auStack_78._0_8_;
    auStack_40._0_8_ = auStack_78._8_8_;
    lStack_28 = lStack_58;
    pTStack_20 = pTStack_50;
    uVar6 = auStack_78._24_8_ >> 0x20;
    uVar7 = auStack_78._28_4_;
    if ((int)uVar7 < *(int *)(auStack_78._16_8_ + 0x18)) {
      do {
        plVar2 = plStack_48;
        lVar1 = (longlong)(int)uVar6 * 0x18;
        pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plStack_48 + lVar1));
        if ((pUVar4 == (UObject *)0x0) ||
           (pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar2 + 8 + lVar1)),
           pUVar5 == (UObject *)0x0)) {
          pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar2 + 8 + lVar1));
          if ((pUVar5 != (UObject *)0x0) && (pUVar4 != pUVar5)) {
            this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar5->field_0xc);
            FUObjectItem::ClearRootFlags(this_00,RootSet);
          }
          TSet<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_20,uVar7);
          cStack_10 = '\x01';
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar6 = (ulonglong)uStack_2c;
        uVar7 = uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if ((cStack_10 != '\0') && (cStack_f != '\0')) {
        uVar7 = *(int *)&(pTStack_18->Elements).field_0x8 -
                *(int *)&(pTStack_18->Elements).field_0x34;
        if (uVar7 < 4) {
          iVar3 = 1;
        }
        else {
          uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
          lVar1 = 0x3f;
          if (uVar6 != 0) {
            for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          iVar3 = 1 << ((byte)lVar1 & 0x1f);
        }
        if (((0 < (int)uVar7) && (pTStack_18->HashSize < iVar3)) || (iVar3 < pTStack_18->HashSize))
        {
          pTStack_18->HashSize = iVar3;
          TSet<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>,FDefaultSetAllocator>
          ::Rehash(pTStack_18);
        }
      }
    }
    LOCK();
    FNiagaraTypeHelper::RemapTableDirty = (atomic<bool>)0x0;
    UNLOCK();
    ReleaseSRWLockExclusive((PSRWLOCK)&FNiagaraTypeHelper::RemapTableLock);
  }
  return;
}

// OnPreExit @ 1492f9760

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall INiagaraModule::OnPreExit(INiagaraModule *this)

{
  FNiagaraPerfBaselineHandler *this_00;
  FNiagaraDebuggerClient *pFVar1;
  FDelegateHandle FVar2;
  code *pcVar3;
  bool bVar4;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_01;
  
  this_00 = (this->BaselineHandler).Ptr;
  if (this_00 != (FNiagaraPerfBaselineHandler *)0x0) {
    (this->BaselineHandler).Ptr = (FNiagaraPerfBaselineHandler *)0x0;
    FNiagaraPerfBaselineHandler::~FNiagaraPerfBaselineHandler(this_00);
    ::operator_delete(this_00,0x48);
  }
  pFVar1 = (this->DebuggerClient).Ptr;
  if (pFVar1 != (FNiagaraDebuggerClient *)0x0) {
    (this->DebuggerClient).Ptr = (FNiagaraDebuggerClient *)0x0;
    (*(code *)pFVar1[-1].SimCacheCaptures.AllocatorInstance.Data)();
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  this_01 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0x140))();
  FVar2.ID = (this->OnCVarUnregisteredHandle).ID;
  if (FVar2.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance(this_01,FVar2);
  }
  return;
}

// OnUseGlobalFXBudgetChanged @ 1492f9820

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl INiagaraModule::OnUseGlobalFXBudgetChanged(IConsoleVariable *param_1)

{
  if ((((bUseGlobalFXBudget) && (!FFXBudget::bEnabled)) && (!PRIVATE_GIsRunningCommandlet)) &&
     (2 < (byte)LogNiagara._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    return;
  }
  return;
}

// OnWorldBeginTearDown @ 1492f9860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall INiagaraModule::OnWorldBeginTearDown(INiagaraModule *this,UWorld *param_1)

{
  TSharedPtr<FParticlePerfStatsListener_NiagaraPerformanceReporter,1> *pTVar1;
  FNiagaraPerfBaselineHandler *pFVar2;
  code *pcVar3;
  bool bVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  UClass *pUVar7;
  longlong lVar8;
  undefined8 uStack_48;
  FSharedReferencer<1> FStack_40;
  TSharedPtr<FParticlePerfStatsListener,1> TStack_38;
  TObjectIterator<UNiagaraEffectType> TStack_28;
  
  pFVar2 = (this->BaselineHandler).Ptr;
  if (pFVar2 == (FNiagaraPerfBaselineHandler *)0x0) {
    return;
  }
  pTVar1 = &pFVar2->PerfBaselineListener;
  if (pTVar1->Object != (FParticlePerfStatsListener_NiagaraPerformanceReporter *)0x0) {
    FParticlePerfStatsListener_NiagaraPerformanceReporter::ReportToLog(pTVar1->Object);
    TStack_38.Object = (FParticlePerfStatsListener *)pTVar1->Object;
    TStack_38.SharedReferenceCount.ReferenceController =
         (pFVar2->PerfBaselineListener).SharedReferenceCount.ReferenceController;
    if (TStack_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (TStack_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(TStack_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FParticlePerfStatsManager::RemoveListener(&TStack_38);
    uStack_48 = 0;
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FParticlePerfStatsListener_NiagaraPerformanceReporter,1> *)&uStack_48)
    {
      pTVar1->Object = (FParticlePerfStatsListener_NiagaraPerformanceReporter *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar2->PerfBaselineListener).SharedReferenceCount,&FStack_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_40.ReferenceController);
  }
  if (GbNiagaraRegenerateBaselinesOnWorldChange != 0) {
    TStack_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_28.ObjectArray.ArrayNum = 0;
    TStack_28.ObjectArray.ArrayMax = 0;
    TStack_28.Index = 0xffffffff;
    EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar7 = Z_Construct_UClass_UNiagaraEffectType_NoRegister();
    GetObjectsOfClass(pUVar7,&TStack_28.ObjectArray,true,RF_ClassDefaultObject,
                      EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    while( true ) {
      TObjectIterator<UNiagaraEffectType>::Advance(&TStack_28);
      lVar8 = (longlong)TStack_28.Index;
      if (TStack_28.Index < 0) break;
      if (TStack_28.ObjectArray.ArrayNum <= TStack_28.Index) break;
      uVar6 = 0;
      if (TStack_28.Index < TStack_28.ObjectArray.ArrayNum) {
        uVar6 = (uint)~TStack_28.Index >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      UNiagaraEffectType::InvalidatePerfBaseline
                (*(UNiagaraEffectType **)(TStack_28.ObjectArray.AllocatorInstance.Data + lVar8 * 8))
      ;
    }
    if (TStack_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_28.ObjectArray.AllocatorInstance.Data);
    }
  }
  return;
}

// OnWorldTickStart @ 1492f9880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
INiagaraModule::OnWorldTickStart
          (INiagaraModule *this,UWorld *param_1,ELevelTick param_2,float param_3)

{
  FNiagaraPerfBaselineHandler *this_00;
  <lambda_1> local_res8;
  
  if (bDataChannelRefreshRequested != (atomic<bool>)0x0) {
    LOCK();
    bDataChannelRefreshRequested = (atomic<bool>)0x0;
    UNLOCK();
    FNiagaraWorldManager::
    ForAllWorldManagers<_INiagaraModule::RefreshDataChannels_::__l5::<lambda_1>_>(local_res8);
  }
  this_00 = (this->BaselineHandler).Ptr;
  if (this_00 != (FNiagaraPerfBaselineHandler *)0x0) {
    FNiagaraPerfBaselineHandler::Tick(this_00,param_1,param_3);
  }
  return;
}

// ProcessShaderCompilationQueue @ 149300c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall INiagaraModule::ProcessShaderCompilationQueue(INiagaraModule *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  longlong *plVar4;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnProcessQueue,
             &local_38);
  if ((*(int *)&(this->OnProcessQueue).field_0x10 != 0) &&
     (plVar4 = *(longlong **)&(this->OnProcessQueue).field_0x8, plVar4 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar4 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      goto LAB_149300c7c;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("OnProcessQueue.IsBound()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraModule.cpp"
                     ,0x688,L"Can not process shader queue.  Delegate was never set.");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_149300c7c:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnProcessQueue,
             &local_20);
  if (*(int *)&(this->OnProcessQueue).field_0x10 == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = *(longlong **)&(this->OnProcessQueue).field_0x8;
  }
  (**(code **)(*plVar4 + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
  return;
}

// RefreshDataChannels @ 149302050

void __cdecl INiagaraModule::RefreshDataChannels(void)

{
  undefined1 local_res8;
  
  if (bDataChannelRefreshRequested != (atomic<bool>)0x0) {
    LOCK();
    bDataChannelRefreshRequested = (atomic<bool>)0x0;
    UNLOCK();
    FNiagaraWorldManager::
    ForAllWorldManagers<_INiagaraModule::RefreshDataChannels_::__l5::<lambda_1>_>(local_res8);
    return;
  }
  return;
}

// RegisterInternalAssetTagDefinitions @ 1493025b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall INiagaraModule::RegisterInternalAssetTagDefinitions(INiagaraModule *this)

{
  TArray<FNiagaraAssetTagDefinition_const_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FNiagaraAssetTagDefinition *local_38;
  FNiagaraAssetTagDefinition *local_30;
  FNiagaraAssetTagDefinition *local_28;
  FNiagaraAssetTagDefinition *local_20;
  FNiagaraAssetTagDefinition *local_18 [2];
  
  pTVar1 = &this->InternalAssetTagDefinitions;
  local_38 = &TemplateTagDefinition;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 <
      pFVar2 + (longlong)(this->InternalAssetTagDefinitions).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->InternalAssetTagDefinitions).ArrayNum;
  if (iVar5 == (this->InternalAssetTagDefinitions).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,
                       &(this->InternalAssetTagDefinitions).ArrayMax);
  }
  (this->InternalAssetTagDefinitions).ArrayNum = iVar5 + 1;
  *(FNiagaraAssetTagDefinition **)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8) =
       local_38;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  local_30 = &LightweightTagDefinition;
  if ((pFVar2 <= (FScriptContainerElement *)&local_30) &&
     ((FScriptContainerElement *)&local_30 <
      pFVar2 + (longlong)(this->InternalAssetTagDefinitions).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->InternalAssetTagDefinitions).ArrayNum;
  if (iVar5 == (this->InternalAssetTagDefinitions).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,
                       &(this->InternalAssetTagDefinitions).ArrayMax);
  }
  (this->InternalAssetTagDefinitions).ArrayNum = iVar5 + 1;
  *(FNiagaraAssetTagDefinition **)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8) =
       local_30;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  local_28 = &LearningContentTagDefinition;
  if ((pFVar2 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar2 + (longlong)(this->InternalAssetTagDefinitions).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->InternalAssetTagDefinitions).ArrayNum;
  if (iVar5 == (this->InternalAssetTagDefinitions).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,
                       &(this->InternalAssetTagDefinitions).ArrayMax);
  }
  (this->InternalAssetTagDefinitions).ArrayNum = iVar5 + 1;
  *(FNiagaraAssetTagDefinition **)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8) =
       local_28;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  local_20 = &HiddenAssetTagDefinition;
  if ((pFVar2 <= (FScriptContainerElement *)&local_20) &&
     ((FScriptContainerElement *)&local_20 <
      pFVar2 + (longlong)(this->InternalAssetTagDefinitions).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->InternalAssetTagDefinitions).ArrayNum;
  if (iVar5 == (this->InternalAssetTagDefinitions).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,
                       &(this->InternalAssetTagDefinitions).ArrayMax);
  }
  (this->InternalAssetTagDefinitions).ArrayNum = iVar5 + 1;
  *(FNiagaraAssetTagDefinition **)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8) =
       local_20;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  local_18[0] = &DeprecatedTagDefinition;
  if (pFVar2 <= (FScriptContainerElement *)local_18) {
    if ((FScriptContainerElement *)local_18 <
        pFVar2 + (longlong)(this->InternalAssetTagDefinitions).ArrayMax * 8) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  iVar5 = (this->InternalAssetTagDefinitions).ArrayNum;
  if (iVar5 == (this->InternalAssetTagDefinitions).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,
                       &(this->InternalAssetTagDefinitions).ArrayMax);
  }
  (this->InternalAssetTagDefinitions).ArrayNum = iVar5 + 1;
  *(FNiagaraAssetTagDefinition **)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8) =
       local_18[0];
  return;
}

// ResetOnProcessShaderCompilationQueue @ 149304150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
INiagaraModule::ResetOnProcessShaderCompilationQueue(INiagaraModule *this,FDelegateHandle param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 *puVar4;
  ulong64 uVar5;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnProcessQueue,
             &local_28);
  if ((*(int *)&(this->OnProcessQueue).field_0x10 == 0) ||
     (plVar1 = *(longlong **)&(this->OnProcessQueue).field_0x8, plVar1 == (longlong *)0x0)) {
    uVar5 = 0;
  }
  else {
    puVar4 = (ulong64 *)(**(code **)(*plVar1 + 0x40))(plVar1,local_res8);
    uVar5 = *puVar4;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (uVar5 != param_1.ID) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("OnProcessQueue.GetHandle() == DelegateHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraModule.cpp"
                       ,0x682,
                       L"Can only reset the process compilation queue delegate with the handle it was created with."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnProcessQueue);
  return;
}

// SetOnProcessShaderCompilationQueue @ 149306a90

/* WARNING: Enum "Type": Some values do not have unique names */

FDelegateHandle __thiscall
INiagaraModule::SetOnProcessShaderCompilationQueue
          (INiagaraModule *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  undefined1 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  FDelegateHandle FVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_48;
  FReadAccessScope local_30;
  
  this_00 = &this->OnProcessQueue;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_48);
  puVar1 = &(this->OnProcessQueue).field_0x8;
  if ((*(int *)&(this->OnProcessQueue).field_0x10 != 0) &&
     (plVar2 = *(longlong **)puVar1, plVar2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*plVar2 + 0x38))();
    if (cVar4 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OnProcessQueue.IsBound() == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraModule.cpp"
                         ,0x67b,L"Shader processing queue delegate already set.");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        FVar6.ID = (*pcVar3)();
        return (FDelegateHandle)FVar6.ID;
      }
      goto LAB_149306b1a;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
LAB_149306b1a:
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (this_00,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)in_R8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_30);
  if ((*(int *)&(this->OnProcessQueue).field_0x10 == 0) ||
     (plVar2 = *(longlong **)puVar1, plVar2 == (longlong *)0x0)) {
    uVar8 = 0;
  }
  else {
    puVar7 = (undefined8 *)(**(code **)(*plVar2 + 0x40))(plVar2,local_res8);
    uVar8 = *puVar7;
  }
  *(undefined8 *)param_1 = uVar8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_30);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(in_R8);
  if (*(void **)&in_R8->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&in_R8->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)in_R8)
  ;
  return (FDelegateHandle)(ulong64)param_1;
}

// ShutdownRenderingResources @ 149309220

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall INiagaraModule::ShutdownRenderingResources(INiagaraModule *this)

{
  FFXSystemInterface::UnregisterCustomFXSystem(&FNiagaraGpuComputeDispatch::Name);
  return;
}

