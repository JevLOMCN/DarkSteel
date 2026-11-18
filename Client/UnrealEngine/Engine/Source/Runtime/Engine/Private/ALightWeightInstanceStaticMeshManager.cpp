// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 44

// StaticClass @ 147e8e530

UClass * __cdecl ALightWeightInstanceStaticMeshManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALightWeightInstanceStaticMeshManager.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightWeightInstanceStaticMeshManager",
               &Z_Registration_Info_UClass_ALightWeightInstanceStaticMeshManager.InnerSingleton,
               StaticRegisterNativesALightWeightInstanceStaticMeshManager,0x3f0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ALightWeightInstanceStaticMeshManager>,
               InternalVTableHelperCtorCaller<ALightWeightInstanceStaticMeshManager>,local_res8,
               ALightWeightInstanceManager::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALightWeightInstanceStaticMeshManager.InnerSingleton;
}

// ALightWeightInstanceStaticMeshManager @ 147ea4040

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ALightWeightInstanceStaticMeshManager * __thiscall
ALightWeightInstanceStaticMeshManager::ALightWeightInstanceStaticMeshManager
          (ALightWeightInstanceStaticMeshManager *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  ALightWeightInstanceManager::ALightWeightInstanceManager
            ((ALightWeightInstanceManager *)this,param_1);
  this_00 = &(this->StaticMesh).SoftObjectPtr.field_0x18;
  *(undefined8 *)this_00 = 0;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x20 = 0;
  this->_padding_ = (longlong)&_vftable__for__IActorInstanceManagerInterface__;
  this->_padding_ = (longlong)&___7ALightWeightInstanceStaticMeshManager__6B_;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->ISMComponent).field0_0x0.DebugPtr = (UInstancedStaticMeshComponent *)0x0;
  (this->RenderingIndicesToDataIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RenderingIndicesToDataIndices).ArrayNum = 0;
  (this->RenderingIndicesToDataIndices).ArrayMax = 0;
  (this->DataIndicesToRenderingIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataIndicesToRenderingIndices).ArrayNum = 0;
  (this->DataIndicesToRenderingIndices).ArrayMax = 0;
  (this->DataIndicesToBeDeleted).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataIndicesToBeDeleted).ArrayNum = 0;
  (this->DataIndicesToBeDeleted).ArrayMax = 0;
  return this;
}

// ALightWeightInstanceStaticMeshManager @ 147ea40f0

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

ALightWeightInstanceStaticMeshManager * __thiscall
ALightWeightInstanceStaticMeshManager::ALightWeightInstanceStaticMeshManager
          (ALightWeightInstanceStaticMeshManager *this,FObjectInitializer *param_1)

{
  TSoftObjectPtr<UStaticMesh> *this_00;
  byte *pbVar1;
  undefined1 *this_01;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName *pFVar5;
  UClass *pUVar6;
  UInstancedStaticMeshComponent *pUVar7;
  FName FVar8;
  FName FVar9;
  FUObjectItem *pFVar10;
  FName FVar11;
  FName this_02;
  UMaterialInterface *pUVar12;
  FName FVar13;
  FName local_res8;
  
  ALightWeightInstanceManager::ALightWeightInstanceManager
            ((ALightWeightInstanceManager *)this,param_1);
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
  this_00 = &this->StaticMesh;
  this_01 = &(this->StaticMesh).SoftObjectPtr.field_0x18;
  *(undefined8 *)&this_00->SoftObjectPtr = 0;
  *(undefined8 *)this_01 = 0;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x20 = 0;
  this->_padding_ = (longlong)&_vftable__for__IActorInstanceManagerInterface__;
  this->_padding_ = (longlong)&___7ALightWeightInstanceStaticMeshManager__6B_;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x8 = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FUtf8String::Reset((FUtf8String *)this_01,0);
  (this->ISMComponent).field0_0x0.DebugPtr = (UInstancedStaticMeshComponent *)0x0;
  (this->RenderingIndicesToDataIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RenderingIndicesToDataIndices).ArrayNum = 0;
  (this->RenderingIndicesToDataIndices).ArrayMax = 0;
  (this->DataIndicesToRenderingIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataIndicesToRenderingIndices).ArrayNum = 0;
  (this->DataIndicesToRenderingIndices).ArrayMax = 0;
  (this->DataIndicesToBeDeleted).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataIndicesToBeDeleted).ArrayNum = 0;
  (this->DataIndicesToBeDeleted).ArrayMax = 0;
  pFVar5 = ::FName::FName(&local_res8,L"ISMComponent0");
  FVar8 = *pFVar5;
  pUVar6 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
  pUVar7 = (UInstancedStaticMeshComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar8,pUVar6,pUVar6,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (UInstancedStaticMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->ISMComponent).field0_0x0.DebugPtr = pUVar7;
  pUVar7->bSupportRemoveAtSwap = '\x01';
  AActor::SetRootComponent
            ((AActor *)this,(USceneComponent *)(this->ISMComponent).field0_0x0.DebugPtr);
  AActor::AddInstanceComponent
            ((AActor *)this,(UActorComponent *)(this->ISMComponent).field0_0x0.DebugPtr);
  FVar8 = (FName)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  if ((FVar8 == (FName)0x0) && (*(longlong *)&(this->StaticMesh).SoftObjectPtr.field_0x8 != 0)) {
    FVar9 = (FName)FSoftObjectPath::ResolveObject
                             ((FSoftObjectPath *)&(this->StaticMesh).SoftObjectPtr.field_0x8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar9 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar9);
    }
    bVar3 = (*IsInAsyncLoadingThread)();
    if (((bVar3) && (FVar9 != (FName)0x0)) &&
       (pFVar10 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)FVar9 + 0xc)),
       ((pFVar10->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_147ea42b4:
      if ((*(uint *)((longlong)FVar9 + 8) >> 0x1e & 1) != 0) goto LAB_147ea42c2;
      bVar3 = true;
    }
    else {
      local_res8 = FVar9;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar9 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar9);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_res8);
      if (FVar9 != (FName)0x0) goto LAB_147ea42b4;
LAB_147ea42c2:
      bVar3 = false;
    }
    FVar8.ComparisonIndex.Value = 0;
    FVar8.Number = 0;
    if (bVar3) {
      FVar8 = FVar9;
    }
  }
  if (FVar8 == (FName)0x0) goto LAB_147ea4665;
  pUVar6 = Z_Construct_UClass_UStaticMesh_NoRegister();
  iVar4 = (int)pUVar6->_padding_;
  if (((*(int *)(*(longlong *)((longlong)FVar8 + 0x10) + 0x38) < iVar4) ||
      ((longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)((longlong)FVar8 + 0x10) + 0x30) + (longlong)iVar4 * 8) !=
       &pUVar6->_padding_)) ||
     (pUVar7 = (this->ISMComponent).field0_0x0.DebugPtr,
     pUVar7 == (UInstancedStaticMeshComponent *)0x0)) goto LAB_147ea4665;
  if (*(char *)((longlong)&pUVar7->_padding_ + 3) == '\0') {
    (**(code **)(pUVar7->_padding_ + 0x5f8))(pUVar7,1);
    pUVar7 = (this->ISMComponent).field0_0x0.DebugPtr;
    pcVar2 = *(code **)(pUVar7->_padding_ + 0xb28);
    FVar11 = (FName)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    if ((FVar11 == (FName)0x0) && (*(longlong *)&(this->StaticMesh).SoftObjectPtr.field_0x8 != 0)) {
      FVar8 = (FName)FSoftObjectPath::ResolveObject
                               ((FSoftObjectPath *)&(this->StaticMesh).SoftObjectPtr.field_0x8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar8);
      }
      bVar3 = (*IsInAsyncLoadingThread)();
      if (((bVar3) && (FVar8 != (FName)0x0)) &&
         (pFVar10 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)FVar8 + 0xc)),
         ((pFVar10->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_147ea43e6:
        if ((*(uint *)((longlong)FVar8 + 8) >> 0x1e & 1) != 0) goto LAB_147ea43f4;
        bVar3 = true;
      }
      else {
        local_res8 = FVar8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar8);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_res8);
        if (FVar8 != (FName)0x0) goto LAB_147ea43e6;
LAB_147ea43f4:
        bVar3 = false;
      }
      FVar11.ComparisonIndex.Value = 0;
      FVar11.Number = 0;
      if (bVar3) {
        FVar11 = FVar8;
      }
    }
    if (FVar11 == (FName)0x0) {
LAB_147ea4427:
      FVar11 = FVar13;
    }
    else {
      pUVar6 = Z_Construct_UClass_UStaticMesh_NoRegister();
      iVar4 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)((longlong)FVar11 + 0x10) + 0x38) < iVar4) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)((longlong)FVar11 + 0x10) + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar6->_padding_)) goto LAB_147ea4427;
    }
    (*pcVar2)(pUVar7,FVar11);
    pUVar7 = (this->ISMComponent).field0_0x0.DebugPtr;
    (**(code **)(pUVar7->_padding_ + 0x5f8))(pUVar7,0);
  }
  else {
    pcVar2 = *(code **)(pUVar7->_padding_ + 0xb28);
    FVar9 = (FName)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    if ((FVar9 == (FName)0x0) && (*(longlong *)&(this->StaticMesh).SoftObjectPtr.field_0x8 != 0)) {
      FVar8 = (FName)FSoftObjectPath::ResolveObject
                               ((FSoftObjectPath *)&(this->StaticMesh).SoftObjectPtr.field_0x8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar8);
      }
      bVar3 = (*IsInAsyncLoadingThread)();
      if (((bVar3) && (FVar8 != (FName)0x0)) &&
         (pFVar10 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)FVar8 + 0xc)),
         ((pFVar10->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_147ea44ed:
        if ((*(uint *)((longlong)FVar8 + 8) >> 0x1e & 1) != 0) goto LAB_147ea44fb;
        bVar3 = true;
      }
      else {
        local_res8 = FVar8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar8);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_res8);
        if (FVar8 != (FName)0x0) goto LAB_147ea44ed;
