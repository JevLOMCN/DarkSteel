// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FBrushSceneProxy @ 1477eb600

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FBrushSceneProxy * __thiscall
FBrushSceneProxy::FBrushSceneProxy(FBrushSceneProxy *this,UBrushComponent *param_1,ABrush *param_2)

{
  byte *pbVar1;
  undefined1 *puVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  char cVar11;
  byte bVar12;
  bool bVar13;
  undefined8 *puVar14;
  uint *puVar15;
  FActorPrimitiveColorHandler *this_00;
  FLinearColor *pFVar16;
  uint uVar17;
  undefined8 local_res8;
  FLinearColor local_18;
  
  local_res8 = 0;
  FPrimitiveSceneProxy::FPrimitiveSceneProxy
            ((FPrimitiveSceneProxy *)this,(UPrimitiveComponent *)param_1,(FName)0x0);
  this->bVolume = 0;
  this->bInManipulation = 0;
  this->bSolidWhenSelected = 0;
  this->bBuilder = 0;
  this->_padding_ = (longlong)&___7FBrushSceneProxy__6B_;
  (this->BrushColor).field0_0x0 = (GEngine->C_BrushWire).field0_0x0;
  this->BodySetup = (UBodySetup *)(param_1->BrushBodySetup).field0_0x0;
  puVar14 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x5c8))(param_1);
  uVar10 = puVar14[1];
  *(undefined8 *)&(this->CollisionResponse).field0_0x0 = *puVar14;
  *(undefined8 *)((longlong)&(this->CollisionResponse).field0_0x0 + 8) = uVar10;
  uVar6 = *(undefined4 *)(puVar14 + 2);
  uVar7 = *(undefined4 *)((longlong)puVar14 + 0x14);
  uVar8 = *(undefined4 *)(puVar14 + 3);
  uVar9 = *(undefined4 *)((longlong)puVar14 + 0x1c);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xfe;
  *(undefined4 *)((longlong)&(this->CollisionResponse).field0_0x0 + 0x10) = uVar6;
  *(undefined4 *)((longlong)&(this->CollisionResponse).field0_0x0 + 0x14) = uVar7;
  *(undefined4 *)((longlong)&(this->CollisionResponse).field0_0x0 + 0x18) = uVar8;
  *(undefined4 *)((longlong)&(this->CollisionResponse).field0_0x0 + 0x1c) = uVar9;
  if (param_2 != (ABrush *)0x0) {
    cVar11 = (**(code **)(GEngine->_padding_ + 0x358))(GEngine,param_2);
    if (cVar11 != '\0') {
      bVar12 = (**(code **)(param_2->_padding_ + 0x770))(param_2);
      *(uint *)&this->field_0x280 =
           ((uint)bVar12 ^ ZPULL(*(undefined4 *)&this->field_0x280,0,1)) & 1 ^
           *(undefined4 *)&this->field_0x280;
      bVar13 = FActorEditorUtils::IsABuilderBrush((AActor *)param_2);
      this->bBuilder = 0;
      *(uint *)&this->field_0x280 = *(uint *)&this->field_0x280 | (uint)bVar13 * 2;
      puVar15 = (uint *)(**(code **)(param_2->_padding_ + 0x780))(param_2,&local_res8);
      uVar5 = *puVar15;
      uVar17 = *(uint *)&this->field_0x280;
      (this->BrushColor).field0_0x0.Bits = uVar5;
      uVar17 = (*(int *)&param_2->field_0x2cc * 2 ^ uVar17) & 4 ^ uVar17;
      *(uint *)&this->field_0x280 = uVar17;
      uVar17 = (*(int *)&param_2->field_0x2e0 << 3 ^ uVar17) & 8 ^ uVar17;
      *(uint *)&this->field_0x280 = uVar17;
      if ((uVar17 & 2) != 0) {
        fVar3 = FLinearColor::sRGBToLinearTable[uVar5 >> 8 & 0xff];
        fVar4 = FLinearColor::sRGBToLinearTable[uVar5 & 0xff];
        (this->ActorColor).field0_0x0._s_0.R = FLinearColor::sRGBToLinearTable[uVar5 >> 0x10 & 0xff]
        ;
        (this->ActorColor).field0_0x0._s_0.G = fVar3;
        (this->ActorColor).field0_0x0._s_0.B = fVar4;
        (this->ActorColor).field0_0x0._s_0.A = (float)(uVar5 >> 0x18) * __real_3b808081;
        return this;
      }
      this_00 = FActorPrimitiveColorHandler::Get();
      pFVar16 = FActorPrimitiveColorHandler::GetPrimitiveColor
                          (this_00,&local_18,(UPrimitiveComponent *)param_1);
      uVar10 = *(undefined8 *)((longlong)&pFVar16->field0_0x0 + 8);
      *(undefined8 *)&(this->ActorColor).field0_0x0 = *(undefined8 *)&pFVar16->field0_0x0;
      *(undefined8 *)((longlong)&(this->ActorColor).field0_0x0 + 8) = uVar10;
    }
  }
  return this;
}

