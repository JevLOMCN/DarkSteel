// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ISMPool
// Functions: 18

// StaticClass @ 1463380a0

UClass * __cdecl UISMPoolComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UISMPoolComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ISMPool",L"ISMPoolComponent",
               &Z_Registration_Info_UClass_UISMPoolComponent.InnerSingleton,
               StaticRegisterNativesUISMPoolComponent,0x380,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UISMPoolComponent>,
               InternalVTableHelperCtorCaller<UISMPoolComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UISMPoolComponent.InnerSingleton;
}

// UISMPoolComponent @ 14633a930

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UISMPoolComponent * __thiscall
UISMPoolComponent::UISMPoolComponent(UISMPoolComponent *this,FVTableHelper *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->NextMeshGroupId = 0;
  *(undefined8 *)&this->MeshGroups = 0;
  *(undefined8 *)&(this->MeshGroups).field_0x8 = 0;
  *(undefined8 *)&(this->MeshGroups).field_0x20 = 0;
  *(undefined4 *)&(this->MeshGroups).field_0x28 = 0;
  *(undefined4 *)&(this->MeshGroups).field_0x2c = 0x80;
  *(undefined4 *)&(this->MeshGroups).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MeshGroups).field_0x34 = 0;
  *(undefined8 *)&(this->MeshGroups).field_0x40 = 0;
  *(undefined4 *)&(this->MeshGroups).field_0x48 = 0;
  FISMPool::FISMPool(&this->Pool);
  return this;
}

// UISMPoolComponent @ 14633a9d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UISMPoolComponent * __thiscall
UISMPoolComponent::UISMPoolComponent(UISMPoolComponent *this,FObjectInitializer *param_1)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  USceneComponent::USceneComponent((USceneComponent *)this,pFVar1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->NextMeshGroupId = 0;
  *(undefined8 *)&this->MeshGroups = 0;
  *(undefined8 *)&(this->MeshGroups).field_0x8 = 0;
  *(undefined8 *)&(this->MeshGroups).field_0x20 = 0;
  *(undefined4 *)&(this->MeshGroups).field_0x28 = 0;
  *(undefined4 *)&(this->MeshGroups).field_0x2c = 0x80;
  *(undefined4 *)&(this->MeshGroups).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MeshGroups).field_0x34 = 0;
  *(undefined8 *)&(this->MeshGroups).field_0x40 = 0;
  *(undefined4 *)&(this->MeshGroups).field_0x48 = 0;
  FISMPool::FISMPool(&this->Pool);
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3e800000;
  *(byte *)((longlong)&this->_padding_ + 2) = *(byte *)((longlong)&this->_padding_ + 2) & 0xf7 | 6;
  return this;
}

// ~UISMPoolComponent @ 14633b040

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UISMPoolComponent::~UISMPoolComponent(UISMPoolComponent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  FISMPool::~FISMPool(&this->Pool);
  *(undefined4 *)&(this->MeshGroups).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MeshGroups).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FISMPoolMeshGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FISMPoolMeshGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FISMPoolMeshGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MeshGroups);
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// AddMeshToGroup @ 14633c370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall
UISMPoolComponent::AddMeshToGroup
          (UISMPoolComponent *this,int param_1,FISMPoolStaticMeshInstance *param_2,int param_3,
          TArrayView<float_const_,int> *param_4)

