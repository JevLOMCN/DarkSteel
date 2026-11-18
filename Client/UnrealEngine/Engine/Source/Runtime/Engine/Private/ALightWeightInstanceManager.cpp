// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 51

// StaticClass @ 147e8d150

UClass * __cdecl ALightWeightInstanceManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALightWeightInstanceManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightWeightInstanceManager",
               &Z_Registration_Info_UClass_ALightWeightInstanceManager.InnerSingleton,
               StaticRegisterNativesALightWeightInstanceManager,0x388,8,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<ALightWeightInstanceManager>,
               InternalVTableHelperCtorCaller<ALightWeightInstanceManager>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALightWeightInstanceManager.InnerSingleton;
}

// ALightWeightInstanceManager @ 147ea3d40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALightWeightInstanceManager * __thiscall
ALightWeightInstanceManager::ALightWeightInstanceManager
          (ALightWeightInstanceManager *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__IActorInstanceManagerInterface__;
  (this->BaseInstanceName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseInstanceName).Data.ArrayNum = 0;
  (this->BaseInstanceName).Data.ArrayMax = 0;
  (this->RepresentedClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->AcceptedClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->InstanceTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceTransforms).ArrayNum = 0;
  (this->InstanceTransforms).ArrayMax = 0;
  *(undefined8 *)&this->Actors = 0;
  *(undefined8 *)&(this->Actors).field_0x8 = 0;
  *(undefined8 *)&(this->Actors).field_0x20 = 0;
  *(undefined4 *)&(this->Actors).field_0x28 = 0;
  *(undefined4 *)&(this->Actors).field_0x2c = 0x80;
  *(undefined4 *)&(this->Actors).field_0x34 = 0;
  *(undefined4 *)&(this->Actors).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Actors).field_0x40 = 0;
  *(undefined4 *)&(this->Actors).field_0x48 = 0;
  (this->DestroyedActorIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DestroyedActorIndices).ArrayNum = 0;
  (this->DestroyedActorIndices).ArrayMax = 0;
  (this->FreeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeIndices).ArrayNum = 0;
  (this->FreeIndices).ArrayMax = 0;
  (this->ValidIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValidIndices).ArrayNum = 0;
  (this->ValidIndices).ArrayMax = 0;
  (this->InstanceToActorConversionsInProgress).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->InstanceToActorConversionsInProgress).ArrayNum = 0;
  (this->InstanceToActorConversionsInProgress).ArrayMax = 0;
  return this;
}

// ALightWeightInstanceManager @ 147ea3e20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALightWeightInstanceManager * __thiscall
ALightWeightInstanceManager::ALightWeightInstanceManager
          (ALightWeightInstanceManager *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FPlatformRWLock *SRWLock;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  FLightWeightInstanceSubsystem *pFVar8;
  ALightWeightInstanceManager *pAVar9;
  ALightWeightInstanceManager *local_18 [2];
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__IActorInstanceManagerInterface__;
  (this->BaseInstanceName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseInstanceName).Data.ArrayNum = 0;
  (this->BaseInstanceName).Data.ArrayMax = 0;
  (this->RepresentedClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->AcceptedClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->InstanceTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceTransforms).ArrayNum = 0;
  (this->InstanceTransforms).ArrayMax = 0;
  *(undefined8 *)&this->Actors = 0;
  *(undefined8 *)&(this->Actors).field_0x8 = 0;
  *(undefined8 *)&(this->Actors).field_0x20 = 0;
  *(undefined4 *)&(this->Actors).field_0x28 = 0;
  *(undefined4 *)&(this->Actors).field_0x2c = 0x80;
  *(undefined4 *)&(this->Actors).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Actors).field_0x34 = 0;
  *(undefined8 *)&(this->Actors).field_0x40 = 0;
  *(undefined4 *)&(this->Actors).field_0x48 = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 8;
  (this->DestroyedActorIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DestroyedActorIndices).ArrayNum = 0;
  (this->DestroyedActorIndices).ArrayMax = 0;
  (this->FreeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeIndices).ArrayNum = 0;
  (this->FreeIndices).ArrayMax = 0;
  (this->ValidIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValidIndices).ArrayNum = 0;
  (this->ValidIndices).ArrayMax = 0;
  (this->InstanceToActorConversionsInProgress).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->InstanceToActorConversionsInProgress).ArrayNum = 0;
  (this->InstanceToActorConversionsInProgress).ArrayMax = 0;
  pUVar7 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->AcceptedClass).Class.field0_0x0.DebugPtr = pUVar7;
  if ((this->_padding_ & 0x10) == 0) {
    local_18[0] = this;
    pFVar8 = FLightWeightInstanceSubsystem::Get();
    SRWLock = &pFVar8->LWIManagersRWLock;
    if (SRWLock == (FPlatformRWLock *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pAVar9 = (ALightWeightInstanceManager *)(*pcVar4)();
        return pAVar9;
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    pFVar8 = FLightWeightInstanceSubsystem::Get();
    pFVar3 = (pFVar8->LWInstanceManagers).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 <
        pFVar3 + (longlong)(pFVar8->LWInstanceManagers).ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pAVar9 = (ALightWeightInstanceManager *)(*pcVar4)();
        return pAVar9;
      }
    }
    iVar6 = (pFVar8->LWInstanceManagers).ArrayNum;
    piVar2 = &(pFVar8->LWInstanceManagers).ArrayMax;
    if (iVar6 == *piVar2) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)pFVar8,piVar2);
    }
    (pFVar8->LWInstanceManagers).ArrayNum = iVar6 + 1;
    *(ALightWeightInstanceManager **)
     ((pFVar8->LWInstanceManagers).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_18[0];
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
  }
  return this;
}

// ~ALightWeightInstanceManager @ 147ea8a60

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
ALightWeightInstanceManager::~ALightWeightInstanceManager(ALightWeightInstanceManager *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  FLightWeightInstanceSubsystem *this_00;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__IActorInstanceManagerInterface__;
  this_00 = FLightWeightInstanceSubsystem::Get();
  FLightWeightInstanceSubsystem::RemoveManager(this_00,this);
  pFVar1 = (this->InstanceToActorConversionsInProgress).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ValidIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FreeIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DestroyedActorIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->Actors).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Actors).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<AActor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<AActor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<AActor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Actors);
  pFVar1 = (this->InstanceTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BaseInstanceName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IActorInstanceManagerInterface__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// AddNewInstance @ 147eae5d0

int __thiscall
ALightWeightInstanceManager::AddNewInstance(ALightWeightInstanceManager *this,FLWIData *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (FLWIData *)0x0) {
    return -1;
  }
  if ((this->FreeIndices).ArrayNum < 1) {
    iVar2 = (this->ValidIndices).ArrayNum;
  }
  else {
    iVar1 = (this->FreeIndices).ArrayNum;
    iVar2 = *(int *)((this->FreeIndices).AllocatorInstance.Data + (longlong)iVar1 * 4 + -4);
    (this->FreeIndices).ArrayNum = iVar1 + -1;
  }
  (**(code **)(this->_padding_ + 0x770))(this,param_1,iVar2);
  return iVar2;
}

// AddNewInstanceAt @ 147eae650

