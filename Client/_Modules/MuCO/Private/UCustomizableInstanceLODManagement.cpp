// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 16

// StaticClass @ 14ababd90

UClass * __cdecl UCustomizableInstanceLODManagement::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableInstanceLODManagement.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableInstanceLODManagement",
               &Z_Registration_Info_UClass_UCustomizableInstanceLODManagement.InnerSingleton,
               StaticRegisterNativesUCustomizableInstanceLODManagement,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomizableInstanceLODManagement>,
               InternalVTableHelperCtorCaller<UCustomizableInstanceLODManagement>,local_res8,
               UCustomizableInstanceLODManagementBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableInstanceLODManagement.InnerSingleton;
}

// UCustomizableInstanceLODManagement @ 14abbd320

UCustomizableInstanceLODManagement * __thiscall
UCustomizableInstanceLODManagement::UCustomizableInstanceLODManagement
          (UCustomizableInstanceLODManagement *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCustomizableInstanceLODManagement__6B_;
  *(undefined8 *)&(this->ViewCenters).Elements = 0;
  *(undefined8 *)&(this->ViewCenters).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ViewCenters).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ViewCenters).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ViewCenters).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ViewCenters).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ViewCenters).Elements.field_0x30 = 0xffffffff;
  (this->ViewCenters).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ViewCenters).HashSize = 0;
  this->NumPriorityUpdateInstances = 1;
  return this;
}

// UCustomizableInstanceLODManagement @ 14abbd380

UCustomizableInstanceLODManagement * __thiscall
UCustomizableInstanceLODManagement::UCustomizableInstanceLODManagement
          (UCustomizableInstanceLODManagement *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UCustomizableInstanceLODManagement__6B_;
  *(undefined8 *)&(this->ViewCenters).Elements = 0;
  *(undefined8 *)&(this->ViewCenters).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ViewCenters).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ViewCenters).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ViewCenters).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ViewCenters).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ViewCenters).Elements.field_0x30 = 0xffffffff;
  (this->ViewCenters).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ViewCenters).HashSize = 0;
  this->NumPriorityUpdateInstances = 1;
  this->CloseCustomizableObjectsDist = 2000.0;
  return this;
}

// ~UCustomizableInstanceLODManagement @ 14abbf640

void __thiscall
UCustomizableInstanceLODManagement::~UCustomizableInstanceLODManagement
          (UCustomizableInstanceLODManagement *this)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&___7UCustomizableInstanceLODManagement__6B_;
  (this->ViewCenters).HashSize = 0;
  FVar1 = (this->ViewCenters).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TWeakObjectPtr<AActor_const_,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakObjectPtr<AActor_const_,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ViewCenters).Elements);
  this->_padding_ = (longlong)&___7UCustomizableInstanceLODManagementBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetNumGeneratedInstancesLimitFullLODs @ 14abdc7c0

int __thiscall
UCustomizableInstanceLODManagement::GetNumGeneratedInstancesLimitFullLODs
          (UCustomizableInstanceLODManagement *this)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  int iVar4;
  
  pTVar2 = CVarNumGeneratedInstancesLimit.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
    }
  }
  return pTVar2->ShadowedValue[0];
}

// GetNumGeneratedInstancesLimitLOD1 @ 14abdc850

int __thiscall
UCustomizableInstanceLODManagement::GetNumGeneratedInstancesLimitLOD1
          (UCustomizableInstanceLODManagement *this)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  int iVar4;
  
  pTVar2 = CVarNumGeneratedInstancesLimitLOD1.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
    }
  }
  return pTVar2->ShadowedValue[0];
}

// GetNumGeneratedInstancesLimitLOD2 @ 14abdc8e0

int __thiscall
UCustomizableInstanceLODManagement::GetNumGeneratedInstancesLimitLOD2
          (UCustomizableInstanceLODManagement *this)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  int iVar4;
  
  pTVar2 = CVarNumGeneratedInstancesLimitLOD2.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
    }
  }
  return pTVar2->ShadowedValue[0];
}

// GetNumberOfPriorityUpdateInstances @ 14abdc970

int __thiscall
UCustomizableInstanceLODManagement::GetNumberOfPriorityUpdateInstances
          (UCustomizableInstanceLODManagement *this)

{
  return this->NumPriorityUpdateInstances;
}

// GetOnlyUpdateCloseCustomizableObjectsDist @ 14abdc9a0

float __thiscall
UCustomizableInstanceLODManagement::GetOnlyUpdateCloseCustomizableObjectsDist
          (UCustomizableInstanceLODManagement *this)

{
  return this->CloseCustomizableObjectsDist;
}

// GetPrivateStaticClass @ 14abdfb40

UClass * __cdecl UCustomizableInstanceLODManagement::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableInstanceLODManagement.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableInstanceLODManagement",
               &Z_Registration_Info_UClass_UCustomizableInstanceLODManagement.InnerSingleton,
               StaticRegisterNativesUCustomizableInstanceLODManagement,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomizableInstanceLODManagement>,
               InternalVTableHelperCtorCaller<UCustomizableInstanceLODManagement>,local_res8,
               UCustomizableInstanceLODManagementBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableInstanceLODManagement.InnerSingleton;
}

// IsOnlyGenerateRequestedLODLevelsEnabled @ 14abe3540

bool __thiscall
UCustomizableInstanceLODManagement::IsOnlyGenerateRequestedLODLevelsEnabled
          (UCustomizableInstanceLODManagement *this)

{
  return true;
}

// IsOnlyUpdateCloseCustomizableObjectsEnabled @ 14abe3580

bool __thiscall
UCustomizableInstanceLODManagement::IsOnlyUpdateCloseCustomizableObjectsEnabled
          (UCustomizableInstanceLODManagement *this)

{
  code *pcVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pTVar2 = CVarOnlyUpdateCloseCustomizableObjects.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
  }
  return pTVar2->ShadowedValue[0];
}

// SetCustomizableObjectsUpdateDistance @ 14abf09b0

void __thiscall
UCustomizableInstanceLODManagement::SetCustomizableObjectsUpdateDistance
          (UCustomizableInstanceLODManagement *this,float param_1)

{
  this->CloseCustomizableObjectsDist = param_1;
  return;
}

// SetNumberOfPriorityUpdateInstances @ 14abf10f0

void __thiscall
UCustomizableInstanceLODManagement::SetNumberOfPriorityUpdateInstances
          (UCustomizableInstanceLODManagement *this,int param_1)

{
  this->NumPriorityUpdateInstances = param_1;
  return;
}

// StaticRegisterNativesUCustomizableInstanceLODManagement @ 14abf1fd0

void __cdecl
UCustomizableInstanceLODManagement::StaticRegisterNativesUCustomizableInstanceLODManagement(void)

{
  return;
}

// UpdateInstanceDistsAndLODs @ 14abf3970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
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
UCustomizableInstanceLODManagement::UpdateInstanceDistsAndLODs
          (UCustomizableInstanceLODManagement *this,
          TMap<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,0>_>
          *param_1)