{
  uint *puVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float *pfVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ForAnyElementType *pFVar12;
  undefined1 *puVar13;
  bool local_res10 [8];
  TArrayView<float_const_,int> local_58;
  TArrayView<float_const_,int> local_48 [2];
  
  if (*(int *)&(this->MeshGroups).field_0x8 != *(int *)&(this->MeshGroups).field_0x34) {
    puVar13 = *(undefined1 **)&(this->MeshGroups).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->MeshGroups).field_0x38;
    }
    iVar10 = *(int *)(puVar13 +
                     (ulonglong)(*(int *)&(this->MeshGroups).field_0x48 - 1U & param_1) * 4);
    if (iVar10 != -1) {
      do {
        lVar2 = *(longlong *)&this->MeshGroups + (longlong)iVar10 * 0x28;
        if (*(int *)(*(longlong *)&this->MeshGroups + (longlong)iVar10 * 0x28) == param_1) {
          pFVar12 = (ForAnyElementType *)(lVar2 + 8);
          if (lVar2 == 0) {
            pFVar12 = (ForAnyElementType *)0x0;
          }
          if (pFVar12 != (ForAnyElementType *)0x0) {
            local_res10[0] = false;
            pfVar5 = param_4->DataPtr;
            uVar6._0_4_ = param_4->ArrayNum;
            uVar6._4_4_ = *(undefined4 *)&param_4->field_0xc;
            uVar9 = FISMPool::GetOrAddISM(&this->Pool,this,param_2,local_res10);
            uVar11 = 0;
            if ((int)uVar9 < (this->Pool).ISMs.ArrayNum) {
              uVar11 = ~uVar9 >> 0x1f;
            }
            if (uVar11 == 0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar4 = (code *)swi(3);
                iVar10 = (*pcVar4)();
                return iVar10;
              }
            }
            local_58.DataPtr = pfVar5;
            local_58._8_8_ = uVar6;
            iVar10 = FISMPoolISM::AddInstanceGroup
                               ((FISMPoolISM *)
                                ((this->Pool).ISMs.AllocatorInstance.Data +
                                (longlong)(int)uVar9 * 0xb8),param_3,&local_58);
            uVar11 = *(uint *)&pFVar12[1].Data;
            puVar1 = (uint *)((longlong)&pFVar12[1].Data + 4);
            pfVar5 = param_4->DataPtr;
            uVar7._0_4_ = param_4->ArrayNum;
            uVar7._4_4_ = *(undefined4 *)&param_4->field_0xc;
            if (uVar11 == *puVar1) {
              uVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,pFVar12,(int *)puVar1);
            }
            *(uint *)&pFVar12[1].Data = uVar11 + 1;
            lVar2 = (longlong)(int)uVar11 * 0x18;
            pFVar3 = pFVar12->Data;
            *(uint *)(pFVar3 + lVar2) = uVar9;
            *(int *)(pFVar3 + lVar2 + 4) = iVar10;
            *(undefined8 *)(pFVar3 + lVar2 + 8) = 0;
            *(undefined8 *)(pFVar3 + lVar2 + 0x10) = 0;
            if ((*(char *)&pFVar12[2].Data != '\0') && (GShadowCopyCustomData != false)) {
              uVar9 = 0;
              if ((int)uVar11 < *(int *)&pFVar12[1].Data) {
                uVar9 = ~uVar11 >> 0x1f;
              }
              if (uVar9 == 0) {
                bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar8) {
                  pcVar4 = (code *)swi(3);
                  iVar10 = (*pcVar4)();
                  return iVar10;
                }
              }
              local_48[0].DataPtr = pfVar5;
              local_48[0]._8_8_ = uVar7;
              FISMPoolMeshInfo::ShadowCopyCustomData
                        ((FISMPoolMeshInfo *)(pFVar12->Data + lVar2),param_3,
                         (param_2->Desc).NumCustomDataFloats,local_48);
            }
            return uVar11;
          }
          break;
        }
        iVar10 = *(int *)(lVar2 + 0x20);
      } while (iVar10 != -1);
    }
  }
  if (2 < (byte)LogChaos._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
  }
  return -1;
}

// BatchUpdateInstanceCustomData @ 14633c900

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UISMPoolComponent::BatchUpdateInstanceCustomData
          (UISMPoolComponent *this,int param_1,int param_2,float param_3)

