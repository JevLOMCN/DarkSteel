// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ISMPool
// Functions: 15

// StaticClass @ 146337ee0

UClass * __cdecl UISMPoolDebugDrawComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UISMPoolDebugDrawComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ISMPool",L"ISMPoolDebugDrawComponent",
               &Z_Registration_Info_UClass_UISMPoolDebugDrawComponent.InnerSingleton,
               StaticRegisterNativesUISMPoolDebugDrawComponent,0x640,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UISMPoolDebugDrawComponent>,
               InternalVTableHelperCtorCaller<UISMPoolDebugDrawComponent>,local_res8,
               UDebugDrawComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UISMPoolDebugDrawComponent.InnerSingleton;
}

// UISMPoolDebugDrawComponent @ 14633aa80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UISMPoolDebugDrawComponent * __thiscall
UISMPoolDebugDrawComponent::UISMPoolDebugDrawComponent
          (UISMPoolDebugDrawComponent *this,FVTableHelper *param_1)

{
  UDebugDrawComponent::UDebugDrawComponent((UDebugDrawComponent *)this,param_1);
  this->bShowGlobalStats = false;
  this->bShowStats = false;
  *(undefined ***)this = &_vftable__for__UObject__;
  this->bShowBounds = false;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  (this->SelectedComponent).field0_0x0.DebugPtr = (UInstancedStaticMeshComponent *)0x0;
  this->SelectTimer = 0.0;
  FDebugDrawDelegateHelper::FDebugDrawDelegateHelper(&this->DebugDrawDelegateHelper);
  (this->OnScreenMessagesHandle).ID = 0;
  return this;
}

// UISMPoolDebugDrawComponent @ 14633ab30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UISMPoolDebugDrawComponent * __thiscall
UISMPoolDebugDrawComponent::UISMPoolDebugDrawComponent
          (UISMPoolDebugDrawComponent *this,FObjectInitializer *param_1)

{
  byte bVar1;
  
  UDebugDrawComponent::UDebugDrawComponent((UDebugDrawComponent *)this,param_1);
  this->bShowGlobalStats = false;
  this->bShowStats = false;
  *(undefined ***)this = &_vftable__for__UObject__;
  this->bShowBounds = false;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  (this->SelectedComponent).field0_0x0.DebugPtr = (UInstancedStaticMeshComponent *)0x0;
  this->SelectTimer = 0.0;
  FDebugDrawDelegateHelper::FDebugDrawDelegateHelper(&this->DebugDrawDelegateHelper);
  bVar1 = this->field_0x42;
  this->field_0x9b = this->field_0x9b & 0xfd;
  this->field_0x27d = this->field_0x27d & 0xef;
  (this->OnScreenMessagesHandle).ID = 0;
  this->field_0x42 = bVar1 & 0xf3 | 2;
  return this;
}

// ~UISMPoolDebugDrawComponent @ 14633b0c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UISMPoolDebugDrawComponent::~UISMPoolDebugDrawComponent(UISMPoolDebugDrawComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  (this->DebugDrawDelegateHelper)._padding_ = (longlong)&___7FDebugDrawDelegateHelper__6B_;
  pFVar1 = (this->DebugDrawDelegateHelper).ViewFlagName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDebugRenderSceneProxy::FText3d,int>
            ((FText3d *)(this->DebugDrawDelegateHelper).Texts.AllocatorInstance.Data,
             (this->DebugDrawDelegateHelper).Texts.ArrayNum);
  pFVar1 = (this->DebugDrawDelegateHelper).Texts.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->DebugDrawDelegateHelper).DebugTextDrawingDelegate);
  UDebugDrawComponent::~UDebugDrawComponent((UDebugDrawComponent *)this);
  return;
}

// BeginPlay @ 14633d540

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UISMPoolDebugDrawComponent::BeginPlay(UISMPoolDebugDrawComponent *this)

{
  FDelegateHandle FVar1;
  
  UPrimitiveComponent::BeginPlay((UPrimitiveComponent *)this);
  FVar1 = TMulticastDelegateRegistration<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
          ::AddUObject<UISMPoolDebugDrawComponent>
                    (&FCoreDelegates::OnGetOnScreenMessages,
                     (UISMPoolDebugDrawComponent *)&stack0x00000008,(pmf_dc0a3d89 *)this);
                    /* WARNING: Load size is inaccurate */
  (this->OnScreenMessagesHandle).ID = *FVar1.ID;
  UpdateTickEnabled(this);
  return;
}

// CalcBounds @ 14633d5b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
UISMPoolDebugDrawComponent::CalcBounds
          (UISMPoolDebugDrawComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  UInstancedStaticMeshComponent *pUVar1;
  double dVar2;
  double *pdVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  undefined8 local_58;
  
  pUVar1 = (this->SelectedComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (UInstancedStaticMeshComponent *)0x0) {
    pdVar3 = &local_88;
    dStack_70 = __real_3fe0000000000000 * 0.0;
    local_88 = __real_3fe0000000000000 * 0.0 + 0.0;
    auVar4._0_8_ = __real_3fe0000000000000 * 0.0 + 0.0;
    auVar4._8_8_ = 0;
    local_68 = __real_3fe0000000000000 * 0.0;
    dStack_80 = __real_3fe0000000000000 * 0.0 + 0.0;
    dStack_60 = __real_3fe0000000000000 * 0.0;
    local_78 = auVar4._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = __real_3fd0000000000000 * 0.0;
    auVar5 = sqrtpd(auVar4,auVar5);
    local_58 = auVar5._0_8_;
  }
  else {
    pdVar3 = (double *)(**(code **)(pUVar1->_padding_ + 0x598))(pUVar1,&local_88);
  }
  dVar2 = pdVar3[1];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = *pdVar3;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar2;
  dVar2 = pdVar3[3];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = pdVar3[2];
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar2;
  dVar2 = pdVar3[5];
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = pdVar3[4];
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar2;
  __return_storage_ptr__->SphereRadius = pdVar3[6];
  return __return_storage_ptr__;
}

