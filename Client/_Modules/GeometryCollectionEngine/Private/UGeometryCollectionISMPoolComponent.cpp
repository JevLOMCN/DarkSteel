// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 18

// StaticClass @ 14639aec0

UClass * __cdecl UGeometryCollectionISMPoolComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCollectionISMPoolComponent.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCollectionEngine",L"GeometryCollectionISMPoolComponent",
               &Z_Registration_Info_UClass_UGeometryCollectionISMPoolComponent.InnerSingleton,
               StaticRegisterNativesUGeometryCollectionISMPoolComponent,0x380,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryCollectionISMPoolComponent>,
               InternalVTableHelperCtorCaller<UGeometryCollectionISMPoolComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCollectionISMPoolComponent.InnerSingleton;
}

// UGeometryCollectionISMPoolComponent @ 1463a43e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UGeometryCollectionISMPoolComponent * __thiscall
UGeometryCollectionISMPoolComponent::UGeometryCollectionISMPoolComponent
          (UGeometryCollectionISMPoolComponent *this,FVTableHelper *param_1)

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
  FGeometryCollectionISMPool::FGeometryCollectionISMPool(&this->Pool);
  return this;
}

// UGeometryCollectionISMPoolComponent @ 1463a4480

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UGeometryCollectionISMPoolComponent * __thiscall
UGeometryCollectionISMPoolComponent::UGeometryCollectionISMPoolComponent
          (UGeometryCollectionISMPoolComponent *this,FObjectInitializer *param_1)

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
  FGeometryCollectionISMPool::FGeometryCollectionISMPool(&this->Pool);
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3e800000;
  *(byte *)((longlong)&this->_padding_ + 2) = *(byte *)((longlong)&this->_padding_ + 2) & 0xf7 | 6;
  return this;
}

// ~UGeometryCollectionISMPoolComponent @ 1463a5c40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UGeometryCollectionISMPoolComponent::~UGeometryCollectionISMPoolComponent
          (UGeometryCollectionISMPoolComponent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  FGeometryCollectionISMPool::~FGeometryCollectionISMPool(&this->Pool);
  *(undefined4 *)&(this->MeshGroups).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MeshGroups).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FGeometryCollectionMeshGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FGeometryCollectionMeshGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FGeometryCollectionMeshGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MeshGroups);
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// AddMeshToGroup @ 1463a9d40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UGeometryCollectionISMPoolComponent::AddMeshToGroup
          (UGeometryCollectionISMPoolComponent *this,int param_1,
          FGeometryCollectionStaticMeshInstance *param_2,int param_3,
          TArrayView<float_const_,int> *param_4)

{
  code *pcVar1;
  float *pfVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  FGeometryCollectionMeshGroup *pFVar6;
  FGeometryCollectionMeshGroup *this_00;
  longlong lVar7;
  uint uVar8;
  FGeometryCollectionMeshGroup *pFVar9;
  undefined1 *puVar10;
  bool local_res10 [8];
  TArrayView<float_const_,int> local_78;
  TArrayView<float_const_,int> local_68;
  FGeometryCollectionMeshInfo local_58 [2];
  
  pFVar9 = (FGeometryCollectionMeshGroup *)0x0;
  pFVar6 = pFVar9;
  if (*(int *)&(this->MeshGroups).field_0x8 != *(int *)&(this->MeshGroups).field_0x34) {
    puVar10 = *(undefined1 **)&(this->MeshGroups).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->MeshGroups).field_0x38;
    }
    iVar5 = *(int *)(puVar10 +
                    (ulonglong)(*(int *)&(this->MeshGroups).field_0x48 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        pFVar6 = (FGeometryCollectionMeshGroup *)
                 (*(longlong *)&this->MeshGroups + (longlong)iVar5 * 0x28);
        if (*(int *)(*(longlong *)&this->MeshGroups + (longlong)iVar5 * 0x28) == param_1) break;
        iVar5 = pFVar6[1].MeshInfos.ArrayNum;
        pFVar6 = pFVar9;
      } while (iVar5 != -1);
    }
  }
  this_00 = (FGeometryCollectionMeshGroup *)&(pFVar6->MeshInfos).ArrayNum;
  if (pFVar6 == (FGeometryCollectionMeshGroup *)0x0) {
    this_00 = pFVar9;
  }
  if (this_00 == (FGeometryCollectionMeshGroup *)0x0) {
    if (2 < (byte)LogChaos._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
    return -1;
  }
  local_res10[0] = false;
  local_58[0].CustomData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pfVar2 = param_4->DataPtr;
  uVar3._0_4_ = param_4->ArrayNum;
  uVar3._4_4_ = *(undefined4 *)&param_4->field_0xc;
  local_58[0].CustomData.ArrayNum = 0;
  local_58[0].CustomData.ArrayMax = 0;
  local_58[0].ISMIndex =
       FGeometryCollectionISMPool::GetOrAddISM(&this->Pool,this,param_2,local_res10);
  lVar7 = (longlong)local_58[0].ISMIndex;
  uVar8 = 0;
  if (local_58[0].ISMIndex < (this->Pool).ISMs.ArrayNum) {
    uVar8 = (uint)~local_58[0].ISMIndex >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar1 = (code *)swi(3);
    iVar5 = (*pcVar1)();
    return iVar5;
  }
  local_78.DataPtr = pfVar2;
  local_78._8_8_ = uVar3;
  local_58[0].InstanceGroupIndex =
       FGeometryCollectionISM::AddInstanceGroup
                 ((FGeometryCollectionISM *)
                  ((this->Pool).ISMs.AllocatorInstance.Data + lVar7 * 0xb8),param_3,&local_78);
  local_68.DataPtr = param_4->DataPtr;
  local_68.ArrayNum = param_4->ArrayNum;
  local_68._12_4_ = *(undefined4 *)&param_4->field_0xc;
  iVar5 = FGeometryCollectionMeshGroup::AddMesh(this_00,param_2,param_3,local_58,&local_68);
  if (local_58[0].CustomData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].CustomData.AllocatorInstance.Data);
  }
  return iVar5;
}