// ~FBrushSceneProxy @ 1477f2fe0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FBrushSceneProxy::~FBrushSceneProxy(FBrushSceneProxy *this)

{
  this->_padding_ = (longlong)&___7FBrushSceneProxy__6B_;
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  return;
}

// CreateRenderThreadResources @ 14781aa20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FBrushSceneProxy::CreateRenderThreadResources(FBrushSceneProxy *this,FRHICommandListBase *param_1)

{
  return;
}

// GetDynamicMeshElements @ 1478383c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FBrushSceneProxy::GetDynamicMeshElements
          (FBrushSceneProxy *this,TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,
          FSceneViewFamily *param_2,uint param_3,FMeshElementCollector *param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  UBodySetup *pUVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  FNameEntryId FVar12;
  FName *pFVar13;
  TStatIdData *pTVar14;
  FColoredMaterialRenderProxy *pFVar15;
  undefined4 extraout_var;
  FMaterialRenderProxy *pFVar16;
  FLinearColor *this_00;
  int iVar17;
  FName FVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  undefined1 auStackY_208 [32];
  FName local_198;
  FColor_u_0 local_190;
  FColor_u_0 local_18c;
  FColor_u_0 local_188;
  uint local_180;
  uint uStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  FName local_168;
  longlong local_160;
  FName local_158;
  FName local_150;
  FSceneViewFamily *local_140;
  FName local_138;
  FName local_130;
  FLinearColor local_128;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  uVar19 = 0;
  local_140 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FBrushSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FBrushSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FBrushSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_BrushSceneProxy_GetDynamicMeshElements = (TStatIdData *)0x0;
    pFVar13 = ::FName::FName(&local_138,"STAT_BrushSceneProxy_GetDynamicMeshElements");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_void___cdecl_FBrushSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                ::__l2::StatPtr_STAT_BrushSceneProxy_GetDynamicMeshElements,*pFVar13,
               L"STAT_BrushSceneProxy_GetDynamicMeshElements","STATGROUP_Quick","STATCAT_Advanced",
               L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FBrushSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar14 = _StatPtr_STAT_BrushSceneProxy_GetDynamicMeshElements;
  if (_StatPtr_STAT_BrushSceneProxy_GetDynamicMeshElements == (TStatIdData *)0x0) {
    pFVar13 = ::FName::FName(&local_130,"STAT_BrushSceneProxy_GetDynamicMeshElements");
    pTVar14 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_virtual_void___cdecl_FBrushSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                          ::__l2::StatPtr_STAT_BrushSceneProxy_GetDynamicMeshElements,*pFVar13,
                         L"STAT_BrushSceneProxy_GetDynamicMeshElements","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)&pTVar14->Name;
  bVar6 = false;
  bVar7 = false;
  local_150.ComparisonIndex.Value = 0;
  local_150.Number = 0;
  bVar9 = false;
  bVar10 = false;
  FVar12 = FVar18.ComparisonIndex.Value;
  uVar20 = FVar18.Number;
  if ((FVar12.Value != 0) || (uVar20 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_190.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_190._s_0,(pTVar14->StatDescriptionAnsi).Ptr);
      bVar6 = false;
      bVar7 = true;
      bVar9 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_168.ComparisonIndex.Value = FVar12.Value;
        local_168.Number = uVar20;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_168,(pTVar14->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\BrushComponent.cpp"
                   ,0xd2);
        bVar6 = true;
        bVar7 = true;
        bVar9 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_180 = FVar12.Value;
      uStack_17c = uVar20;
      local_158 = FVar18;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar9 = true;
      goto LAB_147838579;
    }
  }
  bVar7 = bVar10;
  bVar6 = bVar9;
  bVar9 = false;
  local_158 = local_150;
  FVar18 = local_150;
LAB_147838579:
  bVar10 = AllowDebugViewmodes();
  fVar8 = __real_3b808081;
  if ((bVar10) && (iVar17 = param_1->ArrayNum, 0 < iVar17)) {
    uVar20 = 1;
    local_160 = 0;
    do {
      lVar21 = local_160;
      if ((param_3 & uVar20) != 0) {
        uVar11 = 0;
        if ((int)uVar19 < iVar17) {
          uVar11 = ~uVar19 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((local_140->EngineShowFlags).CollisionVisibility == 0) &&
           ((local_140->EngineShowFlags).CollisionPawn == 0)) {
          bVar5 = false;
LAB_14783864f:
          bVar10 = bVar5;
          bVar5 = false;
        }
        else {
          bVar10 = true;
          bVar5 = true;
          if ((this->_padding_ & 0x20000000) == 0) goto LAB_14783864f;
          if (((local_140->EngineShowFlags).CollisionPawn == 0) ||
             ((this->CollisionResponse).field0_0x0._s_0.Pawn == '\0')) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (((local_140->EngineShowFlags).CollisionVisibility != 0) &&
             ((this->CollisionResponse).field0_0x0._s_0.Visibility != '\0')) {
            bVar5 = true;
          }
        }
        if (((this->bSolidWhenSelected != 0) && ((this->_padding_ & 0x600) != 0)) ||
           ((bVar10 && (bVar5)))) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        fStack_174 = FLinearColor::sRGBToLinearTable[(this->BrushColor).field0_0x0._s_0.G];
        local_178 = FLinearColor::sRGBToLinearTable[(this->BrushColor).field0_0x0._s_0.R];
        fStack_16c = (float)(this->BrushColor).field0_0x0._s_0.A * fVar8;
        fStack_170 = FLinearColor::sRGBToLinearTable[(this->BrushColor).field0_0x0._s_0.B];
        if ((!bVar10) &&
           ((*(uint *)(*(longlong *)(*(longlong *)((param_1->AllocatorInstance).Data + lVar21) + 8)
                      + 0x58) & 0x200) != 0)) {
          _local_178 = *(undefined8 *)&(this->ActorColor).field0_0x0;
          _fStack_170 = *(undefined8 *)((longlong)&(this->ActorColor).field0_0x0 + 8);
        }
        if (bVar5) {
          if (this->BodySetup != (UBodySetup *)0x0) {
            pFVar15 = ::operator_new(0xe0);
            if (pFVar15 == (FColoredMaterialRenderProxy *)0x0) {
              pFVar15 = (FColoredMaterialRenderProxy *)0x0;
            }
            else {
              FVar12 = FNameEntryId::FromValidEName((EName)&local_180);
              local_198.Number = 0;
              local_198.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar12.Value);
              pFVar16 = (FMaterialRenderProxy *)
                        (**(code **)(((GEngine->ShadedLevelColorationUnlitMaterial).field0_0x0.
                                     DebugPtr)->_padding_ + 0x310))();
              pFVar15 = FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                                  (pFVar15,pFVar16,(FLinearColor *)&local_178,local_198);
            }
            FMeshElementCollector::RegisterOneFrameMaterialProxy
                      (param_4,(FMaterialRenderProxy *)pFVar15);
            UE::Math::TTransform<double>::SetFromMatrix
                      (&local_118,(TMatrix<double> *)&this->_padding_);
            bVar2 = *(byte *)((longlong)&this->_padding_ + 2);
            pUVar3 = this->BodySetup;
            if ((((char)bVar2 < '\0') || ((bVar2 & 0x10) != 0)) ||
               (((bVar2 & 3) == 3 || ((bVar2 & 0x60) != 0)))) {
              bVar10 = true;
            }
            else {
              bVar10 = false;
            }
            FLinearColor::ToFColorSRGB((FLinearColor *)&local_178);
            FKAggregateGeom::GetAggGeom
                      (&pUVar3->AggGeom,&local_118,(FColor)local_18c._s_0,
                       (FMaterialRenderProxy *)pFVar15,false,true,bVar10,uVar19,param_4);
            lVar21 = local_160;
          }
        }
        else if ((!bVar10) && (this->BodySetup != (UBodySetup *)0x0)) {
          UE::Math::TTransform<double>::SetFromMatrix(&local_b8,(TMatrix<double> *)&this->_padding_)
          ;
          bVar2 = *(byte *)((longlong)&this->_padding_ + 2);
          pUVar3 = this->BodySetup;
          if (((char)bVar2 < '\0') ||
             ((((bVar2 & 0x10) != 0 || ((bVar2 & 3) == 3)) || ((bVar2 & 0x60) != 0)))) {
            bVar10 = true;
          }
          else {
            bVar10 = false;
          }
          this_00 = GetSelectionColor(&local_128,(FLinearColor *)&local_178,
                                      (this->_padding_ & 0x600) != 0,
                                      (bool)(*(byte *)((longlong)&this->_padding_ + 1) >> 4 & 1),
                                      true);
          FLinearColor::ToFColorSRGB(this_00);
          FKAggregateGeom::GetAggGeom
                    (&pUVar3->AggGeom,&local_b8,(FColor)local_188._s_0,(FMaterialRenderProxy *)0x0,
                     false,false,bVar10,uVar19,param_4);
        }
      }
      iVar17 = param_1->ArrayNum;
      local_160 = lVar21 + 8;
      uVar19 = uVar19 + 1;
      uVar20 = uVar20 << 1 | (uint)((int)uVar20 < 0);
      FVar18 = local_158;
    } while ((int)uVar19 < iVar17);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar18,CycleScopeEnd);
  }
  return;
}

