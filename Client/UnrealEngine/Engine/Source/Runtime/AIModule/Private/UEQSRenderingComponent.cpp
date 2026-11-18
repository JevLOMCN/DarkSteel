// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 11

// StaticClass @ 146f0fdd0

UClass * __cdecl UEQSRenderingComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEQSRenderingComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EQSRenderingComponent",
               &Z_Registration_Info_UClass_UEQSRenderingComponent.InnerSingleton,
               StaticRegisterNativesUEQSRenderingComponent,0x670,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UEQSRenderingComponent>,
               InternalVTableHelperCtorCaller<UEQSRenderingComponent>,local_res8,
               UDebugDrawComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEQSRenderingComponent.InnerSingleton;
}

// UEQSRenderingComponent @ 146f2a160

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UEQSRenderingComponent * __thiscall
UEQSRenderingComponent::UEQSRenderingComponent(UEQSRenderingComponent *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UDebugDrawComponent::UDebugDrawComponent((UDebugDrawComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->DrawFlagName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  (this->DrawFlagName).Data.ArrayNum = 0;
  (this->DrawFlagName).Data.ArrayMax = 0;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  FDebugDrawDelegateHelper::FDebugDrawDelegateHelper
            ((FDebugDrawDelegateHelper *)&this->EQSRenderingDebugDrawDelegateHelper);
  (this->EQSRenderingDebugDrawDelegateHelper).bDrawOnlyWhenSelected = 0;
  (this->EQSRenderingDebugDrawDelegateHelper)._padding_ =
       (longlong)&___7FEQSRenderingDebugDrawDelegateHelper__6B_;
  (this->EQSRenderingDebugDrawDelegateHelper).ActorOwner = (AActor *)0x0;
  (this->EQSRenderingDebugDrawDelegateHelper).QueryDataSource =
       (IEQSQueryResultSourceInterface *)0x0;
  (this->DebugDataSolidSpheres).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugDataSolidSpheres).ArrayNum = 0;
  (this->DebugDataSolidSpheres).ArrayMax = 0;
  (this->DebugDataTexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugDataTexts).ArrayNum = 0;
  (this->DebugDataTexts).ArrayMax = 0;
  return this;
}

// UEQSRenderingComponent @ 146f2a230

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UEQSRenderingComponent * __thiscall
UEQSRenderingComponent::UEQSRenderingComponent
          (UEQSRenderingComponent *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UDebugDrawComponent::UDebugDrawComponent((UDebugDrawComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  ::FString::FString(&this->DrawFlagName,"GameplayDebug");
  this->bDrawOnlyWhenSelected = 1;
  FDebugDrawDelegateHelper::FDebugDrawDelegateHelper
            ((FDebugDrawDelegateHelper *)&this->EQSRenderingDebugDrawDelegateHelper);
  (this->EQSRenderingDebugDrawDelegateHelper)._padding_ =
       (longlong)&___7FEQSRenderingDebugDrawDelegateHelper__6B_;
  (this->EQSRenderingDebugDrawDelegateHelper).bDrawOnlyWhenSelected = 0;
  (this->EQSRenderingDebugDrawDelegateHelper).ActorOwner = (AActor *)0x0;
  (this->EQSRenderingDebugDrawDelegateHelper).QueryDataSource =
       (IEQSQueryResultSourceInterface *)0x0;
  (this->DebugDataSolidSpheres).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugDataSolidSpheres).ArrayNum = 0;
  (this->DebugDataSolidSpheres).ArrayMax = 0;
  (this->DebugDataTexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugDataTexts).ArrayNum = 0;
  (this->DebugDataTexts).ArrayMax = 0;
  return this;
}

// ~UEQSRenderingComponent @ 146f2e730

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UEQSRenderingComponent::~UEQSRenderingComponent(UEQSRenderingComponent *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  DestructItems<FDebugRenderSceneProxy::FText3d,int>
            ((FText3d *)(this->DebugDataTexts).AllocatorInstance.Data,
             (this->DebugDataTexts).ArrayNum);
  pFVar1 = (this->DebugDataTexts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DebugDataSolidSpheres).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->EQSRenderingDebugDrawDelegateHelper)._padding_ =
       (longlong)&___7FDebugDrawDelegateHelper__6B_;
  pvVar2 = (void *)(this->EQSRenderingDebugDrawDelegateHelper)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DestructItems<FDebugRenderSceneProxy::FText3d,int>
            ((FText3d *)(this->EQSRenderingDebugDrawDelegateHelper)._padding_,
             (int)(this->EQSRenderingDebugDrawDelegateHelper)._padding_);
  pvVar2 = (void *)(this->EQSRenderingDebugDrawDelegateHelper)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->EQSRenderingDebugDrawDelegateHelper)._padding_);
  pFVar1 = (this->DrawFlagName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDebugDrawComponent::~UDebugDrawComponent((UDebugDrawComponent *)this);
  return;
}