// BatchUpdateInstanceCustomData @ 1463aab80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UGeometryCollectionISMPoolComponent::BatchUpdateInstanceCustomData
          (UGeometryCollectionISMPoolComponent *this,int param_1,int param_2,float param_3)

{
  longlong lVar1;
  FGeometryCollectionMeshInfo *pFVar2;
  int iVar3;
  FGeometryCollectionMeshInfo *pFVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 local_res10 [8];
  
  if (*(int *)&(this->MeshGroups).field_0x8 != *(int *)&(this->MeshGroups).field_0x34) {
    puVar6 = *(undefined1 **)&(this->MeshGroups).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->MeshGroups).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)(*(int *)&(this->MeshGroups).field_0x48 - 1U & param_1) * 4
                    );
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)&this->MeshGroups + (longlong)iVar3 * 0x28;
        if (*(int *)(*(longlong *)&this->MeshGroups + (longlong)iVar3 * 0x28) == param_1) {
          plVar5 = (longlong *)(lVar1 + 8);
          if (lVar1 == 0) {
            plVar5 = (longlong *)0x0;
          }
          if (plVar5 != (longlong *)0x0) {
            pFVar4 = (FGeometryCollectionMeshInfo *)*plVar5;
            lVar1 = plVar5[1];
            pFVar2 = pFVar4 + (int)lVar1;
            while( true ) {
              if ((int)plVar5[1] != (int)lVar1) {
                `TCheckedPointerIterator<FGeometryCollectionMeshInfo,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_res10);
              }
              if (pFVar4 == pFVar2) break;
              FGeometryCollectionISMPool::BatchUpdateInstanceCustomData
                        (&this->Pool,pFVar4,param_2,param_3);
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
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
  }
  return false;
}

// BatchUpdateInstancesTransforms @ 1463ab470

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UGeometryCollectionISMPoolComponent::BatchUpdateInstancesTransforms
          (UGeometryCollectionISMPoolComponent *this,int param_1,int param_2,int param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4,bool param_5,
          bool param_6,bool param_7)

{
  longlong lVar1;
  int iVar2;
  TTransform<double> *pTVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FStaticBasicLogRecord *pFVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_28;
  
  iVar2 = param_4->ArrayNum;
  pTVar3 = (TTransform<double> *)(param_4->AllocatorInstance).Data;
  if ((iVar2 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if (*(int *)&(this->MeshGroups).field_0x8 != *(int *)&(this->MeshGroups).field_0x34) {
    puVar9 = *(undefined1 **)&(this->MeshGroups).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->MeshGroups).field_0x38;
    }
    iVar7 = *(int *)(puVar9 + (ulonglong)(*(int *)&(this->MeshGroups).field_0x48 - 1U & param_1) * 4
                    );
    if (iVar7 != -1) {
      do {
        lVar1 = *(longlong *)&this->MeshGroups + (longlong)iVar7 * 0x28;
        if (*(int *)(*(longlong *)&this->MeshGroups + (longlong)iVar7 * 0x28) == param_1) {
          plVar10 = (longlong *)(lVar1 + 8);
          if (lVar1 == 0) {
            plVar10 = (longlong *)0x0;
          }
          if (plVar10 != (longlong *)0x0) {
            if ((-1 < param_2) && (param_2 < (int)plVar10[1])) {
              lVar1 = plVar10[2];
              if ((param_2 < 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              local_28.ArrayNum = iVar2;
              local_28.DataPtr = pTVar3;
              bVar5 = FGeometryCollectionISMPool::BatchUpdateInstancesTransforms
                                (&this->Pool,
                                 (FGeometryCollectionMeshInfo *)
                                 (*plVar10 + (longlong)param_2 * 0x18),param_3,&local_28,param_5,
                                 param_6,param_7,SUB81(lVar1,0));
              return bVar5;
            }
            if ((byte)LogChaos._0_1_ < 3) {
              return false;
            }
            pFVar8 = &::LOG_Static;
            goto LAB_1463ab54a;
          }
          break;
        }
        iVar7 = *(int *)(lVar1 + 0x20);
      } while (iVar7 != -1);
    }
  }
  if (2 < (byte)LogChaos._0_1_) {
    pFVar8 = &::LOG_Static;
LAB_1463ab54a:
    UE::Logging::Private::BasicLog<3>(pFVar8,(FLogCategoryBase *)&LogChaos);
  }
  return false;
}

// BatchUpdateInstancesTransforms @ 1463ab670

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UGeometryCollectionISMPoolComponent::BatchUpdateInstancesTransforms
          (UGeometryCollectionISMPoolComponent *this,int param_1,int param_2,int param_3,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_4,bool param_5,bool param_6,
          bool param_7)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FStaticBasicLogRecord *pFVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_18;
  
  if (*(int *)&(this->MeshGroups).field_0x8 != *(int *)&(this->MeshGroups).field_0x34) {
    puVar11 = *(undefined1 **)&(this->MeshGroups).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->MeshGroups).field_0x38;
    }
    iVar8 = *(int *)(puVar11 +
                    (ulonglong)(*(int *)&(this->MeshGroups).field_0x48 - 1U & param_1) * 4);
    if (iVar8 != -1) {
      do {
        lVar1 = *(longlong *)&this->MeshGroups + (longlong)iVar8 * 0x28;
        if (*(int *)(*(longlong *)&this->MeshGroups + (longlong)iVar8 * 0x28) == param_1) {
          plVar10 = (longlong *)(lVar1 + 8);
          if (lVar1 == 0) {
            plVar10 = (longlong *)0x0;
          }
          if (plVar10 != (longlong *)0x0) {
            if ((-1 < param_2) && (param_2 < (int)plVar10[1])) {
              lVar1 = plVar10[2];
              uVar3 = *(undefined4 *)&param_4->DataPtr;
              uVar4 = *(undefined4 *)((longlong)&param_4->DataPtr + 4);
              iVar8 = param_4->ArrayNum;
              uVar5 = *(undefined4 *)&param_4->field_0xc;
              if ((param_2 < 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar2 = (code *)swi(3);
                uVar7 = (*pcVar2)();
                return (bool)uVar7;
              }
              local_18.DataPtr._0_4_ = uVar3;
              local_18.DataPtr._4_4_ = uVar4;
              local_18.ArrayNum = iVar8;
              local_18._12_4_ = uVar5;
              bVar6 = FGeometryCollectionISMPool::BatchUpdateInstancesTransforms
                                (&this->Pool,
                                 (FGeometryCollectionMeshInfo *)
                                 (*plVar10 + (longlong)param_2 * 0x18),param_3,&local_18,param_5,
                                 param_6,param_7,SUB81(lVar1,0));
              return bVar6;
            }
            if ((byte)LogChaos._0_1_ < 3) {
              return false;
            }
            pFVar9 = &::LOG_Static;
            goto LAB_1463ab6fb;
          }
          break;
        }
        iVar8 = *(int *)(lVar1 + 0x20);
      } while (iVar8 != -1);
    }
  }
  if (2 < (byte)LogChaos._0_1_) {
    pFVar9 = &::LOG_Static;
LAB_1463ab6fb:
    UE::Logging::Private::BasicLog<3>(pFVar9,(FLogCategoryBase *)&LogChaos);
  }
  return false;
}

// CreateMeshGroup @ 1463af260

int __thiscall
UGeometryCollectionISMPoolComponent::CreateMeshGroup
          (UGeometryCollectionISMPoolComponent *this,bool param_1)

{
  uint uVar1;
  TPairInitializer<int_&&,FGeometryCollectionMeshGroup_const_&> local_res8;
  FGeometryCollectionMeshGroup **local_38;
  FGeometryCollectionMeshInfo **local_30;
  FGeometryCollectionMeshInfo *local_28;
  undefined8 local_20;
  undefined1 local_18;
  
  local_28 = (FGeometryCollectionMeshInfo *)0x0;
  local_20 = 0;
  local_res8.Value._0_4_ = this->NextMeshGroupId;
  local_38 = &local_res8.Value;
  local_30 = &local_28;
  local_18 = param_1;
  TSet<TTuple<int,FGeometryCollectionMeshGroup>,TDefaultMapHashableKeyFuncs<int,FGeometryCollectionMeshGroup,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_&&,FGeometryCollectionMeshGroup_const_&>_>
            ((TSet<TTuple<int,FGeometryCollectionMeshGroup>,TDefaultMapHashableKeyFuncs<int,FGeometryCollectionMeshGroup,0>,FDefaultSetAllocator>
              *)&this->MeshGroups,&local_res8,(bool *)&local_38);
  uVar1 = this->NextMeshGroupId;
  this->NextMeshGroupId = uVar1 + 1;
  DestructItems<FGeometryCollectionMeshInfo,int>(local_28,(int)local_20);
  if (local_28 != (FGeometryCollectionMeshInfo *)0x0) {
    FMemory::Free(local_28);
  }
  return uVar1;
}

// DestroyMeshGroup @ 1463b02c0

void __thiscall
UGeometryCollectionISMPoolComponent::DestroyMeshGroup
          (UGeometryCollectionISMPoolComponent *this,int param_1)

{
  int *piVar1;
  longlong lVar2;
  FGeometryCollectionMeshInfo *pFVar3;
  longlong lVar4;
  int iVar5;
  undefined1 *puVar6;
  FGeometryCollectionMeshInfo *pFVar7;
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
        pFVar7 = (FGeometryCollectionMeshInfo *)pFVar8->Data;
        iVar5 = *(int *)&pFVar8[1].Data;
        pFVar3 = pFVar7 + iVar5;
        while( true ) {
          if (*(int *)&pFVar8[1].Data != iVar5) {
            `TCheckedPointerIterator<FGeometryCollectionMeshInfo,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res10);
          }
          if (pFVar7 == pFVar3) break;
          FGeometryCollectionISMPool::RemoveInstancesFromISM(&this->Pool,pFVar7);
          pFVar7 = pFVar7 + 1;
        }
        DestructItems<FGeometryCollectionMeshInfo,int>
                  ((FGeometryCollectionMeshInfo *)pFVar8->Data,*(int *)&pFVar8[1].Data);
        piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
        *(undefined4 *)&pFVar8[1].Data = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,pFVar8,0,piVar1);
        }
        if (*(int *)&(this->MeshGroups).field_0x8 != *(int *)&(this->MeshGroups).field_0x34) {
          local_res10[0] = param_1;
          TSet<TTuple<int,FGeometryCollectionMeshGroup>,TDefaultMapHashableKeyFuncs<int,FGeometryCollectionMeshGroup,0>,FDefaultSetAllocator>
          ::RemoveImpl<int>((TSet<TTuple<int,FGeometryCollectionMeshGroup>,TDefaultMapHashableKeyFuncs<int,FGeometryCollectionMeshGroup,0>,FDefaultSetAllocator>
                             *)&this->MeshGroups,param_1,local_res10);
        }
      }
    }
  }
  return;
}