{
  longlong lVar1;
  FISMPoolMeshInfo *pFVar2;
  int iVar3;
  FISMPoolMeshInfo *pFVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  FName local_res8;
  undefined4 local_res10 [2];
  FString local_48 [2];
  
  plVar5 = (longlong *)0x0;
  local_res10[0] = 0;
  if (*(int *)&(this->MeshGroups).field_0x8 != *(int *)&(this->MeshGroups).field_0x34) {
    puVar7 = *(undefined1 **)&(this->MeshGroups).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->MeshGroups).field_0x38;
    }
    iVar3 = *(int *)(puVar7 + (ulonglong)(*(int *)&(this->MeshGroups).field_0x48 - 1U & param_1) * 4
                    );
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)&this->MeshGroups + (longlong)iVar3 * 0x28;
        if (*(int *)(*(longlong *)&this->MeshGroups + (longlong)iVar3 * 0x28) == param_1) {
          plVar6 = (longlong *)(lVar1 + 8);
          if (lVar1 == 0) {
            plVar6 = plVar5;
          }
          if (plVar6 != (longlong *)0x0) {
            lVar1 = plVar6[1];
            pFVar4 = (FISMPoolMeshInfo *)*plVar6;
            pFVar2 = pFVar4 + (int)lVar1;
            while( true ) {
              if ((int)plVar6[1] != (int)lVar1) {
                `TCheckedPointerIterator<FISMPoolMeshInfo,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_res10);
              }
              if (pFVar4 == pFVar2) break;
              FISMPool::BatchUpdateInstanceCustomData(&this->Pool,pFVar4,param_2,param_3);
              pFVar4 = pFVar4 + 1;
            }
            return true;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x20);
      } while (iVar3 != -1);
    }
  }
  if (2 < (byte)LogChaos._0_1_) {
    if (this->_padding_ != 0) {
      local_res8 = *(FName *)(this->_padding_ + 0x18);
      ::FName::ToString(&local_res8,local_48);
      plVar5 = (longlong *)&DAT_00000001;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
    if ((plVar5 != (longlong *)0x0) &&
       (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// BatchUpdateInstancesTransforms @ 14633d240

bool __thiscall
UISMPoolComponent::BatchUpdateInstancesTransforms
          (UISMPoolComponent *this,int param_1,int param_2,int param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4,bool param_5,
          bool param_6,bool param_7)

{
  int iVar1;
  TTransform<double> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined4 uStack_1c;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_18;
  
  pTVar2 = (TTransform<double> *)(param_4->AllocatorInstance).Data;
  iVar1 = param_4->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = pTVar2;
  bVar4 = BatchUpdateInstancesTransforms
                    (this,param_1,param_2,param_3,&local_18,param_5,param_6,param_7);
  return bVar4;
}

// BatchUpdateInstancesTransforms @ 14633d320

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UISMPoolComponent::BatchUpdateInstancesTransforms
          (UISMPoolComponent *this,int param_1,int param_2,int param_3,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_4,bool param_5,bool param_6,
          bool param_7)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  FName local_res8;
  undefined4 local_res10;
  FString local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_38;
  
  plVar8 = (longlong *)0x0;
  local_res10 = 0;
  if (*(int *)&(this->MeshGroups).field_0x8 != *(int *)&(this->MeshGroups).field_0x34) {
    puVar7 = *(undefined1 **)&(this->MeshGroups).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->MeshGroups).field_0x38;
    }
    iVar5 = *(int *)(puVar7 + (ulonglong)(*(int *)&(this->MeshGroups).field_0x48 - 1U & param_1) * 4
                    );
    if (iVar5 != -1) {
      do {
        lVar1 = *(longlong *)&this->MeshGroups + (longlong)iVar5 * 0x28;
        if (*(int *)(*(longlong *)&this->MeshGroups + (longlong)iVar5 * 0x28) == param_1) {
          plVar6 = (longlong *)(lVar1 + 8);
          if (lVar1 == 0) {
            plVar6 = plVar8;
          }
          if (plVar6 != (longlong *)0x0) {
            if ((param_2 < 0) || ((int)plVar6[1] <= param_2)) {
              if ((byte)LogChaos._0_1_ < 3) {
                return false;
              }
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
              return false;
            }
            lVar1 = plVar6[2];
            local_48 = *(undefined4 *)&param_4->DataPtr;
            uStack_44 = *(undefined4 *)((longlong)&param_4->DataPtr + 4);
            iStack_40 = param_4->ArrayNum;
            uStack_3c = *(undefined4 *)&param_4->field_0xc;
            if ((param_2 < 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            local_38.DataPtr._0_4_ = local_48;
            local_38.DataPtr._4_4_ = uStack_44;
            local_38.ArrayNum = iStack_40;
            local_38._12_4_ = uStack_3c;
            bVar3 = FISMPool::BatchUpdateInstancesTransforms
                              (&this->Pool,(FISMPoolMeshInfo *)(*plVar6 + (longlong)param_2 * 0x18),
                               param_3,&local_38,param_5,param_6,param_7,SUB81(lVar1,0));
            return bVar3;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x20);
      } while (iVar5 != -1);
    }
  }
  if (2 < (byte)LogChaos._0_1_) {
    if (this->_padding_ != 0) {
      local_res8 = *(FName *)(this->_padding_ + 0x18);
      ::FName::ToString(&local_res8,&local_58);
      plVar8 = (longlong *)&DAT_00000001;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
    if ((plVar8 != (longlong *)0x0) &&
       (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// CreateMeshGroup @ 14633df50

int __thiscall UISMPoolComponent::CreateMeshGroup(UISMPoolComponent *this,bool param_1)

{
  uint uVar1;
  TPairInitializer<int_&&,FISMPoolMeshGroup_const_&> local_res8;
  FISMPoolMeshGroup **local_38;
  FISMPoolMeshInfo **local_30;
  FISMPoolMeshInfo *local_28;
  undefined8 local_20;
  undefined1 local_18;
  
  local_28 = (FISMPoolMeshInfo *)0x0;
  local_20 = 0;
  local_res8.Value._0_4_ = this->NextMeshGroupId;
  local_38 = &local_res8.Value;
  local_30 = &local_28;
  local_18 = param_1;
  TSet<TTuple<int,FISMPoolMeshGroup>,TDefaultMapHashableKeyFuncs<int,FISMPoolMeshGroup,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_&&,FISMPoolMeshGroup_const_&>_>
            ((TSet<TTuple<int,FISMPoolMeshGroup>,TDefaultMapHashableKeyFuncs<int,FISMPoolMeshGroup,0>,FDefaultSetAllocator>
              *)&this->MeshGroups,&local_res8,(bool *)&local_38);
  uVar1 = this->NextMeshGroupId;
  this->NextMeshGroupId = uVar1 + 1;
  DestructItems<FISMPoolMeshInfo,int>(local_28,(int)local_20);
  if (local_28 != (FISMPoolMeshInfo *)0x0) {
    FMemory::Free(local_28);
  }
  return uVar1;
}

// DestroyMeshGroup @ 14633e390

void __thiscall UISMPoolComponent::DestroyMeshGroup(UISMPoolComponent *this,int param_1)

{
  int *piVar1;
  longlong lVar2;
  FISMPoolMeshInfo *pFVar3;
  longlong lVar4;
  int iVar5;
  undefined1 *puVar6;
  FISMPoolMeshInfo *pFVar7;
  ForAnyElementType *pFVar8;
  int local_res10 [2];
  
  if (*(int *)&(this->MeshGroups).field_0x8 != *(int *)&(this->MeshGroups).field_0x34) {
    puVar6 = *(undefined1 **)&(this->MeshGroups).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->MeshGroups).field_0x38;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(*(int *)&(this->MeshGroups).field_0x48 - 1U & param_1) * 4
                    );
    if (iVar5 != -1) {
      lVar4 = *(longlong *)&(this->MeshGroups).field_0x0;
      while (lVar2 = lVar4 + (longlong)iVar5 * 0x28,
            *(int *)(lVar4 + (longlong)iVar5 * 0x28) != param_1) {
        iVar5 = *(int *)(lVar2 + 0x20);
        if (iVar5 == -1) {
          return;
        }
      }
      pFVar8 = (ForAnyElementType *)(lVar2 + 8);
      if (lVar2 == 0) {
        pFVar8 = (ForAnyElementType *)0x0;
      }
      if (pFVar8 != (ForAnyElementType *)0x0) {
        pFVar7 = (FISMPoolMeshInfo *)pFVar8->Data;
        iVar5 = *(int *)&pFVar8[1].Data;
        pFVar3 = pFVar7 + iVar5;
        while( true ) {
          if (*(int *)&pFVar8[1].Data != iVar5) {
            `TCheckedPointerIterator<FISMPoolMeshInfo,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res10);
          }
          if (pFVar7 == pFVar3) break;
          FISMPool::RemoveInstancesFromISM(&this->Pool,pFVar7);
          pFVar7 = pFVar7 + 1;
        }
        DestructItems<FISMPoolMeshInfo,int>
                  ((FISMPoolMeshInfo *)pFVar8->Data,*(int *)&pFVar8[1].Data);
        piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
        *(undefined4 *)&pFVar8[1].Data = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,pFVar8,0,piVar1);
        }
        if (*(int *)&(this->MeshGroups).field_0x8 != *(int *)&(this->MeshGroups).field_0x34) {
          local_res10[0] = param_1;
          TSet<TTuple<int,FISMPoolMeshGroup>,TDefaultMapHashableKeyFuncs<int,FISMPoolMeshGroup,0>,FDefaultSetAllocator>
          ::RemoveImpl<int>((TSet<TTuple<int,FISMPoolMeshGroup>,TDefaultMapHashableKeyFuncs<int,FISMPoolMeshGroup,0>,FDefaultSetAllocator>
                             *)&this->MeshGroups,param_1,local_res10);
        }
      }
    }
  }
  return;
}