void __thiscall
ALightWeightInstanceManager::AddNewInstanceAt
          (ALightWeightInstanceManager *this,FLWIData *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((this->ValidIndices).ArrayNum <= param_2) {
    (**(code **)(this->_padding_ + 0x7c0))();
  }
  if ((this->ValidIndices).ArrayNum <= param_2) {
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
  if (param_2 < (this->ValidIndices).ArrayNum) {
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
  (this->ValidIndices).AllocatorInstance.Data[param_2] = (FScriptContainerElement)0x1;
  return;
}

// AllocateInitData @ 147eaf1b0

FLWIData * __thiscall
ALightWeightInstanceManager::AllocateInitData(ALightWeightInstanceManager *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FLWIData *pFVar4;
  
  pFVar4 = ::operator_new(0x60);
  if (pFVar4 != (FLWIData *)0x0) {
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    (pFVar4->Transform).Rotation.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float0001.m128_f32[0];
    (pFVar4->Transform).Rotation.XY.m128d_f64[1] = (double)fVar1;
    (pFVar4->Transform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
    (pFVar4->Transform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    (pFVar4->Transform).Translation.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    (pFVar4->Transform).Translation.XY.m128d_f64[1] = (double)fVar1;
    (pFVar4->Transform).Translation.ZW.m128d_f64[0] = (double)fVar2;
    (pFVar4->Transform).Translation.ZW.m128d_f64[1] = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    (pFVar4->Transform).Scale3D.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float1110.m128_f32[0];
    (pFVar4->Transform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
    (pFVar4->Transform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
    (pFVar4->Transform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
    return pFVar4;
  }
  return (FLWIData *)0x0;
}

// ConvertActorToLightWeightInstance @ 147eb4be0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FActorInstanceHandle * __thiscall
ALightWeightInstanceManager::ConvertActorToLightWeightInstance
          (ALightWeightInstanceManager *this,FActorInstanceHandle *__return_storage_ptr__,
          AActor *param_1)

{
  ulonglong uVar1;
  AActor *pAVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  FActorInstanceHandle *pFVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  if (param_1 == (AActor *)0x0) {
    *(undefined2 *)&__return_storage_ptr__->field_0x1d = 0;
    __return_storage_ptr__->field_0x1f = 0;
    (__return_storage_ptr__->ReferenceObject).WeakPtr = (FWeakObjectPtr)0x0;
    (__return_storage_ptr__->ManagerInterface).ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
    (__return_storage_ptr__->ManagerInterface).InterfaceInstance =
         (IActorInstanceManagerInterface *)0x0;
    __return_storage_ptr__->InstanceIndex = -1;
    __return_storage_ptr__->ResolutionStatus = Invalid;
    return __return_storage_ptr__;
  }
  pvVar7 = (void *)(**(code **)(this->_padding_ + 2000))();
  if (pvVar7 == (void *)0x0) {
    FActorInstanceHandle::FActorInstanceHandle(__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  (**(code **)(this->_padding_ + 0x7d8))(this,pvVar7);
  iVar12 = 0;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Actors).field_0x10;
  iVar11 = *(int *)&(this->Actors).field_0x28;
  uVar5 = 1;
  iVar14 = 0;
  iVar10 = 0;
  iVar6 = 0;
  if (iVar11 != 0) {
    puVar15 = *(uint **)&(this->Actors).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)TStack_68.Array;
    }
    uVar16 = *puVar15;
    while (uVar16 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) {
        iVar10 = *(int *)&(this->Actors).field_0x28;
        iVar6 = iVar11;
        goto LAB_147eb4d08;
      }
      uVar16 = puVar15[lVar9 + 1];
    }
    iVar10 = *(int *)&(this->Actors).field_0x28;
    uVar5 = -uVar16 & uVar16;
    uVar1 = (ulonglong)uVar5 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iVar6 = iVar14 + -1 + local_res20;
    if (iVar10 < iVar6) {
      iVar6 = iVar11;
    }
  }
LAB_147eb4d08:
  uVar16 = *(uint *)&(this->Actors).field_0x28;
  uVar17 = uVar16 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar5,iVar12);
  TStack_68.CurrentBitIndex = iVar6;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar16 >> 5;
  TStack_68._28_4_ = iVar6;
  TStack_68.BaseBitIndex = iVar14;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->Actors).field_0x8 - *(int *)&(this->Actors).field_0x34);
  if ((((int)uVar16 < 0) || (iVar10 < (int)uVar16)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FActorInstanceHandle *)(*pcVar3)();
    return pFVar8;
  }
  uVar5 = *(uint *)&(this->Actors).field_0x28;
  if (uVar16 != uVar5) {
    puVar13 = *(undefined1 **)&(this->Actors).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->Actors).field_0x10;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
    while (uVar16 == 0) {
      lVar9 = (longlong)iVar11;
      uVar17 = uVar17 + 0x20;
      iVar11 = iVar11 + 1;
      uVar16 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_147eb4e30;
      uVar16 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar16 = (int)lVar9 + -1 + uVar17;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_147eb4e30:
  do {
    if (*(int *)&(this->Actors).field_0x8 - *(int *)&(this->Actors).field_0x34 != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<AActor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_68.CurrentBitIndex == uVar16) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->Actors).field_0x10))
    goto LAB_147eb4eac;
    pAVar2 = *(AActor **)
              (*(longlong *)&this->Actors + 8 + (longlong)TStack_68.CurrentBitIndex * 0x18);
    if ((pAVar2 != (AActor *)0x0) && (pAVar2 == param_1)) {
      iVar11 = *(int *)(*(longlong *)&this->Actors + (longlong)TStack_68.CurrentBitIndex * 0x18);
      if (iVar11 == -1) {
LAB_147eb4eac:
        if ((this->FreeIndices).ArrayNum < 1) {
          iVar11 = (this->ValidIndices).ArrayNum;
        }
        else {
          iVar10 = (this->FreeIndices).ArrayNum;
          iVar11 = *(int *)((this->FreeIndices).AllocatorInstance.Data + (longlong)iVar10 * 4 + -4);
          (this->FreeIndices).ArrayNum = iVar10 + -1;
        }
        (**(code **)(this->_padding_ + 0x770))(this,pvVar7,iVar11);
        iVar11 = (**(code **)(this->_padding_ + 0x7a8))(this);
      }
      else {
        (**(code **)(this->_padding_ + 0x7c8))(this,pvVar7,iVar11);
      }
      AActor::Destroy(param_1,false,true);
      ::operator_delete(pvVar7,0x60);
      FActorInstanceHandle::MakeDehydratedActorHandle(__return_storage_ptr__,(UObject *)this,iVar11)
      ;
      return __return_storage_ptr__;
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// ConvertCollisionIndexToInstanceIndex @ 147eb50b0

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
ALightWeightInstanceManager::ConvertCollisionIndexToInstanceIndex
          (ALightWeightInstanceManager *this,int param_1,UPrimitiveComponent *param_2)

{
  return param_1;
}

// ConvertHandleIndexToInternalIndex @ 147eb5180

int __thiscall
ALightWeightInstanceManager::ConvertHandleIndexToInternalIndex
          (ALightWeightInstanceManager *this,int param_1)

{
  return param_1;
}

// ConvertInstanceToActor @ 147eb5210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall
ALightWeightInstanceManager::ConvertInstanceToActor
          (ALightWeightInstanceManager *this,FActorInstanceHandle *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TMap<int,TObjectPtr<AActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<AActor>,0>_>
  *this_00;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  uint uVar5;
  void *_Src;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  AActor *pAVar10;
  ULevel *this_01;
  UWorld *this_02;
  TTransform<double> *pTVar11;
  UClass *pUVar12;
  TObjectPtr<AActor>_u_0 *pTVar13;
  TObjectPtr<AActor> *pTVar14;
  AActor *pAVar15;
  char *pcVar16;
  FScriptContainerElement *pFVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined1 *puVar20;
  char *pcVar21;
  undefined1 auStackY_1e8 [32];
  int local_198 [4];
  FString local_188;
  FName local_178;
  FName local_170;
  ALightWeightInstanceManager *local_168;
  FActorInstanceHandle *local_160;
  code *local_158;
  longlong lStack_150;
  code *local_148;
  undefined8 uStack_140;
  longlong local_138 [4];
  undefined1 local_118 [80];
  undefined4 local_c8;
  undefined4 uStack_c4;
  ALightWeightInstanceManager *pAStack_c0;
  FActorInstanceHandle *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pTVar2 = &this->InstanceToActorConversionsInProgress;
  pFVar17 = (pTVar2->AllocatorInstance).Data;
  pFVar3 = pFVar17 + (longlong)(this->InstanceToActorConversionsInProgress).ArrayNum * 4;
  for (; pFVar17 != pFVar3; pFVar17 = pFVar17 + 4) {
    if (*(int *)pFVar17 == param_1->InstanceIndex) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InstanceToActorConversionsInProgress.Contains(Handle.GetInstanceIndex())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceManager.cpp"
                         ,0x5e,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pAVar10 = (AActor *)(*pcVar6)();
        return pAVar10;
      }
      break;
    }
  }
  local_198[0] = param_1->InstanceIndex;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)local_198) &&
      ((FScriptContainerElement *)local_198 <
       pFVar3 + (longlong)(this->InstanceToActorConversionsInProgress).ArrayMax * 4)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    pAVar10 = (AActor *)(*pcVar6)();
    return pAVar10;
  }
  iVar9 = (this->InstanceToActorConversionsInProgress).ArrayNum;
  piVar1 = &(this->InstanceToActorConversionsInProgress).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar2->AllocatorInstance,piVar1);
  }
  this_00 = &this->Actors;
  (this->InstanceToActorConversionsInProgress).ArrayNum = iVar9 + 1;
  *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_198[0];
  uVar5 = param_1->InstanceIndex;
  local_168 = this;
  local_160 = param_1;
  if (*(int *)&(this->Actors).field_0x8 != *(int *)&(this->Actors).field_0x34) {
    puVar20 = *(undefined1 **)&(this->Actors).field_0x40;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = &(this->Actors).field_0x38;
    }
    iVar9 = *(int *)(puVar20 + (ulonglong)(*(int *)&(this->Actors).field_0x48 - 1U & uVar5) * 4);
    if (iVar9 != -1) {
      do {
        if (*(uint *)(*(longlong *)this_00 + (longlong)iVar9 * 0x18) == uVar5) {
          pTVar13 = &TMapBase<int,TObjectPtr<AActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<AActor>,0>_>
                     ::FindChecked((TMapBase<int,TObjectPtr<AActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<AActor>,0>_>
                                    *)this_00,uVar5)->field0_0x0;
          if (pTVar13->DebugPtr != (AActor *)0x0) {
            pTVar14 = TMapBase<int,TObjectPtr<AActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<AActor>,0>_>
                      ::FindChecked((TMapBase<int,TObjectPtr<AActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<AActor>,0>_>
                                     *)this_00,param_1->InstanceIndex);
            pAVar10 = (pTVar14->field0_0x0).DebugPtr;
            goto LAB_147eb5832;
          }
          break;
        }
        iVar9 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iVar9 * 0x18);
      } while (iVar9 != -1);
    }
  }
  iVar9 = param_1->InstanceIndex;
  if (iVar9 < (this->ValidIndices).ArrayNum) {
    if ((iVar9 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      pAVar10 = (AActor *)(*pcVar6)();
      return pAVar10;
    }
    if ((this->ValidIndices).AllocatorInstance.Data[iVar9] != (FScriptContainerElement)0x0) {
      pFVar17 = (this->DestroyedActorIndices).AllocatorInstance.Data;
      pFVar3 = pFVar17 + (longlong)(this->DestroyedActorIndices).ArrayNum * 4;
      for (; pFVar17 != pFVar3; pFVar17 = pFVar17 + 4) {
        if (*(int *)pFVar17 == param_1->InstanceIndex) {
          pAVar10 = (AActor *)0x0;
          if (5 < (byte)LogLightWeightInstance._0_1_) {
            iVar9 = (int)this->_padding_;
            if (iVar9 < 2) {
              local_178 = (FName)this->_padding_;
              ::FName::ToString(&local_178,&local_188);
            }
            else {
              _Src = (void *)this->_padding_;
              local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_188.Data.ArrayNum = iVar9;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar9,0,(ForAnyElementType *)&local_188,iVar9,&local_188.Data.ArrayMax)
              ;
              memcpy(local_188.Data.AllocatorInstance.Data,_Src,(longlong)iVar9 * 2);
            }
            UE::Logging::Private::BasicLog<6>
                      (&::LOG_Static,(FLogCategoryBase *)&LogLightWeightInstance);
            if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_188.Data.AllocatorInstance.Data);
            }
          }
          goto LAB_147eb5832;
        }
      }
      pAVar10 = (AActor *)0x0;
      if ((char)this->_padding_ != '\x03') goto LAB_147eb5835;
      FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_118);
      (**(code **)(this->_padding_ + 0x780))(this,local_118);
      uVar7 = local_118._72_8_;
      local_148 = (code *)local_118._64_8_;
      plVar19 = (longlong *)CONCAT44(uStack_ac,uStack_b0);
      local_118._64_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`ALightWeightInstanceManager::ConvertInstanceToActor'::__l39::<lambda_2>,void,AActor_*>
           ::Call;
      local_118._72_8_ = uStack_140;
      local_b8 = param_1;
      uStack_b0 = 0;
      uStack_ac = 0;
      local_c8 = 0x5198df80;
      uStack_c4 = 1;
      pAStack_c0 = this;
      uStack_140 = uVar7;
      if (local_148 != (code *)0x0) {
        plVar18 = local_138;
        if (plVar19 != (longlong *)0x0) {
          plVar18 = plVar19;
        }
        (**(code **)(*plVar18 + 0x10))();
      }
      this_01 = AActor::GetLevel((AActor *)this);
      this_02 = ULevel::GetWorld(this_01);
      pTVar11 = (TTransform<double> *)
                (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_a8,param_1);
      pUVar12 = (UClass *)(**(code **)(this->_padding_ + 0x788))(this,param_1);
      pAVar10 = UWorld::SpawnActor(this_02,pUVar12,pTVar11,(FActorSpawnParameters *)local_118);
      if (pAVar10 == (AActor *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewActor",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceManager.cpp"
                           ,0x88,L"");
        pAVar10 = (AActor *)0x0;
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          pAVar10 = (AActor *)(*pcVar6)();
          return pAVar10;
        }
      }
      pAVar15 = FActorInstanceHandle::GetCachedActor(param_1);
      if (pAVar15 != pAVar10) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Handle.GetCachedActor() == NewActor",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceManager.cpp"
                           ,0x8b,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          pAVar10 = (AActor *)(*pcVar6)();
          return pAVar10;
        }
      }
      if (*(int *)&(this->Actors).field_0x8 != *(int *)&(this->Actors).field_0x34) {
        puVar20 = *(undefined1 **)&(this->Actors).field_0x40;
        if (puVar20 == (undefined1 *)0x0) {
          puVar20 = &(this->Actors).field_0x38;
        }
        iVar9 = *(int *)(puVar20 +
                        (ulonglong)
                        (*(int *)&(this->Actors).field_0x48 - 1U & param_1->InstanceIndex) * 4);
        if (iVar9 != -1) {
          do {
            lVar4 = *(longlong *)this_00 + (longlong)iVar9 * 0x18;
            if (*(uint *)(*(longlong *)this_00 + (longlong)iVar9 * 0x18) == param_1->InstanceIndex)
            {
              if (lVar4 != 0) {
                pAVar15 = *(AActor **)(lVar4 + 8);
                if (UE::GC::GIsIncrementalReachabilityPending == false) {
                  if (pAVar15 != (AActor *)0x0) {
                    bVar8 = pAVar15 == pAVar10;
                    goto LAB_147eb56d1;
                  }
                }
                else if (pAVar15 != (AActor *)0x0) {
                  UE::GC::MarkAsReachable((UObject *)pAVar15);
                  bVar8 = pAVar15 == pAVar10;
                  goto LAB_147eb56d1;
                }
              }
              break;
            }
            iVar9 = *(int *)(lVar4 + 0x10);
          } while (iVar9 != -1);
        }
      }
      bVar8 = pAVar10 == (AActor *)0x0;
LAB_147eb56d1:
      if (!bVar8) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewActor == Actors.FindRef(Handle.GetInstanceIndex())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceManager.cpp"
                           ,0x8c,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          pAVar10 = (AActor *)(*pcVar6)();
          return pAVar10;
        }
      }
      pcVar16 = strstr("&ALightWeightInstanceManager::OnSpawnedActorDestroyed","::");
      if (pcVar16 == (char *)0x0) {
LAB_147eb578f:
        pcVar21 = &DAT_00000002;
LAB_147eb5794:
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result && Result[2] != \'0\'",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                           ,0x1da,L"\'%hs\' does not look like a member function");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          pAVar10 = (AActor *)(*pcVar6)();
          return pAVar10;
        }
      }
      else {
        do {
          pcVar21 = pcVar16;
          pcVar16 = strstr(pcVar21 + 1,"::");
        } while (pcVar16 != (char *)0x0);
        if (pcVar21 == (char *)0x0) goto LAB_147eb578f;
        pcVar21 = pcVar21 + 2;
        if (*pcVar21 == '0') goto LAB_147eb5794;
      }
      ::FName::FName(&local_170,pcVar21);
      local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)OnSpawnedActorDestroyed;
      local_188.Data.ArrayNum = 0;
      lStack_150 = (ulonglong)(uint)local_188.Data.ArrayMax << 0x20;
      local_158 = OnSpawnedActorDestroyed;
      TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>
      ::__Internal_AddUniqueDynamic<ALightWeightInstanceManager>
                ((TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>
                  *)&pAVar10->OnDestroyed,this,(pmf_656f76af *)&local_158,local_170);
      (**(code **)(this->_padding_ + 0x798))(this,param_1);
      if ((code *)local_118._64_8_ != (code *)0x0) {
        plVar19 = (longlong *)&local_c8;
        if ((longlong *)CONCAT44(uStack_ac,uStack_b0) != (longlong *)0x0) {
          plVar19 = (longlong *)CONCAT44(uStack_ac,uStack_b0);
        }
        (**(code **)(*plVar19 + 0x10))();
      }
      goto LAB_147eb5835;
    }
  }
  pAVar10 = (AActor *)0x0;
LAB_147eb5832:
LAB_147eb5835:
  ScopeExitSupport::
  TScopeGuard<`ALightWeightInstanceManager::ConvertInstanceToActor'::__l2::<lambda_1>_>::
  ~TScopeGuard<_ALightWeightInstanceManager::ConvertInstanceToActor_::__l2::<lambda_1>_>(&local_168)
  ;
  return pAVar10;
}

