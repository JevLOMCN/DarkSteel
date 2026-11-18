// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 32

// StaticStruct @ 148aa9db0

UScriptStruct * __cdecl FSpatialHashStreamingGrid::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSpatialHashStreamingGrid.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSpatialHashStreamingGrid.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSpatialHashStreamingGrid,(UObject *)pUVar1,
                         L"SpatialHashStreamingGrid");
  }
  return Z_Registration_Info_UScriptStruct_FSpatialHashStreamingGrid.OuterSingleton;
}

// FSpatialHashStreamingGrid @ 148ab3630

FSpatialHashStreamingGrid * __thiscall
FSpatialHashStreamingGrid::FSpatialHashStreamingGrid(FSpatialHashStreamingGrid *this)

{
  (this->GridName).ComparisonIndex = 0;
  (this->GridName).Number = 0;
  (this->GridLevels).ArrayNum = 0;
  (this->GridLevels).ArrayMax = 0;
  (this->Origin).field0_0x0._s_0.X = 0.0;
  (this->Origin).field0_0x0._s_0.Y = 0.0;
  (this->Origin).field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)&(this->DebugColor).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->DebugColor).field0_0x0 + 8) = 0;
  this->CellSize = 0;
  this->LoadingRange = 0.0;
  this->bBlockOnSlowStreaming = false;
  (this->WorldBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->WorldBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->WorldBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->GridLevels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->WorldBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->WorldBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->WorldBounds).IsValid = '\0';
  *(undefined8 *)(this->WorldBounds).Pad = 0;
  this->GridIndex = -1;
  (this->Settings).bUseAlignedGridLevels = true;
  (this->Settings).bSnapNonAlignedGridLevelsToLowerLevels = true;
  this->GridHelper = (FSquare2DGridHelper *)0x0;
  (this->InjectedGridLevels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InjectedGridLevels).ArrayNum = 0;
  (this->InjectedGridLevels).ArrayMax = 0;
  return this;
}

// ~FSpatialHashStreamingGrid @ 148ab7070

void __thiscall
FSpatialHashStreamingGrid::~FSpatialHashStreamingGrid(FSpatialHashStreamingGrid *this)

{
  FSquare2DGridHelper *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->GridHelper;
  if (pFVar1 != (FSquare2DGridHelper *)0x0) {
    DestructItems<FSquare2DGridHelper::FGridLevel,int>
              ((FGridLevel *)(pFVar1->Levels).AllocatorInstance.Data,(pFVar1->Levels).ArrayNum);
    pFVar2 = (pFVar1->Levels).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x68);
  }
  DestructItems<FSpatialHashStreamingGridLevel,int>
            ((FSpatialHashStreamingGridLevel *)(this->InjectedGridLevels).AllocatorInstance.Data,
             (this->InjectedGridLevels).ArrayNum);
  pFVar2 = (this->InjectedGridLevels).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FSpatialHashStreamingGridLevel,int>
            ((FSpatialHashStreamingGridLevel *)(this->GridLevels).AllocatorInstance.Data,
             (this->GridLevels).ArrayNum);
  pFVar2 = (this->GridLevels).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator() @ 148ab8d40

void __thiscall
`FSpatialHashStreamingGrid::ForEachRuntimeCell'::__l2::<lambda_1>::operator()
          (void *this,TArray<FSpatialHashStreamingGridLevel,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  undefined8 local_res18;
  uint local_res20;
  
  pFVar10 = (param_1->AllocatorInstance).Data;
  local_res20 = param_1->ArrayNum;
  uVar5 = (ulonglong)(int)local_res20;
  pFVar6 = pFVar10 + uVar5 * 0x60;
  while( true ) {
    if (param_1->ArrayNum != (int)uVar5) {
      `TCheckedPointerIterator<FSpatialHashStreamingGridLevel_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res18);
    }
    if (pFVar10 == pFVar6) break;
    iVar2 = *(int *)(pFVar10 + 8);
    plVar8 = *(longlong **)pFVar10;
    plVar9 = plVar8 + (longlong)iVar2 * 2;
    while( true ) {
      if (*(int *)(pFVar10 + 8) != iVar2) {
        `TCheckedPointerIterator<FSpatialHashStreamingGridLayerCell_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(&local_res18);
      }
      if (plVar8 == plVar9) break;
      puVar7 = (undefined8 *)*plVar8;
      lVar3 = plVar8[1];
      puVar1 = puVar7 + (int)lVar3;
      while( true ) {
        if ((int)plVar8[1] != (int)lVar3) {
          `TCheckedPointerIterator<TObjectPtr<UWorldPartitionRuntimeCell>_const_,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(&local_res18);
        }
        if (puVar7 == puVar1) break;
        local_res18 = *puVar7;
        cVar4 = (**(code **)this)(*(undefined8 *)((longlong)this + 8),&local_res18);
        if (cVar4 == '\0') {
          return;
        }
        puVar7 = puVar7 + 1;
      }
      plVar8 = plVar8 + 2;
    }
    pFVar10 = pFVar10 + 0x60;
    uVar5 = (ulonglong)local_res20;
  }
  return;
}

// operator() @ 148ab9210

