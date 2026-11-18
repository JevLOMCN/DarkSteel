// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMediaEngine
// Functions: 10

// StaticClass @ 14ea277b0

UClass * __cdecl UDEPRECATED_ImgMediaPlaybackComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_ImgMediaPlaybackComponent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ImgMediaEngine",L"ImgMediaPlaybackComponent",
               &Z_Registration_Info_UClass_UDEPRECATED_ImgMediaPlaybackComponent.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_ImgMediaPlaybackComponent,0xe8,8,
               CLASS_Intrinsic|CLASS_Deprecated|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_ImgMediaPlaybackComponent>,
               InternalVTableHelperCtorCaller<UDEPRECATED_ImgMediaPlaybackComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_ImgMediaPlaybackComponent.InnerSingleton;
}

// UDEPRECATED_ImgMediaPlaybackComponent @ 14ea27b40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDEPRECATED_ImgMediaPlaybackComponent * __thiscall
UDEPRECATED_ImgMediaPlaybackComponent::UDEPRECATED_ImgMediaPlaybackComponent
          (UDEPRECATED_ImgMediaPlaybackComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->LODBias = 0.0;
  (this->MediaTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MediaTextures).ArrayNum = 0;
  (this->MediaTextures).ArrayMax = 0;
  (this->ObjectInfo).Object = (FMediaTextureTrackerObject *)0x0;
  (this->ObjectInfo).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UDEPRECATED_ImgMediaPlaybackComponent @ 14ea27bb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDEPRECATED_ImgMediaPlaybackComponent * __thiscall
UDEPRECATED_ImgMediaPlaybackComponent::UDEPRECATED_ImgMediaPlaybackComponent
          (UDEPRECATED_ImgMediaPlaybackComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 8;
  this->LODBias = 0.0;
  (this->MediaTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MediaTextures).ArrayNum = 0;
  (this->MediaTextures).ArrayMax = 0;
  (this->ObjectInfo).Object = (FMediaTextureTrackerObject *)0x0;
  (this->ObjectInfo).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UDEPRECATED_ImgMediaPlaybackComponent @ 14ea27c20

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
UDEPRECATED_ImgMediaPlaybackComponent::~UDEPRECATED_ImgMediaPlaybackComponent
          (UDEPRECATED_ImgMediaPlaybackComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ObjectInfo).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->MediaTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// BeginPlay @ 14ea27d70

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
UDEPRECATED_ImgMediaPlaybackComponent::BeginPlay(UDEPRECATED_ImgMediaPlaybackComponent *this)

{
  UActorComponent::BeginPlay((UActorComponent *)this);
  RegisterWithMipMapInfo(this);
  return;
}

// EndPlay @ 14ea27dd0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
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
UDEPRECATED_ImgMediaPlaybackComponent::EndPlay
          (UDEPRECATED_ImgMediaPlaybackComponent *this,Type param_1)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  FMediaTextureTracker *this_00;
  UObject *pUVar3;
  FWeakObjectPtr *pFVar4;
  FWeakObjectPtr local_res8;
  UObject *local_res18;
  
  if ((this->ObjectInfo).Object != (FMediaTextureTrackerObject *)0x0) {
    this_00 = FMediaTextureTracker::Get();
    pFVar4 = (FWeakObjectPtr *)(this->MediaTextures).AllocatorInstance.Data;
    iVar2 = (this->MediaTextures).ArrayNum;
    pFVar1 = pFVar4 + iVar2;
    while( true ) {
      if ((this->MediaTextures).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_res8);
      }
      if (pFVar4 == pFVar1) break;
      local_res8 = *pFVar4;
      pUVar3 = FWeakObjectPtr::Get(&local_res8);
      if (pUVar3 != (UObject *)0x0) {
        local_res18 = pUVar3;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        FMediaTextureTracker::UnregisterTexture
                  (this_00,&this->ObjectInfo,(TObjectPtr<UMediaTexture>)&local_res18);
      }
      pFVar4 = pFVar4 + 1;
    }
  }
  UActorComponent::EndPlay((UActorComponent *)this,param_1);
  return;
}

// GetPrivateStaticClass @ 14ea27eb0

UClass * __cdecl UDEPRECATED_ImgMediaPlaybackComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_ImgMediaPlaybackComponent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ImgMediaEngine",L"ImgMediaPlaybackComponent",
               &Z_Registration_Info_UClass_UDEPRECATED_ImgMediaPlaybackComponent.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_ImgMediaPlaybackComponent,0xe8,8,
               CLASS_Intrinsic|CLASS_Deprecated|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_ImgMediaPlaybackComponent>,
               InternalVTableHelperCtorCaller<UDEPRECATED_ImgMediaPlaybackComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_ImgMediaPlaybackComponent.InnerSingleton;
}

