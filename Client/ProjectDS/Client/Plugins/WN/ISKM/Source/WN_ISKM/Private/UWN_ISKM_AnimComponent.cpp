// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 8

// StaticClass @ 14a837680

UClass * __cdecl UWN_ISKM_AnimComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_ISKM_AnimComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_ISKM",L"WN_ISKM_AnimComponent",
               &Z_Registration_Info_UClass_UWN_ISKM_AnimComponent.InnerSingleton,
               StaticRegisterNativesUWN_ISKM_AnimComponent,0x1090,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UWN_ISKM_AnimComponent>,
               InternalVTableHelperCtorCaller<UWN_ISKM_AnimComponent>,local_res8,
               USkeletalMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_ISKM_AnimComponent.InnerSingleton;
}

// UWN_ISKM_AnimComponent @ 14a83eef0

UWN_ISKM_AnimComponent * __thiscall
UWN_ISKM_AnimComponent::UWN_ISKM_AnimComponent(UWN_ISKM_AnimComponent *this,FVTableHelper *param_1)

{
  USkeletalMeshComponent::USkeletalMeshComponent((USkeletalMeshComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&_vftable__for__ILODSyncInterface__;
  this->_padding_ = (longlong)&_vftable__for__IClothSimulationDataProvider__;
  this->_padding_ = (longlong)&___7UWN_ISKM_AnimComponent__6B_;
  (this->Profile).field0_0x0.DebugPtr = (UWN_ISKM_Profile *)0x0;
  this->ISKMController = (IWN_ISKM_Controller *)0x0;
  this->bHasValidBlendInfos = false;
  this->NumLastBlendInfos = 0;
  this->LastBlendInfos[0].BlendWeight = 0.0;
  this->LastBlendInfos[0].FrameIndex = -1;
  this->LastBlendInfos[0].GlobalFrameIndex = -1;
  this->LastBlendInfos[1].FrameIndex = -1;
  this->LastBlendInfos[1].GlobalFrameIndex = -1;
  this->LastBlendInfos[1].BlendWeight = 0.0;
  return this;
}

// UWN_ISKM_AnimComponent @ 14a83efc0

UWN_ISKM_AnimComponent * __thiscall
UWN_ISKM_AnimComponent::UWN_ISKM_AnimComponent
          (UWN_ISKM_AnimComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  USkeletalMeshComponent::USkeletalMeshComponent((USkeletalMeshComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&_vftable__for__ILODSyncInterface__;
  this->_padding_ = (longlong)&_vftable__for__IClothSimulationDataProvider__;
  this->_padding_ = (longlong)&___7UWN_ISKM_AnimComponent__6B_;
  (this->Profile).field0_0x0.DebugPtr = (UWN_ISKM_Profile *)0x0;
  this->ISKMController = (IWN_ISKM_Controller *)0x0;
  this->bHasValidBlendInfos = false;
  this->NumLastBlendInfos = 0;
  this->LastBlendInfos[0].BlendWeight = 0.0;
  this->LastBlendInfos[0].FrameIndex = -1;
  this->LastBlendInfos[0].GlobalFrameIndex = -1;
  this->LastBlendInfos[1].FrameIndex = -1;
  this->LastBlendInfos[1].GlobalFrameIndex = -1;
  this->LastBlendInfos[1].BlendWeight = 0.0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 6;
  return this;
}

// ~UWN_ISKM_AnimComponent @ 14a83ff20

void __thiscall UWN_ISKM_AnimComponent::~UWN_ISKM_AnimComponent(UWN_ISKM_AnimComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&_vftable__for__ILODSyncInterface__;
  this->_padding_ = (longlong)&_vftable__for__IClothSimulationDataProvider__;
  this->_padding_ = (longlong)&___7UWN_ISKM_AnimComponent__6B_;
  USkeletalMeshComponent::~USkeletalMeshComponent((USkeletalMeshComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14a84b140

UClass * __cdecl UWN_ISKM_AnimComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_ISKM_AnimComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_ISKM",L"WN_ISKM_AnimComponent",
               &Z_Registration_Info_UClass_UWN_ISKM_AnimComponent.InnerSingleton,
               StaticRegisterNativesUWN_ISKM_AnimComponent,0x1090,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UWN_ISKM_AnimComponent>,
               InternalVTableHelperCtorCaller<UWN_ISKM_AnimComponent>,local_res8,
               USkeletalMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_ISKM_AnimComponent.InnerSingleton;
}

// StaticRegisterNativesUWN_ISKM_AnimComponent @ 14a855f10

void __cdecl UWN_ISKM_AnimComponent::StaticRegisterNativesUWN_ISKM_AnimComponent(void)

{
  return;
}

// TickComponent @ 14a856bd0

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
UWN_ISKM_AnimComponent::TickComponent
          (UWN_ISKM_AnimComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  ulong64 uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(**(code **)(this->ISKMController->_padding_ + 0x10))();
  *puVar2 = *puVar2 & 0xfffffff7;
  if ((*puVar2 & 0x10) == 0) {
    puVar2[3] = (uint)(param_1 + (float)puVar2[3]);
  }
  else {
    USkeletalMeshComponent::TickComponent
              ((USkeletalMeshComponent *)this,param_1 + (float)puVar2[3],param_2,param_3);
    uVar1 = GFrameCounter;
    *puVar2 = *puVar2 | 8;
    *(ulong64 *)(puVar2 + 4) = uVar1;
  }
  return;
}

// UpdateBlendInfos @ 14a857740

void __thiscall UWN_ISKM_AnimComponent::UpdateBlendInfos(UWN_ISKM_AnimComponent *this)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  UAnimInstance *this_00;
  TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined8 *puVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> *pTVar15;
  uint uVar16;
  TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> *pTVar17;
  TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> *pTVar18;
  ulonglong uVar19;
  TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> *pTVar20;
  TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> *pTVar21;
  TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> *pTVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  uint local_res10;
  TArray<FWN_ISKM_AnimBlendInfo,TSizedDefaultAllocator<32>_> local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> *pTVar14;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Blue,"UpdateBlendInfos");
  bVar23 = -1 < CpuChannel->Enabled;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId101,"UpdateBlendInfos",
               "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_AnimComponent.cpp"
               ,0x65);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId101);
  }
  if ((this->Profile).field0_0x0.DebugPtr == (UWN_ISKM_Profile *)0x0) goto LAB_14a857c1c;
  (**(code **)(this->ISKMController->_padding_ + 0x18))();
  pTVar17 = (TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> *)0x0;
  uVar7 = 0;
  local_98 = 0xffffffffffffffff;
  pTVar18 = (TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> *)&DAT_ffffffff;
  uVar16 = 0xffffffff;
  uVar13 = 0;
  local_90 = 0;
  local_84 = 0;
  local_res10 = 0xffffffff;
  local_8c = 0xffffffffffffffff;
  bVar4 = false;
  fVar24 = 0.0;
  this_00 = USkeletalMeshComponent::GetAnimInstance((USkeletalMeshComponent *)this);
  pTVar8 = pTVar17;
  if ((this_00 != (UAnimInstance *)0x0) &&
     (pTVar8 = UAnimInstance::GetUngroupedActivePlayersRead_AnyThread(this_00),
     pTVar8->ArrayNum != 0)) {
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ArrayNum = 0;
    local_a8.ArrayMax = 0;
    WN_ISKM_FillAnimBlendInfos((this->Profile).field0_0x0.DebugPtr,pTVar8,&local_a8);
    iVar3 = local_a8.ArrayNum;
    uVar11 = (ulonglong)local_a8.ArrayNum;
    bVar4 = false;
    uVar13 = uVar7;
    if (local_a8.ArrayNum != 0) {
      fVar25 = 0.0;
      uVar12 = uVar11;
      pTVar14 = pTVar17;
      uVar19 = uVar11;
      pTVar21 = pTVar17;
      iVar10 = local_a8.ArrayNum;
      if (0 < local_a8.ArrayNum) {
        do {
          uVar13 = (uint)pTVar14;
          uVar16 = uVar7;
          if ((int)uVar13 < (int)uVar12) {
            uVar16 = ~uVar13 >> 0x1f;
          }
          if (uVar16 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar12 = local_a8._8_8_ & 0xffffffff;
          }
          fVar1 = *(float *)((longlong)&pTVar21->ArrayNum + local_a8.AllocatorInstance.Data);
          uVar16 = uVar13;
          if (fVar1 <= fVar24) {
            uVar16 = (uint)pTVar18;
            fVar1 = fVar24;
          }
          fVar24 = fVar1;
          pTVar18 = (TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> *)(longlong)(int)uVar16;
          uVar19 = uVar19 - 1;
          pTVar15 = pTVar17;
          pTVar14 = (TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> *)(ulonglong)(uVar13 + 1);
          pTVar20 = pTVar17;
          pTVar22 = pTVar17;
          pTVar21 = (TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> *)&pTVar21->ArrayMax;
        } while (uVar19 != 0);
        do {
          uVar13 = (uint)pTVar15;
          if (pTVar22 != pTVar18) {
            uVar6 = uVar7;
            if ((int)uVar13 < (int)uVar12) {
              uVar6 = ~uVar13 >> 0x1f;
            }
            if (uVar6 == 0) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uVar12 = local_a8._8_8_ & 0xffffffff;
            }
            fVar1 = *(float *)(local_a8.AllocatorInstance.Data + 8 + (longlong)pTVar20);
            if ((fVar1 <= fVar24) && (fVar25 <= fVar1)) {
              fVar25 = fVar1;
              local_res10 = uVar13;
            }
          }
          iVar10 = (int)uVar12;
          pTVar22 = (TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> *)
                    ((longlong)&(pTVar22->AllocatorInstance).Data + 1);
          pTVar15 = (TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> *)(ulonglong)(uVar13 + 1);
          pTVar20 = (TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> *)&pTVar20->ArrayMax;
        } while ((longlong)pTVar22 < (longlong)uVar11);
      }
      uVar6 = uVar16;
      if ((1 < iVar3) && ((int)local_res10 < (int)uVar16)) {
        uVar6 = local_res10;
        local_res10 = uVar16;
      }
      bVar4 = true;
      uVar16 = uVar7;
      if ((int)uVar6 < iVar10) {
        uVar16 = ~uVar6 >> 0x1f;
      }
      if (uVar16 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar10 = local_a8.ArrayNum;
      }
      if (*(int *)(local_a8.AllocatorInstance.Data + (longlong)(int)uVar6 * 0xc + 4) == -1) {
LAB_14a857aa6:
        bVar4 = false;
        uVar13 = 0;
      }
      else {
        uVar13 = 1;
        if (1 < iVar3) {
          uVar16 = uVar7;
          if ((int)local_res10 < iVar10) {
            uVar16 = ~local_res10 >> 0x1f;
          }
          if (uVar16 == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar10 = local_a8.ArrayNum;
          }
          if (*(int *)(local_a8.AllocatorInstance.Data + (longlong)(int)local_res10 * 0xc + 4) == -1
             ) goto LAB_14a857aa6;
          uVar13 = 2;
        }
        uVar16 = uVar7;
        if ((int)uVar6 < iVar10) {
          uVar16 = ~uVar6 >> 0x1f;
        }
        if (uVar16 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar10 = local_a8.ArrayNum;
        }
        local_98 = *(undefined8 *)(local_a8.AllocatorInstance.Data + (longlong)(int)uVar6 * 0xc);
        local_90 = *(undefined4 *)(local_a8.AllocatorInstance.Data + (longlong)(int)uVar6 * 0xc + 8)
        ;
        if (uVar13 == 2) {
          if ((int)local_res10 < iVar10) {
            uVar7 = ~local_res10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_8c = *(undefined8 *)
                      (local_a8.AllocatorInstance.Data + (longlong)(int)local_res10 * 0xc);
          local_84 = *(undefined4 *)
                      (local_a8.AllocatorInstance.Data + (longlong)(int)local_res10 * 0xc + 8);
        }
      }
    }
    if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
  }
  this->bHasValidBlendInfos = bVar4;
  if (pTVar8 == (TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> *)0x0) {
    this->NumLastBlendInfos = 0;
  }
  else {
    this->NumLastBlendInfos = uVar13;
    if (uVar13 != 0) {
      puVar9 = &local_98;
      do {
        uVar16 = (int)pTVar17 + 1;
        pTVar17 = (TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> *)(ulonglong)uVar16;
        *(undefined8 *)((longlong)this + (0x1078 - (longlong)&local_98) + (longlong)puVar9) =
             *puVar9;
        *(undefined4 *)((longlong)this + (0x1080 - (longlong)&local_98) + (longlong)puVar9) =
             *(undefined4 *)(puVar9 + 1);
        puVar9 = (undefined8 *)((longlong)puVar9 + 0xc);
      } while ((int)uVar16 < (int)uVar13);
    }
  }
LAB_14a857c1c:
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