// ConvertInternalIndexToHandleIndex @ 147eb5880

int __thiscall
ALightWeightInstanceManager::ConvertInternalIndexToHandleIndex
          (ALightWeightInstanceManager *this,int param_1)

{
  return param_1;
}

// ConvertPositionToCoord @ 147eb5910

TIntVector3<int> * __thiscall
ALightWeightInstanceManager::ConvertPositionToCoord
          (ALightWeightInstanceManager *this,TIntVector3<int> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  
  iVar4 = (**(code **)(this->_padding_ + 0x768))();
  uVar3 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  dVar2 = __real_3fe0000000000000;
  if (0.0 < (float)iVar4) {
    dVar5 = __real_4000000000000000 / (double)iVar4;
    dVar6 = dVar5 * (param_1->field0_0x0)._s_0.Y - __real_3fe0000000000000;
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (int)((longlong)ROUND(dVar5 * (param_1->field0_0x0)._s_0.X - __real_3fe0000000000000) >> 1)
    ;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (int)((longlong)ROUND(dVar6) >> 1);
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (int)((longlong)ROUND((dVar1 + dVar1) / (double)iVar4 - dVar2) >> 1);
    return __return_storage_ptr__;
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = uVar3;
  return __return_storage_ptr__;
}

// ConvertPositionToGridBounds @ 147eb59d0

TBox<double> * __thiscall
ALightWeightInstanceManager::ConvertPositionToGridBounds
          (ALightWeightInstanceManager *this,TBox<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  int iVar5;
  TIntVector3<int>_u_0 local_68 [5];
  uint7 uStack_27;
  
  iVar5 = (**(code **)(this->_padding_ + 0x768))();
  if ((float)iVar5 <= 0.0) {
    dVar2 = (param_1->field0_0x0)._s_0.X;
    dVar3 = (param_1->field0_0x0)._s_0.Y;
    __return_storage_ptr__->IsValid = '\x01';
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar2;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar3;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar2;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar3;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar1;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar1;
  }
  else {
    ConvertPositionToCoord(this,(TIntVector3<int> *)&local_68[0]._s_0,param_1);
    iVar5 = (int)(float)iVar5;
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)(iVar5 * local_68[0]._s_0.X);
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)(iVar5 * local_68[0]._s_0.Y);
    lVar4 = (ulonglong)uStack_27 << 8;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)(iVar5 * local_68[0]._s_0.Z);
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)(iVar5 * local_68[0]._s_0.X + iVar5);
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)(iVar5 * local_68[0]._s_0.Y + iVar5);
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (double)(iVar5 * local_68[0]._s_0.Z + iVar5);
    __return_storage_ptr__->IsValid = (char)lVar4;
    __return_storage_ptr__->Pad[0] = (char)((ulonglong)lVar4 >> 8);
    __return_storage_ptr__->Pad[1] = (char)((ulonglong)lVar4 >> 0x10);
    __return_storage_ptr__->Pad[2] = (char)((ulonglong)lVar4 >> 0x18);
    __return_storage_ptr__->Pad[3] = (char)((ulonglong)lVar4 >> 0x20);
    __return_storage_ptr__->Pad[4] = (char)((ulonglong)lVar4 >> 0x28);
    __return_storage_ptr__->Pad[5] = (char)((ulonglong)lVar4 >> 0x30);
    __return_storage_ptr__->Pad[6] = (char)((ulonglong)lVar4 >> 0x38);
  }
  return __return_storage_ptr__;
}