// CalcBounds @ 146f35a50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
UEQSRenderingComponent::CalcBounds
          (UEQSRenderingComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  FScriptContainerElement *pFVar1;
  UObjectBaseUtility *this_00;
  UObject *pUVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  TBoxSphereBounds<double,double> *pTVar14;
  UClass *pUVar15;
  longlong *plVar16;
  FEnvQueryResult *pFVar17;
  FEnvQueryInstance *pFVar18;
  int iVar19;
  TVector<double>_u_0 *pTVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  TArray<FDebugRenderSceneProxy::FSphere,TSizedDefaultAllocator<32>_> local_248;
  TArray<FDebugRenderSceneProxy::FText3d,TSizedDefaultAllocator<32>_> local_238;
  TArray<EQSDebug::FDebugHelper,TSizedDefaultAllocator<32>_> local_228;
  TVector<double>_u_0 local_218;
  double dStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  char local_1e0;
  TVector<double>_u_0 local_1d8;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  double local_1a8;
  TVector<double>_u_0 local_1a0;
  undefined1 local_188 [16];
  double local_178;
  double local_170;
  TVector<double>_u_0 local_168;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  TBoxSphereBounds<double,double> local_130;
  TMatrix<double> local_f8;
  
  local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.ArrayNum = 0;
  local_248.ArrayMax = 0;
  if ((&local_248 == &this->DebugDataSolidSpheres) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)this != (void*)&Source",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x96e,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    pTVar14 = (TBoxSphereBounds<double,double> *)(*pcVar3)();
    return pTVar14;
  }
  iVar19 = (this->DebugDataSolidSpheres).ArrayNum;
  if (iVar19 != 0) {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x28,8,iVar19,&local_248.AllocatorInstance,&local_248.ArrayNum,
                        &local_248.ArrayMax);
    memcpy(local_248.AllocatorInstance.Data + (longlong)iVar12 * 0x28,
           (this->DebugDataSolidSpheres).AllocatorInstance.Data,(longlong)iVar19 * 0x28);
  }
  this_00 = *(UObjectBaseUtility **)&this->field_0xa8;
  if (this_00 == (UObjectBaseUtility *)0x0) {
LAB_146f35b35:
    pUVar15 = Z_Construct_UClass_UEQSQueryResultSourceInterface_NoRegister();
    plVar16 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar15);
    if (plVar16 == (longlong *)0x0) goto LAB_146f35c50;
  }
  else {
    pUVar15 = Z_Construct_UClass_UEQSQueryResultSourceInterface_NoRegister();
    plVar16 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar15);
    if (plVar16 == (longlong *)0x0) goto LAB_146f35b35;
  }
  local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.ArrayNum = 0;
  local_228.ArrayMax = 0;
  local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.ArrayNum = 0;
  local_238.ArrayMax = 0;
  pUVar2 = *(UObject **)&this->field_0xa8;
  pFVar17 = (FEnvQueryResult *)(**(code **)(*plVar16 + 0x10))(plVar16);
  pFVar18 = (FEnvQueryInstance *)(**(code **)(*plVar16 + 0x18))(plVar16);
  bVar11 = (bool)(**(code **)(*plVar16 + 0x28))(plVar16);
  fVar24 = (float)(**(code **)(*plVar16 + 0x30))(plVar16);
  FEQSSceneProxy::CollectEQSData(pFVar17,pFVar18,fVar24,bVar11,&local_248,&local_238,&local_228);
  if (((pUVar2 != (UObject *)0x0) && (10000 < local_248.ArrayNum)) &&
     (FVisualLogger::bIsRecording != 0)) {
    FVisualLogger::CategorizedLogfImpl
              (pUVar2,(FName *)&LogEQS.field_0x4,Warning,
               L"EQS drawing: too much items to draw! Drawing first %d from set of %d");
  }
  DestructItems<FDebugRenderSceneProxy::FText3d,int>
            ((FText3d *)local_238.AllocatorInstance.Data,local_238.ArrayNum);
  if ((FText3d *)local_238.AllocatorInstance.Data != (FText3d *)0x0) {
    FMemory::Free(local_238.AllocatorInstance.Data);
  }
  DestructItems<EQSDebug::FDebugHelper,int>
            ((FDebugHelper *)local_228.AllocatorInstance.Data,local_228.ArrayNum);
  if ((FDebugHelper *)local_228.AllocatorInstance.Data != (FDebugHelper *)0x0) {
    FMemory::Free(local_228.AllocatorInstance.Data);
  }