LAB_147ea44fb:
        bVar3 = false;
      }
      FVar9.ComparisonIndex.Value = 0;
      FVar9.Number = 0;
      if (bVar3) {
        FVar9 = FVar8;
      }
    }
    if (FVar9 == (FName)0x0) {
LAB_147ea452e:
      FVar9 = FVar13;
    }
    else {
      pUVar6 = Z_Construct_UClass_UStaticMesh_NoRegister();
      iVar4 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)((longlong)FVar9 + 0x10) + 0x38) < iVar4) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)((longlong)FVar9 + 0x10) + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar6->_padding_)) goto LAB_147ea452e;
    }
    (*pcVar2)(pUVar7,FVar9);
  }
  this_02 = (FName)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  if ((this_02 == (FName)0x0) && (*(longlong *)&(this->StaticMesh).SoftObjectPtr.field_0x8 != 0)) {
    FVar8 = (FName)FSoftObjectPath::ResolveObject
                             ((FSoftObjectPath *)&(this->StaticMesh).SoftObjectPtr.field_0x8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar8);
    }
    bVar3 = (*IsInAsyncLoadingThread)();
    if (((bVar3) && (FVar8 != (FName)0x0)) &&
       (pFVar10 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)FVar8 + 0xc)),
       ((pFVar10->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_147ea45db:
      if ((*(uint *)((longlong)FVar8 + 8) >> 0x1e & 1) != 0) goto LAB_147ea45e9;
      bVar3 = true;
    }
    else {
      local_res8 = FVar8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar8);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_res8);
      if (FVar8 != (FName)0x0) goto LAB_147ea45db;
LAB_147ea45e9:
      bVar3 = false;
    }
    this_02.ComparisonIndex.Value = 0;
    this_02.Number = 0;
    if (bVar3) {
      this_02 = FVar8;
    }
  }
  if (this_02 != (FName)0x0) {
    pUVar6 = Z_Construct_UClass_UStaticMesh_NoRegister();
    iVar4 = (int)pUVar6->_padding_;
    if (((iVar4 <= *(int *)(*(longlong *)((longlong)this_02 + 0x10) + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)((longlong)this_02 + 0x10) + 0x30) + (longlong)iVar4 * 8) ==
         &pUVar6->_padding_)) && (0 < *(int *)((longlong)this_02 + 0x178))) {
      do {
        pUVar7 = (this->ISMComponent).field0_0x0.DebugPtr;
        pcVar2 = *(code **)(pUVar7->_padding_ + 0x6b8);
        pUVar12 = UStaticMesh::GetMaterial
                            ((UStaticMesh *)this_02,FVar13.ComparisonIndex.Value.Value);
        (*pcVar2)(pUVar7,FVar13,pUVar12);
        FVar13.ComparisonIndex.Value = FVar13.ComparisonIndex.Value.Value + 1;
        FVar13.Number = 0;
      } while ((int)FVar13.ComparisonIndex.Value < *(int *)((longlong)this_02 + 0x178));
    }
  }
LAB_147ea4665:
  ::FName::FName(&local_res8,L"LightWeightInstancedStaticMeshPhysics");
  pUVar7 = (this->ISMComponent).field0_0x0.DebugPtr;
  (**(code **)(pUVar7->_padding_ + 0x788))(pUVar7,local_res8,1);
  *(undefined1 *)((longlong)&((this->ISMComponent).field0_0x0.DebugPtr)->_padding_ + 7) = 2;
  pbVar1 = (byte *)((longlong)&((this->ISMComponent).field0_0x0.DebugPtr)->_padding_ + 6);
  *pbVar1 = *pbVar1 | 1;
  pbVar1 = (byte *)((longlong)&((this->ISMComponent).field0_0x0.DebugPtr)->_padding_ + 6);
  *pbVar1 = *pbVar1 | 0x20;
  pbVar1 = (byte *)((longlong)&((this->ISMComponent).field0_0x0.DebugPtr)->_padding_ + 6);
  *pbVar1 = *pbVar1 | 0x40;
  pbVar1 = (byte *)((longlong)&((this->ISMComponent).field0_0x0.DebugPtr)->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfd;
  *(undefined1 *)((longlong)&((this->ISMComponent).field0_0x0.DebugPtr)->_padding_ + 3) = 2;
  pbVar1 = (byte *)((longlong)&((this->ISMComponent).field0_0x0.DebugPtr)->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0x80;
  bVar3 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar3) {
    iVar4 = ((this->ISMComponent).field0_0x0.DebugPtr)->InstancingRandomSeed;
    while (iVar4 == 0) {
      iVar4 = rand();
      ((this->ISMComponent).field0_0x0.DebugPtr)->InstancingRandomSeed = iVar4;
      iVar4 = ((this->ISMComponent).field0_0x0.DebugPtr)->InstancingRandomSeed;
    }
  }
  return this;
}

// ~ALightWeightInstanceStaticMeshManager @ 147ea8b50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
ALightWeightInstanceStaticMeshManager::~ALightWeightInstanceStaticMeshManager
          (ALightWeightInstanceStaticMeshManager *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__IActorInstanceManagerInterface__;
  this->_padding_ = (longlong)&___7ALightWeightInstanceStaticMeshManager__6B_;
  pFVar1 = (this->DataIndicesToBeDeleted).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DataIndicesToRenderingIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RenderingIndicesToDataIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->StaticMesh).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  this->_padding_ = (longlong)&___7ISMInstanceManager__6B_;
  ALightWeightInstanceManager::~ALightWeightInstanceManager((ALightWeightInstanceManager *)this);
  return;
}

