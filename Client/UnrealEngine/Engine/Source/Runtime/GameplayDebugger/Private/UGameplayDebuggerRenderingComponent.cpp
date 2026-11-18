// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 9

// StaticClass @ 146d39720

UClass * __cdecl UGameplayDebuggerRenderingComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayDebuggerRenderingComponent.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayDebugger",L"GameplayDebuggerRenderingComponent",
               &Z_Registration_Info_UClass_UGameplayDebuggerRenderingComponent.InnerSingleton,
               StaticRegisterNativesUGameplayDebuggerRenderingComponent,0x630,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameplayDebuggerRenderingComponent>,
               InternalVTableHelperCtorCaller<UGameplayDebuggerRenderingComponent>,local_res8,
               UDebugDrawComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayDebuggerRenderingComponent.InnerSingleton;
}

// UGameplayDebuggerRenderingComponent @ 146d40bd0

UGameplayDebuggerRenderingComponent * __thiscall
UGameplayDebuggerRenderingComponent::UGameplayDebuggerRenderingComponent
          (UGameplayDebuggerRenderingComponent *this,FVTableHelper *param_1)

{
  UDebugDrawComponent::UDebugDrawComponent((UDebugDrawComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  FGameplayDebuggerDebugDrawDelegateHelper::FGameplayDebuggerDebugDrawDelegateHelper
            (&this->GameplayDebuggerDebugDrawDelegateHelper);
  return this;
}

// UGameplayDebuggerRenderingComponent @ 146d40c50

UGameplayDebuggerRenderingComponent * __thiscall
UGameplayDebuggerRenderingComponent::UGameplayDebuggerRenderingComponent
          (UGameplayDebuggerRenderingComponent *this,FObjectInitializer *param_1)

{
  UDebugDrawComponent::UDebugDrawComponent((UDebugDrawComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  FGameplayDebuggerDebugDrawDelegateHelper::FGameplayDebuggerDebugDrawDelegateHelper
            (&this->GameplayDebuggerDebugDrawDelegateHelper);
  return this;
}

// ~UGameplayDebuggerRenderingComponent @ 146d41720

void __thiscall
UGameplayDebuggerRenderingComponent::~UGameplayDebuggerRenderingComponent
          (UGameplayDebuggerRenderingComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  (this->GameplayDebuggerDebugDrawDelegateHelper)._padding_ =
       (longlong)&___7FGameplayDebuggerDebugDrawDelegateHelper__6B_;
  FGameplayDebuggerDebugDrawDelegateHelper::Reset(&this->GameplayDebuggerDebugDrawDelegateHelper);
  pFVar1 = (this->GameplayDebuggerDebugDrawDelegateHelper).DebugDrawDelegateHelpers.
           AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDebugDrawDelegateHelper::~FDebugDrawDelegateHelper
            ((FDebugDrawDelegateHelper *)&this->GameplayDebuggerDebugDrawDelegateHelper);
  UDebugDrawComponent::~UDebugDrawComponent((UDebugDrawComponent *)this);
  return;
}

// CalcBounds @ 146d44d00

TBoxSphereBounds<double,double> * __thiscall
UGameplayDebuggerRenderingComponent::CalcBounds
          (UGameplayDebuggerRenderingComponent *this,
          TBoxSphereBounds<double,double> *__return_storage_ptr__,TTransform<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y - __real_41cdcd6500000000;
  dVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z - __real_41cdcd6500000000;
  dVar2 = (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y + __real_41cdcd6500000000) -
          dVar9;
  dVar3 = (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z + __real_41cdcd6500000000) -
          dVar8;
  dVar1 = ((UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X + __real_41cdcd6500000000) -
          (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X - __real_41cdcd6500000000)) *
          __real_3fe0000000000000;
  dVar7 = dVar2 * __real_3fe0000000000000;
  dVar6 = dVar3 * __real_3fe0000000000000;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
       dVar1 + (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X - __real_41cdcd6500000000);
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar7 + dVar9;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar6 + dVar8;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar1;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar7;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar6;
  dVar1 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X;
  auVar4._0_8_ = dVar1 * dVar1;
  auVar4._8_8_ = 0;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (dVar3 * dVar3 + dVar2 * dVar2) * __real_3fd0000000000000 + auVar4._0_8_;
  auVar5 = sqrtpd(auVar4,auVar5);
  __return_storage_ptr__->SphereRadius = auVar5._0_8_;
  return __return_storage_ptr__;
}

// CreateDebugSceneProxy @ 146d47270

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
UGameplayDebuggerRenderingComponent::CreateDebugSceneProxy
          (UGameplayDebuggerRenderingComponent *this)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  ForAnyElementType _Src;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  FDebugRenderSceneProxy *pFVar10;
  FDebugRenderSceneProxy *pFVar11;
  longlong lVar12;
  uint uVar13;
  FDebugRenderSceneProxy *pFVar14;
  longlong local_res8;
  FDebugRenderSceneProxy *local_res10;
  longlong local_68;
  longlong local_60;
  ForAnyElementType local_58;
  undefined8 local_50;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  
  FGameplayDebuggerDebugDrawDelegateHelper::Reset(&this->GameplayDebuggerDebugDrawDelegateHelper);
  lVar12 = *(longlong *)&this->field_0xa8;
  pFVar11 = (FDebugRenderSceneProxy *)0x0;
  local_res10 = (FDebugRenderSceneProxy *)0x0;
  pFVar14 = (FDebugRenderSceneProxy *)0x0;
  pFVar10 = pFVar11;
  if (lVar12 != 0) {
    pUVar9 = AGameplayDebuggerCategoryReplicator::StaticClass();
    iVar8 = (int)pUVar9->_padding_;
    pFVar10 = pFVar14;
    if (((iVar8 <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)iVar8 * 8)
         == &pUVar9->_padding_)) && (*(char *)(lVar12 + 0x2c8) != '\0')) {
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50 = 0;
      pFVar10 = pFVar11;
      if (0 < *(int *)(lVar12 + 800)) {
        do {
          uVar13 = (uint)pFVar11;
          uVar7 = 0;
          if ((int)uVar13 < *(int *)(lVar12 + 800)) {
            uVar7 = ~uVar13 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar10 = (FDebugRenderSceneProxy *)(*pcVar5)();
            return pFVar10;
          }
          pTVar2 = *(TReferenceControllerBase<1> **)
                    ((longlong)&pFVar10->_padding_ + *(longlong *)(lVar12 + 0x318));
          plVar3 = *(longlong **)((longlong)&pFVar10->_padding_ + *(longlong *)(lVar12 + 0x318));
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((*(uint *)((longlong)plVar3 + 0x34) >> 7 & 1) != 0) {
            local_res8 = 0;
            local_68 = (**(code **)(*plVar3 + 0x28))(plVar3,this,&stack0x00000008);
            if (local_68 != 0) {
              if (((local_58.Data <= (FScriptContainerElement *)&local_68) &&
                  ((FScriptContainerElement *)&local_68 <
                   local_58.Data + (longlong)local_50._4_4_ * 8)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar10 = (FDebugRenderSceneProxy *)(*pcVar5)();
                return pFVar10;
              }
              iVar8 = (int)local_50;
              if ((int)local_50 == local_50._4_4_) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&local_58,(int *)((longlong)&local_50 + 4));
              }
              local_50 = CONCAT44(local_50._4_4_,iVar8 + 1);
              *(longlong *)(local_58.Data + (longlong)iVar8 * 8) = local_68;
            }
            if (local_res8 != 0) {
              pFVar4 = (this->GameplayDebuggerDebugDrawDelegateHelper).DebugDrawDelegateHelpers.
                       AllocatorInstance.Data;
              local_60 = local_res8;
              if (((pFVar4 <= (FScriptContainerElement *)&local_60) &&
                  ((FScriptContainerElement *)&local_60 <
                   pFVar4 + (longlong)
                            (this->GameplayDebuggerDebugDrawDelegateHelper).DebugDrawDelegateHelpers
                            .ArrayMax * 8)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar10 = (FDebugRenderSceneProxy *)(*pcVar5)();
                return pFVar10;
              }
              iVar8 = (this->GameplayDebuggerDebugDrawDelegateHelper).DebugDrawDelegateHelpers.
                      ArrayNum;
              piVar1 = &(this->GameplayDebuggerDebugDrawDelegateHelper).DebugDrawDelegateHelpers.
                        ArrayMax;
              if (iVar8 == *piVar1) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&(this->GameplayDebuggerDebugDrawDelegateHelper).
                                          DebugDrawDelegateHelpers.AllocatorInstance,piVar1);
              }
              pFVar4 = (this->GameplayDebuggerDebugDrawDelegateHelper).DebugDrawDelegateHelpers.
                       AllocatorInstance.Data;
              (this->GameplayDebuggerDebugDrawDelegateHelper).DebugDrawDelegateHelpers.ArrayNum =
                   iVar8 + 1;
              *(longlong *)(pFVar4 + (longlong)iVar8 * 8) = local_60;
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
          pFVar11 = (FDebugRenderSceneProxy *)(ulonglong)(uVar13 + 1);
          pFVar10 = (FDebugRenderSceneProxy *)&pFVar10->_padding_;
        } while ((int)(uVar13 + 1) < *(int *)(lVar12 + 800));
        pFVar10 = local_res10;
        if ((int)local_50 != 0) {
          pFVar10 = ::operator_new(0x3b0);
          if (pFVar10 == (FDebugRenderSceneProxy *)0x0) {
            pFVar10 = (FDebugRenderSceneProxy *)0x0;
          }
          else {
            FDebugRenderSceneProxy::FDebugRenderSceneProxy(pFVar10,(UPrimitiveComponent *)this);
            pFVar10->_padding_ = (longlong)&___7FGameplayDebuggerCompositeSceneProxy__6B_;
            pFVar10[1]._padding_ = 0;
            pFVar10[1]._padding_ = 0;
          }
          _Src.Data = local_58.Data;
          local_48.Data = (FScriptContainerElement *)0x0;
          lVar12 = (longlong)(int)local_50;
          local_40 = (int)local_50;
          if ((int)local_50 == 0) {
            local_3c = (int)local_50;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,(int)local_50,0,&stack0xffffffffffffffb8,(int)local_50,
                       &stack0xffffffffffffffc4);
            memcpy(local_48.Data,_Src.Data,lVar12 << 3);
          }
          pFVar11 = pFVar10 + 1;
          if ((pFVar11 == (FDebugRenderSceneProxy *)&stack0xffffffffffffffb8) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(void*)this != (void*)&Source",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x96e,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar10 = (FDebugRenderSceneProxy *)(*pcVar5)();
            return pFVar10;
          }
          lVar12 = (longlong)local_40;
          if (local_40 != 0) {
            iVar8 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (8,8,local_40,(ForAnyElementType *)pFVar11,
                               (int *)&pFVar10[1]._padding_,
                               (int *)((longlong)&pFVar10[1]._padding_ + 4));
            memcpy((FScriptContainerElement *)pFVar11->_padding_ + (longlong)iVar8 * 8,local_48.Data
                   ,lVar12 << 3);
          }
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data);
          }
        }
      }
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
    }
  }
  return pFVar10;
}