// GetMemoryFootprint @ 14783a780

uint __thiscall FBrushSceneProxy::GetMemoryFootprint(FBrushSceneProxy *this)

{
  return *(int *)((longlong)&this->_padding_ + 4) * 4 + 0x2c0;
}

// GetTypeHash @ 14783dfd0

ulong64 __thiscall FBrushSceneProxy::GetTypeHash(FBrushSceneProxy *this)

{
  return 0x1551f6200;
}

// GetViewRelevance @ 14783e710

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
FBrushSceneProxy::GetViewRelevance
          (FBrushSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  undefined1 *puVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  
  uVar12 = 0;
  if ((this->bSolidWhenSelected == 0) || ((this->_padding_ & 0x600) == 0)) {
    bVar10 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
    if (bVar10) {
      uVar11 = this->bVolume;
      if (((uVar11 == 0) && ((param_1->Family->EngineShowFlags).BSP != 0)) &&
         ((param_1->Family->EngineShowFlags).Brushes != 0)) {
        uVar12 = 1;
      }
      bVar13 = (byte)uVar12;
      if (((param_1->Family->EngineShowFlags).Collision != 0 ||
           ((param_1->Family->EngineShowFlags).CollisionVisibility != 0 ||
           (param_1->Family->EngineShowFlags).CollisionPawn != 0)) &&
         ((this->_padding_ & 0x20000000) != 0)) {
        bVar13 = 1;
      }
      uVar12 = (uint)bVar13;
      if (uVar11 != 0) {
        uVar12 = 1;
      }
    }
    __return_storage_ptr__->_padding_ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    pbVar2 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
    *pbVar2 = *pbVar2 | 4;
    puVar3 = &__return_storage_ptr__->field_0x8;
    __return_storage_ptr__->bDynamicRelevance = 1;
    __return_storage_ptr__->bRenderInMainPass = 1;
    __return_storage_ptr__->bDrawRelevance = uVar12;
    bVar10 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1);
    uVar12 = (uint)bVar10 << 3 | *(uint *)&__return_storage_ptr__->field_0x8 & 0xfffffff7;
    __return_storage_ptr__->bShadowRelevance = bVar10;
    if (this->bInManipulation != 0) {
      uVar12 = uVar12 | 0x800;
      *(uint *)&__return_storage_ptr__->field_0x8 = uVar12;
    }
    if (((param_1->Family->EngineShowFlags).Collision == 0 &&
         ((param_1->Family->EngineShowFlags).CollisionVisibility == 0 &&
         (param_1->Family->EngineShowFlags).CollisionPawn == 0)) && (param_1->bIsGameView == false))
    {
      *(uint *)&__return_storage_ptr__->field_0x8 = uVar12 | 0x100;
    }
  }
  else {
    __return_storage_ptr__->_padding_ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    pbVar2 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
    *pbVar2 = *pbVar2 | 4;
    puVar3 = &__return_storage_ptr__->field_0x8;
    __return_storage_ptr__->bDynamicRelevance = 1;
    __return_storage_ptr__->bRenderInMainPass = 1;
    __return_storage_ptr__->bDrawRelevance = 1;
  }
  return __return_storage_ptr__;
}