// DoesAcceptClass @ 147eb7850

bool __thiscall
ALightWeightInstanceManager::DoesAcceptClass(ALightWeightInstanceManager *this,UClass *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UClass *)0x0) {
    pUVar2 = GetAcceptedClass(this);
    if (pUVar2 != (UClass *)0x0) {
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= (int)param_1->_padding_) &&
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        return true;
      }
    }
  }
  return false;
}

// DoesRepresentClass @ 147eb78a0

bool __thiscall
ALightWeightInstanceManager::DoesRepresentClass(ALightWeightInstanceManager *this,UClass *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UClass *)0x0) {
    pUVar2 = GetRepresentedClassInternal(this);
    if (pUVar2 != (UClass *)0x0) {
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= (int)param_1->_padding_) &&
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        return true;
      }
    }
  }
  return false;
}

// FindActor @ 147eba980

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall
ALightWeightInstanceManager::FindActor
          (ALightWeightInstanceManager *this,FActorInstanceHandle *param_1)

{
  longlong lVar1;
  AActor *pAVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    plVar4 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar4 = &this->_padding_;
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)((int)this->_padding_ - 1U & param_1->InstanceIndex) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = this->_padding_ + (longlong)iVar3 * 0x18;
        if (*(uint *)(this->_padding_ + (longlong)iVar3 * 0x18) == param_1->InstanceIndex) {
          puVar5 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar5 = (undefined8 *)0x0;
          }
          if (puVar5 == (undefined8 *)0x0) {
            return (AActor *)0x0;
          }
          pAVar2 = (AActor *)*puVar5;
          if ((UE::GC::GIsIncrementalReachabilityPending) && (pAVar2 != (AActor *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pAVar2);
          }
          return pAVar2;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (AActor *)0x0;
}

// FindActorForHandle @ 147ebaa20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
ALightWeightInstanceManager::FindActorForHandle
          (ALightWeightInstanceManager *this,FActorInstanceHandle *param_1)

