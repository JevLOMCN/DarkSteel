// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 1

// ExecuteInternal @ 14ceece90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGMergeDynamicMeshesElement::ExecuteInternal
          (FPCGMergeDynamicMeshesElement *this,FPCGContext *param_1)

{
  int *piVar1;
  int iVar2;
  UPCGNode *this_00;
  UDynamicMesh *pUVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FObjectPtr_u_0 FVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  UClass *pUVar12;
  UPCGSettings *pUVar13;
  UPCGDynamicMeshData *pUVar14;
  FPCGTaggedData *pFVar15;
  FObjectPtr_u_0 *pFVar16;
  ForAnyElementType FVar17;
  <lambda_1> <Var18;
  undefined1 auStackY_3c8 [32];
  undefined1 local_397 [7];
  FObjectPtr_u_0 local_390;
  FObjectPtr_u_0 *local_388;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_380;
  FDynamicMeshEditor local_370;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_368;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_338;
  undefined1 local_308 [32];
  void *local_2e8;
  undefined4 local_2e0;
  uint local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  void *local_2c8;
  undefined4 local_2c0;
  ForAnyElementType local_2b8;
  undefined8 local_2b0;
  TBitArray<FDefaultBitArrayAllocator> local_2a8;
  undefined4 local_288;
  undefined4 local_284;
  void *local_278;
  undefined4 local_270;
  undefined2 local_268;
  ForAnyElementType local_260;
  undefined8 local_258;
  TBitArray<FDefaultBitArrayAllocator> local_250;
  undefined8 uStack_230;
  void *local_220;
  undefined4 local_218;
  ForAnyElementType local_210;
  undefined8 local_208;
  TBitArray<FDefaultBitArrayAllocator> local_200;
  undefined8 uStack_1e0;
  void *local_1d0;
  undefined4 local_1c8;
  undefined2 local_1c0;
  ForAnyElementType local_1b8;
  undefined8 local_1b0;
  TBitArray<FDefaultBitArrayAllocator> local_1a8;
  undefined4 local_188;
  undefined4 local_184;
  void *local_178;
  undefined4 local_170;
  ForAnyElementType local_168;
  undefined8 local_160;
  TBitArray<FDefaultBitArrayAllocator> local_158;
  undefined4 local_138;
  undefined4 local_134;
  void *local_128;
  undefined4 local_120;
  undefined2 local_118;
  ForAnyElementType local_110;
  undefined8 local_108;
  TBitArray<FDefaultBitArrayAllocator> local_100;
  undefined8 uStack_e0;
  void *local_d0;
  undefined4 local_c8;
  ForAnyElementType local_c0;
  undefined8 local_b8;
  TBitArray<FDefaultBitArrayAllocator> local_b0;
  undefined8 uStack_90;
  void *local_80;
  undefined4 local_78;
  undefined2 local_70;
  ForAnyElementType local_68;
  undefined8 local_60;
  ForAnyElementType local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  <Var18 = (<lambda_1>)(-1 < CpuChannel->Enabled);
  if ((bool)<Var18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId48,"FPCGMergeDynamicMeshesElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGMergeDynamicMeshes.cpp"
               ,0x30);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId48);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGMergeDynamicMeshes.cpp"
                         ,0x32,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar13 = UPCGNode::GetSettings(this_00), pUVar13 == (UPCGSettings *)0x0)) {
      pFVar15 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGMergeDynamicMeshesSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,<Var18);
      if (pFVar15 != (FPCGTaggedData *)0x0) {
        pUVar13 = (UPCGSettings *)Cast<UPCGMergeDynamicMeshesSettings_const_>(&pFVar15->Data);
        goto LAB_14ceecfea;
      }
    }
    else {
      pUVar13 = UPCGNode::GetSettings(this_00);
      pUVar13 = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar13);
      if (pUVar13 != (UPCGSettings *)0x0) {
        pUVar12 = UPCGMergeDynamicMeshesSettings::StaticClass();
        iVar2 = (int)pUVar12->_padding_;
        if ((iVar2 <= *(int *)(pUVar13->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar13->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar12->_padding_)) goto LAB_14ceecfea;
      }
    }
    pUVar13 = (UPCGSettings *)0x0;
  }
  else {
    pUVar12 = UPCGMergeDynamicMeshesSettings::StaticClass();
    bVar9 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar12);
    pUVar13 = (UPCGSettings *)0x0;
    if (bVar9) {
      pUVar13 = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
  }
