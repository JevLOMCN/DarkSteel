// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 3

// operator() @ 14cee63b0

double __thiscall
`FPCGPrimitiveCrossSectionElement::ExecuteInternal'::__l57::<lambda_1>::operator()
          (void *this,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  double dVar13;
  undefined1 local_res10 [8];
  FScriptContainerElement *local_res18;
  longlong local_res20;
  undefined8 local_68;
  FScriptContainerElement *local_60;
  FScriptContainerElement *local_58;
  
  iVar8 = param_1->ArrayNum;
  uVar9 = (ulonglong)iVar8;
  local_res18 = (FScriptContainerElement *)CONCAT44(local_res18._4_4_,iVar8);
  if (iVar8 < 3) {
    return 0.0;
  }
  local_68 = *(undefined8 *)this;
  pFVar11 = (param_1->AllocatorInstance).Data;
  pFVar2 = pFVar11 + uVar9 * 0x18;
  while( true ) {
    if (param_1->ArrayNum != (int)uVar9) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar11 == pFVar2) break;
    ``FPCGPrimitiveCrossSectionElement::ExecuteInternal'::__l57::<lambda_1>::operator()'::__l2::
    <lambda_1>::operator()(&local_68,(TVector<double> *)pFVar11);
    uVar9 = (ulonglong)local_res18 & 0xffffffff;
    pFVar11 = pFVar11 + 0x18;
  }
  iVar8 = param_1->ArrayNum;
  dVar13 = 0.0;
  uVar7 = 0;
  if (0 < iVar8 + -1) {
    local_res20 = 0;
    dVar13 = 0.0;
    uVar10 = 0;
    do {
      lVar4 = local_res20;
      uVar6 = 0;
      if ((int)uVar10 < iVar8) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          dVar13 = (double)(*pcVar3)();
          return dVar13;
        }
      }
      local_58 = (param_1->AllocatorInstance).Data;
      uVar12 = uVar10 + 1;
      uVar6 = uVar7;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          dVar13 = (double)(*pcVar3)();
          return dVar13;
        }
      }
      local_60 = (param_1->AllocatorInstance).Data;
      uVar6 = uVar7;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          dVar13 = (double)(*pcVar3)();
          return dVar13;
        }
      }
      lVar1 = lVar4 + 0x18;
      pFVar2 = (param_1->AllocatorInstance).Data;
      uVar6 = uVar7;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          dVar13 = (double)(*pcVar3)();
          return dVar13;
        }
      }
      iVar8 = param_1->ArrayNum;
      dVar13 = dVar13 + (*(double *)(local_60 + lVar4 + 0x20) * *(double *)(local_58 + local_res20)
                        - *(double *)((param_1->AllocatorInstance).Data + local_res20 + 8) *
                          *(double *)(pFVar2 + lVar1));
      local_res20 = lVar1;
      uVar10 = uVar12;
    } while ((int)uVar12 < iVar8 + -1);
  }
  uVar10 = (int)local_res18 - 1;
  if ((int)uVar10 < iVar8) {
    uVar7 = ~uVar10 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      dVar13 = (double)(*pcVar3)();
      return dVar13;
    }
  }
  local_res18 = (param_1->AllocatorInstance).Data;
  if (param_1->ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      dVar13 = (double)(*pcVar3)();
      return dVar13;
    }
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (param_1->ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      dVar13 = (double)(*pcVar3)();
      return dVar13;
    }
  }
  pFVar11 = (param_1->AllocatorInstance).Data;
  uVar7 = 0;
  if ((int)uVar10 < param_1->ArrayNum) {
    uVar7 = ~uVar10 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      dVar13 = (double)(*pcVar3)();
      return dVar13;
    }
  }
  dVar13 = (*(double *)(pFVar2 + 8) * *(double *)(local_res18 + (longlong)(int)uVar10 * 0x18) -
           *(double *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x18 + 8) *
           *(double *)pFVar11) + dVar13;
  return (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
         __real_3fe0000000000000;
}

// ExecuteInternal @ 14ceede50

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
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPCGPrimitiveCrossSectionElement::ExecuteInternal
          (FPCGPrimitiveCrossSectionElement *this,FPCGContext *param_1)

{
  int *piVar1;
  atomic<int> *paVar2;
  void **ppvVar3;
  ForElementType<int> FVar4;
  double *pdVar5;
  FScriptContainerElement *pFVar6;
  IPCGElement *pIVar7;
  void *pvVar8;
  UPCGNode *this_00;
  longlong *plVar9;
  FCrossSection *pFVar10;
  code *pcVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  __m128d _Var18;
  __m128d _Var19;
  __m128d _Var20;
  __m128d _Var21;
  __m128d _Var22;
  __m128d _Var23;
  FPCGContext *pFVar24;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar25;
  bool bVar26;
  bool bVar27;
  undefined1 uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  UClass *pUVar33;
  UPCGSettings *pUVar34;
  TObjectPtr<UPCGSettings>_u_0 TVar35;
  longlong lVar36;
  UObject *pUVar37;
  UPCGSplineData *this_01;
  UPCGMetadata *this_02;
  FPCGMetadataDomain *this_03;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *pFVar38;
  FText *pFVar39;
  uint uVar40;
  ulonglong uVar41;
  ForElementType<int> FVar42;
  uint uVar43;
  uint uVar44;
  FIdentityFunctor FVar45;
  uint uVar46;
  longlong lVar47;
  longlong lVar48;
  uint uVar49;
  FPCGTaggedData *pFVar50;
  FIdentityFunctor FVar51;
  uint uVar52;
  ForAnyElementType _Dst;
  UDynamicMesh *pUVar53;
  FCrossSection *pFVar54;
  ForElementType<int> FVar55;
  FPCGDataPtrWrapper *this_04;
  ForAnyElementType FVar56;
  ulonglong uVar57;
  FScriptContainerElement *pFVar58;
  FScriptContainerElement *pFVar59;
  FIdentityFunctor FVar60;
  double dVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar65;
  float fVar66;
  double dVar67;
  undefined1 auVar68 [16];
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined4 uVar82;
  undefined4 uVar83;
  undefined4 uVar84;
  undefined1 auStackY_798 [32];
  FIdentityFunctor local_747;
  char local_746;
  char local_745;
  <lambda_1> local_744 [4];
  FScriptContainerElement *local_740;
  uint local_738 [2];
  ForAnyElementType local_730;
  undefined8 local_728;
  undefined1 local_720;
  undefined1 local_71f;
  bool local_71e [6];
  UDynamicMesh *local_718;
  TObjectPtr<UPCGSettings>_u_0 local_710;
  ForAnyElementType local_708;
  undefined8 local_700;
  TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> local_6f8;
  int *local_6e8;
  ForAnyElementType local_6e0;
  uint local_6d8;
  uint local_6d4;
  TArray<FGeometryScriptPolyPath,TSizedDefaultAllocator<32>_> local_6d0;
  TArray<FSplinePoint,TSizedDefaultAllocator<32>_> local_6c0;
  bool local_6b0;
  undefined1 local_6af;
  undefined1 local_6ae [6];
  ulonglong local_6a8;
  undefined1 local_6a0 [8];
  TVector<double>_u_0 local_698;
  FCrossSection *local_680;
  int local_678 [2];
  FPCGContext *local_670;
  undefined2 local_668;
  undefined2 uStack_666;
  undefined4 uStack_664;
  undefined2 local_660;
  undefined2 uStack_65e;
  TArray<FGeometryScriptIndexList,TSizedDefaultAllocator<32>_> local_658;
  ForAnyElementType local_648;
  double dStack_640;
  FGeometryScriptVectorList local_638;
  double local_628 [2];
  undefined8 local_618;
  undefined8 local_610;
  FGeometryScriptMeshSelection local_608;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_5f8;
  double local_5e8 [2];
  FScriptContainerElement *local_5d8;
  FName local_5d0;
  double local_5c8;
  double dStack_5c0;
  double local_5b8;
  FGeometryScriptMeshSelection local_5a8;
  double local_598 [2];
  double local_588;
  undefined1 local_580 [4];
  undefined1 local_57c [4];
  FGeometryScriptMeshBooleanOptions local_578;
  FName local_568;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_560;
  undefined1 *local_550;
  UPCGSplineData *local_548;
  FString local_540;
  FText local_530;
  double local_518;
  double dStack_510;
  undefined8 local_508;
  TVector<double>_u_0 local_4f8;
  TVector<double>_u_0 local_4d8;
  TQuat<double> local_4b8;
  FGeometryScriptMeshPlaneCutOptions local_498;
  FGeometryScriptMeshSelection local_488;
  FGeometryScriptMeshSelection local_478;
  FGeometryScriptMeshSelection local_468;
  double local_458;
  FPCGMetadataDomainID local_448;
  FText local_438;
  TSharedRef<FTextFormatData,1> local_428;
  FText local_418;
  FText local_408;
  FText local_3f8;
  TVector<double>_u_0 local_3e8;
  TVector<double>_u_0 local_3c8;
  TVector<double>_u_0 local_3a8;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368 [2];
  double local_358;
  undefined8 uStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  undefined1 local_328 [16];
  double local_318;
  double dStack_310;
  TTransform<double> local_308;
  TTransform<double> local_2a8;
  TTransform<double> local_248;
  TTransform<double> local_1e8;
  TTransform<double> local_188;
  ForElementType<int> local_128;
  uint local_e0;
  uint local_dc;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_798;
  FVar60 = (FIdentityFunctor)(-1 < CpuChannel->Enabled);
  local_670 = param_1;
  if ((bool)FVar60) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId69,"FPCGPrimitiveCrossSectionElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGPrimitiveCrossSection.cpp"
               ,0x45);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId69);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar34 = UPCGNode::GetSettings(this_00), pUVar34 == (UPCGSettings *)0x0)) {
      pFVar50 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGPrimitiveCrossSectionSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_744[0]);
      if (pFVar50 != (FPCGTaggedData *)0x0) {
        local_710.DebugPtr =
             (UPCGSettings *)Cast<UPCGPrimitiveCrossSectionSettings_const_>(&pFVar50->Data);
        goto LAB_14ceedf7d;
      }
    }
    else {
      pUVar34 = UPCGNode::GetSettings(this_00);
      TVar35.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar34);
      if ((UPCGPrimitiveCrossSectionSettings *)TVar35.DebugPtr !=
          (UPCGPrimitiveCrossSectionSettings *)0x0) {
        local_710.DebugPtr = TVar35.DebugPtr;
        pUVar33 = UPCGPrimitiveCrossSectionSettings::StaticClass();
        iVar29 = (int)pUVar33->_padding_;
        if ((iVar29 <= *(int *)((TVar35.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar35.DebugPtr)->_padding_ + 0x30) + (longlong)iVar29 * 8) ==
            &pUVar33->_padding_)) goto LAB_14ceedf7d;
      }
    }
    local_710.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar33 = UPCGPrimitiveCrossSectionSettings::StaticClass();
    bVar26 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar33);
    if (bVar26) {
      local_710 = (param_1->SettingsWithOverride).field0_0x0;
    }
    else {
      local_710.DebugPtr = (UPCGSettings *)0x0;
    }
  }
LAB_14ceedf7d:
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_5f8,&PCGPinConstants::DefaultInputLabel);
  iVar29 = local_5f8.ArrayNum;
  if (local_5f8.ArrayNum != 0) {
    local_6f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar50 = (FPCGTaggedData *)
              (local_5f8.AllocatorInstance.Data + (longlong)local_5f8.ArrayNum * 0x78);
    local_6f8.ArrayNum = 0;
    local_6f8.ArrayMax = 0;
    FVar56.Data = local_5f8.AllocatorInstance.Data;
    while( true ) {
      if (local_5f8.ArrayNum != iVar29) {
        local_720 = 0;
        `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_720);
      }
      if ((FPCGTaggedData *)FVar56.Data == pFVar50) break;
      PCGGeometryHelpers::ConvertDataToDynMeshes
                ((((FPCGTaggedData *)FVar56.Data)->Data).Data.field0_0x0.DebugPtr,param_1,&local_6f8
                 ,false,(UGeometryScriptDebug *)0x0);
      FVar56.Data = FVar56.Data + 0x78;
    }
    iVar29 = local_6f8.ArrayNum;
    if (local_6f8.ArrayNum != 0) {
      do {
        uVar49 = 0;
        bVar26 = false;
        uVar46 = 1;
        if (iVar29 < 1) break;
        local_718 = (UDynamicMesh *)&DAT_00000001;
        local_6a8 = 0;
        local_740 = (FScriptContainerElement *)CONCAT44(local_740._4_4_,1);
        do {
          if ((int)uVar46 < iVar29) {
            pUVar53 = local_718;
            do {
              _Var20.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
              _Var22.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
              _Var21.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
              _Var18.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
              uVar69 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
              uVar70 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
              uVar71 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
              uVar72 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
              uVar73 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
              uVar74 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
              uVar76 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
              uVar77 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
              uVar75 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
              uVar78 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
              uVar79 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
              uVar80 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
              uVar81 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
              uVar82 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
              uVar83 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
              uVar84 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
              uVar52 = ~uVar46 >> 0x1f;
              local_747 = (FIdentityFunctor)0x0;
              local_648.Data =
                   (FScriptContainerElement *)
                   UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
              dStack_640 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
              uVar40 = 0;
              if ((int)uVar46 < iVar29) {
                uVar40 = uVar52;
              }
              local_628[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
              local_628[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
              if (uVar40 == 0) {
                bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar27) {
                  pcVar11 = (code *)swi(3);
                  uVar28 = (*pcVar11)();
                  return (bool)uVar28;
                }
                uVar69 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
                uVar70 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
                uVar71 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
                uVar72 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
                uVar73 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
                uVar74 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
                uVar76 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
                uVar77 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
                uVar75 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
                uVar78 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
                uVar79 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
                uVar80 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
                uVar81 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
                uVar82 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
                uVar83 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
                uVar84 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
                iVar29 = local_6f8.ArrayNum;
              }
              _Var23.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
              _Var19.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
              local_5e8[0] = *(double *)(local_6f8.AllocatorInstance.Data + (longlong)pUVar53 * 8);
              uVar40 = 0;
              if ((int)uVar49 < iVar29) {
                uVar40 = ~uVar49 >> 0x1f;
              }
              if ((uVar40 == 0) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar27)) {
                pcVar11 = (code *)swi(3);
                uVar28 = (*pcVar11)();
                return (bool)uVar28;
              }
              uVar13 = local_6a8;
              local_308.Rotation.XY.m128d_f64 = _Var18.m128d_f64;
              local_308.Rotation.ZW.m128d_f64 = _Var21.m128d_f64;
              local_308.Translation.XY.m128d_f64 = _Var22.m128d_f64;
              local_308.Translation.ZW.m128d_f64 = _Var20.m128d_f64;
              local_308.Scale3D.XY.m128d_f64[0] = (double)local_648.Data;
              local_308.Scale3D.XY.m128d_f64[1] = dStack_640;
              local_308.Scale3D.ZW.m128d_f64[0] = local_628[0];
              local_308.Scale3D.ZW.m128d_f64[1] = local_628[1];
              local_2a8.Rotation.XY.m128d_f64 = _Var19.m128d_f64;
              local_2a8.Scale3D.XY.m128d_f64 = _Var23.m128d_f64;
              local_2a8.Rotation.ZW.m128d_f64[0]._0_4_ = uVar69;
              local_2a8.Rotation.ZW.m128d_f64[0]._4_4_ = uVar70;
              local_2a8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar71;
              local_2a8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar72;
              local_2a8.Translation.XY.m128d_f64[0]._0_4_ = uVar73;
              local_2a8.Translation.XY.m128d_f64[0]._4_4_ = uVar74;
              local_2a8.Translation.XY.m128d_f64[1]._0_4_ = uVar76;
              local_2a8.Translation.XY.m128d_f64[1]._4_4_ = uVar77;
              local_2a8.Translation.ZW.m128d_f64[0]._0_4_ = uVar75;
              local_2a8.Translation.ZW.m128d_f64[0]._4_4_ = uVar78;
              local_2a8.Translation.ZW.m128d_f64[1]._0_4_ = uVar79;
              local_2a8.Translation.ZW.m128d_f64[1]._4_4_ = uVar80;
              local_2a8.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar81;
              local_2a8.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar82;
              local_2a8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar83;
              local_2a8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar84;
              UGeometryScriptLibrary_MeshComparisonFunctions::IsIntersectingMesh
                        (*(UDynamicMesh **)(local_6f8.AllocatorInstance.Data + local_6a8),&local_2a8
                         ,(UDynamicMesh *)local_5e8[0],&local_308,(bool *)&local_747,
                         (UGeometryScriptDebug *)0x0);
              _Var22 = UE::Math::TTransform<double>::Identity.Translation.XY;
              _Var21 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
              _Var18 = UE::Math::TTransform<double>::Identity.Rotation.XY;
              if (local_747 != (FIdentityFunctor)0x0) {
                bVar26 = true;
                uVar69 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
                uVar70 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
                uVar71 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
                uVar72 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
                uVar73 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
                uVar74 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
                uVar76 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
                uVar77 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
                uVar75 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
                uVar78 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
                uVar79 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
                uVar80 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
                uVar81 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
                uVar82 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
                uVar83 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
                uVar84 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
                uStack_666 = 0;
                uStack_664 = 0x3c23d70a;
                uStack_65e = 0;
                local_660 = 0;
                local_6e8 = (int *)((ulonglong)local_6e8 & 0xffffffff00000000);
                local_668 = 0x101;
                uVar40 = 0;
                if ((int)uVar46 < local_6f8.ArrayNum) {
                  uVar40 = uVar52;
                }
                local_648.Data =
                     (FScriptContainerElement *)
                     UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
                dStack_640 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
                local_628[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
                local_628[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
                local_5e8[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
                local_5e8[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
                if (uVar40 == 0) {
                  bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar27) {
                    pcVar11 = (code *)swi(3);
                    uVar28 = (*pcVar11)();
                    return (bool)uVar28;
                  }
                  uVar69 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
                  uVar70 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
                  uVar71 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
                  uVar72 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
                  uVar73 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
                  uVar74 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
                  uVar76 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
                  uVar77 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
                  uVar75 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
                  uVar78 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
                  uVar79 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
                  uVar80 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
                  uVar81 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
                  uVar82 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
                  uVar83 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
                  uVar84 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
                }
                _Var19.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
                _Var20.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
                pUVar53 = *(UDynamicMesh **)
                           (local_6f8.AllocatorInstance.Data + (longlong)pUVar53 * 8);
                uVar40 = 0;
                if ((int)uVar49 < local_6f8.ArrayNum) {
                  uVar40 = ~uVar49 >> 0x1f;
                }
                if ((uVar40 == 0) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar27)) {
                  pcVar11 = (code *)swi(3);
                  uVar28 = (*pcVar11)();
                  return (bool)uVar28;
                }
                piVar1 = local_6e8;
                local_578.bAllowEmptyResult = (bool)local_6e8._0_1_;
                local_578.OutputTransformSpace = local_6e8._1_1_;
                local_578._10_2_ = local_6e8._2_2_;
                local_248.Translation.ZW.m128d_f64[0] = (double)local_648.Data;
                local_248.Translation.ZW.m128d_f64[1] = dStack_640;
                local_248.Scale3D.ZW.m128d_f64[0] = local_5e8[0];
                local_248.Scale3D.ZW.m128d_f64[1] = local_5e8[1];
                local_248.Rotation.XY.m128d_f64 = _Var18.m128d_f64;
                local_248.Rotation.ZW.m128d_f64 = _Var21.m128d_f64;
                local_248.Translation.XY.m128d_f64 = _Var22.m128d_f64;
                local_248.Scale3D.XY.m128d_f64[0] = local_628[0];
                local_248.Scale3D.XY.m128d_f64[1] = local_628[1];
                local_1e8.Rotation.XY.m128d_f64 = _Var20.m128d_f64;
                local_1e8.Scale3D.XY.m128d_f64 = _Var19.m128d_f64;
                local_6e8 = piVar1;
                local_578._0_8_ = 0x3c23d70a00000101;
                local_1e8.Rotation.ZW.m128d_f64[0]._0_4_ = uVar69;
                local_1e8.Rotation.ZW.m128d_f64[0]._4_4_ = uVar70;
                local_1e8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar71;
                local_1e8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar72;
                local_1e8.Translation.XY.m128d_f64[0]._0_4_ = uVar73;
                local_1e8.Translation.XY.m128d_f64[0]._4_4_ = uVar74;
                local_1e8.Translation.XY.m128d_f64[1]._0_4_ = uVar76;
                local_1e8.Translation.XY.m128d_f64[1]._4_4_ = uVar77;
                local_1e8.Translation.ZW.m128d_f64[0]._0_4_ = uVar75;
                local_1e8.Translation.ZW.m128d_f64[0]._4_4_ = uVar78;
                local_1e8.Translation.ZW.m128d_f64[1]._0_4_ = uVar79;
                local_1e8.Translation.ZW.m128d_f64[1]._4_4_ = uVar80;
                local_1e8.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar81;
                local_1e8.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar82;
                local_1e8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar83;
                local_1e8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar84;
                UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshBoolean
                          (*(UDynamicMesh **)(local_6f8.AllocatorInstance.Data + uVar13),&local_1e8,
                           pUVar53,&local_248,Union,
                           (FGeometryScriptMeshBooleanOptions *)(local_57c + 4),
                           (UGeometryScriptDebug *)0x0);
                uVar40 = 0;
                if ((int)uVar46 < local_6f8.ArrayNum) {
                  uVar40 = uVar52;
                }
                if (uVar40 == 0) {
                  bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar27) {
                    pcVar11 = (code *)swi(3);
                    uVar28 = (*pcVar11)();
                    return (bool)uVar28;
                  }
                }
                iVar29 = (local_6f8.ArrayNum - uVar46) + -1;
                if (1 < iVar29) {
                  iVar29 = 1;
                }
                iVar32 = local_6f8.ArrayNum;
                if (iVar29 != 0) {
                  memmove(local_6f8.AllocatorInstance.Data + (longlong)(int)uVar46 * 8,
                          local_6f8.AllocatorInstance.Data +
                          (longlong)(local_6f8.ArrayNum - iVar29) * 8,(longlong)iVar29 << 3);
                  iVar32 = local_6f8.ArrayNum;
                }
                local_6f8.ArrayNum = iVar32 + -1;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,&local_6f8.AllocatorInstance,iVar32 + -1,&local_6f8.ArrayMax);
                uVar49 = uVar49 - 1;
                uVar46 = (uint)local_740 - 1;
                local_718 = (UDynamicMesh *)&local_718[-1].field_0xcf;
                local_6a8 = uVar13 - 8;
                iVar29 = local_6f8.ArrayNum;
                goto LAB_14ceee578;
              }
              uVar46 = uVar46 + 1;
              pUVar53 = (UDynamicMesh *)((longlong)&pUVar53->_padding_ + 1);
              iVar29 = local_6f8.ArrayNum;
            } while ((int)uVar46 < local_6f8.ArrayNum);
            uVar46 = (uint)local_740;
          }
LAB_14ceee578:
          uVar46 = uVar46 + 1;
          local_718 = (UDynamicMesh *)((longlong)&local_718->_padding_ + 1);
          local_6a8 = local_6a8 + 8;
          local_740 = (FScriptContainerElement *)CONCAT44(local_740._4_4_,uVar46);
          uVar49 = uVar49 + 1;
        } while ((int)uVar49 < iVar29);
      } while (bVar26);
      UE::Math::TVector<double>::GetSafeNormal
                ((TVector<double> *)(local_710.DebugPtr + 1),(TVector<double> *)&local_698._s_0,
                 __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
      dVar17 = __real_3f1a36e2eb1c432d;
      dVar16 = __real_4059000000000000;
      uVar49 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar46 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      dVar15 = __real_3fe0000000000000;
      dVar14 = __real_3e45798ee2308c3a;
      auVar64._8_8_ = 0;
      auVar64._0_8_ = __real_7fefffffffffffff;
      uVar69 = (undefined4)__real_3f847ae147ae147b;
      uVar13 = (ulonglong)__real_3f847ae147ae147b >> 0x20;
      uVar41 = (ulonglong)iVar29;
      local_6a8 = CONCAT44(local_6a8._4_4_,iVar29);
      local_5e8[0] = (double)(local_6f8.AllocatorInstance.Data + uVar41 * 8);
      pFVar59 = local_6f8.AllocatorInstance.Data + uVar41 * 8;
      FVar56.Data = local_6f8.AllocatorInstance.Data;
      FVar45 = local_747;
      FVar51 = local_747;
      while( true ) {
        local_5d8 = FVar56.Data;
        if (iVar29 != (int)uVar41) {
          local_71f = 0;
          `TCheckedPointerIterator<UDynamicMesh_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_71f);
          pFVar59 = (FScriptContainerElement *)local_5e8[0];
        }
        if (FVar56.Data == pFVar59) break;
        pUVar53 = *(UDynamicMesh **)FVar56.Data;
        local_718 = pUVar53;
        if ((pUVar53 == (UDynamicMesh *)0x0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("DynamicMesh",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGPrimitiveCrossSection.cpp"
                                ,0x8f,L""), bVar26)) {
          pcVar11 = (code *)swi(3);
          uVar28 = (*pcVar11)();
          return (bool)uVar28;
        }
        local_618 = 0x13a83126f;
        UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToPlanar
                  (pUVar53,(FGeometryScriptPlanarSimplifyOptions)0x13a83126f,
                   (UGeometryScriptDebug *)0x0);
        local_71e[0] = false;
        local_638.List.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0
        ;
        local_638.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
        ;
        UGeometryScriptLibrary_MeshQueryFunctions::GetAllVertexPositions
                  (pUVar53,&local_638,false,local_71e);
        if (((local_638.List.Object ==
              (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) ||
            ((local_638.List.Object)->ArrayNum == 0)) ||
           (*(int *)((longlong)&local_710.DebugPtr[1].OriginalSettings + 4) <
            (local_638.List.Object)->ArrayNum)) {
          pFVar39 = FText::AsLocalizable_Advanced_LocText
                              (&local_3f8,L"PCGPrimitiveCrossSectionElement",L"MaxMeshVertexCount",
                               L"Mesh is invalid, empty, or exceeds Max Mesh Vertex Count and will be skipped."
                              );
          PCGLog::LogWarningOnGraph(pFVar39,local_670);
          if (local_3f8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_3f8.TextData.Reference + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_638.List.SharedReferenceCount.ReferenceController);
        }
        else {
          local_708.Data = (FScriptContainerElement *)0x0;
          local_700 = 0;
          dVar65 = auVar64._0_8_;
          local_6e0.Data = (FScriptContainerElement *)0x0;
          local_6d8 = 0;
          local_6d4 = 0;
          uVar40 = (local_638.List.Object)->ArrayNum;
          local_5c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          dStack_5c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_5b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          if ((int)uVar40 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar40);
          }
          if (0 < (int)uVar40) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar40,&local_6e0,0,(int *)&local_6d4);
          }
          if ((local_638.List.Object ==
               (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x44d,L""), bVar26)) {
            pcVar11 = (code *)swi(3);
            uVar28 = (*pcVar11)();
            return (bool)uVar28;
          }
          pTVar25 = local_638.List.Object;
          iVar29 = (local_638.List.Object)->ArrayNum;
          pFVar58 = ((local_638.List.Object)->AllocatorInstance).Data;
          pFVar59 = pFVar58 + (longlong)iVar29 * 0x18;
          while( true ) {
            if (pTVar25->ArrayNum != iVar29) {
              local_71e[1] = false;
              `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_71e + 1);
            }
            if (pFVar58 == pFVar59) break;
            dVar67 = local_698._s_0.Y * *(double *)(pFVar58 + 8) +
                     local_698._s_0.X * *(double *)pFVar58 +
                     local_698._s_0.Z * *(double *)(pFVar58 + 0x10);
            if (local_6d8 == local_6d4) {
              local_6d8 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x808,&local_6e0,(int *)&local_6d4);
            }
            *(double *)(local_6e0.Data + (longlong)(int)local_6d8 * 8) = dVar67;
            if (dVar67 < dVar65) {
              local_5c8 = *(double *)pFVar58;
              dStack_5c0 = *(double *)(pFVar58 + 8);
              local_5b8 = *(double *)(pFVar58 + 0x10);
              dVar65 = dVar67;
            }
            pFVar58 = pFVar58 + 0x18;
            local_6d8 = local_6d8 + 1;
          }
          uVar73 = uVar69;
          uVar75 = (int)uVar13;
          if (local_710.DebugPtr[1].bUseSeed != false) {
            pIVar7 = local_710.DebugPtr[1].CachedElement.Object;
            uVar73 = (int)pIVar7;
            uVar75 = (int)((ulonglong)pIVar7 >> 0x20);
          }
          uVar40 = local_6d8 + 1;
          if ((int)uVar40 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar40);
          }
          if (local_700._4_4_ < (int)uVar40) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar40,&local_708,(int)local_700,(int *)((longlong)&local_700 + 4));
          }
          AlgoImpl::
          IntroSortInternal<double,int,FIdentityFunctor,TDereferenceWrapper<double,TLess<void>_>_>
                    ((double *)local_6e0.Data,local_6d8,FVar51,(TLess<void> *)local_6a0);
          uVar40 = local_6d8;
          uVar41 = (ulonglong)(int)local_6d8;
          pFVar59 = local_6e0.Data + uVar41 * 8;
          FVar56.Data = local_6e0.Data;
          while( true ) {
            if ((uint)uVar41 != uVar40) {
              local_71e[2] = false;
              `TCheckedPointerIterator<double,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_71e + 2);
            }
            if (FVar56.Data == pFVar59) break;
            auVar68._0_8_ = *(double *)FVar56.Data - dVar65;
            auVar68._8_8_ = auVar68._0_8_;
            iVar29 = 0;
            if ((int)local_700 == 0) {
LAB_14ceee9df:
              if (iVar29 == local_700._4_4_) {
                iVar29 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&local_708,(int *)((longlong)&local_700 + 4));
              }
              local_700 = CONCAT44(local_700._4_4_,iVar29 + 1);
              *(undefined1 (*) [16])(local_708.Data + (longlong)iVar29 * 0x10) = auVar68;
            }
            else {
              uVar52 = 0;
              if ((int)((int)local_700 - 1U) < (int)local_700) {
                uVar52 = ~((int)local_700 - 1U) >> 0x1f;
              }
              if (uVar52 == 0) {
                bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar26) {
                  pcVar11 = (code *)swi(3);
                  uVar28 = (*pcVar11)();
                  return (bool)uVar28;
                }
              }
              uVar43 = (int)local_700 - 1;
              dVar67 = *(double *)(local_708.Data + (longlong)(int)uVar43 * 0x10 + 8);
              uVar52 = 0;
              if ((int)uVar43 < (int)local_700) {
                uVar52 = ~uVar43 >> 0x1f;
              }
              iVar29 = (int)local_700;
              if (uVar52 == 0) {
                bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar26) {
                  pcVar11 = (code *)swi(3);
                  uVar28 = (*pcVar11)();
                  return (bool)uVar28;
                }
                iVar29 = (int)local_700;
              }
              *(double *)(local_708.Data + (longlong)(iVar29 + -1) * 0x10 + 8) = auVar68._0_8_;
              if ((double)CONCAT44(uVar75,uVar73) <= auVar68._0_8_ - dVar67) {
                iVar29 = (int)local_700;
                goto LAB_14ceee9df;
              }
            }
            uVar41 = (ulonglong)local_6d8;
            FVar56.Data = FVar56.Data + 8;
          }
          if (local_6e0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6e0.Data);
          }
          local_348 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          dStack_340 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_338 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          dStack_330 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          local_358 = local_5b8;
          uStack_350 = 0;
          local_368[1] = dStack_5c0;
          local_368[0] = local_5c8;
          UE::Math::TQuat<double>::FindBetweenVectors
                    (&local_4b8,&UE::Math::TVector<double>::UpVector,
                     (TVector<double> *)&local_698._s_0);
          uVar40 = 0;
          local_730.Data = (FScriptContainerElement *)0x0;
          local_388 = local_4b8.X;
          dStack_380 = local_4b8.Y;
          local_378 = local_4b8.Z;
          dStack_370 = local_4b8.W;
          local_728 = 0;
          local_740 = (FScriptContainerElement *)((ulonglong)local_740 & 0xffffffff00000000);
          if (0 < (int)local_700) {
            lVar47 = 0;
            do {
              uVar41 = 0;
              local_6e8 = (int *)CONCAT44(local_6e8._4_4_,~uVar40 >> 0x1f);
              uVar52 = 0;
              if ((int)uVar40 < (int)local_700) {
                uVar52 = ~uVar40 >> 0x1f;
              }
              if ((uVar52 == 0) &&
                 (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar26)) {
                pcVar11 = (code *)swi(3);
                uVar28 = (*pcVar11)();
                return (bool)uVar28;
              }
              pUVar53 = local_718;
              local_498 = PCGPrimitiveCrossSection::Constants::CutPlaneOptions;
              dVar65 = *(double *)(local_708.Data + lVar47);
              dVar61 = dVar65 * local_698._s_0.X + local_5c8;
              dVar67 = dVar65 * local_698._s_0.Z + local_5b8;
              local_188.Rotation.XY.m128d_f64[0] = local_388;
              local_188.Rotation.XY.m128d_f64[1] = dStack_380;
              dVar65 = dVar65 * local_698._s_0.Y + dStack_5c0;
              local_188.Rotation.ZW.m128d_f64[0] = local_378;
              local_188.Rotation.ZW.m128d_f64[1] = dStack_370;
              local_598[1] = dVar65;
              local_598[0] = dVar61;
              uStack_350 = 0;
              local_188.Translation.ZW.m128d_f64[1] = 0.0;
              local_188.Scale3D.XY.m128d_f64[0] = local_348;
              local_188.Scale3D.XY.m128d_f64[1] = dStack_340;
              local_188.Scale3D.ZW.m128d_f64[0] = local_338;
              local_188.Scale3D.ZW.m128d_f64[1] = dStack_330;
              local_588 = dVar67;
              local_368 = local_598;
              local_358 = dVar67;
              local_188.Translation.XY.m128d_f64 = local_598;
              local_188.Translation.ZW.m128d_f64[0] = dVar67;
              UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshPlaneCut
                        (local_718,&local_188,&local_498,(UGeometryScriptDebug *)0x0);
              iVar29 = UDynamicMesh::GetTriangleCount(pUVar53);
              FVar45 = local_747;
              FVar51 = local_747;
              if (iVar29 == 0) break;
              local_610 = 0x13a83126f;
              UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToPlanar
                        (pUVar53,(FGeometryScriptPlanarSimplifyOptions)0x13a83126f,
                         (UGeometryScriptDebug *)0x0);
              FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_608);
              local_3e8._12_4_ = (undefined4)((ulonglong)local_698._8_8_ >> 0x20);
              local_3c8._0_8_ = dVar61 - local_698._s_0.X * dVar17;
              local_3e8._0_4_ = local_698._0_4_;
              local_3e8._4_4_ = local_698._4_4_;
              local_3e8._8_4_ = local_698._8_4_;
              local_3e8._s_0.Z = local_698._s_0.Z;
              local_3c8._8_8_ = dVar65 - local_698._s_0.Y * dVar17;
              local_4d8._s_0.Z = dVar67 - local_698._s_0.Z * dVar17;
              local_3c8._s_0.Z = local_4d8._s_0.Z;
              UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsWithPlane
                        (pUVar53,&local_608,(TVector<double> *)&local_3c8._s_0,
                         (TVector<double> *)&local_3e8._s_0,Vertices,false,3);
              FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_5a8);
              dVar65 = local_698._s_0.Y * dVar17 + dVar65;
              local_3a8._s_0.X = local_698._s_0.X;
              local_3a8._s_0.Y = local_698._s_0.Y;
              local_4d8._s_0.Z = local_698._s_0.Z * dVar17 + dVar67;
              local_3a8._s_0.Z = local_698._s_0.Z;
              local_4d8._8_4_ = SUB84(dVar65,0);
              local_4d8._0_8_ = local_698._s_0.X * dVar17 + dVar61;
              local_4d8._12_4_ = (int)((ulonglong)dVar65 >> 0x20);
              local_458 = local_4d8._s_0.Z;
              UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsWithPlane
                        (pUVar53,&local_5a8,(TVector<double> *)&local_4d8._s_0,
                         (TVector<double> *)&local_3a8._s_0,Vertices,false,3);
              local_488.GeoSelection.Object = local_5a8.GeoSelection.Object;
              local_488.GeoSelection.SharedReferenceCount.ReferenceController =
                   local_5a8.GeoSelection.SharedReferenceCount.ReferenceController;
              if (local_5a8.GeoSelection.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_5a8.GeoSelection.SharedReferenceCount.ReferenceController)->
                SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_5a8.GeoSelection.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              local_478.GeoSelection.Object = local_608.GeoSelection.Object;
              local_478.GeoSelection.SharedReferenceCount.ReferenceController =
                   local_608.GeoSelection.SharedReferenceCount.ReferenceController;
              if (local_608.GeoSelection.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_608.GeoSelection.SharedReferenceCount.ReferenceController)->
                SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_608.GeoSelection.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              UGeometryScriptLibrary_MeshSelectionFunctions::CombineMeshSelections
                        (&local_478,&local_488,&local_608,Subtract);
              local_468.GeoSelection.Object = local_608.GeoSelection.Object;
              local_468.GeoSelection.SharedReferenceCount.ReferenceController =
                   local_608.GeoSelection.SharedReferenceCount.ReferenceController;
              local_658.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_658.ArrayNum = 0;
              local_658.ArrayMax = 0;
              local_6d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_6d0.ArrayNum = 0;
              local_6d0.ArrayMax = 0;
              if (local_608.GeoSelection.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_608.GeoSelection.SharedReferenceCount.ReferenceController)->
                SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_608.GeoSelection.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetMeshSelectionBoundaryLoops
                        (pUVar53,&local_468,&local_658,&local_6d0,local_678,&local_6b0,
                         (UGeometryScriptDebug *)0x0);
              if ((0 < local_678[0]) && (local_6d0.ArrayNum != 0)) {
                local_550 = local_328;
                dVar65 = local_4b8.Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
                local_318 = local_4b8.Z *
                            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
                dStack_310 = local_4b8.W *
                             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
                local_328._8_4_ = SUB84(dVar65,0);
                local_328._0_8_ =
                     local_4b8.X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
                local_328._12_4_ = (int)((ulonglong)dVar65 >> 0x20);
                if (0 < local_678[0]) {
                  iVar29 = (uint)local_740;
                  iVar32 = (int)local_6e8;
                  uVar57 = uVar41;
                  do {
                    uVar43 = (uint)uVar57;
                    uVar52 = ~uVar43 >> 0x1f;
                    uVar40 = 0;
                    if ((int)uVar43 < local_6d0.ArrayNum) {
                      uVar40 = uVar52;
                    }
                    if ((uVar40 == 0) &&
                       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar26)) {
                      pcVar11 = (code *)swi(3);
                      uVar28 = (*pcVar11)();
                      return (bool)uVar28;
                    }
                    if (local_6d0.AllocatorInstance.Data[uVar41 + 0x10] ==
                        (FScriptContainerElement)0x0) {
                      bVar26 = UE::Assert::Private::ExecCheckImplInternal
                                         (&bGEnsureHasExecuted<6184413208686625086>,false,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGPrimitiveCrossSection.cpp"
                                          ,0x13e,"PolyPaths[LoopIndex].bClosedLoop");
                      if (bVar26) {
                        pcVar11 = (code *)swi(3);
                        uVar28 = (*pcVar11)();
                        return (bool)uVar28;
                      }
                    }
                    else {
                      uVar40 = 0;
                      if ((int)uVar43 < local_6d0.ArrayNum) {
                        uVar40 = uVar52;
                      }
                      if ((uVar40 == 0) &&
                         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar26)) {
                        pcVar11 = (code *)swi(3);
                        uVar28 = (*pcVar11)();
                        return (bool)uVar28;
                      }
                      FVar56.Data = local_6d0.AllocatorInstance.Data;
                      if ((*(longlong *)(local_6d0.AllocatorInstance.Data + uVar41) == 0) &&
                         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar26)) {
                        pcVar11 = (code *)swi(3);
                        uVar28 = (*pcVar11)();
                        return (bool)uVar28;
                      }
                      plVar9 = *(longlong **)(FVar56.Data + uVar41);
                      uVar44 = (int)plVar9[1] - 1;
                      uVar40 = 0;
                      if ((int)uVar44 < (int)plVar9[1]) {
                        uVar40 = ~uVar44 >> 0x1f;
                      }
                      if ((uVar40 == 0) &&
                         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar26)) {
                        pcVar11 = (code *)swi(3);
                        uVar28 = (*pcVar11)();
                        return (bool)uVar28;
                      }
                      lVar36 = (longlong)(int)plVar9[1];
                      lVar48 = *plVar9;
                      dVar65 = (*(double *)(lVar48 + -0x10 + lVar36 * 0x18) - local_598[1]) *
                               local_698._s_0.Y +
                               (*(double *)(lVar48 + -0x18 + lVar36 * 0x18) - local_598[0]) *
                               local_698._s_0.X +
                               (*(double *)(lVar48 + -8 + lVar36 * 0x18) - local_588) *
                               local_698._s_0.Z;
                      auVar63._0_8_ =
                           (double)CONCAT44((uint)((ulonglong)dVar65 >> 0x20) & uVar49,
                                            SUB84(dVar65,0) & uVar46);
                      auVar63._8_8_ = 0;
                      if (auVar63._0_8_ <= dVar17) {
                        if (*(char *)&local_710.DebugPtr[1].CachedElement.SharedReferenceCount.
                                      ReferenceController != '\0') {
                          uVar40 = 0;
                          if ((int)uVar43 < local_6d0.ArrayNum) {
                            uVar40 = uVar52;
                          }
                          if ((uVar40 == 0) &&
                             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar26)) {
                            pcVar11 = (code *)swi(3);
                            uVar28 = (*pcVar11)();
                            return (bool)uVar28;
                          }
                          FVar56.Data = local_6d0.AllocatorInstance.Data;
                          if ((*(longlong *)(local_6d0.AllocatorInstance.Data + uVar41) == 0) &&
                             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("IsValid()",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x44d,L""), bVar26)) {
                            pcVar11 = (code *)swi(3);
                            uVar28 = (*pcVar11)();
                            return (bool)uVar28;
                          }
                          pvVar8 = local_710.DebugPtr[1].CacheLock.CriticalSection.Opaque1[0];
                          dVar65 = `FPCGPrimitiveCrossSectionElement::ExecuteInternal'::__l57::
                                   <lambda_1>::operator()
                                             (&local_550,
                                              *(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>
                                                **)(FVar56.Data + uVar41));
                          if (dVar65 <= (double)pvVar8 * dVar16) goto LAB_14ceef344;
                        }
                        iVar30 = 0;
                        if (iVar29 < (int)local_700) {
                          iVar30 = iVar32;
                        }
                        if ((iVar30 == 0) &&
                           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar26)) {
                          pcVar11 = (code *)swi(3);
                          uVar28 = (*pcVar11)();
                          return (bool)uVar28;
                        }
                        FVar56.Data = local_708.Data;
                        iVar30 = 0;
                        if (iVar29 < (int)local_700) {
                          iVar30 = iVar32;
                        }
                        if ((iVar30 == 0) &&
                           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar26)) {
                          pcVar11 = (code *)swi(3);
                          uVar28 = (*pcVar11)();
                          return (bool)uVar28;
                        }
                        dVar65 = *(double *)(FVar56.Data + lVar47 + 8) -
                                 *(double *)(local_708.Data + lVar47);
                        if (((char)local_710.DebugPtr[1].CacheLock.CriticalSection.Opaque2[0] ==
                             '\0') ||
                           (ppvVar3 = local_710.DebugPtr[1].CacheLock.CriticalSection.Opaque3,
                           (double)*ppvVar3 <= dVar65 && dVar65 != (double)*ppvVar3)) {
                          iVar30 = (int)local_728;
                          if ((int)local_728 == local_728._4_4_) {
                            iVar30 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x820,&local_730,(int *)((longlong)&local_728 + 4));
                          }
                          local_728 = CONCAT44(local_728._4_4_,iVar30 + 1);
                          auVar62._0_8_ = dVar65 + dVar15;
                          auVar62._8_8_ = 0;
                          lVar48 = (longlong)iVar30 * 0x20;
                          pFVar54 = (FCrossSection *)(local_730.Data + lVar48 + 0x10);
                          *(undefined4 *)(local_730.Data + lVar48 + 4) = 0;
                          auVar64 = roundpd(auVar63,auVar62,1);
                          local_628[0] = (double)&pFVar54->Height;
                          dVar61 = dVar65 - auVar64._0_8_;
                          *(undefined4 *)&pFVar54->Height = 0;
                          local_6e8 = (int *)((longlong)&pFVar54->Height + 4);
                          *local_6e8 = 0;
                          *(undefined8 *)pFVar54 = 0;
                          *(int *)&local_730.Data[lVar48].field_0x0 = iVar29;
                          dVar67 = auVar64._0_8_;
                          if (dVar14 < (double)CONCAT44((uint)((ulonglong)dVar61 >> 0x20) & uVar49,
                                                        SUB84(dVar61,0) & uVar46)) {
                            dVar67 = dVar65;
                          }
                          *(double *)(local_730.Data + lVar48 + 8) = dVar67;
                          uVar40 = 0;
                          if ((int)uVar43 < local_6d0.ArrayNum) {
                            uVar40 = uVar52;
                          }
                          local_680 = pFVar54;
                          if ((uVar40 == 0) &&
                             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar26)) {
                            pcVar11 = (code *)swi(3);
                            uVar28 = (*pcVar11)();
                            return (bool)uVar28;
                          }
                          FVar56.Data = local_6d0.AllocatorInstance.Data;
                          if ((*(longlong *)(local_6d0.AllocatorInstance.Data + uVar41) == 0) &&
                             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("IsValid()",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x44d,L""), bVar26)) {
                            pcVar11 = (code *)swi(3);
                            uVar28 = (*pcVar11)();
                            return (bool)uVar28;
                          }
                          pFVar10 = *(FCrossSection **)(FVar56.Data + uVar41);
                          if ((pFVar54 == pFVar10) &&
                             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(void*)this != (void*)&Source",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x96e,L""), bVar26)) {
                            pcVar11 = (code *)swi(3);
                            uVar28 = (*pcVar11)();
                            return (bool)uVar28;
                          }
                          iVar30 = *(int *)&pFVar10->Height;
                          if (iVar30 != 0) {
                            iVar31 = UE::Core::Private::
                                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x18,8,iVar30,(ForAnyElementType *)local_680,
                                                (int *)local_628[0],local_6e8);
                            memcpy((void *)(*(longlong *)local_680 + (longlong)iVar31 * 0x18),
                                   *(void **)pFVar10,(longlong)iVar30 * 0x18);
                          }
                        }
                      }
                    }