// GetPrivateStaticClass @ 14633fff0

UClass * __cdecl UISMPoolComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UISMPoolComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ISMPool",L"ISMPoolComponent",
               &Z_Registration_Info_UClass_UISMPoolComponent.InnerSingleton,
               StaticRegisterNativesUISMPoolComponent,0x380,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UISMPoolComponent>,
               InternalVTableHelperCtorCaller<UISMPoolComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UISMPoolComponent.InnerSingleton;
}

// GetResourceSizeEx @ 146340230

void __thiscall
UISMPoolComponent::GetResourceSizeEx(UISMPoolComponent *this,FResourceSizeEx *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  FISMPoolStaticMeshInstance *pFVar6;
  longlong lVar7;
  FISMPoolStaticMeshInstance *pFVar8;
  int iVar9;
  undefined1 local_res8 [8];
  FResourceSizeEx *local_res10;
  FISMPoolStaticMeshInstance local_f8;
  FWeakObjectPtr local_80;
  undefined4 local_78;
  undefined4 local_74;
  ForAnyElementType local_70;
  int local_68;
  int local_64;
  ForAnyElementType local_60;
  uint local_58;
  int local_54;
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  local_res10 = param_1;
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  uVar1 = *(uint *)&(this->Pool).MeshToISMIndex.field_0x48;
  uVar2 = *(uint *)&(this->MeshGroups).field_0x48;
  iVar3 = (this->Pool).ISMs.ArrayNum;
  pFVar6 = (FISMPoolStaticMeshInstance *)(this->Pool).ISMs.AllocatorInstance.Data;
  iVar5 = (*(int *)&(this->Pool).MeshToISMIndex.field_0x2c + 0x1fU >> 5) +
          *(int *)&(this->Pool).MeshToISMIndex.field_0xc * 0x22 + (this->Pool).ISMs.ArrayMax * 0x2e
          + *(int *)&(this->MeshGroups).field_0xc * 10 + (this->Pool).FreeListISM.ArrayMax +
          (this->Pool).FreeList.ArrayMax;
  iVar9 = iVar5 + uVar1;
  if (uVar1 < 2) {
    iVar9 = iVar5;
  }
  iVar5 = uVar2 + iVar9;
  if (uVar2 < 2) {
    iVar5 = iVar9;
  }
  iVar9 = (iVar5 + (*(int *)&(this->MeshGroups).field_0x2c + 0x1fU >> 5)) * 4;
  pFVar8 = (FISMPoolStaticMeshInstance *)((longlong)pFVar6 + (longlong)iVar3 * 0xb8);
  while( true ) {
    if ((this->Pool).ISMs.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FISMPoolISM,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar8) break;
    FISMPoolStaticMeshInstance::FISMPoolStaticMeshInstance(&local_f8,pFVar6);
    local_80 = pFVar6[1].StaticMesh.WeakPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_80 != (FWeakObjectPtr)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_80);
    }
    local_78 = *(undefined4 *)&pFVar6[1].MaterialsOverrides.AllocatorInstance.Data;
    local_68 = *(int *)&pFVar6[1].CustomPrimitiveData.AllocatorInstance.Data;
    lVar7 = (longlong)local_68;
    pvVar4 = *(void **)&pFVar6[1].MaterialsOverrides.ArrayNum;
    local_74 = *(undefined4 *)((longlong)&pFVar6[1].MaterialsOverrides.AllocatorInstance.Data + 4);
    local_70.Data = (FScriptContainerElement *)0x0;
    if (local_68 == 0) {
      local_64 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_68,0,&local_70,local_68,&local_64);
      memcpy(local_70.Data,pvVar4,lVar7 << 3);
    }
    local_58 = pFVar6[1].Desc.Flags;
    lVar7 = (longlong)(int)local_58;
    pvVar4 = *(void **)&pFVar6[1].CustomPrimitiveData.ArrayNum;
    local_60.Data = (FScriptContainerElement *)0x0;
    if (local_58 == 0) {
      local_54 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_58,0,&local_60,local_58,&local_54);
      memcpy(local_60.Data,pvVar4,lVar7 << 2);
    }
    local_48 = *(int *)((longlong)&pFVar6[1].Desc.Position.field0_0x0 + 8);
    lVar7 = (longlong)local_48;
    pvVar4 = (void *)pFVar6[1].Desc.Position.field0_0x0._s_0.X;
    local_50.Data = (FScriptContainerElement *)0x0;
    if (local_48 == 0) {
      local_44[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_48,0,&local_50,local_48,local_44);
      memcpy(local_50.Data,pvVar4,lVar7 << 2);
    }
    iVar9 = iVar9 + (local_54 + local_64 * 2 + local_44[0]) * 4;
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    if (local_60.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data);
    }
    if (local_70.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data);
    }
    if (local_f8.Desc.Tags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Desc.Tags.AllocatorInstance.Data);
    }
    if (local_f8.CustomPrimitiveData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.CustomPrimitiveData.AllocatorInstance.Data);
    }
    if (local_f8.MaterialsOverrides.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.MaterialsOverrides.AllocatorInstance.Data);
    }
    pFVar6 = (FISMPoolStaticMeshInstance *)((longlong)&pFVar6[1].Desc.Position.field0_0x0 + 0x10);
  }
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(local_res10,(longlong)iVar9);
  return;
}