bool __thiscall
`FSpatialHashStreamingGrid::GetCells'::__l2::<lambda_1>::operator()
          (void *this,UWorldPartitionRuntimeCell *param_1,
          FWorldPartitionStreamingQuerySource *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  if ((param_1->DataLayers).DataLayers.ArrayNum == 0) {
    return param_2->bDataLayersOnly == false;
  }
  plVar2 = (longlong *)(**(code **)(param_1->_padding_ + 0x38))(&param_1->_padding_);
  plVar4 = (longlong *)*plVar2;
  plVar2 = plVar4 + (int)plVar2[1];
  if (plVar4 != plVar2) {
    pFVar1 = (param_2->DataLayers).AllocatorInstance.Data;
    do {
      if (pFVar1 != pFVar1 + (longlong)(param_2->DataLayers).ArrayNum * 8) {
        pFVar3 = pFVar1;
        do {
          if (*(longlong *)pFVar3 == *plVar4) {
            return true;
          }
          pFVar3 = pFVar3 + 8;
        } while (pFVar3 != pFVar1 + (longlong)(param_2->DataLayers).ArrayNum * 8);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar2);
  }
  return false;
}

// operator() @ 148aba3e0

bool __thiscall
`FSpatialHashStreamingGrid::GetFilteredCellsForDebugDraw'::__l5::<lambda_1>::operator()
          (void *this,UWorldPartitionRuntimeCell *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  EDataLayerRuntimeState EVar6;
  
  cVar2 = (**(code **)(param_1->_padding_ + 0x350))(param_1);
  if (cVar2 == '\0') {
    return false;
  }
  uVar5 = (**(code **)(param_1->_padding_ + 0x318))(param_1);
  (**(code **)(param_1->_padding_ + 0x38))(&param_1->_padding_);
  EVar6 = Activated;
  if ((param_1->DataLayers).DataLayers.ArrayNum != 0) {
    EVar6 = param_1->EffectiveWantedState;
  }
  if (EVar6 != Unloaded) {
    if ((EVar6 == Loaded) || (EVar6 == Activated)) {
      return true;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
                       ,800,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  return 1 < uVar5;
}

// operator() @ 148aba570

void __thiscall
`FSpatialHashStreamingGrid::GetNonSpatiallyLoadedCells'::__l5::<lambda_1>::operator()
          (void *this,FSpatialHashStreamingGridLevel *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  UWorldPartitionRuntimeCell *this_00;
  code *pcVar3;
  EDataLayerRuntimeState EVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  int *piVar8;
  TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
  *this_01;
  UWorldPartitionRuntimeCell **ppUVar9;
  FScriptContainerElement *pFVar10;
  undefined8 *puVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  undefined1 local_48 [8];
  UWorldPartitionRuntimeCell *local_40;
  
  local_res20 = (param_1->LayerCells).ArrayNum;
  uVar7 = (ulonglong)(int)local_res20;
  pFVar10 = (param_1->LayerCells).AllocatorInstance.Data;
  pFVar12 = pFVar10 + uVar7 * 0x10;
  do {
    if ((param_1->LayerCells).ArrayNum != (int)uVar7) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FSpatialHashStreamingGridLayerCell_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar10 == pFVar12) {
      return;
    }
    puVar11 = *(undefined8 **)pFVar10;
    iVar2 = *(int *)(pFVar10 + 8);
    puVar1 = puVar11 + iVar2;
    while( true ) {
      if (*(int *)(pFVar10 + 8) != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UWorldPartitionRuntimeCell>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res18);
      }
      if (puVar11 == puVar1) break;
      this_00 = (UWorldPartitionRuntimeCell *)*puVar11;
      local_40 = this_00;
      EVar4 = UWorldPartitionRuntimeCell::GetCellEffectiveWantedState
                        (this_00,*(FWorldPartitionStreamingContext **)((longlong)this + 0x10));
      if (EVar4 != Unloaded) {
        if (EVar4 == Loaded) {
          if ((this_00->DataLayers).DataLayers.ArrayNum == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Cell->HasDataLayers()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
                               ,0x2f4,L"");
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          this_01 = *(TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
                      **)((longlong)this + 8);
          ppUVar9 = (UWorldPartitionRuntimeCell **)(local_48 + 4);
        }
        else {
          if (EVar4 != Activated) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Enclosing block should never be called\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
                               ,0x2fe,L"");
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            goto LAB_148aba6f1;
          }
          cVar6 = (**(code **)(this_00->_padding_ + 0x2f0))(this_00);
          if ((cVar6 == '\0') && ((this_00->DataLayers).DataLayers.ArrayNum == 0)) {
            piVar8 = (int *)(**(code **)(this_00->_padding_ + 800))(this_00);
            if (((piVar8[3] == 0 && piVar8[2] == 0) && piVar8[1] == 0) && *piVar8 == 0) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Cell->IsAlwaysLoaded() || Cell->HasDataLayers() || Cell->GetContentBundleID().IsValid()"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
                                 ,0x2f8,L"");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
          }
          this_01 = *(TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
                      **)this;
          ppUVar9 = (UWorldPartitionRuntimeCell **)local_48;
        }
        TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
        ::Emplace<UWorldPartitionRuntimeCell_const_*_const_&>(this_01,ppUVar9,(bool *)&local_40);
      }
LAB_148aba6f1:
      puVar11 = puVar11 + 1;
    }
    uVar7 = (ulonglong)local_res20;
    pFVar10 = pFVar10 + 0x10;
  } while( true );
}

// operator() @ 148aba9a0

void __thiscall
`FSpatialHashStreamingGrid::GetCells'::__l6::<lambda_1>::operator()
          (void *this,FSphericalSector *param_1)

{
  code *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  FSphericalSector *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 local_58;
  double local_50;
  double dStack_48;
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  double local_20;
  double dStack_18;
  
  local_80 = *(undefined8 *)this;
  local_a8 = *(undefined8 *)((longlong)this + 0x10);
  local_50 = (param_1->Center).field0_0x0._s_0.X;
  dStack_48 = (param_1->Center).field0_0x0._s_0.Y;
  local_a0 = *(undefined8 *)((longlong)this + 0x18);
  local_40 = (param_1->Center).field0_0x0._s_0.Z;
  dStack_38 = param_1->Radius;
  local_90 = *(undefined8 *)((longlong)this + 0x20);
  local_88 = *(undefined8 *)((longlong)this + 0x28);
  local_78 = *(undefined8 *)((longlong)this + 0x30);
  local_70 = *(undefined8 *)((longlong)this + 0x38);
  local_68 = &local_58;
  local_b0 = &local_a8;
  local_30 = (param_1->Axis).field0_0x0._s_0.X;
  dStack_28 = (param_1->Axis).field0_0x0._s_0.Y;
  local_20 = (param_1->Axis).field0_0x0._s_0.Z;
  dStack_18 = param_1->Angle;
  local_b8 = UE::Core::Private::Function::
             TFunctionRefCaller<``FSpatialHashStreamingGrid::GetCells'::__l6::<lambda_1>::operator()'::__l2::<lambda_1>,void,UE::Math::TIntVector3<__int64>_const_&>
             ::Call;
  local_98 = param_1;
  local_58 = local_80;
  FSquare2DGridHelper::ForEachIntersectingCells
            (*(FSquare2DGridHelper **)((longlong)this + 8),param_1,
             (TFunctionRef<void___cdecl(UE::Math::TIntVector3<__int64>_const_&)> *)&local_b8,0);
  return;
}

// operator() @ 148ababa0

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

void __thiscall
`FSpatialHashStreamingGrid::Draw3D'::__l8::<lambda_1>::operator()
          (void *this,TIntVector2<__int64> *param_1)

{
  FName *pFVar1;
  float fVar2;
  ForAnyElementType *pFVar3;
  longlong *plVar4;
  undefined1 (*pauVar5) [16];
  UContentBundleManager *this_00;
  TTransform<double> *pTVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  bool bVar16;
  UClass *pUVar17;
  float *pfVar18;
  longlong lVar19;
  longlong *plVar20;
  FColor *pFVar21;
  int *piVar22;
  FGuid *pFVar23;
  FContentBundleBase *this_01;
  UContentBundleDescriptor *pUVar24;
  FString *pFVar25;
  ulonglong uVar26;
  int iVar27;
  FName *pFVar28;
  wchar_t *pwVar29;
  longlong *plVar30;
  wchar_t *pwVar31;
  double dVar32;
  undefined1 auVar33 [12];
  undefined1 auVar34 [12];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar59;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar60;
  double dVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined4 uVar67;
  double dVar68;
  double dVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  double dVar73;
  double dVar74;
  double dVar75;
  undefined1 auVar76 [16];
  float fVar77;
  undefined1 auStackY_448 [32];
  undefined1 local_3f7;
  undefined1 local_3f6 [2];
  FColor_u_0 local_3f4;
  int local_3f0;
  FColor_u_0 local_3ec [2];
  uint local_3e4;
  UWorldPartitionRuntimeCell *local_3e0;
  longlong *local_3d8;
  longlong *local_3d0;
  longlong *local_3c8;
  double local_3c0;
  double dStack_3b8;
  undefined1 local_3b0 [16];
  double local_3a0;
  double dStack_398;
  undefined8 local_390;
  double local_388;
  double dStack_380;
  undefined1 local_378 [16];
  double local_368;
  double dStack_360;
  undefined8 local_358;
  FSpatialHashStreamingGrid *local_350;
  undefined8 local_348;
  code *local_340;
  FSpatialHashStreamingGrid **local_338;
  TIntVector3<__int64>_u_0 local_330;
  TVector<double>_u_0 local_318;
  double local_300;
  double dStack_2f8;
  undefined1 auStack_2f0 [16];
  double dStack_2e0;
  double dStack_2d8;
  undefined1 local_2d0;
  uchar auStack_2cf [7];
  double local_2c8;
  double dStack_2c0;
  undefined1 auStack_2b8 [16];
  double dStack_2a8;
  double dStack_2a0;
  undefined1 local_298;
  uchar auStack_297 [7];
  TVector<double>_u_0 local_290;
  undefined1 local_278 [16];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined1 local_240 [16];
  FString local_230;
  FString local_220;
  FString local_210 [7];
  double local_198;
  double dStack_190;
  undefined1 local_178 [24];
  double adStack_160 [3];
  uchar local_148;
  uchar uStack_147;
  uchar uStack_146;
  uchar uStack_145;
  uchar uStack_144;
  uchar uStack_143;
  uchar uStack_142;
  uchar uStack_141;
  TVector<double>_u_0 local_140;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  uchar local_110;
  uchar uStack_10f;
  uchar uStack_10e;
  uchar uStack_10d;
  uchar uStack_10c;
  uchar uStack_10b;
  uchar uStack_10a;
  uchar uStack_109;
  undefined1 local_108 [32];
  double local_e8;
  double dStack_e0;
  uchar local_d8;
  ulonglong local_d0;
  
  local_d0 = __security_cookie.value ^ (ulonglong)auStackY_448;
  local_330._s_0.X = (param_1->field0_0x0)._s_0.X;
  pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
  local_330._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  piVar22 = (int *)((longlong)&pFVar3[1].Data + 4);
  local_330._s_0.Z = (long64)**(int **)this;
  iVar27 = *piVar22;
  *(undefined4 *)&pFVar3[1].Data = 0;
  if (iVar27 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,pFVar3,0,piVar22);
  }
  local_348 = *(undefined8 *)((longlong)this + 8);
  local_350 = *(FSpatialHashStreamingGrid **)((longlong)this + 0x10);
  local_338 = &local_350;
  local_340 = UE::Core::Private::Function::
              TFunctionRefCaller<``FSpatialHashStreamingGrid::Draw3D'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>,void,FSpatialHashStreamingGridLayerCell_const_*>
              ::Call;
  FSpatialHashStreamingGrid::ForEachLayerCell
            (local_350,(TIntVector3<__int64> *)&local_330._s_0,
             (TFunctionRef<void___cdecl(FSpatialHashStreamingGridLayerCell_const_*)> *)&local_340);
  local_3d0 = *(longlong **)((longlong)this + 8);
  local_3e4 = *(uint *)(local_3d0 + 1);
  uVar26 = (ulonglong)(int)local_3e4;
  plVar30 = (longlong *)*local_3d0;
  local_3c8 = plVar30 + uVar26;
  fVar77 = __real_bf800000;
  iVar27 = 0;
  dVar32 = __real_3fe0000000000000;
  while( true ) {
    plVar4 = local_3c8;
    fVar14 = __real_437f0000;
    fVar13 = __real_3f000000;
    fVar12 = __real_3f800000;
    pwVar31 = L"";
    if ((int)local_3d0[1] != (int)uVar26) {
      local_3f7 = 0;
      `TCheckedPointerIterator<UWorldPartitionRuntimeCell_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_3f7);
    }
    if (plVar30 == plVar4) {
      return;
    }
    plVar4 = (longlong *)*plVar30;
    local_3f0 = iVar27 + 1;
    local_3d8 = plVar4;
    TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
    ::Emplace<UWorldPartitionRuntimeCell_const_*_const_&>
              (*(TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
                 **)((longlong)this + 0x18),&local_3e0,(bool *)&local_3d8);
    if (plVar4[0x15] == 0) {
      pFVar25 = GetTypeName<UWorldPartitionRuntimeCellDataSpatialHash>(local_210);
      if ((pFVar25->Data).ArrayNum != 0) {
        pwVar31 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar31);
    }
    pUVar17 = UWorldPartitionRuntimeCellDataSpatialHash::StaticClass();
    bVar16 = FObjectPtr::IsA((FObjectPtr *)(plVar4 + 0x15),pUVar17);
    if ((!bVar16) || (plVar20 = (longlong *)plVar4[0x15], plVar20 == (longlong *)0x0)) break;
    (**(code **)(*plVar20 + 0x2f0))(plVar20,&local_140);
    pfVar18 = (float *)(**(code **)(*plVar4 + 0x2e8))
                                 (plVar4,local_240,**(undefined4 **)((longlong)this + 0x20));
    fVar2 = pfVar18[1];
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    if (fVar12 <= fVar2) {
      fVar2 = fVar12;
    }
    auVar33._4_8_ = 0;
    auVar33._0_4_ = *pfVar18;
    if (*pfVar18 <= 0.0) {
      auVar33 = ZEXT812(0) << 0x20;
    }
    if (fVar12 <= auVar33._0_4_) {
      auVar33._4_8_ = auVar33._4_8_;
      auVar33._0_4_ = fVar12;
    }
    auVar34._4_8_ = 0;
    auVar34._0_4_ = pfVar18[2];
    if (pfVar18[2] <= 0.0) {
      auVar34 = ZEXT812(0) << 0x20;
    }
    local_3f4._s_0.R = (uchar)(int)(auVar33._0_4_ * fVar14 + fVar13);
    local_3f4._s_0.G = (uchar)(int)(fVar2 * fVar14 + fVar13);
    local_3f4._s_0.A = '\x10';
    if (fVar12 <= auVar34._0_4_) {
      auVar34._4_8_ = auVar34._4_8_;
      auVar34._0_4_ = fVar12;
    }
    local_3f4._s_0.B = (uchar)(int)(auVar34._0_4_ * fVar14 + fVar13);
    DrawDebugSolidBox((UWorld *)**(undefined8 **)((longlong)this + 0x28),
                      (TBox<double> *)&local_140._s_0,(FColor *)&local_3f4._s_0,
                      *(TTransform<double> **)((longlong)this + 0x30),false,fVar77,0xff);
    fVar77 = __real_bf800000;
    dVar59 = __real_3fe0000000000000;
    pauVar5 = *(undefined1 (**) [16])((longlong)this + 0x30);
    dVar8 = *(double *)(pauVar5[1] + 8);
    local_258 = (local_140._s_0.X + dStack_128) * dVar32;
    local_248 = (local_140._s_0.Z + dStack_118) * dVar32;
    dStack_250 = (local_140._s_0.Y + dStack_120) * dVar32;
    auVar76._0_8_ = local_248 * *(double *)pauVar5[5];
    auVar76._8_8_ = *(double *)(pauVar5[5] + 8) * 0.0;
    auVar64 = pauVar5[1];
    dVar61 = auVar64._0_8_;
    dVar74 = *(double *)pauVar5[4] * local_258;
    dVar75 = *(double *)(pauVar5[4] + 8) * dStack_250;
    auVar35 = *pauVar5;
    auVar70._8_4_ = SUB84(dVar75,0);
    auVar70._0_8_ = dVar74;
    uVar67 = (undefined4)((ulonglong)dVar75 >> 0x20);
    auVar70._12_4_ = uVar67;
    auVar50 = blendpd(auVar35,auVar64,2);
    auVar71._0_8_ = auVar70._8_8_ * auVar35._0_8_ - auVar35._8_8_ * dVar74;
    auVar71._8_8_ = auVar76._0_8_ * auVar35._8_8_ - dVar61 * dVar75;
    auVar35._8_4_ = SUB84(dVar75,0);
    auVar35._0_8_ = dVar74;
    auVar35._12_4_ = uVar67;
    auVar36 = blendpd(auVar35,auVar76,2);
    auVar35 = *pauVar5;
    auVar51._0_8_ = auVar36._0_8_ * dVar61 - auVar50._0_8_ * auVar76._0_8_;
    auVar51._8_8_ = auVar36._8_8_ * auVar64._8_8_ - auVar50._8_8_ * auVar76._8_8_;
    local_3ec[0]._s_0.B = local_3f4._s_0.B;
    local_3ec[0]._s_0.G = local_3f4._s_0.G;
    local_3ec[0]._s_0.R = local_3f4._s_0.R;
    auVar36 = blendpd(auVar71,auVar51,2);
    auVar72._0_8_ = auVar36._0_8_ + auVar36._0_8_;
    auVar72._8_8_ = auVar36._8_8_ + auVar36._8_8_;
    local_3ec[0]._s_0.A = 0xff;
    dVar32 = auVar71._8_8_ + auVar71._8_8_;
    dVar9 = auVar51._0_8_ + auVar51._0_8_;
    uVar67 = (undefined4)((ulonglong)dVar9 >> 0x20);
    auVar62._8_4_ = SUB84(dVar9,0);
    auVar62._0_8_ = dVar32;
    auVar62._12_4_ = uVar67;
    auVar50._8_4_ = SUB84(dVar9,0);
    auVar50._0_8_ = dVar32;
    auVar50._12_4_ = uVar67;
    auVar51 = blendpd(auVar50,auVar72,2);
    auVar50 = blendpd(auVar35,auVar64,2);
    auVar63._0_8_ = auVar62._8_8_ * auVar35._0_8_ - auVar35._8_8_ * dVar32;
    auVar63._8_8_ = auVar72._0_8_ * auVar35._8_8_ - dVar61 * dVar9;
    auVar36._8_4_ = SUB84(auVar63._8_8_,0);
    auVar36._0_8_ = auVar63._0_8_;
    auVar36._12_4_ = (int)((ulonglong)auVar63._8_8_ >> 0x20);
    auVar52._0_8_ = auVar51._0_8_ * dVar61 - auVar50._0_8_ * auVar72._0_8_;
    auVar52._8_8_ = auVar51._8_8_ * auVar64._8_8_ - auVar50._8_8_ * auVar72._8_8_;
    auVar64 = blendpd(auVar63,auVar52,2);
    dVar9 = dVar9 * dVar8 + dVar75 + auVar52._0_8_ + *(double *)(pauVar5[2] + 8);
    local_290._8_4_ = SUB84(dVar9,0);
    local_290._0_8_ = dVar32 * dVar8 + dVar74 + auVar36._8_8_ + *(double *)pauVar5[2];
    local_290._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    local_290._s_0.Z = auVar72._0_8_ * dVar8 + auVar76._0_8_ + auVar64._0_8_ + *(double *)pauVar5[3]
    ;
    local_268 = *(double *)pauVar5[1];
    dStack_260 = *(double *)(pauVar5[1] + 8);
    local_278 = *pauVar5;
    local_318._s_0.X = (dStack_128 - local_140._s_0.X) * __real_3fe0000000000000;
    local_318._s_0.Y = (dStack_120 - local_140._s_0.Y) * __real_3fe0000000000000;
    local_318._s_0.Z = (dStack_118 - local_140._s_0.Z) * __real_3fe0000000000000;
    DrawDebugBox((UWorld *)**(undefined8 **)((longlong)this + 0x28),
                 (TVector<double> *)&local_290._s_0,(TVector<double> *)&local_318._s_0,
                 (TQuat<double> *)local_278,(FColor *)&local_3ec[0]._s_0,false,__real_bf800000,0xff,
                 __real_41200000);
    if ((*(int *)(*(longlong *)((longlong)this + 0x38) + 8) !=
         *(int *)(*(longlong *)((longlong)this + 0x38) + 0x34)) &&
       (lVar19 = (**(code **)(plVar4[5] + 0x38))(plVar4 + 5), dVar32 = dStack_128,
       uVar15 = local_140._s_0.X, 0 < *(int *)(lVar19 + 8))) {
      adStack_160[0] = dStack_128;
      local_178._16_8_ = local_140._s_0.Z;
      local_148 = local_110;
      uStack_147 = uStack_10f;
      uStack_146 = uStack_10e;
      uStack_145 = uStack_10d;
      uStack_144 = uStack_10c;
      uStack_143 = uStack_10b;
      uStack_142 = uStack_10a;
      uStack_141 = uStack_109;
      local_178._0_8_ = local_140._s_0.X;
      local_178._8_8_ = local_140._s_0.Y;
      adStack_160[1] = dStack_120;
      adStack_160[2] = dStack_118;
      lVar19 = (**(code **)(plVar4[5] + 0x38))(plVar4 + 5);
      local_198 = (dVar32 - (double)uVar15) / (double)(*(int *)(lVar19 + 8) * 5);
      adStack_160[0] = local_198 + (double)local_178._0_8_;
      adStack_160[1] =
           (dStack_120 - local_140._s_0.Y) / (double)*(int *)(*(longlong *)((longlong)this + 8) + 8)
      ;
      dStack_190 = 0.0;
      local_178._8_8_ = (double)iVar27 * adStack_160[1] + local_140._s_0.Y;
      adStack_160[1] = (double)local_178._8_8_ + adStack_160[1];
      plVar20 = (longlong *)(**(code **)(plVar4[5] + 0x38))(plVar4 + 5);
      dVar9 = dStack_190;
      dVar32 = local_198;
      pFVar28 = (FName *)*plVar20;
      lVar19 = plVar20[1];
      pFVar1 = pFVar28 + (int)lVar19;
      while( true ) {
        if ((int)plVar20[1] != (int)lVar19) {
          local_3f6[0] = 0;
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_3f6);
        }
        dVar59 = __real_3fe0000000000000;
        if (pFVar28 == pFVar1) break;
        pFVar21 = TMapBase<FName,FColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FColor,0>_>
                  ::FindChecked(*(TMapBase<FName,FColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FColor,0>_>
                                  **)((longlong)this + 0x38),*pFVar28);
        DrawDebugSolidBox((UWorld *)**(undefined8 **)((longlong)this + 0x28),
                          (TBox<double> *)local_178,pFVar21,
                          *(TTransform<double> **)((longlong)this + 0x30),false,fVar77,0xff);
        if (local_148 == '\0') {
          local_3c0 = 0.0;
          dStack_3b8 = 0.0;
          local_3b0 = ZEXT816(0);
          local_390._0_1_ = '\0';
          local_390._1_1_ = '\0';
          local_390._2_1_ = '\0';
          local_390._3_1_ = '\0';
          local_390._4_1_ = '\0';
          local_390._5_1_ = '\0';
          local_390._6_1_ = '\0';
          local_390._7_1_ = '\0';
          local_3a0 = 0.0;
          dStack_398 = 0.0;
        }
        else {
          local_2d0 = 1;
          dVar60 = (adStack_160[2] + (double)local_178._16_8_) *
                   ___xmm_3fe00000000000003fe0000000000000;
          dVar59 = (adStack_160[0] - (double)local_178._0_8_) *
                   ___xmm_3fe00000000000003fe0000000000000;
          dVar61 = (adStack_160[1] - (double)local_178._8_8_) * _UNK_150689678;
          dVar68 = (adStack_160[0] + (double)local_178._0_8_) *
                   ___xmm_3fe00000000000003fe0000000000000;
          dVar73 = (adStack_160[1] + (double)local_178._8_8_) * _UNK_150689678;
          dVar8 = (adStack_160[2] - (double)local_178._16_8_) *
                  ___xmm_3fe00000000000003fe0000000000000;
          auVar42._8_4_ = SUB84(dVar60,0);
          auVar42._0_8_ = dVar60;
          auVar42._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
          auVar64._8_4_ = SUB84(dVar68,0);
          auVar64._0_8_ = dVar68;
          auVar64._12_4_ = (int)((ulonglong)dVar68 >> 0x20);
          auVar65._8_4_ = SUB84(dVar73,0);
          auVar65._0_8_ = dVar73;
          auVar65._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
          auVar43._8_4_ = SUB84(dVar8,0);
          auVar43._0_8_ = dVar8;
          auVar43._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
          auVar37._8_4_ = SUB84(dVar59,0);
          auVar37._0_8_ = dVar59;
          auVar37._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
          auVar53._8_4_ = SUB84(dVar61,0);
          auVar53._0_8_ = dVar61;
          auVar53._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
          dVar75 = auVar53._8_8_ * _UNK_15061cbc8;
          dVar74 = auVar37._8_8_ * _UNK_150689518;
          dVar69 = dVar73 * 0.0 + dVar68 * 0.0 + dVar60 * ___xmm_00000000000000003ff0000000000000 +
                   ___xmm_3ff00000000000000000000000000000;
          auVar54._0_8_ =
               (double)CONCAT44((uint)((ulonglong)(dVar61 * ___xmm_3ff00000000000000000000000000000)
                                      >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar61 * ___xmm_3ff00000000000000000000000000000,0) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          auVar54._8_4_ = SUB84(dVar75,0) & _UNK_15061cc88;
          auVar54._12_4_ = (uint)((ulonglong)dVar75 >> 0x20) & _UNK_15061cc8c;
          auVar38._0_8_ =
               (double)CONCAT44((uint)((ulonglong)(dVar59 * ___xmm_00000000000000003ff0000000000000)
                                      >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar59 * ___xmm_00000000000000003ff0000000000000,0) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          auVar38._8_4_ = SUB84(dVar74,0) & _UNK_15061cc88;
          auVar38._12_4_ = (uint)((ulonglong)dVar74 >> 0x20) & _UNK_15061cc8c;
          dVar74 = auVar43._8_8_ * 0.0;
          auVar44._0_8_ =
               (double)CONCAT44((uint)((ulonglong)(dVar8 * 0.0) >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar8 * 0.0,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
          ;
          auVar44._8_4_ = SUB84(dVar74,0) & _UNK_15061cc88;
          auVar44._12_4_ = (uint)((ulonglong)dVar74 >> 0x20) & _UNK_15061cc8c;
          dVar74 = auVar54._0_8_ + auVar38._0_8_ + auVar44._0_8_;
          local_3a0 = auVar54._8_8_ + auVar38._8_8_ + auVar44._8_8_;
          dVar75 = dVar73 * ___xmm_3ff00000000000000000000000000000 +
                   dVar68 * ___xmm_00000000000000003ff0000000000000 + dVar60 * 0.0 + dVar32;
          dVar60 = auVar65._8_8_ * _UNK_15061cbc8 + auVar64._8_8_ * _UNK_150689518 +
                   auVar42._8_8_ * 0.0 + dVar9;
          auVar45._8_4_ = SUB84(dVar60,0);
          auVar45._0_8_ = dVar75;
          auVar45._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
          local_3c0 = dVar75 - dVar74;
          dStack_3b8 = auVar45._8_8_ - local_3a0;
          dVar74 = dVar74 + dVar75;
          local_3a0 = local_3a0 + dVar60;
          auStack_2f0._8_4_ = SUB84(dVar74,0);
          auStack_2f0._12_4_ = (undefined4)((ulonglong)dVar74 >> 0x20);
          auVar10._4_8_ = local_3a0;
          auVar10._0_4_ = auStack_2f0._4_4_;
          auVar55._0_8_ = auVar10._0_8_ << 0x20;
          auVar55._8_4_ = auStack_2f0._8_4_;
          auVar55._12_4_ = auStack_2f0._12_4_;
          dVar8 = (double)CONCAT44((uint)((ulonglong)(dVar61 * 0.0) >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar61 * 0.0,0) &
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                  (double)CONCAT44((uint)((ulonglong)(dVar59 * 0.0) >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar59 * 0.0,0) &
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                  (double)CONCAT44((uint)((ulonglong)
                                          (dVar8 * ___xmm_00000000000000003ff0000000000000) >> 0x20)
                                   & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar8 * ___xmm_00000000000000003ff0000000000000,0) &
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          dStack_398 = dVar8 + dVar69;
          local_3b0._8_8_ = auVar55._8_8_;
          local_3b0._0_8_ = dVar69 - dVar8;
          local_390._1_1_ = auStack_2cf[0];
          local_390._2_1_ = auStack_2cf[1];
          local_390._3_1_ = auStack_2cf[2];
          local_390._4_1_ = auStack_2cf[3];
          local_390._5_1_ = auStack_2cf[4];
          local_390._6_1_ = auStack_2cf[5];
          local_390._7_1_ = auStack_2cf[6];
          local_390._0_1_ = '\x01';
          local_300 = local_3c0;
          dStack_2f8 = dStack_3b8;
          auStack_2f0 = local_3b0;
          dStack_2e0 = local_3a0;
          dStack_2d8 = dStack_398;
        }
        pFVar28 = pFVar28 + 1;
        local_178._0_8_ = local_3c0;
        local_178._8_8_ = dStack_3b8;
        unique0x1000196e = local_3b0;
        adStack_160[1] = local_3a0;
        adStack_160[2] = dStack_398;
        _local_148 = local_390;
      }
    }
    dVar32 = dVar59;
    if (((**(longlong **)((longlong)this + 0x40) != 0) &&
        (FWorldPartitionDebugHelper::bCanDrawContentBundles != false)) &&
       (piVar22 = (int *)(**(code **)(*plVar4 + 800))(plVar4),
       ((piVar22[3] != 0 || piVar22[2] != 0) || piVar22[1] != 0) || *piVar22 != 0)) {
      this_00 = (UContentBundleManager *)**(undefined8 **)((longlong)this + 0x40);
      pFVar23 = (FGuid *)(**(code **)(*plVar4 + 800))(plVar4);
      this_01 = UContentBundleManager::GetContentBundle
                          (this_00,(UWorld *)**(undefined8 **)((longlong)this + 0x28),pFVar23);
      if (this_01 != (FContentBundleBase *)0x0) {
        pUVar24 = FContentBundleBase::GetDescriptor(this_01);
        if ((pUVar24 == (UContentBundleDescriptor *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("ContentBundle->GetDescriptor()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
                                ,0x38d,L""), bVar16)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_d8 = (uchar)_local_110;
        dVar32 = dStack_128 - (dStack_128 - local_140._s_0.X) * __real_3fc999999999999a;
        if (local_d8 == '\0') {
          local_388 = 0.0;
          dStack_380 = 0.0;
          local_378 = ZEXT816(0);
          local_358._0_1_ = '\0';
          local_358._1_1_ = '\0';
          local_358._2_1_ = '\0';
          local_358._3_1_ = '\0';
          local_358._4_1_ = '\0';
          local_358._5_1_ = '\0';
          local_358._6_1_ = '\0';
          local_358._7_1_ = '\0';
          local_368 = 0.0;
          dStack_360 = 0.0;
        }
        else {
          local_298 = 1;
          dVar9 = (dStack_128 - dVar32) * ___xmm_3fe00000000000003fe0000000000000;
          dVar8 = (dStack_120 - local_140._s_0.Y) * _UNK_150689678;
          dVar60 = (dStack_128 + dVar32) * ___xmm_3fe00000000000003fe0000000000000;
          dVar68 = (dStack_120 + local_140._s_0.Y) * _UNK_150689678;
          dVar61 = (dStack_118 + local_140._s_0.Z) * ___xmm_3fe00000000000003fe0000000000000;
          auVar39._8_4_ = SUB84(dVar60,0);
          auVar39._0_8_ = dVar60;
          auVar39._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
          auVar46._8_4_ = SUB84(dVar61,0);
          auVar46._0_8_ = dVar61;
          auVar46._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
          auVar66._8_4_ = SUB84(dVar68,0);
          auVar66._0_8_ = dVar68;
          auVar66._12_4_ = (int)((ulonglong)dVar68 >> 0x20);
          dVar32 = (dStack_118 - local_140._s_0.Z) * ___xmm_3fe00000000000003fe0000000000000;
          auVar40._8_4_ = SUB84(dVar9,0);
          auVar40._0_8_ = dVar9;
          auVar40._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          auVar56._8_4_ = SUB84(dVar8,0);
          auVar56._0_8_ = dVar8;
          auVar56._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
          dVar59 = auVar56._8_8_ * _UNK_15061cbc8;
          dVar74 = dVar68 * ___xmm_3ff00000000000000000000000000000 +
                   dVar60 * ___xmm_00000000000000003ff0000000000000 + dVar61 * 0.0;
          dVar75 = auVar66._8_8_ * _UNK_15061cbc8 + auVar39._8_8_ * _UNK_150689518 +
                   auVar46._8_8_ * 0.0;
          auVar57._0_8_ =
               (double)CONCAT44((uint)((ulonglong)(dVar8 * ___xmm_3ff00000000000000000000000000000)
                                      >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar8 * ___xmm_3ff00000000000000000000000000000,0) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          auVar57._8_4_ = SUB84(dVar59,0) & _UNK_15061cc88;
          auVar57._12_4_ = (uint)((ulonglong)dVar59 >> 0x20) & _UNK_15061cc8c;
          auVar47._8_4_ = SUB84(dVar32,0);
          auVar47._0_8_ = dVar32;
          auVar47._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
          dVar59 = auVar40._8_8_ * _UNK_150689518;
          auVar41._0_8_ =
               (double)CONCAT44((uint)((ulonglong)(dVar9 * ___xmm_00000000000000003ff0000000000000)
                                      >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar9 * ___xmm_00000000000000003ff0000000000000,0) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          auVar41._8_4_ = SUB84(dVar59,0) & _UNK_15061cc88;
          auVar41._12_4_ = (uint)((ulonglong)dVar59 >> 0x20) & _UNK_15061cc8c;
          dVar59 = auVar47._8_8_ * 0.0;
          auVar48._0_8_ =
               (double)CONCAT44((uint)((ulonglong)(dVar32 * 0.0) >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar32 * 0.0,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                               );
          auVar48._8_4_ = SUB84(dVar59,0) & _UNK_15061cc88;
          auVar48._12_4_ = (uint)((ulonglong)dVar59 >> 0x20) & _UNK_15061cc8c;
          dVar59 = auVar57._0_8_ + auVar41._0_8_ + auVar48._0_8_;
          local_368 = auVar57._8_8_ + auVar41._8_8_ + auVar48._8_8_;
          dVar61 = dVar68 * 0.0 + dVar60 * 0.0 + dVar61 * ___xmm_00000000000000003ff0000000000000 +
                   ___xmm_3ff00000000000000000000000000000;
          auVar49._8_4_ = SUB84(dVar75,0);
          auVar49._0_8_ = dVar74;
          auVar49._12_4_ = (int)((ulonglong)dVar75 >> 0x20);
          local_388 = dVar74 - dVar59;
          dStack_380 = auVar49._8_8_ - local_368;
          dVar59 = dVar59 + dVar74;
          local_368 = local_368 + dVar75;
          auStack_2b8._8_4_ = SUB84(dVar59,0);
          auStack_2b8._12_4_ = (undefined4)((ulonglong)dVar59 >> 0x20);
          auVar11._4_8_ = local_368;
          auVar11._0_4_ = auStack_2b8._4_4_;
          auVar58._0_8_ = auVar11._0_8_ << 0x20;
          auVar58._8_4_ = auStack_2b8._8_4_;
          auVar58._12_4_ = auStack_2b8._12_4_;
          dVar32 = (double)CONCAT44((uint)((ulonglong)(dVar8 * 0.0) >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar8 * 0.0,0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                   (double)CONCAT44((uint)((ulonglong)(dVar9 * 0.0) >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar9 * 0.0,0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                   (double)CONCAT44((uint)((ulonglong)
                                           (dVar32 * ___xmm_00000000000000003ff0000000000000) >>
                                          0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar32 * ___xmm_00000000000000003ff0000000000000,0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          dStack_360 = dVar32 + dVar61;
          local_378._8_8_ = auVar58._8_8_;
          local_378._0_8_ = dVar61 - dVar32;
          local_358._1_1_ = auStack_297[0];
          local_358._2_1_ = auStack_297[1];
          local_358._3_1_ = auStack_297[2];
          local_358._4_1_ = auStack_297[3];
          local_358._5_1_ = auStack_297[4];
          local_358._6_1_ = auStack_297[5];
          local_358._7_1_ = auStack_297[6];
          local_358._0_1_ = '\x01';
          local_2c8 = local_388;
          dStack_2c0 = dStack_380;
          auStack_2b8 = local_378;
          dStack_2a8 = local_368;
          dStack_2a0 = dStack_360;
        }
        pTVar6 = *(TTransform<double> **)((longlong)this + 0x30);
        dStack_e0 = dStack_360;
        local_e8 = local_368;
        local_108._0_8_ = local_388;
        local_108._8_8_ = dStack_380;
        local_108._16_16_ = local_378;
        _local_d8 = local_358;
        pUVar24 = FContentBundleBase::GetDescriptor(this_01);
        DrawDebugSolidBox((UWorld *)**(undefined8 **)((longlong)this + 0x28),
                          (TBox<double> *)local_108,&pUVar24->DebugColor,pTVar6,false,fVar77,0xff);
        dVar32 = __real_3fe0000000000000;
      }
    }
    plVar30 = plVar30 + 1;
    uVar26 = (ulonglong)local_3e4;
    iVar27 = local_3f0;
  }
  pFVar25 = GetTypeName<UWorldPartitionRuntimeCellDataSpatialHash>(&local_230);
  if ((pFVar25->Data).ArrayNum == 0) {
    pwVar29 = L"";
  }
  else {
    pwVar29 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
  }
  pFVar25 = GetFullNameForCastLogError<UWorldPartitionRuntimeCellData>
                      (&local_220,(UWorldPartitionRuntimeCellData *)plVar4[0x15]);
  if ((pFVar25->Data).ArrayNum != 0) {
    pwVar31 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar31,pwVar29);
}

// operator() @ 148abc760

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
`FSpatialHashStreamingGrid::Draw2D'::__l4::<lambda_2>::operator()
          (void *this,TIntVector2<__int64> *param_1)

{
  uint uVar1;
  int iVar2;
  ForAnyElementType *pFVar3;
  FWorldPartitionDraw2DContext *pFVar4;
  undefined8 *puVar5;
  TBox2<double> *pTVar6;
  UContentBundleManager *this_00;
  <lambda_1> <Var7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  FName *pFVar18;
  bool bVar19;
  uint uVar20;
  undefined8 *puVar21;
  longlong lVar22;
  longlong *plVar23;
  FColor *pFVar24;
  int *piVar25;
  FGuid *pFVar26;
  FContentBundleBase *this_01;
  UContentBundleDescriptor *pUVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong *plVar30;
  FName *pFVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_328 [8];
  undefined1 local_320 [8];
  undefined1 local_318 [8];
  undefined1 local_310 [8];
  undefined1 local_308 [8];
  undefined1 local_300 [8];
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  uint local_2d8;
  longlong *local_2d0;
  FLinearColor_u_0 local_2c8;
  FLinearColor_u_0 local_2b8;
  TVector2<double>_u_0 local_2a8;
  double local_298;
  double local_290;
  FName *local_280;
  longlong *local_278;
  longlong *local_270;
  longlong *local_268;
  FSpatialHashStreamingGrid *local_260;
  undefined8 local_258;
  code *local_250;
  FSpatialHashStreamingGrid **local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  FLinearColor_u_0 local_220;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1d8 [2];
  TVector2<double>_u_0 local_1c8;
  TVector2<double>_u_0 local_1b8;
  double local_1a8;
  double local_1a0;
  TIntVector3<__int64>_u_0 local_198;
  TVector2<double> local_180;
  TVector2<double> local_170;
  TVector2<double> local_160;
  TVector2<double> local_150;
  TVector2<double> local_140;
  TVector2<double> local_130;
  TVector2<double> local_120;
  TVector2<double> local_110;
  undefined1 local_100 [192];
  
  lVar22 = *(longlong *)((longlong)this + 8);
  local_198._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_198._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  uVar1 = **(uint **)this;
  lVar29 = (longlong)(int)uVar1;
  uVar20 = 0;
  if ((int)uVar1 < *(int *)(lVar22 + 0x60)) {
    uVar20 = ~uVar1 >> 0x1f;
  }
  local_198._s_0.Z = lVar29;
  if ((uVar20 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FSquare2DGridHelper::FGrid2D::GetCellBounds
            ((FGrid2D *)(lVar29 * 0x88 + *(longlong *)(lVar22 + 0x58)),param_1,
             (TBox2<double> *)&local_2a8._s_0,true);
  pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
  iVar2 = *(int *)((longlong)&pFVar3[1].Data + 4);
  *(undefined4 *)&pFVar3[1].Data = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,pFVar3,0,(int *)((longlong)&pFVar3[1].Data + 4));
  }
  local_258 = *(undefined8 *)((longlong)this + 0x10);
  local_260 = *(FSpatialHashStreamingGrid **)((longlong)this + 0x18);
  local_248 = &local_260;
  local_250 = UE::Core::Private::Function::
              TFunctionRefCaller<``FSpatialHashStreamingGrid::Draw2D'::__l4::<lambda_2>::operator()'::__l2::<lambda_1>,void,FSpatialHashStreamingGridLayerCell_const_*>
              ::Call;
  FSpatialHashStreamingGrid::ForEachLayerCell
            (local_260,(TIntVector3<__int64> *)&local_198._s_0,
             (TFunctionRef<void___cdecl(FSpatialHashStreamingGridLayerCell_const_*)> *)&local_250);
  uVar17 = __real_3f400000;
  uVar16 = __real_3e800000;
  fVar15 = __real_3b808081;
  local_270 = *(longlong **)((longlong)this + 0x10);
  local_2d8 = *(uint *)(local_270 + 1);
  uVar28 = (ulonglong)(int)local_2d8;
  if (local_2d8 != 0) {
    plVar23 = (longlong *)*local_270;
    local_268 = plVar23 + uVar28;
    dVar10 = local_298 - local_2a8._s_0.X;
    uVar32 = (undefined4)__real_3fc999999999999a;
    uVar33 = (undefined4)((ulonglong)__real_3fc999999999999a >> 0x20);
    dVar13 = 0.0;
    dVar11 = (local_290 - local_2a8._s_0.Y) / (double)(int)local_2d8;
    while( true ) {
      plVar30 = local_268;
      local_2d0 = plVar23;
      if ((int)local_270[1] != (int)uVar28) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UWorldPartitionRuntimeCell_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (plVar23 == plVar30) break;
      plVar30 = (longlong *)*plVar23;
      local_2f0 = local_2a8._s_0.Y + dVar13;
      pFVar4 = *(FWorldPartitionDraw2DContext **)((longlong)this + 0x20);
      local_2f8 = local_2a8._s_0.X;
      puVar5 = (undefined8 *)**(longlong **)((longlong)this + 0x38);
      local_278 = plVar30;
      puVar21 = (undefined8 *)
                (**(code **)(*plVar30 + 0x2e8))
                          (plVar30,local_100,**(undefined4 **)((longlong)this + 0x30));
      local_220._s_0.A = (float)uVar16;
      if (**(int **)((longlong)this + 0x30) == 0) {
        local_220._s_0.A = (float)uVar17;
      }
      local_220._0_8_ = *puVar21;
      pTVar6 = *(TBox2<double> **)((longlong)this + 0x28);
      local_res10[0] = 1;
      local_220._s_0.B = (float)puVar21[1];
      (*(code *)*puVar5)(&local_150,puVar5[1],&local_2f8,local_res10);
      local_240 = local_2f8 + dVar10;
      local_res18[0] = 1;
      local_238 = local_2f0;
      (*(code *)*puVar5)(&local_160,puVar5[1],&local_240,local_res18);
      local_1a8 = local_2f8 + dVar10;
      local_1a0 = local_2f0 + dVar11;
      local_res20[0] = 1;
      (*(code *)*puVar5)(&local_170,puVar5[1],&local_1a8,local_res20);
      local_228 = local_2f0 + dVar11;
      local_230 = local_2f8;
      local_328[0] = 1;
      (*(code *)*puVar5)(&local_180,puVar5[1],&local_230,local_328);
      FWorldPartitionDraw2DContext::PushDrawTile
                (pFVar4,pTVar6,&local_150,&local_160,&local_170,&local_180,
                 (FLinearColor *)&local_220._s_0);
      dVar13 = dVar13 + dVar11;
      if (*(char *)(*(longlong *)((longlong)this + 0x20) + 2) != '\0') {
        if ((*(int *)(*(longlong *)((longlong)this + 0x40) + 8) !=
             *(int *)(*(longlong *)((longlong)this + 0x40) + 0x34)) &&
           (lVar22 = (**(code **)(plVar30[5] + 0x38))(plVar30 + 5), 0 < *(int *)(lVar22 + 8))) {
          dVar12 = 0.0;
          lVar22 = (**(code **)(plVar30[5] + 0x38))(plVar30 + 5);
          dVar9 = dVar10 / (double)(*(int *)(lVar22 + 8) * 5);
          plVar23 = (longlong *)(**(code **)(plVar30[5] + 0x38))(plVar30 + 5);
          pFVar31 = (FName *)*plVar23;
          lVar22 = plVar23[1];
          local_280 = pFVar31 + (int)lVar22;
          while( true ) {
            pFVar18 = local_280;
            if ((int)plVar23[1] != (int)lVar22) {
              local_320[0] = 0;
              `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_320);
            }
            if (pFVar31 == pFVar18) break;
            pFVar24 = TMapBase<FName,FColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FColor,0>_>
                      ::FindChecked(*(TMapBase<FName,FColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FColor,0>_>
                                      **)((longlong)this + 0x40),*pFVar31);
            pFVar4 = *(FWorldPartitionDraw2DContext **)((longlong)this + 0x20);
            pTVar6 = *(TBox2<double> **)((longlong)this + 0x28);
            local_318[0] = 1;
            puVar5 = (undefined8 *)**(longlong **)((longlong)this + 0x38);
            local_2c8._s_0.R = FLinearColor::sRGBToLinearTable[(pFVar24->field0_0x0)._s_0.R];
            local_2c8._s_0.G = FLinearColor::sRGBToLinearTable[(pFVar24->field0_0x0)._s_0.G];
            local_2c8._s_0.B = FLinearColor::sRGBToLinearTable[(pFVar24->field0_0x0)._s_0.B];
            local_2e8 = local_2f8 + dVar12;
            local_2e0 = local_2f0;
            local_2c8._s_0.A = (float)(pFVar24->field0_0x0)._s_0.A * fVar15;
            (*(code *)*puVar5)(&local_110,puVar5[1],&local_2e8,local_318);
            local_210 = local_2e8 + dVar9;
            local_310[0] = 1;
            local_208 = local_2e0;
            (*(code *)*puVar5)(&local_120,puVar5[1],&local_210,local_310);
            local_200 = local_2e8 + dVar9;
            local_1f8 = local_2e0 + dVar11;
            local_308[0] = 1;
            (*(code *)*puVar5)(&local_130,puVar5[1],&local_200,local_308);
            local_1e8 = local_2e0 + dVar11;
            local_1f0 = local_2e8;
            local_300[0] = 1;
            (*(code *)*puVar5)(&local_140,puVar5[1],&local_1f0,local_300);
            FWorldPartitionDraw2DContext::PushDrawTile
                      (pFVar4,pTVar6,&local_110,&local_120,&local_130,&local_140,
                       (FLinearColor *)&local_2c8._s_0);
            dVar12 = dVar12 + dVar9;
            pFVar31 = pFVar31 + 1;
          }
          uVar32 = (undefined4)__real_3fc999999999999a;
          uVar33 = (undefined4)((ulonglong)__real_3fc999999999999a >> 0x20);
          plVar30 = local_278;
          plVar23 = local_2d0;
        }
        if (((**(longlong **)((longlong)this + 0x48) != 0) &&
            (FWorldPartitionDebugHelper::bCanDrawContentBundles != false)) &&
           (piVar25 = (int *)(**(code **)(*plVar30 + 800))(plVar30),
           ((piVar25[3] != 0 || piVar25[2] != 0) || piVar25[1] != 0) || *piVar25 != 0)) {
          this_00 = (UContentBundleManager *)**(undefined8 **)((longlong)this + 0x48);
          pFVar26 = (FGuid *)(**(code **)(*plVar30 + 800))(plVar30);
          this_01 = UContentBundleManager::GetContentBundle
                              (this_00,(UWorld *)**(undefined8 **)((longlong)this + 0x50),pFVar26);
          if (this_01 != (FContentBundleBase *)0x0) {
            pUVar27 = FContentBundleBase::GetDescriptor(this_01);
            if ((pUVar27 == (UContentBundleDescriptor *)0x0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ContentBundle->GetDescriptor()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
                                    ,0x418,L""), bVar19)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar4 = *(FWorldPartitionDraw2DContext **)((longlong)this + 0x20);
            dVar9 = dVar10 * (double)CONCAT44(uVar33,uVar32);
            <Var7.InWorldToScreen =
                 (TFunctionRef<UE::Math::TVector2<double>___cdecl(UE::Math::TVector2<double>_const_&,bool)>
                  *)**(undefined8 **)((longlong)this + 0x38);
            auVar14._8_4_ = SUB84(dVar11,0);
            auVar14._0_8_ = dVar10;
            auVar14._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
            local_1d8[1] = auVar14._8_8_;
            local_1d8[0] = dVar9;
            pUVar27 = FContentBundleBase::GetDescriptor(this_01);
            local_2b8._s_0.R =
                 FLinearColor::sRGBToLinearTable[(pUVar27->DebugColor).field0_0x0._s_0.R];
            local_2b8._s_0.G =
                 FLinearColor::sRGBToLinearTable[(pUVar27->DebugColor).field0_0x0._s_0.G];
            local_2b8._s_0.B =
                 FLinearColor::sRGBToLinearTable[(pUVar27->DebugColor).field0_0x0._s_0.B];
            local_1c8._s_0.X = (dVar10 - dVar9) + local_2f8;
            local_2b8._s_0.A = (float)(pUVar27->DebugColor).field0_0x0._s_0.A * fVar15;
            local_1c8._s_0.Y = local_2f0;
            FWorldPartitionDraw2DContext::
            LocalDrawTile<_FSpatialHashStreamingGrid::Draw2D_::__l2::<lambda_1>_>
                      (pFVar4,*(TBox2<double> **)((longlong)this + 0x28),
                       (TVector2<double> *)&local_1c8._s_0,(TVector2<double> *)local_1d8,
                       (FLinearColor *)&local_2b8._s_0,<Var7);
          }
        }
      }
      uVar28 = (ulonglong)local_2d8;
      plVar23 = plVar23 + 1;
    }
    local_1b8._s_0.X = local_298 - local_2a8._s_0.X;
    local_1b8._s_0.Y = local_290 - local_2a8._s_0.Y;
    FWorldPartitionDraw2DContext::
    LocalDrawBox<_FSpatialHashStreamingGrid::Draw2D_::__l2::<lambda_1>_>
              (*(FWorldPartitionDraw2DContext **)((longlong)this + 0x20),
               *(TBox2<double> **)((longlong)this + 0x28),(TVector2<double> *)&local_2a8._s_0,
               (TVector2<double> *)&local_1b8._s_0,&FLinearColor::Black,__real_3f800000,
               (TFunctionRef<UE::Math::TVector2<double>___cdecl(UE::Math::TVector2<double>_const_&,bool)>
                *)**(longlong **)((longlong)this + 0x38));
  }
  return;
}

// operator() @ 148abcfa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FSpatialHashStreamingGrid::GetCells'::__l9::<lambda_2>::operator()
          (void *this,
          TMap<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,0>_>
          *param_1,TMap<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,0>_>
                   *param_2,
          TMap<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,0>_>
          *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  TMap<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  double *pdVar16;
  uint uVar17;
  longlong *plVar18;
  undefined1 *puVar19;
  uint *puVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  longlong local_1a0;
  undefined1 local_198;
  undefined1 local_197;
  undefined1 local_196 [2];
  int local_194;
  int local_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  int local_158;
  int local_154;
  TMap<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,0>_>
  *local_150;
  TMap<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,0>_>
  *local_148;
  TMap<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,0>_>
  *local_140;
  TMap<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,0>_>
  *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  code *local_108;
  int **local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  int *local_d0;
  TMap<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,0>_>
  *local_c8;
  TMap<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,0>_>
  *local_c0;
  longlong *local_b8;
  undefined1 *local_b0;
  undefined4 local_8c;
  TVector<double>_u_0 local_88;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  puVar1 = &param_2->field_0x10;
  local_198 = 0;
  iVar3 = *(int *)&param_2->field_0x28;
  local_188._8_4_ = 0;
  local_190 = *(int *)(*(longlong *)this + 0x60) + -1;
  local_168 = 0;
  local_188._12_4_ = 1;
  local_178._12_4_ = 0;
  if (iVar3 != 0) {
    puVar20 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar17 = *puVar20;
    while (uVar17 == 0) {
      lVar13 = (longlong)(int)local_188._8_4_;
      local_168 = local_168 + 0x20;
      local_188._8_4_ = local_188._8_4_ + 1;
      local_178._12_4_ = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_188._8_4_)
      goto LAB_148abd07e;
      uVar17 = puVar20[lVar13 + 1];
    }
    local_188._12_4_ = -uVar17 & uVar17;
    uVar2 = (ulonglong)(uint)local_188._12_4_ * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_158 = (int)lVar13;
    local_178._12_4_ = local_158 + -1 + local_168;
    if (iVar3 < (int)local_178._12_4_) {
      local_178._12_4_ = iVar3;
    }
  }
LAB_148abd07e:
  uVar17 = *(uint *)&param_2->field_0x28;
  uStack_164 = local_8c;
  uVar15 = uVar17 & 0xffffffe0;
  iStack_160 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  local_178._8_4_ = 0xffffffff;
  local_188._0_8_ = param_2;
  local_178._0_8_ = puVar1;
  auVar8 = local_178;
  TStack_130._padding_ = local_188._8_8_;
  iVar14 = (int)uVar17 >> 5;
  TStack_130._28_4_ = local_8c;
  TStack_130.BaseBitIndex = local_168;
  uStack_110 = CONCAT44(uStack_15c,iStack_160);
  TStack_130.UnvisitedBitMask = local_178._8_4_;
  TStack_130.CurrentBitIndex = local_178._12_4_;
  local_178 = auVar8;
  local_150 = param_1;
  local_148 = param_3;
  local_140 = param_2;
  local_138 = param_2;
  TStack_130.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar3 < (int)uVar17)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    uVar11 = (*pcVar5)();
    return (bool)uVar11;
  }
  dVar7 = __real_3fe0000000000000;
  uVar12 = *(uint *)&param_2->field_0x28;
  if (uVar17 != uVar12) {
    puVar19 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar14 * 4);
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      uVar17 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_148abd190;
      uVar17 = *(uint *)(puVar19 + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_154 = (int)lVar13;
    uVar17 = local_154 + -1 + uVar15;
    if ((int)uVar12 < (int)uVar17) {
      uVar17 = uVar12;
    }
  }
LAB_148abd190:
  do {
    pTVar9 = local_138;
    if (*(int *)&local_138->field_0x8 - *(int *)&local_138->field_0x34 != (int)uStack_110) {
      local_197 = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_197);
    }
    if (((TStack_130.CurrentBitIndex == uVar17) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == param_2)
       ) {
      return (bool)local_198;
    }
    plVar18 = (longlong *)((longlong)TStack_130.CurrentBitIndex * 0x30 + *(longlong *)pTVar9);
    uVar15 = *(uint *)(plVar18 + 2);
    local_194 = uVar15 + 1;
    if (local_194 < local_190) {
      lVar13 = *(longlong *)this;
      iVar3 = *(int *)(lVar13 + 0x60);
      uVar12 = 0;
      if ((int)uVar15 < iVar3) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (local_1a8 = (longlong)(int)uVar15, local_1a0 = (longlong)iVar3,
         bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      lVar4 = plVar18[1];
      pdVar16 = (double *)((longlong)(int)uVar15 * 0x88 + *(longlong *)(lVar13 + 0x58));
      lVar13 = *plVar18;
      if ((((-1 < lVar13) && (dVar23 = pdVar16[3], lVar13 < (longlong)dVar23)) && (-1 < lVar4)) &&
         (lVar4 < (longlong)dVar23)) {
        if (lVar4 * (longlong)dVar23 + lVar13 < 0) {
          local_196[0] = 0;
          bVar10 = `FSquare2DGridHelper::FGrid2D::IsValidCoords'::__l6::<lambda_1>::operator()
                             (local_196);
          if (!bVar10) goto LAB_148abd31d;
        }
        dVar23 = pdVar16[2];
        local_168 = CONCAT31(local_168._1_3_,1);
        dVar6 = (double)((longlong)dVar23 * (longlong)pdVar16[3]) * dVar7;
        dVar25 = (double)((longlong)dVar23 * lVar13) + (*pdVar16 - dVar6);
        dVar24 = (double)(lVar4 * (longlong)dVar23) + (pdVar16[1] - dVar6);
        dVar6 = dVar25 + (double)(longlong)dVar23;
        uVar21 = (undefined4)((ulonglong)dVar24 >> 0x20);
        dVar23 = dVar24 + (double)(longlong)dVar23;
        local_188._8_4_ = SUB84(dVar24,0);
        local_188._0_8_ = dVar25;
        local_188._12_4_ = uVar21;
        local_f8._8_4_ = SUB84(dVar24,0);
        local_f8._0_8_ = dVar25;
        local_f8._12_4_ = uVar21;
        local_d8 = CONCAT44(uStack_164,local_168);
        uVar21 = SUB84(dVar23,0);
        uVar22 = (undefined4)((ulonglong)dVar23 >> 0x20);
        local_178._8_4_ = uVar21;
        local_178._0_8_ = dVar6;
        local_178._12_4_ = uVar22;
        local_e8._8_4_ = uVar21;
        local_e8._0_8_ = dVar6;
        local_e8._12_4_ = uVar22;
      }
LAB_148abd31d:
      local_d0 = &local_194;
      local_c8 = local_150;
      local_c0 = local_148;
      local_b0 = &local_198;
      local_100 = &local_d0;
      local_88._s_0.X = (double)local_f8._0_8_;
      local_88._s_0.Y = (double)local_f8._8_8_;
      local_108 = UE::Core::Private::Function::
                  TFunctionRefCaller<``FSpatialHashStreamingGrid::GetCells'::__l9::<lambda_2>::operator()'::__l9::<lambda_1>,void,UE::Math::TIntVector3<__int64>_const_&>
                  ::Call;
      local_88._s_0.Z = 0.0;
      local_60 = 0;
      local_70 = local_e8._0_8_;
      uStack_68 = local_e8._8_8_;
      local_58 = 1;
      local_b8 = plVar18;
      FSquare2DGridHelper::ForEachIntersectingCells
                (*(FSquare2DGridHelper **)this,(TBox<double> *)&local_88._s_0,
                 (TFunctionRef<void___cdecl(UE::Math::TIntVector3<__int64>_const_&)> *)&local_108,
                 local_194);
      param_2 = local_140;
    }
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  } while( true );
}

// operator() @ 148abd560

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
FSpatialHashStreamingGrid::<lambda_30>::operator()
          (<lambda_30> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  UWorld *this_00;
  bool bVar3;
  UWorldPartitionSubsystem *pUVar4;
  ForAnyElementType FVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  undefined1 local_res10 [8];
  float local_res18 [2];
  int local_res20 [2];
  FString local_78;
  FScriptContainerElement *local_68;
  int *piStack_60;
  int local_58;
  undefined4 uStack_54;
  FScriptContainerElement *local_50;
  int *piStack_48;
  undefined8 local_40;
  
  iVar2 = param_1->ArrayNum;
  pFVar6 = (param_1->AllocatorInstance).Data;
  pFVar7 = pFVar6 + (longlong)iVar2 * 0x10;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  bVar3 = true;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar6 == pFVar7) break;
    if (bVar3) {
      bVar3 = false;
    }
    else {
      ::FString::AppendChars(&local_78,L" ",1);
    }
    iVar8 = *(int *)(pFVar6 + 8) + -1;
    if (*(int *)(pFVar6 + 8) == 0) {
      iVar8 = 0;
    }
    ::FString::AppendChars(&local_78,*(wchar_t **)pFVar6,iVar8);
    pFVar6 = pFVar6 + 0x10;
  }
  local_res20[0] = 0;
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar5.Data = local_78.Data.AllocatorInstance.Data;
  }
  local_res18[0] = -1.0;
  FParse::Value((wchar_t *)FVar5.Data,L"grid=",local_res20);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar5.Data = local_78.Data.AllocatorInstance.Data;
  }
  FParse::Value((wchar_t *)FVar5.Data,L"range=",local_res18);
  if (bAddedWorldPartitionSubsystemDeinitializedCallback == false) {
    bAddedWorldPartitionSubsystemDeinitializedCallback = true;
    TMulticastDelegateRegistration<void___cdecl(UWorldPartitionSubsystem_*,UWorld_*),FDefaultDelegateUserPolicy>
    ::AddLambda<_FSpatialHashStreamingGrid::<lambda_30>::operator()_::__l5::<lambda_1>_>
              ((TMulticastDelegateRegistration<void___cdecl(UWorldPartitionSubsystem_*,UWorld_*),FDefaultDelegateUserPolicy>
                *)&UWorldPartitionSubsystem::OnWorldPartitionSubsystemDeinitialized,
               (<lambda_1> *)local_res10);
  }
  pFVar7 = (GEngine->WorldList).Array.AllocatorInstance.Data;
  piVar1 = &(GEngine->WorldList).Array.ArrayNum;
  iVar2 = *piVar1;
  pFVar6 = pFVar7 + (longlong)iVar2 * 8;
  local_40 = CONCAT44(uStack_54,iVar2);
  local_68 = pFVar7;
  piStack_60 = piVar1;
  local_58 = iVar2;
  local_50 = pFVar7;
  piStack_48 = piVar1;
  do {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar7 == pFVar6) goto LAB_148abd742;
    this_00 = *(UWorld **)(*(longlong *)pFVar7 + 0x2c0);
    if (this_00 != (UWorld *)0x0) {
      bVar3 = UWorld::IsGameWorld(this_00);
      if (bVar3) {
        FWorldPartitionHelpers::ServerExecConsoleCommand
                  (this_00,&GOverrideRuntimeSpatialHashLoadingRangeName,param_1);
        pUVar4 = UWorld::GetSubsystem<UWorldPartitionSubsystem>(this_00);
        if (pUVar4 != (UWorldPartitionSubsystem *)0x0) {
          if (local_res18[0] < 0.0) {
            TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
            Remove((TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
                    *)&OverriddenLoadingRanges,local_res20[0]);
          }
          else {
            local_68 = (FScriptContainerElement *)local_res20;
            piStack_60 = (int *)local_res18;
            TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,float_const_&>_>
                      ((TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
                        *)&OverriddenLoadingRanges,
                       (TPairInitializer<int_const_&,float_const_&> *)local_res10,(bool *)&local_68)
            ;
          }
LAB_148abd742:
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          return;
        }
      }
    }
    pFVar7 = pFVar7 + 8;
  } while( true );
}

// operator() @ 148abd770

void __thiscall
`FSpatialHashStreamingGrid::GetCells'::__l2::<lambda_3>::operator()
          (void *this,FSpatialHashStreamingGridLevel *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  longlong *plVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  longlong local_res10;
  uint local_res18;
  UWorldPartitionRuntimeCell *local_res20;
  
  local_res18 = (param_1->LayerCells).ArrayNum;
  uVar5 = (ulonglong)(int)local_res18;
  pFVar8 = (param_1->LayerCells).AllocatorInstance.Data;
  pFVar11 = pFVar8 + uVar5 * 0x10;
LAB_148abd7a0:
  if ((param_1->LayerCells).ArrayNum != (int)uVar5) {
    `TCheckedPointerIterator<FSpatialHashStreamingGridLayerCell_const_,int,0>::operator!='::__l2::
    <lambda_1>::operator()(&local_res10);
  }
  if (pFVar8 == pFVar11) {
    return;
  }
  plVar9 = *(longlong **)pFVar8;
  iVar2 = *(int *)(pFVar8 + 8);
  plVar1 = plVar9 + iVar2;
LAB_148abd7c4:
  do {
    if (*(int *)(pFVar8 + 8) != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UWorldPartitionRuntimeCell>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_res10);
    }
    if (plVar9 == plVar1) break;
    local_res10 = *plVar9;
    lVar3 = *(longlong *)this;
    if (*(int *)(local_res10 + 0x50) == 0) {
      if (*(char *)(lVar3 + 0x30) == '\0') {
LAB_148abd856:
        TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
        ::Emplace<UWorldPartitionRuntimeCell_const_*_const_&>
                  (*(TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
                     **)((longlong)this + 8),&local_res20,(bool *)&local_res10);
      }
    }
    else {
      plVar6 = (longlong *)
               (**(code **)(*(longlong *)(local_res10 + 0x28) + 0x38))(local_res10 + 0x28);
      plVar10 = (longlong *)*plVar6;
      plVar6 = plVar10 + (int)plVar6[1];
      if (plVar10 != plVar6) {
        plVar4 = *(longlong **)(lVar3 + 0x20);
        do {
          if (plVar4 != plVar4 + *(int *)(lVar3 + 0x28)) {
            plVar7 = plVar4;
            do {
              if (*plVar7 == *plVar10) goto LAB_148abd856;
              plVar7 = plVar7 + 1;
            } while (plVar7 != plVar4 + *(int *)(lVar3 + 0x28));
          }
          plVar10 = plVar10 + 1;
        } while (plVar10 != plVar6);
        plVar9 = plVar9 + 1;
        goto LAB_148abd7c4;
      }
    }
    plVar9 = plVar9 + 1;
  } while( true );
  uVar5 = (ulonglong)local_res18;
  pFVar8 = pFVar8 + 0x10;
  goto LAB_148abd7a0;
}

// operator() @ 148abd940

void __thiscall
`FSpatialHashStreamingGrid::GetCells'::__l25::<lambda_3>::operator()
          (void *this,UWorldPartitionRuntimeCell *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  UWorldPartitionRuntimeCellData *pUVar4;
  TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
  *this_00;
  code *pcVar5;
  EDataLayerRuntimeState EVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [16];
  UWorldPartitionRuntimeCell *local_res18;
  UWorldPartitionRuntimeCell *local_res20;
  
  EVar6 = UWorldPartitionRuntimeCell::GetCellEffectiveWantedState
                    (param_1,*(FWorldPartitionStreamingContext **)this);
  if ((EVar6 != Unloaded) && (EVar6 != Loaded)) {
    if (EVar6 == Activated) {
      lVar3 = *(longlong *)((longlong)this + 8);
      iVar2 = *(int *)(lVar3 + 0x20);
      puVar8 = *(undefined8 **)(lVar3 + 0x18);
      puVar1 = puVar8 + (longlong)iVar2 * 9;
      while( true ) {
        if (*(int *)(lVar3 + 0x20) != iVar2) {
          `TCheckedPointerIterator<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (puVar8 == puVar1) break;
        pUVar4 = (param_1->RuntimeCellData).field0_0x0.DebugPtr;
        this_00 = *(TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
                    **)((longlong)this + 0x10);
        local_res20 = param_1;
        (**(code **)(pUVar4->_padding_ + 0x2c8))
                  (pUVar4,*puVar8,puVar8 + 1,*(undefined8 *)this,param_1->bBlockOnSlowLoading);
        TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
        ::Emplace<UWorldPartitionRuntimeCell_const_*_const_&>
                  (this_00,&local_res18,(bool *)&local_res20);
        puVar8 = puVar8 + 9;
      }
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
                         ,0x20d,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  return;
}

// Draw2D @ 148ac4b50

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

void __thiscall
FSpatialHashStreamingGrid::Draw2D
          (FSpatialHashStreamingGrid *this,UWorldPartitionRuntimeSpatialHash *param_1,
          TBox2<double> *param_2,TBox2<double> *param_3,
          TFunctionRef<UE::Math::TVector2<double>___cdecl(UE::Math::TVector2<double>_const_&,bool)>
          *param_4,FWorldPartitionDraw2DContext *param_5)

{
  FLinearColor *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  longlong lVar9;
  code *pcVar10;
  longlong lVar11;
  TBox2<double> *pTVar12;
  undefined8 uVar13;
  bool bVar14;
  UDataLayerManager *this_00;
  FSquare2DGridHelper *pFVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  FString *pFVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  undefined8 uVar22;
  wchar_t *pwVar23;
  int iVar24;
  longlong lVar25;
  UWorldPartition *this_01;
  longlong lVar26;
  FName *pFVar27;
  longlong lVar28;
  FName *pFVar29;
  FGrid2D *this_02;
  bool bVar30;
  float fVar31;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar32;
  undefined1 auStackY_3d8 [32];
  undefined1 local_387 [7];
  undefined1 local_380 [8];
  undefined1 local_378 [8];
  undefined1 local_370 [8];
  undefined1 local_368 [8];
  undefined1 local_360;
  undefined1 local_35f;
  undefined1 local_35e;
  undefined1 local_35d;
  uint local_35c;
  <lambda_1> local_358;
  undefined1 local_350 [4];
  int local_34c;
  uint local_348 [2];
  TBox2<double> *local_340;
  FSpatialHashStreamingGrid *local_338;
  FWorldPartitionDraw2DContext *local_330;
  TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *local_328;
  TIntVector2<__int64>_u_0 local_320;
  TIntVector2<__int64>_u_0 local_310;
  void *local_300;
  undefined8 local_2f8;
  TObjectPtr<UContentBundleManager>_u_0 local_2f0;
  longlong local_2e8;
  FName local_2e0;
  LARGE_INTEGER local_2d8;
  UWorld *local_2d0;
  TSparseArray<TSparseSetElement<TTuple<FName,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_2c8;
  TVector2<double>_u_0 local_2c0;
  TVector2<double>_u_0 local_2b0;
  TVector2<double>_u_0 local_2a0;
  double local_290;
  double local_288;
  undefined1 local_280;
  code *local_278;
  TSparseArray<TSparseSetElement<TTuple<FName,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  **local_270;
  TIntVector2<__int64>_u_0 local_268;
  TVector2<double>_u_0 local_258;
  TVector2<double>_u_0 local_248;
  code *local_238;
  undefined1 **local_230;
  TVector2<double>_u_0 local_228;
  TVector2<double>_u_0 local_218;
  undefined1 local_208;
  undefined1 *local_200;
  <lambda_1> *local_1f8;
  TBox2<double> *local_1f0;
  FWorldPartitionDraw2DContext *local_1e8;
  FSpatialHashStreamingGrid *local_1e0;
  uint *local_1d8;
  FSquare2DGridHelper *local_1d0;
  void **local_1c8;
  FSpatialHashStreamingGrid *local_1c0;
  FWorldPartitionDraw2DContext *local_1b8;
  TBox2<double> *local_1b0;
  uint *local_1a8;
  <lambda_1> *local_1a0;
  TSparseArray<TSparseSetElement<TTuple<FName,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_198;
  TObjectPtr<UContentBundleManager>_u_0 *local_190;
  UWorld **local_188;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  TVector2<double> local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  TVector2<double> local_120;
  TVector2<double> local_110;
  TVector2<double> local_100;
  FString local_f0;
  TSparseArray<TSparseSetElement<TTuple<FName,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_d8;
  void *local_98;
  undefined4 local_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  local_330 = param_5;
  bVar30 = -1 < CpuChannel->Enabled;
  local_340 = param_3;
  local_338 = this;
  if (bVar30) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId976,"FSpatialHashStreamingGrid::Draw2D",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
               ,0x3d0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId976);
  }
  this_01 = (UWorldPartition *)0x0;
  if ((param_1->_padding_ & 0x10) == 0) {
    this_01 = (UWorldPartition *)param_1->_padding_;
  }
  else {
    bVar14 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<1240560329461596353>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionRuntimeHash.h"
                        ,0xc1,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar14) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  local_328 = UWorldPartition::GetStreamingSources(this_01);
  dVar2 = (param_2->Min).field0_0x0._s_0.X;
  dVar3 = (param_2->Min).field0_0x0._s_0.Y;
  dVar4 = (param_2->Max).field0_0x0._s_0.X;
  dVar5 = (param_2->Max).field0_0x0._s_0.Y;
  local_2d0 = UWorldPartition::GetWorld(this_01);
  local_348[0] = (uint)(FWorldPartitionDebugHelper::ShowRuntimeSpatialHashCellStreamingPriorityMode
                       == 0);
  local_2f0 = (local_2d0->ContentBundleManager).field0_0x0;
  local_d8._0_8_ = 0;
  local_d8._8_8_ = 0;
  local_d8._32_8_ = 0;
  local_d8._40_4_ = 0;
  local_d8._44_4_ = 0x80;
  local_d8._48_4_ = 0xffffffff;
  local_d8._52_4_ = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  this_00 = UWorldPartition::GetDataLayerManager(this_01);
  if (this_00 != (UDataLayerManager *)0x0) {
    local_2c8 = &local_d8;
    local_270 = &local_2c8;
    local_278 = UE::Core::Private::Function::
                TFunctionRefCaller<`GetDataLayerDebugColors2'::__l5::<lambda_1>,bool,UDataLayerInstance_*>
                ::Call;
    UDataLayerManager::ForEachDataLayerInstance
              (this_00,(TFunctionRef<bool___cdecl(UDataLayerInstance_*)> *)&local_278);
  }
  iVar24 = (this->GridLevels).ArrayNum;
  local_300 = (void *)0x0;
  local_2f8 = 0;
  uVar20 = iVar24 - 1;
  uVar19 = uVar20;
  if (GShowRuntimeSpatialHashGridLevel < (int)uVar20) {
    uVar19 = GShowRuntimeSpatialHashGridLevel;
  }
  local_35c = 0;
  if (0 < (int)uVar19) {
    local_35c = uVar19;
  }
  if ((int)(GShowRuntimeSpatialHashGridLevelCount + local_35c + -1) < (int)uVar20) {
    iVar24 = GShowRuntimeSpatialHashGridLevelCount + local_35c;
  }
  local_34c = 0;
  if (0 < iVar24 + -1) {
    local_34c = iVar24 + -1;
  }
  local_358.InWorldToScreen = param_4;
  iVar24 = local_34c;
  if ((int)local_35c <= local_34c) {
    do {
      pFVar15 = GetGridHelper(this);
      lVar26 = (longlong)(int)local_35c;
      uVar20 = 0;
      if ((int)local_35c < (pFVar15->Levels).ArrayNum) {
        uVar20 = ~local_35c >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_1d8 = &local_35c;
      local_1c8 = &local_300;
      local_1a8 = local_348;
      local_1a0 = &local_358;
      local_198 = &local_d8;
      local_190 = &local_2f0;
      local_188 = &local_2d0;
      this_02 = (FGrid2D *)((pFVar15->Levels).AllocatorInstance.Data + lVar26 * 0x88);
      local_208 = 1;
      local_228._s_0.X = dVar2;
      local_228._s_0.Y = dVar3;
      local_218._s_0.X = dVar4;
      local_218._s_0.Y = dVar5;
      local_1d0 = pFVar15;
      local_1c0 = this;
      local_1b8 = param_5;
      local_1b0 = param_3;
      FSquare2DGridHelper::FGrid2D::GetCellCoords
                (this_02,(TVector2<double> *)&local_228._s_0,(TIntVector2<__int64> *)&local_310._s_0
                );
      uVar13 = local_310._s_0.Y;
      uVar17 = local_310._s_0.X;
      if ((((local_310._s_0.X < this_02->GridSize) && (local_310._s_0.Y < this_02->GridSize)) &&
          (FSquare2DGridHelper::FGrid2D::GetCellCoords
                     (this_02,(TVector2<double> *)&local_218._s_0,
                      (TIntVector2<__int64> *)&local_320._s_0), -1 < local_320._s_0.X)) &&
         (-1 < local_320._s_0.Y)) {
        uVar22 = this_02->GridSize + -1;
        uVar16 = uVar22;
        if ((longlong)uVar17 < (longlong)uVar22) {
          uVar16 = uVar17;
        }
        lVar26 = 0;
        if (0 < (longlong)uVar16) {
          lVar26 = uVar16;
        }
        uVar17 = uVar22;
        if ((longlong)uVar13 < (longlong)uVar22) {
          uVar17 = uVar13;
        }
        local_310._s_0.Y = 0;
        if (0 < (longlong)uVar17) {
          local_310._s_0.Y = uVar17;
        }
        uVar17 = uVar22;
        if (local_320._s_0.X < (longlong)uVar22) {
          uVar17 = local_320._s_0.X;
        }
        lVar28 = 0;
        if (0 < (longlong)uVar17) {
          lVar28 = uVar17;
        }
        if (local_320._s_0.Y < (longlong)uVar22) {
          uVar22 = local_320._s_0.Y;
        }
        local_320._s_0.Y = 0;
        if (0 < (longlong)uVar22) {
          local_320._8_8_ = uVar22;
        }
        this = local_338;
        param_5 = local_330;
        param_3 = local_340;
        local_320._s_0.X = lVar28;
        local_310._s_0.X = lVar26;
        local_2e8 = local_320._s_0.Y;
        if (local_310._s_0.Y <= local_320._s_0.Y) {
          lVar9 = local_320._s_0.Y;
          lVar11 = lVar26;
          lVar25 = local_310._s_0.Y;
          do {
            for (; local_340 = param_3, local_338 = this, local_330 = param_5, lVar11 <= lVar28;
                lVar11 = lVar11 + 1) {
              local_268._s_0.X = lVar11;
              local_268._s_0.Y = lVar25;
              if (((-1 < lVar11) && (lVar9 = this_02->GridSize, lVar11 < lVar9)) &&
                 ((-1 < lVar25 && (lVar25 < lVar9)))) {
                if (lVar9 * lVar25 + lVar11 < 0) {
                  local_387[0] = 0;
                  bVar14 = `FSquare2DGridHelper::FGrid2D::IsValidCoords'::__l6::<lambda_1>::
                           operator()(local_387);
                  if (!bVar14) goto LAB_148ac4f96;
                }
                UE::Core::Private::Function::
                TFunctionRefCaller<`FSpatialHashStreamingGrid::Draw2D'::__l4::<lambda_2>,void,UE::Math::TIntVector2<__int64>_const_&>
                ::Call(&local_1d8,(TIntVector2<__int64> *)&local_268._s_0);
              }
LAB_148ac4f96:
              lVar9 = local_2e8;
              param_3 = local_340;
              this = local_338;
              param_5 = local_330;
            }
            lVar25 = lVar25 + 1;
            iVar24 = local_34c;
            lVar11 = lVar26;
          } while (lVar25 <= lVar9);
        }
      }
      local_35c = local_35c + 1;
    } while ((int)local_35c <= iVar24);
  }
  if (param_5->bDrawGridAxis != false) {
    local_170 = ___xmm_00000000000000004139000000000000;
    uStack_168 = _UNK_151c37138;
    local_380[0] = 0;
    (**(code **)local_358.InWorldToScreen)
              (&local_150,*(undefined8 *)&(local_358.InWorldToScreen)->field_0x8,&local_170,
               local_380);
    local_160 = ___xmm_0000000000000000c139000000000000;
    uStack_158 = _UNK_151c37148;
    local_378[0] = 0;
    (**(code **)local_358.InWorldToScreen)
              (&local_100,*(undefined8 *)&(local_358.InWorldToScreen)->field_0x8,&local_160,
               local_378);
    fVar31 = __real_40400000;
    FWorldPartitionDraw2DContext::PushDrawSegment
              (param_5,param_3,&local_100,&local_150,&FLinearColor::Red,__real_40400000);
    local_140 = ___xmm_41390000000000000000000000000000;
    uStack_138 = _UNK_151c37158;
    local_370[0] = 0;
    (**(code **)local_358.InWorldToScreen)
              (&local_120,*(undefined8 *)&(local_358.InWorldToScreen)->field_0x8,&local_140,
               local_370);
    local_130 = ___xmm_c1390000000000000000000000000000;
    uStack_128 = _UNK_151c37168;
    local_368[0] = 0;
    (**(code **)local_358.InWorldToScreen)
              (&local_110,*(undefined8 *)&(local_358.InWorldToScreen)->field_0x8,&local_130,
               local_368);
    FWorldPartitionDraw2DContext::PushDrawSegment
              (param_5,param_3,&local_110,&local_120,&FLinearColor::Green,fVar31);
  }
  fVar31 = __real_3f800000;
  if (param_5->bDrawGridBounds != false) {
    pFVar1 = &this->DebugColor;
    local_2b0._s_0.X = (param_3->Min).field0_0x0._s_0.X;
    local_2c0._s_0.Y = (param_3->Min).field0_0x0._s_0.Y;
    local_2c0._s_0.X = (param_3->Max).field0_0x0._s_0.X;
    local_2b0._s_0.Y = (param_3->Max).field0_0x0._s_0.Y;
    local_2a0._s_0.X = local_2b0._s_0.X - __real_4024000000000000;
    local_290 = local_2c0._s_0.X + __real_4024000000000000;
    local_2a0._s_0.Y = local_2c0._s_0.Y - __real_4024000000000000;
    local_280 = 1;
    local_288 = local_2b0._s_0.Y + __real_4024000000000000;
    FWorldPartitionDraw2DContext::PushDrawSegment
              (param_5,(TBox2<double> *)&local_2a0._s_0,&param_3->Min,
               (TVector2<double> *)&local_2c0._s_0,pFVar1,__real_3f800000);
    FWorldPartitionDraw2DContext::PushDrawSegment
              (param_5,(TBox2<double> *)&local_2a0._s_0,(TVector2<double> *)&local_2c0._s_0,
               &param_3->Max,pFVar1,fVar31);
    FWorldPartitionDraw2DContext::PushDrawSegment
              (param_5,(TBox2<double> *)&local_2a0._s_0,&param_3->Max,
               (TVector2<double> *)&local_2b0._s_0,pFVar1,fVar31);
    FWorldPartitionDraw2DContext::PushDrawSegment
              (param_5,(TBox2<double> *)&local_2a0._s_0,&param_3->Min,
               (TVector2<double> *)&local_2b0._s_0,pFVar1,fVar31);
  }
  if (param_5->bIsDetailedMode != false) {
    local_248._s_0.X = (this->WorldBounds).Min.field0_0x0._s_0.X;
    local_248._s_0.Y = (this->WorldBounds).Min.field0_0x0._s_0.Y;
    local_258._s_0.X = (this->WorldBounds).Max.field0_0x0._s_0.X - local_248._s_0.X;
    local_258._s_0.Y = (this->WorldBounds).Max.field0_0x0._s_0.Y - local_248._s_0.Y;
    FWorldPartitionDraw2DContext::
    LocalDrawBox<_FSpatialHashStreamingGrid::Draw2D_::__l2::<lambda_1>_>
              (param_5,param_3,(TVector2<double> *)&local_248._s_0,
               (TVector2<double> *)&local_258._s_0,&FLinearColor::Yellow,fVar31,local_358);
  }
  fVar31 = GetLoadingRange(this);
  pTVar12 = local_340;
  iVar24 = local_328->ArrayNum;
  pFVar27 = (FName *)(local_328->AllocatorInstance).Data;
  pFVar29 = pFVar27 + (longlong)iVar24 * 0x2c;
  while( true ) {
    if (local_328->ArrayNum != iVar24) {
      `TCheckedPointerIterator<FWorldPartitionStreamingSource_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_350);
    }
    if (pFVar27 == pFVar29) break;
    uVar6 = (undefined1)pFVar27[0xb].Number;
    uVar7 = *(undefined1 *)((longlong)&pFVar27[0xb].Number + 1);
    uVar8 = *(undefined1 *)((longlong)&pFVar27[0xb].Number + 2);
    if (CONCAT31(CONCAT21(CONCAT11(uVar6,uVar7),uVar8),
                 *(undefined1 *)((longlong)&pFVar27[0xb].Number + 3)) == 0) {
      local_2e0 = *pFVar27;
      if (local_2e0 == (FName)0x0) {
        QueryPerformanceCounter(&local_2d8);
        fVar32 = extraout_XMM0_Da_01;
      }
      else {
        pFVar18 = ::FName::ToString(&local_2e0,&local_f0);
        iVar21 = (pFVar18->Data).ArrayNum;
        if (iVar21 == 0) {
          pwVar23 = L"";
          iVar21 = 0;
        }
        else {
          pwVar23 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
          iVar21 = iVar21 + -1;
        }
        FCrc::Strihash_DEPRECATED<wchar_t>(iVar21,pwVar23);
        fVar32 = extraout_XMM0_Da;
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
          fVar32 = extraout_XMM0_Da_00;
        }
      }
      FColor::MakeRedToGreenColorFromScalar(fVar32);
    }
    else {
      local_35d = 0xff;
      local_360 = uVar6;
      local_35f = uVar7;
      local_35e = uVar8;
    }
    local_200 = &local_360;
    local_1f8 = &local_358;
    local_1f0 = pTVar12;
    local_1e8 = param_5;
    local_1e0 = this;
    bVar14 = FStreamingSourceShapeHelper::IsSourceAffectingGrid
                       ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(pFVar27 + 0xd)
                        ,(EStreamingSourceTargetBehavior)pFVar27[0xc].ComparisonIndex.Value,
                        this->GridName);
    if (bVar14) {
      local_230 = &local_200;
      local_238 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FSpatialHashStreamingGrid::Draw2D'::__l17::<lambda_3>,void,FSphericalSector_const_&>
                  ::Call;
      FStreamingSourceShapeHelper::ForEachShape
                (fVar31,fVar31,true,(TVector<double> *)(pFVar27 + 1),
                 (TRotator<double> *)(pFVar27 + 4),
                 (TArray<FStreamingSourceShape,TSizedDefaultAllocator<32>_> *)(pFVar27 + 0x21),
                 (TFunctionRef<void___cdecl(FSphericalSector_const_&)> *)&local_238,
                 (float)pFVar27[0x2b].ComparisonIndex.Value,(float)pFVar27[0x2b].Number);
    }
    pFVar27 = pFVar27 + 0x2c;
  }
  if (local_300 != (void *)0x0) {
    FMemory::Free(local_300);
  }
  local_90 = 0;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_d8);
  if (bVar30) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Draw3D @ 148ac6840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FSpatialHashStreamingGrid::Draw3D
          (FSpatialHashStreamingGrid *this,UWorldPartitionRuntimeSpatialHash *param_1,
          TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *param_2,
          TTransform<double> *param_3)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  int iVar4;
  longlong lVar5;
  FName FVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  bool bVar15;
  uint uVar16;
  UDataLayerManager *this_00;
  undefined8 uVar17;
  undefined8 uVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_FSpatialHashStreamingGrid::Draw3D(UWorldPartitionRuntimeSpatialHash_const_*,TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TTransform<double>_const_&)const_::_12_::<lambda_3>::operator()(void)const_::_2_::FStat_DebugWorldPartitionTrace>
  FVar20;
  FCollisionQueryParams *pFVar21;
  FString *pFVar22;
  int iVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  wchar_t *pwVar26;
  uint uVar27;
  UWorldPartition *pUVar28;
  UWorldPartition *pUVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  FWorldPartitionStreamingSource *pFVar34;
  FSquare2DGridHelper *pFVar35;
  FWorldPartitionStreamingSource *this_01;
  FGrid2D *this_02;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar36;
  double dVar37;
  double dVar38;
  undefined1 auStackY_618 [32];
  undefined1 local_5b8;
  undefined1 local_5b7 [3];
  uchar local_5b4;
  uchar local_5b3;
  uchar local_5b2;
  undefined1 local_5b1;
  uint local_5b0;
  float local_5ac;
  uint local_5a8;
  uint local_5a4;
  uint local_5a0;
  uint local_59c;
  UWorld *local_598;
  FSquare2DGridHelper *local_590;
  FSpatialHashStreamingGrid *local_588;
  TTransform<double> *local_580;
  FCollisionObjectQueryParams local_578;
  double local_570;
  FWorldPartitionStreamingSource *local_568;
  TIntVector2<__int64>_u_0 local_560;
  TIntVector2<__int64>_u_0 local_550;
  void *local_540;
  undefined8 local_538;
  longlong local_530;
  TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *local_528;
  FWorldPartitionStreamingSource *local_520;
  TStatId local_518;
  FName local_510;
  LARGE_INTEGER local_508;
  TSparseArray<TSparseSetElement<TTuple<FName,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_500;
  undefined1 *local_4f8;
  TObjectPtr<UContentBundleManager>_u_0 local_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined4 uStack_4d0;
  undefined1 uStack_4cc;
  undefined2 uStack_4cb;
  undefined1 uStack_4c9;
  undefined1 local_4c8 [16];
  undefined1 local_4b8 [16];
  double local_4a8;
  double dStack_4a0;
  undefined1 local_498;
  undefined7 uStack_497;
  code *local_490;
  TSparseArray<TSparseSetElement<TTuple<FName,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  **local_488;
  code *local_480;
  undefined1 **local_478;
  TIntVector2<__int64>_u_0 local_470;
  code *local_460;
  uchar **local_458;
  TVector2<double>_u_0 local_450;
  TVector2<double>_u_0 local_440;
  undefined1 local_430;
  TVector<double>_u_0 local_428;
  TVector<double>_u_0 local_410;
  uint *local_3f8;
  void **local_3f0;
  FSpatialHashStreamingGrid *local_3e8;
  TSparseArray<TSparseSetElement<UWorldPartitionRuntimeCell_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_3e0;
  uint *local_3d8;
  UWorld **local_3d0;
  TTransform<double> *local_3c8;
  TSparseArray<TSparseSetElement<TTuple<FName,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_3c0;
  TObjectPtr<UContentBundleManager>_u_0 *local_3b8;
  uchar *local_3b0;
  double *local_3a8;
  TTransform<double> *local_3a0;
  UWorld **local_398;
  FSpatialHashStreamingGrid *local_390;
  FName local_388;
  FName local_380 [3];
  FString local_368;
  undefined1 local_358 [164];
  int local_2b4;
  FWeakObjectPtr local_2a0;
  FWeakObjectPtr FStack_298;
  IActorInstanceManagerInterface *local_290;
  undefined8 uStack_288;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  double local_238;
  double dStack_230;
  undefined8 local_228;
  TSparseArray<TSparseSetElement<TTuple<FName,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_218;
  void *local_1d8;
  undefined4 local_1d0;
  TSparseArray<TSparseSetElement<UWorldPartitionRuntimeCell_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_1c8;
  void *local_188;
  undefined4 local_180;
  FCollisionQueryParams local_178;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_618;
  pUVar28 = (UWorldPartition *)0x0;
  local_588 = this;
  local_580 = param_3;
  local_528 = param_2;
  if ((param_1->_padding_ & 0x10) == 0) {
    pUVar29 = (UWorldPartition *)param_1->_padding_;
  }
  else {
    bVar15 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<1240560329461596353>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionRuntimeHash.h"
                        ,0xc1,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    pUVar29 = pUVar28;
    if (bVar15) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_598 = UWorldPartition::GetWorld(pUVar29);
  local_5a4 = (uint)(FWorldPartitionDebugHelper::ShowRuntimeSpatialHashCellStreamingPriorityMode ==
                    0);
  local_4f0 = (local_598->ContentBundleManager).field0_0x0;
  local_218._0_8_ = 0;
  local_218._8_8_ = 0;
  local_218._32_8_ = 0;
  local_218._40_4_ = 0;
  local_218._44_4_ = 0x80;
  local_218._48_4_ = 0xffffffff;
  local_218._52_4_ = 0;
  local_1d8 = (void *)0x0;
  local_1d0 = 0;
  this_00 = UWorldPartition::GetDataLayerManager(pUVar29);
  if (this_00 != (UDataLayerManager *)0x0) {
    local_500 = &local_218;
    local_488 = &local_500;
    local_490 = UE::Core::Private::Function::
                TFunctionRefCaller<`GetDataLayerDebugColors2'::__l5::<lambda_1>,bool,UDataLayerInstance_*>
                ::Call;
    UDataLayerManager::ForEachDataLayerInstance
              (this_00,(TFunctionRef<bool___cdecl(UDataLayerInstance_*)> *)&local_490);
  }
  local_590 = GetGridHelper(this);
  iVar23 = (this->GridLevels).ArrayNum;
  uVar16 = iVar23 - 1;
  uVar27 = uVar16;
  if (GShowRuntimeSpatialHashGridLevel < (int)uVar16) {
    uVar27 = GShowRuntimeSpatialHashGridLevel;
  }
  pUVar29 = pUVar28;
  if (0 < (int)uVar27) {
    pUVar29 = (UWorldPartition *)(ulonglong)uVar27;
  }
  local_5a0 = (uint)pUVar29;
  if ((int)(GShowRuntimeSpatialHashGridLevelCount + local_5a0 + -1) < (int)uVar16) {
    iVar23 = GShowRuntimeSpatialHashGridLevelCount + local_5a0;
  }
  if (0 < (int)(iVar23 - 1U)) {
    pUVar28 = (UWorldPartition *)(ulonglong)(iVar23 - 1U);
  }
  local_5a8 = (uint)pUVar28;
  local_5ac = GetLoadingRange(this);
  dVar13 = __real_412e848000000000;
  dVar12 = __real_4059000000000000;
  local_59c = param_2->ArrayNum;
  uVar24 = (ulonglong)(int)local_59c;
  this_01 = (FWorldPartitionStreamingSource *)(param_2->AllocatorInstance).Data;
  local_540 = (void *)0x0;
  local_538 = 0;
  local_1c8._0_8_ = 0;
  local_1c8._8_8_ = 0;
  local_1c8._32_8_ = 0;
  local_1c8._40_4_ = 0;
  local_1c8._52_4_ = 0;
  local_188 = (void *)0x0;
  local_180 = 0;
  local_1c8._44_4_ = 0x80;
  local_1c8._48_4_ = 0xffffffff;
  dVar10 = (double)((float)this->CellSize * __real_40a00000);
  pFVar34 = this_01 + uVar24;
  local_520 = pFVar34;
  do {
    dVar9 = __real_3fe0000000000000;
    local_568 = this_01;
    if (param_2->ArrayNum != (int)uVar24) {
      local_5b8 = 0;
      `TCheckedPointerIterator<FWorldPartitionStreamingSource_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_5b8);
    }
    if (this_01 == pFVar34) {
      local_180 = 0;
      if (local_188 != (void *)0x0) {
        FMemory::Free(local_188);
      }
      TSparseArray<TSparseSetElement<UWorldPartitionRuntimeCell_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UWorldPartitionRuntimeCell_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_1c8);
      if (local_540 != (void *)0x0) {
        FMemory::Free(local_540);
      }
      local_1d0 = 0;
      if (local_1d8 != (void *)0x0) {
        FMemory::Free(local_1d8);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_218);
      return;
    }
    local_4f8 = local_258;
    local_228 = 0;
    local_478 = &local_4f8;
    local_480 = UE::Core::Private::Function::
                TFunctionRefCaller<`FWorldPartitionStreamingSource::CalcBounds'::__l2::<lambda_1>,void,FSphericalSector_const_&>
                ::Call;
    local_248 = ZEXT816(0);
    local_258 = ZEXT816(0);
    local_238 = 0.0;
    dStack_230 = 0.0;
    FWorldPartitionStreamingSource::ForEachShape
              (this_01,local_5ac,this->GridName,false,
               (TFunctionRef<void___cdecl(FSphericalSector_const_&)> *)&local_480);
    local_498 = 1;
    dStack_4a0 = (dStack_230 + (double)local_248._0_8_) * dVar9;
    dVar8 = (local_238 + (double)local_258._8_8_) * dVar9;
    dVar9 = ((double)local_248._8_8_ + (double)local_258._0_8_) * dVar9;
    local_4b8._0_8_ = dStack_4a0 - dVar10;
    dStack_4a0 = dStack_4a0 + dVar10;
    local_4a8 = dVar8 + dVar10;
    dVar37 = dVar10 + dVar9;
    dVar8 = dVar8 - dVar10;
    local_4c8._0_8_ = dVar9 - dVar10;
    local_4b8._8_8_ = dVar37;
    local_4c8._8_8_ = dVar8;
    if ((char)local_228 == '\0') {
      local_228 = CONCAT71(uStack_497,1);
      local_4b8._8_4_ = SUB84(dVar37,0);
      local_4b8._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
      local_248._8_8_ = dVar37;
      local_248._0_8_ = local_4b8._0_8_;
      local_258._8_8_ = dVar8;
      local_258._0_8_ = local_4c8._0_8_;
      local_4c8._8_4_ = SUB84(dVar8,0);
      local_4c8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      local_238 = local_4a8;
      dStack_230 = dStack_4a0;
    }
    else {
      if ((double)local_4c8._0_8_ <= (double)local_258._0_8_) {
        local_258._0_8_ = local_4c8._0_8_;
      }
      if ((double)local_258._8_8_ <= dVar8) {
        dVar8 = (double)local_258._8_8_;
      }
      dVar9 = (double)local_4b8._0_8_;
      if ((double)local_248._0_8_ <= (double)local_4b8._0_8_) {
        dVar9 = (double)local_248._0_8_;
      }
      if (dVar37 <= (double)local_248._8_8_) {
        dVar37 = (double)local_248._8_8_;
      }
      dVar38 = local_4a8;
      if (local_4a8 <= local_238) {
        dVar38 = local_238;
      }
      dVar11 = dStack_4a0;
      if (dStack_4a0 <= dStack_230) {
        dVar11 = dStack_230;
      }
      local_258._8_8_ = dVar8;
      local_248._8_8_ = dVar37;
      local_248._0_8_ = dVar9;
      local_238 = dVar38;
      dStack_230 = dVar11;
    }
    local_5b0 = (uint)pUVar29;
    pFVar35 = local_590;
    if ((int)local_5b0 <= (int)pUVar28) {
      do {
        uVar27 = (uint)pUVar29;
        uVar16 = 0;
        if ((int)uVar27 < (pFVar35->Levels).ArrayNum) {
          uVar16 = ~uVar27 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_450._s_0.X = (double)local_258._0_8_;
        local_450._s_0.Y = (double)local_258._8_8_;
        local_3f8 = &local_5b0;
        this_02 = (FGrid2D *)
                  ((pFVar35->Levels).AllocatorInstance.Data + (longlong)(int)uVar27 * 0x88);
        local_3f0 = &local_540;
        local_3e0 = &local_1c8;
        local_3d8 = &local_5a4;
        local_3d0 = &local_598;
        local_3c0 = &local_218;
        local_3b8 = &local_4f0;
        local_440._s_0.X = (double)local_248._8_8_;
        local_440._s_0.Y = local_238;
        local_430 = 1;
        local_3e8 = this;
        local_3c8 = param_3;
        FSquare2DGridHelper::FGrid2D::GetCellCoords
                  (this_02,(TVector2<double> *)&local_450._s_0,
                   (TIntVector2<__int64> *)&local_560._s_0);
        uVar14 = local_560._s_0.Y;
        uVar18 = local_560._s_0.X;
        if ((((local_560._s_0.X < this_02->GridSize) && (local_560._s_0.Y < this_02->GridSize)) &&
            (FSquare2DGridHelper::FGrid2D::GetCellCoords
                       (this_02,(TVector2<double> *)&local_440._s_0,
                        (TIntVector2<__int64> *)&local_550._s_0), -1 < local_550._s_0.X)) &&
           (-1 < local_550._s_0.Y)) {
          uVar25 = this_02->GridSize + -1;
          uVar17 = uVar25;
          if ((longlong)uVar18 < (longlong)uVar25) {
            uVar17 = uVar18;
          }
          lVar32 = 0;
          lVar33 = lVar32;
          if (0 < (longlong)uVar17) {
            lVar33 = uVar17;
          }
          uVar18 = uVar25;
          if ((longlong)uVar14 < (longlong)uVar25) {
            uVar18 = uVar14;
          }
          local_560._s_0.Y = lVar32;
          if (0 < (longlong)uVar18) {
            local_560._s_0.Y = uVar18;
          }
          uVar18 = uVar25;
          if (local_550._s_0.X < (longlong)uVar25) {
            uVar18 = local_550._s_0.X;
          }
          lVar30 = lVar32;
          if (0 < (longlong)uVar18) {
            lVar30 = uVar18;
          }
          if (local_550._s_0.Y < (longlong)uVar25) {
            uVar25 = local_550._s_0.Y;
          }
          local_550._s_0.Y = lVar32;
          if (0 < (longlong)uVar25) {
            local_550._8_8_ = uVar25;
          }
          this = local_588;
          param_3 = local_580;
          local_560._s_0.X = lVar33;
          local_550._s_0.X = lVar30;
          local_530 = local_550._s_0.Y;
          if (local_560._s_0.Y <= local_550._s_0.Y) {
            lVar32 = lVar33;
            lVar5 = local_550._s_0.Y;
            pFVar35 = local_590;
            lVar31 = local_560._s_0.Y;
            do {
              for (; local_590 = pFVar35, lVar32 <= lVar30; lVar32 = lVar32 + 1) {
                local_470._s_0.X = lVar32;
                local_470._s_0.Y = lVar31;
                if (((-1 < lVar32) && (lVar5 = this_02->GridSize, lVar32 < lVar5)) &&
                   ((-1 < lVar31 && (lVar31 < lVar5)))) {
                  if (lVar31 * lVar5 + lVar32 < 0) {
                    local_5b7[0] = 0;
                    bVar15 = `FSquare2DGridHelper::FGrid2D::IsValidCoords'::__l6::<lambda_1>::
                             operator()(local_5b7);
                    if (!bVar15) goto LAB_148ac6f22;
                  }
                  UE::Core::Private::Function::
                  TFunctionRefCaller<`FSpatialHashStreamingGrid::Draw3D'::__l8::<lambda_1>,void,UE::Math::TIntVector2<__int64>_const_&>
                  ::Call(&local_3f8,(TIntVector2<__int64> *)&local_470._s_0);
                }
LAB_148ac6f22:
                lVar5 = local_530;
                pFVar35 = local_590;
              }
              lVar31 = lVar31 + 1;
              this = local_588;
              param_3 = local_580;
              lVar32 = lVar33;
            } while (lVar31 <= lVar5);
          }
        }
        local_5b0 = local_5b0 + 1;
        pUVar29 = (UWorldPartition *)(ulonglong)local_5b0;
        pFVar34 = local_520;
        this_01 = local_568;
        param_2 = local_528;
      } while ((int)local_5b0 <= (int)local_5a8);
    }
    local_570 = (this_01->Location).field0_0x0._s_0.Z;
    bVar15 = UWorldPartition::IsSimulating(true);
    if (bVar15) {
      local_428._s_0.Y = (this_01->Location).field0_0x0._s_0.Y;
      local_428._s_0.X = (this_01->Location).field0_0x0._s_0.X;
      local_410._s_0.Z = (this_01->Location).field0_0x0._s_0.Z + dVar12;
      local_428._s_0.Z = local_410._s_0.Z - dVar13;
      local_410._s_0.X = local_428._s_0.X;
      local_410._s_0.Y = local_428._s_0.Y;
      memset(local_358,0,0x100);
      uStack_4cb = 0;
      uStack_4c9 = 0;
      local_4d8 = 0;
      uStack_4cc = 0;
      local_4e8 = 0;
      uStack_4e0 = 0;
      uStack_4d0 = 0xffffffff;
      local_2a0.ObjectIndex = 0;
      local_2a0.ObjectSerialNumber = 0;
      FStack_298.ObjectIndex = 0;
      FStack_298.ObjectSerialNumber = 0;
      lVar33 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      uStack_288._0_4_ = -1;
      uStack_288._4_1_ = Invalid;
      uStack_288._5_3_ = 0;
      local_358._4_4_ = 1.0;
      local_2b4 = -1;
      local_290 = (IActorInstanceManagerInterface *)0x0;
      if ((*(int *)(lVar33 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        StatPtr_DebugWorldPartitionTrace =
             (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_FSpatialHashStreamingGrid::Draw3D(UWorldPartitionRuntimeSpatialHash_const_*,TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TTransform<double>_const_&)const_::_12_::<lambda_3>::operator()(void)const_::_2_::FStat_DebugWorldPartitionTrace>
              )0x0;
        pFVar19 = ::FName::FName(local_380,"DebugWorldPartitionTrace");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_DebugWorldPartitionTrace,*pFVar19,
                   L"DebugWorldPartitionTrace","STATGROUP_CollisionTags","STATCAT_Advanced",
                   L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
        _Init_thread_footer(&::_TSS0);
      }
      FVar20 = StatPtr_DebugWorldPartitionTrace;
      if (StatPtr_DebugWorldPartitionTrace ==
          (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_FSpatialHashStreamingGrid::Draw3D(UWorldPartitionRuntimeSpatialHash_const_*,TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TTransform<double>_const_&)const_::_12_::<lambda_3>::operator()(void)const_::_2_::FStat_DebugWorldPartitionTrace>
           )0x0) {
        pFVar19 = ::FName::FName(&local_388,"DebugWorldPartitionTrace");
        FVar20 = (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_FSpatialHashStreamingGrid::Draw3D(UWorldPartitionRuntimeSpatialHash_const_*,TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TTransform<double>_const_&)const_::_12_::<lambda_3>::operator()(void)const_::_2_::FStat_DebugWorldPartitionTrace>
                  )FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_DebugWorldPartitionTrace,
                              *pFVar19,L"DebugWorldPartitionTrace","STATGROUP_CollisionTags",
                              "STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,true,false,
                              MCR_Invalid);
      }
      local_518.StatIdPtr = (TStatIdData *)FVar20;
      if ((*(int *)(lVar33 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FName::FName(&::StaticName,"DebugWorldPartitionTrace");
        _Init_thread_footer(&::_TSS0);
      }
      pFVar21 = FCollisionQueryParams::FCollisionQueryParams
                          (&local_178,::StaticName,&local_518,true,(AActor *)0x0);
      local_578.ObjectTypesToQuery = 1;
      local_578.IgnoreMask = '\0';
      bVar15 = UWorld::LineTraceSingleByObjectType
                         (local_598,(FHitResult *)local_358,(TVector<double> *)&local_410._s_0,
                          (TVector<double> *)&local_428._s_0,&local_578,pFVar21);
      if (local_178.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_178.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
      }
      if (local_178.IgnoreComponents.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_178.IgnoreComponents.AllocatorInstance.SecondaryData);
      }
      if (bVar15) {
        local_570 = (double)local_358._56_8_;
      }
    }
    iVar23 = 0;
    uVar1 = (this_01->DebugColor).field0_0x0._s_0.B;
    uVar2 = (this_01->DebugColor).field0_0x0._s_0.G;
    uVar3 = (this_01->DebugColor).field0_0x0._s_0.R;
    if (CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),(this_01->DebugColor).field0_0x0._s_0.A) == 0
       ) {
      local_510 = this_01->Name;
      if (local_510 == (FName)0x0) {
        QueryPerformanceCounter(&local_508);
        fVar36 = extraout_XMM0_Da_01;
      }
      else {
        pFVar22 = ::FName::ToString(&local_510,&local_368);
        iVar4 = (pFVar22->Data).ArrayNum;
        if (iVar4 == 0) {
          pwVar26 = L"";
        }
        else {
          pwVar26 = (wchar_t *)(pFVar22->Data).AllocatorInstance.Data;
          iVar23 = iVar4 + -1;
        }
        FCrc::Strihash_DEPRECATED<wchar_t>(iVar23,pwVar26);
        fVar36 = extraout_XMM0_Da;
        if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_368.Data.AllocatorInstance.Data);
          fVar36 = extraout_XMM0_Da_00;
        }
      }
      FColor::MakeRedToGreenColorFromScalar(fVar36);
    }
    else {
      local_5b1 = 0xff;
      local_5b4 = uVar1;
      local_5b3 = uVar2;
      local_5b2 = uVar3;
    }
    FVar6 = this->GridName;
    local_3b0 = &local_5b4;
    local_3a8 = &local_570;
    local_398 = &local_598;
    local_3a0 = param_3;
    local_390 = this;
    fVar36 = GetLoadingRange(this);
    bVar15 = FStreamingSourceShapeHelper::IsSourceAffectingGrid
                       (&this_01->TargetGrids,this_01->TargetBehavior,FVar6);
    if (bVar15) {
      local_460 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FSpatialHashStreamingGrid::Draw3D'::__l6::<lambda_4>,void,FSphericalSector_const_&>
                  ::Call;
      local_458 = &local_3b0;
      FStreamingSourceShapeHelper::ForEachShape
                (fVar36,fVar36,true,&this_01->Location,&this_01->Rotation,&this_01->Shapes,
                 (TFunctionRef<void___cdecl(FSphericalSector_const_&)> *)&local_460,
                 this_01->ExtraRadius,this_01->ExtraAngle);
    }
    this_01 = this_01 + 1;
    pUVar28 = (UWorldPartition *)(ulonglong)local_5a8;
    pUVar29 = (UWorldPartition *)(ulonglong)local_5a0;
    uVar24 = (ulonglong)local_59c;
  } while( true );
}

// DrawStreamingSource2D @ 148ac82d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSpatialHashStreamingGrid::DrawStreamingSource2D
          (FSpatialHashStreamingGrid *this,TBox2<double> *param_1,FSphericalSector *param_2,
          TFunctionRef<UE::Math::TVector2<double>___cdecl(UE::Math::TVector2<double>_const_&)>
          *param_3,FColor *param_4,FWorldPartitionDraw2DContext *param_5)

{
  int *piVar1;
  FWorldPartitionCanvasItems *pFVar2;
  float fVar3;
  float fVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  int iVar10;
  TVector<double> *pTVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  double local_2e8;
  double dStack_2e0;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_2d8;
  TVector<double>_u_0 local_2c8;
  FLinearColor_u_0 local_2b0;
  FLinearColor_u_0 local_2a0;
  FLinearColor_u_0 local_290;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined4 uStack_234;
  TRotator<double> local_228;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  TVector<double>_u_0 local_1b0;
  TRotator<double> local_198;
  TVector2<double> local_180;
  TVector2<double> local_170;
  TVector2<double> local_160;
  TVector2<double> local_150;
  undefined1 local_140 [16];
  TVector2<double> local_130;
  TVector2<double> local_120;
  TVector2<double> local_110;
  TVector2<double> local_100;
  TVector<double> local_f0 [7];
  
  bVar9 = FSphericalSector::IsNearlyZero(param_2);
  if ((bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Shape.IsNearlyZero()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
                         ,1099,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  dVar16 = param_2->Angle;
  local_2e8 = (param_2->Center).field0_0x0._s_0.X;
  dStack_2e0 = (param_2->Center).field0_0x0._s_0.Y;
  local_140 = *(undefined1 (*) [16])&(param_2->Axis).field0_0x0;
  uVar26 = local_140._0_4_;
  uVar27 = local_140._4_4_;
  uVar28 = local_140._8_4_;
  uVar29 = local_140._12_4_;
  dVar15 = param_2->Radius;
  local_198.Pitch = 0.0;
  local_198.Yaw = dVar16 * __real_bfe0000000000000;
  local_198.Roll = 0.0;
  lVar13 = -((longlong)ROUND(__real_bfe0000000000000 - dVar16 * ___real_3fd6c16c16c16c17) >> 1);
  iVar12 = (int)lVar13;
  if (lVar13 < 4) {
    iVar12 = 4;
  }
  local_228.Roll = (param_2->Axis).field0_0x0._s_0.Z;
  local_1b0._s_0.X = local_140._0_8_ * dVar15;
  local_1b0._s_0.Y = local_140._8_8_ * dVar15;
  local_1b0._s_0.Z = dVar15 * (param_2->Axis).field0_0x0._s_0.Z;
  UE::Math::TRotator<double>::RotateVector
            (&local_198,(TVector<double> *)&local_2c8._s_0,(TVector<double> *)&local_1b0._s_0);
  fVar30 = __real_40000000;
  fVar7 = __real_3b808081;
  dVar15 = param_2->Angle - __real_4076800000000000;
  uVar17 = SUB84(local_2c8._s_0.X,0);
  uVar18 = (undefined4)((ulonglong)local_2c8._0_8_ >> 0x20);
  uVar19 = SUB84(local_2c8._s_0.Y,0);
  uVar20 = (undefined4)((ulonglong)local_2c8._8_8_ >> 0x20);
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    local_210 = local_2c8._s_0.X + local_2e8;
    local_208 = local_2c8._s_0.Y + dStack_2e0;
    local_2b0._s_0.R = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.R];
    local_2b0._s_0.G = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.G];
    local_2b0._s_0.B = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.B];
    local_2b0._s_0.A = (float)(param_4->field0_0x0)._s_0.A * __real_3b808081;
    (**(code **)param_3)(&local_180,*(undefined8 *)&param_3->field_0x8,&local_210);
    (**(code **)param_3)(&local_170,*(undefined8 *)&param_3->field_0x8,&local_2e8);
    FWorldPartitionDraw2DContext::PushDrawSegment
              (param_5,param_1,&local_170,&local_180,(FLinearColor *)&local_2b0._s_0,fVar30);
  }
  iVar14 = 1;
  uVar21 = uVar17;
  uVar22 = uVar18;
  uVar23 = uVar19;
  uVar24 = uVar20;
  if (0 < iVar12) {
    do {
      local_228.Pitch = 0.0;
      local_228.Roll = 0.0;
      local_228.Yaw = (double)((float)iVar14 * (float)(dVar16 / (double)iVar12));
      pTVar11 = UE::Math::TRotator<double>::RotateVector
                          (&local_228,local_f0,(TVector<double> *)&local_2c8._s_0);
      local_200 = *(double *)&pTVar11->field0_0x0;
      uVar21 = SUB84(local_200,0);
      uVar22 = (undefined4)((ulonglong)local_200 >> 0x20);
      local_1f8 = *(double *)((longlong)&pTVar11->field0_0x0 + 8);
      uVar23 = SUB84(local_1f8,0);
      uVar24 = (undefined4)((ulonglong)local_1f8 >> 0x20);
      local_200 = local_2e8 + local_200;
      local_1f8 = dStack_2e0 + local_1f8;
      fVar30 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.R];
      fVar3 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.G];
      fVar4 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.B];
      fVar25 = (float)(param_4->field0_0x0)._s_0.A * fVar7;
      (**(code **)param_3)(&local_160,*(undefined8 *)&param_3->field_0x8,&local_200);
      local_1f0 = (double)CONCAT44(uVar18,uVar17) + local_2e8;
      local_1e8 = (double)CONCAT44(uVar20,uVar19) + dStack_2e0;
      (**(code **)param_3)(&local_150,*(undefined8 *)&param_3->field_0x8,&local_1f0);
      local_2d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2d8.ArrayNum = 0;
      local_2d8.ArrayMax = 0;
      bVar9 = FWorldPartitionDraw2DContext::BoxSegmentIntersect
                        (param_5,param_1,&local_150,&local_160,&local_2d8);
      if (bVar9) {
        if (local_2d8.ArrayNum < 2) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        FVar8.Data = local_2d8.AllocatorInstance.Data;
        if ((local_2d8.ArrayNum < 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_268 = *(undefined8 *)local_2d8.AllocatorInstance.Data;
        uStack_260 = *(undefined8 *)(local_2d8.AllocatorInstance.Data + 8);
        local_258 = 0;
        uStack_250 = *(undefined8 *)(FVar8.Data + 0x10);
        local_248 = *(undefined8 *)(FVar8.Data + 0x18);
        pFVar2 = &param_5->CanvasItems;
        local_238 = 0x40000000;
        uStack_240 = 0;
        pFVar5 = (pFVar2->Lines).AllocatorInstance.Data;
        local_278 = fVar30;
        fStack_274 = fVar3;
        fStack_270 = fVar4;
        fStack_26c = fVar25;
        if (((pFVar5 <= (FScriptContainerElement *)&local_278) &&
            ((FScriptContainerElement *)&local_278 <
             pFVar5 + (longlong)(param_5->CanvasItems).Lines.ArrayMax * 0x48)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = (param_5->CanvasItems).Lines.ArrayNum;
        piVar1 = &(param_5->CanvasItems).Lines.ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x848,(ForAnyElementType *)pFVar2,piVar1);
        }
        (param_5->CanvasItems).Lines.ArrayNum = iVar10 + 1;
        lVar13 = (longlong)iVar10;
        pFVar5 = (pFVar2->Lines).AllocatorInstance.Data;
        *(ulonglong *)(pFVar5 + lVar13 * 0x48) = CONCAT44(fStack_274,local_278);
        *(ulonglong *)(pFVar5 + lVar13 * 0x48 + 8) = CONCAT44(fStack_26c,fStack_270);
        *(undefined8 *)(pFVar5 + lVar13 * 0x48 + 0x10) = local_268;
        *(undefined8 *)(pFVar5 + lVar13 * 0x48 + 0x10 + 8) = uStack_260;
        *(undefined8 *)(pFVar5 + lVar13 * 0x48 + 0x20) = local_258;
        *(undefined8 *)(pFVar5 + lVar13 * 0x48 + 0x20 + 8) = uStack_250;
        *(undefined8 *)(pFVar5 + lVar13 * 0x48 + 0x30) = local_248;
        *(undefined8 *)(pFVar5 + lVar13 * 0x48 + 0x30 + 8) = uStack_240;
        *(ulonglong *)(pFVar5 + lVar13 * 0x48 + 0x40) = CONCAT44(uStack_234,local_238);
        if (local_2d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d8.AllocatorInstance.Data);
        }
      }
      else if (local_2d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d8.AllocatorInstance.Data);
      }
      iVar14 = iVar14 + 1;
      uVar17 = uVar21;
      uVar18 = uVar22;
      uVar19 = uVar23;
      uVar20 = uVar24;
    } while (iVar14 <= iVar12);
    uVar26 = local_140._0_4_;
    uVar27 = local_140._4_4_;
    uVar28 = local_140._8_4_;
    uVar29 = local_140._12_4_;
    fVar30 = __real_40000000;
  }
  local_2a0._s_0.R = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.R];
  local_2a0._s_0.G = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.G];
  local_2a0._s_0.B = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.B];
  dVar16 = param_2->Angle - __real_4076800000000000;
  local_2a0._s_0.A = (float)(param_4->field0_0x0)._s_0.A * fVar7;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    local_2c8._s_0.X = (double)UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_8_;
    local_2c8._s_0.Y = (double)UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_8_;
  }
  local_1e0 = local_2e8 + local_2c8._s_0.X;
  local_1d8 = dStack_2e0 + local_2c8._s_0.Y;
  (**(code **)param_3)(&local_130,*(undefined8 *)&param_3->field_0x8,&local_1e0);
  local_1d0 = (double)CONCAT44(uVar22,uVar21) + local_2e8;
  local_1c8 = (double)CONCAT44(uVar24,uVar23) + dStack_2e0;
  (**(code **)param_3)(&local_120,*(undefined8 *)&param_3->field_0x8,&local_1d0);
  FWorldPartitionDraw2DContext::PushDrawSegment
            (param_5,param_1,&local_120,&local_130,(FLinearColor *)&local_2a0._s_0,fVar30);
  local_290._s_0.R = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.R];
  local_290._s_0.G = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.G];
  local_290._s_0.B = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.B];
  local_1c0 = param_2->Radius * (double)CONCAT44(uVar27,uVar26) + local_2e8;
  local_290._s_0.A = (float)(param_4->field0_0x0)._s_0.A * fVar7;
  local_1b8 = param_2->Radius * (double)CONCAT44(uVar29,uVar28) + dStack_2e0;
  (**(code **)param_3)(&local_110,*(undefined8 *)&param_3->field_0x8,&local_1c0);
  (**(code **)param_3)(&local_100,*(undefined8 *)&param_3->field_0x8,&local_2e8);
  FWorldPartitionDraw2DContext::PushDrawSegment
            (param_5,param_1,&local_100,&local_110,(FLinearColor *)&local_290._s_0,fVar30);
  return;
}

// DrawStreamingSource3D @ 148ac8ae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ELineBatcherType": Some values do not have unique names */

void __thiscall
FSpatialHashStreamingGrid::DrawStreamingSource3D
          (FSpatialHashStreamingGrid *this,UWorld *param_1,FSphericalSector *param_2,
          TTransform<double> *param_3,FColor *param_4)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined1 auVar5 [12];
  undefined8 uVar6;
  float fVar7;
  int iVar8;
  bool bVar9;
  ULineBatchComponent *this_00;
  longlong lVar10;
  int iVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 auVar32 [16];
  double dVar37;
  undefined4 uVar38;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar44;
  undefined1 auVar43 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar51;
  double dVar56;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 local_res18 [8];
  ForAnyElementType local_1d8;
  int local_1d0;
  int local_1cc;
  TArray<TTuple<UE::Math::TVector<double>,UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>
  local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined4 local_178;
  float fStack_174;
  uint uStack_170;
  undefined4 uStack_16c;
  FBatchedLine *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  double local_158;
  double dStack_150;
  double local_148;
  double local_138;
  TArrayView<FBatchedLine,int> local_128;
  TVector<double>_u_0 local_118;
  undefined1 local_f8 [16];
  double local_e8;
  TVector<double>_u_0 local_d8;
  double dStack_c0;
  undefined1 local_b8 [16];
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  
  dVar14 = param_2->Angle - __real_4076800000000000;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    this_00 = UWorld::GetLineBatcher(param_1,World);
    if (this_00 != (ULineBatchComponent *)0x0) {
      auVar41 = *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64;
      dVar51 = auVar41._0_8_;
      dStack_c0 = param_2->Radius;
      local_98 = (param_2->Axis).field0_0x0._s_0.X;
      dStack_90 = (param_2->Axis).field0_0x0._s_0.Y;
      dVar37 = (param_3->Rotation).ZW.m128d_f64[1];
      local_88 = (param_2->Axis).field0_0x0._s_0.Z;
      dStack_a0 = param_2->Angle;
      auVar52._0_8_ = local_88 * (param_3->Scale3D).ZW.m128d_f64[0];
      auVar52._8_8_ = (param_3->Scale3D).ZW.m128d_f64[1] * 0.0;
      auVar16 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
      auVar24 = blendpd(auVar16,auVar41,2);
      dVar14 = local_98 * (param_3->Scale3D).XY.m128d_f64[0];
      dVar31 = dStack_90 * (param_3->Scale3D).XY.m128d_f64[1];
      uVar38 = (undefined4)((ulonglong)dVar31 >> 0x20);
      auVar48._8_4_ = SUB84(dVar31,0);
      auVar48._0_8_ = dVar14;
      auVar48._12_4_ = uVar38;
      auVar49._0_8_ = auVar48._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar14;
      auVar49._8_8_ = auVar52._0_8_ * auVar16._8_8_ - dVar51 * dVar31;
      auVar16._8_4_ = SUB84(dVar31,0);
      auVar16._0_8_ = dVar14;
      auVar16._12_4_ = uVar38;
      auVar16 = blendpd(auVar16,auVar52,2);
      auVar25._0_8_ = auVar16._0_8_ * dVar51 - auVar24._0_8_ * auVar52._0_8_;
      auVar25._8_8_ = auVar16._8_8_ * auVar41._8_8_ - auVar24._8_8_ * auVar52._8_8_;
      auVar16 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
      auVar24 = blendpd(auVar49,auVar25,2);
      dVar44 = auVar49._8_8_ + auVar49._8_8_;
      dVar22 = auVar25._0_8_ + auVar25._0_8_;
      uVar38 = (undefined4)((ulonglong)dVar22 >> 0x20);
      auVar50._0_8_ = auVar24._0_8_ + auVar24._0_8_;
      auVar50._8_8_ = auVar24._8_8_ + auVar24._8_8_;
      auVar33._8_4_ = SUB84(dVar22,0);
      auVar33._0_8_ = dVar44;
      auVar33._12_4_ = uVar38;
      auVar24._8_4_ = SUB84(dVar22,0);
      auVar24._0_8_ = dVar44;
      auVar24._12_4_ = uVar38;
      auVar24 = blendpd(auVar24,auVar50,2);
      auVar25 = blendpd(auVar16,auVar41,2);
      auVar34._0_8_ = auVar33._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar44;
      auVar34._8_8_ = auVar50._0_8_ * auVar16._8_8_ - dVar51 * dVar22;
      auVar28._0_8_ = auVar24._0_8_ * dVar51 - auVar25._0_8_ * auVar50._0_8_;
      auVar28._8_8_ = auVar24._8_8_ * auVar41._8_8_ - auVar25._8_8_ * auVar50._8_8_;
      auVar41._8_4_ = SUB84(auVar34._8_8_,0);
      auVar41._0_8_ = auVar34._0_8_;
      auVar41._12_4_ = (int)((ulonglong)auVar34._8_8_ >> 0x20);
      dVar14 = dVar44 * dVar37 + dVar14 + auVar41._8_8_;
      uVar4 = dVar22 * dVar37 + dVar31 + auVar28._0_8_;
      uVar38 = (undefined4)((ulonglong)uVar4 >> 0x20);
      auVar41 = blendpd(auVar34,auVar28,2);
      local_e8 = auVar50._0_8_ * dVar37 + auVar52._0_8_ + auVar41._0_8_;
      auVar5._4_8_ = dVar37;
      auVar5._0_4_ = (int)((ulonglong)dVar14 >> 0x20);
      auVar42._0_8_ = auVar5._0_8_ << 0x20;
      auVar42._8_4_ = (int)uVar4;
      auVar42._12_4_ = uVar38;
      dVar44 = auVar42._8_8_;
      local_f8._8_4_ = (int)uVar4;
      local_f8._0_8_ = dVar14;
      local_f8._12_4_ = uVar38;
      dVar31 = dVar44 * dVar44 + dVar14 * dVar14 + local_e8 * local_e8;
      uVar6 = dVar14;
      local_a8 = local_e8;
      if ((dVar31 != __real_3ff0000000000000) &&
         (uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
         uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
         local_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
         __real_3e45798ee0000000 <= dVar31)) {
        local_138 = __real_3ff0000000000000 / SQRT(dVar31);
        uVar6 = dVar14 * local_138;
        uVar4 = local_138 * dVar44;
        local_a8 = local_138 * local_e8;
      }
      auVar41 = *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64;
      dVar51 = auVar41._0_8_;
      dVar44 = (param_2->Center).field0_0x0._s_0.X * (param_3->Scale3D).XY.m128d_f64[0];
      dVar22 = (param_2->Center).field0_0x0._s_0.Y * (param_3->Scale3D).XY.m128d_f64[1];
      uVar38 = (undefined4)((ulonglong)dVar22 >> 0x20);
      auVar16 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
      auVar53._8_4_ = SUB84(dVar22,0);
      auVar53._0_8_ = dVar44;
      auVar53._12_4_ = uVar38;
      dVar14 = (param_2->Center).field0_0x0._s_0.Z * (param_3->Scale3D).ZW.m128d_f64[0];
      dVar31 = (param_3->Scale3D).ZW.m128d_f64[1] * 0.0;
      dVar37 = (param_3->Rotation).ZW.m128d_f64[1];
      auVar25 = blendpd(auVar16,auVar41,2);
      auVar54._0_8_ = auVar53._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar44;
      auVar54._8_8_ = dVar14 * auVar16._8_8_ - dVar51 * dVar22;
      auVar43._8_4_ = SUB84(auVar54._8_8_,0);
      auVar43._0_8_ = auVar54._0_8_;
      auVar43._12_4_ = (int)((ulonglong)auVar54._8_8_ >> 0x20);
      auVar19._8_4_ = SUB84(dVar22,0);
      auVar19._0_8_ = dVar44;
      auVar19._12_4_ = uVar38;
      local_b8._8_4_ = (int)uVar4;
      local_b8._0_8_ = uVar6;
      local_b8._12_4_ = (int)((ulonglong)uVar4 >> 0x20);
      auVar3._8_4_ = SUB84(dVar31,0);
      auVar3._0_8_ = dVar14;
      auVar3._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
      auVar16 = blendpd(auVar19,auVar3,2);
      auVar20._0_8_ = auVar16._0_8_ * dVar51 - auVar25._0_8_ * dVar14;
      auVar20._8_8_ = auVar16._8_8_ * auVar41._8_8_ - auVar25._8_8_ * dVar31;
      auVar16 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
      auVar25 = blendpd(auVar54,auVar20,2);
      dVar31 = auVar43._8_8_ + auVar43._8_8_;
      dVar56 = auVar20._0_8_ + auVar20._0_8_;
      auVar55._0_8_ = auVar25._0_8_ + auVar25._0_8_;
      auVar55._8_8_ = auVar25._8_8_ + auVar25._8_8_;
      auVar35._8_4_ = SUB84(dVar56,0);
      auVar35._0_8_ = dVar31;
      uVar38 = (undefined4)((ulonglong)dVar56 >> 0x20);
      auVar35._12_4_ = uVar38;
      auVar29._8_4_ = SUB84(dVar56,0);
      auVar29._0_8_ = dVar31;
      auVar29._12_4_ = uVar38;
      auVar25 = blendpd(auVar29,auVar55,2);
      auVar36._0_8_ = auVar35._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar31;
      auVar36._8_8_ = auVar55._0_8_ * auVar16._8_8_ - dVar51 * dVar56;
      auVar21._8_4_ = SUB84(auVar36._8_8_,0);
      auVar21._0_8_ = auVar36._0_8_;
      auVar21._12_4_ = (int)((ulonglong)auVar36._8_8_ >> 0x20);
      auVar16 = blendpd(auVar16,auVar41,2);
      auVar30._0_8_ = auVar25._0_8_ * dVar51 - auVar16._0_8_ * auVar55._0_8_;
      auVar30._8_8_ = auVar25._8_8_ * auVar41._8_8_ - auVar16._8_8_ * auVar55._8_8_;
      auVar41 = blendpd(auVar36,auVar30,2);
      local_148 = auVar55._0_8_ * dVar37 + dVar14 + auVar41._0_8_ +
                  (param_3->Translation).ZW.m128d_f64[0];
      local_d8._s_0.X =
           dVar31 * dVar37 + dVar44 + auVar21._8_8_ + (param_3->Translation).XY.m128d_f64[0];
      local_d8._s_0.Y =
           dVar56 * dVar37 + dVar22 + auVar30._0_8_ + (param_3->Translation).XY.m128d_f64[1];
      dStack_150 = local_d8._s_0.Y;
      local_158 = local_d8._s_0.X;
      local_d8._s_0.Z = local_148;
      FSphericalSector::BuildDebugMesh((FSphericalSector *)&local_d8._s_0,&local_1c8);
      local_1d8.Data = (FScriptContainerElement *)0x0;
      local_1cc = 0;
      iVar11 = local_1c8.ArrayNum;
      if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(local_1c8._8_8_ & 0xffffffff);
      }
      local_1d0 = 0;
      if (iVar11 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,iVar11,&local_1d8,0,&local_1cc);
      }
      fVar7 = __real_3b808081;
      iVar11 = local_1c8.ArrayNum;
      pFVar13 = local_1c8.AllocatorInstance.Data + (longlong)iVar11 * 0x30;
      FVar12.Data = local_1c8.AllocatorInstance.Data;
      while( true ) {
        if (local_1c8.ArrayNum != iVar11) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<TTuple<UE::Math::TVector<double>,UE::Math::TVector<double>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        iVar8 = local_1d0;
        if (FVar12.Data == pFVar13) break;
        local_1a8 = *(undefined8 *)(FVar12.Data + 0x10);
        uStack_1a0 = *(undefined8 *)(FVar12.Data + 0x18);
        uStack_198 = *(undefined8 *)(FVar12.Data + 0x20);
        local_178 = 0x41a00000;
        uVar4 = *(undefined8 *)FVar12.Data;
        uVar6 = *(undefined8 *)(FVar12.Data + 8);
        uStack_170 = uStack_170 & 0xffffff00;
        uStack_190 = *(undefined8 *)(FVar12.Data + 0x28);
        local_188 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.R];
        uStack_16c = 0;
        fStack_184 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.G];
        fStack_180 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.B];
        fStack_174 = this_00->DefaultLifeTime;
        fStack_17c = (float)(param_4->field0_0x0)._s_0.A * fVar7;
        local_1b8 = uVar4;
        uStack_1b0 = uVar6;
        if (local_1d0 == local_1cc) {
          local_1d0 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x850,&local_1d8,&local_1cc);
        }
        lVar10 = (longlong)local_1d0;
        local_1d0 = local_1d0 + 1;
        FVar12.Data = FVar12.Data + 0x30;
        *(undefined8 *)&local_1d8.Data[lVar10 * 0x50].field_0x0 = uVar4;
        *(undefined8 *)(local_1d8.Data + lVar10 * 0x50 + 8) = uVar6;
        *(undefined8 *)(local_1d8.Data + lVar10 * 0x50 + 0x10) = local_1a8;
        *(undefined8 *)(local_1d8.Data + lVar10 * 0x50 + 0x10 + 8) = uStack_1a0;
        *(undefined8 *)(local_1d8.Data + lVar10 * 0x50 + 0x20) = uStack_198;
        *(undefined8 *)(local_1d8.Data + lVar10 * 0x50 + 0x20 + 8) = uStack_190;
        *(ulonglong *)(local_1d8.Data + lVar10 * 0x50 + 0x30) = CONCAT44(fStack_184,local_188);
        *(ulonglong *)(local_1d8.Data + lVar10 * 0x50 + 0x30 + 8) = CONCAT44(fStack_17c,fStack_180);
        *(ulonglong *)(local_1d8.Data + lVar10 * 0x50 + 0x40) = CONCAT44(fStack_174,local_178);
        *(ulonglong *)(local_1d8.Data + lVar10 * 0x50 + 0x40 + 8) = CONCAT44(uStack_16c,uStack_170);
      }
      local_168 = (FBatchedLine *)local_1d8.Data;
      if ((local_1d0 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_128._12_4_ = uStack_15c;
      local_128.ArrayNum = iVar8;
      local_128.DataPtr = local_168;
      iStack_160 = iVar8;
      ULineBatchComponent::DrawLines(this_00,&local_128);
      if ((FBatchedLine *)local_1d8.Data != (FBatchedLine *)0x0) {
        FMemory::Free(local_1d8.Data);
      }
      if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.AllocatorInstance.Data);
      }
    }
  }
  else {
    auVar41 = *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64;
    dVar22 = auVar41._0_8_;
    auVar16 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
    dVar51 = (param_2->Center).field0_0x0._s_0.X * (param_3->Scale3D).XY.m128d_f64[0];
    dVar56 = (param_2->Center).field0_0x0._s_0.Y * (param_3->Scale3D).XY.m128d_f64[1];
    dVar14 = (param_2->Center).field0_0x0._s_0.Z * (param_3->Scale3D).ZW.m128d_f64[0];
    dVar31 = (param_3->Scale3D).ZW.m128d_f64[1] * 0.0;
    auVar25 = *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64;
    auVar45._8_4_ = SUB84(dVar56,0);
    auVar45._0_8_ = dVar51;
    uVar38 = (undefined4)((ulonglong)dVar56 >> 0x20);
    auVar45._12_4_ = uVar38;
    auVar24 = blendpd(auVar16,auVar41,2);
    dVar44 = auVar25._8_8_;
    auVar46._0_8_ = auVar45._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar51;
    auVar46._8_8_ = dVar14 * auVar16._8_8_ - dVar22 * dVar56;
    auVar15._8_4_ = SUB84(dVar56,0);
    auVar15._0_8_ = dVar51;
    auVar15._12_4_ = uVar38;
    auVar2._8_4_ = SUB84(dVar31,0);
    auVar2._0_8_ = dVar14;
    auVar2._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
    auVar16 = blendpd(auVar15,auVar2,2);
    auVar32._8_4_ = SUB84(auVar46._8_8_,0);
    auVar32._0_8_ = auVar46._0_8_;
    auVar32._12_4_ = (int)((ulonglong)auVar46._8_8_ >> 0x20);
    auVar17._0_8_ = auVar16._0_8_ * dVar22 - auVar24._0_8_ * dVar14;
    auVar17._8_8_ = auVar16._8_8_ * auVar41._8_8_ - auVar24._8_8_ * dVar31;
    auVar16 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
    auVar24 = blendpd(auVar46,auVar17,2);
    dVar31 = auVar32._8_8_ + auVar32._8_8_;
    dVar37 = auVar17._0_8_ + auVar17._0_8_;
    auVar47._0_8_ = auVar24._0_8_ + auVar24._0_8_;
    auVar47._8_8_ = auVar24._8_8_ + auVar24._8_8_;
    auVar39._8_4_ = SUB84(dVar37,0);
    auVar39._0_8_ = dVar31;
    uVar38 = (undefined4)((ulonglong)dVar37 >> 0x20);
    auVar39._12_4_ = uVar38;
    auVar26._8_4_ = SUB84(dVar37,0);
    auVar26._0_8_ = dVar31;
    auVar26._12_4_ = uVar38;
    auVar24 = blendpd(auVar16,auVar41,2);
    auVar40._0_8_ = auVar39._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar31;
    auVar40._8_8_ = auVar47._0_8_ * auVar16._8_8_ - dVar22 * dVar37;
    auVar16 = blendpd(auVar26,auVar47,2);
    auVar23._8_4_ = auVar25._8_4_;
    auVar23._0_8_ = dVar44;
    auVar23._12_4_ = auVar25._12_4_;
    auVar18._8_4_ = SUB84(auVar40._8_8_,0);
    auVar18._0_8_ = auVar40._0_8_;
    auVar18._12_4_ = (int)((ulonglong)auVar40._8_8_ >> 0x20);
    auVar27._0_8_ = auVar16._0_8_ * dVar22 - auVar24._0_8_ * auVar47._0_8_;
    auVar27._8_8_ = auVar16._8_8_ * auVar41._8_8_ - auVar24._8_8_ * auVar47._8_8_;
    local_118._s_0.X =
         dVar44 * dVar31 + dVar51 + auVar18._8_8_ + (param_3->Translation).XY.m128d_f64[0];
    local_118._s_0.Y =
         auVar23._8_8_ * dVar37 + dVar56 + auVar27._0_8_ + (param_3->Translation).XY.m128d_f64[1];
    auVar41 = blendpd(auVar40,auVar27,2);
    local_118._s_0.Z =
         dVar44 * auVar47._0_8_ + dVar14 + auVar41._0_8_ + (param_3->Translation).ZW.m128d_f64[0];
    DrawDebugSphere(param_1,(TVector<double> *)&local_118._s_0,(float)param_2->Radius,0x20,param_4,
                    false,__real_bf800000,'\0',__real_41a00000);
  }
  return;
}