// AddInstanceToRendering @ 147eadf10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ALightWeightInstanceStaticMeshManager::AddInstanceToRendering
          (ALightWeightInstanceStaticMeshManager *this,int param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  void *_Src;
  UInstancedStaticMeshComponent *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  uint *local_res8;
  uint local_res10 [2];
  FName local_res18;
  int local_58 [2];
  FString local_50;
  
  pTVar2 = &this->RenderingIndicesToDataIndices;
  pFVar11 = (pTVar2->AllocatorInstance).Data;
  pFVar3 = pFVar11 + (longlong)(this->RenderingIndicesToDataIndices).ArrayNum * 4;
  for (; local_res10[0] = param_1, pFVar11 != pFVar3; pFVar11 = pFVar11 + 4) {
    if (*(int *)pFVar11 == param_1) {
      local_res8 = local_res10;
      bVar6 = `ALightWeightInstanceStaticMeshManager::AddInstanceToRendering'::__l3::<lambda_1>::
              operator()(&local_res8);
      if (!bVar6) {
        return;
      }
      break;
    }
  }
  pFVar3 = (this->DataIndicesToBeDeleted).AllocatorInstance.Data;
  iVar8 = (this->DataIndicesToBeDeleted).ArrayNum;
  pFVar11 = pFVar3;
  do {
    if (pFVar11 == pFVar3 + (longlong)iVar8 * 4) {
LAB_147eadfb5:
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_res10) &&
          ((FScriptContainerElement *)local_res10 <
           pFVar3 + (longlong)(this->RenderingIndicesToDataIndices).ArrayMax * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_58[0] = (this->RenderingIndicesToDataIndices).ArrayNum;
      piVar1 = &(this->RenderingIndicesToDataIndices).ArrayMax;
      if (local_58[0] == *piVar1) {
        local_58[0] = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->RenderingIndicesToDataIndices).ArrayNum = local_58[0] + 1;
      *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)local_58[0] * 4) = local_res10[0];
      if (5 < (byte)LogLightWeightInstance._0_1_) {
        iVar8 = (int)this->_padding_;
        if (iVar8 < 2) {
          local_res18 = (FName)this->_padding_;
          ::FName::ToString(&local_res18,&local_50);
        }
        else {
          _Src = (void *)this->_padding_;
          local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_50.Data.ArrayNum = iVar8;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar8,0,(ForAnyElementType *)&local_50,iVar8,&local_50.Data.ArrayMax);
          memcpy(local_50.Data.AllocatorInstance.Data,_Src,(longlong)iVar8 * 2);
        }
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLightWeightInstance)
        ;
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
      }
      iVar9 = local_58[0];
      iVar8 = (this->DataIndicesToRenderingIndices).ArrayNum;
      pTVar2 = &this->DataIndicesToRenderingIndices;
      lVar10 = (longlong)(int)local_res10[0];
      if ((int)local_res10[0] < iVar8) {
        uVar7 = 0;
        if ((int)local_res10[0] < iVar8) {
          uVar7 = ~local_res10[0] >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(int *)((pTVar2->AllocatorInstance).Data + lVar10 * 4) = iVar9;
      }
      else {
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)local_58) &&
            ((FScriptContainerElement *)local_58 <
             pFVar3 + (longlong)(this->DataIndicesToRenderingIndices).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar7 = (this->DataIndicesToRenderingIndices).ArrayNum;
        piVar1 = &(this->DataIndicesToRenderingIndices).ArrayMax;
        if (uVar7 == *piVar1) {
          uVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar2->AllocatorInstance,piVar1);
        }
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        (this->DataIndicesToRenderingIndices).ArrayNum = uVar7 + 1;
        *(int *)(pFVar3 + (longlong)(int)uVar7 * 4) = local_58[0];
        if ((local_res10[0] != uVar7) &&
           (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_4577831093335490392>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceStaticMeshManager.cpp"
                               ,0xa8,"DataIndex == DataIndicesToRenderingIndices.Add(RenderingIdx)")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pUVar4 = (this->ISMComponent).field0_0x0.DebugPtr;
      if (pUVar4 != (UInstancedStaticMeshComponent *)0x0) {
        lVar10 = (longlong)(int)local_res10[0];
        pcVar5 = *(code **)(pUVar4->_padding_ + 0xbb0);
        uVar7 = 0;
        if ((int)local_res10[0] < (int)this->_padding_) {
          uVar7 = ~local_res10[0] >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (*pcVar5)(pUVar4,lVar10 * 0x60 + this->_padding_,0);
        if ((local_58[0] != iVar8) &&
           (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_4577831093335490382>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceStaticMeshManager.cpp"
                               ,0xb2,
                               "RenderingIdx == ISMComponent->AddInstance(InstanceTransforms[DataIndex], false)"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      return;
    }
    if (*(uint *)pFVar11 == local_res10[0]) {
      iVar9 = (int)((longlong)pFVar11 - (longlong)pFVar3 >> 2);
      if (iVar9 != -1) {
        memmove(pFVar3 + (longlong)iVar9 * 4,pFVar3 + (longlong)iVar9 * 4 + 4,
                (longlong)((iVar8 - iVar9) + -1) << 2);
        piVar1 = &(this->DataIndicesToBeDeleted).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      goto LAB_147eadfb5;
    }
    pFVar11 = pFVar11 + 4;
  } while( true );
}

// AddNewInstanceAt @ 147eae730

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
ALightWeightInstanceStaticMeshManager::AddNewInstanceAt
          (ALightWeightInstanceStaticMeshManager *this,FLWIData *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((int)this->_padding_ <= param_2) {
    (**(code **)(this->_padding_ + 0x7c0))();
  }
  if ((int)this->_padding_ <= param_2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6448883726972616278>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceManager.cpp"
                       ,0x1aa,"Index < ValidIndices.Num()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(this->_padding_ + 0x7c8))(this,param_1,param_2);
  uVar3 = 0;
  if (param_2 < (int)this->_padding_) {
    uVar3 = (uint)~param_2 >> 0x1f;
  }
  if (uVar3 == 0) {
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
  *(undefined1 *)((longlong)param_2 + this->_padding_) = 1;
  AddInstanceToRendering(this,param_2);
  return;
}

// CanEditSMInstance @ 147eb3550

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
ALightWeightInstanceStaticMeshManager::CanEditSMInstance
          (ALightWeightInstanceStaticMeshManager *this,FSMInstanceId *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  bool bVar4;
  
  if ((UInstancedStaticMeshComponent *)this->_padding_ == (UInstancedStaticMeshComponent *)0x0) {
    bVar4 = param_1->ISMComponent == (UInstancedStaticMeshComponent *)0x0;
  }
  else {
    bVar4 = (UInstancedStaticMeshComponent *)this->_padding_ == param_1->ISMComponent;
  }
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceId.ISMComponent == ISMComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceStaticMeshManager.cpp"
                       ,0x174,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return (bool)uVar2;
    }
  }
  plVar3 = (longlong *)(this->_padding_ + 0x650);
  if (this->_padding_ == 0) {
    plVar3 = (longlong *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x000147eb35c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar3 + 0x20))(plVar3,param_1);
  return (bool)uVar2;
}

// CanMoveSMInstance @ 147eb35d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
ALightWeightInstanceStaticMeshManager::CanMoveSMInstance
          (ALightWeightInstanceStaticMeshManager *this,FSMInstanceId *param_1,
          ETypedElementWorldType param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  bool bVar4;
  
  if ((UInstancedStaticMeshComponent *)this->_padding_ == (UInstancedStaticMeshComponent *)0x0) {
    bVar4 = param_1->ISMComponent == (UInstancedStaticMeshComponent *)0x0;
  }
  else {
    bVar4 = (UInstancedStaticMeshComponent *)this->_padding_ == param_1->ISMComponent;
  }
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceId.ISMComponent == ISMComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceStaticMeshManager.cpp"
                       ,0x17c,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return (bool)uVar2;
    }
  }
  plVar3 = (longlong *)(this->_padding_ + 0x650);
  if (this->_padding_ == 0) {
    plVar3 = (longlong *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x000147eb3657. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar3 + 0x28))(plVar3,param_1,param_2);
  return (bool)uVar2;
}

// ClearStaticMesh @ 147eb4260

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
ALightWeightInstanceStaticMeshManager::ClearStaticMesh(ALightWeightInstanceStaticMeshManager *this)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  FSoftObjectPtr::operator=(&(this->StaticMesh).SoftObjectPtr,(FObjectPtr)local_res8);
  OnStaticMeshSet(this);
  return;
}

// ConvertCollisionIndexToInstanceIndex @ 147eb50c0

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

int __thiscall
ALightWeightInstanceStaticMeshManager::ConvertCollisionIndexToInstanceIndex
          (ALightWeightInstanceStaticMeshManager *this,int param_1,UPrimitiveComponent *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint *local_res8;
  uint local_res10 [2];
  
  local_res10[0] = param_1;
  if ((param_1 < 0) || ((int)this->_padding_ <= param_1)) {
    local_res8 = local_res10;
    bVar3 = `ALightWeightInstanceStaticMeshManager::ConvertCollisionIndexToInstanceIndex'::__l3::
            <lambda_1>::operator()(&local_res8);
    if (!bVar3) {
      return local_res10[0];
    }
  }
  uVar2 = local_res10[0];
  uVar4 = 0;
  if ((int)local_res10[0] < (int)this->_padding_) {
    uVar4 = ~local_res10[0] >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    iVar5 = (*pcVar1)();
    return iVar5;
  }
  return *(int *)(this->_padding_ + (longlong)(int)uVar2 * 4);
}

// ConvertHandleIndexToInternalIndex @ 147eb5190

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall
ALightWeightInstanceStaticMeshManager::ConvertHandleIndexToInternalIndex
          (ALightWeightInstanceStaticMeshManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (this->RenderingIndicesToDataIndices).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)((this->RenderingIndicesToDataIndices).AllocatorInstance.Data +
                 (longlong)param_1 * 4);
}

// ConvertInternalIndexToHandleIndex @ 147eb5890

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall
ALightWeightInstanceStaticMeshManager::ConvertInternalIndexToHandleIndex
          (ALightWeightInstanceStaticMeshManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (this->DataIndicesToRenderingIndices).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)((this->DataIndicesToRenderingIndices).AllocatorInstance.Data +
                 (longlong)param_1 * 4);
}

// DeleteSMInstances @ 147eb72a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
ALightWeightInstanceStaticMeshManager::DeleteSMInstances
          (ALightWeightInstanceStaticMeshManager *this,TArrayView<FSMInstanceId_const_,int> *param_1
          )

{
  longlong *this_00;
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulonglong uVar3;
  ForAnyElementType FVar4;
  FIdentityFunctor local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  TArrayView<FSMInstanceId_const_,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = &this[-1]._padding_;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  GetLWIDataIndices((ALightWeightInstanceStaticMeshManager *)this_00,&local_18,&local_28);
  AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TGreater<int>_>_>
            ((int *)local_28.AllocatorInstance.Data,local_28.ArrayNum,local_res8[0],
             (TGreater<int> *)local_res8);
  iVar2 = local_28.ArrayNum;
  uVar3 = (ulonglong)local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + uVar3 * 4;
  FVar4.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar4.Data == pFVar1) break;
    (**(code **)(*this_00 + 0x778))(this_00,*(int *)FVar4.Data);
    uVar3 = local_28._8_8_ & 0xffffffff;
    FVar4.Data = FVar4.Data + 4;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return true;
}

