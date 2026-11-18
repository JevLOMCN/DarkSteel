// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FLineBatcherSceneProxy @ 1478a7a20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FLineBatcherSceneProxy * __thiscall
FLineBatcherSceneProxy::FLineBatcherSceneProxy
          (FLineBatcherSceneProxy *this,ULineBatchComponent *param_1)

{
  int *piVar1;
  byte *pbVar2;
  TArray<FBatchedLine,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FBatchedPoint,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FBatchedMesh,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FBatchedMesh *pFVar8;
  
  FPrimitiveSceneProxy::FPrimitiveSceneProxy
            ((FPrimitiveSceneProxy *)this,(UPrimitiveComponent *)param_1,(FName)0x0);
  pTVar3 = &this->Lines;
  this->_padding_ = (longlong)&___7FLineBatcherSceneProxy__6B_;
  piVar1 = &(this->Lines).ArrayMax;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar6 = (param_1->BatchedLines).ArrayNum;
  pFVar7 = (param_1->BatchedLines).AllocatorInstance.Data;
  (this->Lines).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,iVar6,0,&pTVar3->AllocatorInstance,iVar6,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 0x50);
  }
  pTVar4 = &this->Points;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Points).ArrayMax;
  iVar6 = (param_1->BatchedPoints).ArrayNum;
  pFVar7 = (param_1->BatchedPoints).AllocatorInstance.Data;
  (this->Points).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar6,0,&pTVar4->AllocatorInstance,iVar6,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 0x38);
  }
  pTVar5 = &this->Meshes;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Meshes).ArrayMax;
  iVar6 = (param_1->BatchedMeshes).ArrayNum;
  pFVar8 = (FBatchedMesh *)(param_1->BatchedMeshes).AllocatorInstance.Data;
  (this->Meshes).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar6,0,&pTVar5->AllocatorInstance,iVar6,piVar1);
    ConstructItems<FBatchedMesh,FBatchedMesh,int>((pTVar5->AllocatorInstance).Data,pFVar8,iVar6);
  }
  pbVar2 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar2 = *pbVar2 & 0xfe;
  return this;
}

// GetAllocatedSize @ 1478cf8f0

uint __thiscall FLineBatcherSceneProxy::GetAllocatedSize(FLineBatcherSceneProxy *this)

{
  return ((this->Points).ArrayMax * 0xe + (this->Meshes).ArrayMax * 0xc +
          (this->Lines).ArrayMax * 0x14 + *(int *)((longlong)&this->_padding_ + 4)) * 4;
}