// CreateDebugSceneProxy @ 14633da00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FDebugRenderSceneProxy * __thiscall
UISMPoolDebugDrawComponent::CreateDebugSceneProxy(UISMPoolDebugDrawComponent *this)

{
  int *piVar1;
  TArray<FDebugRenderSceneProxy::FDebugBox,TSizedDefaultAllocator<32>_> *pTVar2;
  UHierarchicalInstancedStaticMeshComponent *this_00;
  UInstancedStaticMeshComponent *pUVar3;
  code *pcVar4;
  double dVar5;
  TConsoleVariableData<int> *pTVar6;
  bool bVar7;
  int iVar8;
  FDebugRenderSceneProxy *pFVar9;
  UClass *pUVar10;
  double *pdVar11;
  FDebugRenderSceneProxy *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStackY_208 [32];
  TArray<FClusterNode,TSizedDefaultAllocator<32>_> local_1b8;
  TTransform<double> local_1a8;
  undefined1 local_148 [64];
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  FColor_u_0 FStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  ulonglong local_58;
  
  pTVar6 = CVarISMPoolDebugDraw.Ref;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  bVar7 = IsInParallelGameThread();
  pFVar12 = (FDebugRenderSceneProxy *)0x0;
  if (!bVar7) {
    bVar7 = IsInGameThread();
    pFVar9 = (FDebugRenderSceneProxy *)&DAT_00000004;
    if (!bVar7) goto LAB_14633da55;
  }
  pFVar9 = pFVar12;
LAB_14633da55:
  if (((this->SelectedComponent).field0_0x0.DebugPtr == (UInstancedStaticMeshComponent *)0x0) ||
     ((this->bShowBounds == false &&
      (*(int *)((longlong)pTVar6->ShadowedValue + (longlong)&pFVar9->_padding_) == 0)))) {
    pFVar12 = (FDebugRenderSceneProxy *)0x0;
  }
  else {
    pFVar9 = ::operator_new(0x3a0);
    if (pFVar9 != (FDebugRenderSceneProxy *)0x0) {
      FDebugRenderSceneProxy::FDebugRenderSceneProxy(pFVar9,(UPrimitiveComponent *)this);
      pFVar9->DrawType = SolidAndWireMeshes;
      pFVar9->_padding_ = (longlong)&___7FISMPoolDebugDrawSceneProxy__6B_;
      pFVar12 = pFVar9;
    }
    if ((this->SelectedComponent).field0_0x0.DebugPtr != (UInstancedStaticMeshComponent *)0x0) {
      pUVar10 = Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
      bVar7 = FObjectPtr::IsA((FObjectPtr *)&this->SelectedComponent,pUVar10);
      if ((bVar7) &&
         (this_00 = (UHierarchicalInstancedStaticMeshComponent *)
                    (this->SelectedComponent).field0_0x0.DebugPtr,
         this_00 != (UHierarchicalInstancedStaticMeshComponent *)0x0)) {
        local_1a8.Rotation.XY.m128d_f64[0] = *(double *)&this_00->field_0x1f0;
        local_1a8.Rotation.XY.m128d_f64[1] = *(double *)&this_00->field_0x1f8;
        local_1a8.Rotation.ZW.m128d_f64[0] = *(double *)&this_00->field_0x200;
        local_1a8.Rotation.ZW.m128d_f64[1] = *(double *)&this_00->field_0x208;
        local_1a8.Translation.XY.m128d_f64[0] = *(double *)&this_00->field_0x210;
        local_1a8.Translation.XY.m128d_f64[1] = *(double *)&this_00->field_0x218;
        local_1a8.Translation.ZW.m128d_f64[0] = *(double *)&this_00->field_0x220;
        local_1a8.Translation.ZW.m128d_f64[1] = *(double *)&this_00->field_0x228;
        local_1a8.Scale3D.XY.m128d_f64[0] = *(double *)&this_00->field_0x230;
        local_1a8.Scale3D.XY.m128d_f64[1] = *(double *)&this_00->field_0x238;
        local_1a8.Scale3D.ZW.m128d_f64[0] = *(double *)&this_00->field_0x240;
        local_1a8.Scale3D.ZW.m128d_f64[1] = *(double *)&this_00->field_0x248;
        local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1b8.ArrayNum = 0;
        local_1b8.ArrayMax = 0;
        UHierarchicalInstancedStaticMeshComponent::GetTree(this_00,&local_1b8);
        DrawBoxAndChildren(pFVar12,&local_1a8,&local_1b8,0,0);
        if (local_1b8.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return pFVar12;
        }
        FMemory::Free(local_1b8.AllocatorInstance.Data);
        return pFVar12;
      }
    }
    pUVar3 = (this->SelectedComponent).field0_0x0.DebugPtr;
    if (pUVar3 != (UInstancedStaticMeshComponent *)0x0) {
      pdVar11 = (double *)
                (**(code **)(pUVar3->_padding_ + 0x598))
                          (pUVar3,local_148,&UE::Math::TTransform<double>::Identity);
      local_c8 = pUVar3->_padding_;
      lStack_c0 = pUVar3->_padding_;
      pTVar2 = &pFVar12->Boxes;
      pFVar13 = (pTVar2->AllocatorInstance).Data;
      local_f8 = pdVar11[2] - pdVar11[5];
      dVar5 = pdVar11[5] + pdVar11[2];
      local_108 = *pdVar11 - pdVar11[3];
      dStack_f0 = pdVar11[3] + *pdVar11;
      local_a8 = pUVar3->_padding_;
      lStack_a0 = pUVar3->_padding_;
      dStack_100 = pdVar11[1] - pdVar11[4];
      local_1a8.Translation.ZW.m128d_f64[0] =
           (double)CONCAT71(local_1a8.Translation.ZW.m128d_f64[0]._1_7_,1);
      local_d8 = local_1a8.Translation.ZW.m128d_f64[0];
      local_b8 = pUVar3->_padding_;
      lStack_b0 = pUVar3->_padding_;
      local_98 = pUVar3->_padding_;
      lStack_90 = pUVar3->_padding_;
      FStack_d0 = FColorList::CornFlowerBlue.field0_0x0;
      local_88 = pUVar3->_padding_;
      lStack_80 = pUVar3->_padding_;
      local_78 = pUVar3->_padding_;
      lStack_70 = pUVar3->_padding_;
      local_e8._8_4_ = SUB84(dVar5,0);
      local_e8._0_8_ = pdVar11[4] + pdVar11[1];
      local_e8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      uStack_cc = 0;
      local_68 = 3;
      if (((pFVar13 <= (FScriptContainerElement *)&local_108) &&
          ((FScriptContainerElement *)&local_108 <
           pFVar13 + (longlong)(pFVar12->Boxes).ArrayMax * 0xb0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar12 = (FDebugRenderSceneProxy *)(*pcVar4)();
        return pFVar12;
      }
      iVar8 = (pFVar12->Boxes).ArrayNum;
      piVar1 = &(pFVar12->Boxes).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10b0,&pTVar2->AllocatorInstance,piVar1);
      }
      (pFVar12->Boxes).ArrayNum = iVar8 + 1;
      pFVar13 = (pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0xb0;
      *(double *)pFVar13 = local_108;
      *(double *)(pFVar13 + 8) = dStack_100;
      *(double *)(pFVar13 + 0x10) = local_f8;
      *(double *)(pFVar13 + 0x18) = dStack_f0;
      *(undefined8 *)(pFVar13 + 0x20) = local_e8._0_8_;
      *(undefined8 *)(pFVar13 + 0x28) = local_e8._8_8_;
      *(double *)(pFVar13 + 0x30) = local_d8;
      *(ulonglong *)(pFVar13 + 0x38) = CONCAT44(uStack_cc,FStack_d0.Bits);
      *(longlong *)(pFVar13 + 0x40) = local_c8;
      *(longlong *)(pFVar13 + 0x48) = lStack_c0;
      *(longlong *)(pFVar13 + 0x50) = local_b8;
      *(longlong *)(pFVar13 + 0x58) = lStack_b0;
      *(longlong *)(pFVar13 + 0x60) = local_a8;
      *(longlong *)(pFVar13 + 0x68) = lStack_a0;
      *(longlong *)(pFVar13 + 0x70) = local_98;
      *(longlong *)(pFVar13 + 0x78) = lStack_90;
      *(longlong *)(pFVar13 + 0x80) = local_88;
      *(longlong *)(pFVar13 + 0x88) = lStack_80;
      *(longlong *)(pFVar13 + 0x90) = local_78;
      *(longlong *)(pFVar13 + 0x98) = lStack_70;
      *(ulonglong *)(pFVar13 + 0xa0) = CONCAT44(uStack_64,local_68);
      *(undefined8 *)(pFVar13 + 0xa8) = uStack_60;
    }
  }
  return pFVar12;
}

// EndPlay @ 14633e970

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UISMPoolDebugDrawComponent::EndPlay(UISMPoolDebugDrawComponent *this,Type param_1)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulong64 *puVar5;
  uint uVar6;
  longlong lVar7;
  ForAnyElementType *this_00;
  FDestructionSentinel local_28;
  
  USceneComponent::EndPlay((USceneComponent *)this,param_1);
  uVar1 = (this->OnScreenMessagesHandle).ID;
  if (uVar1 != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FCoreDelegates::OnGetOnScreenMessages,(FWriteAccessScope *)&local_28);
    uVar6 = 0;
    if (0 < (int)FCoreDelegates::OnGetOnScreenMessages._16_4_) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (int)FCoreDelegates::OnGetOnScreenMessages._16_4_) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = (ForAnyElementType *)(FCoreDelegates::OnGetOnScreenMessages._8_8_ + lVar7);
        if (((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0))
           && (puVar5 = (ulong64 *)(**(code **)(*(longlong *)this_00->Data + 0x40))(),
              *puVar5 == uVar1)) {
          if ((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0))
          {
            (*(code *)**(undefined8 **)this_00->Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_00,0,0,0x10);
            *(undefined4 *)&this_00[1].Data = 0;
          }
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &FCoreDelegates::OnGetOnScreenMessages,false);
          break;
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x10;
      } while ((int)uVar6 < (int)FCoreDelegates::OnGetOnScreenMessages._16_4_);
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
  }
  return;
}