// PreallocateMeshInstance @ 146341200

void __thiscall
UISMPoolComponent::PreallocateMeshInstance
          (UISMPoolComponent *this,FISMPoolStaticMeshInstance *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  if ((this->Pool).bCachedKeepAlive != false) {
    uVar1 = ::GetTypeHash(param_1);
    iVar2 = TSet<TTuple<FISMPoolStaticMeshInstance,int>,TDefaultMapHashableKeyFuncs<FISMPoolStaticMeshInstance,int,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FISMPoolStaticMeshInstance>
                      ((TSet<TTuple<FISMPoolStaticMeshInstance,int>,TDefaultMapHashableKeyFuncs<FISMPoolStaticMeshInstance,int,0>,FDefaultSetAllocator>
                        *)&(this->Pool).MeshToISMIndex,uVar1,param_1);
    if (iVar2 != -1) {
      lVar3 = (longlong)iVar2 * 0x88 + *(longlong *)&(this->Pool).MeshToISMIndex;
      lVar4 = lVar3 + 0x78;
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      if (lVar4 != 0) {
        return;
      }
    }
    TSet<FISMPoolStaticMeshInstance,DefaultKeyFuncs<FISMPoolStaticMeshInstance,0>,FDefaultSetAllocator>
    ::EmplaceByHash<FISMPoolStaticMeshInstance_const_&>
              (&(this->Pool).PrellocationQueue,(uint)local_res8,
               (FISMPoolStaticMeshInstance *)(ulonglong)uVar1,(bool *)param_1);
  }
  return;
}