// DuplicateLWIInstances @ 147eb7eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
ALightWeightInstanceStaticMeshManager::DuplicateLWIInstances
          (ALightWeightInstanceStaticMeshManager *this,TArrayView<int_const_,int> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined4 uVar11;
  uint *puVar12;
  undefined1 auStackY_108 [32];
  undefined4 local_b8 [4];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  uVar3 = param_1->ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar3,&param_2->AllocatorInstance,0,piVar1);
  }
  puVar12 = (uint *)param_1->DataPtr;
  puVar2 = puVar12 + (int)uVar3;
  while( true ) {
    if (puVar12 == puVar2) {
      return;
    }
    uVar3 = *puVar12;
    uVar8 = 0;
    if ((int)uVar3 < (int)this->_padding_) {
      uVar8 = ~uVar3 >> 0x1f;
    }
    local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_a8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
    ;
    local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_98._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
    ;
    local_88._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_88._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20)
    ;
    local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20)
    ;
    local_68._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_68._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
    ;
    local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20)
    ;
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    lVar4 = this->_padding_;
    lVar10 = (longlong)(int)uVar3 * 0x60;
    local_a8 = *(undefined1 (*) [16])(lVar10 + lVar4);
    local_98 = *(undefined1 (*) [16])(lVar10 + 0x10 + lVar4);
    local_88 = *(undefined1 (*) [16])(lVar10 + 0x20 + lVar4);
    local_78 = *(undefined1 (*) [16])(lVar10 + 0x30 + lVar4);
    local_68 = *(undefined1 (*) [16])(lVar10 + 0x40 + lVar4);
    local_58 = *(undefined1 (*) [16])(lVar10 + 0x50 + lVar4);
    if ((int)this->_padding_ < 1) {
      uVar11 = (undefined4)this->_padding_;
    }
    else {
      iVar9 = (int)this->_padding_;
      uVar11 = *(undefined4 *)(this->_padding_ + -4 + (longlong)iVar9 * 4);
      *(int *)&this->_padding_ = iVar9 + -1;
    }
    (**(code **)(this->_padding_ + 0x770))(this,local_a8,uVar11);
    local_b8[0] = uVar11;
    if (uVar3 != 0xffffffff) {
      pFVar5 = (param_2->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)local_b8) &&
          ((FScriptContainerElement *)local_b8 < pFVar5 + (longlong)*piVar1 * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = param_2->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar9 + 1;
      *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_b8[0];
    }
    puVar12 = puVar12 + 1;
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// DuplicateSMInstances @ 147eb8180

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
ALightWeightInstanceStaticMeshManager::DuplicateSMInstances
          (ALightWeightInstanceStaticMeshManager *this,TArrayView<FSMInstanceId_const_,int> *param_1
          ,TArray<FSMInstanceId,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  undefined1 local_res8 [8];
  uint *local_88;
  ulonglong local_80;
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  longlong local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TArrayView<FSMInstanceId_const_,int> local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  local_48.DataPtr = param_1->DataPtr;
  local_48.ArrayNum = param_1->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  GetLWIDataIndices((ALightWeightInstanceStaticMeshManager *)&this[-1]._padding_,&local_48,&local_78
                   );
  iStack_50 = local_78.ArrayNum;
  local_88 = (uint *)0x0;
  local_80 = 0;
  pcVar4 = *(code **)(this[-1]._padding_ + 0x7f0);
  local_58 = local_78.AllocatorInstance.Data;
  if (local_78.ArrayNum < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  local_38 = (undefined4)local_58;
  uStack_34 = local_58._4_4_;
  iStack_30 = iStack_50;
  uStack_2c = uStack_4c;
  (*pcVar4)(&this[-1]._padding_,&local_38,&local_88);
  uVar11 = local_80 & 0xffffffff;
  if (-1 < (int)local_80) {
    piVar1 = &param_2->ArrayMax;
    param_2->ArrayNum = 0;
    if (*piVar1 < (int)local_80) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(int)local_80,&param_2->AllocatorInstance,0,piVar1);
      uVar11 = local_80 & 0xffffffff;
    }
    iVar10 = (int)uVar11;
    puVar2 = local_88 + iVar10;
    puVar12 = local_88;
    while( true ) {
      if ((int)uVar11 != iVar10) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (puVar12 == puVar2) break;
      uVar3 = *puVar12;
      local_68 = this->_padding_;
      uVar8 = 0;
      if ((int)uVar3 < (int)this->_padding_) {
        uVar8 = ~uVar3 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      uStack_60 = *(undefined4 *)(this->_padding_ + (longlong)(int)uVar3 * 4);
      pFVar5 = (param_2->AllocatorInstance).Data;
      if ((pFVar5 <= (FScriptContainerElement *)&local_68) &&
         ((FScriptContainerElement *)&local_68 < pFVar5 + (longlong)*piVar1 * 0x10)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      iVar9 = param_2->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar9 + 1;
      puVar12 = puVar12 + 1;
      pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
      *(longlong *)pFVar5 = local_68;
      *(longlong *)(pFVar5 + 8) = CONCAT44(uStack_5c,uStack_60);
      uVar11 = local_80 & 0xffffffff;
    }
    if (local_88 != (uint *)0x0) {
      FMemory::Free(local_88);
    }
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar11);
}

// GetLWIDataIndices @ 147ec07e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
ALightWeightInstanceStaticMeshManager::GetLWIDataIndices
          (ALightWeightInstanceStaticMeshManager *this,TArrayView<FSMInstanceId_const_,int> *param_1
          ,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  UInstancedStaticMeshComponent *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  FSMInstanceId *pFVar9;
  FSMInstanceId *pFVar10;
  bool bVar11;
  
  uVar3 = param_1->ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar3,&param_2->AllocatorInstance,0,piVar1);
  }
  pFVar9 = param_1->DataPtr;
  pFVar10 = pFVar9 + (int)uVar3;
  while( true ) {
    if (pFVar9 == pFVar10) {
      return;
    }
    pUVar4 = (this->ISMComponent).field0_0x0.DebugPtr;
    if (pUVar4 == (UInstancedStaticMeshComponent *)0x0) {
      bVar11 = pFVar9->ISMComponent == (UInstancedStaticMeshComponent *)0x0;
    }
    else {
      bVar11 = pUVar4 == pFVar9->ISMComponent;
    }
    if ((!bVar11) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InstanceId.ISMComponent == ISMComponent",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceStaticMeshManager.cpp"
                            ,0x1fa,L""), bVar11)) break;
    uVar3 = pFVar9->InstanceIndex;
    if ((-1 < (int)uVar3) && ((int)uVar3 < (this->RenderingIndicesToDataIndices).ArrayNum)) {
      uVar7 = 0;
      if ((int)uVar3 < (this->RenderingIndicesToDataIndices).ArrayNum) {
        uVar7 = ~uVar3 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (param_2->AllocatorInstance).Data;
      pFVar2 = (this->RenderingIndicesToDataIndices).AllocatorInstance.Data +
               (longlong)(int)uVar3 * 4;
      if (((pFVar5 <= pFVar2) && (pFVar2 < pFVar5 + (longlong)*piVar1 * 4)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar8 = param_2->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar8 + 1;
      *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar8 * 4) =
           *(undefined4 *)pFVar2;
    }
    pFVar9 = pFVar9 + 1;
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// GetLifetimeReplicatedProps @ 147ec1010

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ALightWeightInstanceStaticMeshManager::GetLifetimeReplicatedProps
          (ALightWeightInstanceStaticMeshManager *this,
          TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FProperty *pFVar4;
  FName local_res18;
  FDoRepLifetimeParams local_28;
  
  ALightWeightInstanceManager::GetLifetimeReplicatedProps
            ((ALightWeightInstanceManager *)this,param_1);
  pFVar2 = ::FName::FName(&local_res18,10,L"StaticMesh",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,(FString *)&local_28);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_28._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
  }
  local_28.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_28._0_8_ = (void *)0x0;
  local_28.bIsPushBased = false;
  local_28._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_28);
  pFVar2 = ::FName::FName(&local_res18,0x1d,L"RenderingIndicesToDataIndices",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,(FString *)&local_28);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_28._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
  }
  local_28.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_28._0_8_ = (void *)0x0;
  local_28.bIsPushBased = false;
  local_28._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_28);
  pFVar2 = ::FName::FName(&local_res18,0x1d,L"DataIndicesToRenderingIndices",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,(FString *)&local_28);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_28._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
  }
  local_28.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_28.Condition = COND_None;
  local_28.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_28.bIsPushBased = false;
  local_28._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_28);
  return;
}

// GetPrivateStaticClass @ 147ec4020

UClass * __cdecl ALightWeightInstanceStaticMeshManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALightWeightInstanceStaticMeshManager.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightWeightInstanceStaticMeshManager",
               &Z_Registration_Info_UClass_ALightWeightInstanceStaticMeshManager.InnerSingleton,
               StaticRegisterNativesALightWeightInstanceStaticMeshManager,0x3f0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ALightWeightInstanceStaticMeshManager>,
               InternalVTableHelperCtorCaller<ALightWeightInstanceStaticMeshManager>,local_res8,
               ALightWeightInstanceManager::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALightWeightInstanceStaticMeshManager.InnerSingleton;
}