{
  longlong lVar1;
  int iVar2;
  AActor *pAVar3;
  AActor *pAVar4;
  undefined1 *puVar5;
  
  pAVar3 = FActorInstanceHandle::GetCachedActor(param_1);
  if (pAVar3 != (AActor *)0x0) {
    return true;
  }
  pAVar3 = (AActor *)0x0;
  if (*(int *)&(this->Actors).field_0x8 != *(int *)&(this->Actors).field_0x34) {
    puVar5 = *(undefined1 **)&(this->Actors).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->Actors).field_0x38;
    }
    iVar2 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->Actors).field_0x48 - 1U & param_1->InstanceIndex) * 4
                    );
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->Actors + (longlong)iVar2 * 0x18;
        if (*(uint *)(*(longlong *)&this->Actors + (longlong)iVar2 * 0x18) == param_1->InstanceIndex
           ) {
          pAVar4 = (AActor *)(lVar1 + 8);
          if (lVar1 == 0) {
            pAVar4 = pAVar3;
          }
          pAVar3 = (AActor *)0x0;
          if (pAVar4 != (AActor *)0x0) {
            pAVar3 = (AActor *)pAVar4->_padding_;
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  FActorInstanceHandle::SetCachedActor(param_1,pAVar3);
  return pAVar3 != (AActor *)0x0;
}

// FindIndexForActor @ 147ebb250

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
ALightWeightInstanceManager::FindIndexForActor(ALightWeightInstanceManager *this,AActor *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  AActor *pAVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar12 = 0;
  puVar1 = &(this->Actors).field_0x10;
  iVar8 = *(int *)&(this->Actors).field_0x28;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar8 != 0) {
    puVar15 = *(uint **)&(this->Actors).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_147ebb2fd;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar7 = (int)lVar9 + -1 + iVar14;
    if (iVar8 < iVar7) {
      iVar7 = iVar8;
    }
  }
LAB_147ebb2fd:
  uVar11 = *(uint *)&(this->Actors).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar12);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Actors).field_0x8 - *(int *)&(this->Actors).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar8 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return iVar8;
  }
  uVar6 = *(uint *)&(this->Actors).field_0x28;
  if (uVar11 != uVar6) {
    puVar13 = *(undefined1 **)&(this->Actors).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_147ebb400;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_147ebb400:
  while( true ) {
    if (*(int *)&(this->Actors).field_0x8 - *(int *)&(this->Actors).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<AActor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return -1;
    }
    pAVar3 = *(AActor **)
              (*(longlong *)&this->Actors + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if (pAVar3 == (AActor *)0x0) {
      bVar5 = param_1 == (AActor *)0x0;
    }
    else {
      bVar5 = pAVar3 == param_1;
    }
    if (bVar5) break;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return *(int *)(*(longlong *)&this->Actors + (longlong)TStack_60.CurrentBitIndex * 0x18);
}

// FindOrCreateActor @ 147ebbfa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall
ALightWeightInstanceManager::FindOrCreateActor
          (ALightWeightInstanceManager *this,FActorInstanceHandle *param_1)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  AActor *pAVar7;
  uint *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  
  pAVar7 = FActorInstanceHandle::GetCachedActor(param_1);
  if (pAVar7 == (AActor *)0x0) {
    uVar3 = param_1->InstanceIndex;
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar9 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar9 = &this->_padding_;
      }
      iVar6 = *(int *)((longlong)plVar9 + (ulonglong)((int)this->_padding_ - 1U & uVar3) * 4);
      if (iVar6 != -1) {
        do {
          lVar1 = this->_padding_ + (longlong)iVar6 * 0x18;
          if (*(uint *)(this->_padding_ + (longlong)iVar6 * 0x18) == uVar3) {
            puVar10 = (undefined8 *)(lVar1 + 8);
            if (lVar1 == 0) {
              puVar10 = (undefined8 *)0x0;
            }
            if (puVar10 != (undefined8 *)0x0) {
              puVar8 = (uint *)this->_padding_;
              puVar2 = puVar8 + (int)this->_padding_;
              if (puVar8 != puVar2) goto LAB_147ebc0a7;
              goto LAB_147ebc122;
            }
            break;
          }
          iVar6 = *(int *)(lVar1 + 0x10);
        } while (iVar6 != -1);
      }
    }
    ConvertInstanceToActor((ALightWeightInstanceManager *)&this[-1]._padding_,param_1);
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6448883726972616645>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceManager.cpp"
                       ,0x3b,"!Handle.GetCachedActor()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pAVar7 = (AActor *)(*pcVar4)();
      return pAVar7;
    }
  }
  goto LAB_147ebc06c;
  while (puVar8 = puVar8 + 1, puVar8 != puVar2) {
LAB_147ebc0a7:
    if (*puVar8 == uVar3) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6448883726972616632>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceManager.cpp"
                         ,0x48,"!bSpawnInProgress");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pAVar7 = (AActor *)(*pcVar4)();
        return pAVar7;
      }
      if (1 < (byte)LogLightWeightInstance._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLightWeightInstance)
        ;
      }
LAB_147ebc122:
      FActorInstanceHandle::SetCachedActor(param_1,(AActor *)*puVar10);
      goto LAB_147ebc06c;
    }
  }
  FActorInstanceHandle::SetCachedActor(param_1,(AActor *)*puVar10);
LAB_147ebc06c:
  pAVar7 = FActorInstanceHandle::GetCachedActor(param_1);
  return pAVar7;
}

// GetAcceptedClass @ 147ebe640

UClass * __thiscall ALightWeightInstanceManager::GetAcceptedClass(ALightWeightInstanceManager *this)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  
  pUVar2 = (this->AcceptedClass).Class.field0_0x0.DebugPtr;
  if ((pUVar2 != (UClass *)0x0) &&
     (pUVar4 = Z_Construct_UClass_AActor_NoRegister(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((bVar3) &&
        (pUVar2 = (this->AcceptedClass).Class.field0_0x0.DebugPtr, pUVar2 != (UClass *)0x0)) &&
       (((uint)pUVar2->_padding_ >> 0x1e & 1) == 0)) {
      pUVar2 = (this->AcceptedClass).Class.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar2 == (UClass *)0x0) {
          return (UClass *)0x0;
        }
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      if ((pUVar2 != (UClass *)0x0) &&
         (pUVar4 = Z_Construct_UClass_AActor_NoRegister(), pUVar4 != (UClass *)0x0)) {
        iVar1 = (int)pUVar4->_padding_;
        if (((int)pUVar2->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar4->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          return pUVar2;
        }
      }
    }
  }
  return (UClass *)0x0;
}

// GetActorClassToSpawn @ 147ebe890

UClass * __thiscall
ALightWeightInstanceManager::GetActorClassToSpawn
          (ALightWeightInstanceManager *this,FActorInstanceHandle *param_1)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  
  pUVar2 = (this->RepresentedClass).Class.field0_0x0.DebugPtr;
  if (pUVar2 != (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return (this->RepresentedClass).Class.field0_0x0.DebugPtr;
      }
    }
  }
  return (UClass *)0x0;
}

// GetGridSize @ 147ec03c0

int __thiscall ALightWeightInstanceManager::GetGridSize(ALightWeightInstanceManager *this)

{
  return LWIGridSize;
}

// GetLevelForInstance @ 147ec0a60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevel * __thiscall
ALightWeightInstanceManager::GetLevelForInstance(ALightWeightInstanceManager *this,int param_1)

{
  ULevel *pUVar1;
  
  pUVar1 = AActor::GetLevel((AActor *)&this[-1]._padding_);
  return pUVar1;
}

// GetLifetimeReplicatedProps @ 147ec0d70

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
ALightWeightInstanceManager::GetLifetimeReplicatedProps
          (ALightWeightInstanceManager *this,
          TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FProperty *pFVar4;
  FName local_res18 [2];
  FDoRepLifetimeParams local_38;
  
  AActor::GetLifetimeReplicatedProps((AActor *)this,param_1);
  pFVar2 = ::FName::FName(local_res18,0x10,L"RepresentedClass",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_38);
  pFVar2 = ::FName::FName(local_res18,0x12,L"InstanceTransforms",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_38);
  pFVar2 = ::FName::FName(local_res18,0xb,L"FreeIndices",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_38);
  pFVar2 = ::FName::FName(local_res18,0xc,L"ValidIndices",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38.Condition = COND_None;
  local_38.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_38);
  return;
}

// GetLocation @ 147ec16b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
ALightWeightInstanceManager::GetLocation
          (ALightWeightInstanceManager *this,TVector<double> *__return_storage_ptr__,
          FActorInstanceHandle *param_1)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  lVar3 = (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_78);
  dVar2 = *(double *)(lVar3 + 0x28);
  dVar1 = *(double *)(lVar3 + 0x30);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)(lVar3 + 0x20);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetName @ 147ec20f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
ALightWeightInstanceManager::GetName
          (ALightWeightInstanceManager *this,FString *__return_storage_ptr__,
          FActorInstanceHandle *param_1)