// SetOverrideTransformUpdates @ 1463425e0

void __thiscall UISMPoolComponent::SetOverrideTransformUpdates(UISMPoolComponent *this,bool param_1)

{
  (this->Pool).bDisableBoundsAndTransformUpdate = param_1;
  return;
}

// SetTickablePoolManagement @ 1463425f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UISMPoolComponent::SetTickablePoolManagement(UISMPoolComponent *this,bool param_1)

{
  if (!param_1) {
    (this->Pool).bCachedKeepAlive = false;
    (this->Pool).bCachedRecycle = false;
  }
  FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->_padding_,param_1);
  return;
}

// StaticRegisterNativesUISMPoolComponent @ 146342930

void __cdecl UISMPoolComponent::StaticRegisterNativesUISMPoolComponent(void)

{
  return;
}

// TickComponent @ 146342bc0

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
UISMPoolComponent::TickComponent
          (UISMPoolComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  FISMPool::Tick(&this->Pool,this);
  return;
}

// UpdateAbsoluteTransforms @ 146343bd0

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
UISMPoolComponent::UpdateAbsoluteTransforms
          (UISMPoolComponent *this,TTransform<double> *param_1,EUpdateTransformFlags param_2,
          ETeleportType param_3)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  UInstancedStaticMeshComponent *this_00;
  code *pcVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  ulonglong uVar14;
  bool bVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  uint uVar24;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Pool).ISMs.ArrayNum;
  pFVar16 = (this->Pool).ISMs.AllocatorInstance.Data;
  uVar18 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
  uVar19 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  uVar20 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
  uVar21 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
  uVar22 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
  uVar23 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
  uVar24 = (uint)__xmm_80000000000000008000000000000000;
  uVar14 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
  pFVar17 = pFVar16 + (longlong)iVar2 * 0xb8;
  while( true ) {
    if ((this->Pool).ISMs.ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FISMPoolISM,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
      uVar18 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar19 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      uVar20 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
      uVar21 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
      uVar22 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
      uVar23 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    }
    if (pFVar16 == pFVar17) break;
    uVar3 = *(uint *)(pFVar16 + 0x28);
    if ((((double)CONCAT44(uVar23,uVar22) != *(double *)(pFVar16 + 0x30)) ||
        ((double)CONCAT44(uVar21,uVar20) != *(double *)(pFVar16 + 0x38))) ||
       ((double)CONCAT44(uVar19,uVar18) != *(double *)(pFVar16 + 0x40))) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("GcIsm.MeshInstance.Desc.Position == FVector::ZeroVector",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ISMPool\\Private\\ISMPool\\ISMPoolComponent.cpp"
                          ,0x233,L"");
      if (bVar15) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar22 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
      uVar23 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
      uVar20 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
      uVar21 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
      uVar18 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar19 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    }
    this_00 = *(UInstancedStaticMeshComponent **)(pFVar16 + 0x78);
    if (this_00 != (UInstancedStaticMeshComponent *)0x0) {
      if ((uVar3 & 8) == 0) {
        *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ | 1;
        dVar1 = (param_1->Rotation).XY.m128d_f64[1];
        this_00->_padding_ = (longlong)(param_1->Rotation).XY.m128d_f64[0];
        this_00->_padding_ = (longlong)dVar1;
        dVar1 = (param_1->Rotation).ZW.m128d_f64[1];
        this_00->_padding_ = (longlong)(param_1->Rotation).ZW.m128d_f64[0];
        this_00->_padding_ = (longlong)dVar1;
        dVar1 = (param_1->Translation).XY.m128d_f64[1];
        this_00->_padding_ = (longlong)(param_1->Translation).XY.m128d_f64[0];
        this_00->_padding_ = (longlong)dVar1;
        dVar1 = (param_1->Translation).ZW.m128d_f64[1];
        this_00->_padding_ = (longlong)(param_1->Translation).ZW.m128d_f64[0];
        this_00->_padding_ = (longlong)dVar1;
        dVar1 = (param_1->Scale3D).XY.m128d_f64[1];
        this_00->_padding_ = (longlong)(param_1->Scale3D).XY.m128d_f64[0];
        this_00->_padding_ = (longlong)dVar1;
        dVar1 = (param_1->Scale3D).ZW.m128d_f64[1];
        this_00->_padding_ = (longlong)(param_1->Scale3D).ZW.m128d_f64[0];
        this_00->_padding_ = (longlong)dVar1;
      }
      else {
        uVar3 = *(uint *)(param_1->Scale3D).XY.m128d_f64;
        uVar5 = *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 4);
        uVar18 = *(undefined4 *)((param_1->Scale3D).XY.m128d_f64 + 1);
        uVar19 = *(undefined4 *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 0xc);
        dVar1 = (param_1->Scale3D).ZW.m128d_f64[0];
        dVar6 = (param_1->Rotation).XY.m128d_f64[0];
        dVar7 = (param_1->Rotation).XY.m128d_f64[1];
        dVar8 = (param_1->Rotation).ZW.m128d_f64[0];
        dVar9 = (param_1->Rotation).ZW.m128d_f64[1];
        dVar10 = (param_1->Translation).XY.m128d_f64[0];
        dVar11 = (param_1->Translation).XY.m128d_f64[1];
        dVar12 = (param_1->Translation).ZW.m128d_f64[0];
        dVar13 = (param_1->Translation).ZW.m128d_f64[1];
        *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ | 1;
        this_00->_padding_ = (longlong)dVar6;
        this_00->_padding_ = (longlong)dVar7;
        this_00->_padding_ = (longlong)dVar8;
        this_00->_padding_ = (longlong)dVar9;
        this_00->_padding_ = (longlong)dVar10;
        this_00->_padding_ = (longlong)dVar11;
        this_00->_padding_ = (longlong)dVar12;
        this_00->_padding_ = (longlong)dVar13;
        *(uint *)&this_00->_padding_ = uVar3 ^ uVar24;
        *(uint *)((longlong)&this_00->_padding_ + 4) = uVar5 ^ (uint)uVar14;
        *(undefined4 *)&this_00->_padding_ = uVar18;
        *(undefined4 *)((longlong)&this_00->_padding_ + 4) = uVar19;
        this_00->_padding_ = (longlong)dVar1;
        this_00->_padding_ = 0;
      }
      UInstancedStaticMeshComponent::UpdateComponentTransform
                (this_00,param_2 | SkipPhysicsUpdate,param_3);
      UActorComponent::MarkRenderTransformDirty((UActorComponent *)this_00);
      uVar18 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar19 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      uVar20 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
      uVar21 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
      uVar22 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
      uVar23 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    }
    pFVar16 = pFVar16 + 0xb8;
  }
  return;
}