// GetSMInstanceDisplayName @ 147ec5750

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
ALightWeightInstanceStaticMeshManager::GetSMInstanceDisplayName
          (ALightWeightInstanceStaticMeshManager *this,FText *__return_storage_ptr__,
          FSMInstanceId *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  FText *pFVar4;
  UClass *pUVar5;
  longlong lVar6;
  FTextFormat *pFVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  FName local_res10;
  FName local_res18;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_e8;
  FText local_d8;
  FText local_c8;
  FString local_b8;
  FString local_a8;
  FTextFormat local_98;
  FFormatArgumentValue local_88;
  undefined4 local_68;
  longlong local_60;
  longlong *local_58;
  undefined4 local_50;
  FText local_48;
  FTextFormat local_38;
  
  lVar6 = 0;
  if ((UInstancedStaticMeshComponent *)this->_padding_ == (UInstancedStaticMeshComponent *)0x0) {
    bVar8 = param_1->ISMComponent == (UInstancedStaticMeshComponent *)0x0;
  }
  else {
    bVar8 = (UInstancedStaticMeshComponent *)this->_padding_ == param_1->ISMComponent;
  }
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceId.ISMComponent == ISMComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceStaticMeshManager.cpp"
                         ,0x164,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pFVar4 = (FText *)(*pcVar3)();
    return pFVar4;
  }
  lVar2 = this[-1]._padding_;
  if ((lVar2 != 0) && (pUVar5 = Z_Construct_UClass_AActor_NoRegister(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if ((bVar8) && (lVar2 = this[-1]._padding_, lVar2 != 0)) {
      pUVar5 = Z_Construct_UClass_AActor_NoRegister();
      if (pUVar5 != (UClass *)0x0) {
        iVar1 = (int)pUVar5->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          lVar6 = this[-1]._padding_;
        }
      }
      local_res10 = *(FName *)(lVar6 + 0x18);
      ::FName::ToString(&local_res10,&local_b8);
      FText::FromString(&local_d8,&local_b8);
      goto LAB_147ec588e;
    }
  }
  local_res18 = (FName)this[-1]._padding_;
  ::FName::ToString(&local_res18,&local_a8);
  FText::FromString(&local_d8,&local_a8);
  local_b8.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
LAB_147ec588e:
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  iVar1 = param_1->InstanceIndex;
  local_c8.TextData.Reference = local_d8.TextData.Reference;
  if (local_d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d8.TextData.Reference + 8))
              (local_d8.TextData.Reference,local_res8);
  }
  local_c8.Flags = local_d8.Flags;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"LightWeightInstanceStaticMeshManager",L"DisplayNameFmt",
                      L"{0} - Instance {1}");
  pFVar7 = FTextFormat::FTextFormat(&local_38,pFVar4,Default);
  local_88.Type = Text;
  FText::FText((FText *)&local_88.TextValue,&local_c8);
  if ((local_88.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar8)) {
    pcVar3 = (code *)swi(3);
    pFVar4 = (FText *)(*pcVar3)();
    return pFVar4;
  }
  local_68 = 0;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 2;
  local_60 = (longlong)iVar1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_e8.AllocatorInstance,2,&local_e8.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_e8.AllocatorInstance.Data,&local_88,2);
  local_98.TextFormatData.Object = (pFVar7->TextFormatData).Object;
  local_98.TextFormatData.SharedReferenceCount.ReferenceController =
       (pFVar7->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_98.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FText::Format(__return_storage_ptr__,&local_98,&local_e8);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
  if ((FFormatArgumentValue *)local_e8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  if (local_88.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_88.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar7->TextFormatData).SharedReferenceCount.ReferenceController);
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetSMInstanceTooltip @ 147ec5a50

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
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
ALightWeightInstanceStaticMeshManager::GetSMInstanceTooltip
          (ALightWeightInstanceStaticMeshManager *this,FText *__return_storage_ptr__,
          FSMInstanceId *param_1)

{
  int iVar1;
  code *pcVar2;
  FText *pFVar3;
  UWorld *pUVar4;
  FString *pFVar5;
  FTextFormat *pFVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_c8;
  FText local_b8;
  FText local_a8;
  FTextFormat local_98;
  FFormatArgumentValue local_88;
  undefined4 local_68;
  FText local_58;
  FString local_48;
  FText local_38;
  FTextFormat local_28;
  
  if ((UInstancedStaticMeshComponent *)this->_padding_ == (UInstancedStaticMeshComponent *)0x0) {
    bVar7 = param_1->ISMComponent == (UInstancedStaticMeshComponent *)0x0;
  }
  else {
    bVar7 = (UInstancedStaticMeshComponent *)this->_padding_ == param_1->ISMComponent;
  }
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceId.ISMComponent == ISMComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceStaticMeshManager.cpp"
                       ,0x16c,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar2)();
      return pFVar3;
    }
  }
  pUVar4 = AActor::GetWorld((AActor *)&this[-1]._padding_);
  pFVar5 = UObjectBaseUtility::GetPathName
                     ((UObjectBaseUtility *)&this[-1]._padding_,&local_48,(UObject *)pUVar4);
  FText::FromString(&local_a8,pFVar5);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_b8.TextData.Reference = local_a8.TextData.Reference;
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 8))
              (local_a8.TextData.Reference,local_res8);
  }
  iVar1 = param_1->InstanceIndex;
  local_b8.Flags = local_a8.Flags;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"LightWeightInstanceStaticMeshManager",L"TooltipFmt",
                      L"Instance {0} on {1}");
  pFVar6 = FTextFormat::FTextFormat(&local_28,pFVar3,Default);
  local_88.Type = Int;
  local_88.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_88.TextValue.field0_0x0.TypedValue.Flags = 0;
  local_68 = 4;
  local_88.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)iVar1;
  FText::FText(&local_58,&local_b8);
  if (local_58.TextData.Reference == (ITextData *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar2)();
      return pFVar3;
    }
  }
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_c8.AllocatorInstance,2,&local_c8.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_c8.AllocatorInstance.Data,&local_88,2);
  local_98.TextFormatData.Object = (pFVar6->TextFormatData).Object;
  local_98.TextFormatData.SharedReferenceCount.ReferenceController =
       (pFVar6->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_98.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FText::Format(__return_storage_ptr__,&local_98,&local_c8);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
  if ((FFormatArgumentValue *)local_c8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_88.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_88.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar6->TextFormatData).SharedReferenceCount.ReferenceController);
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetSMInstanceTransform @ 147ec5ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
ALightWeightInstanceStaticMeshManager::GetSMInstanceTransform
          (ALightWeightInstanceStaticMeshManager *this,FSMInstanceId *param_1,
          TTransform<double> *param_2,bool param_3)

{
  double *pdVar1;
  double *pdVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 uVar11;
  uint uVar12;
  longlong lVar13;
  TTransform<double> *pTVar14;
  bool bVar15;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  if ((UInstancedStaticMeshComponent *)this->_padding_ == (UInstancedStaticMeshComponent *)0x0) {
    bVar15 = param_1->ISMComponent == (UInstancedStaticMeshComponent *)0x0;
  }
  else {
    bVar15 = (UInstancedStaticMeshComponent *)this->_padding_ == param_1->ISMComponent;
  }
  if (!bVar15) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("InstanceId.ISMComponent == ISMComponent",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceStaticMeshManager.cpp"
                        ,0x184,L"");
    if (bVar15) {
      pcVar6 = (code *)swi(3);
      uVar11 = (*pcVar6)();
      return (bool)uVar11;
    }
  }
  uVar3 = param_1->InstanceIndex;
  if (((int)uVar3 < 0) || ((int)this->_padding_ <= (int)uVar3)) {
    bVar15 = false;
  }
  else {
    iVar4 = (int)this->_padding_;
    uVar12 = 0;
    if ((int)uVar3 < iVar4) {
      uVar12 = ~uVar3 >> 0x1f;
    }
    if (uVar12 == 0) {
      local_108 = (longlong)(int)uVar3;
      local_100 = (longlong)iVar4;
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar15) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
    }
    iVar4 = (int)this[-1]._padding_;
    uVar3 = *(uint *)(this->_padding_ + (longlong)(int)uVar3 * 4);
    lVar13 = (longlong)(int)uVar3;
    if (param_3) {
      uVar12 = 0;
      if ((int)uVar3 < iVar4) {
        uVar12 = ~uVar3 >> 0x1f;
      }
      if (uVar12 == 0) {
        local_108 = lVar13;
        local_100 = (longlong)iVar4;
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar15) {
          pcVar6 = (code *)swi(3);
          uVar11 = (*pcVar6)();
          return (bool)uVar11;
        }
      }
      pTVar14 = (TTransform<double> *)(this[-1]._padding_ + 0x1f0);
      if (this[-1]._padding_ == 0) {
        pTVar14 = &UE::Math::TTransform<double>::Identity;
      }
      local_98.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_98.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_98.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_98.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_98.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_98.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_98.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_98.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_98.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_98.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_98.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_98.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_98.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_98.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_98.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_98.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_98.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_98.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&local_98,(TTransform<double> *)(lVar13 * 0x60 + this[-1]._padding_),pTVar14);
      pTVar14 = &local_98;
    }
    else {
      uVar12 = 0;
      if ((int)uVar3 < iVar4) {
        uVar12 = ~uVar3 >> 0x1f;
      }
      if (uVar12 == 0) {
        local_108 = lVar13;
        local_100 = (longlong)iVar4;
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar15) {
          pcVar6 = (code *)swi(3);
          uVar11 = (*pcVar6)();
          return (bool)uVar11;
        }
      }
      lVar5 = this[-1]._padding_;
      lVar13 = lVar13 * 0x60;
      pdVar1 = (double *)(lVar13 + 0x10 + lVar5);
      local_f8.Rotation.XY.m128d_f64[0] = *(double *)(lVar13 + lVar5);
      local_f8.Rotation.XY.m128d_f64[1] = ((double *)(lVar13 + lVar5))[1];
      pdVar2 = (double *)(lVar13 + 0x20 + lVar5);
      local_f8.Rotation.ZW.m128d_f64[0] = *pdVar1;
      local_f8.Rotation.ZW.m128d_f64[1] = pdVar1[1];
      pdVar1 = (double *)(lVar13 + 0x30 + lVar5);
      local_f8.Translation.XY.m128d_f64[0] = *pdVar2;
      local_f8.Translation.XY.m128d_f64[1] = pdVar2[1];
      pdVar2 = (double *)(lVar13 + 0x40 + lVar5);
      local_f8.Translation.ZW.m128d_f64[0] = *pdVar1;
      local_f8.Translation.ZW.m128d_f64[1] = pdVar1[1];
      pdVar1 = (double *)(lVar13 + 0x50 + lVar5);
      pTVar14 = &local_f8;
      local_f8.Scale3D.XY.m128d_f64[0] = *pdVar2;
      local_f8.Scale3D.XY.m128d_f64[1] = pdVar2[1];
      local_f8.Scale3D.ZW.m128d_f64[0] = *pdVar1;
      local_f8.Scale3D.ZW.m128d_f64[1] = pdVar1[1];
    }
    dVar7 = (pTVar14->Rotation).XY.m128d_f64[1];
    dVar8 = (pTVar14->Rotation).ZW.m128d_f64[0];
    dVar9 = (pTVar14->Rotation).ZW.m128d_f64[1];
    (param_2->Rotation).XY.m128d_f64[0] = (pTVar14->Rotation).XY.m128d_f64[0];
    (param_2->Rotation).XY.m128d_f64[1] = dVar7;
    dVar7 = (pTVar14->Translation).XY.m128d_f64[0];
    dVar10 = (pTVar14->Translation).XY.m128d_f64[1];
    (param_2->Rotation).ZW.m128d_f64[0] = dVar8;
    (param_2->Rotation).ZW.m128d_f64[1] = dVar9;
    dVar8 = (pTVar14->Translation).ZW.m128d_f64[0];
    dVar9 = (pTVar14->Translation).ZW.m128d_f64[1];
    (param_2->Translation).XY.m128d_f64[0] = dVar7;
    (param_2->Translation).XY.m128d_f64[1] = dVar10;
    dVar7 = (pTVar14->Scale3D).XY.m128d_f64[0];
    dVar10 = (pTVar14->Scale3D).XY.m128d_f64[1];
    (param_2->Translation).ZW.m128d_f64[0] = dVar8;
    (param_2->Translation).ZW.m128d_f64[1] = dVar9;
    dVar8 = (pTVar14->Scale3D).ZW.m128d_f64[0];
    dVar9 = (pTVar14->Scale3D).ZW.m128d_f64[1];
    bVar15 = true;
    (param_2->Scale3D).XY.m128d_f64[0] = dVar7;
    (param_2->Scale3D).XY.m128d_f64[1] = dVar10;
    (param_2->Scale3D).ZW.m128d_f64[0] = dVar8;
    (param_2->Scale3D).ZW.m128d_f64[1] = dVar9;
  }
  return bVar15;
}