LAB_146f35c50:
  uVar22 = 0;
  if (local_248.ArrayNum == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      BoundingSphere.Center.field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      BoundingSphere.Center.field0_0x0._s_0.Y =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      BoundingSphere.Center.field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      _Init_thread_footer(&::_TSS0);
    }
    local_1a0._s_0.X = BoundingSphere.Center.field0_0x0._s_0.X;
    local_1a0._s_0.Y = BoundingSphere.Center.field0_0x0._s_0.Y;
    local_170 = BoundingSphere.W;
    local_178 = BoundingSphere.W;
    local_188._8_4_ = SUB84(BoundingSphere.W,0);
    local_188._0_8_ = BoundingSphere.W;
    local_188._12_4_ = (int)((ulonglong)BoundingSphere.W >> 0x20);
    local_1a0._s_0.Z = BoundingSphere.Center.field0_0x0._s_0.Z;
    UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_f8);
    UE::Math::TBoxSphereBounds<double,double>::TransformBy
              ((TBoxSphereBounds<double,double> *)&local_1a0._s_0,__return_storage_ptr__,&local_f8);
  }
  else {
    local_1e0 = '\0';
    uVar23 = uVar22;
    iVar19 = local_248.ArrayNum;
    if (0 < local_248.ArrayNum) {
      do {
        uVar21 = (uint)uVar22;
        uVar13 = 0;
        if ((int)uVar21 < iVar19) {
          uVar13 = ~uVar21 >> 0x1f;
        }
        if (uVar13 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar3 = (code *)swi(3);
            pTVar14 = (TBoxSphereBounds<double,double> *)(*pcVar3)();
            return pTVar14;
          }
          iVar19 = local_248.ArrayNum;
        }
        dVar6 = (double)*(float *)(local_248.AllocatorInstance.Data + uVar23);
        uVar25 = SUB84(dVar6,0);
        uVar26 = (undefined4)((ulonglong)dVar6 >> 0x20);
        uVar13 = 0;
        if ((int)uVar21 < iVar19) {
          uVar13 = ~uVar21 >> 0x1f;
        }
        if (uVar13 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar3 = (code *)swi(3);
            pTVar14 = (TBoxSphereBounds<double,double> *)(*pcVar3)();
            return pTVar14;
          }
          iVar19 = local_248.ArrayNum;
        }
        local_1a8 = dVar6;
        auVar5._8_4_ = uVar25;
        auVar5._0_8_ = dVar6;
        auVar5._12_4_ = uVar26;
        dStack_1b8 = auVar5._8_8_;
        local_1d8._s_0.X = (double)*(undefined8 *)(local_248.AllocatorInstance.Data + uVar23 + 8);
        local_1d8._s_0.Y =
             (double)*(undefined8 *)(local_248.AllocatorInstance.Data + uVar23 + 8 + 8);
        pFVar1 = local_248.AllocatorInstance.Data + uVar23 + 0x18;
        local_1d8._16_4_ = *(undefined4 *)pFVar1;
        local_1d8._20_4_ = *(undefined4 *)(pFVar1 + 4);
        if (local_1e0 == '\0') {
          local_218._s_0.X = local_1d8._s_0.X;
          local_218._s_0.Y = local_1d8._s_0.Y;
          dStack_1c0 = dVar6;
          local_1e0 = '\x01';
          local_218._s_0.Z = *(double *)pFVar1;
          dStack_200 = dVar6;
          local_1e8 = dVar6;
          auVar4._8_4_ = uVar25;
          auVar4._0_8_ = dVar6;
          auVar4._12_4_ = uVar26;
          dStack_1b8 = dVar6;
          dStack_1b0 = auVar4._8_8_;
          local_1f8._8_4_ = uVar25;
          local_1f8._0_8_ = dVar6;
          local_1f8._12_4_ = uVar26;
        }
        else {
          dStack_1c0 = dVar6;
          dStack_1b0 = dVar6;
          pTVar14 = UE::Math::TBoxSphereBounds<double,double>::operator+
                              ((TBoxSphereBounds<double,double> *)&local_218._s_0,&local_130,
                               (TBoxSphereBounds<double,double> *)&local_1d8._s_0);
          dVar7 = (pTVar14->Origin).field0_0x0._s_0.X;
          dVar8 = (pTVar14->Origin).field0_0x0._s_0.Y;
          dVar9 = (pTVar14->Origin).field0_0x0._s_0.Z;
          dVar10 = (pTVar14->BoxExtent).field0_0x0._s_0.X;
          auVar5 = *(undefined1 (*) [16])((longlong)&(pTVar14->BoxExtent).field0_0x0 + 8);
          dVar6 = pTVar14->SphereRadius;
          if ((local_1e0 == '\0') &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar11)) {
            pcVar3 = (code *)swi(3);
            pTVar14 = (TBoxSphereBounds<double,double> *)(*pcVar3)();
            return pTVar14;
          }
          local_218._s_0.X = dVar7;
          local_218._s_0.Y = dVar8;
          local_218._s_0.Z = dVar9;
          dStack_200 = dVar10;
          local_1f8 = auVar5;
          local_1e8 = dVar6;
          iVar19 = local_248.ArrayNum;
        }
        uVar22 = (ulonglong)(uVar21 + 1);
        uVar23 = uVar23 + 0x28;
      } while ((int)(uVar21 + 1) < iVar19);
    }
    pTVar20 = &local_218;
    if (local_1e0 == '\0') {
      pTVar20 = &local_168;
    }
    local_138 = 0;
    local_168._s_0.X = 0.0;
    local_168._s_0.Y = 0.0;
    local_148 = 0;
    uStack_140 = 0;
    local_168._s_0.Z = 0.0;
    uStack_150 = 0;
    dVar6 = pTVar20->XYZ[1];
    dVar7 = pTVar20->XYZ[2];
    dVar8 = pTVar20->XYZ[3];
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (pTVar20->_s_0).X;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar6;
    dVar9 = pTVar20->XYZ[4];
    dVar10 = pTVar20->XYZ[5];
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar7;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar8;
    dVar6 = pTVar20->XYZ[6];
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar9;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar10;
    __return_storage_ptr__->SphereRadius = dVar6;
  }
  if (local_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ClearStoredDebugData @ 146f364b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UEQSRenderingComponent::ClearStoredDebugData(UEQSRenderingComponent *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  FText3d *pFVar4;
  
  (this->DebugDataSolidSpheres).ArrayNum = 0;
  if ((this->DebugDataSolidSpheres).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->DebugDataSolidSpheres).AllocatorInstance,0,
               &(this->DebugDataSolidSpheres).ArrayMax);
  }
  piVar1 = &(this->DebugDataTexts).ArrayMax;
  pFVar4 = (FText3d *)(this->DebugDataTexts).AllocatorInstance.Data;
  iVar3 = (this->DebugDataTexts).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FDebugRenderSceneProxy::FText3d,int>(pFVar4,iVar3);
    (this->DebugDataTexts).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&(this->DebugDataTexts).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FDebugRenderSceneProxy::FText3d,int>(pFVar4,iVar3);
    (this->DebugDataTexts).ArrayNum = 0;
  }
  plVar2 = &(this->EQSRenderingDebugDrawDelegateHelper)._padding_;
  piVar1 = (int *)((longlong)&(this->EQSRenderingDebugDrawDelegateHelper)._padding_ + 4);
  pFVar4 = (FText3d *)*plVar2;
  iVar3 = (int)(this->EQSRenderingDebugDrawDelegateHelper)._padding_;
  if (*piVar1 < 0) {
    DestructItems<FDebugRenderSceneProxy::FText3d,int>(pFVar4,iVar3);
    *(undefined4 *)&(this->EQSRenderingDebugDrawDelegateHelper)._padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,(ForAnyElementType *)plVar2,0,piVar1);
    }
  }
  else {
    DestructItems<FDebugRenderSceneProxy::FText3d,int>(pFVar4,iVar3);
    *(undefined4 *)&(this->EQSRenderingDebugDrawDelegateHelper)._padding_ = 0;
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// CreateDebugSceneProxy @ 146f3cbe0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FDebugRenderSceneProxy * __thiscall
UEQSRenderingComponent::CreateDebugSceneProxy(UEQSRenderingComponent *this)

{
  undefined4 uVar1;
  FEQSSceneProxy *pFVar2;
  
  pFVar2 = ::operator_new(0x400);
  if (pFVar2 == (FEQSSceneProxy *)0x0) {
    pFVar2 = (FEQSSceneProxy *)0x0;
  }
  else {
    pFVar2 = FEQSSceneProxy::FEQSSceneProxy
                       (pFVar2,(UPrimitiveComponent *)this,&this->DrawFlagName,
                        &this->DebugDataSolidSpheres,&this->DebugDataTexts);
  }
  (this->EQSRenderingDebugDrawDelegateHelper).ActorOwner = pFVar2->ActorOwner;
  (this->EQSRenderingDebugDrawDelegateHelper).QueryDataSource = pFVar2->QueryDataSource;
  uVar1 = *(undefined4 *)&(this->EQSRenderingDebugDrawDelegateHelper).field_0x78;
  *(uint *)&(this->EQSRenderingDebugDrawDelegateHelper).field_0x78 =
       (ZPULL(uVar1,0,1) ^ pFVar2->bDrawOnlyWhenSelected) & 1 ^ uVar1;
  return (FDebugRenderSceneProxy *)pFVar2;
}

// GetDebugDrawDelegateHelper @ 146f50c60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FDebugDrawDelegateHelper * __thiscall
UEQSRenderingComponent::GetDebugDrawDelegateHelper(UEQSRenderingComponent *this)

{
  return (FDebugDrawDelegateHelper *)&this->EQSRenderingDebugDrawDelegateHelper;
}

// GetPrivateStaticClass @ 146f57930

UClass * __cdecl UEQSRenderingComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEQSRenderingComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EQSRenderingComponent",
               &Z_Registration_Info_UClass_UEQSRenderingComponent.InnerSingleton,
               StaticRegisterNativesUEQSRenderingComponent,0x670,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UEQSRenderingComponent>,
               InternalVTableHelperCtorCaller<UEQSRenderingComponent>,local_res8,
               UDebugDrawComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEQSRenderingComponent.InnerSingleton;
}

// StaticRegisterNativesUEQSRenderingComponent @ 146f76c20

void __cdecl UEQSRenderingComponent::StaticRegisterNativesUEQSRenderingComponent(void)

{
  return;
}

// StoreDebugData @ 146f771f0

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
UEQSRenderingComponent::StoreDebugData(UEQSRenderingComponent *this,FQueryData *param_1)

{
  TArray<FDebugRenderSceneProxy::FSphere,TSizedDefaultAllocator<32>_>::operator=
            (&this->DebugDataSolidSpheres,&param_1->SolidSpheres);
  TArray<FDebugRenderSceneProxy::FText3d,TSizedDefaultAllocator<32>_>::operator=
            (&this->DebugDataTexts,&param_1->Texts);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