// GetPrivateStaticClass @ 1463b7590

UClass * __cdecl UGeometryCollectionISMPoolComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCollectionISMPoolComponent.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCollectionEngine",L"GeometryCollectionISMPoolComponent",
               &Z_Registration_Info_UClass_UGeometryCollectionISMPoolComponent.InnerSingleton,
               StaticRegisterNativesUGeometryCollectionISMPoolComponent,0x380,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryCollectionISMPoolComponent>,
               InternalVTableHelperCtorCaller<UGeometryCollectionISMPoolComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCollectionISMPoolComponent.InnerSingleton;
}

// GetResourceSizeEx @ 1463b7bf0

void __thiscall
UGeometryCollectionISMPoolComponent::GetResourceSizeEx
          (UGeometryCollectionISMPoolComponent *this,FResourceSizeEx *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  FGeometryCollectionStaticMeshInstance *pFVar6;
  longlong lVar7;
  FGeometryCollectionStaticMeshInstance *pFVar8;
  int iVar9;
  undefined1 local_res8 [8];
  FResourceSizeEx *local_res10;
  FGeometryCollectionStaticMeshInstance local_f8;
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
  pFVar6 = (FGeometryCollectionStaticMeshInstance *)(this->Pool).ISMs.AllocatorInstance.Data;
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
  pFVar8 = (FGeometryCollectionStaticMeshInstance *)((longlong)pFVar6 + (longlong)iVar3 * 0xb8);
  while( true ) {
    if ((this->Pool).ISMs.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FGeometryCollectionISM,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar8) break;
    FGeometryCollectionStaticMeshInstance::FGeometryCollectionStaticMeshInstance(&local_f8,pFVar6);
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
    pFVar6 = (FGeometryCollectionStaticMeshInstance *)
             ((longlong)&pFVar6[1].Desc.Position.field0_0x0 + 0x10);
  }
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(local_res10,(longlong)iVar9);
  return;
}