// NotifySMInstanceMovementEnded @ 147ecfd10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
ALightWeightInstanceStaticMeshManager::NotifySMInstanceMovementEnded
          (ALightWeightInstanceStaticMeshManager *this,FSMInstanceId *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  
  if ((UInstancedStaticMeshComponent *)this->_padding_ == (UInstancedStaticMeshComponent *)0x0) {
    bVar3 = param_1->ISMComponent == (UInstancedStaticMeshComponent *)0x0;
  }
  else {
    bVar3 = (UInstancedStaticMeshComponent *)this->_padding_ == param_1->ISMComponent;
  }
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceId.ISMComponent == ISMComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceStaticMeshManager.cpp"
                       ,0x1b0,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  plVar2 = (longlong *)(this->_padding_ + 0x650);
  if (this->_padding_ == 0) {
    plVar2 = (longlong *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x000147ecfd85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x50))(plVar2,param_1);
  return;
}

// NotifySMInstanceMovementOngoing @ 147ecfd90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
ALightWeightInstanceStaticMeshManager::NotifySMInstanceMovementOngoing
          (ALightWeightInstanceStaticMeshManager *this,FSMInstanceId *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  
  if ((UInstancedStaticMeshComponent *)this->_padding_ == (UInstancedStaticMeshComponent *)0x0) {
    bVar3 = param_1->ISMComponent == (UInstancedStaticMeshComponent *)0x0;
  }
  else {
    bVar3 = (UInstancedStaticMeshComponent *)this->_padding_ == param_1->ISMComponent;
  }
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceId.ISMComponent == ISMComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceStaticMeshManager.cpp"
                       ,0x1a8,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  plVar2 = (longlong *)(this->_padding_ + 0x650);
  if (this->_padding_ == 0) {
    plVar2 = (longlong *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x000147ecfe05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x48))(plVar2,param_1);
  return;
}

// NotifySMInstanceMovementStarted @ 147ecfe10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
ALightWeightInstanceStaticMeshManager::NotifySMInstanceMovementStarted
          (ALightWeightInstanceStaticMeshManager *this,FSMInstanceId *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  
  if ((UInstancedStaticMeshComponent *)this->_padding_ == (UInstancedStaticMeshComponent *)0x0) {
    bVar3 = param_1->ISMComponent == (UInstancedStaticMeshComponent *)0x0;
  }
  else {
    bVar3 = (UInstancedStaticMeshComponent *)this->_padding_ == param_1->ISMComponent;
  }
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceId.ISMComponent == ISMComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceStaticMeshManager.cpp"
                       ,0x1a0,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  plVar2 = (longlong *)(this->_padding_ + 0x650);
  if (this->_padding_ == 0) {
    plVar2 = (longlong *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x000147ecfe85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x40))(plVar2,param_1);
  return;
}

// NotifySMInstanceSelectionChanged @ 147ecfe90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
ALightWeightInstanceStaticMeshManager::NotifySMInstanceSelectionChanged
          (ALightWeightInstanceStaticMeshManager *this,FSMInstanceId *param_1,bool param_2)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  
  if ((UInstancedStaticMeshComponent *)this->_padding_ == (UInstancedStaticMeshComponent *)0x0) {
    bVar3 = param_1->ISMComponent == (UInstancedStaticMeshComponent *)0x0;
  }
  else {
    bVar3 = (UInstancedStaticMeshComponent *)this->_padding_ == param_1->ISMComponent;
  }
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceId.ISMComponent == ISMComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceStaticMeshManager.cpp"
                       ,0x1b8,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  plVar2 = (longlong *)(this->_padding_ + 0x650);
  if (this->_padding_ == 0) {
    plVar2 = (longlong *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x000147ecff17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x58))(plVar2,param_1,param_2);
  return;
}

// OnRep_StaticMesh @ 147ed0540

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
ALightWeightInstanceStaticMeshManager::OnRep_StaticMesh(ALightWeightInstanceStaticMeshManager *this)

{
  UInstancedStaticMeshComponent *pUVar1;
  longlong lVar2;
  code *pcVar3;
  UStaticMesh *pUVar4;
  UMaterialInterface *pUVar5;
  int iVar6;
  
  pUVar1 = (this->ISMComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UInstancedStaticMeshComponent *)0x0) {
    lVar2 = pUVar1->_padding_;
    if (*(char *)((longlong)&pUVar1->_padding_ + 3) == '\0') {
      (**(code **)(lVar2 + 0x5f8))(pUVar1,1);
      pUVar1 = (this->ISMComponent).field0_0x0.DebugPtr;
      pcVar3 = *(code **)(pUVar1->_padding_ + 0xb28);
      pUVar4 = TSoftObjectPtr<UStaticMesh>::Get(&this->StaticMesh);
      (*pcVar3)(pUVar1,pUVar4);
      pUVar1 = (this->ISMComponent).field0_0x0.DebugPtr;
      (**(code **)(pUVar1->_padding_ + 0x5f8))(pUVar1,0);
    }
    else {
      pUVar4 = TSoftObjectPtr<UStaticMesh>::Get(&this->StaticMesh);
      (**(code **)(lVar2 + 0xb28))(pUVar1,pUVar4);
    }
    pUVar4 = TSoftObjectPtr<UStaticMesh>::Get(&this->StaticMesh);
    if ((pUVar4 != (UStaticMesh *)0x0) && (iVar6 = 0, 0 < (pUVar4->StaticMaterials).ArrayNum)) {
      do {
        pUVar1 = (this->ISMComponent).field0_0x0.DebugPtr;
        pcVar3 = *(code **)(pUVar1->_padding_ + 0x6b8);
        pUVar5 = UStaticMesh::GetMaterial(pUVar4,iVar6);
        (*pcVar3)(pUVar1,iVar6,pUVar5);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (pUVar4->StaticMaterials).ArrayNum);
    }
  }
  return;
}

// OnRep_Transforms @ 147ed0560

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
ALightWeightInstanceStaticMeshManager::OnRep_Transforms(ALightWeightInstanceStaticMeshManager *this)

{
  int iVar1;
  UInstancedStaticMeshComponent *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  pUVar2 = (this->ISMComponent).field0_0x0.DebugPtr;
  if (pUVar2 != (UInstancedStaticMeshComponent *)0x0) {
    iVar1 = (int)this->_padding_;
    uVar6 = iVar1 - 1;
    pcVar3 = *(code **)(pUVar2->_padding_ + 0xbb0);
    uVar5 = 0;
    if ((int)uVar6 < iVar1) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (*pcVar3)(pUVar2,(longlong)((int)this->_padding_ + -1) * 0x60 + this->_padding_,0);
  }
  return;
}

// OnStaticMeshSet @ 147ed0a20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
ALightWeightInstanceStaticMeshManager::OnStaticMeshSet(ALightWeightInstanceStaticMeshManager *this)

{
  UInstancedStaticMeshComponent *pUVar1;
  longlong lVar2;
  code *pcVar3;
  UStaticMesh *pUVar4;
  UMaterialInterface *pUVar5;
  int iVar6;
  
  pUVar1 = (this->ISMComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UInstancedStaticMeshComponent *)0x0) {
    lVar2 = pUVar1->_padding_;
    if (*(char *)((longlong)&pUVar1->_padding_ + 3) == '\0') {
      (**(code **)(lVar2 + 0x5f8))(pUVar1,1);
      pUVar1 = (this->ISMComponent).field0_0x0.DebugPtr;
      pcVar3 = *(code **)(pUVar1->_padding_ + 0xb28);
      pUVar4 = TSoftObjectPtr<UStaticMesh>::Get(&this->StaticMesh);
      (*pcVar3)(pUVar1,pUVar4);
      pUVar1 = (this->ISMComponent).field0_0x0.DebugPtr;
      (**(code **)(pUVar1->_padding_ + 0x5f8))(pUVar1,0);
    }
    else {
      pUVar4 = TSoftObjectPtr<UStaticMesh>::Get(&this->StaticMesh);
      (**(code **)(lVar2 + 0xb28))(pUVar1,pUVar4);
    }
    pUVar4 = TSoftObjectPtr<UStaticMesh>::Get(&this->StaticMesh);
    if ((pUVar4 != (UStaticMesh *)0x0) && (iVar6 = 0, 0 < (pUVar4->StaticMaterials).ArrayNum)) {
      do {
        pUVar1 = (this->ISMComponent).field0_0x0.DebugPtr;
        pcVar3 = *(code **)(pUVar1->_padding_ + 0x6b8);
        pUVar5 = UStaticMesh::GetMaterial(pUVar4,iVar6);
        (*pcVar3)(pUVar1,iVar6,pUVar5);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (pUVar4->StaticMaterials).ArrayNum);
    }
  }
  return;
}