{
  code *pcVar1;
  bool bVar2;
  AActor *pAVar3;
  FString *pFVar4;
  FName local_res20;
  
  bVar2 = FindActorForHandle(this,param_1);
  if (!bVar2) {
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s_%u");
    return __return_storage_ptr__;
  }
  pAVar3 = FActorInstanceHandle::GetCachedActor(param_1);
  if ((pAVar3 == (AActor *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Handle.GetCachedActor()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceManager.cpp"
                         ,0x178,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  pAVar3 = FActorInstanceHandle::GetCachedActor(param_1);
  local_res20 = (FName)pAVar3->_padding_;
  ::FName::ToString(&local_res20,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 147ec3f60

UClass * __cdecl ALightWeightInstanceManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALightWeightInstanceManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightWeightInstanceManager",
               &Z_Registration_Info_UClass_ALightWeightInstanceManager.InnerSingleton,
               StaticRegisterNativesALightWeightInstanceManager,0x388,8,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<ALightWeightInstanceManager>,
               InternalVTableHelperCtorCaller<ALightWeightInstanceManager>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALightWeightInstanceManager.InnerSingleton;
}

// GetRepresentedClass @ 147ec51d0

UClass * __thiscall
ALightWeightInstanceManager::GetRepresentedClass(ALightWeightInstanceManager *this,int param_1)

{
  UClass *pUVar1;
  
  pUVar1 = GetRepresentedClassInternal((ALightWeightInstanceManager *)&this[-1]._padding_);
  return pUVar1;
}

// GetRepresentedClassInternal @ 147ec51f0

UClass * __thiscall
ALightWeightInstanceManager::GetRepresentedClassInternal(ALightWeightInstanceManager *this)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  
  pUVar2 = (this->RepresentedClass).Class.field0_0x0.DebugPtr;
  if ((pUVar2 != (UClass *)0x0) &&
     (pUVar4 = Z_Construct_UClass_AActor_NoRegister(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((bVar3) &&
        (pUVar2 = (this->RepresentedClass).Class.field0_0x0.DebugPtr, pUVar2 != (UClass *)0x0)) &&
       (((uint)pUVar2->_padding_ >> 0x1e & 1) == 0)) {
      pUVar2 = (this->RepresentedClass).Class.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar2 == (UClass *)0x0) {
          return (UClass *)0x0;
        }
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      if ((pUVar2 != (UClass *)0x0) &&
         (pUVar4 = Z_Construct_UClass_AActor_NoRegister(), pUVar4 != (UClass *)0x0)) {
        iVar1 = (int)pUVar4->_padding_;
        if (((int)pUVar2->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar4->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          return pUVar2;
        }
      }
    }
  }
  return (UClass *)0x0;
}

// GetRotation @ 147ec52d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TRotator<double> * __thiscall
ALightWeightInstanceManager::GetRotation
          (ALightWeightInstanceManager *this,TRotator<double> *__return_storage_ptr__,
          FActorInstanceHandle *param_1)

{
  double *pdVar1;
  undefined1 auStack_b8 [32];
  TQuat<double> local_98;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pdVar1 = (double *)(**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_78);
  local_98.X = *pdVar1;
  local_98.Y = pdVar1[1];
  local_98.Z = pdVar1[2];
  local_98.W = pdVar1[3];
  UE::Math::TQuat<double>::Rotator(&local_98,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTransform @ 147ec6d10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTransform<double> * __thiscall
ALightWeightInstanceManager::GetTransform
          (ALightWeightInstanceManager *this,TTransform<double> *__return_storage_ptr__,
          FActorInstanceHandle *param_1)

{
  uint uVar1;
  USceneComponent *pUVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  bool bVar20;
  uint uVar21;
  AActor *pAVar22;
  TTransform<double> *pTVar23;
  
  bVar20 = FindActorForHandle((ALightWeightInstanceManager *)&this[-1]._padding_,param_1);
  if (bVar20) {
    pAVar22 = FActorInstanceHandle::GetCachedActor(param_1);
    if (pAVar22 == (AActor *)0x0) {
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Handle.GetCachedActor()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceManager.cpp"
                          ,0x167,L"");
      if (bVar20) {
        pcVar4 = (code *)swi(3);
        pTVar23 = (TTransform<double> *)(*pcVar4)();
        return pTVar23;
      }
    }
    pAVar22 = FActorInstanceHandle::GetCachedActor(param_1);
    pUVar2 = (pAVar22->RootComponent).field0_0x0.DebugPtr;
    if (pUVar2 == (USceneComponent *)0x0) {
      pTVar23 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar23 = &pUVar2->ComponentToWorld;
    }
    dVar19 = (pTVar23->Rotation).XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar23->Rotation).XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar19;
    dVar19 = (pTVar23->Rotation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (pTVar23->Rotation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar19;
    dVar19 = (pTVar23->Translation).XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (pTVar23->Translation).XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar19;
    dVar19 = (pTVar23->Translation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (pTVar23->Translation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar19;
    dVar19 = (pTVar23->Scale3D).XY.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (pTVar23->Scale3D).XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar19;
    dVar19 = (pTVar23->Scale3D).ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (pTVar23->Scale3D).ZW.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar19;
    return __return_storage_ptr__;
  }
  bVar20 = IsIndexValid((ALightWeightInstanceManager *)&this[-1]._padding_,param_1->InstanceIndex);
  if (bVar20) {
    uVar1 = param_1->InstanceIndex;
    uVar21 = 0;
    if ((int)uVar1 < (int)this->_padding_) {
      uVar21 = ~uVar1 >> 0x1f;
    }
    if (uVar21 == 0) {
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar20) {
        pcVar4 = (code *)swi(3);
        pTVar23 = (TTransform<double> *)(*pcVar4)();
        return pTVar23;
      }
    }
    lVar3 = this->_padding_;
    if (this[-1]._padding_ == 0) {
      pTVar23 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar23 = (TTransform<double> *)(this[-1]._padding_ + 0x1f0);
    }
    fVar5 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar6 = GlobalVectorConstants::Float0001.m128_f32[3];
    auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar13._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar13;
    auVar14._8_4_ = SUB84((double)fVar6,0);
    auVar14._0_8_ = (double)fVar5;
    auVar14._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar14;
    fVar5 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar6 = GlobalVectorConstants::FloatZero.m128_f32[3];
    auVar15._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    auVar15._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    auVar15._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar15;
    auVar16._8_4_ = SUB84((double)fVar6,0);
    auVar16._0_8_ = (double)fVar5;
    auVar16._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar16;
    fVar5 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar6 = GlobalVectorConstants::Float1110.m128_f32[3];
    auVar17._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    auVar17._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    auVar17._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar17;
    auVar18._8_4_ = SUB84((double)fVar6,0);
    auVar18._0_8_ = (double)fVar5;
    auVar18._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar18;
    UE::Math::TTransform<double>::Multiply
              (__return_storage_ptr__,(TTransform<double> *)((longlong)(int)uVar1 * 0x60 + lVar3),
               pTVar23);
    return __return_storage_ptr__;
  }
  bVar20 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<_6448883726972616341>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceManager.cpp"
                      ,0x16b,"IsIndexValid(Handle.GetInstanceIndex())");
  if (bVar20) {
    pcVar4 = (code *)swi(3);
    pTVar23 = (TTransform<double> *)(*pcVar4)();
    return pTVar23;
  }
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar6,0);
  auVar8._0_8_ = (double)fVar5;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar8;
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar6,0);
  auVar10._0_8_ = (double)fVar5;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar10;
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar6,0);
  auVar12._0_8_ = (double)fVar5;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar12;
  return __return_storage_ptr__;
}

// GrowDataArrays @ 147ec8aa0

void __thiscall ALightWeightInstanceManager::GrowDataArrays(ALightWeightInstanceManager *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = (this->InstanceTransforms).ArrayNum;
  piVar1 = &(this->InstanceTransforms).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1060,&(this->InstanceTransforms).AllocatorInstance,piVar1);
  }
  piVar1 = &(this->ValidIndices).ArrayMax;
  (this->InstanceTransforms).ArrayNum = iVar4 + 1;
  iVar4 = (this->ValidIndices).ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&(this->ValidIndices).AllocatorInstance,piVar1);
  }
  (this->ValidIndices).ArrayNum = iVar4 + 1;
  if ((this->InstanceTransforms).ArrayNum != iVar4 + 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceTransforms.Num() == ValidIndices.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceManager.cpp"
                       ,0x1b6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// HasAnyValidInstancesOrManagedActors @ 147ecb3a0

bool __thiscall
ALightWeightInstanceManager::HasAnyValidInstancesOrManagedActors(ALightWeightInstanceManager *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->ValidIndices).AllocatorInstance.Data;
  iVar2 = (this->ValidIndices).ArrayNum;
  pFVar1 = pFVar3 + iVar2;
  while( true ) {
    if ((this->ValidIndices).ArrayNum != iVar2) {
      `TCheckedPointerIterator<bool_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*pFVar3 != (FScriptContainerElement)0x0) {
      return true;
    }
    pFVar3 = pFVar3 + 1;
  }
  return false;
}

// IsIndexValid @ 147ecd770

bool __thiscall
ALightWeightInstanceManager::IsIndexValid(ALightWeightInstanceManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->ValidIndices).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->ValidIndices).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    return (bool)(this->ValidIndices).AllocatorInstance.Data[param_1];
  }
  return false;
}

// OnRep_Transforms @ 147ed0550

void __thiscall ALightWeightInstanceManager::OnRep_Transforms(ALightWeightInstanceManager *this)

{
  return;
}

// OnSpawnedActorDestroyed @ 147ed0640

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
ALightWeightInstanceManager::OnSpawnedActorDestroyed
          (ALightWeightInstanceManager *this,AActor *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x7a0);
  iVar1 = FindIndexForActor(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x000147ed067f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,param_1,iVar1);
  return;
}

// OnSpawnedActorDestroyed @ 147ed0690

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
ALightWeightInstanceManager::OnSpawnedActorDestroyed
          (ALightWeightInstanceManager *this,AActor *param_1,int param_2)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  void *_Src;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  FActorDestroyedSignature FVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint local_res8 [2];
  FName local_res10;
  uint local_res18 [2];
  FName local_res20;
  FString local_58;
  FString local_48;
  
  local_res18[0] = param_2;
  if ((param_1 == (AActor *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DestroyedActor",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceManager.cpp"
                         ,0x9d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (local_res18[0] == 0xffffffff) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6448883726972616546>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceManager.cpp"
                       ,0x9e,"DestroyedActorInstanceIndex != INDEX_NONE");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (1 < (byte)LogLightWeightInstance._0_1_) {
      local_res10 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res10,&local_48);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLightWeightInstance);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  local_res8[0] = local_res18[0];
  if (*(int *)&(this->Actors).field_0x8 != *(int *)&(this->Actors).field_0x34) {
    TSet<TTuple<int,TObjectPtr<AActor>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<AActor>,0>,FDefaultSetAllocator>
    ::RemoveImpl<int>((TSet<TTuple<int,TObjectPtr<AActor>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<AActor>,0>,FDefaultSetAllocator>
                       *)&this->Actors,local_res18[0],(int *)local_res8);
  }
  if (param_1->OnDestroyed != (FActorDestroyedSignature)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                      ::__l2::DelegateFName,"OnDestroyed");
      _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FVar5 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar6 = UObjectBase::IsValidLowLevelFast((UObjectBase *)param_1,false);
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("DelegateOwner->IsValidLowLevelFast(false)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                           ,0xd7,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar7 = (FActorDestroyedSignature)
            FSparseDelegateStorage::RemoveAll((UObject *)param_1,FVar5,(UObject *)this);
    param_1->OnDestroyed = FVar7;
  }
  pTVar2 = &this->DestroyedActorIndices;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  pFVar9 = pFVar3;
  while( true ) {
    if (pFVar9 == pFVar3 + (longlong)(this->DestroyedActorIndices).ArrayNum * 4) {
      if (((pFVar3 <= (FScriptContainerElement *)local_res18) &&
          ((FScriptContainerElement *)local_res18 <
           pFVar3 + (longlong)(this->DestroyedActorIndices).ArrayMax * 4)) &&
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
      iVar8 = (this->DestroyedActorIndices).ArrayNum;
      piVar1 = &(this->DestroyedActorIndices).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->DestroyedActorIndices).ArrayNum = iVar8 + 1;
      *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_res18[0];
      return;
    }
    if (*(uint *)pFVar9 == local_res18[0]) break;
    pFVar9 = pFVar9 + 4;
  }
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6448883726972616535>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceManager.cpp"
                     ,0xa9,"!DestroyedActorIndices.Contains(DestroyedActorInstanceIndex)");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((byte)LogLightWeightInstance._0_1_ < 2) {
    return;
  }
  iVar8 = (int)this->_padding_;
  if (iVar8 < 2) {
    local_res20 = (FName)this->_padding_;
    ::FName::ToString(&local_res20,&local_58);
  }
  else {
    _Src = (void *)this->_padding_;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = iVar8;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar8,0,(ForAnyElementType *)&local_58,iVar8,&local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,_Src,(longlong)iVar8 * 2);
  }
  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLightWeightInstance);
  if (local_58.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_58.Data.AllocatorInstance.Data);
  return;
}

// PostActorSpawn @ 147ed1450

void __thiscall
ALightWeightInstanceManager::PostActorSpawn
          (ALightWeightInstanceManager *this,FActorInstanceHandle *param_1)

{
  return;
}

// PreSpawnInitalization @ 147ed2520

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
ALightWeightInstanceManager::PreSpawnInitalization
          (ALightWeightInstanceManager *this,FActorInstanceHandle *param_1,AActor *param_2)

{
  int local_res8 [2];
  TPairInitializer<int_&&,TObjectPtr<AActor>_&&> local_res10;
  int *local_28;
  TObjectPtr<AActor> **local_20;
  
  FActorInstanceHandle::SetCachedActor(param_1,param_2);
  local_res10.Value = (TObjectPtr<AActor> *)param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  local_res8[0] = param_1->InstanceIndex;
  local_28 = local_res8;
  local_20 = &local_res10.Value;
  TSet<TTuple<int,TObjectPtr<AActor>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<AActor>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_&&,TObjectPtr<AActor>_&&>_>
            ((TSet<TTuple<int,TObjectPtr<AActor>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<AActor>,0>,FDefaultSetAllocator>
              *)&this->Actors,&local_res10,(bool *)&local_28);
  return;
}

// RemoveInstance @ 147ed8390

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
ALightWeightInstanceManager::RemoveInstance(ALightWeightInstanceManager *this,int param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  uint local_res10 [2];
  
  local_res10[0] = param_1;
  bVar5 = IsIndexValid(this,param_1);
  if (bVar5) {
    pTVar2 = &this->FreeIndices;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_res10) &&
        ((FScriptContainerElement *)local_res10 <
         pFVar3 + (longlong)(this->FreeIndices).ArrayMax * 4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (this->FreeIndices).ArrayNum;
    piVar1 = &(this->FreeIndices).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->FreeIndices).ArrayNum = iVar6 + 1;
    *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_res10[0];
    lVar10 = (longlong)(int)local_res10[0];
    uVar7 = 0;
    if ((int)local_res10[0] < (this->ValidIndices).ArrayNum) {
      uVar7 = ~local_res10[0] >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (this->ValidIndices).AllocatorInstance.Data[lVar10] = (FScriptContainerElement)0x0;
    if (*(int *)&(this->Actors).field_0x8 != *(int *)&(this->Actors).field_0x34) {
      puVar9 = *(undefined1 **)&(this->Actors).field_0x40;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &(this->Actors).field_0x38;
      }
      iVar6 = *(int *)(puVar9 + (ulonglong)
                                (*(int *)&(this->Actors).field_0x48 - 1U & local_res10[0]) * 4);
      if (iVar6 != -1) {
        while (lVar10 = *(longlong *)&this->Actors + (longlong)iVar6 * 0x18,
              *(uint *)(*(longlong *)&this->Actors + (longlong)iVar6 * 0x18) != local_res10[0]) {
          iVar6 = *(int *)(lVar10 + 0x10);
          if (iVar6 == -1) {
            return;
          }
        }
        puVar8 = (undefined8 *)(lVar10 + 8);
        if (lVar10 == 0) {
          puVar8 = (undefined8 *)0x0;
        }
        if (puVar8 != (undefined8 *)0x0) {
          AActor::Destroy((AActor *)*puVar8,false,true);
        }
      }
    }
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6448883726972616255>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceManager.cpp"
                       ,0x1c1,"IsIndexValid(Index)");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// SetDataFromActor @ 147edc500

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
ALightWeightInstanceManager::SetDataFromActor
          (ALightWeightInstanceManager *this,FLWIData *param_1,AActor *param_2)

{
  USceneComponent *pUVar1;
  double dVar2;
  TTransform<double> *pTVar3;
  
  if ((param_1 != (FLWIData *)0x0) && (param_2 != (AActor *)0x0)) {
    pUVar1 = (param_2->RootComponent).field0_0x0.DebugPtr;
    if (pUVar1 == (USceneComponent *)0x0) {
      pTVar3 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar3 = &pUVar1->ComponentToWorld;
    }
    dVar2 = (pTVar3->Rotation).XY.m128d_f64[1];
    (param_1->Transform).Rotation.XY.m128d_f64[0] = (pTVar3->Rotation).XY.m128d_f64[0];
    (param_1->Transform).Rotation.XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar3->Rotation).ZW.m128d_f64[1];
    (param_1->Transform).Rotation.ZW.m128d_f64[0] = (pTVar3->Rotation).ZW.m128d_f64[0];
    (param_1->Transform).Rotation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (pTVar3->Translation).XY.m128d_f64[1];
    (param_1->Transform).Translation.XY.m128d_f64[0] = (pTVar3->Translation).XY.m128d_f64[0];
    (param_1->Transform).Translation.XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar3->Translation).ZW.m128d_f64[1];
    (param_1->Transform).Translation.ZW.m128d_f64[0] = (pTVar3->Translation).ZW.m128d_f64[0];
    (param_1->Transform).Translation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (pTVar3->Scale3D).XY.m128d_f64[1];
    (param_1->Transform).Scale3D.XY.m128d_f64[0] = (pTVar3->Scale3D).XY.m128d_f64[0];
    (param_1->Transform).Scale3D.XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar3->Scale3D).ZW.m128d_f64[1];
    (param_1->Transform).Scale3D.ZW.m128d_f64[0] = (pTVar3->Scale3D).ZW.m128d_f64[0];
    (param_1->Transform).Scale3D.ZW.m128d_f64[1] = dVar2;
    return true;
  }
  return false;
}

// SetRepresentedClass @ 147edcdc0

void __thiscall
ALightWeightInstanceManager::SetRepresentedClass(ALightWeightInstanceManager *this,UClass *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->RepresentedClass).Class.field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->RepresentedClass).Class.field0_0x0.DebugPtr = param_1;
  return;
}

// SetSpawnParameters @ 147edd240

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
ALightWeightInstanceManager::SetSpawnParameters
          (ALightWeightInstanceManager *this,FActorSpawnParameters *param_1)

{
  ULevel *pUVar1;
  
  pUVar1 = AActor::GetLevel((AActor *)this);
  param_1->OverrideLevel = pUVar1;
  param_1->SpawnCollisionHandlingOverride = AlwaysSpawn;
  param_1->ObjectFlags = RF_Transactional;
  return;
}

// StaticRegisterNativesALightWeightInstanceManager @ 147edf020

void __cdecl ALightWeightInstanceManager::StaticRegisterNativesALightWeightInstanceManager(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_ALightWeightInstanceManager_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 147edf2e0

void __thiscall ALightWeightInstanceManager::Tick(ALightWeightInstanceManager *this,float param_1)

{
  return;
}

// UpdateDataAtIndex @ 147ee5270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ALightWeightInstanceManager::UpdateDataAtIndex
          (ALightWeightInstanceManager *this,FLWIData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  int iVar18;
  VectorRegister4Double *pVVar19;
  TTransform<double> *this_00;
  uint uVar20;
  longlong lVar21;
  undefined1 auVar22 [16];
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  TTransform<double> local_148;
  TTransform<double> local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_178;
  lVar21 = this->_padding_;
  if (lVar21 == 0) {
    this_00 = &UE::Math::TTransform<double>::Identity;
    pVVar19 = &UE::Math::TTransform<double>::Identity.Scale3D;
  }
  else {
    this_00 = (TTransform<double> *)(lVar21 + 0x1f0);
    pVVar19 = (VectorRegister4Double *)(lVar21 + 0x230);
  }
  auVar22._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                        *(uint *)((longlong)(pVVar19->XY).m128d_f64 + 4),
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                        *(uint *)(pVVar19->XY).m128d_f64);
  auVar22._8_4_ = _UNK_15061cc88 & *(uint *)((pVVar19->XY).m128d_f64 + 1);
  auVar22._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(pVVar19->XY).m128d_f64 + 0xc);
  lVar21 = -(ulonglong)
            ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
            (double)CONCAT44(_UNK_15061cc8c & *(uint *)((longlong)(pVVar19->ZW).m128d_f64 + 0xc),
                             _UNK_15061cc88 & *(uint *)((pVVar19->ZW).m128d_f64 + 1)));
  auVar4._8_4_ = (int)lVar21;
  auVar4._0_8_ = -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                  (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                   *(uint *)((longlong)(pVVar19->ZW).m128d_f64 + 4),
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                   *(uint *)(pVVar19->ZW).m128d_f64));
  auVar4._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
  uVar20 = movmskpd((int)param_1,auVar4);
  lVar21 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar22._8_8_);
  auVar3._8_4_ = (int)lVar21;
  auVar3._0_8_ = -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar22._0_8_);
  auVar3._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
  iVar18 = movmskpd((int)pVVar19,auVar3);
  if ((uVar20 & 0x3fffffff) == 0 && iVar18 == 0) {
    local_e8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_e8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_e8.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_e8.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_e8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_e8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    UE::Math::TTransform<double>::InverseFast(this_00,&local_e8);
  }
  local_148.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_148.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_148.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_148.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_148.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_148.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_148.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_148.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_148.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_148.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_148.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_148.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_148.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_148.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_148.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_148.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_148,&param_1->Transform,&local_e8);
  iVar18 = (this->InstanceTransforms).ArrayNum;
  local_150 = (longlong)iVar18;
  dVar5 = local_148.Rotation.XY.m128d_f64[0];
  dVar6 = local_148.Rotation.XY.m128d_f64[1];
  dVar7 = local_148.Rotation.ZW.m128d_f64[0];
  dVar8 = local_148.Rotation.ZW.m128d_f64[1];
  dVar9 = local_148.Translation.XY.m128d_f64[0];
  dVar10 = local_148.Translation.XY.m128d_f64[1];
  dVar11 = local_148.Translation.ZW.m128d_f64[0];
  dVar12 = local_148.Translation.ZW.m128d_f64[1];
  dVar13 = local_148.Scale3D.XY.m128d_f64[0];
  dVar14 = local_148.Scale3D.XY.m128d_f64[1];
  dVar15 = local_148.Scale3D.ZW.m128d_f64[0];
  dVar16 = local_148.Scale3D.ZW.m128d_f64[1];
  uVar20 = 0;
  if (param_2 < iVar18) {
    uVar20 = (uint)~param_2 >> 0x1f;
  }
  if (uVar20 == 0) {
    local_158 = (longlong)param_2;
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->InstanceTransforms).AllocatorInstance.Data;
  lVar21 = (longlong)param_2 * 0x60;
  *(double *)(pFVar1 + lVar21) = dVar5;
  *(double *)(pFVar1 + lVar21 + 8) = dVar6;
  *(double *)(pFVar1 + lVar21 + 0x10) = dVar7;
  *(double *)(pFVar1 + lVar21 + 0x10 + 8) = dVar8;
  *(double *)(pFVar1 + lVar21 + 0x20) = dVar9;
  *(double *)(pFVar1 + lVar21 + 0x20 + 8) = dVar10;
  *(double *)(pFVar1 + lVar21 + 0x30) = dVar11;
  *(double *)(pFVar1 + lVar21 + 0x30 + 8) = dVar12;
  *(double *)(pFVar1 + lVar21 + 0x40) = dVar13;
  *(double *)(pFVar1 + lVar21 + 0x40 + 8) = dVar14;
  *(double *)(pFVar1 + lVar21 + 0x50) = dVar15;
  *(double *)(pFVar1 + lVar21 + 0x50 + 8) = dVar16;
  return;
}

// ValidateGeneratedRepEnums @ 147ee61e0

void __thiscall
ALightWeightInstanceManager::ValidateGeneratedRepEnums
          (ALightWeightInstanceManager *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1
          )

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
    ::FName::FName(&Name_RepresentedClass,L"RepresentedClass");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar5 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&Name_InstanceTransforms,L"InstanceTransforms");
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar5 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FName::FName(&Name_FreeIndices,L"FreeIndices");
    _Init_thread_footer(&::_TSS2);
  }
  if ((*piVar5 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    ::FName::FName(&Name_ValidIndices,L"ValidIndices");
    _Init_thread_footer(&::_TSS3);
  }
  if ((param_1->ArrayNum < 0xb) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xa0);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  FVar4 = FVar6;
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  if (Name_RepresentedClass == FVar4) {
    if ((param_1->ArrayNum < 0xc) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xb0);
    bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
    FVar4 = FVar6;
    if (bVar3) {
      FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
    }
    if (Name_InstanceTransforms == FVar4) {
      if ((param_1->ArrayNum < 0xd) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xc0);
      bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
      FVar4 = FVar6;
      if (bVar3) {
        FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
      }
      if (Name_FreeIndices == FVar4) {
        if ((param_1->ArrayNum < 0xe) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xd0);
        bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
        if (bVar3) {
          FVar6 = *(FName *)((longlong)pvVar1 + 0x20);
        }
        if (Name_ValidIndices == FVar6) {
          return;
        }
      }
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsValid",
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\LightWeightInstanceManager.gen.cpp"
                     ,0x11f,
                     L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALightWeightInstanceManager"
                    );
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// _getUObject @ 147ee7930

UObject * __thiscall ALightWeightInstanceManager::_getUObject(ALightWeightInstanceManager *this)

{
  return (UObject *)&this[-1]._padding_;
}

// execOnRep_Transforms @ 147ee82b0

void __cdecl
ALightWeightInstanceManager::execOnRep_Transforms(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147ee82c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x7b8))();
  return;
}

// execOnSpawnedActorDestroyed @ 147ee8310

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
ALightWeightInstanceManager::execOnSpawnedActorDestroyed
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  AActor *pAVar3;
  int iVar4;
  AActor *local_res8;
  
  local_res8 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pAVar3 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x7a0);
  iVar4 = FindIndexForActor((ALightWeightInstanceManager *)param_1,local_res8);
  (*pcVar2)(param_1,pAVar3,iVar4);
  return;
}