{
  uint *puVar1;
  TSet<TWeakObjectPtr<AActor_const_,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTVar2;
  undefined1 *puVar3;
  UObject *pUVar4;
  UCustomizableObject *pUVar5;
  UModelResources *pUVar6;
  longlong lVar7;
  longlong *plVar8;
  code *pcVar9;
  TConsoleVariableData<int> *pTVar10;
  FName FVar11;
  char cVar12;
  bool bVar13;
  bool bVar14;
  byte bVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  EInternalObjectFlags EVar19;
  int iVar20;
  int iVar21;
  USkeletalMeshComponent *pUVar22;
  UWorld *this_00;
  APlayerController *pAVar23;
  UClass *pUVar24;
  UCustomizableInstancePrivate *pUVar25;
  UCustomizableObjectPrivate *pUVar26;
  TObjectPtr<UCustomizableObjectInstance>_u_0 this_01;
  FLODTracker *this_02;
  byte *pbVar27;
  USkeletalMesh *pUVar28;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  uint uVar32;
  int iVar33;
  longlong lVar34;
  TObjectPtr<UCustomizableObjectInstance>_u_0 TVar35;
  longlong lVar36;
  uint uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  float fVar40;
  float fVar41;
  undefined1 auStackY_558 [32];
  ForAnyElementType local_508;
  undefined8 local_500;
  uint local_4f8;
  undefined1 local_4f4;
  undefined1 local_4f3;
  undefined1 local_4f2;
  undefined1 local_4f1;
  undefined1 local_4f0;
  undefined1 local_4ef;
  undefined1 local_4ee;
  undefined1 local_4ed;
  undefined1 local_4ec;
  undefined1 local_4eb;
  undefined1 local_4ea;
  undefined1 local_4e9;
  undefined1 local_4e8;
  uchar local_4e7;
  FIdentityFunctor local_4e6 [6];
  TObjectIterator<UCustomizableObjectInstance> local_4e0;
  TMap<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,0>_>
  *local_4c8;
  TObjectIterator<UCustomizableObjectInstanceUsage> local_4c0;
  UCustomizableObjectInstance *local_4a8;
  FName local_4a0;
  TSet<TWeakObjectPtr<AActor_const_,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_498;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_490;
  undefined8 uStack_470;
  int local_468;
  undefined8 local_464;
  undefined8 local_45c;
  undefined8 local_454;
  undefined8 local_44c;
  undefined8 local_444;
  undefined8 local_43c;
  undefined8 local_434;
  undefined8 local_42c;
  undefined8 local_424;
  TObjectIterator<UCustomizableObjectInstanceUsage> local_418;
  FWeakObjectPtr local_400;
  FWeakObjectPtr local_3f8;
  undefined8 local_3f0;
  FWeakObjectPtr local_3e8;
  TObjectPtr<UCustomizableObjectInstance>_u_0 local_3e0;
  FWeakObjectPtr local_3d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3b0;
  undefined1 local_390 [8];
  undefined1 local_388 [8];
  undefined1 local_380 [8];
  undefined1 local_378 [8];
  undefined1 local_370 [8];
  UObject *local_368;
  undefined8 local_360;
  undefined1 local_358 [8];
  undefined1 local_350 [8];
  FName local_348;
  undefined1 local_340 [12];
  undefined1 local_334 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_328;
  undefined8 uStack_308;
  undefined8 *local_300;
  undefined1 *local_2f8;
  undefined8 *local_2f0;
  undefined1 *local_2e8;
  undefined8 *local_2e0;
  undefined1 *local_2d8;
  undefined8 *local_2d0;
  undefined1 *local_2c8;
  undefined8 *local_2c0;
  undefined1 *local_2b8;
  FName local_2b0;
  undefined1 *local_2a8;
  undefined1 *local_2a0;
  undefined1 *local_298;
  undefined1 *local_290;
  undefined1 *local_288;
  undefined8 *local_280;
  undefined1 *local_278;
  undefined8 *local_270;
  undefined1 *local_268;
  undefined8 *local_260;
  undefined1 *local_258;
  undefined8 *local_250;
  undefined1 *local_248;
  undefined8 *local_240;
  undefined1 *local_238;
  undefined1 local_230 [40];
  int local_208;
  undefined4 uStack_204;
  undefined1 *local_200;
  longlong lStack_1f8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1f0;
  longlong lStack_1e8;
  longlong lStack_1e0;
  int local_1d8;
  undefined4 uStack_1d4;
  undefined1 local_1d0 [8];
  TRangedForIterator local_1c8;
  TRangedForIterator local_198;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_168;
  undefined1 local_148 [32];
  ForElementType<unsigned_int> local_128;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  void *local_108;
  int local_100;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  local_f8;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_558;
  local_4c8 = param_1;
  uVar16 = (**(code **)(this->_padding_ + 0x2b8))();
  uVar38 = 0;
  uVar32 = 0;
  local_4f8 = uVar16;
  if ((0 < (int)uVar16) ||
     ((cVar12 = (**(code **)(this->_padding_ + 0x2d8))(this), cVar12 != '\0' &&
      (cVar12 = (**(code **)(this->_padding_ + 0x2e0))(this), cVar12 != '\0')))) {
    UCustomizableObjectSystem::GetInstance();
    pTVar2 = &this->ViewCenters;
    if (*(int *)&(this->ViewCenters).Elements.field_0x8 ==
        *(int *)&(this->ViewCenters).Elements.field_0x34) {
      TObjectIterator<UCustomizableObjectInstanceUsage>::
      TObjectIterator<UCustomizableObjectInstanceUsage>
                (&local_418,RF_ClassDefaultObject,true,Borrowed);
LAB_14abf3a20:
      lVar34 = (longlong)local_418.Index;
      if ((local_418.Index < 0) || (local_418.ObjectArray.ArrayNum <= local_418.Index))
      goto LAB_14abf3c4f;
      uVar37 = uVar32;
      if (local_418.Index < local_418.ObjectArray.ArrayNum) {
        uVar37 = (uint)~local_418.Index >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if ((*(longlong *)(local_418.ObjectArray.AllocatorInstance.Data + lVar34 * 8) != 0) &&
         ((*(uint *)(*(longlong *)(local_418.ObjectArray.AllocatorInstance.Data + lVar34 * 8) + 8)
           >> 0x1e & 1) == 0)) {
        lVar34 = (longlong)local_418.Index;
        uVar37 = uVar32;
        if (local_418.Index < local_418.ObjectArray.ArrayNum) {
          uVar37 = (uint)~local_418.Index >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pUVar22 = UCustomizableObjectInstanceUsage::GetAttachParent
                            (*(UCustomizableObjectInstanceUsage **)
                              (local_418.ObjectArray.AllocatorInstance.Data + lVar34 * 8));
        lVar34 = (longlong)local_418.Index;
        uVar37 = uVar32;
        if (local_418.Index < local_418.ObjectArray.ArrayNum) {
          uVar37 = (uint)~local_418.Index >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        bVar13 = UObjectBaseUtility::IsTemplate
                           (*(UObjectBaseUtility **)
                             (local_418.ObjectArray.AllocatorInstance.Data + lVar34 * 8),
                            RF_ArchetypeObject|RF_ClassDefaultObject);
        if (!bVar13) {
          if ((pUVar22 == (USkeletalMeshComponent *)0x0) ||
             (((this_00 = (UWorld *)pUVar22->_padding_, this_00 == (UWorld *)0x0 &&
               (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)pUVar22),
               this_00 == (UWorld *)0x0)) ||
              (pAVar23 = UWorld::GetFirstPlayerController(this_00),
              pAVar23 == (APlayerController *)0x0)))) {
            local_3f8.ObjectIndex = 0;
            local_3f8.ObjectSerialNumber = 0;
            local_360 = 0;
            FWeakObjectPtr::operator=(&local_3f8,(FObjectPtr)&local_360);
            local_3d8 = local_3f8;
          }
          else {
            pUVar4 = (UObject *)pAVar23->_padding_;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              if (pUVar4 != (UObject *)0x0) {
                UE::GC::MarkAsReachable(pUVar4);
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)
                 ) {
                UE::GC::MarkAsReachable(pUVar4);
              }
            }
            local_400.ObjectIndex = 0;
            local_400.ObjectSerialNumber = 0;
            local_368 = pUVar4;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar4);
            }
            FWeakObjectPtr::operator=(&local_400,(FObjectPtr)&local_368);
            local_3d8 = local_400;
          }
          bVar13 = FWeakObjectPtr::IsValid(&local_3d8);
          if (bVar13) {
            UpdatePawnToInstancesDistances
                      ((UCustomizableObjectInstance *)0x0,
                       (TWeakObjectPtr<AActor_const_,FWeakObjectPtr>)local_3d8);
LAB_14abf3c4f:
            if (local_418.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_418.ObjectArray.AllocatorInstance.Data);
            }
            goto LAB_14abf3dc5;
          }
        }
      }
      TObjectIterator<UCustomizableObjectInstanceUsage>::Advance(&local_418);
      goto LAB_14abf3a20;
    }
    puVar3 = &(this->ViewCenters).Elements.field_0x10;
    local_3b0._padding_._0_4_ = 0;
    local_3b0._padding_._4_4_ = 1;
    local_3b0.UnvisitedBitMask = 0xffffffff;
    local_3b0.CurrentBitIndex = 0;
    local_3b0.BaseBitIndex = 0;
    local_3b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
    if (*(int *)&(this->ViewCenters).Elements.field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3b0);
    }
    TStack_490._padding_ = CONCAT44(local_3b0._padding_._4_4_,(undefined4)local_3b0._padding_);
    TStack_490.CurrentBitIndex = local_3b0.CurrentBitIndex;
    TStack_490.UnvisitedBitMask = local_3b0.UnvisitedBitMask;
    TStack_490._28_4_ = local_3b0._28_4_;
    TStack_490.BaseBitIndex = local_3b0.BaseBitIndex;
    TStack_490.Array = local_3b0.Array;
    uStack_470 = CONCAT44(uStack_470._4_4_,
                          *(int *)&(this->ViewCenters).Elements.field_0x8 -
                          *(int *)&(this->ViewCenters).Elements.field_0x34);
    TStack_328.Array = local_3b0.Array;
    uStack_308 = uStack_470;
    local_498 = pTVar2;
    local_334._4_8_ = pTVar2;
    TStack_328._padding_ = TStack_490._padding_;
    TStack_328._16_8_ = TStack_490._16_8_;
    TStack_328._24_8_ = TStack_490._24_8_;
    pTVar29 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_168,(TBitArray<FDefaultBitArrayAllocator> *)puVar3,
                         *(int *)&(this->ViewCenters).Elements.field_0x28);
    TStack_490._padding_ = pTVar29->_padding_;
    TStack_490.Array = pTVar29->Array;
    TStack_490.UnvisitedBitMask = pTVar29->UnvisitedBitMask;
    TStack_490.CurrentBitIndex = pTVar29->CurrentBitIndex;
    TStack_490._24_8_ = *(undefined8 *)&pTVar29->BaseBitIndex;
    local_1c8.InitialNum =
         *(int *)&(this->ViewCenters).Elements.field_0x8 -
         *(int *)&(this->ViewCenters).Elements.field_0x34;
    uStack_470._0_4_ = local_1c8.InitialNum;
    local_1c8._44_4_ = uStack_470._4_4_;
    local_498 = pTVar2;
    local_1c8._padding_ = (longlong)pTVar2;
    local_1c8._padding_ = TStack_490._padding_;
    local_1c8._padding_ = (longlong)TStack_490.Array;
    local_1c8._padding_ = TStack_490._16_8_;
    local_1c8._padding_ = TStack_490._24_8_;
    bVar13 = TSparseArray<TSparseSetElement<TWeakObjectPtr<AActor_const_,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::TRangedForIterator::operator!=((TRangedForIterator *)(local_334 + 4),&local_1c8);
    if (bVar13) {
      do {
        local_3e8 = *(FWeakObjectPtr *)
                     (*(longlong *)
                       (TSparseArray<TSparseSetElement<TWeakObjectPtr<AActor_const_,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_334._4_8_ + (longlong)TStack_328.CurrentBitIndex * 0x10);
        bVar13 = FWeakObjectPtr::IsValid(&local_3e8);
        if (bVar13) {
          UpdatePawnToInstancesDistances
                    ((UCustomizableObjectInstance *)0x0,
                     (TWeakObjectPtr<AActor_const_,FWeakObjectPtr>)local_3e8);
        }
        TStack_328.UnvisitedBitMask = TStack_328.UnvisitedBitMask & ~TStack_328._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_328);
        bVar13 = TSparseArray<TSparseSetElement<TWeakObjectPtr<AActor_const_,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForIterator::operator!=((TRangedForIterator *)(local_334 + 4),&local_1c8);
      } while (bVar13);
    }
  }