// PreallocateMeshInstance @ 1463bd840

void __thiscall
UGeometryCollectionISMPoolComponent::PreallocateMeshInstance
          (UGeometryCollectionISMPoolComponent *this,FGeometryCollectionStaticMeshInstance *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  if ((this->Pool).bCachedKeepAlive != false) {
    uVar1 = ::GetTypeHash(param_1);
    iVar2 = TSet<TTuple<FGeometryCollectionStaticMeshInstance,int>,TDefaultMapHashableKeyFuncs<FGeometryCollectionStaticMeshInstance,int,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FGeometryCollectionStaticMeshInstance>
                      ((TSet<TTuple<FGeometryCollectionStaticMeshInstance,int>,TDefaultMapHashableKeyFuncs<FGeometryCollectionStaticMeshInstance,int,0>,FDefaultSetAllocator>
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
    TSet<FGeometryCollectionStaticMeshInstance,DefaultKeyFuncs<FGeometryCollectionStaticMeshInstance,0>,FDefaultSetAllocator>
    ::EmplaceByHash<FGeometryCollectionStaticMeshInstance_const_&>
              (&(this->Pool).PrellocationQueue,(uint)local_res8,
               (FGeometryCollectionStaticMeshInstance *)(ulonglong)uVar1,(bool *)param_1);
  }
  return;
}

// SetOverrideTransformUpdates @ 1463c9470

void __thiscall
UGeometryCollectionISMPoolComponent::SetOverrideTransformUpdates
          (UGeometryCollectionISMPoolComponent *this,bool param_1)

{
  (this->Pool).bDisableBoundsAndTransformUpdate = param_1;
  return;
}

// SetTickablePoolManagement @ 1463c96f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGeometryCollectionISMPoolComponent::SetTickablePoolManagement
          (UGeometryCollectionISMPoolComponent *this,bool param_1)

{
  if (!param_1) {
    (this->Pool).bCachedKeepAlive = false;
    (this->Pool).bCachedRecycle = false;
  }
  FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->_padding_,param_1);
  return;
}

// StaticRegisterNativesUGeometryCollectionISMPoolComponent @ 1463c9c10

void __cdecl
UGeometryCollectionISMPoolComponent::StaticRegisterNativesUGeometryCollectionISMPoolComponent(void)

{
  return;
}

// TickComponent @ 1463cab60

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
UGeometryCollectionISMPoolComponent::TickComponent
          (UGeometryCollectionISMPoolComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  FGeometryCollectionISMPool::Tick(&this->Pool,this);
  return;
}

// UpdateAbsoluteTransforms @ 1463cd630

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
UGeometryCollectionISMPoolComponent::UpdateAbsoluteTransforms
          (UGeometryCollectionISMPoolComponent *this,TTransform<double> *param_1,
          EUpdateTransformFlags param_2,ETeleportType param_3)

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
      `TCheckedPointerIterator<FGeometryCollectionISM,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
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
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionISMPoolComponent.cpp"
                          ,0x22c,L"");
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