// GetDebugDrawDelegateHelper @ 14633ef20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FDebugDrawDelegateHelper * __thiscall
UISMPoolDebugDrawComponent::GetDebugDrawDelegateHelper(UISMPoolDebugDrawComponent *this)

{
  return &this->DebugDrawDelegateHelper;
}

// GetOnScreenMessages @ 14633f210

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UISMPoolDebugDrawComponent::GetOnScreenMessages
          (UISMPoolDebugDrawComponent *this,
          TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
          *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  UStaticMesh *this_00;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  UClass *pUVar10;
  FString *pFVar11;
  uint uVar12;
  wchar_t *pwVar13;
  int iVar14;
  ForAnyElementType FVar15;
  longlong *plVar16;
  int iVar17;
  ulonglong uVar18;
  FIdentityFunctor local_res8;
  uint local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_2b8;
  undefined1 local_2b7;
  undefined1 local_2b6;
  undefined1 local_2b5;
  undefined1 local_2b4;
  undefined1 local_2b3;
  undefined1 local_2b2;
  undefined1 local_2b1;
  int local_2b0;
  ForAnyElementType local_2a8;
  undefined8 local_2a0;
  int local_298;
  undefined1 local_294 [4];
  int local_290;
  int local_28c;
  undefined1 local_288 [8];
  undefined1 local_280 [8];
  undefined1 local_278 [8];
  undefined1 local_270 [8];
  TPairInitializer<FCoreDelegates::EOnScreenMessageSeverity_&&,FText_&&> local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  undefined1 *local_228;
  FText *local_220;
  undefined1 *local_218;
  FText *local_210;
  FString local_208;
  undefined1 *local_1f8;
  FText *local_1f0;
  FString local_1e8;
  undefined1 *local_1d8;
  FText *local_1d0;
  FString local_1c8;
  undefined1 *local_1b8;
  FText *local_1b0;
  FString local_1a8;
  undefined1 *local_198;
  FText *local_190;
  FString local_188;
  undefined1 *local_178;
  FText *local_170;
  undefined1 *local_168;
  FText *local_160;
  undefined1 *local_158;
  FText *local_150;
  FText local_148;
  FString local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  FString local_c8;
  FText local_b8;
  FText local_a8;
  TVector<double> local_98;
  TVector<double> local_80 [2];
  
  pTVar5 = CVarISMPoolStats.Ref;
  bVar6 = IsInParallelGameThread();
  uVar18 = 0;
  if (!bVar6) {
    bVar6 = IsInGameThread();
    uVar9 = 4;
    if (!bVar6) goto LAB_14633f256;
  }
  uVar9 = uVar18;
LAB_14633f256:
  local_2b0 = *(int *)((longlong)pTVar5->ShadowedValue + uVar9);
  if (((this->bShowStats != false) || (this->bShowGlobalStats != false)) || (local_2b0 != 0)) {
    if (((this->bShowGlobalStats != false) || (local_2b0 != 0)) &&
       (lVar1 = *(longlong *)&this->field_0x20, lVar1 != 0)) {
      pUVar10 = AISMPoolActor::StaticClass();
      iVar14 = (int)pUVar10->_padding_;
      if (((iVar14 <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)iVar14 * 8) ==
           &pUVar10->_padding_)) && (lVar1 = *(longlong *)(lVar1 + 0x2c0), lVar1 != 0)) {
        uVar12 = *(uint *)(lVar1 + 0x2b0);
        local_290 = 0;
        local_2a8.Data = (FScriptContainerElement *)0x0;
        local_2a0 = 0;
        if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
        }
        if (0 < (int)uVar12) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar12,&local_2a8,0,(int *)((longlong)&local_2a0 + 4));
        }
        lVar2 = *(longlong *)(lVar1 + 0x2a8);
        iVar14 = *(int *)(lVar1 + 0x2b0);
        plVar16 = (longlong *)(lVar2 + 0x78);
        uVar9 = uVar18;
        while( true ) {
          if (*(int *)(lVar1 + 0x2b0) != iVar14) {
            local_res18[0] = local_res18[0] & 0xffffff00;
            `TCheckedPointerIterator<FISMPoolISM_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res18);
          }
          iVar7 = (int)uVar18;
          if (plVar16 + -0xf == (longlong *)((longlong)iVar14 * 0xb8 + lVar2)) break;
          lVar3 = *plVar16;
          if (lVar3 == 0) {
            plVar16 = plVar16 + 0x17;
          }
          else {
            pUVar10 = Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
            lVar3 = *(longlong *)(lVar3 + 0x10);
            iVar17 = (int)pUVar10->_padding_;
            if ((*(int *)(lVar3 + 0x38) < iVar17) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar17 * 8) !=
                &pUVar10->_padding_)) {
              uVar12 = 0;
            }
            else {
              uVar12 = 1;
            }
            local_290 = local_290 + (uVar12 ^ 1);
            uVar18 = (ulonglong)(iVar7 + uVar12);
            local_298 = (**(code **)(*(longlong *)*plVar16 + 0xc68))();
            uVar9 = (ulonglong)(uint)((int)uVar9 + local_298);
            if (((local_2a8.Data <= (FScriptContainerElement *)&local_298) &&
                ((FScriptContainerElement *)&local_298 <
                 local_2a8.Data + (longlong)local_2a0._4_4_ * 4)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar7 = (int)local_2a0;
            if ((int)local_2a0 == local_2a0._4_4_) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_2a8,(int *)((longlong)&local_2a0 + 4));
            }
            plVar16 = plVar16 + 0x17;
            local_2a0 = CONCAT44(local_2a0._4_4_,iVar7 + 1);
            *(int *)(local_2a8.Data + (longlong)iVar7 * 4) = local_298;
          }
        }
        local_28c = iVar7;
        if (0 < (int)uVar9) {
          pFVar11 = UObjectBaseUtility::GetPathName
                              (*(UObjectBaseUtility **)&this->field_0xa8,&local_138,(UObject *)0x0);
          if ((pFVar11->Data).ArrayNum == 0) {
            pwVar13 = L"";
          }
          else {
            pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
          }
          local_220 = FText::FromString(&local_148,pwVar13);
          local_228 = local_res20;
          local_res20[0] = 1;
          TSet<TTuple<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<enum_FCoreDelegates::EOnScreenMessageSeverity_&&,FText_&&>_>
                    (param_1,(TPairInitializer<FCoreDelegates::EOnScreenMessageSeverity_&&,FText_&&>
                              *)local_288,(bool *)&local_228);
          if (local_148.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
          }
          if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_208,L"Num ISMS %d");
          local_210 = FText::FromString(&local_128,&local_208);
          local_218 = &local_2b8;
          local_2b8 = 0;
          TSet<TTuple<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<enum_FCoreDelegates::EOnScreenMessageSeverity_&&,FText_&&>_>
                    (param_1,(TPairInitializer<FCoreDelegates::EOnScreenMessageSeverity_&&,FText_&&>
                              *)(local_288 + 4),(bool *)&local_218);
          if (local_128.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
          }
          if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_208.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_1e8,L"Num HISMS %d");
          local_1f0 = FText::FromString(&local_118,&local_1e8);
          local_1f8 = &local_2b7;
          local_2b7 = 0;
          TSet<TTuple<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<enum_FCoreDelegates::EOnScreenMessageSeverity_&&,FText_&&>_>
                    (param_1,(TPairInitializer<FCoreDelegates::EOnScreenMessageSeverity_&&,FText_&&>
                              *)local_280,(bool *)&local_1f8);
          if (local_118.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
          }
          if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_1c8,L"Num Instances %d");
          local_1d0 = FText::FromString(&local_108,&local_1c8);
          local_1d8 = &local_2b6;
          local_2b6 = 0;
          TSet<TTuple<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<enum_FCoreDelegates::EOnScreenMessageSeverity_&&,FText_&&>_>
                    (param_1,(TPairInitializer<FCoreDelegates::EOnScreenMessageSeverity_&&,FText_&&>
                              *)(local_280 + 4),(bool *)&local_1d8);
          if (local_108.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
          }
          if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_1a8,L"Average Instances Per ISM %f");
          local_1b0 = FText::FromString(&local_f8,&local_1a8);
          local_1b8 = &local_2b5;
          local_2b5 = 0;
          TSet<TTuple<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<enum_FCoreDelegates::EOnScreenMessageSeverity_&&,FText_&&>_>
                    (param_1,(TPairInitializer<FCoreDelegates::EOnScreenMessageSeverity_&&,FText_&&>
                              *)local_278,(bool *)&local_1b8);
          if (local_f8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
          }
          if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
          }
          local_res8 = SUB81(this,0);
          AlgoImpl::
          IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
                    ((int *)local_2a8.Data,(int)local_2a0,local_res8,(TLess<void> *)local_294);
          iVar14 = 10;
          iVar7 = 1;
          do {
            uVar8 = ((int)local_2a0 * iVar7) / 10;
            uVar12 = (int)local_2a0 - 1U;
            if ((int)uVar8 < (int)((int)local_2a0 - 1U)) {
              uVar12 = uVar8;
            }
            uVar8 = 0;
            if ((int)uVar12 < (int)local_2a0) {
              uVar8 = ~uVar12 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            ::FString::PrintfImpl(&local_188,L"Num Instances at %d percentile: %d");
            local_190 = FText::FromString(&local_e8,&local_188);
            local_198 = &local_2b4;
            local_2b4 = 0;
            TSet<TTuple<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<enum_FCoreDelegates::EOnScreenMessageSeverity_&&,FText_&&>_>
                      (param_1,(TPairInitializer<FCoreDelegates::EOnScreenMessageSeverity_&&,FText_&&>
                                *)(local_278 + 4),(bool *)&local_198);
            if (local_e8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
            }
            if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_188.Data.AllocatorInstance.Data);
            }
            iVar14 = iVar14 + 10;
            iVar7 = iVar7 + 1;
          } while (iVar14 < 0x6e);
        }
        if (local_2a8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a8.Data);
        }
      }
    }
    iVar14 = 0;
    if (((this->bShowStats != false) || (local_2b0 != 0)) &&
       ((this->SelectedComponent).field0_0x0.DebugPtr != (UInstancedStaticMeshComponent *)0x0)) {
      Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
      UStaticMeshComponent::GetLocalBounds
                ((UStaticMeshComponent *)(this->SelectedComponent).field0_0x0.DebugPtr,local_80,
                 &local_98);
      (**(code **)(((this->SelectedComponent).field0_0x0.DebugPtr)->_padding_ + 0xc68))();
      local_res18[0] =
           (**(code **)(((this->SelectedComponent).field0_0x0.DebugPtr)->_padding_ + 0x810))();
      this_00 = (UStaticMesh *)((this->SelectedComponent).field0_0x0.DebugPtr)->_padding_;
      if (this_00 != (UStaticMesh *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        iVar14 = UStaticMesh::GetNumLODs(this_00);
      }
      ::FString::PrintfImpl
                (&local_238,
                 L"Type=%s   Count=%d   Bounds=(%f., %f., %f.)   CullDistance=(%d - %d)   NumLods= %d    NumMaterials=%d   CustomDataSize=%d"
                );
      iVar7 = 0;
      if (0 < iVar14) {
        do {
          UStaticMesh::GetNumVertices(this_00,iVar7);
          UStaticMesh::GetNumTriangles(this_00,iVar7);
          ::FString::PrintfImpl(&local_258,L"\nLod %d: Vertices=%d, Triangles=%d.");
          if (local_258.Data.ArrayNum == 0) {
            iVar17 = 0;
          }
          else {
            iVar17 = local_258.Data.ArrayNum + -1;
          }
          ::FString::AppendChars(&local_238,(wchar_t *)local_258.Data.AllocatorInstance.Data,iVar17)
          ;
          if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_258.Data.AllocatorInstance.Data);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar14);
      }
      pFVar11 = UObjectBaseUtility::GetPathName
                          (*(UObjectBaseUtility **)&this->field_0xa8,&local_c8,(UObject *)0x0);
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      local_170 = FText::FromString(&local_d8,pwVar13);
      local_178 = &local_2b3;
      local_2b3 = 1;
      TSet<TTuple<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_FCoreDelegates::EOnScreenMessageSeverity_&&,FText_&&>_>
                (param_1,(TPairInitializer<FCoreDelegates::EOnScreenMessageSeverity_&&,FText_&&> *)
                         local_270,(bool *)&local_178);
      if (local_d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      local_268._4_8_ = ((this->SelectedComponent).field0_0x0.DebugPtr)->_padding_;
      ::FName::ToString((FName *)((longlong)&local_268.Key + 4),&local_248);
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_248.Data.ArrayNum != 0) {
        FVar15.Data = local_248.Data.AllocatorInstance.Data;
      }
      local_160 = FText::FromString(&local_b8,(wchar_t *)FVar15.Data);
      local_168 = &local_2b2;
      local_2b2 = 1;
      TSet<TTuple<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_FCoreDelegates::EOnScreenMessageSeverity_&&,FText_&&>_>
                (param_1,(TPairInitializer<FCoreDelegates::EOnScreenMessageSeverity_&&,FText_&&> *)
                         (local_270 + 4),(bool *)&local_168);
      if (local_b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
      }
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      local_150 = FText::FromString(&local_a8,&local_238);
      local_158 = &local_2b1;
      local_2b1 = 0;
      TSet<TTuple<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_FCoreDelegates::EOnScreenMessageSeverity_&&,FText_&&>_>
                (param_1,&local_268,(bool *)&local_158);
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
      if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// GetPrivateStaticClass @ 1463400b0

UClass * __cdecl UISMPoolDebugDrawComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UISMPoolDebugDrawComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ISMPool",L"ISMPoolDebugDrawComponent",
               &Z_Registration_Info_UClass_UISMPoolDebugDrawComponent.InnerSingleton,
               StaticRegisterNativesUISMPoolDebugDrawComponent,0x640,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UISMPoolDebugDrawComponent>,
               InternalVTableHelperCtorCaller<UISMPoolDebugDrawComponent>,local_res8,
               UDebugDrawComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UISMPoolDebugDrawComponent.InnerSingleton;
}

// StaticRegisterNativesUISMPoolDebugDrawComponent @ 146342940

void __cdecl UISMPoolDebugDrawComponent::StaticRegisterNativesUISMPoolDebugDrawComponent(void)

{
  return;
}

// TickComponent @ 146342bf0

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

void __thiscall
UISMPoolDebugDrawComponent::TickComponent
          (UISMPoolDebugDrawComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  int iVar1;
  AActor *pAVar2;
  longlong lVar3;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  TConsoleVariableData<int> *pTVar6;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  UInstancedStaticMeshComponent *pUVar11;
  UWorld *this_00;
  UInstancedStaticMeshComponent *pUVar12;
  FName *pFVar13;
  UObject *pUVar14;
  UInstancedStaticMeshComponent *pUVar15;
  UClass *pUVar16;
  UInstancedStaticMeshComponent *pUVar17;
  undefined1 auStackY_318 [32];
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_2b8;
  TStatId local_2a8 [3];
  undefined8 local_290;
  undefined4 uStack_288;
  undefined1 uStack_284;
  undefined2 uStack_283;
  undefined1 uStack_281;
  TVector<double>_u_0 local_280;
  TVector<double>_u_0 local_268;
  FName local_250;
  FName local_248;
  double local_240;
  double dStack_238;
  double local_230;
  TVector<double>_u_0 local_228;
  TRotator<double> local_210;
  FHitResult local_1f8;
  FCollisionQueryParams local_f8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_318;
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  pTVar5 = CVarISMPoolStats.Ref;
  pUVar15 = (UInstancedStaticMeshComponent *)0x0;
  pUVar17 = (UInstancedStaticMeshComponent *)0x0;
  bVar8 = IsInParallelGameThread();
  if (!bVar8) {
    bVar8 = IsInGameThread();
    pUVar11 = (UInstancedStaticMeshComponent *)0x4;
    if (!bVar8) goto LAB_146342c5f;
  }
  pUVar11 = pUVar15;
LAB_146342c5f:
  pTVar6 = CVarISMPoolDebugDraw.Ref;
  iVar1 = *(int *)((longlong)pTVar5->ShadowedValue + (longlong)&pUVar11->_padding_);
  bVar8 = IsInParallelGameThread();
  if ((bVar8) || (bVar8 = IsInGameThread(), pUVar11 = (UInstancedStaticMeshComponent *)0x4, bVar8))
  {
    pUVar11 = pUVar15;
  }
  pUVar12 = pUVar15;
  if (((((this->bShowStats != false) || (iVar1 != 0)) || (this->bShowBounds != false)) ||
      (*(int *)((longlong)pTVar6->ShadowedValue + (longlong)pUVar11) != 0)) &&
     ((this_00 = *(UWorld **)&this->field_0xb0, this_00 != (UWorld *)0x0 ||
      (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      this_00 != (UWorld *)0x0)))) {
    UWorld::GetPlayerControllerIterator(this_00,&local_2b8);
    pUVar11 = pUVar15;
    for (; (iVar1 = local_2b8.Index, pTVar7 = local_2b8.Container, -1 < local_2b8.Index &&
           (local_2b8.Index < (local_2b8.Container)->ArrayNum));
        local_2b8.Index = local_2b8.Index + 1) {
      uVar10 = 0;
      if (local_2b8.Index < (local_2b8.Container)->ArrayNum) {
        uVar10 = (uint)~local_2b8.Index >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar12 = (UInstancedStaticMeshComponent *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    ((pTVar7->AllocatorInstance).Data + (longlong)iVar1 * 8));
      if ((pUVar12 != (UInstancedStaticMeshComponent *)0x0) &&
         (cVar9 = (**(code **)(pUVar12->_padding_ + 0x7f0))(pUVar12), cVar9 != '\0')) {
        pUVar11 = pUVar12;
      }
    }
    pUVar12 = pUVar17;
    if (pUVar11 != (UInstancedStaticMeshComponent *)0x0) {
      (**(code **)(pUVar11->_padding_ + 0x840))(pUVar11,&local_240,&local_210);
      UE::Math::TRotator<double>::Vector(&local_210,(TVector<double> *)&local_280._s_0);
      local_228._s_0.X = local_240;
      local_228._s_0.Y = dStack_238;
      local_268._s_0.X = local_280._s_0.X * __real_40d3880000000000 + local_240;
      local_228._s_0.Z = local_230;
      local_268._s_0.Y = local_280._s_0.Y * __real_40d3880000000000 + dStack_238;
      local_268._s_0.Z = local_280._s_0.Z * __real_40d3880000000000 + local_230;
      memset(&local_1f8,0,0x100);
      pAVar2 = (AActor *)pUVar11->_padding_;
      local_1f8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
      local_1f8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
      local_1f8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
      local_1f8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
      uStack_283 = 0;
      uStack_281 = 0;
      local_290 = 0;
      uStack_288 = 0xffffffff;
      uStack_284 = 0;
      local_1f8.HitObjectHandle.InstanceIndex = -1;
      local_1f8.HitObjectHandle.ResolutionStatus = Invalid;
      local_1f8.HitObjectHandle._29_3_ = 0;
      local_1f8.Time = 1.0;
      local_1f8.MyItem = -1;
      local_1f8.HitObjectHandle.ManagerInterface.InterfaceInstance =
           (IActorInstanceManagerInterface *)0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar2 != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pAVar2);
      }
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        StatPtr_ChaosDebugVisibilityTrace =
             (FThreadSafeStaticStat<_public:___cdecl__protected:_virtual_void___cdecl_UISMPoolDebugDrawComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_19_::<lambda_2>::operator()(void)const_::_2_::FStat_ChaosDebugVisibilityTrace>
              )0x0;
        pFVar13 = ::FName::FName(&local_250,"ChaosDebugVisibilityTrace");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_ChaosDebugVisibilityTrace,*pFVar13,
                   L"ChaosDebugVisibilityTrace","STATGROUP_CollisionTags","STATCAT_Advanced",
                   L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
        _Init_thread_footer(&::_TSS0);
      }
      local_2a8[0].StatIdPtr = (TStatIdData *)StatPtr_ChaosDebugVisibilityTrace;
      if (StatPtr_ChaosDebugVisibilityTrace ==
          (FThreadSafeStaticStat<_public:___cdecl__protected:_virtual_void___cdecl_UISMPoolDebugDrawComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_19_::<lambda_2>::operator()(void)const_::_2_::FStat_ChaosDebugVisibilityTrace>
           )0x0) {
        pFVar13 = ::FName::FName(&local_248,"ChaosDebugVisibilityTrace");
        local_2a8[0].StatIdPtr =
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_ChaosDebugVisibilityTrace,*pFVar13,
                        L"ChaosDebugVisibilityTrace","STATGROUP_CollisionTags","STATCAT_Advanced",
                        L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
      }
      if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FName::FName(&::StaticName,"ChaosDebugVisibilityTrace");
        _Init_thread_footer(&::_TSS0);
      }
      FCollisionQueryParams::FCollisionQueryParams(&local_f8,::StaticName,local_2a8,true,pAVar2);
      bVar8 = UWorld::LineTraceSingleByChannel
                        (this_00,&local_1f8,(TVector<double> *)&local_228._s_0,
                         (TVector<double> *)&local_268._s_0,ECC_Visibility,&local_f8,
                         &FCollisionResponseParams::DefaultResponseParam);
      pUVar12 = pUVar15;
      if (((bVar8) &&
          (pUVar14 = FWeakObjectPtr::Get(&local_1f8.Component.WeakPtr), pUVar12 = pUVar17,
          pUVar14 != (UObject *)0x0)) &&
         (pUVar15 = (UInstancedStaticMeshComponent *)
                    FWeakObjectPtr::Get(&local_1f8.Component.WeakPtr),
         pUVar15 != (UInstancedStaticMeshComponent *)0x0)) {
        pUVar16 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
        iVar1 = (int)pUVar16->_padding_;
        if ((iVar1 <= *(int *)(pUVar15->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar16->_padding_)) {
          pUVar12 = pUVar15;
        }
      }
      if (local_f8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_f8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
      }
      if (local_f8.IgnoreComponents.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_f8.IgnoreComponents.AllocatorInstance.SecondaryData);
      }
      if ((pUVar12 != (UInstancedStaticMeshComponent *)0x0) &&
         (pUVar12->_padding_ != *(longlong *)&this->field_0x20)) {
        pUVar12 = (UInstancedStaticMeshComponent *)0x0;
      }
    }
  }
  pUVar17 = (this->SelectedComponent).field0_0x0.DebugPtr;
  if (pUVar17 == (UInstancedStaticMeshComponent *)0x0) {
    bVar8 = pUVar12 == (UInstancedStaticMeshComponent *)0x0;
  }
  else {
    bVar8 = pUVar17 == pUVar12;
  }
  if (!bVar8) {
    if ((pUVar17 == (UInstancedStaticMeshComponent *)0x0) || (this->SelectTimer < 0.0)) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar12 != (UInstancedStaticMeshComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar12);
      }
      (this->SelectedComponent).field0_0x0.DebugPtr = pUVar12;
      this->SelectTimer = 0.3;
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    }
    else {
      this->SelectTimer = this->SelectTimer - param_1;
    }
  }
  return;
}

// UpdateAllTickEnabled @ 146343e50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl UISMPoolDebugDrawComponent::UpdateAllTickEnabled(void)

{
  code *pcVar1;
  bool bVar2;
  EInternalObjectFlags EVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  TObjectIterator<UISMPoolDebugDrawComponent> local_28;
  
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar5 = StaticClass();
  GetObjectsOfClass(pUVar5,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar3 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UISMPoolDebugDrawComponent>::Advance(&local_28);
    lVar6 = (longlong)local_28.Index;
    if (local_28.Index < 0) break;
    if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
    uVar4 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar4 = (uint)~local_28.Index >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    UpdateTickEnabled(*(UISMPoolDebugDrawComponent **)
                       (local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8));
  }
  if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
  }
  return;
}

// UpdateTickEnabled @ 146343f30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UISMPoolDebugDrawComponent::UpdateTickEnabled(UISMPoolDebugDrawComponent *this)

{
  int iVar1;
  TConsoleVariableData<int> *pTVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  
  pTVar2 = CVarISMPoolStats.Ref;
  bVar4 = IsInParallelGameThread();
  lVar6 = 4;
  if (bVar4) {
LAB_146343f69:
    lVar5 = 0;
  }
  else {
    bVar4 = IsInGameThread();
    if (bVar4) goto LAB_146343f69;
    lVar5 = 4;
  }
  pTVar3 = CVarISMPoolDebugDraw.Ref;
  iVar1 = *(int *)((longlong)pTVar2->ShadowedValue + lVar5);
  bVar4 = IsInParallelGameThread();
  if (!bVar4) {
    bVar4 = IsInGameThread();
    if (!bVar4) goto LAB_146343f89;
  }
  lVar6 = 0;
LAB_146343f89:
  if ((((this->bShowStats == false) && (iVar1 == 0)) && (this->bShowBounds == false)) &&
     (*(int *)((longlong)pTVar3->ShadowedValue + lVar6) == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->field_0x38,bVar4);
  return;
}