// GetDynamicMeshElements @ 1478d23d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLineBatcherSceneProxy::GetDynamicMeshElements
          (FLineBatcherSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  double *pdVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  FNameEntryId FVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FLineBatcherSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_LineBatcherSceneProxy_GetDynamicMeshElements>
  FVar17;
  FPrimitiveDrawInterface *pFVar18;
  FColoredMaterialRenderProxy *pFVar19;
  undefined4 extraout_var;
  FMaterialRenderProxy *pFVar20;
  ulonglong uVar21;
  int iVar22;
  FScriptContainerElement *pFVar23;
  FName FVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  double *pdVar27;
  FScriptContainerElement *pFVar28;
  longlong lVar29;
  FColor *in_stack_fffffffffffffe68;
  undefined4 uVar30;
  FMeshElementCollector *in_stack_fffffffffffffe70;
  undefined1 local_167;
  undefined1 local_166;
  undefined1 local_165;
  undefined1 local_164 [4];
  uint local_160;
  FColor_u_0 local_15c;
  uint local_158;
  uint local_150;
  uint uStack_14c;
  FName local_148;
  FNameEntryId local_140;
  uint uStack_13c;
  longlong local_138;
  FName local_130;
  FName local_128;
  TVector<float>_u_0 local_118;
  TVector<float>_u_0 local_10c;
  TVector<float>_u_0 local_100;
  TVector<float>_u_0 local_f4;
  FLinearColor_u_0 local_e8;
  longlong local_d8;
  FName local_d0;
  FName local_c8;
  FDynamicMeshBuilder local_c0 [3];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_LineBatcherSceneProxy_GetDynamicMeshElements =
         (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FLineBatcherSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_LineBatcherSceneProxy_GetDynamicMeshElements>
          )0x0;
    pFVar16 = ::FName::FName(&local_d0,"STAT_LineBatcherSceneProxy_GetDynamicMeshElements");
    in_stack_fffffffffffffe70 =
         (FMeshElementCollector *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe70 >> 8),1);
    in_stack_fffffffffffffe68 =
         (FColor *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe68 >> 8),1);
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_LineBatcherSceneProxy_GetDynamicMeshElements,*pFVar16,
               L"STAT_LineBatcherSceneProxy_GetDynamicMeshElements","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar17 = StatPtr_STAT_LineBatcherSceneProxy_GetDynamicMeshElements;
  if (StatPtr_STAT_LineBatcherSceneProxy_GetDynamicMeshElements ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FLineBatcherSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_LineBatcherSceneProxy_GetDynamicMeshElements>
       )0x0) {
    pFVar16 = ::FName::FName(&local_c8,"STAT_LineBatcherSceneProxy_GetDynamicMeshElements");
    in_stack_fffffffffffffe70 =
         (FMeshElementCollector *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe70 >> 8),1);
    in_stack_fffffffffffffe68 =
         (FColor *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe68 >> 8),1);
    FVar17 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FLineBatcherSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_LineBatcherSceneProxy_GetDynamicMeshElements>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_LineBatcherSceneProxy_GetDynamicMeshElements,*pFVar16,
                          L"STAT_LineBatcherSceneProxy_GetDynamicMeshElements","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar24 = *(FName *)FVar17;
  bVar4 = false;
  bVar5 = false;
  local_128.ComparisonIndex.Value = 0;
  local_128.Number = 0;
  bVar12 = false;
  bVar13 = false;
  FVar15 = FVar24.ComparisonIndex.Value;
  uVar25 = FVar24.Number;
  if ((FVar15.Value != 0) || (uVar25 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_15c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_15c._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar4 = false;
      bVar5 = true;
      bVar12 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_148.ComparisonIndex.Value = FVar15.Value;
        local_148.Number = uVar25;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_148,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\LineBatchComponent.cpp"
                   ,0x3e);
        bVar4 = true;
        bVar5 = true;
        bVar12 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_150 = FVar15.Value;
      uStack_14c = uVar25;
      local_130 = FVar24;
      FThreadStats::AddMessage(FVar24,CycleScopeStart);
      bVar12 = true;
      goto LAB_1478d2600;
    }
  }
  bVar5 = bVar13;
  bVar4 = bVar12;
  bVar12 = false;
  local_130 = local_128;
  FVar24 = local_128;