// GetDebugDrawDelegateHelper @ 146d4c240

FDebugDrawDelegateHelper * __thiscall
UGameplayDebuggerRenderingComponent::GetDebugDrawDelegateHelper
          (UGameplayDebuggerRenderingComponent *this)

{
  return (FDebugDrawDelegateHelper *)&this->GameplayDebuggerDebugDrawDelegateHelper;
}

// GetPrivateStaticClass @ 146d4d9e0

UClass * __cdecl UGameplayDebuggerRenderingComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayDebuggerRenderingComponent.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayDebugger",L"GameplayDebuggerRenderingComponent",
               &Z_Registration_Info_UClass_UGameplayDebuggerRenderingComponent.InnerSingleton,
               StaticRegisterNativesUGameplayDebuggerRenderingComponent,0x630,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameplayDebuggerRenderingComponent>,
               InternalVTableHelperCtorCaller<UGameplayDebuggerRenderingComponent>,local_res8,
               UDebugDrawComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayDebuggerRenderingComponent.InnerSingleton;
}

// StaticRegisterNativesUGameplayDebuggerRenderingComponent @ 146d5c5e0

void __cdecl
UGameplayDebuggerRenderingComponent::StaticRegisterNativesUGameplayDebuggerRenderingComponent(void)

{
  return;
}

