// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 8

// AuditMaterials<FFastGeoInstancedStaticMeshComponent> @ 14da09f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMaterialAudit * __cdecl
Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoInstancedStaticMeshComponent>
          (FFastGeoInstancedStaticMeshComponent *param_1,FMaterialAudit *param_2,bool param_3)

{
  ForElementType<Nanite::FMaterialAuditEntry> FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> *pFVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  EBlendMode EVar10;
  UMaterial *pUVar11;
  FMaterialAudit *pFVar12;
  longlong lVar13;
  ushort *puVar14;
  TConsoleVariableData<int> *pTVar15;
  IConsoleManager *pIVar16;
  TConsoleVariableData<int> *pTVar17;
  ForElementType<Nanite::FMaterialAuditEntry> FVar18;
  int *piVar19;
  longlong *plVar20;
  ulonglong uVar21;
  uchar *puVar22;
  TConsoleVariableData<int> *pTVar24;
  undefined1 auStackY_648 [32];
  undefined1 local_617;
  char local_616;
  bool local_615 [5];
  undefined1 local_610 [40];
  FName local_5e8;
  FName local_5e0;
  FName local_5d8;
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> *local_5d0;
  longlong local_5c8;
  longlong lStack_5c0;
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  FString local_588;
  uchar local_578 [16];
  undefined8 local_568;
  uchar auStack_560 [8];
  TArray<Nanite::Private::FAuditMaterialSlotInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_558;
  ulonglong local_48;
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> FVar23;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_648;
  pTVar24 = (TConsoleVariableData<int> *)0x0;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_616 = param_3;
  local_610._32_8_ = param_1;
  if ((*(int *)(lVar13 + 0x9d4c) <
       `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoInstancedStaticMeshComponent>(FFastGeoInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoInstancedStaticMeshComponent>(FFastGeoInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoInstancedStaticMeshComponent>(FFastGeoInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pIVar16 = IConsoleManager::Get();
    plVar20 = (longlong *)
              (**(code **)((longlong)*pIVar16 + 0xc0))(pIVar16,L"r.Nanite.ForceEnableMeshes");
    pTVar17 = pTVar24;
    if (plVar20 != (longlong *)0x0) {
      pTVar17 = (TConsoleVariableData<int> *)(**(code **)(*plVar20 + 0x68))(plVar20);
    }
    `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoInstancedStaticMeshComponent>(FFastGeoInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
    ::__l2::NaniteForceEnableMeshesCvar = pTVar17;
    _Init_thread_footer(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoInstancedStaticMeshComponent>(FFastGeoInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*(int *)(lVar13 + 0x9d4c) <
       `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoInstancedStaticMeshComponent>(FFastGeoInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
       ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoInstancedStaticMeshComponent>(FFastGeoInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                           ::__l2::_thread_safe_static_guard_1__),
     pTVar17 = `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoInstancedStaticMeshComponent>(FFastGeoInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
               ::__l2::NaniteForceEnableMeshesCvar,
     `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoInstancedStaticMeshComponent>(FFastGeoInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    if (`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoInstancedStaticMeshComponent>(FFastGeoInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
        ::__l2::NaniteForceEnableMeshesCvar == (TConsoleVariableData<int> *)0x0) {
LAB_14da0a6df:
      `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoInstancedStaticMeshComponent>(FFastGeoInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
      ::__l2::bNaniteForceEnableMeshes = false;
    }
    else {
      bVar5 = IsInParallelGameThread();
      if (bVar5) {
LAB_14da0a6d2:
        pTVar15 = pTVar24;
      }
      else {
        bVar5 = IsInGameThread();
        pTVar15 = (TConsoleVariableData<int> *)&DAT_00000004;
        if (bVar5) goto LAB_14da0a6d2;
      }
      if (*(int *)((longlong)pTVar17->ShadowedValue + (longlong)pTVar15->ShadowedValue) == 0)
      goto LAB_14da0a6df;
      `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoInstancedStaticMeshComponent>(FFastGeoInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
      ::__l2::bNaniteForceEnableMeshes = true;
    }
    _Init_thread_footer(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoInstancedStaticMeshComponent>(FFastGeoInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if ((*(int *)(lVar13 + 0x9d4c) <
       `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoInstancedStaticMeshComponent>(FFastGeoInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
       ::__l2::_thread_safe_static_guard_2__) &&
     (_Init_thread_header(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoInstancedStaticMeshComponent>(FFastGeoInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                           ::__l2::_thread_safe_static_guard_2__),
     `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoInstancedStaticMeshComponent>(FFastGeoInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
     ::__l2::_thread_safe_static_guard_2__ == -1)) {
    pIVar16 = IConsoleManager::Get();
    plVar20 = (longlong *)
              (**(code **)((longlong)*pIVar16 + 0xc0))
                        (pIVar16,L"r.LumenScene.SurfaceCache.DetectCardSharingCompatibility");
    pTVar17 = pTVar24;
    if (plVar20 != (longlong *)0x0) {
      pTVar17 = (TConsoleVariableData<int> *)(**(code **)(*plVar20 + 0x68))(plVar20);
    }
    `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoInstancedStaticMeshComponent>(FFastGeoInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
    ::__l2::CVarLumenDetectCardSharingCompatibility = pTVar17;
    _Init_thread_footer(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoInstancedStaticMeshComponent>(FFastGeoInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                         ::__l2::_thread_safe_static_guard_2__);
  }
  pTVar17 = `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoInstancedStaticMeshComponent>(FFastGeoInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
            ::__l2::CVarLumenDetectCardSharingCompatibility;
  bVar7 = 0;
  if (`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoInstancedStaticMeshComponent>(FFastGeoInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
      ::__l2::CVarLumenDetectCardSharingCompatibility != (TConsoleVariableData<int> *)0x0) {
    bVar5 = IsInParallelGameThread();
    if ((bVar5) ||
       (bVar5 = IsInGameThread(), pTVar15 = (TConsoleVariableData<int> *)&DAT_00000004, bVar5)) {
      pTVar15 = pTVar24;
    }
    bVar5 = true;
    if (*(int *)((longlong)pTVar17->ShadowedValue + (longlong)pTVar15->ShadowedValue) != 0)
    goto LAB_14da09ff5;
  }
  bVar5 = false;
LAB_14da09ff5:
  param_2->bHasAnyError = '\0';
  piVar19 = &(param_2->Entries).ArrayMax;
  (param_2->Entries).ArrayNum = 0;
  if (*piVar19 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::FMaterialAuditEntry>_>
              (0x30,0x10,0,&(param_2->Entries).AllocatorInstance,0,piVar19);
  }
  if (param_1 != (FFastGeoInstancedStaticMeshComponent *)0x0) {
    Nanite::Private::GetMaterialSlotInfos<FFastGeoInstancedStaticMeshComponent>(&local_558,param_1);
    local_610._24_4_ = local_558.ArrayNum;
    uVar21 = (ulonglong)(int)local_610._24_4_;
    if (0 < (int)local_610._24_4_) {
      bVar7 = 8;
    }
    param_2->bCompatibleWithLumenCardSharing = bVar7 >> 3;
    FVar23 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)&local_558;
    if (local_558.AllocatorInstance.SecondaryData !=
        (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
      FVar23 = local_558.AllocatorInstance.SecondaryData;
    }
    puVar22 = (uchar *)((longlong)FVar23 + 0x14);
    local_5d0 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo> *)
                ((longlong)FVar23 + uVar21 * 0x28);
    while( true ) {
      pFVar4 = local_5d0;
      piVar19 = &(param_2->Entries).ArrayMax;
      if (local_558.ArrayNum != (int)uVar21) {
        local_617 = 0;
        `TCheckedPointerIterator<Nanite::Private::FAuditMaterialSlotInfo,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_617);
      }
      if ((ForElementType<Nanite::Private::FAuditMaterialSlotInfo> *)(puVar22 + -0x14) == pFVar4)
      break;
      iVar9 = (param_2->Entries).ArrayNum;
      if (iVar9 == *piVar19) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::FMaterialAuditEntry>_>
                          (0x1030,&(param_2->Entries).AllocatorInstance,piVar19);
      }
      (param_2->Entries).ArrayNum = iVar9 + 1;
      FVar1 = (param_2->Entries).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<Nanite::FMaterialAuditEntry>)&param_2->Entries;
      if (FVar1 != (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
        FVar18 = FVar1;
      }
      plVar20 = (longlong *)((longlong)iVar9 * 0x30 + (longlong)FVar18);
      DefaultConstructItems<Nanite::FMaterialAuditEntry,int>(plVar20,1);
      plVar20[1] = *(longlong *)(puVar22 + -0xc);
      *(int *)(plVar20 + 2) = (int)pTVar24;
      local_610._20_4_ = (int)pTVar24 + 1;
      pUVar11 = *(UMaterial **)
                 ((ForElementType<Nanite::Private::FAuditMaterialSlotInfo> *)(puVar22 + -0x14))->
                 InlineData;
      *(byte *)((longlong)plVar20 + 0x14) = *(byte *)((longlong)plVar20 + 0x14) & 0xfd;
      *plVar20 = (longlong)pUVar11;
      bVar7 = 0;
      if (pUVar11 == (UMaterial *)0x0) {
        bVar7 = 2;
      }
      *(byte *)((longlong)plVar20 + 0x14) = *(byte *)((longlong)plVar20 + 0x14) | bVar7;
      lVar13 = *(longlong *)(puVar22 + 8);
      local_5c8 = *(longlong *)puVar22;
      lStack_5c0 = *(longlong *)(puVar22 + 8);
      plVar20[4] = *(longlong *)puVar22;
      plVar20[5] = lVar13;
      if ((*(byte *)((longlong)plVar20 + 0x14) & 2) != 0) {
        pUVar11 = UMaterial::GetDefaultMaterial(MD_Surface);
        *plVar20 = (longlong)pUVar11;
      }
      local_578[0] = '\0';
      local_578[1] = '\0';
      local_578[2] = '\0';
      local_578[3] = '\0';
      local_578[4] = '\0';
      local_578[5] = '\0';
      local_578[6] = '\0';
      local_578[7] = '\0';
      local_578[8] = '\0';
      local_578[9] = '\0';
      local_578[10] = '\0';
      local_578[0xb] = '\0';
      local_578[0xc] = '\0';
      local_578[0xd] = '\0';
      local_578[0xe] = '\0';
      local_578[0xf] = '\0';
      pUVar11 = (UMaterial *)(**(code **)(pUVar11->_padding_ + 0x2e0))(0,local_578);
      if ((pUVar11 == (UMaterial *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Material != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\NaniteResourcesHelper.h"
                             ,0xd0,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar12 = (FMaterialAudit *)(*pcVar3)();
        return pFVar12;
      }
      EVar10 = (**(code **)(*(longlong *)*plVar20 + 0x460))();
      local_615[0] = false;
      local_568._0_1_ = '\0';
      local_568._1_1_ = '\0';
      local_568._2_1_ = '\0';
      local_568._3_1_ = '\0';
      local_568._4_1_ = '\0';
      local_568._5_1_ = '\0';
      local_568._6_1_ = '\0';
      local_568._7_1_ = '\0';
      auStack_560[0] = '\0';
      auStack_560[1] = '\0';
      auStack_560[2] = '\0';
      auStack_560[3] = '\0';
      auStack_560[4] = '\0';
      auStack_560[5] = '\0';
      auStack_560[6] = '\0';
      auStack_560[7] = '\0';
      lVar13 = (**(code **)(pUVar11->_padding_ + 0x2f0))(pUVar11,&local_568);
      *(byte *)((longlong)plVar20 + 0x14) =
           (char)(*(uint *)(lVar13 + 0x4d0) >> 0xb) << 7 |
           *(byte *)((longlong)plVar20 + 0x14) & 0x7f;
      bVar7 = ((char)(*(uint *)(lVar13 + 0x4d0) >> 10) * '\x02' ^
              *(byte *)((longlong)plVar20 + 0x15)) & 2 ^ *(byte *)((longlong)plVar20 + 0x15);
      *(byte *)((longlong)plVar20 + 0x15) = bVar7;
      bVar7 = ((char)(*(uint *)(lVar13 + 0x4d0) >> 9) << 2 ^ bVar7) & 4 ^ bVar7;
      *(byte *)((longlong)plVar20 + 0x15) = bVar7;
      *(byte *)((longlong)plVar20 + 0x15) =
           ((byte)(*(uint *)(lVar13 + 0x4d0) >> 0xc) ^ bVar7) & 1 ^ bVar7;
      bVar6 = UMaterial::HasPixelDepthOffsetConnected(pUVar11);
      *(byte *)((longlong)plVar20 + 0x14) = bVar6 << 5 | *(byte *)((longlong)plVar20 + 0x14) & 0xdf;
      bVar6 = UMaterial::HasVertexPositionOffsetConnected(pUVar11);
      *(byte *)((longlong)plVar20 + 0x14) = bVar6 << 2 | *(byte *)((longlong)plVar20 + 0x14) & 0xfb;
      cVar8 = (**(code **)(pUVar11->_padding_ + 0x578))(pUVar11);
      *(byte *)((longlong)plVar20 + 0x14) =
           *(byte *)((longlong)plVar20 + 0x14) ^
           (cVar8 << 6 ^ *(byte *)((longlong)plVar20 + 0x14)) & 0x40;
      bVar6 = IsSupportedBlendMode(EVar10);
      *(byte *)((longlong)plVar20 + 0x14) = !bVar6 << 3 | *(byte *)((longlong)plVar20 + 0x14) & 0xf7
      ;
      puVar14 = (ushort *)(**(code **)(pUVar11->_padding_ + 0x468))(pUVar11,local_610 + 0x10);
      bVar6 = IsSupportedShadingModel((FMaterialShadingModelField)*puVar14);
      *(byte *)((longlong)plVar20 + 0x14) = !bVar6 << 4 | *(byte *)((longlong)plVar20 + 0x14) & 0xef
      ;
      if (local_616 == '\0') {
        bVar6 = UMaterial::NeedsSetMaterialUsage_Concurrent(pUVar11,local_615,MATUSAGE_Nanite);
      }
      else {
        cVar8 = (**(code **)(pUVar11->_padding_ + 0x378))(pUVar11,0x12);
        bVar6 = cVar8 == '\0';
      }
      *(byte *)((longlong)plVar20 + 0x15) = *(byte *)((longlong)plVar20 + 0x15) & 0xf7;
      *(byte *)((longlong)plVar20 + 0x15) = *(byte *)((longlong)plVar20 + 0x15) | bVar6 << 3;
      if (EVar10 == BLEND_Masked) {
        param_2->bHasMasked = '\x01';
      }
      if (pUVar11->bIsSky != '\0') {
        param_2->field_0xf8 = param_2->field_0xf8 | 4;
      }
      cVar8 = (**(code **)(*(longlong *)*plVar20 + 0x588))();
      if ((cVar8 == '\0') && ((!bVar5 || ((*(uint *)(lVar13 + 0x4d0) & 0x4600) != 0)))) {
        param_2->bCompatibleWithLumenCardSharing = '\0';
      }
      bVar7 = *(byte *)((longlong)plVar20 + 0x14);
      bVar7 = (byte)(bVar7 >> 1 | *(byte *)((longlong)plVar20 + 0x15) | bVar7) >> 3 & 1 ^
              bVar7 & 0xfe;
      *(byte *)((longlong)plVar20 + 0x14) = bVar7;
      if (((bVar7 & 1) != 0) && (param_2->bHasAnyError == 0)) {
        lVar13 = (**(code **)(*(longlong *)local_610._32_8_ + 0x110))(local_610._32_8_);
        local_5e8 = *(FName *)(*(longlong *)(lVar13 + 0x100) + 0x18);
        ::FName::ToString(&local_5e8,(FString *)local_610);
        if (param_2 != (FMaterialAudit *)local_610) {
          pFVar2 = (param_2->AssetName).Data.AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          (param_2->AssetName).Data.AllocatorInstance.Data =
               (FScriptContainerElement *)local_610._0_8_;
          (param_2->AssetName).Data.ArrayNum = local_610._8_4_;
          (param_2->AssetName).Data.ArrayMax = local_610._12_4_;
          local_610._8_4_ = 0;
          local_610._12_4_ = 0;
          local_610._0_8_ = (FScriptContainerElement *)0x0;
        }
        if ((FScriptContainerElement *)local_610._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_610._0_8_);
        }
        pUVar11 = UMaterial::GetDefaultMaterial(MD_Surface);
        param_2->FallbackMaterial = (UMaterialInterface *)pUVar11;
      }
      param_2->field_0xf8 =
           (param_2->bHasAnyError | *(byte *)((longlong)plVar20 + 0x14)) & 1 ^
           param_2->field_0xf8 & 0xfe;
      if (`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoInstancedStaticMeshComponent>(FFastGeoInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
          ::__l2::bNaniteForceEnableMeshes == false) {
        if ((*(byte *)((longlong)plVar20 + 0x14) & 8) != 0) {
          EVar10 = (**(code **)(*(longlong *)*plVar20 + 0x460))();
          GetBlendModeString(&local_5a8,EVar10);
          if (2 < (byte)LogStaticMesh._0_1_) {
            local_5e0 = *(FName *)(*plVar20 + 0x18);
            ::FName::ToString(&local_5e0,&local_5b8);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoInstancedStaticMeshComponent>(FFastGeoInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                        ::__l55::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
            if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
            }
          }
          if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
          }
        }
        if ((*(byte *)((longlong)plVar20 + 0x14) & 0x10) != 0) {
          puVar14 = (ushort *)
                    (**(code **)(*(longlong *)*plVar20 + 0x468))
                              ((longlong *)*plVar20,local_610 + 0x12);
          GetShadingModelFieldString(&local_588,(FMaterialShadingModelField)*puVar14);
          if (2 < (byte)LogStaticMesh._0_1_) {
            local_5d8 = *(FName *)(*plVar20 + 0x18);
            ::FName::ToString(&local_5d8,&local_598);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoInstancedStaticMeshComponent>(FFastGeoInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                        ::__l81::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
            if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_598.Data.AllocatorInstance.Data);
            }
          }
          if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_588.Data.AllocatorInstance.Data);
          }
        }
      }
      pTVar24 = (TConsoleVariableData<int> *)(ulonglong)(uint)local_610._20_4_;
      puVar22 = puVar22 + 0x28;
      uVar21 = (ulonglong)(uint)local_610._24_4_;
    }
    if (local_558.AllocatorInstance.SecondaryData !=
        (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
      FMemory::Free((void *)local_558.AllocatorInstance.SecondaryData);
    }
  }
  return param_2;
}

// AuditMaterials<FFastGeoProceduralISMComponent> @ 14da0a750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMaterialAudit * __cdecl
Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoProceduralISMComponent>
          (FFastGeoProceduralISMComponent *param_1,FMaterialAudit *param_2,bool param_3)

{
  ForElementType<Nanite::FMaterialAuditEntry> FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> *pFVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  EBlendMode EVar10;
  UMaterial *pUVar11;
  FMaterialAudit *pFVar12;
  longlong lVar13;
  ushort *puVar14;
  TConsoleVariableData<int> *pTVar15;
  IConsoleManager *pIVar16;
  TConsoleVariableData<int> *pTVar17;
  ForElementType<Nanite::FMaterialAuditEntry> FVar18;
  int *piVar19;
  longlong *plVar20;
  ulonglong uVar21;
  uchar *puVar22;
  TConsoleVariableData<int> *pTVar24;
  undefined1 auStackY_648 [32];
  undefined1 local_617;
  char local_616;
  bool local_615 [5];
  undefined1 local_610 [40];
  FName local_5e8;
  FName local_5e0;
  FName local_5d8;
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> *local_5d0;
  longlong local_5c8;
  longlong lStack_5c0;
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  FString local_588;
  uchar local_578 [16];
  undefined8 local_568;
  uchar auStack_560 [8];
  TArray<Nanite::Private::FAuditMaterialSlotInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_558;
  ulonglong local_48;
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> FVar23;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_648;
  pTVar24 = (TConsoleVariableData<int> *)0x0;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_616 = param_3;
  local_610._32_8_ = param_1;
  if ((*(int *)(lVar13 + 0x9d4c) <
       `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoProceduralISMComponent>(FFastGeoProceduralISMComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoProceduralISMComponent>(FFastGeoProceduralISMComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoProceduralISMComponent>(FFastGeoProceduralISMComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pIVar16 = IConsoleManager::Get();
    plVar20 = (longlong *)
              (**(code **)((longlong)*pIVar16 + 0xc0))(pIVar16,L"r.Nanite.ForceEnableMeshes");
    pTVar17 = pTVar24;
    if (plVar20 != (longlong *)0x0) {
      pTVar17 = (TConsoleVariableData<int> *)(**(code **)(*plVar20 + 0x68))(plVar20);
    }
    `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoProceduralISMComponent>(FFastGeoProceduralISMComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
    ::__l2::NaniteForceEnableMeshesCvar = pTVar17;
    _Init_thread_footer(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoProceduralISMComponent>(FFastGeoProceduralISMComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*(int *)(lVar13 + 0x9d4c) <
       `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoProceduralISMComponent>(FFastGeoProceduralISMComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
       ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoProceduralISMComponent>(FFastGeoProceduralISMComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                           ::__l2::_thread_safe_static_guard_1__),
     pTVar17 = `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoProceduralISMComponent>(FFastGeoProceduralISMComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
               ::__l2::NaniteForceEnableMeshesCvar,
     `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoProceduralISMComponent>(FFastGeoProceduralISMComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    if (`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoProceduralISMComponent>(FFastGeoProceduralISMComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
        ::__l2::NaniteForceEnableMeshesCvar == (TConsoleVariableData<int> *)0x0) {
LAB_14da0aeff:
      `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoProceduralISMComponent>(FFastGeoProceduralISMComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
      ::__l2::bNaniteForceEnableMeshes = false;
    }
    else {
      bVar5 = IsInParallelGameThread();
      if (bVar5) {
LAB_14da0aef2:
        pTVar15 = pTVar24;
      }
      else {
        bVar5 = IsInGameThread();
        pTVar15 = (TConsoleVariableData<int> *)&DAT_00000004;
        if (bVar5) goto LAB_14da0aef2;
      }
      if (*(int *)((longlong)pTVar17->ShadowedValue + (longlong)pTVar15->ShadowedValue) == 0)
      goto LAB_14da0aeff;
      `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoProceduralISMComponent>(FFastGeoProceduralISMComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
      ::__l2::bNaniteForceEnableMeshes = true;
    }
    _Init_thread_footer(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoProceduralISMComponent>(FFastGeoProceduralISMComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if ((*(int *)(lVar13 + 0x9d4c) <
       `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoProceduralISMComponent>(FFastGeoProceduralISMComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
       ::__l2::_thread_safe_static_guard_2__) &&
     (_Init_thread_header(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoProceduralISMComponent>(FFastGeoProceduralISMComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                           ::__l2::_thread_safe_static_guard_2__),
     `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoProceduralISMComponent>(FFastGeoProceduralISMComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
     ::__l2::_thread_safe_static_guard_2__ == -1)) {
    pIVar16 = IConsoleManager::Get();
    plVar20 = (longlong *)
              (**(code **)((longlong)*pIVar16 + 0xc0))
                        (pIVar16,L"r.LumenScene.SurfaceCache.DetectCardSharingCompatibility");
    pTVar17 = pTVar24;
    if (plVar20 != (longlong *)0x0) {
      pTVar17 = (TConsoleVariableData<int> *)(**(code **)(*plVar20 + 0x68))(plVar20);
    }
    `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoProceduralISMComponent>(FFastGeoProceduralISMComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
    ::__l2::CVarLumenDetectCardSharingCompatibility = pTVar17;
    _Init_thread_footer(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoProceduralISMComponent>(FFastGeoProceduralISMComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                         ::__l2::_thread_safe_static_guard_2__);
  }
  pTVar17 = `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoProceduralISMComponent>(FFastGeoProceduralISMComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
            ::__l2::CVarLumenDetectCardSharingCompatibility;
  bVar7 = 0;
  if (`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoProceduralISMComponent>(FFastGeoProceduralISMComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
      ::__l2::CVarLumenDetectCardSharingCompatibility != (TConsoleVariableData<int> *)0x0) {
    bVar5 = IsInParallelGameThread();
    if ((bVar5) ||
       (bVar5 = IsInGameThread(), pTVar15 = (TConsoleVariableData<int> *)&DAT_00000004, bVar5)) {
      pTVar15 = pTVar24;
    }
    bVar5 = true;
    if (*(int *)((longlong)pTVar17->ShadowedValue + (longlong)pTVar15->ShadowedValue) != 0)
    goto LAB_14da0a815;
  }
  bVar5 = false;
LAB_14da0a815:
  param_2->bHasAnyError = '\0';
  piVar19 = &(param_2->Entries).ArrayMax;
  (param_2->Entries).ArrayNum = 0;
  if (*piVar19 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::FMaterialAuditEntry>_>
              (0x30,0x10,0,&(param_2->Entries).AllocatorInstance,0,piVar19);
  }
  if (param_1 != (FFastGeoProceduralISMComponent *)0x0) {
    Nanite::Private::GetMaterialSlotInfos<FFastGeoProceduralISMComponent>(&local_558,param_1);
    local_610._24_4_ = local_558.ArrayNum;
    uVar21 = (ulonglong)(int)local_610._24_4_;
    if (0 < (int)local_610._24_4_) {
      bVar7 = 8;
    }
    param_2->bCompatibleWithLumenCardSharing = bVar7 >> 3;
    FVar23 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)&local_558;
    if (local_558.AllocatorInstance.SecondaryData !=
        (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
      FVar23 = local_558.AllocatorInstance.SecondaryData;
    }
    puVar22 = (uchar *)((longlong)FVar23 + 0x14);
    local_5d0 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo> *)
                ((longlong)FVar23 + uVar21 * 0x28);
    while( true ) {
      pFVar4 = local_5d0;
      piVar19 = &(param_2->Entries).ArrayMax;
      if (local_558.ArrayNum != (int)uVar21) {
        local_617 = 0;
        `TCheckedPointerIterator<Nanite::Private::FAuditMaterialSlotInfo,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_617);
      }
      if ((ForElementType<Nanite::Private::FAuditMaterialSlotInfo> *)(puVar22 + -0x14) == pFVar4)
      break;
      iVar9 = (param_2->Entries).ArrayNum;
      if (iVar9 == *piVar19) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::FMaterialAuditEntry>_>
                          (0x1030,&(param_2->Entries).AllocatorInstance,piVar19);
      }
      (param_2->Entries).ArrayNum = iVar9 + 1;
      FVar1 = (param_2->Entries).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<Nanite::FMaterialAuditEntry>)&param_2->Entries;
      if (FVar1 != (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
        FVar18 = FVar1;
      }
      plVar20 = (longlong *)((longlong)iVar9 * 0x30 + (longlong)FVar18);
      DefaultConstructItems<Nanite::FMaterialAuditEntry,int>(plVar20,1);
      plVar20[1] = *(longlong *)(puVar22 + -0xc);
      *(int *)(plVar20 + 2) = (int)pTVar24;
      local_610._20_4_ = (int)pTVar24 + 1;
      pUVar11 = *(UMaterial **)
                 ((ForElementType<Nanite::Private::FAuditMaterialSlotInfo> *)(puVar22 + -0x14))->
                 InlineData;
      *(byte *)((longlong)plVar20 + 0x14) = *(byte *)((longlong)plVar20 + 0x14) & 0xfd;
      *plVar20 = (longlong)pUVar11;
      bVar7 = 0;
      if (pUVar11 == (UMaterial *)0x0) {
        bVar7 = 2;
      }
      *(byte *)((longlong)plVar20 + 0x14) = *(byte *)((longlong)plVar20 + 0x14) | bVar7;
      lVar13 = *(longlong *)(puVar22 + 8);
      local_5c8 = *(longlong *)puVar22;
      lStack_5c0 = *(longlong *)(puVar22 + 8);
      plVar20[4] = *(longlong *)puVar22;
      plVar20[5] = lVar13;
      if ((*(byte *)((longlong)plVar20 + 0x14) & 2) != 0) {
        pUVar11 = UMaterial::GetDefaultMaterial(MD_Surface);
        *plVar20 = (longlong)pUVar11;
      }
      local_578[0] = '\0';
      local_578[1] = '\0';
      local_578[2] = '\0';
      local_578[3] = '\0';
      local_578[4] = '\0';
      local_578[5] = '\0';
      local_578[6] = '\0';
      local_578[7] = '\0';
      local_578[8] = '\0';
      local_578[9] = '\0';
      local_578[10] = '\0';
      local_578[0xb] = '\0';
      local_578[0xc] = '\0';
      local_578[0xd] = '\0';
      local_578[0xe] = '\0';
      local_578[0xf] = '\0';
      pUVar11 = (UMaterial *)(**(code **)(pUVar11->_padding_ + 0x2e0))(0,local_578);
      if ((pUVar11 == (UMaterial *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Material != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\NaniteResourcesHelper.h"
                             ,0xd0,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar12 = (FMaterialAudit *)(*pcVar3)();
        return pFVar12;
      }
      EVar10 = (**(code **)(*(longlong *)*plVar20 + 0x460))();
      local_615[0] = false;
      local_568._0_1_ = '\0';
      local_568._1_1_ = '\0';
      local_568._2_1_ = '\0';
      local_568._3_1_ = '\0';
      local_568._4_1_ = '\0';
      local_568._5_1_ = '\0';
      local_568._6_1_ = '\0';
      local_568._7_1_ = '\0';
      auStack_560[0] = '\0';
      auStack_560[1] = '\0';
      auStack_560[2] = '\0';
      auStack_560[3] = '\0';
      auStack_560[4] = '\0';
      auStack_560[5] = '\0';
      auStack_560[6] = '\0';
      auStack_560[7] = '\0';
      lVar13 = (**(code **)(pUVar11->_padding_ + 0x2f0))(pUVar11,&local_568);
      *(byte *)((longlong)plVar20 + 0x14) =
           (char)(*(uint *)(lVar13 + 0x4d0) >> 0xb) << 7 |
           *(byte *)((longlong)plVar20 + 0x14) & 0x7f;
      bVar7 = ((char)(*(uint *)(lVar13 + 0x4d0) >> 10) * '\x02' ^
              *(byte *)((longlong)plVar20 + 0x15)) & 2 ^ *(byte *)((longlong)plVar20 + 0x15);
      *(byte *)((longlong)plVar20 + 0x15) = bVar7;
      bVar7 = ((char)(*(uint *)(lVar13 + 0x4d0) >> 9) << 2 ^ bVar7) & 4 ^ bVar7;
      *(byte *)((longlong)plVar20 + 0x15) = bVar7;
      *(byte *)((longlong)plVar20 + 0x15) =
           ((byte)(*(uint *)(lVar13 + 0x4d0) >> 0xc) ^ bVar7) & 1 ^ bVar7;
      bVar6 = UMaterial::HasPixelDepthOffsetConnected(pUVar11);
      *(byte *)((longlong)plVar20 + 0x14) = bVar6 << 5 | *(byte *)((longlong)plVar20 + 0x14) & 0xdf;
      bVar6 = UMaterial::HasVertexPositionOffsetConnected(pUVar11);
      *(byte *)((longlong)plVar20 + 0x14) = bVar6 << 2 | *(byte *)((longlong)plVar20 + 0x14) & 0xfb;
      cVar8 = (**(code **)(pUVar11->_padding_ + 0x578))(pUVar11);
      *(byte *)((longlong)plVar20 + 0x14) =
           *(byte *)((longlong)plVar20 + 0x14) ^
           (cVar8 << 6 ^ *(byte *)((longlong)plVar20 + 0x14)) & 0x40;
      bVar6 = IsSupportedBlendMode(EVar10);
      *(byte *)((longlong)plVar20 + 0x14) = !bVar6 << 3 | *(byte *)((longlong)plVar20 + 0x14) & 0xf7
      ;
      puVar14 = (ushort *)(**(code **)(pUVar11->_padding_ + 0x468))(pUVar11,local_610 + 0x10);
      bVar6 = IsSupportedShadingModel((FMaterialShadingModelField)*puVar14);
      *(byte *)((longlong)plVar20 + 0x14) = !bVar6 << 4 | *(byte *)((longlong)plVar20 + 0x14) & 0xef
      ;
      if (local_616 == '\0') {
        bVar6 = UMaterial::NeedsSetMaterialUsage_Concurrent(pUVar11,local_615,MATUSAGE_Nanite);
      }
      else {
        cVar8 = (**(code **)(pUVar11->_padding_ + 0x378))(pUVar11,0x12);
        bVar6 = cVar8 == '\0';
      }
      *(byte *)((longlong)plVar20 + 0x15) = *(byte *)((longlong)plVar20 + 0x15) & 0xf7;
      *(byte *)((longlong)plVar20 + 0x15) = *(byte *)((longlong)plVar20 + 0x15) | bVar6 << 3;
      if (EVar10 == BLEND_Masked) {
        param_2->bHasMasked = '\x01';
      }
      if (pUVar11->bIsSky != '\0') {
        param_2->field_0xf8 = param_2->field_0xf8 | 4;
      }
      cVar8 = (**(code **)(*(longlong *)*plVar20 + 0x588))();
      if ((cVar8 == '\0') && ((!bVar5 || ((*(uint *)(lVar13 + 0x4d0) & 0x4600) != 0)))) {
        param_2->bCompatibleWithLumenCardSharing = '\0';
      }
      bVar7 = *(byte *)((longlong)plVar20 + 0x14);
      bVar7 = (byte)(bVar7 >> 1 | *(byte *)((longlong)plVar20 + 0x15) | bVar7) >> 3 & 1 ^
              bVar7 & 0xfe;
      *(byte *)((longlong)plVar20 + 0x14) = bVar7;
      if (((bVar7 & 1) != 0) && (param_2->bHasAnyError == 0)) {
        lVar13 = (**(code **)(*(longlong *)local_610._32_8_ + 0x110))(local_610._32_8_);
        local_5e8 = *(FName *)(*(longlong *)(lVar13 + 0x100) + 0x18);
        ::FName::ToString(&local_5e8,(FString *)local_610);
        if (param_2 != (FMaterialAudit *)local_610) {
          pFVar2 = (param_2->AssetName).Data.AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          (param_2->AssetName).Data.AllocatorInstance.Data =
               (FScriptContainerElement *)local_610._0_8_;
          (param_2->AssetName).Data.ArrayNum = local_610._8_4_;
          (param_2->AssetName).Data.ArrayMax = local_610._12_4_;
          local_610._8_4_ = 0;
          local_610._12_4_ = 0;
          local_610._0_8_ = (FScriptContainerElement *)0x0;
        }
        if ((FScriptContainerElement *)local_610._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_610._0_8_);
        }
        pUVar11 = UMaterial::GetDefaultMaterial(MD_Surface);
        param_2->FallbackMaterial = (UMaterialInterface *)pUVar11;
      }
      param_2->field_0xf8 =
           (param_2->bHasAnyError | *(byte *)((longlong)plVar20 + 0x14)) & 1 ^
           param_2->field_0xf8 & 0xfe;
      if (`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoProceduralISMComponent>(FFastGeoProceduralISMComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
          ::__l2::bNaniteForceEnableMeshes == false) {
        if ((*(byte *)((longlong)plVar20 + 0x14) & 8) != 0) {
          EVar10 = (**(code **)(*(longlong *)*plVar20 + 0x460))();
          GetBlendModeString(&local_5a8,EVar10);
          if (2 < (byte)LogStaticMesh._0_1_) {
            local_5e0 = *(FName *)(*plVar20 + 0x18);
            ::FName::ToString(&local_5e0,&local_5b8);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoProceduralISMComponent>(FFastGeoProceduralISMComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                        ::__l55::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
            if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
            }
          }
          if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
          }
        }
        if ((*(byte *)((longlong)plVar20 + 0x14) & 0x10) != 0) {
          puVar14 = (ushort *)
                    (**(code **)(*(longlong *)*plVar20 + 0x468))
                              ((longlong *)*plVar20,local_610 + 0x12);
          GetShadingModelFieldString(&local_588,(FMaterialShadingModelField)*puVar14);
          if (2 < (byte)LogStaticMesh._0_1_) {
            local_5d8 = *(FName *)(*plVar20 + 0x18);
            ::FName::ToString(&local_5d8,&local_598);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoProceduralISMComponent>(FFastGeoProceduralISMComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                        ::__l81::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
            if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_598.Data.AllocatorInstance.Data);
            }
          }
          if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_588.Data.AllocatorInstance.Data);
          }
        }
      }
      pTVar24 = (TConsoleVariableData<int> *)(ulonglong)(uint)local_610._20_4_;
      puVar22 = puVar22 + 0x28;
      uVar21 = (ulonglong)(uint)local_610._24_4_;
    }
    if (local_558.AllocatorInstance.SecondaryData !=
        (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
      FMemory::Free((void *)local_558.AllocatorInstance.SecondaryData);
    }
  }
  return param_2;
}

// AuditMaterials<FFastGeoStaticMeshComponentBase> @ 14da0af70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMaterialAudit * __cdecl
Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoStaticMeshComponentBase>
          (FFastGeoStaticMeshComponentBase *param_1,FMaterialAudit *param_2,bool param_3)

{
  ForElementType<Nanite::FMaterialAuditEntry> FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> *pFVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  EBlendMode EVar10;
  UMaterial *pUVar11;
  FMaterialAudit *pFVar12;
  longlong lVar13;
  ushort *puVar14;
  TConsoleVariableData<int> *pTVar15;
  IConsoleManager *pIVar16;
  TConsoleVariableData<int> *pTVar17;
  ForElementType<Nanite::FMaterialAuditEntry> FVar18;
  int *piVar19;
  longlong *plVar20;
  ulonglong uVar21;
  uchar *puVar22;
  TConsoleVariableData<int> *pTVar24;
  undefined1 auStackY_648 [32];
  undefined1 local_617;
  char local_616;
  bool local_615 [5];
  undefined1 local_610 [40];
  FName local_5e8;
  FName local_5e0;
  FName local_5d8;
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> *local_5d0;
  longlong local_5c8;
  longlong lStack_5c0;
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  FString local_588;
  uchar local_578 [16];
  undefined8 local_568;
  uchar auStack_560 [8];
  TArray<Nanite::Private::FAuditMaterialSlotInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_558;
  ulonglong local_48;
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> FVar23;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_648;
  pTVar24 = (TConsoleVariableData<int> *)0x0;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_616 = param_3;
  local_610._32_8_ = param_1;
  if ((*(int *)(lVar13 + 0x9d4c) <
       `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoStaticMeshComponentBase>(FFastGeoStaticMeshComponentBase_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoStaticMeshComponentBase>(FFastGeoStaticMeshComponentBase_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoStaticMeshComponentBase>(FFastGeoStaticMeshComponentBase_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pIVar16 = IConsoleManager::Get();
    plVar20 = (longlong *)
              (**(code **)((longlong)*pIVar16 + 0xc0))(pIVar16,L"r.Nanite.ForceEnableMeshes");
    pTVar17 = pTVar24;
    if (plVar20 != (longlong *)0x0) {
      pTVar17 = (TConsoleVariableData<int> *)(**(code **)(*plVar20 + 0x68))(plVar20);
    }
    `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoStaticMeshComponentBase>(FFastGeoStaticMeshComponentBase_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
    ::__l2::NaniteForceEnableMeshesCvar = pTVar17;
    _Init_thread_footer(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoStaticMeshComponentBase>(FFastGeoStaticMeshComponentBase_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*(int *)(lVar13 + 0x9d4c) <
       `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoStaticMeshComponentBase>(FFastGeoStaticMeshComponentBase_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
       ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoStaticMeshComponentBase>(FFastGeoStaticMeshComponentBase_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                           ::__l2::_thread_safe_static_guard_1__),
     pTVar17 = `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoStaticMeshComponentBase>(FFastGeoStaticMeshComponentBase_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
               ::__l2::NaniteForceEnableMeshesCvar,
     `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoStaticMeshComponentBase>(FFastGeoStaticMeshComponentBase_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    if (`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoStaticMeshComponentBase>(FFastGeoStaticMeshComponentBase_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
        ::__l2::NaniteForceEnableMeshesCvar == (TConsoleVariableData<int> *)0x0) {
LAB_14da0b71f:
      `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoStaticMeshComponentBase>(FFastGeoStaticMeshComponentBase_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
      ::__l2::bNaniteForceEnableMeshes = false;
    }
    else {
      bVar5 = IsInParallelGameThread();
      if (bVar5) {
LAB_14da0b712:
        pTVar15 = pTVar24;
      }
      else {
        bVar5 = IsInGameThread();
        pTVar15 = (TConsoleVariableData<int> *)&DAT_00000004;
        if (bVar5) goto LAB_14da0b712;
      }
      if (*(int *)((longlong)pTVar17->ShadowedValue + (longlong)pTVar15->ShadowedValue) == 0)
      goto LAB_14da0b71f;
      `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoStaticMeshComponentBase>(FFastGeoStaticMeshComponentBase_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
      ::__l2::bNaniteForceEnableMeshes = true;
    }
    _Init_thread_footer(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoStaticMeshComponentBase>(FFastGeoStaticMeshComponentBase_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if ((*(int *)(lVar13 + 0x9d4c) <
       `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoStaticMeshComponentBase>(FFastGeoStaticMeshComponentBase_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
       ::__l2::_thread_safe_static_guard_2__) &&
     (_Init_thread_header(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoStaticMeshComponentBase>(FFastGeoStaticMeshComponentBase_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                           ::__l2::_thread_safe_static_guard_2__),
     `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoStaticMeshComponentBase>(FFastGeoStaticMeshComponentBase_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
     ::__l2::_thread_safe_static_guard_2__ == -1)) {
    pIVar16 = IConsoleManager::Get();
    plVar20 = (longlong *)
              (**(code **)((longlong)*pIVar16 + 0xc0))
                        (pIVar16,L"r.LumenScene.SurfaceCache.DetectCardSharingCompatibility");
    pTVar17 = pTVar24;
    if (plVar20 != (longlong *)0x0) {
      pTVar17 = (TConsoleVariableData<int> *)(**(code **)(*plVar20 + 0x68))(plVar20);
    }
    `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoStaticMeshComponentBase>(FFastGeoStaticMeshComponentBase_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
    ::__l2::CVarLumenDetectCardSharingCompatibility = pTVar17;
    _Init_thread_footer(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoStaticMeshComponentBase>(FFastGeoStaticMeshComponentBase_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                         ::__l2::_thread_safe_static_guard_2__);
  }
  pTVar17 = `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoStaticMeshComponentBase>(FFastGeoStaticMeshComponentBase_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
            ::__l2::CVarLumenDetectCardSharingCompatibility;
  bVar7 = 0;
  if (`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoStaticMeshComponentBase>(FFastGeoStaticMeshComponentBase_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
      ::__l2::CVarLumenDetectCardSharingCompatibility != (TConsoleVariableData<int> *)0x0) {
    bVar5 = IsInParallelGameThread();
    if ((bVar5) ||
       (bVar5 = IsInGameThread(), pTVar15 = (TConsoleVariableData<int> *)&DAT_00000004, bVar5)) {
      pTVar15 = pTVar24;
    }
    bVar5 = true;
    if (*(int *)((longlong)pTVar17->ShadowedValue + (longlong)pTVar15->ShadowedValue) != 0)
    goto LAB_14da0b035;
  }
  bVar5 = false;
LAB_14da0b035:
  param_2->bHasAnyError = '\0';
  piVar19 = &(param_2->Entries).ArrayMax;
  (param_2->Entries).ArrayNum = 0;
  if (*piVar19 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::FMaterialAuditEntry>_>
              (0x30,0x10,0,&(param_2->Entries).AllocatorInstance,0,piVar19);
  }
  if (param_1 != (FFastGeoStaticMeshComponentBase *)0x0) {
    Nanite::Private::GetMaterialSlotInfos<FFastGeoStaticMeshComponentBase>(&local_558,param_1);
    local_610._24_4_ = local_558.ArrayNum;
    uVar21 = (ulonglong)(int)local_610._24_4_;
    if (0 < (int)local_610._24_4_) {
      bVar7 = 8;
    }
    param_2->bCompatibleWithLumenCardSharing = bVar7 >> 3;
    FVar23 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)&local_558;
    if (local_558.AllocatorInstance.SecondaryData !=
        (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
      FVar23 = local_558.AllocatorInstance.SecondaryData;
    }
    puVar22 = (uchar *)((longlong)FVar23 + 0x14);
    local_5d0 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo> *)
                ((longlong)FVar23 + uVar21 * 0x28);
    while( true ) {
      pFVar4 = local_5d0;
      piVar19 = &(param_2->Entries).ArrayMax;
      if (local_558.ArrayNum != (int)uVar21) {
        local_617 = 0;
        `TCheckedPointerIterator<Nanite::Private::FAuditMaterialSlotInfo,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_617);
      }
      if ((ForElementType<Nanite::Private::FAuditMaterialSlotInfo> *)(puVar22 + -0x14) == pFVar4)
      break;
      iVar9 = (param_2->Entries).ArrayNum;
      if (iVar9 == *piVar19) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::FMaterialAuditEntry>_>
                          (0x1030,&(param_2->Entries).AllocatorInstance,piVar19);
      }
      (param_2->Entries).ArrayNum = iVar9 + 1;
      FVar1 = (param_2->Entries).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<Nanite::FMaterialAuditEntry>)&param_2->Entries;
      if (FVar1 != (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
        FVar18 = FVar1;
      }
      plVar20 = (longlong *)((longlong)iVar9 * 0x30 + (longlong)FVar18);
      DefaultConstructItems<Nanite::FMaterialAuditEntry,int>(plVar20,1);
      plVar20[1] = *(longlong *)(puVar22 + -0xc);
      *(int *)(plVar20 + 2) = (int)pTVar24;
      local_610._20_4_ = (int)pTVar24 + 1;
      pUVar11 = *(UMaterial **)
                 ((ForElementType<Nanite::Private::FAuditMaterialSlotInfo> *)(puVar22 + -0x14))->
                 InlineData;
      *(byte *)((longlong)plVar20 + 0x14) = *(byte *)((longlong)plVar20 + 0x14) & 0xfd;
      *plVar20 = (longlong)pUVar11;
      bVar7 = 0;
      if (pUVar11 == (UMaterial *)0x0) {
        bVar7 = 2;
      }
      *(byte *)((longlong)plVar20 + 0x14) = *(byte *)((longlong)plVar20 + 0x14) | bVar7;
      lVar13 = *(longlong *)(puVar22 + 8);
      local_5c8 = *(longlong *)puVar22;
      lStack_5c0 = *(longlong *)(puVar22 + 8);
      plVar20[4] = *(longlong *)puVar22;
      plVar20[5] = lVar13;
      if ((*(byte *)((longlong)plVar20 + 0x14) & 2) != 0) {
        pUVar11 = UMaterial::GetDefaultMaterial(MD_Surface);
        *plVar20 = (longlong)pUVar11;
      }
      local_578[0] = '\0';
      local_578[1] = '\0';
      local_578[2] = '\0';
      local_578[3] = '\0';
      local_578[4] = '\0';
      local_578[5] = '\0';
      local_578[6] = '\0';
      local_578[7] = '\0';
      local_578[8] = '\0';
      local_578[9] = '\0';
      local_578[10] = '\0';
      local_578[0xb] = '\0';
      local_578[0xc] = '\0';
      local_578[0xd] = '\0';
      local_578[0xe] = '\0';
      local_578[0xf] = '\0';
      pUVar11 = (UMaterial *)(**(code **)(pUVar11->_padding_ + 0x2e0))(0,local_578);
      if ((pUVar11 == (UMaterial *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Material != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\NaniteResourcesHelper.h"
                             ,0xd0,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar12 = (FMaterialAudit *)(*pcVar3)();
        return pFVar12;
      }
      EVar10 = (**(code **)(*(longlong *)*plVar20 + 0x460))();
      local_615[0] = false;
      local_568._0_1_ = '\0';
      local_568._1_1_ = '\0';
      local_568._2_1_ = '\0';
      local_568._3_1_ = '\0';
      local_568._4_1_ = '\0';
      local_568._5_1_ = '\0';
      local_568._6_1_ = '\0';
      local_568._7_1_ = '\0';
      auStack_560[0] = '\0';
      auStack_560[1] = '\0';
      auStack_560[2] = '\0';
      auStack_560[3] = '\0';
      auStack_560[4] = '\0';
      auStack_560[5] = '\0';
      auStack_560[6] = '\0';
      auStack_560[7] = '\0';
      lVar13 = (**(code **)(pUVar11->_padding_ + 0x2f0))(pUVar11,&local_568);
      *(byte *)((longlong)plVar20 + 0x14) =
           (char)(*(uint *)(lVar13 + 0x4d0) >> 0xb) << 7 |
           *(byte *)((longlong)plVar20 + 0x14) & 0x7f;
      bVar7 = ((char)(*(uint *)(lVar13 + 0x4d0) >> 10) * '\x02' ^
              *(byte *)((longlong)plVar20 + 0x15)) & 2 ^ *(byte *)((longlong)plVar20 + 0x15);
      *(byte *)((longlong)plVar20 + 0x15) = bVar7;
      bVar7 = ((char)(*(uint *)(lVar13 + 0x4d0) >> 9) << 2 ^ bVar7) & 4 ^ bVar7;
      *(byte *)((longlong)plVar20 + 0x15) = bVar7;
      *(byte *)((longlong)plVar20 + 0x15) =
           ((byte)(*(uint *)(lVar13 + 0x4d0) >> 0xc) ^ bVar7) & 1 ^ bVar7;
      bVar6 = UMaterial::HasPixelDepthOffsetConnected(pUVar11);
      *(byte *)((longlong)plVar20 + 0x14) = bVar6 << 5 | *(byte *)((longlong)plVar20 + 0x14) & 0xdf;
      bVar6 = UMaterial::HasVertexPositionOffsetConnected(pUVar11);
      *(byte *)((longlong)plVar20 + 0x14) = bVar6 << 2 | *(byte *)((longlong)plVar20 + 0x14) & 0xfb;
      cVar8 = (**(code **)(pUVar11->_padding_ + 0x578))(pUVar11);
      *(byte *)((longlong)plVar20 + 0x14) =
           *(byte *)((longlong)plVar20 + 0x14) ^
           (cVar8 << 6 ^ *(byte *)((longlong)plVar20 + 0x14)) & 0x40;
      bVar6 = IsSupportedBlendMode(EVar10);
      *(byte *)((longlong)plVar20 + 0x14) = !bVar6 << 3 | *(byte *)((longlong)plVar20 + 0x14) & 0xf7
      ;
      puVar14 = (ushort *)(**(code **)(pUVar11->_padding_ + 0x468))(pUVar11,local_610 + 0x10);
      bVar6 = IsSupportedShadingModel((FMaterialShadingModelField)*puVar14);
      *(byte *)((longlong)plVar20 + 0x14) = !bVar6 << 4 | *(byte *)((longlong)plVar20 + 0x14) & 0xef
      ;
      if (local_616 == '\0') {
        bVar6 = UMaterial::NeedsSetMaterialUsage_Concurrent(pUVar11,local_615,MATUSAGE_Nanite);
      }
      else {
        cVar8 = (**(code **)(pUVar11->_padding_ + 0x378))(pUVar11,0x12);
        bVar6 = cVar8 == '\0';
      }
      *(byte *)((longlong)plVar20 + 0x15) = *(byte *)((longlong)plVar20 + 0x15) & 0xf7;
      *(byte *)((longlong)plVar20 + 0x15) = *(byte *)((longlong)plVar20 + 0x15) | bVar6 << 3;
      if (EVar10 == BLEND_Masked) {
        param_2->bHasMasked = '\x01';
      }
      if (pUVar11->bIsSky != '\0') {
        param_2->field_0xf8 = param_2->field_0xf8 | 4;
      }
      cVar8 = (**(code **)(*(longlong *)*plVar20 + 0x588))();
      if ((cVar8 == '\0') && ((!bVar5 || ((*(uint *)(lVar13 + 0x4d0) & 0x4600) != 0)))) {
        param_2->bCompatibleWithLumenCardSharing = '\0';
      }
      bVar7 = *(byte *)((longlong)plVar20 + 0x14);
      bVar7 = (byte)(bVar7 >> 1 | *(byte *)((longlong)plVar20 + 0x15) | bVar7) >> 3 & 1 ^
              bVar7 & 0xfe;
      *(byte *)((longlong)plVar20 + 0x14) = bVar7;
      if (((bVar7 & 1) != 0) && (param_2->bHasAnyError == 0)) {
        lVar13 = (**(code **)(*(longlong *)local_610._32_8_ + 0x110))(local_610._32_8_);
        local_5e8 = *(FName *)(*(longlong *)(lVar13 + 0x100) + 0x18);
        ::FName::ToString(&local_5e8,(FString *)local_610);
        if (param_2 != (FMaterialAudit *)local_610) {
          pFVar2 = (param_2->AssetName).Data.AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          (param_2->AssetName).Data.AllocatorInstance.Data =
               (FScriptContainerElement *)local_610._0_8_;
          (param_2->AssetName).Data.ArrayNum = local_610._8_4_;
          (param_2->AssetName).Data.ArrayMax = local_610._12_4_;
          local_610._8_4_ = 0;
          local_610._12_4_ = 0;
          local_610._0_8_ = (FScriptContainerElement *)0x0;
        }
        if ((FScriptContainerElement *)local_610._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_610._0_8_);
        }
        pUVar11 = UMaterial::GetDefaultMaterial(MD_Surface);
        param_2->FallbackMaterial = (UMaterialInterface *)pUVar11;
      }
      param_2->field_0xf8 =
           (param_2->bHasAnyError | *(byte *)((longlong)plVar20 + 0x14)) & 1 ^
           param_2->field_0xf8 & 0xfe;
      if (`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoStaticMeshComponentBase>(FFastGeoStaticMeshComponentBase_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
          ::__l2::bNaniteForceEnableMeshes == false) {
        if ((*(byte *)((longlong)plVar20 + 0x14) & 8) != 0) {
          EVar10 = (**(code **)(*(longlong *)*plVar20 + 0x460))();
          GetBlendModeString(&local_5a8,EVar10);
          if (2 < (byte)LogStaticMesh._0_1_) {
            local_5e0 = *(FName *)(*plVar20 + 0x18);
            ::FName::ToString(&local_5e0,&local_5b8);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoStaticMeshComponentBase>(FFastGeoStaticMeshComponentBase_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                        ::__l55::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
            if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
            }
          }
          if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
          }
        }
        if ((*(byte *)((longlong)plVar20 + 0x14) & 0x10) != 0) {
          puVar14 = (ushort *)
                    (**(code **)(*(longlong *)*plVar20 + 0x468))
                              ((longlong *)*plVar20,local_610 + 0x12);
          GetShadingModelFieldString(&local_588,(FMaterialShadingModelField)*puVar14);
          if (2 < (byte)LogStaticMesh._0_1_) {
            local_5d8 = *(FName *)(*plVar20 + 0x18);
            ::FName::ToString(&local_5d8,&local_598);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FFastGeoStaticMeshComponentBase>(FFastGeoStaticMeshComponentBase_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                        ::__l81::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
            if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_598.Data.AllocatorInstance.Data);
            }
          }
          if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_588.Data.AllocatorInstance.Data);
          }
        }
      }
      pTVar24 = (TConsoleVariableData<int> *)(ulonglong)(uint)local_610._20_4_;
      puVar22 = puVar22 + 0x28;
      uVar21 = (ulonglong)(uint)local_610._24_4_;
    }
    if (local_558.AllocatorInstance.SecondaryData !=
        (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
      FMemory::Free((void *)local_558.AllocatorInstance.SecondaryData);
    }
  }
  return param_2;
}

// HasValidNaniteData<FFastGeoStaticMeshComponentBase> @ 14da15510

bool __cdecl
Nanite::FNaniteResourcesHelper::HasValidNaniteData<FFastGeoStaticMeshComponentBase>
          (FFastGeoStaticMeshComponentBase *param_1)

{
  FResources *pFVar1;
  
  pFVar1 = FFastGeoStaticMeshComponentBase::GetNaniteResources(param_1);
  if (pFVar1 != (FResources *)0x0) {
    return 0 < (pFVar1->PageStreamingStates).ArrayNum;
  }
  return false;
}

// ShouldCreateNaniteProxy<FFastGeoInstancedStaticMeshComponent> @ 14da17a30

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
Nanite::FNaniteResourcesHelper::ShouldCreateNaniteProxy<FFastGeoInstancedStaticMeshComponent>
          (FFastGeoInstancedStaticMeshComponent *param_1,FMaterialAudit *param_2)

{
  uint uVar1;
  bool bVar2;
  EShaderPlatform EVar3;
  longlong lVar4;
  UWorld *pUVar5;
  FResources *pFVar6;
  undefined1 auStack_138 [32];
  FMaterialAudit local_118;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  lVar4 = (**(code **)(param_1->_padding_ + 0x110))();
  if (((*(uint *)(lVar4 + 0x164) >> 10 & 1) == 0) &&
     (lVar4 = (**(code **)(param_1->_padding_ + 0x110))(param_1),
     (*(uint *)(lVar4 + 0x164) >> 0xb & 1) == 0)) {
    pUVar5 = FFastGeoComponent::GetWorld((FFastGeoComponent *)param_1);
    EVar3 = GMaxRHIShaderPlatform;
    if ((pUVar5 != (UWorld *)0x0) && (pUVar5->Scene != (FSceneInterface *)0x0)) {
      pUVar5 = FFastGeoComponent::GetWorld((FFastGeoComponent *)param_1);
      if (pUVar5 == (UWorld *)0x0) {
        EVar3 = FSceneInterface::GetShaderPlatform((FSceneInterface *)0x0);
      }
      else {
        EVar3 = FSceneInterface::GetShaderPlatform(pUVar5->Scene);
      }
    }
    bVar2 = UseNanite(EVar3,true,true);
    if (((bVar2) &&
        (pFVar6 = FFastGeoStaticMeshComponentBase::GetNaniteResources
                            ((FFastGeoStaticMeshComponentBase *)param_1),
        pFVar6 != (FResources *)0x0)) && (0 < (pFVar6->PageStreamingStates).ArrayNum)) {
      local_118.bCompatibleWithLumenCardSharing = '\0';
      local_118.bHasSky = '\0';
      local_118.bHasMasked = '\0';
      local_118.bHasAnyError = '\0';
      local_118.AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.AssetName.Data.ArrayNum = 0;
      local_118.AssetName.Data.ArrayMax = 0;
      local_118.Entries.AllocatorInstance.SecondaryData =
           (ForElementType<Nanite::FMaterialAuditEntry>)0x0;
      local_118.Entries.ArrayNum = 0;
      local_118.Entries.ArrayMax = 4;
      local_118.FallbackMaterial = (UMaterialInterface *)0x0;
      AuditMaterials<FFastGeoInstancedStaticMeshComponent>
                (param_1,&local_118,param_2 != (FMaterialAudit *)0x0);
      lVar4 = (**(code **)(param_1->_padding_ + 0x110))(param_1);
      uVar1 = *(uint *)(lVar4 + 0x164);
      pUVar5 = FFastGeoComponent::GetWorld((FFastGeoComponent *)param_1);
      bVar2 = IsMaskingAllowed(pUVar5,(bool)((byte)(uVar1 >> 0xc) & 1));
      if (((local_118.bHasAnyError == 0) && (local_118.bHasSky == '\0')) &&
         ((bVar2 || (local_118.bHasMasked == '\0')))) {
        if (param_2 != (FMaterialAudit *)0x0) {
          FMaterialAudit::operator=(param_2,&local_118);
        }
        if (local_118.Entries.AllocatorInstance.SecondaryData !=
            (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
          FMemory::Free((void *)local_118.Entries.AllocatorInstance.SecondaryData);
        }
        if (local_118.AssetName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.AssetName.Data.AllocatorInstance.Data);
        }
        return true;
      }
      if (local_118.Entries.AllocatorInstance.SecondaryData !=
          (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
        FMemory::Free((void *)local_118.Entries.AllocatorInstance.SecondaryData);
      }
      if (local_118.AssetName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.AssetName.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// ShouldCreateNaniteProxy<FFastGeoProceduralISMComponent> @ 14da17c20

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
Nanite::FNaniteResourcesHelper::ShouldCreateNaniteProxy<FFastGeoProceduralISMComponent>
          (FFastGeoProceduralISMComponent *param_1,FMaterialAudit *param_2)

{
  uint uVar1;
  bool bVar2;
  EShaderPlatform EVar3;
  longlong lVar4;
  UWorld *pUVar5;
  FResources *pFVar6;
  undefined1 auStack_138 [32];
  FMaterialAudit local_118;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  lVar4 = (**(code **)(param_1->_padding_ + 0x110))();
  if (((*(uint *)(lVar4 + 0x164) >> 10 & 1) == 0) &&
     (lVar4 = (**(code **)(param_1->_padding_ + 0x110))(param_1),
     (*(uint *)(lVar4 + 0x164) >> 0xb & 1) == 0)) {
    pUVar5 = FFastGeoComponent::GetWorld((FFastGeoComponent *)param_1);
    EVar3 = GMaxRHIShaderPlatform;
    if ((pUVar5 != (UWorld *)0x0) && (pUVar5->Scene != (FSceneInterface *)0x0)) {
      pUVar5 = FFastGeoComponent::GetWorld((FFastGeoComponent *)param_1);
      if (pUVar5 == (UWorld *)0x0) {
        EVar3 = FSceneInterface::GetShaderPlatform((FSceneInterface *)0x0);
      }
      else {
        EVar3 = FSceneInterface::GetShaderPlatform(pUVar5->Scene);
      }
    }
    bVar2 = UseNanite(EVar3,true,true);
    if (((bVar2) &&
        (pFVar6 = FFastGeoStaticMeshComponentBase::GetNaniteResources
                            ((FFastGeoStaticMeshComponentBase *)param_1),
        pFVar6 != (FResources *)0x0)) && (0 < (pFVar6->PageStreamingStates).ArrayNum)) {
      local_118.bCompatibleWithLumenCardSharing = '\0';
      local_118.bHasSky = '\0';
      local_118.bHasMasked = '\0';
      local_118.bHasAnyError = '\0';
      local_118.AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.AssetName.Data.ArrayNum = 0;
      local_118.AssetName.Data.ArrayMax = 0;
      local_118.Entries.AllocatorInstance.SecondaryData =
           (ForElementType<Nanite::FMaterialAuditEntry>)0x0;
      local_118.Entries.ArrayNum = 0;
      local_118.Entries.ArrayMax = 4;
      local_118.FallbackMaterial = (UMaterialInterface *)0x0;
      AuditMaterials<FFastGeoProceduralISMComponent>
                (param_1,&local_118,param_2 != (FMaterialAudit *)0x0);
      lVar4 = (**(code **)(param_1->_padding_ + 0x110))(param_1);
      uVar1 = *(uint *)(lVar4 + 0x164);
      pUVar5 = FFastGeoComponent::GetWorld((FFastGeoComponent *)param_1);
      bVar2 = IsMaskingAllowed(pUVar5,(bool)((byte)(uVar1 >> 0xc) & 1));
      if (((local_118.bHasAnyError == 0) && (local_118.bHasSky == '\0')) &&
         ((bVar2 || (local_118.bHasMasked == '\0')))) {
        if (param_2 != (FMaterialAudit *)0x0) {
          FMaterialAudit::operator=(param_2,&local_118);
        }
        if (local_118.Entries.AllocatorInstance.SecondaryData !=
            (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
          FMemory::Free((void *)local_118.Entries.AllocatorInstance.SecondaryData);
        }
        if (local_118.AssetName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.AssetName.Data.AllocatorInstance.Data);
        }
        return true;
      }
      if (local_118.Entries.AllocatorInstance.SecondaryData !=
          (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
        FMemory::Free((void *)local_118.Entries.AllocatorInstance.SecondaryData);
      }
      if (local_118.AssetName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.AssetName.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// ShouldCreateNaniteProxy<FFastGeoStaticMeshComponentBase> @ 14da17e10

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
Nanite::FNaniteResourcesHelper::ShouldCreateNaniteProxy<FFastGeoStaticMeshComponentBase>
          (FFastGeoStaticMeshComponentBase *param_1,FMaterialAudit *param_2)

{
  uint uVar1;
  bool bVar2;
  EShaderPlatform EVar3;
  longlong lVar4;
  UWorld *pUVar5;
  FResources *pFVar6;
  undefined1 auStack_138 [32];
  FMaterialAudit local_118;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  lVar4 = (**(code **)(*(longlong *)param_1 + 0x110))();
  if (((*(uint *)(lVar4 + 0x164) >> 10 & 1) == 0) &&
     (lVar4 = (**(code **)(*(longlong *)param_1 + 0x110))(param_1),
     (*(uint *)(lVar4 + 0x164) >> 0xb & 1) == 0)) {
    pUVar5 = FFastGeoComponent::GetWorld((FFastGeoComponent *)param_1);
    EVar3 = GMaxRHIShaderPlatform;
    if ((pUVar5 != (UWorld *)0x0) && (pUVar5->Scene != (FSceneInterface *)0x0)) {
      pUVar5 = FFastGeoComponent::GetWorld((FFastGeoComponent *)param_1);
      if (pUVar5 == (UWorld *)0x0) {
        EVar3 = FSceneInterface::GetShaderPlatform((FSceneInterface *)0x0);
      }
      else {
        EVar3 = FSceneInterface::GetShaderPlatform(pUVar5->Scene);
      }
    }
    bVar2 = UseNanite(EVar3,true,true);
    if (((bVar2) &&
        (pFVar6 = FFastGeoStaticMeshComponentBase::GetNaniteResources(param_1),
        pFVar6 != (FResources *)0x0)) && (0 < (pFVar6->PageStreamingStates).ArrayNum)) {
      local_118.bCompatibleWithLumenCardSharing = '\0';
      local_118.bHasSky = '\0';
      local_118.bHasMasked = '\0';
      local_118.bHasAnyError = '\0';
      local_118.AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.AssetName.Data.ArrayNum = 0;
      local_118.AssetName.Data.ArrayMax = 0;
      local_118.Entries.AllocatorInstance.SecondaryData =
           (ForElementType<Nanite::FMaterialAuditEntry>)0x0;
      local_118.Entries.ArrayNum = 0;
      local_118.Entries.ArrayMax = 4;
      local_118.FallbackMaterial = (UMaterialInterface *)0x0;
      AuditMaterials<FFastGeoStaticMeshComponentBase>
                (param_1,&local_118,param_2 != (FMaterialAudit *)0x0);
      lVar4 = (**(code **)(*(longlong *)param_1 + 0x110))(param_1);
      uVar1 = *(uint *)(lVar4 + 0x164);
      pUVar5 = FFastGeoComponent::GetWorld((FFastGeoComponent *)param_1);
      bVar2 = IsMaskingAllowed(pUVar5,(bool)((byte)(uVar1 >> 0xc) & 1));
      if (((local_118.bHasAnyError == 0) && (local_118.bHasSky == '\0')) &&
         ((bVar2 || (local_118.bHasMasked == '\0')))) {
        if (param_2 != (FMaterialAudit *)0x0) {
          FMaterialAudit::operator=(param_2,&local_118);
        }
        if (local_118.Entries.AllocatorInstance.SecondaryData !=
            (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
          FMemory::Free((void *)local_118.Entries.AllocatorInstance.SecondaryData);
        }
        if (local_118.AssetName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.AssetName.Data.AllocatorInstance.Data);
        }
        return true;
      }
      if (local_118.Entries.AllocatorInstance.SecondaryData !=
          (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
        FMemory::Free((void *)local_118.Entries.AllocatorInstance.SecondaryData);
      }
      if (local_118.AssetName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.AssetName.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// UseNaniteOverrideMaterials<FFastGeoStaticMeshComponentBase> @ 14da18210

bool __cdecl
Nanite::FNaniteResourcesHelper::UseNaniteOverrideMaterials<FFastGeoStaticMeshComponentBase>
          (FFastGeoStaticMeshComponentBase *param_1,bool param_2)

{
  bool bVar1;
  
  if ((!param_2) &&
     (bVar1 = ShouldCreateNaniteProxy<FFastGeoStaticMeshComponentBase>
                        (param_1,(FMaterialAudit *)0x0), !bVar1)) {
    return false;
  }
  if (GEnableNaniteMaterialOverrides == 0) {
    return false;
  }
  return true;
}