LAB_1478d2600:
  dVar11 = _UNK_150689518;
  dVar10 = ___xmm_00000000000000003ff0000000000000;
  fVar9 = __real_3b808081;
  dVar8 = _UNK_15061cbc8;
  dVar7 = ___xmm_3ff00000000000000000000000000000;
  dVar6 = __real_3ff0000000000000;
  iVar22 = param_1->ArrayNum;
  local_160 = 0;
  if (0 < iVar22) {
    local_138 = 0;
    do {
      lVar29 = local_138;
      uVar25 = local_160;
      if ((param_3 >> (local_160 & 0x1f) & 1) != 0) {
        uVar14 = 0;
        if ((int)local_160 < iVar22) {
          uVar14 = ~local_160 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_d8 = *(longlong *)((param_1->AllocatorInstance).Data + lVar29);
        pFVar18 = FMeshElementCollector::GetDebugPDI(param_4,uVar25);
        iVar22 = (this->Lines).ArrayNum;
        pFVar26 = (this->Lines).AllocatorInstance.Data;
        pFVar28 = pFVar26 + (longlong)iVar22 * 0x50;
        while( true ) {
          if ((this->Lines).ArrayNum != iVar22) {
            local_167 = 0;
            `TCheckedPointerIterator<FBatchedLine_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_167);
          }
          if (pFVar26 == pFVar28) break;
          in_stack_fffffffffffffe70 =
               (FMeshElementCollector *)((ulonglong)in_stack_fffffffffffffe70 & 0xffffffffffffff00);
          in_stack_fffffffffffffe68 =
               (FColor *)((ulonglong)in_stack_fffffffffffffe68 & 0xffffffff00000000);
          (**(code **)(pFVar18->_padding_ + 0x38))
                    (pFVar18,pFVar26,pFVar26 + 0x18,pFVar26 + 0x30,pFVar26[0x48],
                     *(undefined4 *)(pFVar26 + 0x40),in_stack_fffffffffffffe68,
                     in_stack_fffffffffffffe70);
          pFVar26 = pFVar26 + 0x50;
        }
        iVar22 = (this->Points).ArrayNum;
        pFVar26 = (this->Points).AllocatorInstance.Data;
        pFVar28 = pFVar26 + (longlong)iVar22 * 0x38;
        while( true ) {
          if ((this->Points).ArrayNum != iVar22) {
            local_166 = 0;
            `TCheckedPointerIterator<FBatchedPoint_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_166);
          }
          if (pFVar26 == pFVar28) break;
          (**(code **)(pFVar18->_padding_ + 0x40))
                    (pFVar18,pFVar26,pFVar26 + 0x18,*(undefined4 *)(pFVar26 + 0x28),pFVar26[0x30]);
          pFVar26 = pFVar26 + 0x38;
        }
        local_158 = (this->Meshes).ArrayNum;
        uVar21 = (ulonglong)(int)local_158;
        pFVar28 = (this->Meshes).AllocatorInstance.Data;
        pFVar26 = pFVar28 + 0x22;
        pFVar23 = pFVar28 + uVar21 * 0x30;
        while( true ) {
          if ((this->Meshes).ArrayNum != (int)uVar21) {
            local_165 = 0;
            `TCheckedPointerIterator<FBatchedMesh_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_165);
          }
          if (pFVar28 == pFVar23) break;
          lVar29 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          if ((*(int *)(lVar29 + 0x9d4c) < ::_TSS4) &&
             (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
            PosX.field0_0x0._s_0.Z = 0.0;
            PosX.field0_0x0._s_0.X = dVar10;
            PosX.field0_0x0._s_0.Y = dVar11;
            _Init_thread_footer(&::_TSS4);
          }
          if ((*(int *)(lVar29 + 0x9d4c) < ::_TSS5) &&
             (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
            PosY.field0_0x0._s_0.Z = 0.0;
            PosY.field0_0x0._s_0.X = dVar7;
            PosY.field0_0x0._s_0.Y = dVar8;
            _Init_thread_footer(&::_TSS5);
          }
          if ((*(int *)(lVar29 + 0x9d4c) < ::_TSS6) &&
             (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
            PosZ.field0_0x0._s_0.Z = dVar6;
            PosZ.field0_0x0._s_0.X = 0.0;
            PosZ.field0_0x0._s_0.Y = 0.0;
            _Init_thread_footer(&::_TSS6);
          }
          FDynamicMeshBuilder::FDynamicMeshBuilder
                    (local_c0,*(Type *)(local_d8 + 0x1bf8),1,0,false,
                     (FDynamicMeshBufferAllocator *)0x0);
          iVar22 = *(int *)(pFVar26 + -0x1a);
          pdVar27 = *(double **)pFVar28;
          pdVar1 = pdVar27 + (longlong)iVar22 * 3;
          while( true ) {
            if (*(int *)(pFVar26 + -0x1a) != iVar22) {
              local_164[0] = 0;
              `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_164);
            }
            uVar30 = (undefined4)((ulonglong)in_stack_fffffffffffffe68 >> 0x20);
            if (pdVar27 == pdVar1) break;
            local_118._s_0.X = (float)PosZ.field0_0x0._s_0.X;
            in_stack_fffffffffffffe68 = &FColor::White;
            local_118._s_0.Y = (float)PosZ.field0_0x0._s_0.Y;
            local_118._s_0.Z = (float)PosZ.field0_0x0._s_0.Z;
            local_10c._s_0.X = (float)PosY.field0_0x0._s_0.X;
            local_10c._s_0.Y = (float)PosY.field0_0x0._s_0.Y;
            local_10c._s_0.Z = (float)PosY.field0_0x0._s_0.Z;
            local_100._s_0.X = (float)PosX.field0_0x0._s_0.X;
            local_100._s_0.Y = (float)PosX.field0_0x0._s_0.Y;
            local_100._s_0.Z = (float)PosX.field0_0x0._s_0.Z;
            local_f4._s_0.X = (float)*pdVar27;
            local_f4._s_0.Y = (float)pdVar27[1];
            local_f4._s_0.Z = (float)pdVar27[2];
            FDynamicMeshBuilder::AddVertex
                      (local_c0,(TVector<float> *)&local_f4._s_0,
                       &UE::Math::TVector2<float>::ZeroVector,(TVector<float> *)&local_100._s_0,
                       (TVector<float> *)&local_10c._s_0,(TVector<float> *)&local_118._s_0,
                       &FColor::White);
            pdVar27 = pdVar27 + 3;
          }
          iVar22 = *(int *)(pFVar26 + -10);
          if (0 < iVar22) {
            lVar29 = 4;
            uVar25 = 1;
            do {
              uVar14 = 0;
              if ((int)(uVar25 + 1) < iVar22) {
                uVar14 = ~(uVar25 + 1) >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar22 = *(int *)(lVar29 + 4 + *(longlong *)(pFVar26 + -0x12));
              uVar14 = 0;
              if ((int)uVar25 < *(int *)(pFVar26 + -10)) {
                uVar14 = ~uVar25 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar2 = *(int *)(lVar29 + *(longlong *)(pFVar26 + -0x12));
              uVar14 = 0;
              if ((int)(uVar25 - 1) < *(int *)(pFVar26 + -10)) {
                uVar14 = ~(uVar25 - 1) >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              FDynamicMeshBuilder::AddTriangle
                        (local_c0,*(int *)(lVar29 + -4 + *(longlong *)(pFVar26 + -0x12)),iVar2,
                         iVar22);
              uVar30 = (undefined4)((ulonglong)in_stack_fffffffffffffe68 >> 0x20);
              iVar22 = *(int *)(pFVar26 + -10);
              lVar29 = lVar29 + 0xc;
              iVar2 = uVar25 + 2;
              uVar25 = uVar25 + 3;
            } while (iVar2 < iVar22);
          }
          pFVar19 = ::operator_new(0xe0);
          if (pFVar19 == (FColoredMaterialRenderProxy *)0x0) {
            pFVar19 = (FColoredMaterialRenderProxy *)0x0;
          }
          else {
            FVar15 = FNameEntryId::FromValidEName((EName)&local_150);
            uStack_13c = 0;
            local_140.Value = *(uint *)CONCAT44(extraout_var,FVar15.Value);
            local_e8._s_0.R = FLinearColor::sRGBToLinearTable[(byte)*pFVar26];
            local_e8._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar26[-1]];
            local_e8._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar26[-2]];
            local_e8._s_0.A = (float)(byte)pFVar26[1] * fVar9;
            pFVar20 = (FMaterialRenderProxy *)
                      (**(code **)(((GEngine->DebugMeshMaterial).field0_0x0.DebugPtr)->_padding_ +
                                  0x310))();
            FVar24.Number = uStack_13c;
            FVar24.ComparisonIndex.Value = local_140.Value;
            pFVar19 = FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                                (pFVar19,pFVar20,(FLinearColor *)&local_e8._s_0,FVar24);
          }
          FMeshElementCollector::RegisterOneFrameMaterialProxy
                    (param_4,(FMaterialRenderProxy *)pFVar19);
          in_stack_fffffffffffffe68 = (FColor *)CONCAT44(uVar30,local_160);
          in_stack_fffffffffffffe70 = param_4;
          FDynamicMeshBuilder::GetMesh
                    (local_c0,&UE::Math::TMatrix<double>::Identity,(FMaterialRenderProxy *)pFVar19,
                     (uchar)pFVar26[6],false,false,local_160,param_4);
          FDynamicMeshBuilder::~FDynamicMeshBuilder(local_c0);
          uVar21 = (ulonglong)local_158;
          pFVar28 = pFVar28 + 0x30;
          pFVar26 = pFVar26 + 0x30;
        }
      }
      iVar22 = param_1->ArrayNum;
      local_160 = local_160 + 1;
      local_138 = local_138 + 8;
      FVar24 = local_130;
    } while ((int)local_160 < iVar22);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(FVar24,CycleScopeEnd);
  }
  return;
}

// GetMemoryFootprint @ 1478d6380

uint __thiscall FLineBatcherSceneProxy::GetMemoryFootprint(FLineBatcherSceneProxy *this)

{
  return ((this->Points).ArrayMax * 0xe + (this->Meshes).ArrayMax * 0xc +
          (this->Lines).ArrayMax * 0x14 + *(int *)((longlong)&this->_padding_ + 4)) * 4 + 0x2b0;
}

// GetTypeHash @ 1478ddac0

ulong64 __thiscall FLineBatcherSceneProxy::GetTypeHash(FLineBatcherSceneProxy *this)

{
  return 0x1551f78c8;
}

// GetViewRelevance @ 1478dec20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FLineBatcherSceneProxy::GetViewRelevance
          (FLineBatcherSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  bool bVar2;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar2 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bDrawRelevance = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 5);
  *pbVar1 = *pbVar1 | 4;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar2 << 2 | 2;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 0x80;
  return __return_storage_ptr__;
}