LAB_14ceecfea:
  pUVar14 = (UPCGDynamicMeshData *)0x0;
  if ((pUVar13 == (UPCGSettings *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGMergeDynamicMeshes.cpp"
                         ,0x35,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_380,&PCGPinConstants::DefaultInputLabel);
  iVar2 = local_380.ArrayNum;
  uVar7 = _UNK_150631d98;
  uVar5 = ___xmm_00000000ffffffff0000008000000000;
  local_388 = (FObjectPtr_u_0 *)
              (local_380.AllocatorInstance.Data + (longlong)local_380.ArrayNum * 0x78);
  pFVar16 = local_388;
  FVar17.Data = local_380.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_380.ArrayNum != iVar2) {
        `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_397);
      }
      if ((FObjectPtr_u_0 *)FVar17.Data == pFVar16) {
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_380.AllocatorInstance.Data,local_380.ArrayNum);
        if ((FPCGTaggedData *)local_380.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_380.AllocatorInstance.Data);
        }
        if ((bool)<Var18) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return true;
      }
      local_390 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar17.Data;
      if (UE::GC::GIsIncrementalReachabilityPending == false) break;
      if (local_390.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_390.Handle);
        break;
      }
LAB_14ceed981:
      PCGLog::InputOutput::LogInvalidInputDataError(param_1);
      FVar17.Data = FVar17.Data + 0x78;
    }
    if (local_390.Handle == (UObject *)0x0) goto LAB_14ceed981;
    pUVar12 = Z_Construct_UClass_UPCGDynamicMeshData_NoRegister();
    bVar9 = FObjectPtr::IsA((FObjectPtr *)&local_390,pUVar12);
    FVar8 = local_390;
    uVar6 = ___xmm_00000000ffffffff0000008000000000;
    if ((!bVar9) || (local_390.Handle == (UObject *)0x0)) goto LAB_14ceed981;
    if (pUVar14 == (UPCGDynamicMeshData *)0x0) {
      pUVar14 = IPCGDynamicMeshBaseElement::CopyOrSteal((FPCGTaggedData *)FVar17.Data,param_1);
      piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
      iVar11 = (param_1->OutputData).TaggedData.ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
      }
      (param_1->OutputData).TaggedData.ArrayNum = iVar11 + 1;
      pFVar15 = FPCGTaggedData::FPCGTaggedData
                          ((FPCGTaggedData *)
                           ((param_1->OutputData).TaggedData.AllocatorInstance.Data +
                           (longlong)iVar11 * 0x78),(FPCGTaggedData *)FVar17.Data);
      FPCGDataPtrWrapper::operator=(&pFVar15->Data,(UPCGData *)pUVar14);
LAB_14ceed11c:
      FVar17.Data = FVar17.Data + 0x78;
      pFVar16 = local_388;
    }
    else {
      local_308._0_8_ = (FScriptContainerElement *)0x0;
      local_308._8_8_ = 0;
      local_2e8 = (void *)0x0;
      local_2e0 = 0;
      local_2dc = 0x80;
      local_2d8 = 0xffffffff;
      local_2d4 = 0;
      local_2c8 = (void *)0x0;
      local_2c0 = 0;
      local_2b8.Data = (FScriptContainerElement *)0x0;
      local_2b0 = 0;
      local_2a8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_2a8.NumBits = 0;
      local_2a8.MaxBits = 0x80;
      local_288 = 0xffffffff;
      local_284 = 0;
      local_278 = (void *)0x0;
      local_270 = 0;
      local_268._0_1_ = true;
      local_268._1_1_ = true;
      local_260.Data = (FScriptContainerElement *)0x0;
      local_258 = 0;
      local_250.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      ___xmm_00000000ffffffff0000008000000000 = (int)uVar5;
      _UNK_150631d94 = SUB84(uVar5,4);
      local_250.NumBits = ___xmm_00000000ffffffff0000008000000000;
      local_250.MaxBits = _UNK_150631d94;
      uStack_230 = uVar7;
      local_220 = (void *)0x0;
      local_218 = 0;
      local_210.Data = (FScriptContainerElement *)0x0;
      local_208 = 0;
      local_200.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      ___xmm_00000000ffffffff0000008000000000 = (int)uVar5;
      _UNK_150631d94 = SUB84(uVar5,4);
      local_200.NumBits = ___xmm_00000000ffffffff0000008000000000;
      local_200.MaxBits = _UNK_150631d94;
      uStack_1e0 = uVar7;
      local_1d0 = (void *)0x0;
      local_1c8 = 0;
      local_1c0._0_1_ = true;
      local_1c0._1_1_ = true;
      local_1b8.Data = (FScriptContainerElement *)0x0;
      local_1b0 = 0;
      local_1a8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_1a8.NumBits = 0;
      local_1a8.MaxBits = 0x80;
      local_188 = 0xffffffff;
      local_184 = 0;
      local_178 = (void *)0x0;
      local_170 = 0;
      local_168.Data = (FScriptContainerElement *)0x0;
      local_160 = 0;
      local_158.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_158.NumBits = 0;
      local_158.MaxBits = 0x80;
      local_138 = 0xffffffff;
      local_134 = 0;
      local_128 = (void *)0x0;
      local_120 = 0;
      local_118._0_1_ = true;
      local_118._1_1_ = true;
      local_110.Data = (FScriptContainerElement *)0x0;
      local_108 = 0;
      local_100.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      ___xmm_00000000ffffffff0000008000000000 = (int)uVar5;
      _UNK_150631d94 = SUB84(uVar5,4);
      local_100.NumBits = ___xmm_00000000ffffffff0000008000000000;
      local_100.MaxBits = _UNK_150631d94;
      uStack_e0 = uVar7;
      local_d0 = (void *)0x0;
      local_c8 = 0;
      local_c0.Data = (FScriptContainerElement *)0x0;
      local_b8 = 0;
      local_b0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      ___xmm_00000000ffffffff0000008000000000 = (int)uVar5;
      _UNK_150631d94 = SUB84(uVar5,4);
      local_b0.NumBits = ___xmm_00000000ffffffff0000008000000000;
      local_b0.MaxBits = _UNK_150631d94;
      uStack_90 = uVar7;
      local_80 = (void *)0x0;
      local_78 = 0;
      local_70._0_1_ = true;
      local_70._1_1_ = true;
      local_68.Data = (FScriptContainerElement *)0x0;
      local_60._0_4_ = 0;
      local_60._4_4_ = 0;
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50._0_4_ = 0;
      local_50._4_4_ = 0;
      bVar9 = -1 < CpuChannel->Enabled;
      ___xmm_00000000ffffffff0000008000000000 = uVar6;
      if (bVar9) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId76,"FPCGMergeDynamicMeshesElement::Execute::AppendMesh",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGMergeDynamicMeshes.cpp"
                   ,0x4c);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId76);
      }
      pUVar3 = (pUVar14->DynamicMesh).field0_0x0.DebugPtr;
      pUVar14->bDynamicMeshBoundsAreDirty = true;
      pUVar14->bDynamicMeshOctreeIsDirty = true;
      local_370.Mesh = (pUVar3->Mesh).Ptr;
      local_368._0_8_ = 0;
      local_368._40_8_ = 0;
      local_338._0_8_ = 0;
      local_338._40_8_ = 0;
      UE::Geometry::FDynamicMeshEditor::AppendMesh
                (&local_370,*(FDynamicMesh3 **)(*(longlong *)&FVar8.Handle[3].field_0x20 + 0xb8),
                 (FMeshIndexMappings *)local_308,&local_338,&local_368,false);
      if (bVar9) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      iVar11 = *(int *)&FVar8.Handle[4].field_0x8;
      if ((iVar11 != 0) &&
         ((iVar11 != (pUVar14->Materials).ArrayNum ||
          (bVar9 = CompareItems<TObjectPtr<UMaterialInterface>,int>
                             (*(TObjectPtr<UMaterialInterface> **)(FVar8.Handle + 4),
                              (TObjectPtr<UMaterialInterface> *)
                              (pUVar14->Materials).AllocatorInstance.Data,iVar11), !bVar9)))) {
        pUVar3 = (pUVar14->DynamicMesh).field0_0x0.DebugPtr;
        pUVar14->bDynamicMeshBoundsAreDirty = true;
        pUVar14->bDynamicMeshOctreeIsDirty = true;
        PCGGeometryHelpers::RemapMaterials
                  ((pUVar3->Mesh).Ptr,
                   (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)(FVar8.Handle + 4),
                   &pUVar14->Materials,(FMeshIndexMappings *)local_308);
      }
      DestructItems<UE::Geometry::TIndexMap<int>,int>((TIndexMap<int> *)local_58.Data,(int)local_50)
      ;
      if ((TIndexMap<int> *)local_58.Data != (TIndexMap<int> *)0x0) {
        FMemory::Free(local_58.Data);
      }
      DestructItems<UE::Geometry::TIndexMap<int>,int>((TIndexMap<int> *)local_68.Data,(int)local_60)
      ;
      if ((TIndexMap<int> *)local_68.Data != (TIndexMap<int> *)0x0) {
        FMemory::Free(local_68.Data);
      }
      local_78 = 0;
      if (local_80 != (void *)0x0) {
        FMemory::Free(local_80);
      }
      bVar9 = local_b8._4_4_ != 0;
      local_b8 = (ulonglong)local_b8._4_4_ << 0x20;
      if (bVar9) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,&local_c0,0,(int *)((longlong)&local_b8 + 4));
      }
      iVar11 = local_b0.MaxBits;
      uStack_90 = 0xffffffff;
      local_b0._24_8_ = (ulonglong)(uint)local_b0.MaxBits << 0x20;
      if (0x80 < (uint)iVar11) {
        local_b0.NumBits = 0;
        local_b0.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_b0,0);
      }
      if (local_b0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_b0.AllocatorInstance.SecondaryData);
      }
      if (local_c0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data);
      }
      local_c8 = 0;
      if (local_d0 != (void *)0x0) {
        FMemory::Free(local_d0);
      }
      bVar9 = local_108._4_4_ != 0;
      local_108 = (ulonglong)local_108._4_4_ << 0x20;
      if (bVar9) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,&local_110,0,(int *)((longlong)&local_108 + 4));
      }
      iVar11 = local_100.MaxBits;
      uStack_e0 = 0xffffffff;
      local_100._24_8_ = (ulonglong)(uint)local_100.MaxBits << 0x20;
      if (0x80 < (uint)iVar11) {
        local_100.NumBits = 0;
        local_100.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_100,0);
      }
      if (local_100.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_100.AllocatorInstance.SecondaryData);
      }
      if (local_110.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data);
      }
      local_120 = 0;
      if (local_128 != (void *)0x0) {
        FMemory::Free(local_128);
      }
      bVar9 = local_160._4_4_ != 0;
      local_160 = (ulonglong)local_160._4_4_ << 0x20;
      if (bVar9) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,&local_168,0,(int *)((longlong)&local_160 + 4));
      }
      local_138 = 0xffffffff;
      local_134 = 0;
      local_158.NumBits = 0;
      if (0x80 < (uint)local_158.MaxBits) {
        local_158.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_158,0);
      }
      if (local_158.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_158.AllocatorInstance.SecondaryData);
      }
      if (local_168.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data);
      }
      local_170 = 0;
      if (local_178 != (void *)0x0) {
        FMemory::Free(local_178);
      }
      bVar9 = local_1b0._4_4_ != 0;
      local_1b0 = (ulonglong)local_1b0._4_4_ << 0x20;
      if (bVar9) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,&local_1b8,0,(int *)((longlong)&local_1b0 + 4));
      }
      local_188 = 0xffffffff;
      local_184 = 0;
      local_1a8.NumBits = 0;
      if (0x80 < (uint)local_1a8.MaxBits) {
        local_1a8.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_1a8,0);
      }
      if (local_1a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_1a8.AllocatorInstance.SecondaryData);
      }
      if (local_1b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data);
      }
      local_1c8 = 0;
      if (local_1d0 != (void *)0x0) {
        FMemory::Free(local_1d0);
      }
      bVar9 = local_208._4_4_ != 0;
      local_208 = (ulonglong)local_208._4_4_ << 0x20;
      if (bVar9) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,&local_210,0,(int *)((longlong)&local_208 + 4));
      }
      iVar11 = local_200.MaxBits;
      uStack_1e0 = 0xffffffff;
      local_200._24_8_ = (ulonglong)(uint)local_200.MaxBits << 0x20;
      if (0x80 < (uint)iVar11) {
        local_200.NumBits = 0;
        local_200.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_200,0);
      }
      if (local_200.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_200.AllocatorInstance.SecondaryData);
      }
      if (local_210.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.Data);
      }
      local_218 = 0;
      if (local_220 != (void *)0x0) {
        FMemory::Free(local_220);
      }
      bVar9 = local_258._4_4_ != 0;
      local_258 = (ulonglong)local_258._4_4_ << 0x20;
      if (bVar9) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,&local_260,0,(int *)((longlong)&local_258 + 4));
      }
      iVar11 = local_250.MaxBits;
      uStack_230 = 0xffffffff;
      local_250._24_8_ = (ulonglong)(uint)local_250.MaxBits << 0x20;
      if (0x80 < (uint)iVar11) {
        local_250.NumBits = 0;
        local_250.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_250,0);
      }
      if (local_250.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_250.AllocatorInstance.SecondaryData);
      }
      if (local_260.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.Data);
      }
      local_270 = 0;
      if (local_278 != (void *)0x0) {
        FMemory::Free(local_278);
      }
      bVar9 = local_2b0._4_4_ != 0;
      local_2b0 = (ulonglong)local_2b0._4_4_ << 0x20;
      if (bVar9) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,&local_2b8,0,(int *)((longlong)&local_2b0 + 4));
      }
      local_288 = 0xffffffff;
      local_284 = 0;
      local_2a8.NumBits = 0;
      if (0x80 < (uint)local_2a8.MaxBits) {
        local_2a8.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_2a8,0);
      }
      if (local_2a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_2a8.AllocatorInstance.SecondaryData);
      }
      if (local_2b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.Data);
      }
      local_2c0 = 0;
      if (local_2c8 != (void *)0x0) {
        FMemory::Free(local_2c8);
      }
      bVar9 = local_308._12_4_ != 0;
      local_308._8_8_ = (ulonglong)(uint)local_308._12_4_ << 0x20;
      if (bVar9) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)local_308,0,(int *)(local_308 + 0xc));
      }
      local_2d8 = 0xffffffff;
      local_2d4 = 0;
      local_2e0 = 0;
      if (0x80 < local_2dc) {
        local_2dc = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_308 + 0x10),0);
      }
      if (local_2e8 != (void *)0x0) {
        FMemory::Free(local_2e8);
      }
      if ((FScriptContainerElement *)local_308._0_8_ == (FScriptContainerElement *)0x0)
      goto LAB_14ceed11c;
      FMemory::Free((void *)local_308._0_8_);
      FVar17.Data = FVar17.Data + 0x78;
      pFVar16 = local_388;
    }
  } while( true );
}