LAB_14ceef344:
                    uVar57 = (ulonglong)(uVar43 + 1);
                    uVar41 = uVar41 + 0x18;
                  } while ((int)(uVar43 + 1) < local_678[0]);
                  uVar40 = (uint)local_740;
                }
              }
              DestructItems<FGeometryScriptPolyPath,int>
                        ((FGeometryScriptPolyPath *)local_6d0.AllocatorInstance.Data,
                         local_6d0.ArrayNum);
              if ((FGeometryScriptPolyPath *)local_6d0.AllocatorInstance.Data !=
                  (FGeometryScriptPolyPath *)0x0) {
                FMemory::Free(local_6d0.AllocatorInstance.Data);
              }
              DestructItems<FGeometryScriptIndexList,int>
                        ((FGeometryScriptIndexList *)local_658.AllocatorInstance.Data,
                         local_658.ArrayNum);
              if ((FGeometryScriptIndexList *)local_658.AllocatorInstance.Data !=
                  (FGeometryScriptIndexList *)0x0) {
                FMemory::Free(local_658.AllocatorInstance.Data);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_5a8.GeoSelection.SharedReferenceCount.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_608.GeoSelection.SharedReferenceCount.ReferenceController);
              uVar40 = uVar40 + 1;
              lVar47 = lVar47 + 0x10;
              local_740 = (FScriptContainerElement *)CONCAT44(local_740._4_4_,uVar40);
              FVar45 = local_747;
              FVar51 = local_747;
            } while ((int)uVar40 < (int)local_700);
          }
          uVar41 = 0;
          if (*(char *)(local_710.DebugPtr[1].CacheLock.CriticalSection.Opaque3 + 1) != '\0') {
            local_128.SecondaryData = (ForElementType<int>)0x0;
            local_e0 = 0;
            local_dc = 0x10;
            AlgoImpl::
            IntroSortInternal<FCrossSection,int,FIdentityFunctor,TDereferenceWrapper<FCrossSection,_FPCGPrimitiveCrossSectionElement::ExecuteInternal_::__l80::<lambda_2>_>_>
                      ((FCrossSection *)local_730.Data,(int)local_728,FVar45,
                       (<lambda_2> *)&local_6af);
            local_740 = (FScriptContainerElement *)((ulonglong)local_740 & 0xffffffff00000000);
            FVar55 = local_128.SecondaryData;
            if (0 < (int)local_728) {
              local_718 = (UDynamicMesh *)0x0;
              do {
                uVar40 = (uint)uVar41;
                FVar42 = (ForElementType<int>)&local_128;
                if (FVar55 != (ForElementType<int>)0x0) {
                  FVar42 = FVar55;
                }
                FVar4 = (ForElementType<int>)((longlong)FVar42 + (longlong)(int)local_e0 * 4);
                for (; pUVar53 = local_718, FVar42 != FVar4;
                    FVar42 = (ForElementType<int>)((longlong)FVar42 + 4)) {
                  if (*(uint *)FVar42 == uVar40) goto LAB_14ceef814;
                }
                local_738[0] = (int)local_728 - 1;
                if ((int)uVar40 < (int)local_738[0]) {
                  do {
                    uVar40 = (uint)uVar41;
                    FVar42 = (ForElementType<int>)&local_128;
                    if (FVar55 != (ForElementType<int>)0x0) {
                      FVar42 = FVar55;
                    }
                    FVar4 = (ForElementType<int>)((longlong)FVar42 + (longlong)(int)local_e0 * 4);
                    for (; FVar42 != FVar4; FVar42 = (ForElementType<int>)((longlong)FVar42 + 4)) {
                      if (*(uint *)FVar42 == local_738[0]) goto LAB_14ceef7ff;
                    }
                    uVar52 = 0;
                    if ((int)uVar40 < (int)local_728) {
                      uVar52 = ~uVar40 >> 0x1f;
                    }
                    if ((uVar52 == 0) &&
                       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), FVar55 = local_128.SecondaryData, bVar26)) {
                      pcVar11 = (code *)swi(3);
                      uVar28 = (*pcVar11)();
                      return (bool)uVar28;
                    }
                    FVar56.Data = local_730.Data;
                    lVar47 = (longlong)(int)local_738[0];
                    local_648.Data = local_730.Data;
                    uVar52 = 0;
                    if ((int)local_738[0] < (int)local_728) {
                      uVar52 = ~local_738[0] >> 0x1f;
                    }
                    if ((uVar52 == 0) &&
                       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), FVar55 = local_128.SecondaryData, bVar26)) {
                      pcVar11 = (code *)swi(3);
                      uVar28 = (*pcVar11)();
                      return (bool)uVar28;
                    }
                    local_680 = (FCrossSection *)local_730.Data;
                    pUVar53 = local_718;
                    if (*(int *)&local_730.Data[lVar47 * 0x20].field_0x0 <
                        *(int *)(FVar56.Data + (longlong)local_718)) break;
                    if (*(int *)(FVar56.Data + (longlong)local_718 + 0x18) ==
                        *(int *)(local_730.Data + lVar47 * 0x20 + 0x18)) {
                      uVar40 = 0;
                      local_6e8 = (int *)((ulonglong)local_6e8 & 0xffffffff00000000);
                      if (0 < *(int *)(FVar56.Data + (longlong)local_718 + 0x18)) {
                        lVar48 = 0;
                        do {
                          pUVar53 = local_718;
                          uVar52 = 0;
                          if ((int)uVar40 <
                              *(int *)((longlong)
                                       &(((FCrossSection *)FVar56.Data)->PointLocations).ArrayNum +
                                      (longlong)local_718)) {
                            uVar52 = ~uVar40 >> 0x1f;
                          }
                          if ((uVar52 == 0) &&
                             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar26)) {
                            pcVar11 = (code *)swi(3);
                            uVar28 = (*pcVar11)();
                            return (bool)uVar28;
                          }
                          lVar36 = *(longlong *)
                                    ((longlong)
                                     &(((FCrossSection *)FVar56.Data)->PointLocations).
                                      AllocatorInstance.Data + (longlong)pUVar53);
                          pdVar5 = (double *)(lVar36 + lVar48);
                          dVar65 = *pdVar5;
                          dVar67 = pdVar5[1];
                          iVar29 = local_680[lVar47].PointLocations.ArrayNum;
                          local_508 = *(undefined8 *)(lVar36 + 0x10 + lVar48);
                          pFVar58 = local_680[lVar47].PointLocations.AllocatorInstance.Data;
                          pFVar59 = pFVar58 + (longlong)iVar29 * 0x18;
                          local_628[0] = (double)pFVar59;
                          pFVar54 = local_680;
                          local_518 = dVar65;
                          dStack_510 = dVar67;
                          while( true ) {
                            if (pFVar54[lVar47].PointLocations.ArrayNum != iVar29) {
                              local_71e[3] = false;
                              `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::
                              operator!='::__l2::<lambda_1>::operator()(local_71e + 3);
                              pFVar59 = (FScriptContainerElement *)local_628[0];
                              pFVar54 = local_680;
                            }
                            FVar55 = local_128.SecondaryData;
                            if (pFVar58 == pFVar59) {
                              uVar41 = (ulonglong)local_740 & 0xffffffff;
                              pUVar53 = local_718;
                              goto LAB_14ceef7ff;
                            }
                            dVar61 = dVar65 - *(double *)pFVar58;
                            if (((double)CONCAT44((uint)((ulonglong)dVar61 >> 0x20) & uVar49,
                                                  SUB84(dVar61,0) & uVar46) <= dVar14) &&
                               (dVar61 = dVar67 - *(double *)(pFVar58 + 8),
                               (double)CONCAT44((uint)((ulonglong)dVar61 >> 0x20) & uVar49,
                                                SUB84(dVar61,0) & uVar46) <= dVar14)) break;
                            pFVar58 = pFVar58 + 0x18;
                          }
                          lVar48 = lVar48 + 0x18;
                          uVar40 = (int)local_6e8 + 1;
                          local_6e8 = (int *)CONCAT44(local_6e8._4_4_,uVar40);
                          FVar56.Data = local_648.Data;
                        } while ((int)uVar40 <
                                 *(int *)((longlong)
                                          &((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>
                                             *)((longlong)local_648.Data + 0x10))->ArrayNum +
                                         (longlong)local_718));
                        uVar41 = (ulonglong)local_740 & 0xffffffff;
                      }
                      pUVar53 = local_718;
                      FVar42 = (ForElementType<int>)&local_128;
                      if (FVar55 != (ForElementType<int>)0x0) {
                        FVar42 = FVar55;
                      }
                      if ((ulonglong)FVar42 <= local_738) {
                        FVar42 = (ForElementType<int>)&local_128;
                        if (FVar55 != (ForElementType<int>)0x0) {
                          FVar42 = FVar55;
                        }
                        if ((local_738 < (uint *)((longlong)FVar42 + (longlong)(int)local_dc * 4))
                           && (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                                  (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), FVar55 = local_128.SecondaryData, bVar26)) {
                          pcVar11 = (code *)swi(3);
                          uVar28 = (*pcVar11)();
                          return (bool)uVar28;
                        }
                      }
                      if (local_e0 == local_dc) {
                        local_e0 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                             (0x404,&local_128,(int *)&local_dc);
                        FVar55 = local_128.SecondaryData;
                      }
                      lVar48 = (longlong)(int)local_e0;
                      FVar42 = (ForElementType<int>)&local_128;
                      if (FVar55 != (ForElementType<int>)0x0) {
                        FVar42 = FVar55;
                      }
                      local_e0 = local_e0 + 1;
                      *(uint *)((longlong)FVar42 + lVar48 * 4) = local_738[0];
                      *(double *)
                       ((longlong)&((FCrossSection *)FVar56.Data)->Height + (longlong)pUVar53) =
                           local_680[lVar47].Height +
                           *(double *)
                            ((longlong)&((FCrossSection *)FVar56.Data)->Height + (longlong)pUVar53);
                      FVar55 = local_128.SecondaryData;
                    }
LAB_14ceef7ff:
                    local_738[0] = local_738[0] - 1;
                    uVar40 = (uint)uVar41;
                  } while ((int)uVar40 < (int)local_738[0]);
                }
LAB_14ceef814:
                uVar40 = uVar40 + 1;
                uVar41 = (ulonglong)uVar40;
                local_718 = (UDynamicMesh *)((longlong)pUVar53 + 0x20);
                local_740 = (FScriptContainerElement *)CONCAT44(local_740._4_4_,uVar40);
              } while ((int)uVar40 < (int)local_728);
            }
            FVar42 = (ForElementType<int>)&local_128;
            if (FVar55 != (ForElementType<int>)0x0) {
              FVar42 = FVar55;
            }
            AlgoImpl::
            IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FPCGPrimitiveCrossSectionElement::ExecuteInternal_::__l80::<lambda_4>_>_>
                      ((int *)FVar42,local_e0,FVar60,(<lambda_4> *)local_6ae);
            uVar40 = local_e0;
            uVar41 = (ulonglong)(int)local_e0;
            FVar55 = (ForElementType<int>)&local_128;
            if (local_128.SecondaryData != (ForElementType<int>)0x0) {
              FVar55 = local_128.SecondaryData;
            }
            FVar42 = (ForElementType<int>)((longlong)FVar55 + uVar41 * 4);
            while( true ) {
              if ((uint)uVar41 != uVar40) {
                local_71e[4] = false;
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_71e + 4);
              }
              FVar45 = local_747;
              if (FVar55 == FVar42) break;
              uVar52 = *(uint *)FVar55;
              uVar43 = 0;
              if ((int)uVar52 < (int)local_728) {
                uVar43 = ~uVar52 >> 0x1f;
              }
              if (uVar43 == 0) {
                bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar26) {
                  pcVar11 = (code *)swi(3);
                  uVar28 = (*pcVar11)();
                  return (bool)uVar28;
                }
              }
              FVar56.Data = local_730.Data;
              _Dst.Data = local_730.Data + (longlong)(int)uVar52 * 0x20;
              local_648.Data = _Dst.Data;
              iVar29 = (int)local_728;
              if (*(void **)(_Dst.Data + 0x10) != (void *)0x0) {
                FMemory::Free(*(void **)(_Dst.Data + 0x10));
                _Dst.Data = local_648.Data;
                iVar29 = (int)local_728;
              }
              iVar32 = (iVar29 - uVar52) + -1;
              if (1 < iVar32) {
                iVar32 = 1;
              }
              if (iVar32 != 0) {
                memmove(_Dst.Data,FVar56.Data + (longlong)(iVar29 - iVar32) * 0x20,
                        (longlong)iVar32 << 5);
                iVar29 = (int)local_728;
              }
              local_728 = CONCAT44(local_728._4_4_,iVar29 + -1);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,&local_730,iVar29 + -1,(int *)((longlong)&local_728 + 4));
              uVar41 = (ulonglong)local_e0;
              FVar55 = (ForElementType<int>)((longlong)FVar55 + 4);
            }
            if (local_128.SecondaryData != (ForElementType<int>)0x0) {
              FMemory::Free((void *)local_128.SecondaryData);
            }
          }
          local_6c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_746 = '\0';
          uVar41 = (ulonglong)(int)local_728;
          pFVar59 = local_730.Data + 0x18;
          local_745 = '\0';
          local_6c0.ArrayNum = 0;
          local_648.Data = local_730.Data + uVar41 * 0x20;
          local_6c0.ArrayMax = 0;
          local_6e8 = (int *)CONCAT44(local_6e8._4_4_,(int)local_728);
          FVar56.Data = local_730.Data + uVar41 * 0x20;
          while( true ) {
            uVar40 = 0;
            local_740 = pFVar59;
            if ((int)local_728 != (int)uVar41) {
              local_71e[5] = false;
              `TCheckedPointerIterator<FCrossSection,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_71e + 5);
            }
            if (pFVar59 + -0x18 == FVar56.Data) break;
            uVar52 = *(uint *)pFVar59;
            if ((int)uVar52 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar52);
            }
            local_6c0.ArrayNum = 0;
            if (local_6c0.ArrayMax < (int)uVar52) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x88,8,uVar52,&local_6c0.AllocatorInstance,0,&local_6c0.ArrayMax);
            }
            pFVar24 = local_670;
            piVar1 = &(local_670->OutputData).TaggedData.ArrayMax;
            iVar29 = (local_670->OutputData).TaggedData.ArrayNum;
            if (iVar29 == *piVar1) {
              iVar29 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x878,(ForAnyElementType *)&local_670->OutputData,piVar1);
            }
            pFVar59 = local_740;
            (pFVar24->OutputData).TaggedData.ArrayNum = iVar29 + 1;
            this_04 = (FPCGDataPtrWrapper *)
                      ((pFVar24->OutputData).TaggedData.AllocatorInstance.Data +
                      (longlong)iVar29 * 0x78);
            this_04[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
            this_04[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
            this_04[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
            this_04[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
            this_04[6].WeakData.WeakPtr.ObjectIndex = 0x100;
            (this_04->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
            (this_04->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
            this_04[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
            this_04[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
            this_04[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
            this_04[3].WeakData.WeakPtr.ObjectIndex = 0;
            this_04[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
            *(undefined4 *)&this_04[4].Data.field0_0x0 = 0xffffffff;
            *(undefined4 *)((longlong)&this_04[4].Data.field0_0x0 + 4) = 0;
            this_04[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
            this_04[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
            *(undefined8 *)&this_04[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
            *(undefined4 *)((longlong)&this_04[7].Data.field0_0x0 + 4) = 0xffffffff;
            uVar52 = *(uint *)local_740;
            if (0 < (int)uVar52) {
              local_718 = (UDynamicMesh *)0x0;
              do {
                uVar43 = 0;
                if ((int)uVar40 < (int)uVar52) {
                  uVar43 = ~uVar40 >> 0x1f;
                }
                if ((uVar43 == 0) &&
                   (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar26)) {
                  pcVar11 = (code *)swi(3);
                  uVar28 = (*pcVar11)();
                  return (bool)uVar28;
                }
                pFVar58 = (((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                           (pFVar59 + -8))->AllocatorInstance).Data;
                fVar66 = (float)(int)uVar40;
                if (local_6c0.ArrayNum == local_6c0.ArrayMax) {
                  local_6c0.ArrayNum =
                       UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x888,&local_6c0.AllocatorInstance,&local_6c0.ArrayMax);
                }
                iVar29 = local_6c0.ArrayNum + 1;
                uVar40 = uVar40 + 1;
                lVar48 = (longlong)local_6c0.ArrayNum * 0x88;
                *(float *)(local_6c0.AllocatorInstance.Data + lVar48) = fVar66;
                pFVar6 = pFVar58 + (longlong)local_718;
                uVar12 = *(undefined8 *)(pFVar6 + 8);
                *(undefined8 *)(local_6c0.AllocatorInstance.Data + lVar48 + 8) =
                     *(undefined8 *)pFVar6;
                *(undefined8 *)(local_6c0.AllocatorInstance.Data + lVar48 + 8 + 8) = uVar12;
                lVar47 = (longlong)local_718 + 0x10;
                local_718 = (UDynamicMesh *)((longlong)local_718 + 0x18);
                *(undefined8 *)(local_6c0.AllocatorInstance.Data + lVar48 + 0x18) =
                     *(undefined8 *)(pFVar58 + lVar47);
                uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                *(double *)(local_6c0.AllocatorInstance.Data + lVar48 + 0x20) =
                     UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                *(undefined8 *)(local_6c0.AllocatorInstance.Data + lVar48 + 0x20 + 8) = uVar12;
                *(double *)(local_6c0.AllocatorInstance.Data + lVar48 + 0x30) =
                     UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                *(double *)(local_6c0.AllocatorInstance.Data + lVar48 + 0x38) =
                     UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                *(undefined8 *)(local_6c0.AllocatorInstance.Data + lVar48 + 0x38 + 8) = uVar12;
                *(double *)(local_6c0.AllocatorInstance.Data + lVar48 + 0x48) =
                     UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                dVar65 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
                *(double *)(local_6c0.AllocatorInstance.Data + lVar48 + 0x50) =
                     UE::Math::TRotator<double>::ZeroRotator.Pitch;
                *(double *)(local_6c0.AllocatorInstance.Data + lVar48 + 0x50 + 8) = dVar65;
                *(double *)(local_6c0.AllocatorInstance.Data + lVar48 + 0x60) =
                     UE::Math::TRotator<double>::ZeroRotator.Roll;
                uVar12 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
                *(double *)(local_6c0.AllocatorInstance.Data + lVar48 + 0x68) =
                     UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
                *(undefined8 *)(local_6c0.AllocatorInstance.Data + lVar48 + 0x68 + 8) = uVar12;
                *(double *)(local_6c0.AllocatorInstance.Data + lVar48 + 0x78) =
                     UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
                local_6c0.AllocatorInstance.Data[lVar48 + 0x80] = (FScriptContainerElement)0x0;
                uVar52 = *(uint *)pFVar59;
                FVar51 = local_747;
                local_6c0.ArrayNum = iVar29;
              } while ((int)uVar40 < (int)uVar52);
            }
            bVar26 = IsInGameThread();
            pFVar24 = local_670;
            if (bVar26) {
              pUVar37 = GetTransientPackageAsObject();
              this_01 = NewObject<UPCGSplineData>(pUVar37);
            }
            else {
              if (((local_670->AsyncState).bIsRunningOnMainThread != false) &&
                 (bVar26 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<4331830188552749348>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                      ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar26)) {
                pcVar11 = (code *)swi(3);
                uVar28 = (*pcVar11)();
                return (bool)uVar28;
              }
              FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)local_744);
              pUVar37 = GetTransientPackageAsObject();
              this_01 = NewObject<UPCGSplineData>(pUVar37);
              FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)local_744);
              if ((this_01 == (UPCGSplineData *)0x0) &&
                 (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Object",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                      ,0x12a,L""), bVar26)) {
                pcVar11 = (code *)swi(3);
                uVar28 = (*pcVar11)();
                return (bool)uVar28;
              }
              local_548 = this_01;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (this_01 != (UPCGSplineData *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)this_01);
              }
              TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
              ::Emplace<TObjectPtr<UObject>_>
                        (&pFVar24->AsyncObjects,(TObjectPtr<UObject> *)local_57c,(bool *)&local_548)
              ;
            }
            local_560.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_560.ArrayNum = 0;
            local_560.ArrayMax = 0;
            UPCGSplineData::Initialize
                      (this_01,&local_6c0,true,&UE::Math::TTransform<double>::Identity,&local_560);
            FPCGDataPtrWrapper::operator=(this_04,(UPCGData *)this_01);
            this_02 = (UPCGMetadata *)(**(code **)(*(longlong *)this_01 + 0x328))(this_01);
            if ((this_02 == (UPCGMetadata *)0x0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Metadata",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGPrimitiveCrossSection.cpp"
                                    ,0x1c2,L""), bVar26)) {
              pcVar11 = (code *)swi(3);
              uVar28 = (*pcVar11)();
              return (bool)uVar28;
            }
            pUVar34 = local_710.DebugPtr + 1;
            (**(code **)(*(longlong *)this_01 + 0x348))(this_01,&local_448);
            this_03 = UPCGMetadata::GetMetadataDomain(this_02,&local_448);
            FPCGAttributePropertySelector::GetName
                      ((FPCGAttributePropertySelector *)&pUVar34->_padding_);
            if (this_03 == (FPCGMetadataDomain *)0x0) {
              if (local_745 == '\0') {
                local_745 = '\x01';
                PCGLog::Metadata::LogInvalidMetadataDomain
                          ((FPCGAttributePropertySelector *)&pUVar34->_padding_,local_670);
              }
            }
            else {
              dVar65 = *(double *)(local_740 + -0x10);
              local_4f8._s_0.X = local_698._s_0.X * dVar65;
              local_4f8._s_0.Y = local_698._s_0.Y * dVar65;
              local_4f8._s_0.Z = dVar65 * local_698._s_0.Z;
              pFVar38 = FPCGMetadataDomain::CreateAttribute<UE::Math::TVector<double>_>
                                  (this_03,local_5d0,(TVector<double> *)&local_4f8._s_0,false,true);
              if ((pFVar38 == (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) &&
                 (local_746 == '\0')) {
                local_568 = local_5d0;
                local_746 = '\x01';
                pFVar39 = FText::FromName(&local_408,&local_568);
                PCG::Private::GetTypeName(&local_540,5);
                FText::FromString(&local_438,&local_540);
                if (local_540.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_540.Data.AllocatorInstance.Data);
                }
                local_530.TextData.Reference = (pFVar39->TextData).Reference;
                if (local_530.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_530.TextData.Reference + 8))
                            (local_530.TextData.Reference,local_580);
                }
                local_530.Flags = pFVar39->Flags;
                local_428 = PCGLog::Metadata::Format::CreateAttributeFailure.TextFormatData;
                if (PCGLog::Metadata::Format::CreateAttributeFailure.TextFormatData.
                    SharedReferenceCount.ReferenceController.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  paVar2 = &(PCGLog::Metadata::Format::CreateAttributeFailure.TextFormatData.
                             SharedReferenceCount.ReferenceController.ReferenceController)->
                            SharedReferenceCount;
                  *paVar2 = (atomic<int>)((int)*paVar2 + 1);
                  UNLOCK();
                }
                pFVar39 = FText::Format<FText,FText>
                                    (&local_418,(FTextFormat *)&local_428,&local_530,&local_438);
                PCGLog::LogErrorOnGraph(pFVar39,local_670);
                if (local_418.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_418.TextData.Reference + 0x10))();
                }
                if (local_408.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_408.TextData.Reference + 0x10))();
                }
              }
            }
            pFVar59 = local_740 + 0x20;
            uVar41 = (ulonglong)local_6e8 & 0xffffffff;
            FVar56.Data = local_648.Data;
          }
          if (local_6c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6c0.AllocatorInstance.Data);
          }
          DestructItems<FCrossSection,int>((FCrossSection *)local_730.Data,(int)local_728);
          if ((FCrossSection *)local_730.Data != (FCrossSection *)0x0) {
            FMemory::Free(local_730.Data);
          }
          if (local_708.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_708.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_638.List.SharedReferenceCount.ReferenceController);
          auVar64._8_8_ = 0;
          auVar64._0_8_ = __real_7fefffffffffffff;
        }
        FVar56.Data = local_5d8 + 8;
        uVar41 = local_6a8 & 0xffffffff;
        pFVar59 = (FScriptContainerElement *)local_5e8[0];
        iVar29 = local_6f8.ArrayNum;
      }
    }
    if (local_6f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6f8.AllocatorInstance.Data);
    }
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_5f8.AllocatorInstance.Data,local_5f8.ArrayNum);
  if ((FPCGTaggedData *)local_5f8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_5f8.AllocatorInstance.Data);
  }
  if ((bool)FVar60) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// IsCacheable @ 14cef4180

bool __thiscall
FPCGPrimitiveCrossSectionElement::IsCacheable
          (FPCGPrimitiveCrossSectionElement *this,UPCGSettings *param_1)

{
  return false;
}