// RegisterWithMipMapInfo @ 14ea27fa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
UDEPRECATED_ImgMediaPlaybackComponent::RegisterWithMipMapInfo
          (UDEPRECATED_ImgMediaPlaybackComponent *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  undefined8 *puVar3;
  TArray<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar4;
  atomic<int> aVar5;
  float fVar6;
  int iVar7;
  AActor *this_00;
  TReferenceControllerBase<1> *pTVar8;
  longlong *plVar9;
  UObject *pUVar10;
  FWeakObjectPtr *pFVar11;
  code *pcVar12;
  FScriptContainerElement *pFVar13;
  bool bVar14;
  int iVar15;
  TReferenceControllerBase<1> *pTVar16;
  UClass *pUVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  ForAnyElementType FVar21;
  FMediaTextureTrackerObject *pFVar22;
  undefined8 *puVar23;
  TReferenceControllerBase<1> *pTVar24;
  TReferenceControllerBase<1> *pTVar25;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_f8;
  undefined1 local_f7;
  FWeakObjectPtr local_f4;
  undefined1 local_ec [2];
  undefined1 local_ea;
  uint local_e8;
  uint local_e4;
  FScriptContainerElement *local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  ulonglong local_c0;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> local_b8;
  undefined8 *local_a8;
  AActor *local_a0;
  UClass *local_98;
  UObject *local_90;
  UObject *local_88;
  FMediaTextureTracker *local_80;
  undefined8 *local_78;
  FScriptContainerElement *local_70;
  undefined8 local_68 [5];
  
  this_00 = (AActor *)this->_padding_;
  if (this_00 != (AActor *)0x0) {
    local_80 = FMediaTextureTracker::Get();
    pTVar16 = ::operator_new(0x38);
    pTVar24 = (TReferenceControllerBase<1> *)0x0;
    if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
      pFVar22 = (FMediaTextureTrackerObject *)&DAT_00000010;
      pTVar16 = pTVar24;
    }
    else {
      pTVar16->SharedReferenceCount = (atomic<int>)0x1;
      pFVar22 = (FMediaTextureTrackerObject *)(pTVar16 + 1);
      pTVar16->WeakReferenceCount = (atomic<int>)0x1;
      pTVar16->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFMediaTextureTrackerObject___00_SharedPointerInternals__6B_
      ;
      pTVar16[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar16[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar16[2]._padding_ = 0;
      pTVar16[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar16[2].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)((longlong)&pTVar16[3]._padding_ + 4) = 0x100;
      pTVar16[1]._padding_ = 0;
      *(undefined4 *)&pTVar16[3]._padding_ = 0xffffffff;
      if ((pFVar22 == (FMediaTextureTrackerObject *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar14)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      LOCK();
      pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar25 = pTVar16;
    if (&this->ObjectInfo != (TSharedPtr<FMediaTextureTrackerObject,1> *)local_68) {
      (this->ObjectInfo).Object = pFVar22;
      pTVar8 = (this->ObjectInfo).SharedReferenceCount.ReferenceController;
      if (pTVar16 != pTVar8) {
        (this->ObjectInfo).SharedReferenceCount.ReferenceController = pTVar16;
        pTVar25 = pTVar24;
        if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar8->SharedReferenceCount;
          aVar5 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar5 == (atomic<int>)0x1) {
            (**(code **)pTVar8->_padding_)(pTVar8);
            LOCK();
            paVar1 = &pTVar8->WeakReferenceCount;
            aVar5 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            pTVar25 = (TReferenceControllerBase<1> *)0x0;
            if (aVar5 == (atomic<int>)0x1) {
              (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
            }
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
    if (((this->ObjectInfo).Object == (FMediaTextureTrackerObject *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pFVar22 = (this->ObjectInfo).Object;
    local_a0 = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)pFVar22,(FObjectPtr)&local_a0);
    fVar6 = this->LODBias;
    if (((this->ObjectInfo).Object == (FMediaTextureTrackerObject *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    ((this->ObjectInfo).Object)->MipMapLODBias = fVar6;
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    local_98 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_98);
    }
    AActor::GetComponents<TSizedDefaultAllocator<32>,UActorComponent>
              (this_00,(TSubclassOf<UActorComponent>)&local_98,&local_b8,false);
    uVar18 = (ulonglong)local_b8.ArrayNum;
    local_e4 = local_b8.ArrayNum;
    local_70 = local_b8.AllocatorInstance.Data + uVar18 * 8;
    FVar21.Data = local_b8.AllocatorInstance.Data;
    while( true ) {
      pFVar13 = local_70;
      local_e0 = FVar21.Data;
      if (local_b8.ArrayNum != (int)uVar18) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (FVar21.Data == pFVar13) break;
      plVar9 = *(longlong **)FVar21.Data;
      if (plVar9 != (longlong *)0x0) {
        pUVar17 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
        iVar7 = (int)pUVar17->_padding_;
        if ((iVar7 <= *(int *)(plVar9[2] + 0x38)) &&
           ((longlong *)*(undefined1 **)(*(longlong *)(plVar9[2] + 0x30) + (longlong)iVar7 * 8) ==
            &pUVar17->_padding_)) {
          local_c8 = (undefined8 *)0x0;
          local_c0 = 0;
          (**(code **)(*plVar9 + 0x7f0))(plVar9,&local_c8,0);
          uVar19 = (ulonglong)(int)(uint)local_c0;
          local_e8 = (uint)local_c0;
          local_78 = local_c8 + uVar19;
          uVar18 = uVar19;
          puVar23 = local_c8;
          while( true ) {
            puVar3 = local_78;
            local_a8 = puVar23;
            if ((int)uVar19 != (int)uVar18) {
              local_res18[0] = 0;
              `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res18);
            }
            if (puVar23 == puVar3) break;
            local_d8 = (undefined8 *)0x0;
            local_d0 = 0;
            local_ea = 0;
            local_f7 = 0;
            (**(code **)(*(longlong *)*puVar23 + 0x330))
                      ((longlong *)*puVar23,&local_d8,&local_f8,local_ec);
            iVar7 = (int)local_d0;
            puVar3 = local_d8 + (int)local_d0;
            puVar20 = local_d8;
            while( true ) {
              if ((int)local_d0 != iVar7) {
                local_res20[0] = 0;
                `TCheckedPointerIterator<UTexture_*,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_res20);
              }
              puVar23 = local_a8;
              if (puVar20 == puVar3) break;
              pUVar10 = (UObject *)*puVar20;
              if (pUVar10 != (UObject *)0x0) {
                pUVar17 = Z_Construct_UClass_UMediaTexture_NoRegister();
                iVar15 = (int)pUVar17->_padding_;
                if ((iVar15 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar15 * 8
                     ) == &pUVar17->_padding_)) {
                  pTVar4 = &this->MediaTextures;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable(pUVar10);
                  }
                  local_f4.ObjectIndex = 0;
                  local_f4.ObjectSerialNumber = 0;
                  local_90 = pUVar10;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable(pUVar10);
                  }
                  FWeakObjectPtr::operator=(&local_f4,(FObjectPtr)&local_90);
                  pFVar11 = (FWeakObjectPtr *)(pTVar4->AllocatorInstance).Data;
                  if (((pFVar11 <= &local_f4) &&
                      (&local_f4 < pFVar11 + (this->MediaTextures).ArrayMax)) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar14)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  iVar15 = (this->MediaTextures).ArrayNum;
                  piVar2 = &(this->MediaTextures).ArrayMax;
                  if (iVar15 == *piVar2) {
                    iVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x408,&pTVar4->AllocatorInstance,piVar2);
                  }
                  (this->MediaTextures).ArrayNum = iVar15 + 1;
                  *(FWeakObjectPtr *)((pTVar4->AllocatorInstance).Data + (longlong)iVar15 * 8) =
                       local_f4;
                  local_88 = pUVar10;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable(pUVar10);
                  }
                  FMediaTextureTracker::RegisterTexture
                            (local_80,&this->ObjectInfo,(TObjectPtr<UMediaTexture>)&local_88);
                }
              }
              puVar20 = puVar20 + 1;
            }
            if (local_d8 != (undefined8 *)0x0) {
              FMemory::Free(local_d8);
            }
            uVar19 = local_c0 & 0xffffffff;
            puVar23 = puVar23 + 1;
            uVar18 = (ulonglong)local_e8;
          }
          FVar21.Data = local_e0;
          if (local_c8 != (undefined8 *)0x0) {
            FMemory::Free(local_c8);
            FVar21.Data = local_e0;
          }
        }
      }
      uVar18 = (ulonglong)local_e4;
      FVar21.Data = FVar21.Data + 8;
    }
    if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
  }
  return;
}

// StaticRegisterNativesUDEPRECATED_ImgMediaPlaybackComponent @ 14ea284e0

void __cdecl
UDEPRECATED_ImgMediaPlaybackComponent::StaticRegisterNativesUDEPRECATED_ImgMediaPlaybackComponent
          (void)

{
  return;
}

// UnregisterWithMipMapInfo @ 14ea284f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
UDEPRECATED_ImgMediaPlaybackComponent::UnregisterWithMipMapInfo
          (UDEPRECATED_ImgMediaPlaybackComponent *this)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  FMediaTextureTracker *this_00;
  UObject *pUVar3;
  FWeakObjectPtr *pFVar4;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  
  if ((this->ObjectInfo).Object != (FMediaTextureTrackerObject *)0x0) {
    this_00 = FMediaTextureTracker::Get();
    pFVar4 = (FWeakObjectPtr *)(this->MediaTextures).AllocatorInstance.Data;
    iVar2 = (this->MediaTextures).ArrayNum;
    pFVar1 = pFVar4 + iVar2;
    while( true ) {
      if ((this->MediaTextures).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_res8);
      }
      if (pFVar4 == pFVar1) break;
      local_res8 = *pFVar4;
      pUVar3 = FWeakObjectPtr::Get(&local_res8);
      if (pUVar3 != (UObject *)0x0) {
        local_res10 = pUVar3;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        FMediaTextureTracker::UnregisterTexture
                  (this_00,&this->ObjectInfo,(TObjectPtr<UMediaTexture>)&local_res10);
      }
      pFVar4 = pFVar4 + 1;
    }
  }
  return;
}