// ForEachLayerCell @ 148aca0e0

void __thiscall
FSpatialHashStreamingGrid::ForEachLayerCell
          (FSpatialHashStreamingGrid *this,TIntVector3<__int64> *param_1,
          TFunctionRef<void___cdecl(FSpatialHashStreamingGridLayerCell_const_*)> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FSquare2DGridHelper *pFVar5;
  uint *puVar6;
  uint uVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  longlong local_res8;
  longlong local_res10;
  
  iVar1 = *(int *)((longlong)&param_1->field0_0x0 + 0x10);
  if ((iVar1 < 0) || ((this->GridLevels).ArrayNum <= iVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GridLevels.IsValidIndex(Coords.Z)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
                       ,0x2b2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = GetGridHelper(this);
  uVar4 = *(uint *)((longlong)&param_1->field0_0x0 + 0x10);
  uVar7 = 0;
  if ((int)uVar4 < (pFVar5->Levels).ArrayNum) {
    uVar7 = ~uVar4 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar7 = *(uint *)((longlong)&param_1->field0_0x0 + 0x10);
  lVar8 = *(longlong *)
           ((pFVar5->Levels).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x88 + 0x18) *
          (param_1->field0_0x0)._s_0.Y + (param_1->field0_0x0)._s_0.X;
  uVar4 = 0;
  if ((int)uVar7 < (this->GridLevels).ArrayNum) {
    uVar4 = ~uVar7 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar6 = (uint *)TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                   ::Find((TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                           *)((this->GridLevels).AllocatorInstance.Data +
                             (longlong)(int)uVar7 * 0x60 + 0x10),lVar8);
  if (puVar6 != (uint *)0x0) {
    uVar4 = *(uint *)((longlong)&param_1->field0_0x0 + 0x10);
    uVar7 = 0;
    if ((int)uVar4 < (this->GridLevels).ArrayNum) {
      uVar7 = ~uVar4 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar7 = *puVar6;
    pFVar9 = (this->GridLevels).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x60;
    uVar4 = 0;
    if ((int)uVar7 < *(int *)(pFVar9 + 8)) {
      uVar4 = ~uVar7 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_res8 = (longlong)(int)uVar7 * 0x10 + *(longlong *)pFVar9;
    (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_res8);
  }
  uVar4 = *(uint *)((longlong)&param_1->field0_0x0 + 0x10);
  if ((-1 < (int)uVar4) && ((int)uVar4 < (this->InjectedGridLevels).ArrayNum)) {
    uVar7 = 0;
    if ((int)uVar4 < (this->InjectedGridLevels).ArrayNum) {
      uVar7 = ~uVar4 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    puVar6 = (uint *)TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                     ::Find((TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                             *)((this->InjectedGridLevels).AllocatorInstance.Data +
                               (longlong)(int)uVar4 * 0x60 + 0x10),lVar8);
    if (puVar6 != (uint *)0x0) {
      uVar4 = *(uint *)((longlong)&param_1->field0_0x0 + 0x10);
      uVar7 = 0;
      if ((int)uVar4 < (this->InjectedGridLevels).ArrayNum) {
        uVar7 = ~uVar4 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar9 = (this->InjectedGridLevels).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x60;
      uVar4 = *puVar6;
      uVar7 = 0;
      if ((int)uVar4 < *(int *)(pFVar9 + 8)) {
        uVar7 = ~uVar4 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_res10 = (longlong)(int)uVar4 * 0x10 + *(longlong *)pFVar9;
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_res10);
    }
  }
  return;
}

// ForEachRuntimeCell @ 148aca440

void __thiscall
FSpatialHashStreamingGrid::ForEachRuntimeCell
          (FSpatialHashStreamingGrid *this,TIntVector3<__int64> *param_1,
          TFunctionRef<void___cdecl(UWorldPartitionRuntimeCell_const_*)> *param_2)

{
  TFunctionRef<void___cdecl(UWorldPartitionRuntimeCell_const_*)> *local_res18 [2];
  code *local_18;
  TFunctionRef<void___cdecl(UWorldPartitionRuntimeCell_const_*)> **local_10;
  
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FSpatialHashStreamingGrid::ForEachRuntimeCell'::__l2::<lambda_1>,void,FSpatialHashStreamingGridLayerCell_const_*>
             ::Call;
  local_res18[0] = param_2;
  ForEachLayerCell(this,param_1,
                   (TFunctionRef<void___cdecl(FSpatialHashStreamingGridLayerCell_const_*)> *)
                   &local_18);
  return;
}

// ForEachRuntimeCell @ 148aca480

void __thiscall
FSpatialHashStreamingGrid::ForEachRuntimeCell
          (FSpatialHashStreamingGrid *this,
          TFunctionRef<bool___cdecl(UWorldPartitionRuntimeCell_const_*)> *param_1)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *(undefined8 *)param_1;
  local_10 = *(undefined8 *)&param_1->field_0x8;
  `FSpatialHashStreamingGrid::ForEachRuntimeCell'::__l2::<lambda_1>::operator()
            (&local_18,&this->GridLevels);
  `FSpatialHashStreamingGrid::ForEachRuntimeCell'::__l2::<lambda_1>::operator()
            (&local_18,&this->InjectedGridLevels);
  return;
}

// GetCellSize @ 148acb490

long64 __thiscall
FSpatialHashStreamingGrid::GetCellSize(FSpatialHashStreamingGrid *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FSquare2DGridHelper *pFVar3;
  long64 lVar4;
  uint uVar5;
  
  pFVar3 = GetGridHelper(this);
  uVar5 = 0;
  if (param_1 < (pFVar3->Levels).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      lVar4 = (*pcVar1)();
      return lVar4;
    }
  }
  return *(long64 *)((pFVar3->Levels).AllocatorInstance.Data + (longlong)param_1 * 0x88 + 0x10);
}

// GetCells @ 148acb510

void __thiscall
FSpatialHashStreamingGrid::GetCells
          (FSpatialHashStreamingGrid *this,FWorldPartitionStreamingQuerySource *param_1,
          TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
          *param_2,bool param_3,FWorldPartitionQueryCache *param_4)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FSquare2DGridHelper *pFVar6;
  uint uVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  code *local_98;
  FSquare2DGridHelper **local_90;
  FWorldPartitionStreamingQuerySource *local_88;
  TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
  *local_80;
  FSquare2DGridHelper *local_70;
  FSpatialHashStreamingGrid *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  FWorldPartitionStreamingQuerySource *local_50;
  TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
  *local_48;
  FWorldPartitionQueryCache **local_40;
  
  bVar8 = -1 < CpuChannel->Enabled;
  local_res20[0] = param_3;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId298,"FSpatialHashStreamingGrid::GetCells_QuerySource",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
               ,0x12a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId298);
  }
  pFVar6 = GetGridHelper(this);
  if (param_1->bSpatialQuery != false) {
    FVar2 = this->GridName;
    local_60 = local_res20;
    local_58 = local_res8;
    local_40 = &param_4;
    local_70 = pFVar6;
    local_68 = this;
    local_50 = param_1;
    local_48 = param_2;
    fVar9 = GetLoadingRange(this);
    bVar4 = FStreamingSourceShapeHelper::IsSourceAffectingGrid
                      (&param_1->TargetGrids,param_1->TargetBehavior,FVar2);
    if ((bVar4) && (param_1->bSpatialQuery != false)) {
      local_98 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FSpatialHashStreamingGrid::GetCells'::__l5::<lambda_2>,void,FSphericalSector_const_&>
                 ::Call;
      local_90 = &local_70;
      fVar10 = fVar9;
      if (param_1->bUseGridLoadingRange == false) {
        fVar10 = param_1->Radius;
      }
      FStreamingSourceShapeHelper::ForEachShape
                (fVar9,fVar10,true,&param_1->Location,&param_1->Rotation,&param_1->Shapes,
                 (TFunctionRef<void___cdecl(FSphericalSector_const_&)> *)&local_98,0.0,0.0);
    }
  }
  iVar1 = (this->GridLevels).ArrayNum;
  uVar7 = iVar1 - 1;
  uVar5 = 0;
  if ((int)uVar7 < iVar1) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  local_88 = param_1;
  local_80 = param_2;
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  `FSpatialHashStreamingGrid::GetCells'::__l2::<lambda_3>::operator()
            (&local_88,
             (FSpatialHashStreamingGridLevel *)
             ((this->GridLevels).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x60));
  if ((-1 < (int)uVar7) && ((int)uVar7 < (this->InjectedGridLevels).ArrayNum)) {
    uVar5 = 0;
    if ((int)uVar7 < (this->InjectedGridLevels).ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    `FSpatialHashStreamingGrid::GetCells'::__l2::<lambda_3>::operator()
              (&local_88,
               (FSpatialHashStreamingGridLevel *)
               ((this->InjectedGridLevels).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x60));
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetCells @ 148acb7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSpatialHashStreamingGrid::GetCells
          (FSpatialHashStreamingGrid *this,
          TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *param_1,
          FStreamingSourceCells *param_2,FStreamingSourceCells *param_3,bool param_4,
          FWorldPartitionStreamingContext *param_5)

{
  code *pcVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  undefined8 uVar3;
  FSpatialHashStreamingGrid *pFVar4;
  TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
  *pTVar5;
  FWorldPartitionStreamingContext *pFVar6;
  longlong *plVar7;
  bool bVar8;
  FSquare2DGridHelper *pFVar9;
  ForAnyElementType _Dst;
  ulonglong uVar10;
  uint *puVar11;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar12;
  byte bVar13;
  ForAnyElementType FVar14;
  TIntVector3<__int64> *pTVar15;
  uint uVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  void *pvVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ForElementType<unsigned_int> FVar23;
  ulonglong uVar24;
  FScriptContainerElement *pFVar25;
  uint uVar26;
  bool bVar27;
  float fVar28;
  undefined1 auStackY_3f8 [32];
  undefined1 local_3a7;
  undefined1 local_3a6;
  undefined1 local_3a5 [5];
  FSpatialHashStreamingGrid *local_3a0;
  TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
  *local_398;
  FWorldPartitionStreamingContext *local_390;
  uint local_388;
  uint uStack_384;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_380;
  undefined4 local_378;
  uint uStack_374;
  uint uStack_370;
  undefined4 uStack_36c;
  longlong *local_368;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_360;
  undefined8 uStack_340;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_338;
  undefined4 local_318;
  int local_314;
  int local_310;
  int local_30c;
  code **local_308;
  longlong *local_300;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2f8;
  longlong *local_2d8;
  uint uStack_2d0;
  uint uStack_2cc;
  TBitArray<FDefaultBitArrayAllocator> *local_2c8;
  undefined4 uStack_2c0;
  uint uStack_2bc;
  uint local_2b8;
  undefined4 uStack_2b4;
  int iStack_2b0;
  undefined4 uStack_2ac;
  longlong *local_2a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2a0;
  undefined8 uStack_280;
  code *local_278;
  FScriptContainerElement **local_270;
  FSquare2DGridHelper *local_268;
  FSpatialHashStreamingGrid *local_260;
  code *local_258;
  FWorldPartitionStreamingContext **local_250;
  code *local_248;
  code ***local_240;
  FWorldPartitionStreamingContext *local_238;
  TIntVector3<__int64> *local_230;
  TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
  *local_228;
  FScriptContainerElement *local_220;
  FSquare2DGridHelper *local_218;
  FSpatialHashStreamingGrid *local_210;
  bool *local_208;
  FWorldPartitionStreamingContext *local_200;
  FStreamingSourceCells *local_1f8;
  TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
  *local_1f0;
  undefined1 *local_1e8;
  undefined4 local_1c4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1c0;
  undefined1 local_198 [32];
  uint *local_178;
  undefined8 local_170;
  undefined4 local_168;
  int local_164;
  undefined1 local_160;
  undefined1 uStack_15f;
  undefined1 uStack_15e;
  undefined1 uStack_15d;
  FScriptContainerElement *local_158;
  uint local_150;
  undefined1 local_148 [32];
  ForElementType<unsigned_int> local_128;
  uint local_120;
  int local_11c;
  int local_118;
  int local_114;
  FScriptContainerElement local_110 [8];
  ForAnyElementType local_108;
  uint local_100;
  undefined1 local_f8 [32];
  uint *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  FScriptContainerElement local_c0 [8];
  ForAnyElementType local_b8;
  uint local_b0;
  longlong local_a8;
  undefined8 local_a0;
  TBitArray<FDefaultBitArrayAllocator> local_98;
  undefined4 local_78;
  int local_74;
  void *local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  local_390 = param_5;
  bVar27 = -1 < CpuChannel->Enabled;
  local_3a0 = this;
  local_398 = &param_2->Cells;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId377,"FSpatialHashStreamingGrid::GetCells",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
               ,0x179);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId377);
  }
  pFVar4 = local_3a0;
  local_148._0_8_ = (FScriptContainerElement *)0x0;
  local_148._8_8_ = 0;
  local_128 = (ForElementType<unsigned_int>)0x0;
  local_120 = 0;
  local_11c = 0x80;
  local_118 = -1;
  local_114 = 0;
  local_108.Data = (FScriptContainerElement *)0x0;
  local_100 = 0;
  fVar28 = GetLoadingRange(local_3a0);
  pFVar9 = GetGridHelper(pFVar4);
  iVar17 = param_1->ArrayNum;
  pFVar18 = (param_1->AllocatorInstance).Data;
  pFVar25 = pFVar18 + (longlong)iVar17 * 0x160;
  while( true ) {
    if (param_1->ArrayNum != iVar17) {
      local_3a7 = 0;
      `TCheckedPointerIterator<FWorldPartitionStreamingSource_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_3a7);
    }
    if (pFVar18 == pFVar25) break;
    local_208 = &param_4;
    local_200 = local_390;
    local_1f0 = local_398;
    local_1e8 = local_148;
    local_210 = pFVar4;
    local_220 = pFVar18;
    local_218 = pFVar9;
    local_1f8 = param_3;
    bVar8 = FStreamingSourceShapeHelper::IsSourceAffectingGrid
                      ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(pFVar18 + 0x68)
                       ,(EStreamingSourceTargetBehavior)pFVar18[0x60],pFVar4->GridName);
    if (bVar8) {
      local_278 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FSpatialHashStreamingGrid::GetCells'::__l6::<lambda_1>,void,FSphericalSector_const_&>
                  ::Call;
      local_270 = &local_220;
      FStreamingSourceShapeHelper::ForEachShape
                (fVar28,fVar28,true,(TVector<double> *)(pFVar18 + 8),
                 (TRotator<double> *)(pFVar18 + 0x20),
                 (TArray<FStreamingSourceShape,TSizedDefaultAllocator<32>_> *)(pFVar18 + 0x108),
                 (TFunctionRef<void___cdecl(FSphericalSector_const_&)> *)&local_278,
                 *(float *)(pFVar18 + 0x158),*(float *)(pFVar18 + 0x15c));
    }
    pFVar18 = pFVar18 + 0x160;
  }
  GetNonSpatiallyLoadedCells(pFVar4,local_398,&param_3->Cells,local_390);
  uVar16 = local_100;
  if (((pFVar4->Settings).bUseAlignedGridLevels != false) ||
     ((pFVar4->Settings).bSnapNonAlignedGridLevelsToLowerLevels == false)) {
LAB_148acc435:
    local_100 = 0;
    if (local_108.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data);
    }
    TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<__int64>,TArray<_FSpatialHashStreamingGrid::GetCells_::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (local_148);
    if (bVar27) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return;
  }
  lVar19 = (longlong)(int)local_100;
  uVar24 = 0;
  local_260 = pFVar4;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_a8 = 0;
  local_a0 = 0;
  local_98.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_98.NumBits = 0;
  local_98.MaxBits = 0x80;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_f8._0_8_ = (FScriptContainerElement *)0x0;
  local_f8._8_8_ = 0;
  local_d8 = (uint *)0x0;
  local_d0 = 0;
  local_cc = 0x80;
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_b0 = 0;
  local_268 = pFVar9;
  if (1 < local_100) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b8,0,local_100,4);
  }
  FVar14.Data = local_110;
  if (local_108.Data != (FScriptContainerElement *)0x0) {
    FVar14.Data = local_108.Data;
  }
  _Dst.Data = local_c0;
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    _Dst.Data = local_b8.Data;
  }
  if (uVar16 != 0) {
    memcpy(_Dst.Data,FVar14.Data,lVar19 << 2);
  }
  local_b0 = uVar16;
  TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::operator=(local_f8,(TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_148);
  local_198._0_8_ = (FScriptContainerElement *)0x0;
  local_198._8_8_ = 0;
  local_178 = (uint *)0x0;
  local_170 = 0x8000000000;
  local_168 = 0xffffffff;
  local_164 = 0;
  local_158 = (FScriptContainerElement *)0x0;
  local_150 = 0;
  do {
    bVar8 = `FSpatialHashStreamingGrid::GetCells'::__l9::<lambda_2>::operator()
                      (&local_268,
                       (TMap<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,0>_>
                        *)local_148,
                       (TMap<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,0>_>
                        *)local_f8,
                       (TMap<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,0>_>
                        *)local_198);
    if (!bVar8) {
      local_338.Array = &local_98;
      local_338._padding_._0_4_ = 0;
      local_338._padding_._4_4_ = 1;
      local_338.UnvisitedBitMask = 0xffffffff;
      local_338.CurrentBitIndex = 0;
      local_338.BaseBitIndex = 0;
      if (local_98.NumBits != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_338);
      }
      TStack_360._padding_ = CONCAT44(local_338._padding_._4_4_,(undefined4)local_338._padding_);
      local_368 = &local_a8;
      TStack_360.CurrentBitIndex = local_338.CurrentBitIndex;
      TStack_360.UnvisitedBitMask = local_338.UnvisitedBitMask;
      TStack_360._28_4_ = local_338._28_4_;
      TStack_360.BaseBitIndex = local_338.BaseBitIndex;
      TStack_360.Array = local_338.Array;
      uStack_340 = CONCAT44(uStack_340._4_4_,(int)local_a0 - local_74);
      TStack_2a0.Array = local_338.Array;
      uStack_280 = uStack_340;
      local_2a8 = local_368;
      TStack_2a0._padding_ = TStack_360._padding_;
      TStack_2a0._16_8_ = TStack_360._16_8_;
      TStack_2a0._24_8_ = TStack_360._24_8_;
      pTVar12 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_1c0,&local_98,local_98.NumBits);
      pFVar6 = local_390;
      pTVar5 = local_398;
      pFVar4 = local_3a0;
      TStack_360._padding_ = pTVar12->_padding_;
      pTVar2 = pTVar12->Array;
      uVar3._0_4_ = pTVar12->UnvisitedBitMask;
      uVar3._4_4_ = pTVar12->CurrentBitIndex;
      TStack_360.BaseBitIndex = pTVar12->BaseBitIndex;
      TStack_360._28_4_ = *(undefined4 *)&pTVar12->field_0x1c;
      TStack_360.Array = pTVar2;
      TStack_360._16_8_ = uVar3;
      while( true ) {
        plVar7 = local_2a8;
        if ((int)local_2a8[1] - *(int *)((longlong)local_2a8 + 0x34) != (int)uStack_280) {
          `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_3a5);
        }
        if (((TStack_2a0.CurrentBitIndex == uVar3._4_4_) && (TStack_2a0.Array == pTVar2)) &&
           (plVar7 == &local_a8)) break;
        local_248 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FSpatialHashStreamingGrid::ForEachRuntimeCell'::__l2::<lambda_1>,void,FSpatialHashStreamingGridLayerCell_const_*>
                    ::Call;
        local_250 = &local_238;
        local_230 = (TIntVector3<__int64> *)((longlong)TStack_2a0.CurrentBitIndex * 0x30 + *plVar7);
        local_308 = &local_258;
        local_238 = pFVar6;
        local_240 = &local_308;
        local_228 = pTVar5;
        local_258 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FSpatialHashStreamingGrid::GetCells'::__l25::<lambda_3>,void,UWorldPartitionRuntimeCell_const_*>
                    ::Call;
        ForEachLayerCell(pFVar4,local_230,
                         (TFunctionRef<void___cdecl(FSpatialHashStreamingGridLayerCell_const_*)> *)
                         &local_248);
        TStack_2a0.UnvisitedBitMask = TStack_2a0.UnvisitedBitMask & ~TStack_2a0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2a0);
      }
      local_150 = 0;
      if (local_158 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158);
      }
      TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(local_198,0,local_198._8_4_);
      iVar17 = SUB84(local_198._8_8_,4);
      local_198._8_8_ = local_198._8_8_ & 0xffffffff00000000;
      if (iVar17 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,(ForAnyElementType *)local_198,0,(int *)(local_198 + 0xc));
      }
      uVar16 = local_170._4_4_;
      local_168 = 0xffffffff;
      local_164 = 0;
      local_170 = (ulonglong)local_170._4_4_ << 0x20;
      if (0x80 < uVar16) {
        local_170 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10),0);
      }
      if (local_178 != (uint *)0x0) {
        FMemory::Free(local_178);
      }
      if ((FScriptContainerElement *)local_198._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_198._0_8_);
      }
      local_b0 = 0;
      if (local_b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data);
      }
      TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<__int64>,TArray<_FSpatialHashStreamingGrid::GetCells_::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (local_f8);
      local_60 = 0;
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<__int64>,TArray<_FSpatialHashStreamingGrid::GetCells_::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_a8);
      goto LAB_148acc435;
    }
    uVar16 = ((local_198._8_4_ - local_164) - local_114) + local_148._8_4_;
    if ((uint)(local_148._8_4_ - local_114) < uVar16) {
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar16);
      }
      TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_148,uVar16);
      if (uVar16 < 4) {
        uVar16 = 1;
      }
      else {
        uVar21 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
        lVar19 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_318 = (undefined4)lVar19;
        uVar16 = 1 << ((byte)lVar19 & 0x1f);
      }
      if ((local_100 == 0) || ((int)local_100 < (int)uVar16)) {
        local_100 = uVar16;
        if (local_108.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_108,0,0,4);
        }
        if (uVar16 != 0) {
          uVar26 = uVar16;
          if (uVar16 < 2) {
            if (local_108.Data != (FScriptContainerElement *)0x0) {
              uVar26 = 0;
              goto LAB_148acbc36;
            }
          }
          else {
LAB_148acbc36:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_108,0,uVar26,4);
          }
          if (0 < (int)uVar16) {
            uVar22 = (ulonglong)uVar16;
            uVar21 = uVar24;
            do {
              FVar14.Data = local_110;
              if (local_108.Data != (FScriptContainerElement *)0x0) {
                FVar14.Data = local_108.Data;
              }
              uVar10 = (longlong)(int)uVar16 - 1U & uVar21;
              uVar21 = uVar21 + 1;
              *(undefined4 *)(FVar14.Data + uVar10 * 4) = 0xffffffff;
              uVar22 = uVar22 - 1;
            } while (uVar22 != 0);
          }
        }
        if (local_100 != 0) {
          pTStack_380 = (TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10);
          local_388 = 0;
          uStack_384 = 1;
          uStack_374 = 0;
          uStack_370 = 0;
          uVar21 = uVar24;
          if (local_120 != 0) {
            FVar23 = (ForElementType<unsigned_int>)((longlong)local_148 + 0x10);
            if (local_128 != (ForElementType<unsigned_int>)0x0) {
              FVar23 = local_128;
            }
            uVar16 = *(uint *)FVar23;
            uVar22 = uVar24;
            while (uVar16 == 0) {
              uStack_370 = (int)uVar22 + 0x20;
              uVar22 = (ulonglong)uStack_370;
              iVar17 = (int)uVar21;
              local_388 = iVar17 + 1;
              uVar21 = (ulonglong)local_388;
              if ((int)((local_120 - 1) + ((int)(local_120 - 1) >> 0x1f & 0x1fU)) >> 5 <
                  (int)local_388) goto LAB_148acbd4d;
              uVar16 = ((uint *)((longlong)FVar23 + 4))[iVar17];
            }
            uStack_384 = -uVar16 & uVar16;
            uVar21 = (ulonglong)uStack_384 * 2 + 1;
            lVar19 = 0x3f;
            if (uVar21 != 0) {
              for (; uVar21 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            local_314 = (int)lVar19;
            uStack_374 = (uStack_370 - 1) + local_314;
            uVar21 = (ulonglong)uStack_374;
            if ((int)local_120 < (int)uStack_374) {
LAB_148acbd4d:
              uVar21 = (ulonglong)local_120;
              uStack_374 = local_120;
            }
          }
          local_378 = 0xffffffff;
          local_300 = (longlong *)local_148;
          local_2f8._padding_ = CONCAT44(uStack_384,local_388);
          local_2f8.CurrentBitIndex = uStack_374;
          local_2f8.UnvisitedBitMask = 0xffffffff;
          local_2f8._28_4_ = uStack_36c;
          local_2f8.BaseBitIndex = uStack_370;
          local_2f8.Array = pTStack_380;
          if ((int)uVar21 < (int)local_120) {
            do {
              pvVar20 = (void *)((longlong)(int)uVar21 * 0x30 + *local_300);
              uVar16 = FCrc::MemCrc_DEPRECATED(pvVar20,0x18,0);
              uVar16 = local_100 - 1 & uVar16;
              *(uint *)((longlong)pvVar20 + 0x2c) = uVar16;
              FVar14.Data = local_110;
              if (local_108.Data != (FScriptContainerElement *)0x0) {
                FVar14.Data = local_108.Data;
              }
              uVar22 = (longlong)(int)local_100 - 1U & (longlong)(int)uVar16;
              *(undefined4 *)((longlong)pvVar20 + 0x28) = *(undefined4 *)(FVar14.Data + uVar22 * 4);
              *(int *)(FVar14.Data + uVar22 * 4) = (int)uVar21;
              local_2f8.UnvisitedBitMask = local_2f8.UnvisitedBitMask & ~local_2f8._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2f8);
              uVar21 = (ulonglong)(uint)local_2f8.CurrentBitIndex;
            } while (local_2f8.CurrentBitIndex < (local_2f8.Array)->NumBits);
          }
        }
      }
    }
    uVar16 = (uint)local_170;
    uStack_2cc = 1;
    local_2b8 = 0;
    uStack_2bc = 0;
    uStack_2d0 = 0;
    if ((uint)local_170 != 0) {
      puVar11 = (uint *)(local_198 + 0x10);
      if (local_178 != (uint *)0x0) {
        puVar11 = local_178;
      }
      uVar26 = *puVar11;
      uVar21 = uVar24;
      uVar22 = uVar24;
      local_2b8 = 0;
      uStack_2d0 = 0;
      while (uVar26 == 0) {
        iVar17 = (int)uVar21;
        local_2b8 = (int)uVar22 + 0x20;
        uVar22 = (ulonglong)local_2b8;
        uStack_2d0 = iVar17 + 1;
        uVar21 = (ulonglong)uStack_2d0;
        uStack_2bc = (uint)local_170;
        if ((int)(((uint)local_170 - 1) + ((int)((uint)local_170 - 1) >> 0x1f & 0x1fU)) >> 5 <
            (int)uStack_2d0) goto LAB_148acbe81;
        uVar26 = (puVar11 + 1)[iVar17];
      }
      uStack_2cc = -uVar26 & uVar26;
      uVar21 = (ulonglong)uStack_2cc * 2 + 1;
      lVar19 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_310 = (int)lVar19;
      uStack_2bc = (local_2b8 - 1) + local_310;
      if ((int)(uint)local_170 < (int)uStack_2bc) {
        uStack_2bc = (uint)local_170;
      }
    }
LAB_148acbe81:
    local_368 = (longlong *)local_198;
    uStack_2b4 = local_1c4;
    TStack_360.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10);
    uVar26 = (uint)local_170 & 0xffffffe0;
    iStack_2b0 = local_198._8_4_ - local_164;
    TStack_360._padding_ = CONCAT44(uStack_2cc,uStack_2d0);
    uStack_2c0 = 0xffffffff;
    TStack_360.CurrentBitIndex = uStack_2bc;
    TStack_360.UnvisitedBitMask = 0xffffffff;
    iVar17 = (int)(uint)local_170 >> 5;
    TStack_360._28_4_ = local_1c4;
    TStack_360.BaseBitIndex = local_2b8;
    uStack_340 = CONCAT44(uStack_2ac,iStack_2b0);
    bVar13 = (byte)local_170;
    local_2d8 = local_368;
    local_2c8 = TStack_360.Array;
    if ((int)(uint)local_170 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L"");
      if (bVar8) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (uVar16 != (uint)local_170) {
      puVar11 = (uint *)(local_198 + 0x10);
      if (local_178 != (uint *)0x0) {
        puVar11 = local_178;
      }
      uVar16 = -1 << (bVar13 & 0x1f) & puVar11[iVar17];
      while (uVar16 == 0) {
        lVar19 = (longlong)iVar17;
        uVar26 = uVar26 + 0x20;
        iVar17 = iVar17 + 1;
        uVar16 = (uint)local_170;
        if ((int)(((uint)local_170 - 1) + ((int)((uint)local_170 - 1) >> 0x1f & 0x1fU)) >> 5 <
            iVar17) goto LAB_148acbfa1;
        uVar16 = (puVar11 + 1)[lVar19];
      }
      uVar21 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_30c = (int)lVar19;
      uVar16 = (uVar26 - 1) + local_30c;
      if ((int)(uint)local_170 < (int)uVar16) {
        uVar16 = (uint)local_170;
      }
    }
LAB_148acbfa1:
    while( true ) {
      plVar7 = local_368;
      if ((int)local_368[1] - *(int *)((longlong)local_368 + 0x34) != (int)uStack_340) {
        local_3a6 = 0;
        `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_3a6);
      }
      if (((TStack_360.CurrentBitIndex == uVar16) &&
          (TStack_360.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10))) &&
         (plVar7 == (longlong *)local_198)) break;
      pTVar15 = (TIntVector3<__int64> *)((longlong)TStack_360.CurrentBitIndex * 0x30 + *plVar7);
      TMapBase<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,0>_>
      ::
      Emplace<UE::Math::TIntVector3<__int64>_const_&,TArray<_FSpatialHashStreamingGrid::GetCells_::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_const_&>
                (local_148,pTVar15,
                 (TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>
                  *)(pTVar15 + 1));
      TStack_360.UnvisitedBitMask = TStack_360.UnvisitedBitMask & ~TStack_360._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_360);
    }
    TMap<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,0>_>
    ::Append<FDefaultSetAllocator>
              (&local_a8,
               (TMap<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,0>_>
                *)local_198);
    TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(local_f8,0,local_f8._8_4_);
    if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_f8._0_8_);
    }
    local_f8._0_8_ = local_198._0_8_;
    local_f8._8_8_ = local_198._8_8_;
    local_198._0_8_ = (FScriptContainerElement *)0x0;
    local_198._8_8_ = 0;
    if (local_178 == (uint *)0x0) {
      local_f8._16_8_ = local_198._16_8_;
      local_f8._24_8_ = local_198._24_8_;
    }
    puVar11 = local_178;
    if (local_d8 != (uint *)0x0) {
      FMemory::Free(local_d8);
      puVar11 = local_178;
    }
    local_d0 = (uint)local_170;
    local_cc = local_170._4_4_;
    local_c8 = local_168;
    local_c4 = local_164;
    local_164 = 0;
    local_178 = (uint *)0x0;
    local_170 = 0;
    local_168 = 0xffffffff;
    if (local_158 == (FScriptContainerElement *)0x0) {
      local_c0[0] = (FScriptContainerElement)local_160;
      local_c0[1] = (FScriptContainerElement)uStack_15f;
      local_c0[2] = (FScriptContainerElement)uStack_15e;
      local_c0[3] = (FScriptContainerElement)uStack_15d;
    }
    pFVar18 = local_158;
    local_d8 = puVar11;
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data);
      pFVar18 = local_158;
    }
    local_b0 = local_150;
    local_150 = 0;
    local_158 = (FScriptContainerElement *)0x0;
    local_b8.Data = pFVar18;
    if ((local_198._8_4_ != local_164) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntersectingCells.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
                           ,0x1f8,L""), bVar8)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  } while( true );
}