LAB_14abf3dc5:
  if ((int)uVar16 < 1) {
    cVar12 = (**(code **)(this->_padding_ + 0x2e0))(this);
    if (cVar12 != '\0') {
      local_148._0_8_ = (FScriptContainerElement *)0x0;
      local_148._8_4_ = 0;
      local_148._12_4_ = 0;
      local_128 = (ForElementType<unsigned_int>)0x0;
      local_120 = 0;
      local_11c = 0x80;
      local_118 = -1;
      local_114 = 0;
      local_108 = (void *)0x0;
      local_100 = 0;
      TSparseArrayBase<184,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<184,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_148,100);
      for (lVar34 = 0x3f; 0x73UL >> lVar34 == 0; lVar34 = lVar34 + -1) {
      }
      iVar17 = 1 << ((byte)lVar34 & 0x1f);
      local_340._4_4_ = (undefined4)lVar34;
      if ((local_100 == 0) || (local_100 < iVar17)) {
        local_100 = iVar17;
        TSet<TTuple<TObjectPtr<UCustomizableObjectInstance>,`UCustomizableInstanceLODManagement::UpdateInstanceDistsAndLODs'::__l84::FLODTracker>,TDefaultMapHashableKeyFuncs<TObjectPtr<UCustomizableObjectInstance>,`UCustomizableInstanceLODManagement::UpdateInstanceDistsAndLODs'::__l84::FLODTracker,0>,FDefaultSetAllocator>
        ::Rehash(local_148);
      }
      TObjectIterator<UCustomizableObjectInstanceUsage>::
      TObjectIterator<UCustomizableObjectInstanceUsage>
                (&local_4c0,RF_ClassDefaultObject,true,Borrowed);
      while( true ) {
        lVar34 = (longlong)local_4c0.Index;
        if ((local_4c0.Index < 0) || (local_4c0.ObjectArray.ArrayNum <= local_4c0.Index)) break;
        uVar16 = 0;
        if (local_4c0.Index < local_4c0.ObjectArray.ArrayNum) {
          uVar16 = (uint)~local_4c0.Index >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if ((*(longlong *)(local_4c0.ObjectArray.AllocatorInstance.Data + lVar34 * 8) != 0) &&
           ((*(uint *)(*(longlong *)(local_4c0.ObjectArray.AllocatorInstance.Data + lVar34 * 8) + 8)
             >> 0x1e & 1) == 0)) {
          lVar34 = (longlong)local_4c0.Index;
          uVar32 = 0;
          uVar16 = uVar32;
          if (local_4c0.Index < local_4c0.ObjectArray.ArrayNum) {
            uVar16 = (uint)~local_4c0.Index >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          bVar13 = UObjectBaseUtility::IsTemplate
                             (*(UObjectBaseUtility **)
                               (local_4c0.ObjectArray.AllocatorInstance.Data + lVar34 * 8),
                              RF_ArchetypeObject|RF_ClassDefaultObject);
          if (!bVar13) {
            lVar34 = (longlong)local_4c0.Index;
            uVar16 = uVar32;
            if (local_4c0.Index < local_4c0.ObjectArray.ArrayNum) {
              uVar16 = (uint)~local_4c0.Index >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            this_01.DebugPtr =
                 UCustomizableObjectInstanceUsage::GetCustomizableObjectInstance
                           (*(UCustomizableObjectInstanceUsage **)
                             (local_4c0.ObjectArray.AllocatorInstance.Data + lVar34 * 8));
            if ((this_01.DebugPtr != (UCustomizableObjectInstance *)0x0) &&
               (((this_01.DebugPtr)->Descriptor).CustomizableObject.field0_0x0.DebugPtr !=
                (UCustomizableObject *)0x0)) {
              lVar34 = (longlong)local_4c0.Index;
              if (local_4c0.Index < local_4c0.ObjectArray.ArrayNum) {
                uVar32 = (uint)~local_4c0.Index >> 0x1f;
              }
              if ((uVar32 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pUVar22 = UCustomizableObjectInstanceUsage::GetAttachParent
                                  (*(UCustomizableObjectInstanceUsage **)
                                    (local_4c0.ObjectArray.AllocatorInstance.Data + lVar34 * 8));
              TVar35.DebugPtr = this_01.DebugPtr;
              local_3e0.DebugPtr = this_01.DebugPtr;
              if (((UE::GC::GIsIncrementalReachabilityPending != false) &&
                  (UE::GC::MarkAsReachable((UObject *)this_01.DebugPtr), TVar35 = local_3e0,
                  UE::GC::GIsIncrementalReachabilityPending != false)) &&
                 (local_3e0.DebugPtr != (UCustomizableObjectInstance *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)local_3e0.DebugPtr);
              }
              uVar16 = ((uint)((ulonglong)TVar35.DebugPtr >> 0x14) & 0xffff ^
                       (uint)((ulonglong)TVar35.DebugPtr >> 4)) * -0x7a143595;
              uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
              this_02 = TMapBase<TObjectPtr<UCustomizableObjectInstance>,`UCustomizableInstanceLODManagement::UpdateInstanceDistsAndLODs'::__l84::FLODTracker,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCustomizableObjectInstance>,`UCustomizableInstanceLODManagement::UpdateInstanceDistsAndLODs'::__l84::FLODTracker,0>_>
                        ::FindOrAddImpl<TObjectPtr<UCustomizableObjectInstance>_>
                                  (local_148,uVar16 >> 0x10 ^ uVar16,
                                   (TObjectPtr<UCustomizableObjectInstance> *)&local_3e0.ObjectPtr);
              if (this_02->bInitialized == false) {
                pUVar5 = ((this_01.DebugPtr)->Descriptor).CustomizableObject.field0_0x0.DebugPtr;
                iVar18 = 0;
                iVar17 = UCustomizableObject::GetComponentCount(pUVar5);
                if (0 < iVar17) {
                  local_2a8 = &local_4e8;
                  do {
                    local_4e8 = 0xff;
                    local_2b0 = UCustomizableObject::GetComponentName(pUVar5,(int)local_1d0);
                    TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                    ::Emplace<TPairInitializer<FName_&&,unsigned_char_&&>_>
                              ((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                                *)&this_02->RequestedLODPerComponent,
                               (TPairInitializer<FName_&&,unsigned_char_&&> *)local_340,
                               (bool *)&local_2b0);
                    iVar18 = iVar18 + 1;
                    iVar17 = UCustomizableObject::GetComponentCount(pUVar5);
                  } while (iVar18 < iVar17);
                }
                this_02->bInitialized = true;
              }
              if (pUVar22 != (USkeletalMeshComponent *)0x0) {
                pUVar25 = UCustomizableObjectInstance::GetPrivate(this_01.DebugPtr);
                pUVar25->InstanceFlagsPrivate =
                     pUVar25->InstanceFlagsPrivate | UsedByComponentInPlay;
                lVar34 = (longlong)local_4c0.Index;
                uVar16 = 0;
                if (local_4c0.Index < local_4c0.ObjectArray.ArrayNum) {
                  uVar16 = (uint)~local_4c0.Index >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                UCustomizableObjectInstanceUsage::GetComponentName
                          (*(UCustomizableObjectInstanceUsage **)
                            (local_4c0.ObjectArray.AllocatorInstance.Data + lVar34 * 8));
                if ((pUVar22->_padding_ != 0) &&
                   (plVar8 = *(longlong **)(pUVar22->_padding_ + 0xa8), plVar8 != (longlong *)0x0))
                {
                  pUVar24 = Z_Construct_UClass_APawn_NoRegister();
                  iVar17 = (int)pUVar24->_padding_;
                  if ((iVar17 <= *(int *)(plVar8[2] + 0x38)) &&
                     (((longlong *)
                       *(undefined1 **)(*(longlong *)(plVar8[2] + 0x30) + (longlong)iVar17 * 8) ==
                       &pUVar24->_padding_ &&
                      (cVar12 = (**(code **)(*plVar8 + 0x820))(plVar8), cVar12 != '\0')))) {
                    pUVar25 = UCustomizableObjectInstance::GetPrivate(this_01.DebugPtr);
                    pUVar25->MinSquareDistFromComponentToPlayer = -1.0;
                  }
                }
                FVar11 = local_4a0;
                local_4e7 = 0xff;
                uVar16 = ::GetTypeHash(local_4a0.ComparisonIndex.Value);
                pbVar27 = TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                          ::FindOrAddImpl<FName_const_&,unsigned_char>
                                    ((TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                                      *)this_02,FVar11.Number + uVar16,&local_4a0,&local_4e7);
                if ((pUVar22->_padding_ & 0x800000000000000) == 0) {
                  bVar15 = 0;
                }
                else {
                  bVar15 = (byte)(int)pUVar22->_padding_;
                }
                if (*pbVar27 < bVar15) {
                  bVar15 = *pbVar27;
                }
                *pbVar27 = bVar15;
                pUVar28 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar22);
                FVar11 = local_4a0;
                if (pUVar28 != (USkeletalMesh *)0x0) {
                  local_348 = local_4a0;
                  uVar16 = ::GetTypeHash(local_4a0.ComparisonIndex.Value);
                  iVar17 = TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                           ::FindIndexByHash<FName>
                                     ((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                                       *)&this_02->RequestedLODPerComponent,FVar11.Number + uVar16,
                                      &local_348);
                  if (iVar17 != -1) {
                    pbVar27 = TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                              ::FindChecked((TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                                             *)&this_02->RequestedLODPerComponent,local_4a0);
                    iVar17 = *(int *)((longlong)&pUVar22->_padding_ + 4);
                    bVar15 = (byte)iVar17;
                    if ((int)(uint)*pbVar27 < iVar17) {
                      bVar15 = *pbVar27;
                    }
                    *pbVar27 = bVar15;
                  }
                }
              }
            }
          }
        }
        TObjectIterator<UCustomizableObjectInstanceUsage>::Advance(&local_4c0);
      }
      if (local_4c0.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4c0.ObjectArray.AllocatorInstance.Data);
      }
      local_3d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10);
      local_3d0._padding_._0_4_ = 0;
      local_3d0._padding_._4_4_ = 1;
      local_3d0.UnvisitedBitMask = 0xffffffff;
      local_3d0.CurrentBitIndex = 0;
      local_3d0.BaseBitIndex = 0;
      if (local_120 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3d0);
      }
      TStack_490._padding_ = CONCAT44(local_3d0._padding_._4_4_,(undefined4)local_3d0._padding_);
      local_498 = (TSet<TWeakObjectPtr<AActor_const_,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                   *)local_148;
      TStack_490.CurrentBitIndex = local_3d0.CurrentBitIndex;
      TStack_490.UnvisitedBitMask = local_3d0.UnvisitedBitMask;
      TStack_490._28_4_ = local_3d0._28_4_;
      TStack_490.BaseBitIndex = local_3d0.BaseBitIndex;
      local_208 = local_148._8_4_ - local_114;
      local_230._16_8_ = local_3d0.Array;
      uStack_470 = CONCAT44(uStack_204,local_208);
      TStack_490.Array = local_3d0.Array;
      local_230._0_8_ = local_498;
      local_230._8_8_ = TStack_490._padding_;
      local_230._24_8_ = TStack_490._16_8_;
      local_230._32_8_ = TStack_490._24_8_;
      pTVar29 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_230,
                           (TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10),local_120);
      local_200 = local_148;
      lStack_1f8 = pTVar29->_padding_;
      pTStack_1f0 = pTVar29->Array;
      lStack_1e8._0_4_ = pTVar29->UnvisitedBitMask;
      lStack_1e8._4_4_ = pTVar29->CurrentBitIndex;
      lStack_1e0 = *(longlong *)&pTVar29->BaseBitIndex;
      local_1d8 = local_148._8_4_ - local_114;
      local_198._44_4_ = uStack_1d4;
      local_198.InitialNum = local_1d8;
      local_198._padding_ = (longlong)local_200;
      local_198._padding_ = lStack_1f8;
      local_198._padding_ = (longlong)pTStack_1f0;
      local_198._padding_ = lStack_1e8;
      local_198._padding_ = lStack_1e0;
      bVar13 = TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UCustomizableObjectInstance>,`UCustomizableInstanceLODManagement::UpdateInstanceDistsAndLODs'::__l84::FLODTracker>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=(&local_498,&local_198);
      if (bVar13) {
        do {
          lVar36 = (longlong)TStack_490.CurrentBitIndex * 0xb8;
          lVar34 = *(longlong *)&local_498->Elements;
          lVar7 = *(longlong *)(lVar36 + lVar34);
          if ((lVar7 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Test",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                                  ,0x760,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0) {
            lVar7 = *(longlong *)(lVar36 + lVar34);
            if (*(longlong *)(lVar7 + 0x228) == 0) {
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PrivateData",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                  ,0xce2,L"");
              if (bVar13) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              if (*(longlong *)(lVar7 + 0x228) == 0) goto LAB_14abf59a8;
            }
            pUVar5 = *(UCustomizableObject **)(*(longlong *)(lVar36 + lVar34) + 0x98);
            if ((pUVar5 != (UCustomizableObject *)0x0) &&
               (pUVar26 = UCustomizableObject::GetPrivate(pUVar5), pUVar26->bLocked == false)) {
              cVar12 = (**(code **)(this->_padding_ + 0x2d8))(this);
              if (cVar12 == '\0') {
LAB_14abf598e:
                UCustomizableObjectInstance::SetRequestedLODs
                          (*(UCustomizableObjectInstance **)(lVar36 + lVar34),
                           (TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                            *)(lVar34 + 8 + lVar36),
                           (TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                            *)(lVar34 + 0x60 + lVar36),param_1);
              }
              else {
                fVar41 = this->CloseCustomizableObjectsDist;
                fVar40 = UCustomizableObjectInstance::GetMinSquareDistToPlayer
                                   (*(UCustomizableObjectInstance **)(lVar36 + lVar34));
                if (fVar40 <= fVar41 * fVar41) {
                  pUVar25 = UCustomizableObjectInstance::GetPrivate
                                      (*(UCustomizableObjectInstance **)(lVar36 + lVar34));
                  bVar13 = FWeakObjectPtr::IsValid(&(pUVar25->NearestToActor).WeakPtr);
                  if (bVar13) goto LAB_14abf598e;
                }
              }
            }
          }
LAB_14abf59a8:
          TStack_490.UnvisitedBitMask = TStack_490.UnvisitedBitMask & ~TStack_490._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_490);
          bVar13 = TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UCustomizableObjectInstance>,`UCustomizableInstanceLODManagement::UpdateInstanceDistsAndLODs'::__l84::FLODTracker>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   ::TRangedForIterator::operator!=(&local_498,&local_198);
        } while (bVar13);
      }
      local_100 = 0;
      if (local_108 != (void *)0x0) {
        FMemory::Free(local_108);
      }
      TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UCustomizableObjectInstance>,`UCustomizableInstanceLODManagement::UpdateInstanceDistsAndLODs'::__l84::FLODTracker>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UCustomizableObjectInstance>,_UCustomizableInstanceLODManagement::UpdateInstanceDistsAndLODs_::__l84::FLODTracker>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (local_148);
    }
  }
  else {
    iVar17 = (**(code **)(this->_padding_ + 0x2c0))();
    iVar18 = (**(code **)(this->_padding_ + 0x2c8))(this);
    local_508.Data = (FScriptContainerElement *)0x0;
    local_500 = 0;
    local_4e0.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4e0.ObjectArray.ArrayNum = 0;
    local_4e0.ObjectArray.ArrayMax = 0;
    local_4e0.Index = 0xffffffff;
    local_468 = iVar18;
    EVar19 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar24 = UCustomizableObjectInstance::StaticClass();
    GetObjectsOfClass(pUVar24,&local_4e0.ObjectArray,true,RF_ClassDefaultObject,
                      EVar19 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    while( true ) {
      TObjectIterator<UCustomizableObjectInstance>::Advance(&local_4e0);
      lVar34 = (longlong)local_4e0.Index;
      uVar16 = 0;
      if ((local_4e0.Index < 0) || (local_4e0.ObjectArray.ArrayNum <= local_4e0.Index)) break;
      uVar32 = uVar16;
      if (local_4e0.Index < local_4e0.ObjectArray.ArrayNum) {
        uVar32 = (uint)~local_4e0.Index >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if ((*(longlong *)(local_4e0.ObjectArray.AllocatorInstance.Data + lVar34 * 8) != 0) &&
         ((*(uint *)(*(longlong *)(local_4e0.ObjectArray.AllocatorInstance.Data + lVar34 * 8) + 8)
           >> 0x1e & 1) == 0)) {
        lVar34 = (longlong)local_4e0.Index;
        uVar32 = uVar16;
        if (local_4e0.Index < local_4e0.ObjectArray.ArrayNum) {
          uVar32 = (uint)~local_4e0.Index >> 0x1f;
        }
        if ((uVar32 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pUVar25 = UCustomizableObjectInstance::GetPrivate
                            (*(UCustomizableObjectInstance **)
                              (local_4e0.ObjectArray.AllocatorInstance.Data + lVar34 * 8));
        if (pUVar25 != (UCustomizableInstancePrivate *)0x0) {
          lVar34 = (longlong)local_4e0.Index;
          uVar32 = uVar16;
          if (local_4e0.Index < local_4e0.ObjectArray.ArrayNum) {
            uVar32 = (uint)~local_4e0.Index >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pUVar25 = UCustomizableObjectInstance::GetPrivate
                              (*(UCustomizableObjectInstance **)
                                (local_4e0.ObjectArray.AllocatorInstance.Data + lVar34 * 8));
          if ((pUVar25->InstanceFlagsPrivate >> 6 & 1) != 0) {
            lVar34 = (longlong)local_4e0.Index;
            if (local_4e0.Index < local_4e0.ObjectArray.ArrayNum) {
              uVar16 = (uint)~local_4e0.Index >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if ((*(UCustomizableObject **)
                  (*(longlong *)(local_4e0.ObjectArray.AllocatorInstance.Data + lVar34 * 8) + 0x98)
                 != (UCustomizableObject *)0x0) &&
               (pUVar26 = UCustomizableObject::GetPrivate
                                    (*(UCustomizableObject **)
                                      (*(longlong *)
                                        (local_4e0.ObjectArray.AllocatorInstance.Data + lVar34 * 8)
                                      + 0x98)), pUVar26->bLocked == false)) {
              lVar34 = (longlong)local_4e0.Index;
              uVar16 = 0;
              if (local_4e0.Index < local_4e0.ObjectArray.ArrayNum) {
                uVar16 = (uint)~local_4e0.Index >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              local_4a8 = *(UCustomizableObjectInstance **)
                           (local_4e0.ObjectArray.AllocatorInstance.Data + lVar34 * 8);
              UCustomizableObjectInstance::SetIsDiscardedBecauseOfTooManyInstances(local_4a8,false);
              if (((local_508.Data <= (FScriptContainerElement *)&local_4a8) &&
                  ((FScriptContainerElement *)&local_4a8 <
                   local_508.Data + (longlong)local_500._4_4_ * 8)) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              iVar20 = (int)local_500;
              if ((int)local_500 == local_500._4_4_) {
                iVar20 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_508,(int *)((longlong)&local_500 + 4));
              }
              local_500 = CONCAT44(local_500._4_4_,iVar20 + 1);
              *(UCustomizableObjectInstance **)(local_508.Data + (longlong)iVar20 * 8) = local_4a8;
            }
          }
        }
      }
    }
    if (local_4e0.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4e0.ObjectArray.AllocatorInstance.Data);
    }
    uVar39 = uVar38;
    uVar31 = uVar38;
    if (0 < this->NumPriorityUpdateInstances) {
      do {
        uVar30 = (ulonglong)(int)local_500;
        uVar32 = (uint)uVar39;
        if ((int)local_500 <= (int)uVar32) goto LAB_14abf41ae;
        uVar37 = 0;
        if ((int)uVar32 < (int)local_500) {
          uVar37 = ~uVar32 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pUVar25 = UCustomizableObjectInstance::GetPrivate
                            (*(UCustomizableObjectInstance **)(local_508.Data + uVar31));
        pUVar25->InstanceFlagsPrivate = pUVar25->InstanceFlagsPrivate | UsedByPlayerOrNearIt;
        uVar39 = (ulonglong)(uVar32 + 1);
        uVar31 = uVar31 + 8;
      } while ((int)(uVar32 + 1) < this->NumPriorityUpdateInstances);
    }
    uVar30 = local_500 & 0xffffffff;
LAB_14abf41ae:
    uVar32 = iVar18 + iVar17 + local_4f8;
    local_a8.Elements._0_8_ = 0;
    local_a8.Elements._8_8_ = 0;
    local_a8.Elements._32_8_ = 0;
    local_a8.Elements._40_4_ = 0;
    local_a8.Elements._44_4_ = 0x80;
    local_a8.Elements._48_4_ = 0xffffffff;
    local_a8.Elements._52_4_ = 0;
    local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_a8.HashSize = 0;
    local_f8.Elements._0_8_ = 0;
    local_f8.Elements._8_8_ = 0;
    local_f8.Elements._32_8_ = 0;
    local_f8.Elements._40_4_ = 0;
    local_f8.Elements._44_4_ = 0x80;
    local_f8.Elements._48_4_ = 0xffffffff;
    local_f8.Elements._52_4_ = 0;
    local_f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_f8.HashSize = 0;
    if ((int)uVar32 < (int)uVar30) {
      lVar34 = (longlong)(int)uVar32 << 3;
      do {
        uVar37 = uVar16;
        if ((int)uVar32 < (int)uVar30) {
          uVar37 = ~uVar32 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pUVar25 = UCustomizableObjectInstance::GetPrivate
                            (*(UCustomizableObjectInstance **)(local_508.Data + lVar34));
        uVar32 = uVar32 + 1;
        lVar34 = lVar34 + 8;
        pUVar25->InstanceFlagsPrivate = pUVar25->InstanceFlagsPrivate | DiscardedByNumInstancesLimit
        ;
        uVar30 = local_500 & 0xffffffff;
      } while ((int)uVar32 < (int)local_500);
    }
    uVar16 = local_4f8;
    iVar18 = (int)uVar30;
    if ((int)local_4f8 < iVar18) {
      AlgoImpl::
      IntroSortInternal<UCustomizableObjectInstance_*,int,FIdentityFunctor,TDereferenceWrapper<UCustomizableObjectInstance_*,_UCustomizableInstanceLODManagement::UpdateInstanceDistsAndLODs_::__l46::<lambda_1>_>_>
                ((UCustomizableObjectInstance **)local_508.Data,iVar18,local_4e6[0],
                 (<lambda_1> *)local_4e6);
      pTVar10 = CVarDistanceForFixedLOD2.Ref;
      bVar13 = false;
      bVar14 = IsInParallelGameThread();
      if (((!bVar14) && (bVar14 = IsInGameThread(), !bVar14)) &&
         (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007945>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6c9,"GetShadowIndex() == 0"), bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      fVar41 = (float)pTVar10->ShadowedValue[0] * (float)pTVar10->ShadowedValue[0];
      uVar39 = uVar38;
      uVar32 = uVar16;
      if (0 < (int)uVar16) {
        do {
          uVar31 = (ulonglong)(int)local_500;
          uVar37 = (uint)uVar38;
          uVar32 = local_4f8;
          if ((int)local_500 <= (int)uVar37) goto LAB_14abf4757;
          uVar32 = 0;
          if ((int)uVar37 < (int)local_500) {
            uVar32 = ~uVar37 >> 0x1f;
          }
          if (uVar32 == 0) {
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar14) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          pUVar5 = *(UCustomizableObject **)(*(longlong *)(local_508.Data + uVar39 * 8) + 0x98);
          if (bVar13) {
LAB_14abf4539:
            iVar18 = 0;
            while( true ) {
              if (((pUVar5->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Private",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                                      ,0x3b9,L""), bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pUVar26 = (pUVar5->Private).field0_0x0.DebugPtr;
              pUVar6 = (pUVar26->ModelResources).field0_0x0.DebugPtr;
              uVar32 = 0;
              if (pUVar6 != (UModelResources *)0x0) {
                uVar32 = (pUVar6->ComponentNamesPerObjectComponent).ArrayNum;
              }
              if ((int)uVar32 <= iVar18) break;
              local_4f2 = 0xff;
              if ((pUVar26 == (UCustomizableObjectPrivate *)0x0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Private",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                                      ,0x3b9,L""), bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pUVar6 = (((pUVar5->Private).field0_0x0.DebugPtr)->ModelResources).field0_0x0.DebugPtr
              ;
              if (((pUVar6 == (UModelResources *)0x0) || (iVar18 < 0)) ||
                 ((pUVar6->ComponentNamesPerObjectComponent).ArrayNum <= iVar18)) {
                local_3f0 = 0;
              }
              else {
                local_3f0 = *(undefined8 *)
                             ((pUVar6->ComponentNamesPerObjectComponent).AllocatorInstance.Data +
                             (longlong)iVar18 * 8);
              }
              local_280 = &local_3f0;
              local_278 = &local_4f2;
              TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FName_&&,unsigned_char_&&>_>
                        (&local_a8,(TPairInitializer<FName_&&,unsigned_char_&&> *)(local_390 + 4),
                         (bool *)&local_280);
              local_4f1 = 0;
              if (((pUVar5->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Private",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                                      ,0x3b9,L""), bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pUVar6 = (((pUVar5->Private).field0_0x0.DebugPtr)->ModelResources).field0_0x0.DebugPtr
              ;
              if (((pUVar6 == (UModelResources *)0x0) || (iVar18 < 0)) ||
                 ((pUVar6->ComponentNamesPerObjectComponent).ArrayNum <= iVar18)) {
                local_464 = 0;
              }
              else {
                local_464 = *(undefined8 *)
                             ((pUVar6->ComponentNamesPerObjectComponent).AllocatorInstance.Data +
                             (longlong)iVar18 * 8);
              }
              local_270 = &local_464;
              local_268 = &local_4f1;
              TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FName_&&,unsigned_char_&&>_>
                        (&local_f8,(TPairInitializer<FName_&&,unsigned_char_&&> *)local_388,
                         (bool *)&local_270);
              iVar18 = iVar18 + 1;
            }
            uVar32 = 0;
            if ((int)uVar37 < (int)local_500) {
              uVar32 = ~uVar37 >> 0x1f;
            }
            if ((uVar32 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            bVar13 = true;
          }
          else {
            uVar32 = 0;
            if ((int)uVar37 < (int)local_500) {
              uVar32 = ~uVar37 >> 0x1f;
            }
            if ((uVar32 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            fVar40 = UCustomizableObjectInstance::GetMinSquareDistToPlayer
                               (*(UCustomizableObjectInstance **)(local_508.Data + uVar39 * 8));
            if (fVar41 <= fVar40) goto LAB_14abf4539;
            iVar18 = 0;
            while( true ) {
              pUVar26 = UCustomizableObject::GetPrivate(pUVar5);
              pUVar6 = (pUVar26->ModelResources).field0_0x0.DebugPtr;
              iVar20 = 0;
              if (pUVar6 != (UModelResources *)0x0) {
                iVar20 = (pUVar6->ComponentNamesPerObjectComponent).ArrayNum;
              }
              if (iVar20 <= iVar18) break;
              local_4f4 = 0;
              pUVar26 = UCustomizableObject::GetPrivate(pUVar5);
              UCustomizableObjectPrivate::GetComponentName
                        (pUVar26,(FCustomizableObjectComponentIndex)(int)local_358);
              local_2a0 = local_358;
              local_298 = &local_4f4;
              TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FName_&&,unsigned_char_&&>_>
                        (&local_a8,(TPairInitializer<FName_&&,unsigned_char_&&> *)local_380,
                         (bool *)&local_2a0);
              local_4f3 = 0;
              pUVar26 = UCustomizableObject::GetPrivate(pUVar5);
              UCustomizableObjectPrivate::GetComponentName
                        (pUVar26,(FCustomizableObjectComponentIndex)(int)local_350);
              local_290 = local_350;
              local_288 = &local_4f3;
              TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FName_&&,unsigned_char_&&>_>
                        (&local_f8,(TPairInitializer<FName_&&,unsigned_char_&&> *)local_390,
                         (bool *)&local_290);
              iVar18 = iVar18 + 1;
            }
            uVar32 = 0;
            if ((int)uVar37 < (int)local_500) {
              uVar32 = ~uVar37 >> 0x1f;
            }
            if ((uVar32 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          UCustomizableObjectInstance::SetRequestedLODs
                    (*(UCustomizableObjectInstance **)(local_508.Data + uVar39 * 8),
                     (TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                      *)&local_a8,
                     (TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                      *)&local_f8,local_4c8);
          uVar38 = (ulonglong)(uVar37 + 1);
          uVar39 = uVar39 + 1;
          uVar32 = local_4f8;
        } while ((longlong)uVar39 < (longlong)(int)uVar16);
      }
      uVar31 = local_500 & 0xffffffff;
LAB_14abf4757:
      iVar18 = uVar32 + iVar17;
      uVar16 = uVar32;
      if ((int)uVar32 < iVar18) {
        lVar34 = (longlong)(int)uVar32 << 3;
        do {
          iVar20 = (int)uVar31;
          uVar16 = local_4f8;
          if (iVar20 <= (int)uVar32) break;
          uVar16 = 0;
          if ((int)uVar32 < iVar20) {
            uVar16 = ~uVar32 >> 0x1f;
          }
          if (uVar16 == 0) {
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar14) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar20 = (int)local_500;
          }
          lVar7 = *(longlong *)(*(longlong *)(local_508.Data + lVar34) + 0x98);
          if (bVar13) {
LAB_14abf4a25:
            iVar20 = 0;
            while( true ) {
              if ((*(longlong *)(lVar7 + 0x128) == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Private",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                                      ,0x3b9,L""), bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar36 = *(longlong *)(*(longlong *)(lVar7 + 0x128) + 0x40);
              uVar16 = 0;
              if (lVar36 != 0) {
                uVar16 = *(uint *)(lVar36 + 0x408);
              }
              if ((int)uVar16 <= iVar20) break;
              local_4ee = 0xff;
              if ((*(longlong *)(lVar7 + 0x128) == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Private",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                                      ,0x3b9,L""), bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar36 = *(longlong *)(*(longlong *)(lVar7 + 0x128) + 0x40);
              if (((lVar36 == 0) || (iVar20 < 0)) || (*(int *)(lVar36 + 0x408) <= iVar20)) {
                local_44c = 0;
              }
              else {
                local_44c = *(undefined8 *)(*(longlong *)(lVar36 + 0x400) + (longlong)iVar20 * 8);
              }
              local_300 = &local_44c;
              local_2f8 = &local_4ee;
              TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FName_&&,unsigned_char_&&>_>
                        (&local_a8,(TPairInitializer<FName_&&,unsigned_char_&&> *)(local_380 + 4),
                         (bool *)&local_300);
              local_4ed = 0;
              if ((*(longlong *)(lVar7 + 0x128) == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Private",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                                      ,0x3b9,L""), bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar36 = *(longlong *)(*(longlong *)(lVar7 + 0x128) + 0x40);
              if (((lVar36 == 0) || (iVar20 < 0)) || (*(int *)(lVar36 + 0x408) <= iVar20)) {
                local_444 = 0;
              }
              else {
                local_444 = *(undefined8 *)(*(longlong *)(lVar36 + 0x400) + (longlong)iVar20 * 8);
              }
              local_260 = &local_444;
              local_258 = &local_4ed;
              TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FName_&&,unsigned_char_&&>_>
                        (&local_f8,(TPairInitializer<FName_&&,unsigned_char_&&> *)local_378,
                         (bool *)&local_260);
              iVar20 = iVar20 + 1;
            }
            uVar16 = 0;
            if ((int)uVar32 < (int)local_500) {
              uVar16 = ~uVar32 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            bVar13 = true;
          }
          else {
            uVar16 = 0;
            if ((int)uVar32 < iVar20) {
              uVar16 = ~uVar32 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            fVar40 = UCustomizableObjectInstance::GetMinSquareDistToPlayer
                               (*(UCustomizableObjectInstance **)(local_508.Data + lVar34));
            if (fVar41 <= fVar40) goto LAB_14abf4a25;
            iVar20 = 0;
            while( true ) {
              if ((*(longlong *)(lVar7 + 0x128) == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Private",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                                      ,0x3b9,L""), bVar14)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar36 = *(longlong *)(*(longlong *)(lVar7 + 0x128) + 0x40);
              iVar33 = 0;
              if (lVar36 != 0) {
                iVar33 = *(int *)(lVar36 + 0x408);
              }
              if (iVar33 <= iVar20) break;
              local_4f0 = 1;
              if ((*(longlong *)(lVar7 + 0x128) == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Private",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                                      ,0x3b9,L""), bVar14)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar36 = *(longlong *)(*(longlong *)(lVar7 + 0x128) + 0x40);
              if (((lVar36 == 0) || (iVar20 < 0)) || (*(int *)(lVar36 + 0x408) <= iVar20)) {
                local_45c = 0;
              }
              else {
                local_45c = *(undefined8 *)(*(longlong *)(lVar36 + 0x400) + (longlong)iVar20 * 8);
              }
              local_250 = &local_45c;
              local_248 = &local_4f0;
              TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FName_&&,unsigned_char_&&>_>
                        (&local_a8,(TPairInitializer<FName_&&,unsigned_char_&&> *)(local_388 + 4),
                         (bool *)&local_250);
              local_4ef = 0;
              if ((*(longlong *)(lVar7 + 0x128) == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Private",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                                      ,0x3b9,L""), bVar14)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar36 = *(longlong *)(*(longlong *)(lVar7 + 0x128) + 0x40);
              if (((lVar36 == 0) || (iVar20 < 0)) || (*(int *)(lVar36 + 0x408) <= iVar20)) {
                local_454 = 0;
              }
              else {
                local_454 = *(undefined8 *)(*(longlong *)(lVar36 + 0x400) + (longlong)iVar20 * 8);
              }
              local_240 = &local_454;
              local_238 = &local_4ef;
              TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FName_&&,unsigned_char_&&>_>
                        (&local_f8,(TPairInitializer<FName_&&,unsigned_char_&&> *)(local_370 + 4),
                         (bool *)&local_240);
              iVar20 = iVar20 + 1;
            }
            uVar16 = 0;
            if ((int)uVar32 < (int)local_500) {
              uVar16 = ~uVar32 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          UCustomizableObjectInstance::SetRequestedLODs
                    (*(UCustomizableObjectInstance **)(local_508.Data + lVar34),
                     (TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                      *)&local_a8,
                     (TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                      *)&local_f8,local_4c8);
          uVar31 = local_500 & 0xffffffff;
          uVar32 = uVar32 + 1;
          lVar34 = lVar34 + 8;
          uVar16 = local_4f8;
        } while ((int)uVar32 < iVar18);
      }
      iVar18 = local_468;
      uVar32 = uVar16 + iVar17;
      iVar20 = local_468 + iVar17 + uVar16;
      if ((int)uVar32 < iVar20) {
        lVar34 = (longlong)(int)uVar32 << 3;
        do {
          uVar16 = local_4f8;
          if ((int)uVar31 <= (int)uVar32) break;
          uVar16 = 0;
          if ((int)uVar32 < (int)uVar31) {
            uVar16 = ~uVar32 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar33 = 0;
          lVar7 = *(longlong *)(*(longlong *)(local_508.Data + lVar34) + 0x98);
          while( true ) {
            if ((*(longlong *)(lVar7 + 0x128) == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Private",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                                    ,0x3b9,L""), bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar36 = *(longlong *)(*(longlong *)(lVar7 + 0x128) + 0x40);
            iVar21 = 0;
            if (lVar36 != 0) {
              iVar21 = *(int *)(lVar36 + 0x408);
            }
            if (iVar21 <= iVar33) break;
            local_4ec = 2;
            if ((*(longlong *)(lVar7 + 0x128) == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Private",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                                    ,0x3b9,L""), bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar36 = *(longlong *)(*(longlong *)(lVar7 + 0x128) + 0x40);
            if (((lVar36 == 0) || (iVar33 < 0)) || (*(int *)(lVar36 + 0x408) <= iVar33)) {
              local_43c = 0;
            }
            else {
              local_43c = *(undefined8 *)(*(longlong *)(lVar36 + 0x400) + (longlong)iVar33 * 8);
            }
            local_2f0 = &local_43c;
            local_2e8 = &local_4ec;
            TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_&&,unsigned_char_&&>_>
                      (&local_a8,(TPairInitializer<FName_&&,unsigned_char_&&> *)(local_378 + 4),
                       (bool *)&local_2f0);
            local_4eb = 0;
            if ((*(longlong *)(lVar7 + 0x128) == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Private",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                                    ,0x3b9,L""), bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar36 = *(longlong *)(*(longlong *)(lVar7 + 0x128) + 0x40);
            if (((lVar36 == 0) || (iVar33 < 0)) || (*(int *)(lVar36 + 0x408) <= iVar33)) {
              local_434 = 0;
            }
            else {
              local_434 = *(undefined8 *)(*(longlong *)(lVar36 + 0x400) + (longlong)iVar33 * 8);
            }
            local_2e0 = &local_434;
            local_2d8 = &local_4eb;
            TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_&&,unsigned_char_&&>_>
                      (&local_f8,(TPairInitializer<FName_&&,unsigned_char_&&> *)local_370,
                       (bool *)&local_2e0);
            iVar33 = iVar33 + 1;
          }
          uVar16 = 0;
          if ((int)uVar32 < (int)local_500) {
            uVar16 = ~uVar32 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          UCustomizableObjectInstance::SetRequestedLODs
                    (*(UCustomizableObjectInstance **)(local_508.Data + lVar34),
                     (TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                      *)&local_a8,
                     (TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                      *)&local_f8,local_4c8);
          uVar31 = local_500 & 0xffffffff;
          uVar32 = uVar32 + 1;
          lVar34 = lVar34 + 8;
          uVar16 = local_4f8;
        } while ((int)uVar32 < iVar20);
      }
      uVar16 = iVar18 + iVar17 + uVar16;
      if ((int)uVar16 < (int)uVar31) {
        lVar34 = (longlong)(int)uVar16 << 3;
        do {
          uVar32 = 0;
          if ((int)uVar16 < (int)uVar31) {
            uVar32 = ~uVar16 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar7 = *(longlong *)(local_508.Data + lVar34);
          if ((*(longlong *)(lVar7 + 0x228) == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PrivateData",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                  ,0xce2,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar16 = uVar16 + 1;
          lVar34 = lVar34 + 8;
          puVar1 = (uint *)(*(longlong *)(lVar7 + 0x228) + 0x238);
          *puVar1 = *puVar1 | 0x100;
          uVar31 = local_500 & 0xffffffff;
        } while ((int)uVar16 < (int)local_500);
      }
    }
    else if (0 < iVar18) {
      uVar39 = uVar38;
      do {
        uVar37 = (uint)uVar38;
        uVar32 = 0;
        uVar16 = uVar32;
        if ((int)uVar37 < (int)uVar30) {
          uVar16 = ~uVar37 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar34 = *(longlong *)(*(longlong *)(local_508.Data + uVar39) + 0x98);
        iVar17 = 0;
        while( true ) {
          if ((*(longlong *)(lVar34 + 0x128) == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Private",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                                  ,0x3b9,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar7 = *(longlong *)(*(longlong *)(lVar34 + 0x128) + 0x40);
          uVar16 = uVar32;
          if (lVar7 != 0) {
            uVar16 = *(uint *)(lVar7 + 0x408);
          }
          if ((int)uVar16 <= iVar17) break;
          local_4ea = 2;
          if ((*(longlong *)(lVar34 + 0x128) == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Private",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                                  ,0x3b9,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar7 = *(longlong *)(*(longlong *)(lVar34 + 0x128) + 0x40);
          if (((lVar7 == 0) || (iVar17 < 0)) || (*(int *)(lVar7 + 0x408) <= iVar17)) {
            local_42c = 0;
          }
          else {
            local_42c = *(undefined8 *)(*(longlong *)(lVar7 + 0x400) + (longlong)iVar17 * 8);
          }
          local_2d0 = &local_42c;
          local_2c8 = &local_4ea;
          TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_&&,unsigned_char_&&>_>
                    (&local_a8,(TPairInitializer<FName_&&,unsigned_char_&&> *)local_334,
                     (bool *)&local_2d0);
          local_4e9 = 0;
          if ((*(longlong *)(lVar34 + 0x128) == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Private",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                                  ,0x3b9,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar7 = *(longlong *)(*(longlong *)(lVar34 + 0x128) + 0x40);
          if (((lVar7 == 0) || (iVar17 < 0)) || (*(int *)(lVar7 + 0x408) <= iVar17)) {
            local_424 = 0;
          }
          else {
            local_424 = *(undefined8 *)(*(longlong *)(lVar7 + 0x400) + (longlong)iVar17 * 8);
          }
          local_2c0 = &local_424;
          local_2b8 = &local_4e9;
          TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_&&,unsigned_char_&&>_>
                    (&local_f8,(TPairInitializer<FName_&&,unsigned_char_&&> *)(local_340 + 8),
                     (bool *)&local_2c0);
          iVar17 = iVar17 + 1;
        }
        if ((int)uVar37 < (int)local_500) {
          uVar32 = ~uVar37 >> 0x1f;
        }
        if ((uVar32 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        UCustomizableObjectInstance::SetRequestedLODs
                  (*(UCustomizableObjectInstance **)(local_508.Data + uVar39),
                   (TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                    *)&local_a8,
                   (TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                    *)&local_f8,param_1);
        uVar30 = local_500 & 0xffffffff;
        uVar38 = (ulonglong)(uVar37 + 1);
        uVar39 = uVar39 + 8;
      } while ((int)(uVar37 + 1) < (int)local_500);
    }
    local_f8.HashSize = 0;
    if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_f8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_f8.Elements);
    local_a8.HashSize = 0;
    if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_a8.Elements);
    if (local_508.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_508.Data);
    }
  }
  return;
}

