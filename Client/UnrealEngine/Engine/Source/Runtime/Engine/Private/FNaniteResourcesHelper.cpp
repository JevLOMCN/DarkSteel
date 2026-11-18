// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// AuditMaterials<UStaticMeshComponent> @ 147997160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMaterialAudit * __cdecl
Nanite::FNaniteResourcesHelper::AuditMaterials<UStaticMeshComponent>
          (UStaticMeshComponent *param_1,FMaterialAudit *param_2,bool param_3)

{
  ForElementType<Nanite::FMaterialAuditEntry> FVar1;
  UStaticMesh *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> *pFVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  EBlendMode EVar11;
  UMaterial *pUVar12;
  FMaterialAudit *pFVar13;
  longlong lVar14;
  ushort *puVar15;
  TConsoleVariableData<int> *pTVar16;
  IConsoleManager *pIVar17;
  TConsoleVariableData<int> *pTVar18;
  ForElementType<Nanite::FMaterialAuditEntry> FVar19;
  int *piVar20;
  longlong *plVar21;
  ulonglong uVar22;
  uchar *puVar23;
  TConsoleVariableData<int> *pTVar25;
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
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> FVar24;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_648;
  pTVar25 = (TConsoleVariableData<int> *)0x0;
  lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_616 = param_3;
  local_610._32_8_ = param_1;
  if ((*(int *)(lVar14 + 0x9d4c) <
       `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UStaticMeshComponent>(UStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UStaticMeshComponent>(UStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UStaticMeshComponent>(UStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pIVar17 = IConsoleManager::Get();
    plVar21 = (longlong *)
              (**(code **)((longlong)*pIVar17 + 0xc0))(pIVar17,L"r.Nanite.ForceEnableMeshes");
    pTVar18 = pTVar25;
    if (plVar21 != (longlong *)0x0) {
      pTVar18 = (TConsoleVariableData<int> *)(**(code **)(*plVar21 + 0x68))(plVar21);
    }
    `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UStaticMeshComponent>(UStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
    ::__l2::NaniteForceEnableMeshesCvar = pTVar18;
    _Init_thread_footer(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UStaticMeshComponent>(UStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*(int *)(lVar14 + 0x9d4c) <
       `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UStaticMeshComponent>(UStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
       ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UStaticMeshComponent>(UStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                           ::__l2::_thread_safe_static_guard_1__),
     pTVar18 = `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UStaticMeshComponent>(UStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
               ::__l2::NaniteForceEnableMeshesCvar,
     `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UStaticMeshComponent>(UStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    if (`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UStaticMeshComponent>(UStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
        ::__l2::NaniteForceEnableMeshesCvar == (TConsoleVariableData<int> *)0x0) {
LAB_147997915:
      `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UStaticMeshComponent>(UStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
      ::__l2::bNaniteForceEnableMeshes = false;
    }
    else {
      bVar6 = IsInParallelGameThread();
      if (bVar6) {
LAB_147997908:
        pTVar16 = pTVar25;
      }
      else {
        bVar6 = IsInGameThread();
        pTVar16 = (TConsoleVariableData<int> *)&DAT_00000004;
        if (bVar6) goto LAB_147997908;
      }
      if (*(int *)((longlong)pTVar18->ShadowedValue + (longlong)pTVar16->ShadowedValue) == 0)
      goto LAB_147997915;
      `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UStaticMeshComponent>(UStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
      ::__l2::bNaniteForceEnableMeshes = true;
    }
    _Init_thread_footer(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UStaticMeshComponent>(UStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                         ::__l2::_thread_safe_static_guard_1__);
    param_1 = (UStaticMeshComponent *)local_610._32_8_;
  }
  if ((*(int *)(lVar14 + 0x9d4c) <
       `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UStaticMeshComponent>(UStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
       ::__l2::_thread_safe_static_guard_2__) &&
     (_Init_thread_header(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UStaticMeshComponent>(UStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                           ::__l2::_thread_safe_static_guard_2__),
     `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UStaticMeshComponent>(UStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
     ::__l2::_thread_safe_static_guard_2__ == -1)) {
    pIVar17 = IConsoleManager::Get();
    plVar21 = (longlong *)
              (**(code **)((longlong)*pIVar17 + 0xc0))
                        (pIVar17,L"r.LumenScene.SurfaceCache.DetectCardSharingCompatibility");
    pTVar18 = pTVar25;
    if (plVar21 != (longlong *)0x0) {
      pTVar18 = (TConsoleVariableData<int> *)(**(code **)(*plVar21 + 0x68))(plVar21);
    }
    `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UStaticMeshComponent>(UStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
    ::__l2::CVarLumenDetectCardSharingCompatibility = pTVar18;
    _Init_thread_footer(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UStaticMeshComponent>(UStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                         ::__l2::_thread_safe_static_guard_2__);
  }
  pTVar18 = `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UStaticMeshComponent>(UStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
            ::__l2::CVarLumenDetectCardSharingCompatibility;
  bVar8 = 0;
  if (`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UStaticMeshComponent>(UStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
      ::__l2::CVarLumenDetectCardSharingCompatibility != (TConsoleVariableData<int> *)0x0) {
    bVar6 = IsInParallelGameThread();
    if ((bVar6) ||
       (bVar6 = IsInGameThread(), pTVar16 = (TConsoleVariableData<int> *)&DAT_00000004, bVar6)) {
      pTVar16 = pTVar25;
    }
    bVar6 = true;
    if (*(int *)((longlong)pTVar18->ShadowedValue + (longlong)pTVar16->ShadowedValue) != 0)
    goto LAB_147997222;
  }
  bVar6 = false;
LAB_147997222:
  param_2->bHasAnyError = '\0';
  piVar20 = &(param_2->Entries).ArrayMax;
  (param_2->Entries).ArrayNum = 0;
  if (*piVar20 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::FMaterialAuditEntry>_>
              (0x30,0x10,0,&(param_2->Entries).AllocatorInstance,0,piVar20);
  }
  if (param_1 != (UStaticMeshComponent *)0x0) {
    Nanite::Private::GetMaterialSlotInfos<UStaticMeshComponent>(&local_558,param_1);
    local_610._24_4_ = local_558.ArrayNum;
    uVar22 = (ulonglong)(int)local_610._24_4_;
    if (0 < (int)local_610._24_4_) {
      bVar8 = 8;
    }
    param_2->bCompatibleWithLumenCardSharing = bVar8 >> 3;
    FVar24 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)&local_558;
    if (local_558.AllocatorInstance.SecondaryData !=
        (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
      FVar24 = local_558.AllocatorInstance.SecondaryData;
    }
    puVar23 = (uchar *)((longlong)FVar24 + 0x14);
    local_5d0 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo> *)
                ((longlong)FVar24 + uVar22 * 0x28);
    while( true ) {
      pFVar5 = local_5d0;
      piVar20 = &(param_2->Entries).ArrayMax;
      if (local_558.ArrayNum != (int)uVar22) {
        local_617 = 0;
        `TCheckedPointerIterator<Nanite::Private::FAuditMaterialSlotInfo,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_617);
      }
      if ((ForElementType<Nanite::Private::FAuditMaterialSlotInfo> *)(puVar23 + -0x14) == pFVar5)
      break;
      iVar10 = (param_2->Entries).ArrayNum;
      if (iVar10 == *piVar20) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::FMaterialAuditEntry>_>
                           (0x1030,&(param_2->Entries).AllocatorInstance,piVar20);
      }
      (param_2->Entries).ArrayNum = iVar10 + 1;
      FVar1 = (param_2->Entries).AllocatorInstance.SecondaryData;
      FVar19 = (ForElementType<Nanite::FMaterialAuditEntry>)&param_2->Entries;
      if (FVar1 != (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
        FVar19 = FVar1;
      }
      plVar21 = (longlong *)((longlong)iVar10 * 0x30 + (longlong)FVar19);
      DefaultConstructItems<Nanite::FMaterialAuditEntry,int>(plVar21,1);
      plVar21[1] = *(longlong *)(puVar23 + -0xc);
      *(int *)(plVar21 + 2) = (int)pTVar25;
      local_610._20_4_ = (int)pTVar25 + 1;
      pUVar12 = *(UMaterial **)
                 ((ForElementType<Nanite::Private::FAuditMaterialSlotInfo> *)(puVar23 + -0x14))->
                 InlineData;
      *(byte *)((longlong)plVar21 + 0x14) = *(byte *)((longlong)plVar21 + 0x14) & 0xfd;
      *plVar21 = (longlong)pUVar12;
      bVar8 = 0;
      if (pUVar12 == (UMaterial *)0x0) {
        bVar8 = 2;
      }
      *(byte *)((longlong)plVar21 + 0x14) = *(byte *)((longlong)plVar21 + 0x14) | bVar8;
      lVar14 = *(longlong *)(puVar23 + 8);
      local_5c8 = *(longlong *)puVar23;
      lStack_5c0 = *(longlong *)(puVar23 + 8);
      plVar21[4] = *(longlong *)puVar23;
      plVar21[5] = lVar14;
      if ((*(byte *)((longlong)plVar21 + 0x14) & 2) != 0) {
        pUVar12 = UMaterial::GetDefaultMaterial(MD_Surface);
        *plVar21 = (longlong)pUVar12;
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
      pUVar12 = (UMaterial *)(**(code **)(pUVar12->_padding_ + 0x2e0))(0,local_578);
      if ((pUVar12 == (UMaterial *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Material != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\NaniteResourcesHelper.h"
                             ,0xd0,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar13 = (FMaterialAudit *)(*pcVar4)();
        return pFVar13;
      }
      EVar11 = (**(code **)(*(longlong *)*plVar21 + 0x460))();
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
      lVar14 = (**(code **)(pUVar12->_padding_ + 0x2f0))(pUVar12,&local_568);
      *(byte *)((longlong)plVar21 + 0x14) =
           (char)(*(uint *)(lVar14 + 0x4d0) >> 0xb) << 7 |
           *(byte *)((longlong)plVar21 + 0x14) & 0x7f;
      bVar8 = ((char)(*(uint *)(lVar14 + 0x4d0) >> 10) * '\x02' ^
              *(byte *)((longlong)plVar21 + 0x15)) & 2 ^ *(byte *)((longlong)plVar21 + 0x15);
      *(byte *)((longlong)plVar21 + 0x15) = bVar8;
      bVar8 = ((char)(*(uint *)(lVar14 + 0x4d0) >> 9) << 2 ^ bVar8) & 4 ^ bVar8;
      *(byte *)((longlong)plVar21 + 0x15) = bVar8;
      *(byte *)((longlong)plVar21 + 0x15) =
           ((byte)(*(uint *)(lVar14 + 0x4d0) >> 0xc) ^ bVar8) & 1 ^ bVar8;
      bVar7 = UMaterial::HasPixelDepthOffsetConnected(pUVar12);
      *(byte *)((longlong)plVar21 + 0x14) = *(byte *)((longlong)plVar21 + 0x14) & 0xdf | bVar7 << 5;
      bVar7 = UMaterial::HasVertexPositionOffsetConnected(pUVar12);
      *(byte *)((longlong)plVar21 + 0x14) = *(byte *)((longlong)plVar21 + 0x14) & 0xfb | bVar7 << 2;
      cVar9 = (**(code **)(pUVar12->_padding_ + 0x578))(pUVar12);
      *(byte *)((longlong)plVar21 + 0x14) =
           *(byte *)((longlong)plVar21 + 0x14) ^
           (cVar9 << 6 ^ *(byte *)((longlong)plVar21 + 0x14)) & 0x40;
      bVar7 = IsSupportedBlendMode(EVar11);
      *(byte *)((longlong)plVar21 + 0x14) = !bVar7 << 3 | *(byte *)((longlong)plVar21 + 0x14) & 0xf7
      ;
      puVar15 = (ushort *)(**(code **)(pUVar12->_padding_ + 0x468))(pUVar12,local_610 + 0x10);
      bVar7 = IsSupportedShadingModel((FMaterialShadingModelField)*puVar15);
      *(byte *)((longlong)plVar21 + 0x14) = !bVar7 << 4 | *(byte *)((longlong)plVar21 + 0x14) & 0xef
      ;
      if (local_616 == '\0') {
        bVar7 = UMaterial::NeedsSetMaterialUsage_Concurrent(pUVar12,local_615,MATUSAGE_Nanite);
      }
      else {
        cVar9 = (**(code **)(pUVar12->_padding_ + 0x378))(pUVar12,0x12);
        bVar7 = cVar9 == '\0';
      }
      *(byte *)((longlong)plVar21 + 0x15) = *(byte *)((longlong)plVar21 + 0x15) & 0xf7;
      *(byte *)((longlong)plVar21 + 0x15) = *(byte *)((longlong)plVar21 + 0x15) | bVar7 << 3;
      if (EVar11 == BLEND_Masked) {
        param_2->bHasMasked = '\x01';
      }
      if (pUVar12->bIsSky != '\0') {
        param_2->field_0xf8 = param_2->field_0xf8 | 4;
      }
      cVar9 = (**(code **)(*(longlong *)*plVar21 + 0x588))();
      if ((cVar9 == '\0') && ((!bVar6 || ((*(uint *)(lVar14 + 0x4d0) & 0x4600) != 0)))) {
        param_2->bCompatibleWithLumenCardSharing = '\0';
      }
      bVar8 = *(byte *)((longlong)plVar21 + 0x14);
      bVar8 = (byte)(bVar8 >> 1 | *(byte *)((longlong)plVar21 + 0x15) | bVar8) >> 3 & 1 ^
              bVar8 & 0xfe;
      *(byte *)((longlong)plVar21 + 0x14) = bVar8;
      if (((bVar8 & 1) != 0) && (param_2->bHasAnyError == 0)) {
        pUVar2 = (((TObjectPtr<UStaticMesh> *)(local_610._32_8_ + 0x5a0))->field0_0x0).DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UStaticMesh *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
        local_5e8 = (FName)pUVar2->_padding_;
        ::FName::ToString(&local_5e8,(FString *)local_610);
        if (param_2 != (FMaterialAudit *)local_610) {
          pFVar3 = (param_2->AssetName).Data.AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
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
        pUVar12 = UMaterial::GetDefaultMaterial(MD_Surface);
        param_2->FallbackMaterial = (UMaterialInterface *)pUVar12;
      }
      param_2->field_0xf8 =
           (param_2->bHasAnyError | *(byte *)((longlong)plVar21 + 0x14)) & 1 ^
           param_2->field_0xf8 & 0xfe;
      if (`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UStaticMeshComponent>(UStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
          ::__l2::bNaniteForceEnableMeshes == false) {
        if ((*(byte *)((longlong)plVar21 + 0x14) & 8) != 0) {
          EVar11 = (**(code **)(*(longlong *)*plVar21 + 0x460))();
          GetBlendModeString(&local_5a8,EVar11);
          if (2 < (byte)LogStaticMesh._0_1_) {
            local_5e0 = *(FName *)(*plVar21 + 0x18);
            ::FName::ToString(&local_5e0,&local_5b8);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UStaticMeshComponent>(UStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                        ::__l55::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
            if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
            }
          }
          if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
          }
        }
        if ((*(byte *)((longlong)plVar21 + 0x14) & 0x10) != 0) {
          puVar15 = (ushort *)
                    (**(code **)(*(longlong *)*plVar21 + 0x468))
                              ((longlong *)*plVar21,local_610 + 0x12);
          GetShadingModelFieldString(&local_588,(FMaterialShadingModelField)*puVar15);
          if (2 < (byte)LogStaticMesh._0_1_) {
            local_5d8 = *(FName *)(*plVar21 + 0x18);
            ::FName::ToString(&local_5d8,&local_598);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UStaticMeshComponent>(UStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
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
      pTVar25 = (TConsoleVariableData<int> *)(ulonglong)(uint)local_610._20_4_;
      puVar23 = puVar23 + 0x28;
      uVar22 = (ulonglong)(uint)local_610._24_4_;
    }
    if (local_558.AllocatorInstance.SecondaryData !=
        (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
      FMemory::Free((void *)local_558.AllocatorInstance.SecondaryData);
    }
  }
  return param_2;
}

// HasValidNaniteData<UStaticMeshComponent> @ 14799e7b0

bool __cdecl
Nanite::FNaniteResourcesHelper::HasValidNaniteData<UStaticMeshComponent>
          (UStaticMeshComponent *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(param_1->_padding_ + 0xb30))();
  if (lVar1 != 0) {
    return 0 < *(int *)(lVar1 + 0x70);
  }
  return false;
}

// ShouldCreateNaniteProxy<UStaticMeshComponent> @ 1479a22d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
Nanite::FNaniteResourcesHelper::ShouldCreateNaniteProxy<UStaticMeshComponent>
          (UStaticMeshComponent *param_1,FMaterialAudit *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<Nanite::FMaterialAuditEntry> FVar4;
  bool bVar5;
  char cVar6;
  EShaderPlatform EVar7;
  FSceneInterface *pFVar8;
  UWorld *pUVar9;
  undefined1 auStack_148 [32];
  FMaterialAudit local_128;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  if (param_1->bDisallowNanite == '\0' && param_1->bForceDisableNanite == '\0') {
    pFVar8 = UActorComponent::GetScene((UActorComponent *)param_1);
    EVar7 = GMaxRHIShaderPlatform;
    if (pFVar8 != (FSceneInterface *)0x0) {
      pFVar8 = UActorComponent::GetScene((UActorComponent *)param_1);
      EVar7 = FSceneInterface::GetShaderPlatform(pFVar8);
    }
    bVar5 = UseNanite(EVar7,true,true);
    if ((bVar5) && (cVar6 = (**(code **)(param_1->_padding_ + 0xb38))(param_1), cVar6 != '\0')) {
      local_128.bCompatibleWithLumenCardSharing = '\0';
      local_128.bHasSky = '\0';
      local_128.bHasMasked = '\0';
      local_128.bHasAnyError = '\0';
      local_128.AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.AssetName.Data.ArrayNum = 0;
      local_128.AssetName.Data.ArrayMax = 0;
      local_128.Entries.AllocatorInstance.SecondaryData =
           (ForElementType<Nanite::FMaterialAuditEntry>)0x0;
      local_128.Entries.ArrayNum = 0;
      local_128.Entries.ArrayMax = 4;
      local_128.FallbackMaterial = (UMaterialInterface *)0x0;
      AuditMaterials<UStaticMeshComponent>(param_1,&local_128,param_2 != (FMaterialAudit *)0x0);
      pUVar9 = (UWorld *)param_1->_padding_;
      if (pUVar9 == (UWorld *)0x0) {
        pUVar9 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
      }
      bVar5 = IsMaskingAllowed(pUVar9,param_1->bForceNaniteForMasked);
      if (((local_128.bHasAnyError == 0) && (local_128.bHasSky == '\0')) &&
         ((bVar5 || (local_128.bHasMasked == '\0')))) {
        if (param_2 != (FMaterialAudit *)0x0) {
          if (param_2 != &local_128) {
            pFVar3 = (param_2->AssetName).Data.AllocatorInstance.Data;
            if (pFVar3 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar3);
            }
            (param_2->AssetName).Data.AllocatorInstance.Data =
                 local_128.AssetName.Data.AllocatorInstance.Data;
            (param_2->AssetName).Data.ArrayNum = local_128.AssetName.Data.ArrayNum;
            (param_2->AssetName).Data.ArrayMax = local_128.AssetName.Data.ArrayMax;
            local_128.AssetName.Data.ArrayNum = 0;
            local_128.AssetName.Data.ArrayMax = 0;
            local_128.AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          if (&param_2->Entries != &local_128.Entries) {
            if (local_128.Entries.AllocatorInstance.SecondaryData ==
                (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
              *(undefined8 *)(param_2->Entries).AllocatorInstance.InlineData =
                   local_128.Entries.AllocatorInstance.InlineData._0_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 8) =
                   local_128.Entries.AllocatorInstance.InlineData._8_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x10) =
                   local_128.Entries.AllocatorInstance.InlineData._16_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x18) =
                   local_128.Entries.AllocatorInstance.InlineData._24_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x20) =
                   local_128.Entries.AllocatorInstance.InlineData._32_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x28) =
                   local_128.Entries.AllocatorInstance.InlineData._40_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x30) =
                   local_128.Entries.AllocatorInstance.InlineData._48_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x38) =
                   local_128.Entries.AllocatorInstance.InlineData._56_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x40) =
                   local_128.Entries.AllocatorInstance.InlineData._64_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x48) =
                   local_128.Entries.AllocatorInstance.InlineData._72_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x50) =
                   local_128.Entries.AllocatorInstance.InlineData._80_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x58) =
                   local_128.Entries.AllocatorInstance.InlineData._88_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x60) =
                   local_128.Entries.AllocatorInstance.InlineData._96_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x68) =
                   local_128.Entries.AllocatorInstance.InlineData._104_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x70) =
                   local_128.Entries.AllocatorInstance.InlineData._112_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x78) =
                   local_128.Entries.AllocatorInstance.InlineData._120_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x80) =
                   local_128.Entries.AllocatorInstance.InlineData._128_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x88) =
                   local_128.Entries.AllocatorInstance.InlineData._136_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x90) =
                   local_128.Entries.AllocatorInstance.InlineData._144_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x98) =
                   local_128.Entries.AllocatorInstance.InlineData._152_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0xa0) =
                   local_128.Entries.AllocatorInstance.InlineData._160_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0xa8) =
                   local_128.Entries.AllocatorInstance.InlineData._168_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0xb0) =
                   local_128.Entries.AllocatorInstance.InlineData._176_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0xb8) =
                   local_128.Entries.AllocatorInstance.InlineData._184_8_;
            }
            FVar4 = (param_2->Entries).AllocatorInstance.SecondaryData;
            if (FVar4 != (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
              FMemory::Free((void *)FVar4);
            }
            (param_2->Entries).AllocatorInstance.SecondaryData =
                 local_128.Entries.AllocatorInstance.SecondaryData;
            (param_2->Entries).ArrayNum = local_128.Entries.ArrayNum;
            (param_2->Entries).ArrayMax = local_128.Entries.ArrayMax;
            local_128.Entries.ArrayMax = 4;
            local_128.Entries.AllocatorInstance.SecondaryData =
                 (ForElementType<Nanite::FMaterialAuditEntry>)0x0;
            local_128.Entries.ArrayNum = 0;
          }
          param_2->bHasAnyError = '\0';
          param_2->bCompatibleWithLumenCardSharing = '\0';
          param_2->bHasSky = '\0';
          param_2->bHasMasked = '\0';
          param_2->field_0xf8 = param_2->field_0xf8 | local_128._248_1_ & 0xf;
          param_2->FallbackMaterial = local_128.FallbackMaterial;
        }
        if (local_128.Entries.AllocatorInstance.SecondaryData !=
            (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
          FMemory::Free((void *)local_128.Entries.AllocatorInstance.SecondaryData);
        }
        if (local_128.AssetName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.AssetName.Data.AllocatorInstance.Data);
        }
        return true;
      }
      if (local_128.Entries.AllocatorInstance.SecondaryData !=
          (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
        FMemory::Free((void *)local_128.Entries.AllocatorInstance.SecondaryData);
      }
      if (local_128.AssetName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.AssetName.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// UseNaniteOverrideMaterials<UStaticMeshComponent> @ 1479a2870

bool __cdecl
Nanite::FNaniteResourcesHelper::UseNaniteOverrideMaterials<UStaticMeshComponent>
          (UStaticMeshComponent *param_1,bool param_2)

{
  bool bVar1;
  
  if ((!param_2) &&
     (bVar1 = ShouldCreateNaniteProxy<UStaticMeshComponent>(param_1,(FMaterialAudit *)0x0), !bVar1))
  {
    return false;
  }
  if (GEnableNaniteMaterialOverrides == 0) {
    return false;
  }
  return true;
}

// AuditMaterials<FInstancedSkinnedMeshSceneProxyDesc> @ 147cb1af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMaterialAudit * __cdecl
Nanite::FNaniteResourcesHelper::AuditMaterials<FInstancedSkinnedMeshSceneProxyDesc>
          (FInstancedSkinnedMeshSceneProxyDesc *param_1,FMaterialAudit *param_2,bool param_3)

{
  longlong lVar1;
  ForElementType<Nanite::FMaterialAuditEntry> FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> FVar5;
  bool bVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  EBlendMode EVar10;
  UMaterial *pUVar11;
  FMaterialAudit *pFVar12;
  ushort *puVar13;
  TConsoleVariableData<int> *pTVar14;
  IConsoleManager *pIVar15;
  TConsoleVariableData<int> *pTVar16;
  ForAnyElementType FVar17;
  ForElementType<Nanite::FMaterialAuditEntry> FVar18;
  int *piVar19;
  longlong *plVar20;
  TConsoleVariableData<int> *pTVar21;
  ulonglong uVar22;
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> FVar23;
  undefined1 auStackY_668 [32];
  bool local_637;
  char local_636;
  undefined1 local_635;
  undefined1 local_634 [2];
  undefined1 local_632 [2];
  uint local_630;
  uint local_62c;
  FString local_628;
  FString local_618;
  longlong local_608;
  longlong lStack_600;
  longlong local_5f8;
  FName local_5f0;
  FName local_5e8;
  FName local_5e0;
  FName local_5d8;
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> local_5d0;
  FString local_5c8;
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  FString local_568;
  TArray<Nanite::Private::FAuditMaterialSlotInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_558;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_668;
  pTVar21 = (TConsoleVariableData<int> *)0x0;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FInstancedSkinnedMeshSceneProxyDesc>(FInstancedSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FInstancedSkinnedMeshSceneProxyDesc>(FInstancedSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FInstancedSkinnedMeshSceneProxyDesc>(FInstancedSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pIVar15 = IConsoleManager::Get();
    plVar20 = (longlong *)
              (**(code **)((longlong)*pIVar15 + 0xc0))(pIVar15,L"r.Nanite.ForceEnableMeshes");
    pTVar16 = pTVar21;
    if (plVar20 != (longlong *)0x0) {
      pTVar16 = (TConsoleVariableData<int> *)(**(code **)(*plVar20 + 0x68))(plVar20);
    }
    `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FInstancedSkinnedMeshSceneProxyDesc>(FInstancedSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
    ::__l2::NaniteForceEnableMeshesCvar = pTVar16;
    _Init_thread_footer(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FInstancedSkinnedMeshSceneProxyDesc>(FInstancedSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FInstancedSkinnedMeshSceneProxyDesc>(FInstancedSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
       ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FInstancedSkinnedMeshSceneProxyDesc>(FInstancedSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                           ::__l2::_thread_safe_static_guard_1__),
     pTVar16 = `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FInstancedSkinnedMeshSceneProxyDesc>(FInstancedSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
               ::__l2::NaniteForceEnableMeshesCvar,
     `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FInstancedSkinnedMeshSceneProxyDesc>(FInstancedSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    if (`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FInstancedSkinnedMeshSceneProxyDesc>(FInstancedSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
        ::__l2::NaniteForceEnableMeshesCvar == (TConsoleVariableData<int> *)0x0) {
LAB_147cb2381:
      `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FInstancedSkinnedMeshSceneProxyDesc>(FInstancedSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
      ::__l2::bNaniteForceEnableMeshes = false;
    }
    else {
      bVar6 = IsInParallelGameThread();
      if (bVar6) {
LAB_147cb2374:
        pTVar14 = pTVar21;
      }
      else {
        bVar6 = IsInGameThread();
        pTVar14 = (TConsoleVariableData<int> *)&DAT_00000004;
        if (bVar6) goto LAB_147cb2374;
      }
      if (*(int *)((longlong)pTVar16->ShadowedValue + (longlong)pTVar14->ShadowedValue) == 0)
      goto LAB_147cb2381;
      `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FInstancedSkinnedMeshSceneProxyDesc>(FInstancedSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
      ::__l2::bNaniteForceEnableMeshes = true;
    }
    _Init_thread_footer(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FInstancedSkinnedMeshSceneProxyDesc>(FInstancedSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FInstancedSkinnedMeshSceneProxyDesc>(FInstancedSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
       ::__l2::_thread_safe_static_guard_2__) &&
     (_Init_thread_header(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FInstancedSkinnedMeshSceneProxyDesc>(FInstancedSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                           ::__l2::_thread_safe_static_guard_2__),
     `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FInstancedSkinnedMeshSceneProxyDesc>(FInstancedSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
     ::__l2::_thread_safe_static_guard_2__ == -1)) {
    pIVar15 = IConsoleManager::Get();
    plVar20 = (longlong *)
              (**(code **)((longlong)*pIVar15 + 0xc0))
                        (pIVar15,L"r.LumenScene.SurfaceCache.DetectCardSharingCompatibility");
    pTVar16 = pTVar21;
    if (plVar20 != (longlong *)0x0) {
      pTVar16 = (TConsoleVariableData<int> *)(**(code **)(*plVar20 + 0x68))(plVar20);
    }
    `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FInstancedSkinnedMeshSceneProxyDesc>(FInstancedSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
    ::__l2::CVarLumenDetectCardSharingCompatibility = pTVar16;
    _Init_thread_footer(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FInstancedSkinnedMeshSceneProxyDesc>(FInstancedSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                         ::__l2::_thread_safe_static_guard_2__);
  }
  pTVar16 = `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FInstancedSkinnedMeshSceneProxyDesc>(FInstancedSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
            ::__l2::CVarLumenDetectCardSharingCompatibility;
  bVar7 = 0;
  if (`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FInstancedSkinnedMeshSceneProxyDesc>(FInstancedSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
      ::__l2::CVarLumenDetectCardSharingCompatibility != (TConsoleVariableData<int> *)0x0) {
    bVar6 = IsInParallelGameThread();
    if ((bVar6) ||
       (bVar6 = IsInGameThread(), pTVar14 = (TConsoleVariableData<int> *)&DAT_00000004, bVar6)) {
      pTVar14 = pTVar21;
    }
    local_636 = '\x01';
    if (*(int *)((longlong)pTVar16->ShadowedValue + (longlong)pTVar14->ShadowedValue) != 0)
    goto LAB_147cb1bb0;
  }
  local_636 = '\0';
LAB_147cb1bb0:
  param_2->bHasAnyError = '\0';
  piVar19 = &(param_2->Entries).ArrayMax;
  (param_2->Entries).ArrayNum = 0;
  if (*piVar19 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::FMaterialAuditEntry>_>
              (0x30,0x10,0,&(param_2->Entries).AllocatorInstance,0,piVar19);
  }
  if (param_1 != (FInstancedSkinnedMeshSceneProxyDesc *)0x0) {
    Nanite::Private::GetMaterialSlotInfos<FInstancedSkinnedMeshSceneProxyDesc>(&local_558,param_1);
    local_62c = local_558.ArrayNum;
    uVar22 = (ulonglong)(int)local_62c;
    if (0 < (int)local_62c) {
      bVar7 = 8;
    }
    param_2->bCompatibleWithLumenCardSharing = bVar7 >> 3;
    FVar23 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)&local_558;
    if (local_558.AllocatorInstance.SecondaryData !=
        (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
      FVar23 = local_558.AllocatorInstance.SecondaryData;
    }
    local_5d0 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)
                ((longlong)FVar23 + uVar22 * 0x28);
    while( true ) {
      FVar5 = local_5d0;
      piVar19 = &(param_2->Entries).ArrayMax;
      if (local_558.ArrayNum != (int)uVar22) {
        local_635 = 0;
        `TCheckedPointerIterator<Nanite::Private::FAuditMaterialSlotInfo,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_635);
      }
      if (FVar23 == FVar5) break;
      iVar9 = (param_2->Entries).ArrayNum;
      if (iVar9 == *piVar19) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::FMaterialAuditEntry>_>
                          (0x1030,&(param_2->Entries).AllocatorInstance,piVar19);
      }
      (param_2->Entries).ArrayNum = iVar9 + 1;
      FVar2 = (param_2->Entries).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<Nanite::FMaterialAuditEntry>)&param_2->Entries;
      if (FVar2 != (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
        FVar18 = FVar2;
      }
      plVar20 = (longlong *)((longlong)iVar9 * 0x30 + (longlong)FVar18);
      DefaultConstructItems<Nanite::FMaterialAuditEntry,int>(plVar20,1);
      plVar20[1] = *(longlong *)((longlong)FVar23 + 8);
      *(int *)(plVar20 + 2) = (int)pTVar21;
      local_630 = (int)pTVar21 + 1;
      pUVar11 = *(UMaterial **)FVar23;
      *(byte *)((longlong)plVar20 + 0x14) = *(byte *)((longlong)plVar20 + 0x14) & 0xfd;
      *plVar20 = (longlong)pUVar11;
      bVar7 = 0;
      if (pUVar11 == (UMaterial *)0x0) {
        bVar7 = 2;
      }
      *(byte *)((longlong)plVar20 + 0x14) = *(byte *)((longlong)plVar20 + 0x14) | bVar7;
      local_608 = *(longlong *)((longlong)FVar23 + 0x14);
      lStack_600 = *(longlong *)((longlong)FVar23 + 0x1c);
      plVar20[4] = local_608;
      plVar20[5] = lStack_600;
      if ((*(byte *)((longlong)plVar20 + 0x14) & 2) != 0) {
        pUVar11 = UMaterial::GetDefaultMaterial(MD_Surface);
        *plVar20 = (longlong)pUVar11;
      }
      local_588 = 0;
      uStack_580 = 0;
      pUVar11 = (UMaterial *)(**(code **)(pUVar11->_padding_ + 0x2e0))(0,&local_588);
      if ((pUVar11 == (UMaterial *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Material != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\NaniteResourcesHelper.h"
                             ,0xd0,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar12 = (FMaterialAudit *)(*pcVar4)();
        return pFVar12;
      }
      EVar10 = (**(code **)(*(longlong *)*plVar20 + 0x460))();
      local_637 = false;
      local_578 = 0;
      uStack_570 = 0;
      local_5f8 = (**(code **)(pUVar11->_padding_ + 0x2f0))(pUVar11,&local_578);
      *(byte *)((longlong)plVar20 + 0x14) =
           (char)(*(uint *)(local_5f8 + 0x4d0) >> 0xb) << 7 |
           *(byte *)((longlong)plVar20 + 0x14) & 0x7f;
      bVar7 = ((char)(*(uint *)(local_5f8 + 0x4d0) >> 10) * '\x02' ^
              *(byte *)((longlong)plVar20 + 0x15)) & 2 ^ *(byte *)((longlong)plVar20 + 0x15);
      *(byte *)((longlong)plVar20 + 0x15) = bVar7;
      bVar7 = ((char)(*(uint *)(local_5f8 + 0x4d0) >> 9) << 2 ^ bVar7) & 4 ^ bVar7;
      *(byte *)((longlong)plVar20 + 0x15) = bVar7;
      *(byte *)((longlong)plVar20 + 0x15) =
           ((byte)(*(uint *)(local_5f8 + 0x4d0) >> 0xc) ^ bVar7) & 1 ^ bVar7;
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
      puVar13 = (ushort *)(**(code **)(pUVar11->_padding_ + 0x468))(pUVar11,local_634);
      bVar6 = IsSupportedShadingModel((FMaterialShadingModelField)*puVar13);
      *(byte *)((longlong)plVar20 + 0x14) = !bVar6 << 4 | *(byte *)((longlong)plVar20 + 0x14) & 0xef
      ;
      if (param_3) {
        cVar8 = (**(code **)(pUVar11->_padding_ + 0x378))(pUVar11,0x12);
        bVar6 = cVar8 == '\0';
      }
      else {
        bVar6 = UMaterial::NeedsSetMaterialUsage_Concurrent(pUVar11,&local_637,MATUSAGE_Nanite);
      }
      *(byte *)((longlong)plVar20 + 0x15) = *(byte *)((longlong)plVar20 + 0x15) & 0xf7;
      *(byte *)((longlong)plVar20 + 0x15) = *(byte *)((longlong)plVar20 + 0x15) | bVar6 << 3;
      bVar6 = Nanite::Private::IsMaterialSkeletalMesh<FInstancedSkinnedMeshSceneProxyDesc>(param_1);
      if (bVar6) {
        if (param_3) {
          cVar8 = (**(code **)(pUVar11->_padding_ + 0x378))(pUVar11,0);
          bVar6 = cVar8 == '\0';
        }
        else {
          bVar6 = UMaterial::NeedsSetMaterialUsage_Concurrent
                            (pUVar11,&local_637,MATUSAGE_SkeletalMesh);
        }
        *(byte *)((longlong)plVar20 + 0x15) =
             (bVar6 << 3 | *(byte *)((longlong)plVar20 + 0x15) & 8) ^
             *(byte *)((longlong)plVar20 + 0x15) & 0xf7;
      }
      if (EVar10 == BLEND_Masked) {
        param_2->bHasMasked = '\x01';
      }
      if (pUVar11->bIsSky != '\0') {
        param_2->field_0xf8 = param_2->field_0xf8 | 4;
      }
      cVar8 = (**(code **)(*(longlong *)*plVar20 + 0x588))();
      if ((cVar8 == '\0') && ((local_636 == '\0' || ((*(uint *)(local_5f8 + 0x4d0) & 0x4600) != 0)))
         ) {
        param_2->bCompatibleWithLumenCardSharing = '\0';
      }
      bVar7 = *(byte *)((longlong)plVar20 + 0x14);
      bVar7 = (byte)(bVar7 >> 1 | *(byte *)((longlong)plVar20 + 0x15) | bVar7) >> 3 & 1 ^
              bVar7 & 0xfe;
      *(byte *)((longlong)plVar20 + 0x14) = bVar7;
      if (((bVar7 & 1) != 0) && (param_2->bHasAnyError == 0)) {
        pFVar12 = (FMaterialAudit *)
                  Nanite::Private::GetMaterialMeshName<FInstancedSkinnedMeshSceneProxyDesc>
                            (&local_568,param_1);
        if (param_2 != pFVar12) {
          pFVar3 = (param_2->AssetName).Data.AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          (param_2->AssetName).Data.AllocatorInstance.Data =
               (pFVar12->AssetName).Data.AllocatorInstance.Data;
          (pFVar12->AssetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (param_2->AssetName).Data.ArrayNum = (pFVar12->AssetName).Data.ArrayNum;
          (param_2->AssetName).Data.ArrayMax = (pFVar12->AssetName).Data.ArrayMax;
          (pFVar12->AssetName).Data.ArrayNum = 0;
          (pFVar12->AssetName).Data.ArrayMax = 0;
        }
        if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_568.Data.AllocatorInstance.Data);
        }
        pUVar11 = UMaterial::GetDefaultMaterial(MD_Surface);
        param_2->FallbackMaterial = (UMaterialInterface *)pUVar11;
      }
      param_2->field_0xf8 =
           (param_2->bHasAnyError | *(byte *)((longlong)plVar20 + 0x14)) & 1 ^
           param_2->field_0xf8 & 0xfe;
      if (`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FInstancedSkinnedMeshSceneProxyDesc>(FInstancedSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
          ::__l2::bNaniteForceEnableMeshes == false) {
        if ((*(byte *)((longlong)plVar20 + 0x14) & 8) != 0) {
          EVar10 = (**(code **)(*(longlong *)*plVar20 + 0x460))();
          GetBlendModeString(&local_628,EVar10);
          bVar6 = Nanite::Private::IsMaterialSkeletalMesh<FInstancedSkinnedMeshSceneProxyDesc>
                            (param_1);
          if (bVar6) {
            if (2 < (byte)LogSkeletalMesh._0_1_) {
              local_5f0 = *(FName *)(*plVar20 + 0x18);
              ::FName::ToString(&local_5f0,&local_5c8);
              UE::Logging::Private::BasicLog<3>
                        (&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FInstancedSkinnedMeshSceneProxyDesc>(FInstancedSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                          ::__l44::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
              FVar17.Data = local_5c8.Data.AllocatorInstance.Data;
LAB_147cb210e:
              if (FVar17.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar17.Data);
              }
            }
          }
          else if (2 < (byte)LogStaticMesh._0_1_) {
            local_5e8 = *(FName *)(*plVar20 + 0x18);
            ::FName::ToString(&local_5e8,&local_5b8);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FInstancedSkinnedMeshSceneProxyDesc>(FInstancedSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                        ::__l55::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
            FVar17.Data = local_5b8.Data.AllocatorInstance.Data;
            goto LAB_147cb210e;
          }
          if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_628.Data.AllocatorInstance.Data);
          }
        }
        if ((*(byte *)((longlong)plVar20 + 0x14) & 0x10) != 0) {
          puVar13 = (ushort *)
                    (**(code **)(*(longlong *)*plVar20 + 0x468))((longlong *)*plVar20,local_632);
          GetShadingModelFieldString(&local_618,(FMaterialShadingModelField)*puVar13);
          bVar6 = Nanite::Private::IsMaterialSkeletalMesh<FInstancedSkinnedMeshSceneProxyDesc>
                            (param_1);
          if (bVar6) {
            if (2 < (byte)LogSkeletalMesh._0_1_) {
              local_5e0 = *(FName *)(*plVar20 + 0x18);
              ::FName::ToString(&local_5e0,&local_5a8);
              UE::Logging::Private::BasicLog<3>
                        (&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FInstancedSkinnedMeshSceneProxyDesc>(FInstancedSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                          ::__l70::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
              FVar17.Data = local_5a8.Data.AllocatorInstance.Data;
LAB_147cb2249:
              if (FVar17.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar17.Data);
              }
            }
          }
          else if (2 < (byte)LogStaticMesh._0_1_) {
            local_5d8 = *(FName *)(*plVar20 + 0x18);
            ::FName::ToString(&local_5d8,&local_598);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FInstancedSkinnedMeshSceneProxyDesc>(FInstancedSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                        ::__l81::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
            FVar17.Data = local_598.Data.AllocatorInstance.Data;
            goto LAB_147cb2249;
          }
          if (local_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_618.Data.AllocatorInstance.Data);
          }
        }
      }
      pTVar21 = (TConsoleVariableData<int> *)(ulonglong)local_630;
      FVar23 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)((longlong)FVar23 + 0x28);
      uVar22 = (ulonglong)local_62c;
    }
    if (local_558.AllocatorInstance.SecondaryData !=
        (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
      FMemory::Free((void *)local_558.AllocatorInstance.SecondaryData);
    }
  }
  return param_2;
}

// AuditMaterials<UInstancedStaticMeshComponent> @ 147cb23f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMaterialAudit * __cdecl
Nanite::FNaniteResourcesHelper::AuditMaterials<UInstancedStaticMeshComponent>
          (UInstancedStaticMeshComponent *param_1,FMaterialAudit *param_2,bool param_3)

{
  ForElementType<Nanite::FMaterialAuditEntry> FVar1;
  UObject *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> *pFVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  EBlendMode EVar11;
  UMaterial *pUVar12;
  FMaterialAudit *pFVar13;
  longlong lVar14;
  ushort *puVar15;
  TConsoleVariableData<int> *pTVar16;
  IConsoleManager *pIVar17;
  TConsoleVariableData<int> *pTVar18;
  ForElementType<Nanite::FMaterialAuditEntry> FVar19;
  int *piVar20;
  longlong *plVar21;
  ulonglong uVar22;
  uchar *puVar23;
  TConsoleVariableData<int> *pTVar25;
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
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> FVar24;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_648;
  pTVar25 = (TConsoleVariableData<int> *)0x0;
  lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_616 = param_3;
  local_610._32_8_ = param_1;
  if ((*(int *)(lVar14 + 0x9d4c) <
       `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UInstancedStaticMeshComponent>(UInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UInstancedStaticMeshComponent>(UInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UInstancedStaticMeshComponent>(UInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pIVar17 = IConsoleManager::Get();
    plVar21 = (longlong *)
              (**(code **)((longlong)*pIVar17 + 0xc0))(pIVar17,L"r.Nanite.ForceEnableMeshes");
    pTVar18 = pTVar25;
    if (plVar21 != (longlong *)0x0) {
      pTVar18 = (TConsoleVariableData<int> *)(**(code **)(*plVar21 + 0x68))(plVar21);
    }
    `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UInstancedStaticMeshComponent>(UInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
    ::__l2::NaniteForceEnableMeshesCvar = pTVar18;
    _Init_thread_footer(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UInstancedStaticMeshComponent>(UInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*(int *)(lVar14 + 0x9d4c) <
       `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UInstancedStaticMeshComponent>(UInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
       ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UInstancedStaticMeshComponent>(UInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                           ::__l2::_thread_safe_static_guard_1__),
     pTVar18 = `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UInstancedStaticMeshComponent>(UInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
               ::__l2::NaniteForceEnableMeshesCvar,
     `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UInstancedStaticMeshComponent>(UInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    if (`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UInstancedStaticMeshComponent>(UInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
        ::__l2::NaniteForceEnableMeshesCvar == (TConsoleVariableData<int> *)0x0) {
LAB_147cb2ba5:
      `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UInstancedStaticMeshComponent>(UInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
      ::__l2::bNaniteForceEnableMeshes = false;
    }
    else {
      bVar6 = IsInParallelGameThread();
      if (bVar6) {
LAB_147cb2b98:
        pTVar16 = pTVar25;
      }
      else {
        bVar6 = IsInGameThread();
        pTVar16 = (TConsoleVariableData<int> *)&DAT_00000004;
        if (bVar6) goto LAB_147cb2b98;
      }
      if (*(int *)((longlong)pTVar18->ShadowedValue + (longlong)pTVar16->ShadowedValue) == 0)
      goto LAB_147cb2ba5;
      `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UInstancedStaticMeshComponent>(UInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
      ::__l2::bNaniteForceEnableMeshes = true;
    }
    _Init_thread_footer(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UInstancedStaticMeshComponent>(UInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                         ::__l2::_thread_safe_static_guard_1__);
    param_1 = (UInstancedStaticMeshComponent *)local_610._32_8_;
  }
  if ((*(int *)(lVar14 + 0x9d4c) <
       `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UInstancedStaticMeshComponent>(UInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
       ::__l2::_thread_safe_static_guard_2__) &&
     (_Init_thread_header(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UInstancedStaticMeshComponent>(UInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                           ::__l2::_thread_safe_static_guard_2__),
     `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UInstancedStaticMeshComponent>(UInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
     ::__l2::_thread_safe_static_guard_2__ == -1)) {
    pIVar17 = IConsoleManager::Get();
    plVar21 = (longlong *)
              (**(code **)((longlong)*pIVar17 + 0xc0))
                        (pIVar17,L"r.LumenScene.SurfaceCache.DetectCardSharingCompatibility");
    pTVar18 = pTVar25;
    if (plVar21 != (longlong *)0x0) {
      pTVar18 = (TConsoleVariableData<int> *)(**(code **)(*plVar21 + 0x68))(plVar21);
    }
    `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UInstancedStaticMeshComponent>(UInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
    ::__l2::CVarLumenDetectCardSharingCompatibility = pTVar18;
    _Init_thread_footer(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UInstancedStaticMeshComponent>(UInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                         ::__l2::_thread_safe_static_guard_2__);
  }
  pTVar18 = `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UInstancedStaticMeshComponent>(UInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
            ::__l2::CVarLumenDetectCardSharingCompatibility;
  bVar8 = 0;
  if (`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UInstancedStaticMeshComponent>(UInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
      ::__l2::CVarLumenDetectCardSharingCompatibility != (TConsoleVariableData<int> *)0x0) {
    bVar6 = IsInParallelGameThread();
    if ((bVar6) ||
       (bVar6 = IsInGameThread(), pTVar16 = (TConsoleVariableData<int> *)&DAT_00000004, bVar6)) {
      pTVar16 = pTVar25;
    }
    bVar6 = true;
    if (*(int *)((longlong)pTVar18->ShadowedValue + (longlong)pTVar16->ShadowedValue) != 0)
    goto LAB_147cb24b2;
  }
  bVar6 = false;
LAB_147cb24b2:
  param_2->bHasAnyError = '\0';
  piVar20 = &(param_2->Entries).ArrayMax;
  (param_2->Entries).ArrayNum = 0;
  if (*piVar20 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::FMaterialAuditEntry>_>
              (0x30,0x10,0,&(param_2->Entries).AllocatorInstance,0,piVar20);
  }
  if (param_1 != (UInstancedStaticMeshComponent *)0x0) {
    Nanite::Private::GetMaterialSlotInfos<UInstancedStaticMeshComponent>(&local_558,param_1);
    local_610._24_4_ = local_558.ArrayNum;
    uVar22 = (ulonglong)(int)local_610._24_4_;
    if (0 < (int)local_610._24_4_) {
      bVar8 = 8;
    }
    param_2->bCompatibleWithLumenCardSharing = bVar8 >> 3;
    FVar24 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)&local_558;
    if (local_558.AllocatorInstance.SecondaryData !=
        (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
      FVar24 = local_558.AllocatorInstance.SecondaryData;
    }
    puVar23 = (uchar *)((longlong)FVar24 + 0x14);
    local_5d0 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo> *)
                ((longlong)FVar24 + uVar22 * 0x28);
    while( true ) {
      pFVar5 = local_5d0;
      piVar20 = &(param_2->Entries).ArrayMax;
      if (local_558.ArrayNum != (int)uVar22) {
        local_617 = 0;
        `TCheckedPointerIterator<Nanite::Private::FAuditMaterialSlotInfo,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_617);
      }
      if ((ForElementType<Nanite::Private::FAuditMaterialSlotInfo> *)(puVar23 + -0x14) == pFVar5)
      break;
      iVar10 = (param_2->Entries).ArrayNum;
      if (iVar10 == *piVar20) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::FMaterialAuditEntry>_>
                           (0x1030,&(param_2->Entries).AllocatorInstance,piVar20);
      }
      (param_2->Entries).ArrayNum = iVar10 + 1;
      FVar1 = (param_2->Entries).AllocatorInstance.SecondaryData;
      FVar19 = (ForElementType<Nanite::FMaterialAuditEntry>)&param_2->Entries;
      if (FVar1 != (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
        FVar19 = FVar1;
      }
      plVar21 = (longlong *)((longlong)iVar10 * 0x30 + (longlong)FVar19);
      DefaultConstructItems<Nanite::FMaterialAuditEntry,int>(plVar21,1);
      plVar21[1] = *(longlong *)(puVar23 + -0xc);
      *(int *)(plVar21 + 2) = (int)pTVar25;
      local_610._20_4_ = (int)pTVar25 + 1;
      pUVar12 = *(UMaterial **)
                 ((ForElementType<Nanite::Private::FAuditMaterialSlotInfo> *)(puVar23 + -0x14))->
                 InlineData;
      *(byte *)((longlong)plVar21 + 0x14) = *(byte *)((longlong)plVar21 + 0x14) & 0xfd;
      *plVar21 = (longlong)pUVar12;
      bVar8 = 0;
      if (pUVar12 == (UMaterial *)0x0) {
        bVar8 = 2;
      }
      *(byte *)((longlong)plVar21 + 0x14) = *(byte *)((longlong)plVar21 + 0x14) | bVar8;
      lVar14 = *(longlong *)(puVar23 + 8);
      local_5c8 = *(longlong *)puVar23;
      lStack_5c0 = *(longlong *)(puVar23 + 8);
      plVar21[4] = *(longlong *)puVar23;
      plVar21[5] = lVar14;
      if ((*(byte *)((longlong)plVar21 + 0x14) & 2) != 0) {
        pUVar12 = UMaterial::GetDefaultMaterial(MD_Surface);
        *plVar21 = (longlong)pUVar12;
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
      pUVar12 = (UMaterial *)(**(code **)(pUVar12->_padding_ + 0x2e0))(0,local_578);
      if ((pUVar12 == (UMaterial *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Material != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\NaniteResourcesHelper.h"
                             ,0xd0,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar13 = (FMaterialAudit *)(*pcVar4)();
        return pFVar13;
      }
      EVar11 = (**(code **)(*(longlong *)*plVar21 + 0x460))();
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
      lVar14 = (**(code **)(pUVar12->_padding_ + 0x2f0))(pUVar12,&local_568);
      *(byte *)((longlong)plVar21 + 0x14) =
           (char)(*(uint *)(lVar14 + 0x4d0) >> 0xb) << 7 |
           *(byte *)((longlong)plVar21 + 0x14) & 0x7f;
      bVar8 = ((char)(*(uint *)(lVar14 + 0x4d0) >> 10) * '\x02' ^
              *(byte *)((longlong)plVar21 + 0x15)) & 2 ^ *(byte *)((longlong)plVar21 + 0x15);
      *(byte *)((longlong)plVar21 + 0x15) = bVar8;
      bVar8 = ((char)(*(uint *)(lVar14 + 0x4d0) >> 9) << 2 ^ bVar8) & 4 ^ bVar8;
      *(byte *)((longlong)plVar21 + 0x15) = bVar8;
      *(byte *)((longlong)plVar21 + 0x15) =
           ((byte)(*(uint *)(lVar14 + 0x4d0) >> 0xc) ^ bVar8) & 1 ^ bVar8;
      bVar7 = UMaterial::HasPixelDepthOffsetConnected(pUVar12);
      *(byte *)((longlong)plVar21 + 0x14) = *(byte *)((longlong)plVar21 + 0x14) & 0xdf | bVar7 << 5;
      bVar7 = UMaterial::HasVertexPositionOffsetConnected(pUVar12);
      *(byte *)((longlong)plVar21 + 0x14) = *(byte *)((longlong)plVar21 + 0x14) & 0xfb | bVar7 << 2;
      cVar9 = (**(code **)(pUVar12->_padding_ + 0x578))(pUVar12);
      *(byte *)((longlong)plVar21 + 0x14) =
           *(byte *)((longlong)plVar21 + 0x14) ^
           (cVar9 << 6 ^ *(byte *)((longlong)plVar21 + 0x14)) & 0x40;
      bVar7 = IsSupportedBlendMode(EVar11);
      *(byte *)((longlong)plVar21 + 0x14) = !bVar7 << 3 | *(byte *)((longlong)plVar21 + 0x14) & 0xf7
      ;
      puVar15 = (ushort *)(**(code **)(pUVar12->_padding_ + 0x468))(pUVar12,local_610 + 0x10);
      bVar7 = IsSupportedShadingModel((FMaterialShadingModelField)*puVar15);
      *(byte *)((longlong)plVar21 + 0x14) = !bVar7 << 4 | *(byte *)((longlong)plVar21 + 0x14) & 0xef
      ;
      if (local_616 == '\0') {
        bVar7 = UMaterial::NeedsSetMaterialUsage_Concurrent(pUVar12,local_615,MATUSAGE_Nanite);
      }
      else {
        cVar9 = (**(code **)(pUVar12->_padding_ + 0x378))(pUVar12,0x12);
        bVar7 = cVar9 == '\0';
      }
      *(byte *)((longlong)plVar21 + 0x15) = *(byte *)((longlong)plVar21 + 0x15) & 0xf7;
      *(byte *)((longlong)plVar21 + 0x15) = *(byte *)((longlong)plVar21 + 0x15) | bVar7 << 3;
      if (EVar11 == BLEND_Masked) {
        param_2->bHasMasked = '\x01';
      }
      if (pUVar12->bIsSky != '\0') {
        param_2->field_0xf8 = param_2->field_0xf8 | 4;
      }
      cVar9 = (**(code **)(*(longlong *)*plVar21 + 0x588))();
      if ((cVar9 == '\0') && ((!bVar6 || ((*(uint *)(lVar14 + 0x4d0) & 0x4600) != 0)))) {
        param_2->bCompatibleWithLumenCardSharing = '\0';
      }
      bVar8 = *(byte *)((longlong)plVar21 + 0x14);
      bVar8 = (byte)(bVar8 >> 1 | *(byte *)((longlong)plVar21 + 0x15) | bVar8) >> 3 & 1 ^
              bVar8 & 0xfe;
      *(byte *)((longlong)plVar21 + 0x14) = bVar8;
      if (((bVar8 & 1) != 0) && (param_2->bHasAnyError == 0)) {
        pUVar2 = *(UObject **)(local_610._32_8_ + 0x5a0);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        local_5e8.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
        local_5e8.Number = *(uint *)&pUVar2->field_0x1c;
        ::FName::ToString(&local_5e8,(FString *)local_610);
        if (param_2 != (FMaterialAudit *)local_610) {
          pFVar3 = (param_2->AssetName).Data.AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
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
        pUVar12 = UMaterial::GetDefaultMaterial(MD_Surface);
        param_2->FallbackMaterial = (UMaterialInterface *)pUVar12;
      }
      param_2->field_0xf8 =
           (param_2->bHasAnyError | *(byte *)((longlong)plVar21 + 0x14)) & 1 ^
           param_2->field_0xf8 & 0xfe;
      if (`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UInstancedStaticMeshComponent>(UInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
          ::__l2::bNaniteForceEnableMeshes == false) {
        if ((*(byte *)((longlong)plVar21 + 0x14) & 8) != 0) {
          EVar11 = (**(code **)(*(longlong *)*plVar21 + 0x460))();
          GetBlendModeString(&local_5a8,EVar11);
          if (2 < (byte)LogStaticMesh._0_1_) {
            local_5e0 = *(FName *)(*plVar21 + 0x18);
            ::FName::ToString(&local_5e0,&local_5b8);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UInstancedStaticMeshComponent>(UInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                        ::__l55::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
            if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
            }
          }
          if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
          }
        }
        if ((*(byte *)((longlong)plVar21 + 0x14) & 0x10) != 0) {
          puVar15 = (ushort *)
                    (**(code **)(*(longlong *)*plVar21 + 0x468))
                              ((longlong *)*plVar21,local_610 + 0x12);
          GetShadingModelFieldString(&local_588,(FMaterialShadingModelField)*puVar15);
          if (2 < (byte)LogStaticMesh._0_1_) {
            local_5d8 = *(FName *)(*plVar21 + 0x18);
            ::FName::ToString(&local_5d8,&local_598);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<UInstancedStaticMeshComponent>(UInstancedStaticMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
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
      pTVar25 = (TConsoleVariableData<int> *)(ulonglong)(uint)local_610._20_4_;
      puVar23 = puVar23 + 0x28;
      uVar22 = (ulonglong)(uint)local_610._24_4_;
    }
    if (local_558.AllocatorInstance.SecondaryData !=
        (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
      FMemory::Free((void *)local_558.AllocatorInstance.SecondaryData);
    }
  }
  return param_2;
}

// ShouldCreateNaniteProxy<UInstancedStaticMeshComponent> @ 147cbe800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
Nanite::FNaniteResourcesHelper::ShouldCreateNaniteProxy<UInstancedStaticMeshComponent>
          (UInstancedStaticMeshComponent *param_1,FMaterialAudit *param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<Nanite::FMaterialAuditEntry> FVar4;
  bool bVar5;
  char cVar6;
  EShaderPlatform EVar7;
  FSceneInterface *pFVar8;
  UWorld *pUVar9;
  undefined1 auStack_148 [32];
  FMaterialAudit local_128;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  if ((param_1->_padding_ & 0x600000000) == 0) {
    pFVar8 = UActorComponent::GetScene((UActorComponent *)param_1);
    EVar7 = GMaxRHIShaderPlatform;
    if (pFVar8 != (FSceneInterface *)0x0) {
      pFVar8 = UActorComponent::GetScene((UActorComponent *)param_1);
      EVar7 = FSceneInterface::GetShaderPlatform(pFVar8);
    }
    bVar5 = UseNanite(EVar7,true,true);
    if ((bVar5) && (cVar6 = (**(code **)(param_1->_padding_ + 0xb38))(param_1), cVar6 != '\0')) {
      local_128.bCompatibleWithLumenCardSharing = '\0';
      local_128.bHasSky = '\0';
      local_128.bHasMasked = '\0';
      local_128.bHasAnyError = '\0';
      local_128.AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.AssetName.Data.ArrayNum = 0;
      local_128.AssetName.Data.ArrayMax = 0;
      local_128.Entries.AllocatorInstance.SecondaryData =
           (ForElementType<Nanite::FMaterialAuditEntry>)0x0;
      local_128.Entries.ArrayNum = 0;
      local_128.Entries.ArrayMax = 4;
      local_128.FallbackMaterial = (UMaterialInterface *)0x0;
      AuditMaterials<UInstancedStaticMeshComponent>
                (param_1,&local_128,param_2 != (FMaterialAudit *)0x0);
      bVar2 = *(byte *)((longlong)&param_1->_padding_ + 4);
      pUVar9 = (UWorld *)param_1->_padding_;
      if (pUVar9 == (UWorld *)0x0) {
        pUVar9 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
      }
      bVar5 = IsMaskingAllowed(pUVar9,(bool)(bVar2 & 1));
      if (((local_128.bHasAnyError == 0) && (local_128.bHasSky == '\0')) &&
         ((bVar5 || (local_128.bHasMasked == '\0')))) {
        if (param_2 != (FMaterialAudit *)0x0) {
          if (param_2 != &local_128) {
            pFVar3 = (param_2->AssetName).Data.AllocatorInstance.Data;
            if (pFVar3 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar3);
            }
            (param_2->AssetName).Data.AllocatorInstance.Data =
                 local_128.AssetName.Data.AllocatorInstance.Data;
            (param_2->AssetName).Data.ArrayNum = local_128.AssetName.Data.ArrayNum;
            (param_2->AssetName).Data.ArrayMax = local_128.AssetName.Data.ArrayMax;
            local_128.AssetName.Data.ArrayNum = 0;
            local_128.AssetName.Data.ArrayMax = 0;
            local_128.AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          if (&param_2->Entries != &local_128.Entries) {
            if (local_128.Entries.AllocatorInstance.SecondaryData ==
                (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
              *(undefined8 *)(param_2->Entries).AllocatorInstance.InlineData =
                   local_128.Entries.AllocatorInstance.InlineData._0_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 8) =
                   local_128.Entries.AllocatorInstance.InlineData._8_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x10) =
                   local_128.Entries.AllocatorInstance.InlineData._16_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x18) =
                   local_128.Entries.AllocatorInstance.InlineData._24_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x20) =
                   local_128.Entries.AllocatorInstance.InlineData._32_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x28) =
                   local_128.Entries.AllocatorInstance.InlineData._40_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x30) =
                   local_128.Entries.AllocatorInstance.InlineData._48_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x38) =
                   local_128.Entries.AllocatorInstance.InlineData._56_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x40) =
                   local_128.Entries.AllocatorInstance.InlineData._64_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x48) =
                   local_128.Entries.AllocatorInstance.InlineData._72_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x50) =
                   local_128.Entries.AllocatorInstance.InlineData._80_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x58) =
                   local_128.Entries.AllocatorInstance.InlineData._88_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x60) =
                   local_128.Entries.AllocatorInstance.InlineData._96_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x68) =
                   local_128.Entries.AllocatorInstance.InlineData._104_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x70) =
                   local_128.Entries.AllocatorInstance.InlineData._112_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x78) =
                   local_128.Entries.AllocatorInstance.InlineData._120_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x80) =
                   local_128.Entries.AllocatorInstance.InlineData._128_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x88) =
                   local_128.Entries.AllocatorInstance.InlineData._136_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x90) =
                   local_128.Entries.AllocatorInstance.InlineData._144_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0x98) =
                   local_128.Entries.AllocatorInstance.InlineData._152_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0xa0) =
                   local_128.Entries.AllocatorInstance.InlineData._160_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0xa8) =
                   local_128.Entries.AllocatorInstance.InlineData._168_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0xb0) =
                   local_128.Entries.AllocatorInstance.InlineData._176_8_;
              *(undefined8 *)((param_2->Entries).AllocatorInstance.InlineData + 0xb8) =
                   local_128.Entries.AllocatorInstance.InlineData._184_8_;
            }
            FVar4 = (param_2->Entries).AllocatorInstance.SecondaryData;
            if (FVar4 != (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
              FMemory::Free((void *)FVar4);
            }
            (param_2->Entries).AllocatorInstance.SecondaryData =
                 local_128.Entries.AllocatorInstance.SecondaryData;
            (param_2->Entries).ArrayNum = local_128.Entries.ArrayNum;
            (param_2->Entries).ArrayMax = local_128.Entries.ArrayMax;
            local_128.Entries.ArrayMax = 4;
            local_128.Entries.AllocatorInstance.SecondaryData =
                 (ForElementType<Nanite::FMaterialAuditEntry>)0x0;
            local_128.Entries.ArrayNum = 0;
          }
          param_2->bHasAnyError = '\0';
          param_2->bCompatibleWithLumenCardSharing = '\0';
          param_2->bHasSky = '\0';
          param_2->bHasMasked = '\0';
          param_2->field_0xf8 = param_2->field_0xf8 | local_128._248_1_ & 0xf;
          param_2->FallbackMaterial = local_128.FallbackMaterial;
        }
        if (local_128.Entries.AllocatorInstance.SecondaryData !=
            (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
          FMemory::Free((void *)local_128.Entries.AllocatorInstance.SecondaryData);
        }
        if (local_128.AssetName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.AssetName.Data.AllocatorInstance.Data);
        }
        return true;
      }
      if (local_128.Entries.AllocatorInstance.SecondaryData !=
          (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
        FMemory::Free((void *)local_128.Entries.AllocatorInstance.SecondaryData);
      }
      if (local_128.AssetName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.AssetName.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// AuditMaterials<FSkinnedMeshSceneProxyDesc> @ 1483d1930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */

FMaterialAudit * __cdecl
Nanite::FNaniteResourcesHelper::AuditMaterials<FSkinnedMeshSceneProxyDesc>
          (FSkinnedMeshSceneProxyDesc *param_1,FMaterialAudit *param_2,bool param_3)

{
  longlong lVar1;
  ForElementType<Nanite::FMaterialAuditEntry> FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> FVar5;
  bool bVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  EBlendMode EVar10;
  UMaterial *pUVar11;
  FMaterialAudit *pFVar12;
  ushort *puVar13;
  TConsoleVariableData<int> *pTVar14;
  IConsoleManager *pIVar15;
  TConsoleVariableData<int> *pTVar16;
  ForAnyElementType FVar17;
  ForElementType<Nanite::FMaterialAuditEntry> FVar18;
  int *piVar19;
  longlong *plVar20;
  TConsoleVariableData<int> *pTVar21;
  ulonglong uVar22;
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> FVar23;
  undefined1 auStackY_668 [32];
  bool local_637;
  char local_636;
  undefined1 local_635;
  undefined1 local_634 [2];
  undefined1 local_632 [2];
  uint local_630;
  uint local_62c;
  FString local_628;
  FString local_618;
  longlong local_608;
  longlong lStack_600;
  longlong local_5f8;
  FName local_5f0;
  FName local_5e8;
  FName local_5e0;
  FName local_5d8;
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> local_5d0;
  FString local_5c8;
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  FString local_568;
  TArray<Nanite::Private::FAuditMaterialSlotInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_558;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_668;
  pTVar21 = (TConsoleVariableData<int> *)0x0;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FSkinnedMeshSceneProxyDesc>(FSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FSkinnedMeshSceneProxyDesc>(FSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FSkinnedMeshSceneProxyDesc>(FSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pIVar15 = IConsoleManager::Get();
    plVar20 = (longlong *)
              (**(code **)((longlong)*pIVar15 + 0xc0))(pIVar15,L"r.Nanite.ForceEnableMeshes");
    pTVar16 = pTVar21;
    if (plVar20 != (longlong *)0x0) {
      pTVar16 = (TConsoleVariableData<int> *)(**(code **)(*plVar20 + 0x68))(plVar20);
    }
    `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FSkinnedMeshSceneProxyDesc>(FSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
    ::__l2::NaniteForceEnableMeshesCvar = pTVar16;
    _Init_thread_footer(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FSkinnedMeshSceneProxyDesc>(FSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FSkinnedMeshSceneProxyDesc>(FSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
       ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FSkinnedMeshSceneProxyDesc>(FSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                           ::__l2::_thread_safe_static_guard_1__),
     pTVar16 = `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FSkinnedMeshSceneProxyDesc>(FSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
               ::__l2::NaniteForceEnableMeshesCvar,
     `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FSkinnedMeshSceneProxyDesc>(FSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    if (`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FSkinnedMeshSceneProxyDesc>(FSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
        ::__l2::NaniteForceEnableMeshesCvar == (TConsoleVariableData<int> *)0x0) {
LAB_1483d21b6:
      `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FSkinnedMeshSceneProxyDesc>(FSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
      ::__l2::bNaniteForceEnableMeshes = false;
    }
    else {
      bVar6 = IsInParallelGameThread();
      if (bVar6) {
LAB_1483d21a9:
        pTVar14 = pTVar21;
      }
      else {
        bVar6 = IsInGameThread();
        pTVar14 = (TConsoleVariableData<int> *)&DAT_00000004;
        if (bVar6) goto LAB_1483d21a9;
      }
      if (*(int *)((longlong)pTVar16->ShadowedValue + (longlong)pTVar14->ShadowedValue) == 0)
      goto LAB_1483d21b6;
      `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FSkinnedMeshSceneProxyDesc>(FSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
      ::__l2::bNaniteForceEnableMeshes = true;
    }
    _Init_thread_footer(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FSkinnedMeshSceneProxyDesc>(FSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FSkinnedMeshSceneProxyDesc>(FSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
       ::__l2::_thread_safe_static_guard_2__) &&
     (_Init_thread_header(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FSkinnedMeshSceneProxyDesc>(FSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                           ::__l2::_thread_safe_static_guard_2__),
     `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FSkinnedMeshSceneProxyDesc>(FSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
     ::__l2::_thread_safe_static_guard_2__ == -1)) {
    pIVar15 = IConsoleManager::Get();
    plVar20 = (longlong *)
              (**(code **)((longlong)*pIVar15 + 0xc0))
                        (pIVar15,L"r.LumenScene.SurfaceCache.DetectCardSharingCompatibility");
    pTVar16 = pTVar21;
    if (plVar20 != (longlong *)0x0) {
      pTVar16 = (TConsoleVariableData<int> *)(**(code **)(*plVar20 + 0x68))(plVar20);
    }
    `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FSkinnedMeshSceneProxyDesc>(FSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
    ::__l2::CVarLumenDetectCardSharingCompatibility = pTVar16;
    _Init_thread_footer(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FSkinnedMeshSceneProxyDesc>(FSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                         ::__l2::_thread_safe_static_guard_2__);
  }
  pTVar16 = `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FSkinnedMeshSceneProxyDesc>(FSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
            ::__l2::CVarLumenDetectCardSharingCompatibility;
  bVar7 = 0;
  if (`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FSkinnedMeshSceneProxyDesc>(FSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
      ::__l2::CVarLumenDetectCardSharingCompatibility != (TConsoleVariableData<int> *)0x0) {
    bVar6 = IsInParallelGameThread();
    if ((bVar6) ||
       (bVar6 = IsInGameThread(), pTVar14 = (TConsoleVariableData<int> *)&DAT_00000004, bVar6)) {
      pTVar14 = pTVar21;
    }
    local_636 = '\x01';
    if (*(int *)((longlong)pTVar16->ShadowedValue + (longlong)pTVar14->ShadowedValue) != 0)
    goto LAB_1483d19f0;
  }
  local_636 = '\0';
LAB_1483d19f0:
  param_2->bHasAnyError = '\0';
  piVar19 = &(param_2->Entries).ArrayMax;
  (param_2->Entries).ArrayNum = 0;
  if (*piVar19 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::FMaterialAuditEntry>_>
              (0x30,0x10,0,&(param_2->Entries).AllocatorInstance,0,piVar19);
  }
  if (param_1 != (FSkinnedMeshSceneProxyDesc *)0x0) {
    Nanite::Private::GetMaterialSlotInfos<FSkinnedMeshSceneProxyDesc>(&local_558,param_1);
    local_62c = local_558.ArrayNum;
    uVar22 = (ulonglong)(int)local_62c;
    if (0 < (int)local_62c) {
      bVar7 = 8;
    }
    param_2->bCompatibleWithLumenCardSharing = bVar7 >> 3;
    FVar23 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)&local_558;
    if (local_558.AllocatorInstance.SecondaryData !=
        (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
      FVar23 = local_558.AllocatorInstance.SecondaryData;
    }
    local_5d0 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)
                ((longlong)FVar23 + uVar22 * 0x28);
    while( true ) {
      FVar5 = local_5d0;
      piVar19 = &(param_2->Entries).ArrayMax;
      if (local_558.ArrayNum != (int)uVar22) {
        local_635 = 0;
        `TCheckedPointerIterator<Nanite::Private::FAuditMaterialSlotInfo,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_635);
      }
      if (FVar23 == FVar5) break;
      iVar9 = (param_2->Entries).ArrayNum;
      if (iVar9 == *piVar19) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::FMaterialAuditEntry>_>
                          (0x1030,&(param_2->Entries).AllocatorInstance,piVar19);
      }
      (param_2->Entries).ArrayNum = iVar9 + 1;
      FVar2 = (param_2->Entries).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<Nanite::FMaterialAuditEntry>)&param_2->Entries;
      if (FVar2 != (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
        FVar18 = FVar2;
      }
      plVar20 = (longlong *)((longlong)iVar9 * 0x30 + (longlong)FVar18);
      DefaultConstructItems<Nanite::FMaterialAuditEntry,int>(plVar20,1);
      plVar20[1] = *(longlong *)((longlong)FVar23 + 8);
      *(int *)(plVar20 + 2) = (int)pTVar21;
      local_630 = (int)pTVar21 + 1;
      pUVar11 = *(UMaterial **)FVar23;
      *(byte *)((longlong)plVar20 + 0x14) = *(byte *)((longlong)plVar20 + 0x14) & 0xfd;
      *plVar20 = (longlong)pUVar11;
      bVar7 = 0;
      if (pUVar11 == (UMaterial *)0x0) {
        bVar7 = 2;
      }
      *(byte *)((longlong)plVar20 + 0x14) = *(byte *)((longlong)plVar20 + 0x14) | bVar7;
      local_608 = *(longlong *)((longlong)FVar23 + 0x14);
      lStack_600 = *(longlong *)((longlong)FVar23 + 0x1c);
      plVar20[4] = local_608;
      plVar20[5] = lStack_600;
      if ((*(byte *)((longlong)plVar20 + 0x14) & 2) != 0) {
        pUVar11 = UMaterial::GetDefaultMaterial(MD_Surface);
        *plVar20 = (longlong)pUVar11;
      }
      local_588 = 0;
      uStack_580 = 0;
      pUVar11 = (UMaterial *)(**(code **)(pUVar11->_padding_ + 0x2e0))(0,&local_588);
      if ((pUVar11 == (UMaterial *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Material != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\NaniteResourcesHelper.h"
                             ,0xd0,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar12 = (FMaterialAudit *)(*pcVar4)();
        return pFVar12;
      }
      EVar10 = (**(code **)(*(longlong *)*plVar20 + 0x460))();
      local_637 = false;
      local_578 = 0;
      uStack_570 = 0;
      local_5f8 = (**(code **)(pUVar11->_padding_ + 0x2f0))(pUVar11,&local_578);
      *(byte *)((longlong)plVar20 + 0x14) =
           (char)(*(uint *)(local_5f8 + 0x4d0) >> 0xb) << 7 |
           *(byte *)((longlong)plVar20 + 0x14) & 0x7f;
      bVar7 = ((char)(*(uint *)(local_5f8 + 0x4d0) >> 10) * '\x02' ^
              *(byte *)((longlong)plVar20 + 0x15)) & 2 ^ *(byte *)((longlong)plVar20 + 0x15);
      *(byte *)((longlong)plVar20 + 0x15) = bVar7;
      bVar7 = ((char)(*(uint *)(local_5f8 + 0x4d0) >> 9) << 2 ^ bVar7) & 4 ^ bVar7;
      *(byte *)((longlong)plVar20 + 0x15) = bVar7;
      *(byte *)((longlong)plVar20 + 0x15) =
           ((byte)(*(uint *)(local_5f8 + 0x4d0) >> 0xc) ^ bVar7) & 1 ^ bVar7;
      bVar6 = UMaterial::HasPixelDepthOffsetConnected(pUVar11);
      *(byte *)((longlong)plVar20 + 0x14) = *(byte *)((longlong)plVar20 + 0x14) & 0xdf | bVar6 << 5;
      bVar6 = UMaterial::HasVertexPositionOffsetConnected(pUVar11);
      *(byte *)((longlong)plVar20 + 0x14) = *(byte *)((longlong)plVar20 + 0x14) & 0xfb | bVar6 << 2;
      cVar8 = (**(code **)(pUVar11->_padding_ + 0x578))(pUVar11);
      *(byte *)((longlong)plVar20 + 0x14) =
           *(byte *)((longlong)plVar20 + 0x14) ^
           (cVar8 << 6 ^ *(byte *)((longlong)plVar20 + 0x14)) & 0x40;
      bVar6 = IsOpaqueOrMaskedBlendMode(EVar10);
      *(byte *)((longlong)plVar20 + 0x14) = !bVar6 << 3 | *(byte *)((longlong)plVar20 + 0x14) & 0xf7
      ;
      puVar13 = (ushort *)(**(code **)(pUVar11->_padding_ + 0x468))(pUVar11,local_634);
      *(byte *)((longlong)plVar20 + 0x14) =
           (byte)(*puVar13 >> 6) & 0x10 | *(byte *)((longlong)plVar20 + 0x14) & 0xef;
      if (param_3) {
        cVar8 = (**(code **)(pUVar11->_padding_ + 0x378))(pUVar11,0x12);
        bVar6 = cVar8 == '\0';
      }
      else {
        bVar6 = UMaterial::NeedsSetMaterialUsage_Concurrent(pUVar11,&local_637,MATUSAGE_Nanite);
      }
      *(byte *)((longlong)plVar20 + 0x15) = *(byte *)((longlong)plVar20 + 0x15) & 0xf7;
      *(byte *)((longlong)plVar20 + 0x15) = *(byte *)((longlong)plVar20 + 0x15) | bVar6 << 3;
      bVar6 = Nanite::Private::IsMaterialSkeletalMesh<FSkinnedMeshSceneProxyDesc>(param_1);
      if (bVar6) {
        if (param_3) {
          cVar8 = (**(code **)(pUVar11->_padding_ + 0x378))(pUVar11,0);
          bVar6 = cVar8 == '\0';
        }
        else {
          bVar6 = UMaterial::NeedsSetMaterialUsage_Concurrent
                            (pUVar11,&local_637,MATUSAGE_SkeletalMesh);
        }
        *(byte *)((longlong)plVar20 + 0x15) =
             (bVar6 << 3 | *(byte *)((longlong)plVar20 + 0x15) & 8) ^
             *(byte *)((longlong)plVar20 + 0x15) & 0xf7;
      }
      if (EVar10 == BLEND_Masked) {
        param_2->bHasMasked = '\x01';
      }
      if (pUVar11->bIsSky != '\0') {
        param_2->field_0xf8 = param_2->field_0xf8 | 4;
      }
      cVar8 = (**(code **)(*(longlong *)*plVar20 + 0x588))();
      if ((cVar8 == '\0') && ((local_636 == '\0' || ((*(uint *)(local_5f8 + 0x4d0) & 0x4600) != 0)))
         ) {
        param_2->bCompatibleWithLumenCardSharing = '\0';
      }
      bVar7 = *(byte *)((longlong)plVar20 + 0x14);
      bVar7 = (byte)(bVar7 >> 1 | *(byte *)((longlong)plVar20 + 0x15) | bVar7) >> 3 & 1 ^
              bVar7 & 0xfe;
      *(byte *)((longlong)plVar20 + 0x14) = bVar7;
      if (((bVar7 & 1) != 0) && (param_2->bHasAnyError == 0)) {
        pFVar12 = (FMaterialAudit *)
                  Nanite::Private::GetMaterialMeshName<FSkinnedMeshSceneProxyDesc>
                            (&local_568,param_1);
        if (param_2 != pFVar12) {
          pFVar3 = (param_2->AssetName).Data.AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          (param_2->AssetName).Data.AllocatorInstance.Data =
               (pFVar12->AssetName).Data.AllocatorInstance.Data;
          (pFVar12->AssetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (param_2->AssetName).Data.ArrayNum = (pFVar12->AssetName).Data.ArrayNum;
          (param_2->AssetName).Data.ArrayMax = (pFVar12->AssetName).Data.ArrayMax;
          (pFVar12->AssetName).Data.ArrayNum = 0;
          (pFVar12->AssetName).Data.ArrayMax = 0;
        }
        if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_568.Data.AllocatorInstance.Data);
        }
        pUVar11 = UMaterial::GetDefaultMaterial(MD_Surface);
        param_2->FallbackMaterial = (UMaterialInterface *)pUVar11;
      }
      param_2->field_0xf8 =
           (param_2->bHasAnyError | *(byte *)((longlong)plVar20 + 0x14)) & 1 ^
           param_2->field_0xf8 & 0xfe;
      if (`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FSkinnedMeshSceneProxyDesc>(FSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
          ::__l2::bNaniteForceEnableMeshes == false) {
        if ((*(byte *)((longlong)plVar20 + 0x14) & 8) != 0) {
          EVar10 = (**(code **)(*(longlong *)*plVar20 + 0x460))();
          GetBlendModeString(&local_628,EVar10);
          bVar6 = Nanite::Private::IsMaterialSkeletalMesh<FSkinnedMeshSceneProxyDesc>(param_1);
          if (bVar6) {
            if (2 < (byte)LogSkeletalMesh._0_1_) {
              local_5f0 = *(FName *)(*plVar20 + 0x18);
              ::FName::ToString(&local_5f0,&local_5c8);
              UE::Logging::Private::BasicLog<3>
                        (&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FSkinnedMeshSceneProxyDesc>(FSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                          ::__l44::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
              FVar17.Data = local_5c8.Data.AllocatorInstance.Data;
LAB_1483d1f43:
              if (FVar17.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar17.Data);
              }
            }
          }
          else if (2 < (byte)LogStaticMesh._0_1_) {
            local_5e8 = *(FName *)(*plVar20 + 0x18);
            ::FName::ToString(&local_5e8,&local_5b8);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FSkinnedMeshSceneProxyDesc>(FSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                        ::__l55::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
            FVar17.Data = local_5b8.Data.AllocatorInstance.Data;
            goto LAB_1483d1f43;
          }
          if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_628.Data.AllocatorInstance.Data);
          }
        }
        if ((*(byte *)((longlong)plVar20 + 0x14) & 0x10) != 0) {
          puVar13 = (ushort *)
                    (**(code **)(*(longlong *)*plVar20 + 0x468))((longlong *)*plVar20,local_632);
          GetShadingModelFieldString(&local_618,(FMaterialShadingModelField)*puVar13);
          bVar6 = Nanite::Private::IsMaterialSkeletalMesh<FSkinnedMeshSceneProxyDesc>(param_1);
          if (bVar6) {
            if (2 < (byte)LogSkeletalMesh._0_1_) {
              local_5e0 = *(FName *)(*plVar20 + 0x18);
              ::FName::ToString(&local_5e0,&local_5a8);
              UE::Logging::Private::BasicLog<3>
                        (&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FSkinnedMeshSceneProxyDesc>(FSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                          ::__l70::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
              FVar17.Data = local_5a8.Data.AllocatorInstance.Data;
LAB_1483d207e:
              if (FVar17.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar17.Data);
              }
            }
          }
          else if (2 < (byte)LogStaticMesh._0_1_) {
            local_5d8 = *(FName *)(*plVar20 + 0x18);
            ::FName::ToString(&local_5d8,&local_598);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FSkinnedMeshSceneProxyDesc>(FSkinnedMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                        ::__l81::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
            FVar17.Data = local_598.Data.AllocatorInstance.Data;
            goto LAB_1483d207e;
          }
          if (local_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_618.Data.AllocatorInstance.Data);
          }
        }
      }
      pTVar21 = (TConsoleVariableData<int> *)(ulonglong)local_630;
      FVar23 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)((longlong)FVar23 + 0x28);
      uVar22 = (ulonglong)local_62c;
    }
    if (local_558.AllocatorInstance.SecondaryData !=
        (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
      FMemory::Free((void *)local_558.AllocatorInstance.SecondaryData);
    }
  }
  return param_2;
}

// AuditMaterials<FStaticMeshSceneProxyDesc> @ 1483d2230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMaterialAudit * __cdecl
Nanite::FNaniteResourcesHelper::AuditMaterials<FStaticMeshSceneProxyDesc>
          (FStaticMeshSceneProxyDesc *param_1,FMaterialAudit *param_2,bool param_3)

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
       `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FStaticMeshSceneProxyDesc>(FStaticMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FStaticMeshSceneProxyDesc>(FStaticMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FStaticMeshSceneProxyDesc>(FStaticMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pIVar16 = IConsoleManager::Get();
    plVar20 = (longlong *)
              (**(code **)((longlong)*pIVar16 + 0xc0))(pIVar16,L"r.Nanite.ForceEnableMeshes");
    pTVar17 = pTVar24;
    if (plVar20 != (longlong *)0x0) {
      pTVar17 = (TConsoleVariableData<int> *)(**(code **)(*plVar20 + 0x68))(plVar20);
    }
    `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FStaticMeshSceneProxyDesc>(FStaticMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
    ::__l2::NaniteForceEnableMeshesCvar = pTVar17;
    _Init_thread_footer(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FStaticMeshSceneProxyDesc>(FStaticMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*(int *)(lVar13 + 0x9d4c) <
       `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FStaticMeshSceneProxyDesc>(FStaticMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
       ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FStaticMeshSceneProxyDesc>(FStaticMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                           ::__l2::_thread_safe_static_guard_1__),
     pTVar17 = `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FStaticMeshSceneProxyDesc>(FStaticMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
               ::__l2::NaniteForceEnableMeshesCvar,
     `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FStaticMeshSceneProxyDesc>(FStaticMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    if (`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FStaticMeshSceneProxyDesc>(FStaticMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
        ::__l2::NaniteForceEnableMeshesCvar == (TConsoleVariableData<int> *)0x0) {
LAB_1483d29c4:
      `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FStaticMeshSceneProxyDesc>(FStaticMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
      ::__l2::bNaniteForceEnableMeshes = false;
    }
    else {
      bVar5 = IsInParallelGameThread();
      if (bVar5) {
LAB_1483d29b7:
        pTVar15 = pTVar24;
      }
      else {
        bVar5 = IsInGameThread();
        pTVar15 = (TConsoleVariableData<int> *)&DAT_00000004;
        if (bVar5) goto LAB_1483d29b7;
      }
      if (*(int *)((longlong)pTVar17->ShadowedValue + (longlong)pTVar15->ShadowedValue) == 0)
      goto LAB_1483d29c4;
      `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FStaticMeshSceneProxyDesc>(FStaticMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
      ::__l2::bNaniteForceEnableMeshes = true;
    }
    _Init_thread_footer(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FStaticMeshSceneProxyDesc>(FStaticMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                         ::__l2::_thread_safe_static_guard_1__);
    param_1 = (FStaticMeshSceneProxyDesc *)local_610._32_8_;
  }
  if ((*(int *)(lVar13 + 0x9d4c) <
       `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FStaticMeshSceneProxyDesc>(FStaticMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
       ::__l2::_thread_safe_static_guard_2__) &&
     (_Init_thread_header(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FStaticMeshSceneProxyDesc>(FStaticMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                           ::__l2::_thread_safe_static_guard_2__),
     `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FStaticMeshSceneProxyDesc>(FStaticMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
     ::__l2::_thread_safe_static_guard_2__ == -1)) {
    pIVar16 = IConsoleManager::Get();
    plVar20 = (longlong *)
              (**(code **)((longlong)*pIVar16 + 0xc0))
                        (pIVar16,L"r.LumenScene.SurfaceCache.DetectCardSharingCompatibility");
    pTVar17 = pTVar24;
    if (plVar20 != (longlong *)0x0) {
      pTVar17 = (TConsoleVariableData<int> *)(**(code **)(*plVar20 + 0x68))(plVar20);
    }
    `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FStaticMeshSceneProxyDesc>(FStaticMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
    ::__l2::CVarLumenDetectCardSharingCompatibility = pTVar17;
    _Init_thread_footer(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FStaticMeshSceneProxyDesc>(FStaticMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                         ::__l2::_thread_safe_static_guard_2__);
  }
  pTVar17 = `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FStaticMeshSceneProxyDesc>(FStaticMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
            ::__l2::CVarLumenDetectCardSharingCompatibility;
  bVar7 = 0;
  if (`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FStaticMeshSceneProxyDesc>(FStaticMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
      ::__l2::CVarLumenDetectCardSharingCompatibility != (TConsoleVariableData<int> *)0x0) {
    bVar5 = IsInParallelGameThread();
    if ((bVar5) ||
       (bVar5 = IsInGameThread(), pTVar15 = (TConsoleVariableData<int> *)&DAT_00000004, bVar5)) {
      pTVar15 = pTVar24;
    }
    bVar5 = true;
    if (*(int *)((longlong)pTVar17->ShadowedValue + (longlong)pTVar15->ShadowedValue) != 0)
    goto LAB_1483d22f2;
  }
  bVar5 = false;
LAB_1483d22f2:
  param_2->bHasAnyError = '\0';
  piVar19 = &(param_2->Entries).ArrayMax;
  (param_2->Entries).ArrayNum = 0;
  if (*piVar19 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::FMaterialAuditEntry>_>
              (0x30,0x10,0,&(param_2->Entries).AllocatorInstance,0,piVar19);
  }
  if (param_1 != (FStaticMeshSceneProxyDesc *)0x0) {
    Nanite::Private::GetMaterialSlotInfos<FStaticMeshSceneProxyDesc>(&local_558,param_1);
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
      *(byte *)((longlong)plVar20 + 0x14) = *(byte *)((longlong)plVar20 + 0x14) & 0xdf | bVar6 << 5;
      bVar6 = UMaterial::HasVertexPositionOffsetConnected(pUVar11);
      *(byte *)((longlong)plVar20 + 0x14) = *(byte *)((longlong)plVar20 + 0x14) & 0xfb | bVar6 << 2;
      cVar8 = (**(code **)(pUVar11->_padding_ + 0x578))(pUVar11);
      *(byte *)((longlong)plVar20 + 0x14) =
           *(byte *)((longlong)plVar20 + 0x14) ^
           (cVar8 << 6 ^ *(byte *)((longlong)plVar20 + 0x14)) & 0x40;
      bVar6 = IsOpaqueOrMaskedBlendMode(EVar10);
      *(byte *)((longlong)plVar20 + 0x14) = !bVar6 << 3 | *(byte *)((longlong)plVar20 + 0x14) & 0xf7
      ;
      puVar14 = (ushort *)(**(code **)(pUVar11->_padding_ + 0x468))(pUVar11,local_610 + 0x10);
      *(byte *)((longlong)plVar20 + 0x14) =
           (byte)(*puVar14 >> 6) & 0x10 | *(byte *)((longlong)plVar20 + 0x14) & 0xef;
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
        local_5e8 = (FName)(*(UStaticMesh **)(local_610._32_8_ + 0x100))->_padding_;
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
      if (`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FStaticMeshSceneProxyDesc>(FStaticMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
          ::__l2::bNaniteForceEnableMeshes == false) {
        if ((*(byte *)((longlong)plVar20 + 0x14) & 8) != 0) {
          EVar10 = (**(code **)(*(longlong *)*plVar20 + 0x460))();
          GetBlendModeString(&local_5a8,EVar10);
          if (2 < (byte)LogStaticMesh._0_1_) {
            local_5e0 = *(FName *)(*plVar20 + 0x18);
            ::FName::ToString(&local_5e0,&local_5b8);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FStaticMeshSceneProxyDesc>(FStaticMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
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
                      (&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<FStaticMeshSceneProxyDesc>(FStaticMeshSceneProxyDesc_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
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

// AuditMaterials<USkinnedMeshComponent> @ 1483d2a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */

FMaterialAudit * __cdecl
Nanite::FNaniteResourcesHelper::AuditMaterials<USkinnedMeshComponent>
          (USkinnedMeshComponent *param_1,FMaterialAudit *param_2,bool param_3)

{
  longlong lVar1;
  ForElementType<Nanite::FMaterialAuditEntry> FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> FVar5;
  bool bVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  EBlendMode EVar10;
  UMaterial *pUVar11;
  FMaterialAudit *pFVar12;
  ushort *puVar13;
  TConsoleVariableData<int> *pTVar14;
  IConsoleManager *pIVar15;
  TConsoleVariableData<int> *pTVar16;
  ForAnyElementType FVar17;
  ForElementType<Nanite::FMaterialAuditEntry> FVar18;
  int *piVar19;
  longlong *plVar20;
  TConsoleVariableData<int> *pTVar21;
  ulonglong uVar22;
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> FVar23;
  undefined1 auStackY_668 [32];
  bool local_637;
  char local_636;
  undefined1 local_635;
  undefined1 local_634 [2];
  undefined1 local_632 [2];
  uint local_630;
  uint local_62c;
  FString local_628;
  FString local_618;
  longlong local_608;
  longlong lStack_600;
  longlong local_5f8;
  FName local_5f0;
  FName local_5e8;
  FName local_5e0;
  FName local_5d8;
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> local_5d0;
  FString local_5c8;
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  FString local_568;
  TArray<Nanite::Private::FAuditMaterialSlotInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_558;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_668;
  pTVar21 = (TConsoleVariableData<int> *)0x0;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<USkinnedMeshComponent>(USkinnedMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<USkinnedMeshComponent>(USkinnedMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<USkinnedMeshComponent>(USkinnedMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pIVar15 = IConsoleManager::Get();
    plVar20 = (longlong *)
              (**(code **)((longlong)*pIVar15 + 0xc0))(pIVar15,L"r.Nanite.ForceEnableMeshes");
    pTVar16 = pTVar21;
    if (plVar20 != (longlong *)0x0) {
      pTVar16 = (TConsoleVariableData<int> *)(**(code **)(*plVar20 + 0x68))(plVar20);
    }
    `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<USkinnedMeshComponent>(USkinnedMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
    ::__l2::NaniteForceEnableMeshesCvar = pTVar16;
    _Init_thread_footer(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<USkinnedMeshComponent>(USkinnedMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<USkinnedMeshComponent>(USkinnedMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
       ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<USkinnedMeshComponent>(USkinnedMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                           ::__l2::_thread_safe_static_guard_1__),
     pTVar16 = `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<USkinnedMeshComponent>(USkinnedMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
               ::__l2::NaniteForceEnableMeshesCvar,
     `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<USkinnedMeshComponent>(USkinnedMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    if (`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<USkinnedMeshComponent>(USkinnedMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
        ::__l2::NaniteForceEnableMeshesCvar == (TConsoleVariableData<int> *)0x0) {
LAB_1483d32c6:
      `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<USkinnedMeshComponent>(USkinnedMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
      ::__l2::bNaniteForceEnableMeshes = false;
    }
    else {
      bVar6 = IsInParallelGameThread();
      if (bVar6) {
LAB_1483d32b9:
        pTVar14 = pTVar21;
      }
      else {
        bVar6 = IsInGameThread();
        pTVar14 = (TConsoleVariableData<int> *)&DAT_00000004;
        if (bVar6) goto LAB_1483d32b9;
      }
      if (*(int *)((longlong)pTVar16->ShadowedValue + (longlong)pTVar14->ShadowedValue) == 0)
      goto LAB_1483d32c6;
      `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<USkinnedMeshComponent>(USkinnedMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
      ::__l2::bNaniteForceEnableMeshes = true;
    }
    _Init_thread_footer(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<USkinnedMeshComponent>(USkinnedMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<USkinnedMeshComponent>(USkinnedMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
       ::__l2::_thread_safe_static_guard_2__) &&
     (_Init_thread_header(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<USkinnedMeshComponent>(USkinnedMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                           ::__l2::_thread_safe_static_guard_2__),
     `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<USkinnedMeshComponent>(USkinnedMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
     ::__l2::_thread_safe_static_guard_2__ == -1)) {
    pIVar15 = IConsoleManager::Get();
    plVar20 = (longlong *)
              (**(code **)((longlong)*pIVar15 + 0xc0))
                        (pIVar15,L"r.LumenScene.SurfaceCache.DetectCardSharingCompatibility");
    pTVar16 = pTVar21;
    if (plVar20 != (longlong *)0x0) {
      pTVar16 = (TConsoleVariableData<int> *)(**(code **)(*plVar20 + 0x68))(plVar20);
    }
    `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<USkinnedMeshComponent>(USkinnedMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
    ::__l2::CVarLumenDetectCardSharingCompatibility = pTVar16;
    _Init_thread_footer(&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<USkinnedMeshComponent>(USkinnedMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                         ::__l2::_thread_safe_static_guard_2__);
  }
  pTVar16 = `public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<USkinnedMeshComponent>(USkinnedMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
            ::__l2::CVarLumenDetectCardSharingCompatibility;
  bVar7 = 0;
  if (`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<USkinnedMeshComponent>(USkinnedMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
      ::__l2::CVarLumenDetectCardSharingCompatibility != (TConsoleVariableData<int> *)0x0) {
    bVar6 = IsInParallelGameThread();
    if ((bVar6) ||
       (bVar6 = IsInGameThread(), pTVar14 = (TConsoleVariableData<int> *)&DAT_00000004, bVar6)) {
      pTVar14 = pTVar21;
    }
    local_636 = '\x01';
    if (*(int *)((longlong)pTVar16->ShadowedValue + (longlong)pTVar14->ShadowedValue) != 0)
    goto LAB_1483d2b00;
  }
  local_636 = '\0';
LAB_1483d2b00:
  param_2->bHasAnyError = '\0';
  piVar19 = &(param_2->Entries).ArrayMax;
  (param_2->Entries).ArrayNum = 0;
  if (*piVar19 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::FMaterialAuditEntry>_>
              (0x30,0x10,0,&(param_2->Entries).AllocatorInstance,0,piVar19);
  }
  if (param_1 != (USkinnedMeshComponent *)0x0) {
    Nanite::Private::GetMaterialSlotInfos<USkinnedMeshComponent>(&local_558,param_1);
    local_62c = local_558.ArrayNum;
    uVar22 = (ulonglong)(int)local_62c;
    if (0 < (int)local_62c) {
      bVar7 = 8;
    }
    param_2->bCompatibleWithLumenCardSharing = bVar7 >> 3;
    FVar23 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)&local_558;
    if (local_558.AllocatorInstance.SecondaryData !=
        (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
      FVar23 = local_558.AllocatorInstance.SecondaryData;
    }
    local_5d0 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)
                ((longlong)FVar23 + uVar22 * 0x28);
    while( true ) {
      FVar5 = local_5d0;
      piVar19 = &(param_2->Entries).ArrayMax;
      if (local_558.ArrayNum != (int)uVar22) {
        local_635 = 0;
        `TCheckedPointerIterator<Nanite::Private::FAuditMaterialSlotInfo,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_635);
      }
      if (FVar23 == FVar5) break;
      iVar9 = (param_2->Entries).ArrayNum;
      if (iVar9 == *piVar19) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::FMaterialAuditEntry>_>
                          (0x1030,&(param_2->Entries).AllocatorInstance,piVar19);
      }
      (param_2->Entries).ArrayNum = iVar9 + 1;
      FVar2 = (param_2->Entries).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<Nanite::FMaterialAuditEntry>)&param_2->Entries;
      if (FVar2 != (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
        FVar18 = FVar2;
      }
      plVar20 = (longlong *)((longlong)iVar9 * 0x30 + (longlong)FVar18);
      DefaultConstructItems<Nanite::FMaterialAuditEntry,int>(plVar20,1);
      plVar20[1] = *(longlong *)((longlong)FVar23 + 8);
      *(int *)(plVar20 + 2) = (int)pTVar21;
      local_630 = (int)pTVar21 + 1;
      pUVar11 = *(UMaterial **)FVar23;
      *(byte *)((longlong)plVar20 + 0x14) = *(byte *)((longlong)plVar20 + 0x14) & 0xfd;
      *plVar20 = (longlong)pUVar11;
      bVar7 = 0;
      if (pUVar11 == (UMaterial *)0x0) {
        bVar7 = 2;
      }
      *(byte *)((longlong)plVar20 + 0x14) = *(byte *)((longlong)plVar20 + 0x14) | bVar7;
      local_608 = *(longlong *)((longlong)FVar23 + 0x14);
      lStack_600 = *(longlong *)((longlong)FVar23 + 0x1c);
      plVar20[4] = local_608;
      plVar20[5] = lStack_600;
      if ((*(byte *)((longlong)plVar20 + 0x14) & 2) != 0) {
        pUVar11 = UMaterial::GetDefaultMaterial(MD_Surface);
        *plVar20 = (longlong)pUVar11;
      }
      local_588 = 0;
      uStack_580 = 0;
      pUVar11 = (UMaterial *)(**(code **)(pUVar11->_padding_ + 0x2e0))(0,&local_588);
      if ((pUVar11 == (UMaterial *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Material != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\NaniteResourcesHelper.h"
                             ,0xd0,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar12 = (FMaterialAudit *)(*pcVar4)();
        return pFVar12;
      }
      EVar10 = (**(code **)(*(longlong *)*plVar20 + 0x460))();
      local_637 = false;
      local_578 = 0;
      uStack_570 = 0;
      local_5f8 = (**(code **)(pUVar11->_padding_ + 0x2f0))(pUVar11,&local_578);
      *(byte *)((longlong)plVar20 + 0x14) =
           (char)(*(uint *)(local_5f8 + 0x4d0) >> 0xb) << 7 |
           *(byte *)((longlong)plVar20 + 0x14) & 0x7f;
      bVar7 = ((char)(*(uint *)(local_5f8 + 0x4d0) >> 10) * '\x02' ^
              *(byte *)((longlong)plVar20 + 0x15)) & 2 ^ *(byte *)((longlong)plVar20 + 0x15);
      *(byte *)((longlong)plVar20 + 0x15) = bVar7;
      bVar7 = ((char)(*(uint *)(local_5f8 + 0x4d0) >> 9) << 2 ^ bVar7) & 4 ^ bVar7;
      *(byte *)((longlong)plVar20 + 0x15) = bVar7;
      *(byte *)((longlong)plVar20 + 0x15) =
           ((byte)(*(uint *)(local_5f8 + 0x4d0) >> 0xc) ^ bVar7) & 1 ^ bVar7;
      bVar6 = UMaterial::HasPixelDepthOffsetConnected(pUVar11);
      *(byte *)((longlong)plVar20 + 0x14) = *(byte *)((longlong)plVar20 + 0x14) & 0xdf | bVar6 << 5;
      bVar6 = UMaterial::HasVertexPositionOffsetConnected(pUVar11);
      *(byte *)((longlong)plVar20 + 0x14) = *(byte *)((longlong)plVar20 + 0x14) & 0xfb | bVar6 << 2;
      cVar8 = (**(code **)(pUVar11->_padding_ + 0x578))(pUVar11);
      *(byte *)((longlong)plVar20 + 0x14) =
           *(byte *)((longlong)plVar20 + 0x14) ^
           (cVar8 << 6 ^ *(byte *)((longlong)plVar20 + 0x14)) & 0x40;
      bVar6 = IsOpaqueOrMaskedBlendMode(EVar10);
      *(byte *)((longlong)plVar20 + 0x14) = !bVar6 << 3 | *(byte *)((longlong)plVar20 + 0x14) & 0xf7
      ;
      puVar13 = (ushort *)(**(code **)(pUVar11->_padding_ + 0x468))(pUVar11,local_634);
      *(byte *)((longlong)plVar20 + 0x14) =
           (byte)(*puVar13 >> 6) & 0x10 | *(byte *)((longlong)plVar20 + 0x14) & 0xef;
      if (param_3) {
        cVar8 = (**(code **)(pUVar11->_padding_ + 0x378))(pUVar11,0x12);
        bVar6 = cVar8 == '\0';
      }
      else {
        bVar6 = UMaterial::NeedsSetMaterialUsage_Concurrent(pUVar11,&local_637,MATUSAGE_Nanite);
      }
      *(byte *)((longlong)plVar20 + 0x15) = *(byte *)((longlong)plVar20 + 0x15) & 0xf7;
      *(byte *)((longlong)plVar20 + 0x15) = *(byte *)((longlong)plVar20 + 0x15) | bVar6 << 3;
      bVar6 = Nanite::Private::IsMaterialSkeletalMesh<USkinnedMeshComponent>(param_1);
      if (bVar6) {
        if (param_3) {
          cVar8 = (**(code **)(pUVar11->_padding_ + 0x378))(pUVar11,0);
          bVar6 = cVar8 == '\0';
        }
        else {
          bVar6 = UMaterial::NeedsSetMaterialUsage_Concurrent
                            (pUVar11,&local_637,MATUSAGE_SkeletalMesh);
        }
        *(byte *)((longlong)plVar20 + 0x15) =
             (bVar6 << 3 | *(byte *)((longlong)plVar20 + 0x15) & 8) ^
             *(byte *)((longlong)plVar20 + 0x15) & 0xf7;
      }
      if (EVar10 == BLEND_Masked) {
        param_2->bHasMasked = '\x01';
      }
      if (pUVar11->bIsSky != '\0') {
        param_2->field_0xf8 = param_2->field_0xf8 | 4;
      }
      cVar8 = (**(code **)(*(longlong *)*plVar20 + 0x588))();
      if ((cVar8 == '\0') && ((local_636 == '\0' || ((*(uint *)(local_5f8 + 0x4d0) & 0x4600) != 0)))
         ) {
        param_2->bCompatibleWithLumenCardSharing = '\0';
      }
      bVar7 = *(byte *)((longlong)plVar20 + 0x14);
      bVar7 = (byte)(bVar7 >> 1 | *(byte *)((longlong)plVar20 + 0x15) | bVar7) >> 3 & 1 ^
              bVar7 & 0xfe;
      *(byte *)((longlong)plVar20 + 0x14) = bVar7;
      if (((bVar7 & 1) != 0) && (param_2->bHasAnyError == 0)) {
        pFVar12 = (FMaterialAudit *)
                  Nanite::Private::GetMaterialMeshName<USkinnedMeshComponent>(&local_568,param_1);
        if (param_2 != pFVar12) {
          pFVar3 = (param_2->AssetName).Data.AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          (param_2->AssetName).Data.AllocatorInstance.Data =
               (pFVar12->AssetName).Data.AllocatorInstance.Data;
          (pFVar12->AssetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (param_2->AssetName).Data.ArrayNum = (pFVar12->AssetName).Data.ArrayNum;
          (param_2->AssetName).Data.ArrayMax = (pFVar12->AssetName).Data.ArrayMax;
          (pFVar12->AssetName).Data.ArrayNum = 0;
          (pFVar12->AssetName).Data.ArrayMax = 0;
        }
        if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_568.Data.AllocatorInstance.Data);
        }
        pUVar11 = UMaterial::GetDefaultMaterial(MD_Surface);
        param_2->FallbackMaterial = (UMaterialInterface *)pUVar11;
      }
      param_2->field_0xf8 =
           (param_2->bHasAnyError | *(byte *)((longlong)plVar20 + 0x14)) & 1 ^
           param_2->field_0xf8 & 0xfe;
      if (`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<USkinnedMeshComponent>(USkinnedMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
          ::__l2::bNaniteForceEnableMeshes == false) {
        if ((*(byte *)((longlong)plVar20 + 0x14) & 8) != 0) {
          EVar10 = (**(code **)(*(longlong *)*plVar20 + 0x460))();
          GetBlendModeString(&local_628,EVar10);
          bVar6 = Nanite::Private::IsMaterialSkeletalMesh<USkinnedMeshComponent>(param_1);
          if (bVar6) {
            if (2 < (byte)LogSkeletalMesh._0_1_) {
              local_5f0 = *(FName *)(*plVar20 + 0x18);
              ::FName::ToString(&local_5f0,&local_5c8);
              UE::Logging::Private::BasicLog<3>
                        (&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<USkinnedMeshComponent>(USkinnedMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                          ::__l44::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
              FVar17.Data = local_5c8.Data.AllocatorInstance.Data;
LAB_1483d3053:
              if (FVar17.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar17.Data);
              }
            }
          }
          else if (2 < (byte)LogStaticMesh._0_1_) {
            local_5e8 = *(FName *)(*plVar20 + 0x18);
            ::FName::ToString(&local_5e8,&local_5b8);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<USkinnedMeshComponent>(USkinnedMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                        ::__l55::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
            FVar17.Data = local_5b8.Data.AllocatorInstance.Data;
            goto LAB_1483d3053;
          }
          if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_628.Data.AllocatorInstance.Data);
          }
        }
        if ((*(byte *)((longlong)plVar20 + 0x14) & 0x10) != 0) {
          puVar13 = (ushort *)
                    (**(code **)(*(longlong *)*plVar20 + 0x468))((longlong *)*plVar20,local_632);
          GetShadingModelFieldString(&local_618,(FMaterialShadingModelField)*puVar13);
          bVar6 = Nanite::Private::IsMaterialSkeletalMesh<USkinnedMeshComponent>(param_1);
          if (bVar6) {
            if (2 < (byte)LogSkeletalMesh._0_1_) {
              local_5e0 = *(FName *)(*plVar20 + 0x18);
              ::FName::ToString(&local_5e0,&local_5a8);
              UE::Logging::Private::BasicLog<3>
                        (&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<USkinnedMeshComponent>(USkinnedMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                          ::__l70::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
              FVar17.Data = local_5a8.Data.AllocatorInstance.Data;
LAB_1483d318e:
              if (FVar17.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar17.Data);
              }
            }
          }
          else if (2 < (byte)LogStaticMesh._0_1_) {
            local_5d8 = *(FName *)(*plVar20 + 0x18);
            ::FName::ToString(&local_5d8,&local_598);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_static_struct_Nanite::FMaterialAudit&___ptr64___cdecl_Nanite::FNaniteResourcesHelper::AuditMaterials<USkinnedMeshComponent>(USkinnedMeshComponent_const*___ptr64,Nanite::FMaterialAudit&___ptr64,bool)'
                        ::__l81::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
            FVar17.Data = local_598.Data.AllocatorInstance.Data;
            goto LAB_1483d318e;
          }
          if (local_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_618.Data.AllocatorInstance.Data);
          }
        }
      }
      pTVar21 = (TConsoleVariableData<int> *)(ulonglong)local_630;
      FVar23 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)((longlong)FVar23 + 0x28);
      uVar22 = (ulonglong)local_62c;
    }
    if (local_558.AllocatorInstance.SecondaryData !=
        (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
      FMemory::Free((void *)local_558.AllocatorInstance.SecondaryData);
    }
  }
  return param_2;
}

// HasValidNaniteData<FStaticMeshSceneProxyDesc> @ 14876fef0

bool __cdecl
Nanite::FNaniteResourcesHelper::HasValidNaniteData<FStaticMeshSceneProxyDesc>
          (FStaticMeshSceneProxyDesc *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1->NaniteResources != (FResources *)0x0) {
    bVar1 = 0 < (param_1->NaniteResources->PageStreamingStates).ArrayNum;
  }
  return bVar1;
}

// ShouldCreateNaniteProxy<FStaticMeshSceneProxyDesc> @ 148775760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
Nanite::FNaniteResourcesHelper::ShouldCreateNaniteProxy<FStaticMeshSceneProxyDesc>
          (FStaticMeshSceneProxyDesc *param_1,FMaterialAudit *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  EShaderPlatform EVar3;
  UWorld *pUVar4;
  undefined1 auStack_138 [32];
  FMaterialAudit local_118;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  if (param_1->bDisallowNanite == 0 && param_1->bForceDisableNanite == 0) {
    EVar3 = GMaxRHIShaderPlatform;
    if ((FSceneInterface *)param_1->_padding_ != (FSceneInterface *)0x0) {
      EVar3 = FSceneInterface::GetShaderPlatform((FSceneInterface *)param_1->_padding_);
    }
    bVar2 = UseNanite(EVar3,true,true);
    if (((bVar2) && (param_1->NaniteResources != (FResources *)0x0)) &&
       (0 < (param_1->NaniteResources->PageStreamingStates).ArrayNum)) {
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
      AuditMaterials<FStaticMeshSceneProxyDesc>(param_1,&local_118,param_2 != (FMaterialAudit *)0x0)
      ;
      pUVar4 = FPrimitiveSceneProxyDesc::GetWorld((FPrimitiveSceneProxyDesc *)param_1);
      bVar2 = IsMaskingAllowed(pUVar4,param_1->bForceNaniteForMasked);
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

// UseNaniteOverrideMaterials<FStaticMeshSceneProxyDesc> @ 148775b50

bool __cdecl
Nanite::FNaniteResourcesHelper::UseNaniteOverrideMaterials<FStaticMeshSceneProxyDesc>
          (FStaticMeshSceneProxyDesc *param_1,bool param_2)

{
  bool bVar1;
  
  if ((!param_2) &&
     (bVar1 = ShouldCreateNaniteProxy<FStaticMeshSceneProxyDesc>(param_1,(FMaterialAudit *)0x0),
     !bVar1)) {
    return false;
  }
  if (GEnableNaniteMaterialOverrides == 0) {
    return false;
  }
  return true;
}