// GetFilteredCellsForDebugDraw @ 148acd620

void __thiscall
FSpatialHashStreamingGrid::GetFilteredCellsForDebugDraw
          (FSpatialHashStreamingGrid *this,FSpatialHashStreamingGridLayerCell *param_1,
          TArray<UWorldPartitionRuntimeCell_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined8 local_28 [2];
  
  if (param_1 != (FSpatialHashStreamingGridLayerCell *)0x0) {
    iVar2 = (param_1->GridCells).ArrayNum;
    pFVar7 = (param_1->GridCells).AllocatorInstance.Data;
    pFVar1 = pFVar7 + (longlong)iVar2 * 8;
    while( true ) {
      if ((param_1->GridCells).ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UWorldPartitionRuntimeCell>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar7 == pFVar1) break;
      bVar5 = `FSpatialHashStreamingGrid::GetFilteredCellsForDebugDraw'::__l5::<lambda_1>::
              operator()(local_res20,*(UWorldPartitionRuntimeCell **)pFVar7);
      if (bVar5) {
        local_28[0] = *(undefined8 *)pFVar7;
        pFVar3 = (param_2->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)param_2->ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = param_2->ArrayNum;
        if (iVar6 == param_2->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar6 + 1;
        *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_28[0];
      }
      pFVar7 = pFVar7 + 8;
    }
  }
  return;
}

// GetGridHelper @ 148acd800

FSquare2DGridHelper * __thiscall
FSpatialHashStreamingGrid::GetGridHelper(FSpatialHashStreamingGrid *this)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  FSquare2DGridHelper *pFVar4;
  
  pFVar4 = this->GridHelper;
  if (pFVar4 == (FSquare2DGridHelper *)0x0) {
    pFVar4 = ::operator_new(0x68);
    if (pFVar4 == (FSquare2DGridHelper *)0x0) {
      pFVar4 = (FSquare2DGridHelper *)0x0;
    }
    else {
      pFVar4 = FSquare2DGridHelper::FSquare2DGridHelper
                         (pFVar4,&this->WorldBounds,&this->Origin,(longlong)this->CellSize,
                          (this->Settings).bUseAlignedGridLevels);
    }
    this->GridHelper = pFVar4;
  }
  if (((pFVar4->Levels).ArrayNum != (this->GridLevels).ArrayNum) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GridHelper->Levels.Num() == GridLevels.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
                         ,0x7c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FSquare2DGridHelper *)(*pcVar2)();
    return pFVar4;
  }
  pFVar4 = this->GridHelper;
  if (((((this->Origin).field0_0x0._s_0.X != (pFVar4->Origin).field0_0x0._s_0.X) ||
       ((this->Origin).field0_0x0._s_0.Y != (pFVar4->Origin).field0_0x0._s_0.Y)) ||
      ((this->Origin).field0_0x0._s_0.Z != (pFVar4->Origin).field0_0x0._s_0.Z)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GridHelper->Origin == Origin",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
                         ,0x7d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FSquare2DGridHelper *)(*pcVar2)();
    return pFVar4;
  }
  if ((this->GridHelper->CellSize != (longlong)this->CellSize) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GridHelper->CellSize == CellSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
                         ,0x7e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FSquare2DGridHelper *)(*pcVar2)();
    return pFVar4;
  }
  pFVar4 = this->GridHelper;
  uVar1 = (this->WorldBounds).IsValid;
  if ((pFVar4->WorldBounds).IsValid == '\0') {
    if (uVar1 == '\0') {
      return pFVar4;
    }
  }
  else if ((((uVar1 != '\0') &&
            ((this->WorldBounds).Min.field0_0x0._s_0.X ==
             (pFVar4->WorldBounds).Min.field0_0x0._s_0.X)) &&
           (((this->WorldBounds).Min.field0_0x0._s_0.Y ==
             (pFVar4->WorldBounds).Min.field0_0x0._s_0.Y &&
            ((((this->WorldBounds).Min.field0_0x0._s_0.Z ==
               (pFVar4->WorldBounds).Min.field0_0x0._s_0.Z &&
              ((this->WorldBounds).Max.field0_0x0._s_0.X ==
               (pFVar4->WorldBounds).Max.field0_0x0._s_0.X)) &&
             ((this->WorldBounds).Max.field0_0x0._s_0.Y ==
              (pFVar4->WorldBounds).Max.field0_0x0._s_0.Y)))))) &&
          ((this->WorldBounds).Max.field0_0x0._s_0.Z == (pFVar4->WorldBounds).Max.field0_0x0._s_0.Z)
          ) {
    return pFVar4;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("GridHelper->WorldBounds == WorldBounds",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
                     ,0x7f,L"");
  if (!bVar3) {
    return this->GridHelper;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FSquare2DGridHelper *)(*pcVar2)();
  return pFVar4;
}

// GetLoadingRange @ 148acde70

float __thiscall FSpatialHashStreamingGrid::GetLoadingRange(FSpatialHashStreamingGrid *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint *puVar4;
  longlong lVar5;
  float *pfVar6;
  float fVar7;
  int local_res8 [2];
  
  bVar3 = UWorldPartitionSubsystem::GetOverrideLoadingRange(this->GridName,local_res8);
  if (bVar3) {
    return (float)local_res8[0];
  }
  if (OverriddenLoadingRanges._8_4_ != OverriddenLoadingRanges._52_4_) {
    lVar5 = 0x154c70d88;
    if (OverriddenLoadingRanges._64_8_ != 0) {
      lVar5 = OverriddenLoadingRanges._64_8_;
    }
    uVar1 = *(uint *)(lVar5 + (ulonglong)(OverriddenLoadingRanges._72_4_ - 1 & this->GridIndex) * 4)
    ;
    while (uVar1 != 0xffffffff) {
      puVar4 = (uint *)((longlong)(int)uVar1 * 0x10 + OverriddenLoadingRanges._0_8_);
      if (*puVar4 == this->GridIndex) {
        pfVar6 = (float *)(puVar4 + 1);
        if (puVar4 == (uint *)0x0) {
          pfVar6 = (float *)0x0;
        }
        if (pfVar6 != (float *)0x0) {
          if ((*pfVar6 <= 0.0 && *pfVar6 != 0.0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("*OverrideLoadingRange >= 0.f",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
                                 ,0xc1,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            fVar7 = (float)(*pcVar2)();
            return fVar7;
          }
          return *pfVar6;
        }
        break;
      }
      uVar1 = puVar4[2];
    }
  }
  return this->LoadingRange;
}

// GetNonSpatiallyLoadedCells @ 148acdff0

void __thiscall
FSpatialHashStreamingGrid::GetNonSpatiallyLoadedCells
          (FSpatialHashStreamingGrid *this,
          TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
          *param_1,TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
                   *param_2,FWorldPartitionStreamingContext *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
  *local_38;
  TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
  *local_30;
  FWorldPartitionStreamingContext *local_28;
  
  iVar1 = (this->GridLevels).ArrayNum;
  if (0 < iVar1) {
    uVar5 = iVar1 - 1;
    uVar4 = 0;
    if ((int)uVar5 < iVar1) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    local_38 = param_1;
    local_30 = param_2;
    local_28 = param_3;
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    `FSpatialHashStreamingGrid::GetNonSpatiallyLoadedCells'::__l5::<lambda_1>::operator()
              (&local_38,
               (FSpatialHashStreamingGridLevel *)
               ((this->GridLevels).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x60));
    if ((-1 < (int)uVar5) && ((int)uVar5 < (this->InjectedGridLevels).ArrayNum)) {
      uVar4 = 0;
      if ((int)uVar5 < (this->InjectedGridLevels).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      `FSpatialHashStreamingGrid::GetNonSpatiallyLoadedCells'::__l5::<lambda_1>::operator()
                (&local_38,
                 (FSpatialHashStreamingGridLevel *)
                 ((this->InjectedGridLevels).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x60));
    }
  }
  return;
}

// GetStreamingCellVisualizeMode @ 148ad1340

EWorldPartitionRuntimeCellVisualizeMode __thiscall
FSpatialHashStreamingGrid::GetStreamingCellVisualizeMode(FSpatialHashStreamingGrid *this)

{
  return (EWorldPartitionRuntimeCellVisualizeMode)
         (FWorldPartitionDebugHelper::ShowRuntimeSpatialHashCellStreamingPriorityMode == 0);
}

// InjectExternalStreamingObjectGrid @ 148ad2c20

void __thiscall
FSpatialHashStreamingGrid::InjectExternalStreamingObjectGrid
          (FSpatialHashStreamingGrid *this,FSpatialHashStreamingGrid *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  UObject *pUVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  FSquare2DGridHelper *pFVar11;
  FSquare2DGridHelper *pFVar12;
  ulonglong uVar13;
  UClass *pUVar14;
  FString *pFVar15;
  longlong lVar16;
  uint *puVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  ForAnyElementType *pFVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  wchar_t *pwVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  wchar_t *pwVar27;
  uint uVar28;
  longlong *plVar29;
  FScriptContainerElement *pFVar30;
  double dVar31;
  double dVar32;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_f8 [4];
  uint local_f4;
  uint local_f0;
  uint local_ec;
  UObject *local_e8;
  FScriptContainerElement *local_e0;
  uint local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  TPairInitializer<__int64_const_&,int_const_&> local_b8;
  longlong *local_a8;
  uint *local_a0;
  FString local_98;
  FString local_88;
  FString local_78 [3];
  
  if ((this->InjectedGridLevels).ArrayNum == 0) {
    uVar10 = (this->GridLevels).ArrayNum;
    if ((int)uVar10 < 1) {
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
      }
    }
    else {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x60,8,uVar10,&(this->InjectedGridLevels).AllocatorInstance,
                         &(this->InjectedGridLevels).ArrayNum,&(this->InjectedGridLevels).ArrayMax);
      memset((this->InjectedGridLevels).AllocatorInstance.Data + (longlong)iVar8 * 0x60,0,
             (longlong)(int)uVar10 * 0x60);
    }
  }
  pFVar11 = GetGridHelper(this);
  if (((pFVar11->Levels).ArrayNum != (this->InjectedGridLevels).ArrayNum) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetGridHelper().Levels.Num() == InjectedGridLevels.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
                         ,0x23d,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  dVar6 = __real_3fe0000000000000;
  dVar5 = __real_3ff0000000000000;
  local_ec = 0;
  if (0 < (param_1->GridLevels).ArrayNum) {
    local_c0 = 0;
    do {
      lVar26 = local_c0;
      uVar10 = local_ec;
      uVar28 = 0;
      if ((int)local_ec < (param_1->GridLevels).ArrayNum) {
        uVar28 = ~local_ec >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar28 = (this->GridLevels).ArrayNum - 1;
      local_e0 = (param_1->GridLevels).AllocatorInstance.Data;
      uVar9 = (param_1->GridLevels).ArrayNum - 1;
      if ((uVar10 != uVar9) && ((int)uVar10 < (int)uVar28)) {
        uVar28 = uVar10;
      }
      local_f0 = uVar28;
      if (((int)uVar28 < 0) || ((this->InjectedGridLevels).ArrayNum <= (int)uVar28)) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5839936091150351801>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
                           ,0x247,"InjectedGridLevels.IsValidIndex(TargetGridLevel)");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        if (uVar10 != uVar9) {
          pFVar11 = GetGridHelper(param_1);
          pFVar12 = GetGridHelper(this);
          uVar10 = 0;
          if ((int)uVar28 < (pFVar11->Levels).ArrayNum) {
            uVar10 = ~uVar28 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar30 = (pFVar11->Levels).AllocatorInstance.Data;
          uVar10 = 0;
          if ((int)uVar28 < (pFVar12->Levels).ArrayNum) {
            uVar10 = ~uVar28 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((*(longlong *)(pFVar30 + (longlong)(int)uVar28 * 0x88 + 0x10) !=
               *(longlong *)
                ((pFVar12->Levels).AllocatorInstance.Data + (longlong)(int)uVar28 * 0x88 + 0x10)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("bIsSourceTopLevel || InExternalObjectStreamingGrid.GetGridHelper().Levels[TargetGridLevel].CellSize == GetGridHelper().Levels[TargetGridLevel].CellSize"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
                                 ,0x249,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        local_d8 = *(uint *)(local_e0 + lVar26 + 8);
        uVar13 = (ulonglong)(int)local_d8;
        plVar29 = *(longlong **)(local_e0 + lVar26);
        plVar21 = plVar29 + uVar13 * 2;
        lVar24 = (longlong)(int)uVar28;
        local_c8 = lVar24;
        local_b8.Value = (int *)plVar21;
        while( true ) {
          if (*(int *)(local_e0 + lVar26 + 8) != (int)uVar13) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<FSpatialHashStreamingGridLayerCell_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_res18);
          }
          uVar10 = local_ec;
          if (plVar29 == plVar21) break;
          if ((int)plVar29[1] == 0) {
            bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_5839936091150351795>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
                               ,0x24d,"!ExternalObjectLayerCell.GridCells.IsEmpty()");
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          else {
            if (((int)plVar29[1] < 1) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar26 = *(longlong *)*plVar29;
            if (*(longlong *)(lVar26 + 0xa8) == 0) {
              pFVar15 = GetTypeName<UWorldPartitionRuntimeCellDataSpatialHash>(local_78);
              if ((pFVar15->Data).ArrayNum == 0) {
                pwVar23 = L"";
              }
              else {
                pwVar23 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
              }
                    /* WARNING: Subroutine does not return */
              CastLogError(L"nullptr",pwVar23);
            }
            pUVar14 = UWorldPartitionRuntimeCellDataSpatialHash::StaticClass();
            bVar7 = FObjectPtr::IsA((FObjectPtr *)(lVar26 + 0xa8),pUVar14);
            if ((!bVar7) || (lVar25 = *(longlong *)(lVar26 + 0xa8), lVar25 == 0)) {
              pFVar15 = GetTypeName<UWorldPartitionRuntimeCellDataSpatialHash>(&local_98);
              pwVar23 = L"";
              if ((pFVar15->Data).ArrayNum == 0) {
                pwVar27 = L"";
              }
              else {
                pwVar27 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
              }
              pFVar15 = GetFullNameForCastLogError<UWorldPartitionRuntimeCellData>
                                  (&local_88,*(UWorldPartitionRuntimeCellData **)(lVar26 + 0xa8));
              if ((pFVar15->Data).ArrayNum != 0) {
                pwVar23 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
              }
                    /* WARNING: Subroutine does not return */
              CastLogError(pwVar23,pwVar27);
            }
            pFVar11 = GetGridHelper(this);
            uVar10 = 0;
            if ((int)uVar28 < (pFVar11->Levels).ArrayNum) {
              uVar10 = ~uVar28 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar30 = (pFVar11->Levels).AllocatorInstance.Data;
            lVar24 = lVar24 * 0x88;
            lVar26 = *(longlong *)(pFVar30 + lVar24 + 0x18);
            dVar31 = dVar5 / (double)*(longlong *)(pFVar30 + lVar24 + 0x10);
            dVar32 = (double)lVar26 * dVar6;
            lVar19 = (longlong)
                     ROUND(((*(double *)(lVar25 + 0x100) - *(double *)(pFVar30 + lVar24 + 8)) *
                            (dVar31 + dVar31) + dVar32 + dVar32) - dVar6) >> 1;
            lVar25 = (longlong)
                     ROUND(((*(double *)(lVar25 + 0xf8) - *(double *)(pFVar30 + lVar24)) *
                            (dVar31 + dVar31) + dVar32 + dVar32) - dVar6) >> 1;
            if ((((lVar25 < 0) || (lVar26 <= lVar25)) || (lVar19 < 0)) || (lVar26 <= lVar19)) {
LAB_148ad30d8:
              lVar16 = (longlong)*(int *)(pFVar30 + lVar24 + 0x18);
              lVar26 = lVar16;
              if (lVar25 < lVar16) {
                lVar26 = lVar25;
              }
              lVar25 = 0;
              if (0 < lVar26) {
                lVar25 = lVar26;
              }
              if (lVar19 < lVar16) {
                lVar16 = lVar19;
              }
              lVar19 = 0;
              if (0 < lVar16) {
                lVar19 = lVar16;
              }
            }
            else if (lVar26 * lVar19 + lVar25 < 0) {
              local_res20[0] = 0;
              bVar7 = `FSquare2DGridHelper::FGrid2D::IsValidCoords'::__l6::<lambda_1>::operator()
                                (local_res20);
              if (!bVar7) goto LAB_148ad30d8;
            }
            local_d0 = lVar19 * *(longlong *)(pFVar30 + lVar24 + 0x18) + lVar25;
            uVar10 = 0;
            if ((int)uVar28 < (this->InjectedGridLevels).ArrayNum) {
              uVar10 = ~uVar28 >> 0x1f;
            }
            lVar26 = local_c8;
            if (uVar10 == 0) {
              lVar26 = (longlong)(int)uVar28;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            pFVar30 = (this->InjectedGridLevels).AllocatorInstance.Data + lVar26 * 0x60;
            if (*(int *)&pFVar30[0x18].field_0x0 != *(int *)(pFVar30 + 0x44)) {
              pFVar18 = pFVar30 + 0x48;
              if (*(FScriptContainerElement **)&pFVar30[0x50].field_0x0 !=
                  (FScriptContainerElement *)0x0) {
                pFVar18 = *(FScriptContainerElement **)&pFVar30[0x50].field_0x0;
              }
              iVar8 = *(int *)(pFVar18 +
                              ((ulonglong)(*(int *)&pFVar30[0x58].field_0x0 - 1) &
                              (local_d0 >> 0x20) * 0x17 + local_d0) * 4);
              if (iVar8 != -1) {
                do {
                  lVar26 = *(longlong *)&pFVar30[0x10].field_0x0 + (longlong)iVar8 * 0x18;
                  if (*(longlong *)(*(longlong *)&pFVar30[0x10].field_0x0 + (longlong)iVar8 * 0x18)
                      == local_d0) {
                    puVar17 = (uint *)(lVar26 + 8);
                    if (lVar26 == 0) {
                      puVar17 = (uint *)0x0;
                    }
                    if (puVar17 != (uint *)0x0) {
                      local_f4 = *puVar17;
                      goto LAB_148ad323d;
                    }
                    break;
                  }
                  iVar8 = *(int *)(lVar26 + 0x10);
                } while (iVar8 != -1);
              }
            }
            uVar10 = *(uint *)&pFVar30[8].field_0x0;
            if (uVar10 == *(uint *)(pFVar30 + 0xc)) {
              uVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,(ForAnyElementType *)pFVar30,(int *)(pFVar30 + 0xc));
            }
            *(uint *)&pFVar30[8].field_0x0 = uVar10 + 1;
            DefaultConstructItems<FSpatialHashStreamingGridLayerCell,int>
                      ((void *)(*(longlong *)&pFVar30->field_0x0 + (longlong)(int)uVar10 * 0x10),1);
            local_a8 = &local_d0;
            local_a0 = &local_f4;
            local_f4 = uVar10;
            TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<__int64_const_&,int_const_&>_>
                      ((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
                        *)(pFVar30 + 0x10),&local_b8,(bool *)&local_a8);
LAB_148ad323d:
            puVar22 = (undefined8 *)*plVar29;
            lVar25 = plVar29[1];
            puVar2 = puVar22 + (int)lVar25;
            while( true ) {
              if ((int)plVar29[1] != (int)lVar25) {
                local_f8[0] = 0;
                `TCheckedPointerIterator<TObjectPtr<UWorldPartitionRuntimeCell>_const_,int,0>::
                operator!='::__l2::<lambda_1>::operator()(local_f8);
              }
              plVar21 = (longlong *)local_b8.Value;
              lVar24 = local_c8;
              lVar26 = local_c0;
              uVar28 = local_f0;
              if (puVar22 == puVar2) break;
              lVar26 = (longlong)(int)local_f4;
              pUVar3 = (UObject *)*puVar22;
              uVar10 = 0;
              if ((int)local_f4 < *(int *)&pFVar30[8].field_0x0) {
                uVar10 = ~local_f4 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar20 = (ForAnyElementType *)(*(longlong *)&pFVar30->field_0x0 + lVar26 * 0x10);
              local_e8 = pUVar3;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)
                 ) {
                UE::GC::MarkAsReachable(pUVar3);
              }
              if (((pFVar20->Data <= (FScriptContainerElement *)&local_e8) &&
                  ((FScriptContainerElement *)&local_e8 <
                   pFVar20->Data + (longlong)*(int *)((longlong)&pFVar20[1].Data + 4) * 8)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar8 = *(int *)&pFVar20[1].Data;
              piVar1 = (int *)((longlong)&pFVar20[1].Data + 4);
              if (iVar8 == *piVar1) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,pFVar20,piVar1);
              }
              *(int *)&pFVar20[1].Data = iVar8 + 1;
              *(UObject **)(pFVar20->Data + (longlong)iVar8 * 8) = local_e8;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_e8 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(local_e8);
              }
              puVar22 = puVar22 + 1;
            }
          }
          plVar29 = plVar29 + 2;
          uVar13 = (ulonglong)local_d8;
        }
      }
      local_ec = uVar10 + 1;
      local_c0 = lVar26 + 0x60;
    } while ((int)local_ec < (param_1->GridLevels).ArrayNum);
  }
  return;
}

// InsertGridCell @ 148ad34f0

bool __thiscall
FSpatialHashStreamingGrid::InsertGridCell
          (FSpatialHashStreamingGrid *this,UWorldPartitionRuntimeCell *param_1,
          TIntVector3<__int64> *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FSquare2DGridHelper *pFVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  TArray<FSpatialHashStreamingGridLayerCell,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar14;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  TPairInitializer<__int64_&&,int_const_&> local_res18;
  UWorldPartitionRuntimeCell *local_68;
  int **local_60;
  uint *local_58;
  
  if ((param_1 == (UWorldPartitionRuntimeCell *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCell",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
                         ,0x216,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar1 = (param_2->field0_0x0)._s_0.Z;
  lVar2 = (param_2->field0_0x0)._s_0.X;
  lVar3 = (param_2->field0_0x0)._s_0.Y;
  uVar12 = (uint)uVar1;
  if ((-1 < (int)uVar12) && ((int)uVar12 < (this->GridLevels).ArrayNum)) {
    pFVar9 = GetGridHelper(this);
    uVar11 = 0;
    if ((int)uVar12 < (pFVar9->Levels).ArrayNum) {
      uVar11 = ~uVar12 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pFVar13 = (pFVar9->Levels).AllocatorInstance.Data;
    if ((((-1 < lVar2) &&
         (lVar4 = *(longlong *)(pFVar13 + (longlong)(int)uVar12 * 0x88 + 0x18), lVar2 < lVar4)) &&
        (-1 < lVar3)) && (lVar3 < lVar4)) {
      if (lVar4 * lVar3 + lVar2 < 0) {
        local_res8[0] = 0;
        bVar6 = `FSquare2DGridHelper::FGrid2D::IsValidCoords'::__l6::<lambda_1>::operator()
                          (local_res8);
        if (!bVar6) {
          return false;
        }
      }
      piVar14 = (int *)(lVar3 * *(longlong *)(pFVar13 + (longlong)(int)uVar12 * 0x88 + 0x18) + lVar2
                       );
      uVar11 = 0;
      if ((int)uVar12 < (this->GridLevels).ArrayNum) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      this_00 = (TArray<FSpatialHashStreamingGridLayerCell,TSizedDefaultAllocator<32>_> *)
                ((this->GridLevels).AllocatorInstance.Data + (uVar1 & 0xffffffff) * 0x60);
      puVar10 = (uint *)TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                        ::Find((TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                                *)(this_00 + 1),(long64)piVar14);
      if (puVar10 == (uint *)0x0) {
        local_res10[0] =
             TArray<FSpatialHashStreamingGridLayerCell,TSizedDefaultAllocator<32>_>::AddDefaulted
                       (this_00);
        local_60 = &local_res18.Value;
        local_58 = local_res10;
        local_res18.Value = piVar14;
        TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<__int64_&&,int_const_&>_>
                  ((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
                    *)(this_00 + 1),&local_res18,(bool *)&local_60);
      }
      else {
        local_res10[0] = *puVar10;
      }
      uVar12 = local_res10[0];
      uVar11 = 0;
      if ((int)local_res10[0] < this_00->ArrayNum) {
        uVar11 = ~local_res10[0] >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar13 = (this_00->AllocatorInstance).Data + (longlong)(int)uVar12 * 0x10;
      local_68 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_1 != (UWorldPartitionRuntimeCell *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      if (((*(FScriptContainerElement **)&pFVar13->field_0x0 <= (FScriptContainerElement *)&local_68
           ) && ((FScriptContainerElement *)&local_68 <
                 *(FScriptContainerElement **)&pFVar13->field_0x0 +
                 (longlong)*(int *)(pFVar13 + 0xc) * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iVar8 = *(int *)&pFVar13[8].field_0x0;
      if (iVar8 == *(int *)(pFVar13 + 0xc)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)pFVar13,(int *)(pFVar13 + 0xc));
      }
      *(int *)&pFVar13[8].field_0x0 = iVar8 + 1;
      *(UWorldPartitionRuntimeCell **)
       (*(FScriptContainerElement **)&pFVar13->field_0x0 + (longlong)iVar8 * 8) = local_68;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_68 != (UWorldPartitionRuntimeCell *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_68);
      }
      return true;
    }
  }
  return false;
}

// RemoveExternalStreamingObjectGrid @ 148ad8d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSpatialHashStreamingGrid::RemoveExternalStreamingObjectGrid
          (FSpatialHashStreamingGrid *this,FSpatialHashStreamingGrid *param_1)

{
  TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator> *this_00
  ;
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  UObject *pUVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  ForElementType<FSetElementId> FVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  TArray<FSpatialHashStreamingGridLayerCell,TSizedDefaultAllocator<32>_> *this_01;
  undefined8 *puVar20;
  undefined1 auStackY_218 [32];
  uint local_1d4;
  undefined1 local_1d0;
  undefined1 local_1cf;
  undefined1 local_1ce [6];
  undefined8 *local_1c8;
  uint local_1c0;
  uint local_1b8 [2];
  uint local_1b0 [2];
  uint local_1a8;
  uint local_1a4;
  longlong *local_1a0;
  FScriptContainerElement *local_198;
  longlong local_190;
  int local_188;
  int local_184;
  undefined1 local_180 [16];
  FScriptContainerElement *local_170;
  long64 local_168;
  longlong local_160;
  undefined8 *local_158;
  longlong *local_150;
  FSpatialHashStreamingGrid *local_148;
  FSpatialHashStreamingGrid *local_140;
  FScriptContainerElement *local_138;
  uint uStack_130;
  uint uStack_12c;
  TBitArray<FDefaultBitArrayAllocator> *local_128;
  undefined4 uStack_120;
  int iStack_11c;
  int local_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  FScriptContainerElement *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  longlong local_d8;
  longlong local_d0;
  uint *local_c8;
  longlong *local_c0;
  undefined4 local_9c;
  TSet<TTuple<int,__int64>,TDefaultMapHashableKeyFuncs<int,__int64,0>,FDefaultSetAllocator> local_98
  ;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1c0 = 0;
  if (0 < (param_1->GridLevels).ArrayNum) {
    local_190 = 0;
    local_148 = this;
    local_140 = param_1;
    do {
      lVar8 = local_190;
      uVar16 = local_1c0;
      uVar10 = 0;
      if ((int)local_1c0 < (param_1->GridLevels).ArrayNum) {
        uVar10 = ~local_1c0 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_198 = (param_1->GridLevels).AllocatorInstance.Data + lVar8;
      uVar10 = (this->GridLevels).ArrayNum - 1;
      if ((uVar16 != (param_1->GridLevels).ArrayNum - 1U) && ((int)uVar16 < (int)uVar10)) {
        uVar10 = uVar16;
      }
      if (((int)uVar10 < 0) || ((this->InjectedGridLevels).ArrayNum <= (int)uVar10)) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5839936091150351747>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
                           ,0x27d,"InjectedGridLevels.IsValidIndex(TargetGridLevel)");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        uVar16 = 0;
        uVar15 = uVar16;
        if ((int)uVar10 < (this->InjectedGridLevels).ArrayNum) {
          uVar15 = ~uVar10 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_01 = (TArray<FSpatialHashStreamingGridLayerCell,TSizedDefaultAllocator<32>_> *)
                  ((this->InjectedGridLevels).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x60)
        ;
        uVar15 = uVar16;
        if ((int)uVar10 < (this->InjectedGridLevels).ArrayNum) {
          uVar15 = ~uVar10 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar19 = (this->InjectedGridLevels).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x60;
        local_98.Elements._0_8_ = 0;
        local_98.Elements._32_8_ = 0;
        local_98.Elements._40_4_ = 0;
        local_118 = 0;
        local_98.Elements._52_4_ = 0;
        uStack_12c = 1;
        local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_98.HashSize = 0;
        pFVar18 = pFVar19 + 0x10;
        pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar19 + 0x20);
        local_98.Elements._8_8_ = 0;
        local_98.Elements._44_4_ = 0x80;
        local_98.Elements._48_4_ = 0xffffffff;
        iVar11 = *(int *)(pFVar19 + 0x38);
        iStack_11c = 0;
        if (iVar11 != 0) {
          pTVar17 = pTVar1;
          if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar19 + 0x30) !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar17 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar19 + 0x30);
          }
          uVar10 = *(uint *)(pTVar17->AllocatorInstance).InlineData;
          uVar16 = 0;
          while (uVar10 == 0) {
            lVar8 = (longlong)(int)uVar16;
            local_118 = local_118 + 0x20;
            uVar16 = uVar16 + 1;
            iStack_11c = iVar11;
            if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
            goto LAB_148ad8fad;
            uVar10 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar8 * 4 + 4);
          }
          uStack_12c = -uVar10 & uVar10;
          uVar7 = (ulonglong)uStack_12c * 2 + 1;
          lVar8 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          local_188 = (int)lVar8;
          iStack_11c = local_118 + -1 + local_188;
          if (iVar11 < iStack_11c) {
            iStack_11c = iVar11;
          }
        }
LAB_148ad8fad:
        uVar10 = *(uint *)(pFVar19 + 0x38);
        uStack_114 = local_9c;
        uVar15 = uVar10 & 0xffffffe0;
        iStack_110 = *(int *)(pFVar19 + 0x18) - *(int *)(pFVar19 + 0x44);
        TStack_100._padding_ = CONCAT44(uStack_12c,uVar16);
        uStack_120 = 0xffffffff;
        TStack_100.CurrentBitIndex = iStack_11c;
        TStack_100.UnvisitedBitMask = 0xffffffff;
        iVar11 = (int)uVar10 >> 5;
        TStack_100._28_4_ = local_9c;
        TStack_100.BaseBitIndex = local_118;
        uStack_e0 = CONCAT44(uStack_10c,iStack_110);
        local_170 = pFVar19;
        local_138 = pFVar18;
        uStack_130 = uVar16;
        local_128 = pTVar1;
        local_108 = pFVar18;
        TStack_100.Array = pTVar1;
        if (((int)uVar10 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar16 = *(uint *)(pFVar19 + 0x38);
        if (uVar10 != uVar16) {
          pTVar17 = pTVar1;
          if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar19 + 0x30) !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar17 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar19 + 0x30);
          }
          uVar10 = -1 << ((byte)uVar10 & 0x1f) &
                   *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
          while (uVar10 == 0) {
            lVar8 = (longlong)iVar11;
            uVar15 = uVar15 + 0x20;
            iVar11 = iVar11 + 1;
            uVar10 = uVar16;
            if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
            goto LAB_148ad90b0;
            uVar10 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar8 * 4 + 4);
          }
          uVar7 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
          lVar8 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          local_184 = (int)lVar8;
          uVar10 = (uVar15 - 1) + local_184;
          if ((int)uVar16 < (int)uVar10) {
            uVar10 = uVar16;
          }
        }
LAB_148ad90b0:
        while( true ) {
          pFVar19 = local_108;
          if (*(int *)(local_108 + 8) - *(int *)(local_108 + 0x34) != (int)uStack_e0) {
            local_1d0 = 0;
            `TSparseArray<TSparseSetElement<TTuple<__int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1d0);
          }
          if (((TStack_100.CurrentBitIndex == uVar10) && (TStack_100.Array == pTVar1)) &&
             (pFVar19 == pFVar18)) break;
          local_d0 = *(longlong *)pFVar19 + (longlong)TStack_100.CurrentBitIndex * 0x18;
          local_d8 = local_d0 + 8;
          TSet<TTuple<int,__int64>,TDefaultMapHashableKeyFuncs<int,__int64,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<int_const_&,__int64_const_&>_>
                    (&local_98,(TPairInitializer<int_const_&,__int64_const_&> *)local_180,
                     (bool *)&local_d8);
          TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
        }
        local_1a4 = *(uint *)(local_198 + 8);
        uVar7 = (ulonglong)(int)local_1a4;
        plVar12 = *(longlong **)local_198;
        local_150 = plVar12 + uVar7 * 2;
        while( true ) {
          plVar4 = local_150;
          local_1a0 = plVar12;
          if (*(int *)(local_198 + 8) != (int)uVar7) {
            local_1cf = 0;
            `TCheckedPointerIterator<FSpatialHashStreamingGridLayerCell_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_1cf);
          }
          if (plVar12 == plVar4) break;
          local_1a8 = *(uint *)(plVar12 + 1);
          uVar7 = (ulonglong)(int)local_1a8;
          puVar20 = (undefined8 *)*plVar12;
          local_158 = puVar20 + uVar7;
LAB_148ad9175:
          puVar13 = local_158;
          local_1c8 = puVar20;
          if ((int)plVar12[1] != (int)uVar7) {
            local_1ce[0] = 0;
            `TCheckedPointerIterator<TObjectPtr<UWorldPartitionRuntimeCell>_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_1ce);
          }
          if (puVar20 != puVar13) {
            iVar11 = this_01->ArrayNum;
            pUVar2 = (UObject *)*puVar20;
            uVar16 = 0;
            bVar5 = false;
            if (0 < iVar11) {
              lVar8 = 0;
              do {
                uVar10 = 0;
                if ((int)uVar16 < iVar11) {
                  uVar10 = ~uVar16 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar19 = (this_01->AllocatorInstance).Data + lVar8;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar2 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(pUVar2);
                }
                puVar20 = *(undefined8 **)pFVar19;
                for (puVar13 = puVar20; puVar13 != puVar20 + *(int *)(pFVar19 + 8);
                    puVar13 = puVar13 + 1) {
                  if ((UObject *)*puVar13 == pUVar2) {
                    uVar10 = (uint)((longlong)puVar13 - (longlong)puVar20 >> 3);
                    if (uVar10 != 0xffffffff) {
                      uVar15 = 0;
                      if ((int)(uVar10 + 1) <= *(int *)(pFVar19 + 8)) {
                        uVar15 = ~uVar10 >> 0x1f;
                      }
                      if ((uVar15 == 0) &&
                         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                             ,
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x458,
                                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                            ), bVar5)) {
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      iVar11 = *(int *)(pFVar19 + 8) + ~uVar10;
                      if (1 < iVar11) {
                        iVar11 = 1;
                      }
                      if (iVar11 != 0) {
                        memmove((void *)(*(longlong *)pFVar19 + (longlong)(int)uVar10 * 8),
                                (void *)(*(longlong *)pFVar19 +
                                        (longlong)(*(int *)(pFVar19 + 8) - iVar11) * 8),
                                (longlong)iVar11 << 3);
                      }
                      pFVar19 = pFVar19 + 8;
                      *(int *)pFVar19 = *(int *)pFVar19 + -1;
                      bVar5 = true;
                      puVar20 = local_1c8;
                      if (*(int *)pFVar19 != 0) goto LAB_148ad95ce;
                      uVar10 = 0;
                      if ((int)uVar16 < this_01->ArrayNum) {
                        uVar10 = ~uVar16 >> 0x1f;
                      }
                      local_1d4 = uVar16;
                      if ((uVar10 == 0) &&
                         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar6)) {
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      TArray<FSpatialHashStreamingGridLayerCell,TSizedDefaultAllocator<32>_>::
                      RemoveAtSwapImpl(this_01,uVar16);
                      if (local_98.Elements._8_4_ == local_98.Elements._52_4_) goto LAB_148ad93b2;
                      FVar9 = (ForElementType<FSetElementId>)&local_98.Hash;
                      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                        FVar9 = local_98.Hash.SecondaryData;
                      }
                      iVar11 = *(int *)((longlong)FVar9 +
                                       (ulonglong)(local_98.HashSize - 1U & local_1d4) * 4);
                      goto joined_r0x000148ad938a;
                    }
                    break;
                  }
                }
                iVar11 = this_01->ArrayNum;
                uVar16 = uVar16 + 1;
                lVar8 = lVar8 + 0x10;
                puVar20 = local_1c8;
              } while ((int)uVar16 < iVar11);
            }
            goto LAB_148ad95ce;
          }
          plVar12 = plVar12 + 2;
          uVar7 = (ulonglong)local_1a4;
        }
        local_98.HashSize = 0;
        if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_98.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<int,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<int,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_98.Elements);
        param_1 = local_140;
        this = local_148;
        uVar16 = local_1c0;
      }
      local_190 = local_190 + 0x60;
      local_1c0 = uVar16 + 1;
    } while ((int)local_1c0 < (param_1->GridLevels).ArrayNum);
  }
  return;
joined_r0x000148ad938a:
  if (iVar11 == -1) goto LAB_148ad93b2;
  lVar8 = local_98.Elements._0_8_ + (longlong)iVar11 * 0x18;
  if (*(uint *)(local_98.Elements._0_8_ + (longlong)iVar11 * 0x18) == local_1d4) {
    if (lVar8 != 0) goto LAB_148ad93de;
    goto LAB_148ad93b4;
  }
  iVar11 = *(int *)(lVar8 + 0x10);
  goto joined_r0x000148ad938a;
LAB_148ad93b2:
  lVar8 = 0;
LAB_148ad93b4:
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar6) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_148ad93de:
  pFVar19 = local_170;
  local_168 = *(long64 *)(lVar8 + 8);
  this_00 = (TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
             *)(local_170 + 0x10);
  if (*(int *)(local_170 + 0x18) != *(int *)(local_170 + 0x44)) {
    TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
    RemoveImpl<__int64>(this_00,(int)((ulonglong)local_168 >> 0x20) * 0x17 + (int)local_168,
                        &local_168);
  }
  local_1b8[0] = local_1d4;
  if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
    TSet<TTuple<int,__int64>,TDefaultMapHashableKeyFuncs<int,__int64,0>,FDefaultSetAllocator>::
    RemoveImpl<int>(&local_98,local_1d4,(int *)local_1b8);
  }
  puVar20 = local_1c8;
  if ((-1 < (int)local_1d4) && (uVar16 = this_01->ArrayNum, (int)local_1d4 < (int)uVar16)) {
    if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
      FVar9 = (ForElementType<FSetElementId>)&local_98.Hash;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar9 = local_98.Hash.SecondaryData;
      }
      iVar11 = *(int *)((longlong)FVar9 + (ulonglong)(local_98.HashSize - 1U & uVar16) * 4);
      while (iVar11 != -1) {
        lVar8 = local_98.Elements._0_8_ + (longlong)iVar11 * 0x18;
        if (*(uint *)(local_98.Elements._0_8_ + (longlong)iVar11 * 0x18) == uVar16) {
          if (lVar8 != 0) goto LAB_148ad94de;
          goto LAB_148ad94b4;
        }
        iVar11 = *(int *)(lVar8 + 0x10);
      }
    }
    lVar8 = 0;
LAB_148ad94b4:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_148ad94de:
    uVar10 = local_1d4;
    local_160 = *(longlong *)(lVar8 + 8);
    if (*(int *)(pFVar19 + 0x18) != *(int *)(pFVar19 + 0x44)) {
      pFVar18 = pFVar19 + 0x48;
      if (*(FScriptContainerElement **)(pFVar19 + 0x50) != (FScriptContainerElement *)0x0) {
        pFVar18 = *(FScriptContainerElement **)(pFVar19 + 0x50);
      }
      iVar11 = *(int *)(pFVar18 +
                       ((local_160 >> 0x20) * 0x17 + local_160 &
                       (ulonglong)(*(int *)(pFVar19 + 0x58) - 1)) * 4);
      if (iVar11 != -1) {
        lVar8 = *(longlong *)&this_00->Elements;
        do {
          lVar14 = lVar8 + (longlong)iVar11 * 0x18;
          if (*(longlong *)(lVar8 + (longlong)iVar11 * 0x18) == local_160) {
            if (lVar14 != 0) goto LAB_148ad9574;
            goto LAB_148ad954e;
          }
          iVar11 = *(int *)(lVar14 + 0x10);
        } while (iVar11 != -1);
      }
    }
    lVar14 = 0;
LAB_148ad954e:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_148ad9574:
    *(uint *)(lVar14 + 8) = uVar10;
    local_1b0[0] = uVar16;
    if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
      TSet<TTuple<int,__int64>,TDefaultMapHashableKeyFuncs<int,__int64,0>,FDefaultSetAllocator>::
      RemoveImpl<int>(&local_98,uVar16,(int *)local_1b0);
    }
    local_c8 = &local_1d4;
    local_c0 = &local_160;
    TSet<TTuple<int,__int64>,TDefaultMapHashableKeyFuncs<int,__int64,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,__int64_const_&>_>
              (&local_98,(TPairInitializer<int_const_&,__int64_const_&> *)(local_180 + 8),
               (bool *)&local_c8);
    puVar20 = local_1c8;
  }
LAB_148ad95ce:
  iVar11 = this_01->ArrayNum;
  if (this_01->ArrayMax != iVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar11,(ForAnyElementType *)this_01,iVar11,&this_01->ArrayMax);
  }
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bFound",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
                         ,0x2a9,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar20 = puVar20 + 1;
  uVar7 = (ulonglong)local_1a8;
  plVar12 = local_1a0;
  goto LAB_148ad9175;
}