// PostActorSpawn @ 147ed1460

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
ALightWeightInstanceStaticMeshManager::PostActorSpawn
          (ALightWeightInstanceStaticMeshManager *this,FActorInstanceHandle *param_1)

{
  RemoveInstanceFromRendering(this,param_1->InstanceIndex);
  return;
}

// PostRemoveInstanceFromRendering @ 147ed1fd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ALightWeightInstanceStaticMeshManager::PostRemoveInstanceFromRendering
          (ALightWeightInstanceStaticMeshManager *this)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  void *_Src;
  UInstancedStaticMeshComponent *pUVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  FScriptContainerElement *local_res18;
  FName local_res20;
  ForAnyElementType local_68;
  int local_60;
  int iStack_5c;
  FString local_58;
  
  pFVar13 = (this->DataIndicesToBeDeleted).AllocatorInstance.Data;
  iVar10 = (this->DataIndicesToBeDeleted).ArrayNum;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_res18 = pFVar13 + (longlong)iVar10 * 4;
  local_60 = 0;
  iStack_5c = 0;
  while( true ) {
    pFVar3 = local_res18;
    if ((this->DataIndicesToBeDeleted).ArrayNum != iVar10) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar13 == pFVar3) break;
    uVar14 = *(uint *)pFVar13;
    uVar8 = 0;
    if ((int)uVar14 < (this->DataIndicesToRenderingIndices).ArrayNum) {
      uVar8 = ~uVar14 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = (this->DataIndicesToRenderingIndices).AllocatorInstance.Data +
             (longlong)(int)uVar14 * 4;
    if (((local_68.Data <= pFVar3) && (pFVar3 < local_68.Data + (longlong)iStack_5c * 4)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (local_60 == iStack_5c) {
      local_60 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_68,&iStack_5c);
    }
    lVar12 = (longlong)local_60;
    local_60 = local_60 + 1;
    *(undefined4 *)(local_68.Data + lVar12 * 4) = *(undefined4 *)pFVar3;
    if (5 < (byte)LogLightWeightInstance._0_1_) {
      uVar8 = 0;
      if ((int)uVar14 < (this->DataIndicesToRenderingIndices).ArrayNum) {
        uVar8 = ~uVar14 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar4 = (int)this->_padding_;
      if (iVar4 < 2) {
        local_res20 = (FName)this->_padding_;
        ::FName::ToString(&local_res20,&local_58);
      }
      else {
        _Src = (void *)this->_padding_;
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.Data.ArrayNum = iVar4;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar4,0,(ForAnyElementType *)&local_58,iVar4,&local_58.Data.ArrayMax);
        memcpy(local_58.Data.AllocatorInstance.Data,_Src,(longlong)iVar4 * 2);
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLightWeightInstance);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    pFVar13 = pFVar13 + 4;
  }
  AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
            ((int *)local_68.Data,local_60,local_res8[0],(TLess<void> *)local_res10);
  uVar14 = local_60 - 1;
  if (-1 < (int)uVar14) {
    pFVar13 = (FScriptContainerElement *)((longlong)(int)uVar14 * 4);
    do {
      uVar8 = 0;
      if ((int)uVar14 < local_60) {
        uVar8 = ~uVar14 >> 0x1f;
      }
      local_res18 = pFVar13;
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar8 = *(uint *)(pFVar13 + local_68.Data);
      if (uVar8 != 0xffffffff) {
        pUVar5 = (this->ISMComponent).field0_0x0.DebugPtr;
        if (pUVar5 != (UInstancedStaticMeshComponent *)0x0) {
          (**(code **)(pUVar5->_padding_ + 0xc20))(pUVar5,uVar8);
        }
        pTVar2 = &this->RenderingIndicesToDataIndices;
        uVar9 = 0;
        if ((int)uVar8 < (this->RenderingIndicesToDataIndices).ArrayNum) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar4 = (this->RenderingIndicesToDataIndices).ArrayNum;
        pFVar13 = (pTVar2->AllocatorInstance).Data;
        iVar10 = iVar4 + ~uVar8;
        if (1 < iVar10) {
          iVar10 = 1;
        }
        if (iVar10 != 0) {
          memmove(pFVar13 + (longlong)(int)uVar8 * 4,pFVar13 + (longlong)(iVar4 - iVar10) * 4,
                  (longlong)iVar10 << 2);
        }
        piVar1 = &(this->RenderingIndicesToDataIndices).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&pTVar2->AllocatorInstance,(this->RenderingIndicesToDataIndices).ArrayNum,
                   &(this->RenderingIndicesToDataIndices).ArrayMax);
        if ((int)uVar8 < (this->RenderingIndicesToDataIndices).ArrayNum) {
          if (((int)uVar8 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar9 = *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 4);
          uVar11 = 0;
          if ((int)uVar9 < (this->DataIndicesToRenderingIndices).ArrayNum) {
            uVar11 = ~uVar9 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(uint *)((this->DataIndicesToRenderingIndices).AllocatorInstance.Data +
                   (longlong)(int)uVar9 * 4) = uVar8;
        }
      }
      pFVar13 = local_res18 + -4;
      uVar14 = uVar14 - 1;
      local_res18 = pFVar13;
    } while (-1 < (int)uVar14);
  }
  (this->DataIndicesToBeDeleted).ArrayNum = 0;
  if ((this->DataIndicesToBeDeleted).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->DataIndicesToBeDeleted).AllocatorInstance,0,
               &(this->DataIndicesToBeDeleted).ArrayMax);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return;
}

// RemoveInstance @ 147ed8590

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
ALightWeightInstanceStaticMeshManager::RemoveInstance
          (ALightWeightInstanceStaticMeshManager *this,int param_1)

{
  RemoveInstanceFromRendering(this,param_1);
  ALightWeightInstanceManager::RemoveInstance((ALightWeightInstanceManager *)this,param_1);
  return;
}

// RemoveInstanceFromRendering @ 147ed85c0

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
ALightWeightInstanceStaticMeshManager::RemoveInstanceFromRendering
          (ALightWeightInstanceStaticMeshManager *this,int param_1)

{
  int iVar1;
  void *_Src;
  bool bVar2;
  UWorld *this_00;
  FTimerManager *this_01;
  int local_res10 [2];
  FName local_res18;
  FString local_18;
  
  local_res10[0] = param_1;
  bVar2 = ALightWeightInstanceManager::IsIndexValid((ALightWeightInstanceManager *)this,param_1);
  if (bVar2) {
    if ((this->DataIndicesToBeDeleted).ArrayNum == 0) {
      this_00 = AActor::GetWorld((AActor *)this);
      this_01 = UWorld::GetTimerManager(this_00);
      local_18.Data._8_8_ = (ulonglong)(uint)local_18.Data.ArrayMax << 0x20;
      local_18.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)PostRemoveInstanceFromRendering;
      FTimerManager::SetTimerForNextTick<ALightWeightInstanceStaticMeshManager>
                (this_01,(ALightWeightInstanceStaticMeshManager *)&local_res18,(pmf_ac80787c *)this)
      ;
    }
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
              (&this->DataIndicesToBeDeleted,local_res10);
    if (5 < (byte)LogLightWeightInstance._0_1_) {
      iVar1 = (int)this->_padding_;
      if (iVar1 < 2) {
        local_res18 = (FName)this->_padding_;
        ::FName::ToString(&local_res18,&local_18);
      }
      else {
        _Src = (void *)this->_padding_;
        local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_18.Data.ArrayNum = iVar1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,0,(ForAnyElementType *)&local_18,iVar1,&local_18.Data.ArrayMax);
        memcpy(local_18.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLightWeightInstance);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SetInstancedStaticMeshParams @ 147edc620

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
ALightWeightInstanceStaticMeshManager::SetInstancedStaticMeshParams
          (ALightWeightInstanceStaticMeshManager *this)

{
  byte *pbVar1;
  UInstancedStaticMeshComponent *pUVar2;
  bool bVar3;
  int iVar4;
  FName local_res8 [4];
  
  ::FName::FName(local_res8,L"LightWeightInstancedStaticMeshPhysics");
  pUVar2 = (this->ISMComponent).field0_0x0.DebugPtr;
  (**(code **)(pUVar2->_padding_ + 0x788))(pUVar2,local_res8[0],1);
  *(undefined1 *)((longlong)&((this->ISMComponent).field0_0x0.DebugPtr)->_padding_ + 7) = 2;
  pbVar1 = (byte *)((longlong)&((this->ISMComponent).field0_0x0.DebugPtr)->_padding_ + 6);
  *pbVar1 = *pbVar1 | 1;
  pbVar1 = (byte *)((longlong)&((this->ISMComponent).field0_0x0.DebugPtr)->_padding_ + 6);
  *pbVar1 = *pbVar1 | 0x20;
  pbVar1 = (byte *)((longlong)&((this->ISMComponent).field0_0x0.DebugPtr)->_padding_ + 6);
  *pbVar1 = *pbVar1 | 0x40;
  pbVar1 = (byte *)((longlong)&((this->ISMComponent).field0_0x0.DebugPtr)->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfd;
  *(undefined1 *)((longlong)&((this->ISMComponent).field0_0x0.DebugPtr)->_padding_ + 3) = 2;
  pbVar1 = (byte *)((longlong)&((this->ISMComponent).field0_0x0.DebugPtr)->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0x80;
  bVar3 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar3) {
    iVar4 = ((this->ISMComponent).field0_0x0.DebugPtr)->InstancingRandomSeed;
    while (iVar4 == 0) {
      iVar4 = rand();
      ((this->ISMComponent).field0_0x0.DebugPtr)->InstancingRandomSeed = iVar4;
      iVar4 = ((this->ISMComponent).field0_0x0.DebugPtr)->InstancingRandomSeed;
    }
  }
  return;
}

// SetRepresentedClass @ 147edce10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
ALightWeightInstanceStaticMeshManager::SetRepresentedClass
          (ALightWeightInstanceStaticMeshManager *this,UClass *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  UInstancedStaticMeshComponent *pUVar4;
  bool bVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  FName local_res8;
  FString local_28;
  
  pUVar8 = (UClass *)0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    this->_padding_ = (longlong)param_1;
LAB_147edce71:
    pUVar6 = Z_Construct_UClass_AActor_NoRegister();
    if (pUVar6 != (UClass *)0x0) {
      iVar2 = (int)pUVar6->_padding_;
      if (((int)param_1->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar6->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && (lVar3 = this->_padding_, lVar3 != 0)) {
        pUVar7 = Z_Construct_UClass_AActor_NoRegister();
        pUVar6 = pUVar8;
        if (pUVar7 != (UClass *)0x0) {
          iVar2 = (int)pUVar7->_padding_;
          if ((*(int *)(lVar3 + 0x38) < iVar2) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
              &pUVar7->_padding_)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            pUVar6 = (UClass *)this->_padding_;
          }
        }
        if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar6);
        }
        pUVar6 = (UClass *)(pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
        if (pUVar6 == (UClass *)0x0) {
LAB_147edcf2d:
          pUVar6 = pUVar8;
        }
        else {
          pUVar7 = Z_Construct_UClass_AActor_NoRegister();
          iVar2 = (int)pUVar7->_padding_;
          if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar2) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
              &pUVar7->_padding_)) goto LAB_147edcf2d;
        }
        if (pUVar6 != (UClass *)0x0) {
          local_res8 = (FName)pUVar6->_padding_;
          ::FName::ToString(&local_res8,&local_28);
          plVar1 = &this->_padding_;
          if ((FString *)plVar1 != &local_28) {
            if ((void *)*plVar1 != (void *)0x0) {
              FMemory::Free((void *)*plVar1);
            }
            *plVar1 = (longlong)local_28.Data.AllocatorInstance.Data;
            *(int *)&this->_padding_ = local_28.Data.ArrayNum;
            *(int *)((longlong)&this->_padding_ + 4) = local_28.Data.ArrayMax;
            local_28.Data.ArrayNum = 0;
            local_28.Data.ArrayMax = 0;
            local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
          (**(code **)(this->_padding_ + 0x7e0))(this,pUVar6);
          goto LAB_147edcfde;
        }
      }
    }
  }
  else {
    this->_padding_ = (longlong)param_1;
    if (param_1 != (UClass *)0x0) goto LAB_147edce71;
  }
  ::FString::Reset((FString *)&this->_padding_,0);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FSoftObjectPtr::operator=(&(this->StaticMesh).SoftObjectPtr,(FObjectPtr)&local_res8);
  OnStaticMeshSet(this);
LAB_147edcfde:
  pUVar4 = (this->ISMComponent).field0_0x0.DebugPtr;
  if (pUVar4 == (UInstancedStaticMeshComponent *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147edd00a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar4->_padding_ + 0xc98))();
  return;
}

// SetSMInstanceTransform @ 147edd020

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
ALightWeightInstanceStaticMeshManager::SetSMInstanceTransform
          (ALightWeightInstanceStaticMeshManager *this,FSMInstanceId *param_1,
          TTransform<double> *param_2,bool param_3,bool param_4,bool param_5)

{
  int iVar1;
  uint uVar2;
  UInstancedStaticMeshComponent *this_00;
  code *pcVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  bool bVar7;
  
  if ((UInstancedStaticMeshComponent *)this->_padding_ == (UInstancedStaticMeshComponent *)0x0) {
    bVar7 = param_1->ISMComponent == (UInstancedStaticMeshComponent *)0x0;
  }
  else {
    bVar7 = (UInstancedStaticMeshComponent *)this->_padding_ == param_1->ISMComponent;
  }
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceId.ISMComponent == ISMComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceStaticMeshManager.cpp"
                         ,0x192,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar4 = (*pcVar3)();
    return (bool)uVar4;
  }
  iVar1 = param_1->InstanceIndex;
  if (((iVar1 < 0) || ((int)this->_padding_ <= iVar1)) ||
     (cVar5 = (**(code **)(*(longlong *)this->_padding_ + 0xbf0))
                        ((longlong *)this->_padding_,iVar1,param_2,param_3,param_4,param_5),
     cVar5 == '\0')) {
    return false;
  }
  uVar2 = param_1->InstanceIndex;
  uVar6 = 0;
  if ((int)uVar2 < (int)this->_padding_) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar4 = (*pcVar3)();
    return (bool)uVar4;
  }
  this_00 = (UInstancedStaticMeshComponent *)this->_padding_;
  uVar2 = *(uint *)(this->_padding_ + (longlong)(int)uVar2 * 4);
  uVar6 = 0;
  if ((int)uVar2 < (int)this[-1]._padding_) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar4 = (*pcVar3)();
    return (bool)uVar4;
  }
  UInstancedStaticMeshComponent::GetInstanceTransform
            (this_00,param_1->InstanceIndex,
             (TTransform<double> *)((longlong)(int)uVar2 * 0x60 + this[-1]._padding_),false);
  return true;
}

// SetStaticMeshFromActor @ 147edd270

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
ALightWeightInstanceStaticMeshManager::SetStaticMeshFromActor
          (ALightWeightInstanceStaticMeshManager *this,AActor *param_1)

{
  AActor **local_res8;
  AActor *local_res10 [3];
  
  local_res8 = local_res10;
  local_res10[0] = param_1;
  `ALightWeightInstanceStaticMeshManager::SetStaticMeshFromActor'::__l2::<lambda_1>::operator()
            (&local_res8);
  local_res8 = (AActor **)0x0;
  FSoftObjectPtr::operator=(&(this->StaticMesh).SoftObjectPtr,(FObjectPtr)&local_res8);
  OnStaticMeshSet(this);
  return;
}

// StaticRegisterNativesALightWeightInstanceStaticMeshManager @ 147edf060

void __cdecl
ALightWeightInstanceStaticMeshManager::StaticRegisterNativesALightWeightInstanceStaticMeshManager
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// ValidateGeneratedRepEnums @ 147ee6530

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
ALightWeightInstanceStaticMeshManager::ValidateGeneratedRepEnums
          (ALightWeightInstanceStaticMeshManager *this,
          TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  int *piVar5;
  FName FVar6;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar5 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&Name_StaticMesh,L"StaticMesh");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar5 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&Name_RenderingIndicesToDataIndices,L"RenderingIndicesToDataIndices");
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar5 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FName::FName(&Name_DataIndicesToRenderingIndices,L"DataIndicesToRenderingIndices");
    _Init_thread_footer(&::_TSS2);
  }
  if ((param_1->ArrayNum < 0xf) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xe0);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  FVar4 = FVar6;
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  if (Name_StaticMesh == FVar4) {
    if ((param_1->ArrayNum < 0x10) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xf0);
    bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
    FVar4 = FVar6;
    if (bVar3) {
      FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
    }
    if (Name_RenderingIndicesToDataIndices == FVar4) {
      if ((param_1->ArrayNum < 0x11) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x100);
      bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
      if (bVar3) {
        FVar6 = *(FName *)((longlong)pvVar1 + 0x20);
      }
      if (Name_DataIndicesToRenderingIndices == FVar6) {
        return;
      }
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsValid",
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\LightWeightInstanceStaticMeshManager.gen.cpp"
                     ,0x11d,
                     L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALightWeightInstanceStaticMeshManager"
                    );
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// _getUObject @ 147ee7940

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UObject * __thiscall
ALightWeightInstanceStaticMeshManager::_getUObject(ALightWeightInstanceStaticMeshManager *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{200}' @ 147ee7950

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   ALightWeightInstanceStaticMeshManager::_getUObject`adjustor{200}' (void)const __ptr64 */

UObject * __thiscall
ALightWeightInstanceStaticMeshManager::_getUObject_adjustor_200__
          (ALightWeightInstanceStaticMeshManager *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((ALightWeightInstanceStaticMeshManager *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// execOnRep_StaticMesh @ 147ee8290

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
ALightWeightInstanceStaticMeshManager::execOnRep_StaticMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnStaticMeshSet((ALightWeightInstanceStaticMeshManager *)param_1);
  return;
}

// operator() @ 15051cba0

bool __thiscall
`ALightWeightInstanceStaticMeshManager::SetStaticMeshFromActor'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4577831093335490250>);
  if (bVar2) {
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4577831093335490250>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15051cc30;
    }
  }
  bVar2 = false;
LAB_15051cc30:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15051cc60

bool __thiscall
`ALightWeightInstanceStaticMeshManager::AddInstanceToRendering'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4577831093335490413>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4577831093335490413>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15051ccb0

bool __thiscall
`ALightWeightInstanceStaticMeshManager::ConvertCollisionIndexToInstanceIndex'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4577831093335490439>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4577831093335490439>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

