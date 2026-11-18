// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 18

// StaticClass @ 147889540

UClass * __cdecl ULODSyncComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULODSyncComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LODSyncComponent",
               &Z_Registration_Info_UClass_ULODSyncComponent.InnerSingleton,
               StaticRegisterNativesULODSyncComponent,0x158,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ULODSyncComponent>,
               InternalVTableHelperCtorCaller<ULODSyncComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULODSyncComponent.InnerSingleton;
}

// ULODSyncComponent @ 1478a96b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULODSyncComponent * __thiscall
ULODSyncComponent::ULODSyncComponent(ULODSyncComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->NumLODs = -1;
  this->ForcedLOD = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->ComponentsToSync).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentsToSync).ArrayNum = 0;
  (this->ComponentsToSync).ArrayMax = 0;
  *(undefined8 *)&this->CustomLODMapping = 0;
  *(undefined8 *)&(this->CustomLODMapping).field_0x8 = 0;
  *(undefined8 *)&(this->CustomLODMapping).field_0x20 = 0;
  this->MinLOD = 0;
  *(undefined4 *)&(this->CustomLODMapping).field_0x28 = 0;
  *(undefined4 *)&(this->CustomLODMapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->CustomLODMapping).field_0x34 = 0;
  *(undefined4 *)&(this->CustomLODMapping).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CustomLODMapping).field_0x40 = 0;
  *(undefined4 *)&(this->CustomLODMapping).field_0x48 = 0;
  this->CurrentLOD = 0;
  this->CurrentNumLODs = 0;
  (this->DriveComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DriveComponents).ArrayNum = 0;
  (this->DriveComponents).ArrayMax = 0;
  (this->SubComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubComponents).ArrayNum = 0;
  (this->SubComponents).ArrayMax = 0;
  return this;
}

// ULODSyncComponent @ 1478a9780

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULODSyncComponent * __thiscall
ULODSyncComponent::ULODSyncComponent(ULODSyncComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->NumLODs = -1;
  this->ForcedLOD = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->ComponentsToSync).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentsToSync).ArrayNum = 0;
  (this->ComponentsToSync).ArrayMax = 0;
  *(undefined8 *)&this->CustomLODMapping = 0;
  *(undefined8 *)&(this->CustomLODMapping).field_0x8 = 0;
  *(undefined8 *)&(this->CustomLODMapping).field_0x20 = 0;
  this->MinLOD = 0;
  *(undefined4 *)&(this->CustomLODMapping).field_0x28 = 0;
  *(undefined4 *)&(this->CustomLODMapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->CustomLODMapping).field_0x34 = 0;
  *(undefined4 *)&(this->CustomLODMapping).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CustomLODMapping).field_0x40 = 0;
  *(undefined4 *)&(this->CustomLODMapping).field_0x48 = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 0x80;
  (this->DriveComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DriveComponents).ArrayNum = 0;
  (this->DriveComponents).ArrayMax = 0;
  (this->SubComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubComponents).ArrayNum = 0;
  (this->SubComponents).ArrayMax = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  *(undefined1 *)&this->_padding_ = 0;
  this->CurrentLOD = 0;
  this->CurrentNumLODs = 0;
  return this;
}

// ~ULODSyncComponent @ 1478abfc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULODSyncComponent::~ULODSyncComponent(ULODSyncComponent *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->SubComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DriveComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->CustomLODMapping).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CustomLODMapping).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FLODMappingData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FLODMappingData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FLODMappingData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CustomLODMapping);
  pFVar1 = (this->ComponentsToSync).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetComponentSync @ 1478d0a20

FComponentSync * __thiscall
ULODSyncComponent::GetComponentSync(ULODSyncComponent *this,FName *param_1)

{
  FComponentSync *pFVar1;
  int iVar2;
  FComponentSync *pFVar3;
  undefined1 local_res10 [8];
  
  if (*param_1 == (FName)0x0) {
LAB_1478d0a8a:
    pFVar3 = (FComponentSync *)0x0;
  }
  else {
    iVar2 = (this->ComponentsToSync).ArrayNum;
    pFVar3 = (FComponentSync *)(this->ComponentsToSync).AllocatorInstance.Data;
    pFVar1 = pFVar3 + iVar2;
    while( true ) {
      if ((this->ComponentsToSync).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FComponentSync_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar3 == pFVar1) goto LAB_1478d0a8a;
      if (pFVar3->Name == *param_1) break;
      pFVar3 = pFVar3 + 1;
    }
  }
  return pFVar3;
}

// GetCustomMappingLOD @ 1478d0cf0

int __thiscall
ULODSyncComponent::GetCustomMappingLOD(ULODSyncComponent *this,FName *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FLODMappingData *pFVar4;
  
  pFVar4 = TMapBase<FName,FLODMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLODMappingData,0>_>
           ::Find((TMapBase<FName,FLODMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLODMappingData,0>_>
                   *)&this->CustomLODMapping,*param_1);
  if (((pFVar4 != (FLODMappingData *)0x0) && (-1 < param_2)) &&
     (param_2 < (pFVar4->Mapping).ArrayNum)) {
    if (param_2 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    return *(int *)((pFVar4->Mapping).AllocatorInstance.Data + (longlong)param_2 * 4);
  }
  return param_2;
}

// GetLODSyncDebugText @ 1478d4be0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
ULODSyncComponent::GetLODSyncDebugText(ULODSyncComponent *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  UPrimitiveComponent *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  UClass *pUVar5;
  longlong *plVar6;
  FString *pFVar7;
  ForAnyElementType FVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  FName local_res18;
  uint local_res20;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  pwVar12 = L"";
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_res20 = (this->SubComponents).ArrayNum;
  uVar9 = (ulonglong)(int)local_res20;
  pFVar10 = (this->SubComponents).AllocatorInstance.Data;
  pFVar1 = pFVar10 + uVar9 * 8;
  while( true ) {
    if ((this->SubComponents).ArrayNum != (int)uVar9) {
      `TCheckedPointerIterator<TObjectPtr<UPrimitiveComponent>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res18);
    }
    if (pFVar10 == pFVar1) break;
    this_00 = *(UPrimitiveComponent **)pFVar10;
    if (this_00 != (UPrimitiveComponent *)0x0) {
      pUVar5 = Z_Construct_UClass_ULODSyncInterface_NoRegister();
      plVar6 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar5);
      if (plVar6 == (longlong *)0x0) {
        pFVar7 = GetTypeName<ILODSyncInterface>(local_60);
        if ((pFVar7->Data).ArrayNum == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
        pFVar7 = GetFullNameForCastLogError<UPrimitiveComponent>(&local_70,this_00);
        if ((pFVar7->Data).ArrayNum != 0) {
          pwVar12 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar12,pwVar11);
      }
      iVar2 = (**(code **)(*plVar6 + 0x40))(plVar6);
      (**(code **)(*plVar6 + 0x48))(plVar6);
      iVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
      if ((iVar2 < 0) || (iVar4 = (**(code **)(*plVar6 + 0x18))(plVar6), iVar4 <= iVar2)) {
        local_res18.ComparisonIndex.Value = *(uint *)&this_00->field_0x18;
        local_res18.Number = *(uint *)&this_00->field_0x1c;
        if (iVar3 < 0) {
          ::FName::ToString(&local_res18,local_60);
          ::FString::PrintfImpl(&local_90,L"%s : %d\n");
          iVar2 = local_90.Data.ArrayNum + -1;
          if (local_90.Data.ArrayNum == 0) {
            iVar2 = 0;
          }
          ::FString::AppendChars
                    (__return_storage_ptr__,(wchar_t *)local_90.Data.AllocatorInstance.Data,iVar2);
          FVar8.Data = local_60[0].Data.AllocatorInstance.Data;
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
            FVar8.Data = local_60[0].Data.AllocatorInstance.Data;
          }
        }
        else {
          ::FName::ToString(&local_res18,&local_70);
          ::FString::PrintfImpl(&local_a0,L"%s : %d (%d)\n");
          iVar2 = local_a0.Data.ArrayNum + -1;
          if (local_a0.Data.ArrayNum == 0) {
            iVar2 = 0;
          }
          ::FString::AppendChars
                    (__return_storage_ptr__,(wchar_t *)local_a0.Data.AllocatorInstance.Data,iVar2);
          FVar8.Data = local_70.Data.AllocatorInstance.Data;
          if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
            FVar8.Data = local_70.Data.AllocatorInstance.Data;
          }
        }
      }
      else {
        local_res18.ComparisonIndex.Value = *(uint *)&this_00->field_0x18;
        local_res18.Number = *(uint *)&this_00->field_0x1c;
        ::FName::ToString(&local_res18,&local_80);
        ::FString::PrintfImpl(&local_b0,L"%s : %d (%d, %d)\n");
        iVar2 = local_b0.Data.ArrayNum + -1;
        if (local_b0.Data.ArrayNum == 0) {
          iVar2 = 0;
        }
        ::FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)local_b0.Data.AllocatorInstance.Data,iVar2);
        FVar8.Data = local_80.Data.AllocatorInstance.Data;
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
          FVar8.Data = local_80.Data.AllocatorInstance.Data;
        }
      }
      if (FVar8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar8.Data);
      }
    }
    pFVar10 = pFVar10 + 8;
    uVar9 = (ulonglong)local_res20;
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1478d9530

UClass * __cdecl ULODSyncComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULODSyncComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LODSyncComponent",
               &Z_Registration_Info_UClass_ULODSyncComponent.InnerSingleton,
               StaticRegisterNativesULODSyncComponent,0x158,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ULODSyncComponent>,
               InternalVTableHelperCtorCaller<ULODSyncComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULODSyncComponent.InnerSingleton;
}

// GetSyncMappingLOD @ 1478dd880

int __thiscall
ULODSyncComponent::GetSyncMappingLOD(ULODSyncComponent *this,FName *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FLODMappingData *pFVar5;
  
  pFVar5 = TMapBase<FName,FLODMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLODMappingData,0>_>
           ::Find((TMapBase<FName,FLODMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLODMappingData,0>_>
                   *)&this->CustomLODMapping,*param_1);
  if (((pFVar5 != (FLODMappingData *)0x0) && (-1 < param_2)) &&
     (param_2 < (pFVar5->InverseMapping).ArrayNum)) {
    uVar3 = 0;
    if (param_2 < (pFVar5->InverseMapping).ArrayNum) {
      uVar3 = (uint)~param_2 >> 0x1f;
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
    return *(int *)((pFVar5->InverseMapping).AllocatorInstance.Data + (longlong)param_2 * 4);
  }
  return param_2;
}

// InitializeSyncComponents @ 1478e0190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULODSyncComponent::InitializeSyncComponents(ULODSyncComponent *this)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_> *pTVar4;
  TMap<FName,FLODMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLODMappingData,0>_>
  *pTVar5;
  AActor *this_00;
  FName FVar6;
  UObjectBaseUtility *this_01;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  FName *pFVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  UClass *pUVar15;
  UClass *pUVar16;
  UClass *pUVar17;
  longlong *plVar18;
  uint uVar19;
  undefined1 *puVar20;
  ulonglong uVar21;
  ForElementType<FSetElementId> FVar22;
  uint uVar23;
  uint *puVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  FName *this_02;
  longlong lVar27;
  UClass *pUVar28;
  uint *puVar29;
  int *piVar30;
  undefined1 auStackY_408 [32];
  undefined1 local_3b8 [8];
  ULODSyncComponent *local_3b0;
  uint local_3a8 [2];
  UObjectBaseUtility *local_3a0;
  UObjectBaseUtility *local_398;
  int local_390;
  uint local_38c;
  int local_388;
  undefined1 local_384 [20];
  undefined8 local_370;
  FName local_368;
  FName *local_360;
  longlong local_358 [2];
  longlong *local_348;
  undefined1 auStack_340 [16];
  uint uStack_330;
  uint uStack_32c;
  longlong local_328;
  TSet<TTuple<FName,FLODMappingData>,TDefaultMapHashableKeyFuncs<FName,FLODMappingData,0>,FDefaultSetAllocator>
  *pTStack_320;
  TSet<TTuple<FName,FLODMappingData>,TDefaultMapHashableKeyFuncs<FName,FLODMappingData,0>,FDefaultSetAllocator>
  *local_318;
  undefined2 local_310;
  undefined8 *local_308;
  uint *local_300;
  FString local_2f8;
  undefined1 local_2e8 [32];
  longlong local_2c8;
  TSet<TTuple<FName,FLODMappingData>,TDefaultMapHashableKeyFuncs<FName,FLODMappingData,0>,FDefaultSetAllocator>
  *pTStack_2c0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_2b8;
  undefined1 local_268 [128];
  undefined1 *local_1e8;
  uint local_1e0;
  undefined4 local_1dc;
  undefined1 local_1d8 [320];
  undefined1 *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_408;
  pTVar3 = &this->DriveComponents;
  pUVar17 = (UClass *)0x0;
  pUVar28 = (UClass *)0x0;
  (this->DriveComponents).ArrayNum = 0;
  local_3b0 = this;
  if ((this->DriveComponents).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar3->AllocatorInstance,0,&(this->DriveComponents).ArrayMax);
  }
  pTVar4 = &this->SubComponents;
  piVar1 = &(this->SubComponents).ArrayMax;
  (this->SubComponents).ArrayNum = 0;
  if ((this->SubComponents).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar4->AllocatorInstance,0,piVar1);
  }
  this_00 = (AActor *)this->_padding_;
  local_1e8 = (undefined1 *)0x0;
  local_1e0 = 0;
  local_1dc = 0x10;
  if (this_00 == (AActor *)0x0) goto LAB_1478e0323;
  pUVar15 = UPrimitiveComponent::StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar15 != (UClass *)0x0) goto LAB_1478e0284;
  }
  else {
    pUVar28 = pUVar17;
    if (pUVar15 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar15);
LAB_1478e0284:
      pUVar16 = Z_Construct_UClass_UActorComponent_NoRegister();
      pUVar28 = pUVar17;
      if (pUVar16 != (UClass *)0x0) {
        iVar12 = (int)pUVar16->_padding_;
        if (((int)pUVar15->_padding_ < iVar12) ||
           ((longlong *)*(undefined1 **)(pUVar15->_padding_ + (longlong)iVar12 * 8) !=
            &pUVar16->_padding_)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) {
          pUVar28 = pUVar15;
        }
      }
    }
  }
  pUVar17 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar28 == pUVar17) {
    local_384._4_8_ = pUVar15;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar15);
    }
    AActor::
    ForEachComponent_Internal<UPrimitiveComponent,1,0,_AActor::GetComponents<UPrimitiveComponent,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)((longlong)local_384 + 4),
               (TArray<UPrimitiveComponent_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                *)local_268);
  }
  else {
    local_384._12_8_ = pUVar15;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar15);
    }
    AActor::
    ForEachComponent_Internal<UPrimitiveComponent,0,0,_AActor::GetComponents<UPrimitiveComponent,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)((longlong)local_384 + 0xc),
               (TArray<UPrimitiveComponent_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                *)local_268);
  }
  pUVar17 = (UClass *)(ulonglong)local_1e0;
LAB_1478e0323:
  local_98 = (undefined1 *)0x0;
  local_90 = 0;
  local_80 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  iVar12 = (int)pUVar17;
  local_8c = 0x10;
  local_78 = ___xmm_00000000ffffffff0000002000000000;
  uStack_70 = _UNK_150631d78;
  local_3a8[0] = 0;
  if (0 < iVar12) {
    while( true ) {
      uVar11 = local_3a8[0];
      uVar23 = 0;
      if ((int)local_3a8[0] < (int)pUVar17) {
        uVar23 = ~local_3a8[0] >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      puVar20 = local_268;
      if (local_1e8 != (undefined1 *)0x0) {
        puVar20 = local_1e8;
      }
      local_370 = *(undefined8 *)(*(longlong *)(puVar20 + (longlong)(int)uVar11 * 8) + 0x18);
      local_308 = &local_370;
      local_300 = local_3a8;
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
      ::Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                  *)local_1d8,(TPairInitializer<FName_const_&,int_const_&> *)local_384,
                 (bool *)&local_308);
      local_3a8[0] = local_3a8[0] + 1;
      if (iVar12 <= (int)local_3a8[0]) break;
      pUVar17 = (UClass *)(ulonglong)local_1e0;
    }
  }
  piVar30 = &(this->DriveComponents).ArrayMax;
  local_390 = local_3b0->NumLODs;
  local_3b0->CurrentNumLODs = local_390;
  local_38c = (local_3b0->ComponentsToSync).ArrayNum;
  uVar21 = (ulonglong)(int)local_38c;
  this_02 = (FName *)(local_3b0->ComponentsToSync).AllocatorInstance.Data;
  local_360 = (FName *)((longlong)this_02 + uVar21 * 0xc);
  while( true ) {
    pFVar9 = local_360;
    if ((local_3b0->ComponentsToSync).ArrayNum != (int)uVar21) {
      local_3b8[0] = 0;
      `TCheckedPointerIterator<FComponentSync,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_3b8);
    }
    if (this_02 == pFVar9) break;
    FVar6 = *this_02;
    local_368 = FVar6;
    uVar11 = ::GetTypeHash(FVar6.ComparisonIndex.Value);
    iVar12 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
             ::FindIndexByHash<FName>
                       ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                         *)local_1d8,FVar6.Number + uVar11,&local_368);
    if (iVar12 != -1) {
      puVar20 = local_1d8;
      if (local_98 != (undefined1 *)0x0) {
        puVar20 = local_98;
      }
      puVar24 = (uint *)(puVar20 + (longlong)iVar12 * 0x14 + 8);
      if (puVar20 + (longlong)iVar12 * 0x14 == (undefined1 *)0x0) {
        puVar24 = (uint *)0x0;
      }
      if (puVar24 != (uint *)0x0) {
        uVar11 = *puVar24;
        uVar23 = 0;
        if ((int)uVar11 < (int)local_1e0) {
          uVar23 = ~uVar11 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        puVar20 = local_268;
        if (local_1e8 != (undefined1 *)0x0) {
          puVar20 = local_1e8;
        }
        this_01 = *(UObjectBaseUtility **)(puVar20 + (longlong)(int)uVar11 * 8);
        if (this_01 != (UObjectBaseUtility *)0x0) {
          pUVar28 = Z_Construct_UClass_ULODSyncInterface_NoRegister();
          plVar18 = UObjectBaseUtility::GetInterfaceAddress(this_01,pUVar28);
          if ((plVar18 != (longlong *)0x0) && ((char)this_02[1].ComparisonIndex.Value != '\x02')) {
            FTickFunction::AddPrerequisite
                      ((FTickFunction *)&this_01[1].field_0x10,(UObject *)local_3b0,
                       (FTickFunction *)&local_3b0->_padding_);
            local_3a0 = this_01;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_01);
            }
            pFVar7 = (pTVar4->AllocatorInstance).Data;
            if (((pFVar7 <= (FScriptContainerElement *)&local_3a0) &&
                ((FScriptContainerElement *)&local_3a0 < pFVar7 + (longlong)*piVar1 * 8)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar12 = (this->SubComponents).ArrayNum;
            if (iVar12 == *piVar1) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&pTVar4->AllocatorInstance,piVar1);
            }
            (this->SubComponents).ArrayNum = iVar12 + 1;
            *(UObjectBaseUtility **)((pTVar4->AllocatorInstance).Data + (longlong)iVar12 * 8) =
                 local_3a0;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_3a0 != (UObjectBaseUtility *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_3a0);
            }
            if ((char)this_02[1].ComparisonIndex.Value == '\0') {
              local_398 = this_01;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this_01);
              }
              pFVar7 = (pTVar3->AllocatorInstance).Data;
              if (((pFVar7 <= (FScriptContainerElement *)&local_398) &&
                  ((FScriptContainerElement *)&local_398 < pFVar7 + (longlong)*piVar30 * 8)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              iVar12 = (this->DriveComponents).ArrayNum;
              if (iVar12 == *piVar30) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&pTVar3->AllocatorInstance,piVar30);
              }
              (this->DriveComponents).ArrayNum = iVar12 + 1;
              *(UObjectBaseUtility **)((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 8) =
                   local_398;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_398 != (UObjectBaseUtility *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)local_398);
              }
              iVar12 = (**(code **)(*plVar18 + 0x20))(plVar18);
              if (5 < (byte)LogLODSync._0_1_) {
                ::FName::ToString(this_02,&local_2f8);
                UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLODSync);
                if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
                }
              }
              if (local_390 == -1) {
                if (iVar12 < local_3b0->CurrentNumLODs) {
                  iVar12 = local_3b0->CurrentNumLODs;
                }
                local_3b0->CurrentNumLODs = iVar12;
                if (5 < (byte)LogLODSync._0_1_) {
                  UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLODSync);
                }
              }
            }
          }
        }
      }
    }
    uVar21 = (ulonglong)local_38c;
    this_02 = (FName *)&this_02[1].Number;
  }
  pTVar5 = &local_3b0->CustomLODMapping;
  TSet<TTuple<FName,FLODMappingData>,TDefaultMapHashableKeyFuncs<FName,FLODMappingData,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_2e8,
             (TSet<TTuple<FName,FLODMappingData>,TDefaultMapHashableKeyFuncs<FName,FLODMappingData,0>,FDefaultSetAllocator>
              *)pTVar5);
  local_310 = 0;
  stack0xfffffffffffffcc8 = local_2e8._16_16_;
  local_348 = (longlong *)local_2e8._0_8_;
  auStack_340._0_8_ = local_2e8._8_8_;
  local_328 = local_2c8;
  pTStack_320 = pTStack_2c0;
  uVar21 = local_2e8._24_8_ >> 0x20;
  local_318 = (TSet<TTuple<FName,FLODMappingData>,TDefaultMapHashableKeyFuncs<FName,FLODMappingData,0>,FDefaultSetAllocator>
               *)pTVar5;
  if (local_2e8._28_4_ < *(int *)(local_2e8._16_8_ + 0x18)) {
    do {
      uVar25 = 0;
      lVar27 = (longlong)(int)uVar21 * 0x30 + *local_348;
      pFVar2 = (ForAnyElementType *)(lVar27 + 0x18);
      uVar11 = 0;
      *(undefined4 *)(lVar27 + 0x20) = 0;
      if (*(int *)(lVar27 + 0x24) < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,pFVar2,0,(int *)(lVar27 + 0x24));
      }
      local_2b8.Elements._0_8_ = 0;
      local_2b8.Elements._8_8_ = 0;
      local_2b8.Elements._32_8_ = 0;
      local_2b8.Elements._40_4_ = 0;
      local_2b8.Elements._44_4_ = 0x80;
      local_2b8.Elements._48_4_ = 0xffffffff;
      local_2b8.Elements._52_4_ = 0;
      local_2b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_2b8.HashSize = 0;
      iVar12 = *(int *)(lVar27 + 0x10);
      uVar21 = uVar25;
      uVar26 = uVar25;
      if (0 < iVar12) {
        do {
          uVar23 = (uint)uVar25;
          uVar11 = 0;
          if ((int)uVar23 < iVar12) {
            uVar11 = ~uVar23 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar11 = *(uint *)(*(longlong *)(lVar27 + 8) + uVar26 * 4);
          if (local_2b8.Elements._8_4_ != local_2b8.Elements._52_4_) {
            FVar22 = (ForElementType<FSetElementId>)&local_2b8.Hash;
            if (local_2b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar22 = local_2b8.Hash.SecondaryData;
            }
            uVar19 = *(uint *)((longlong)FVar22 + (ulonglong)(local_2b8.HashSize - 1U & uVar11) * 4)
            ;
            while (uVar19 != 0xffffffff) {
              puVar24 = (uint *)((longlong)(int)uVar19 * 0x10 + local_2b8.Elements._0_8_);
              if (*puVar24 == uVar11) {
                if (puVar24 != (uint *)0x0) goto LAB_1478e0995;
                break;
              }
              uVar19 = puVar24[2];
            }
          }
          local_358[0] = *(longlong *)(lVar27 + 8) + uVar26 * 4;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          EmplaceByHash<TKeyInitializer<int_const_&>_>
                    (&local_2b8,(uint)&local_388,(TKeyInitializer<int_const_&> *)(ulonglong)uVar11,
                     (bool *)local_358);
          puVar24 = (uint *)((longlong)local_388 * 0x10 + local_2b8.Elements._0_8_);
LAB_1478e0995:
          puVar24[1] = uVar23;
          uVar11 = 0;
          if ((int)uVar23 < *(int *)(lVar27 + 0x10)) {
            uVar11 = ~uVar23 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar11 = *(uint *)(*(longlong *)(lVar27 + 8) + uVar26 * 4);
          if ((int)uVar11 < (int)(uint)uVar21) {
            uVar11 = (uint)uVar21;
          }
          uVar25 = (ulonglong)(uVar23 + 1);
          iVar12 = *(int *)(lVar27 + 0x10);
          uVar21 = (ulonglong)uVar11;
          uVar26 = uVar26 + 1;
        } while ((int)(uVar23 + 1) < iVar12);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar11 + 1,pFVar2,(int *)(lVar27 + 0x20),(int *)(lVar27 + 0x24));
      uVar26 = 0;
      uVar21 = uVar26;
      uVar25 = uVar26;
      if (-1 < (int)uVar11) {
        do {
          uVar23 = (uint)uVar26;
          if (local_2b8.Elements._8_4_ != local_2b8.Elements._52_4_) {
            FVar22 = (ForElementType<FSetElementId>)&local_2b8.Hash;
            if (local_2b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar22 = local_2b8.Hash.SecondaryData;
            }
            uVar19 = *(uint *)((longlong)FVar22 + (local_2b8.HashSize - 1 & uVar26) * 4);
            while (uVar19 != 0xffffffff) {
              puVar24 = (uint *)((longlong)(int)uVar19 * 0x10 + local_2b8.Elements._0_8_);
              if (*puVar24 == uVar23) {
                puVar29 = puVar24 + 1;
                if (puVar24 == (uint *)0x0) {
                  puVar29 = (uint *)0x0;
                }
                uVar19 = ~uVar23 >> 0x1f;
                if (puVar29 == (uint *)0x0) goto LAB_1478e0aa0;
                uVar13 = *puVar29;
                uVar14 = 0;
                if ((int)uVar23 < *(int *)(lVar27 + 0x20)) {
                  uVar14 = uVar19;
                }
                if ((uVar14 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                *(uint *)(pFVar2->Data + uVar21) = uVar13;
                uVar25 = (ulonglong)*puVar29;
                goto LAB_1478e0aec;
              }
              uVar19 = puVar24[2];
            }
          }
          uVar19 = ~uVar23 >> 0x1f;
LAB_1478e0aa0:
          uVar13 = 0;
          if ((int)uVar23 < *(int *)(lVar27 + 0x20)) {
            uVar13 = uVar19;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          *(int *)(pFVar2->Data + uVar21) = (int)uVar25;
LAB_1478e0aec:
          uVar26 = (ulonglong)(uVar23 + 1);
          uVar21 = uVar21 + 4;
        } while ((int)(uVar23 + 1) <= (int)uVar11);
      }
      local_2b8.HashSize = 0;
      if (local_2b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_2b8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_2b8.Elements);
      uStack_330 = uStack_330 & ~auStack_340._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_340);
      uVar21 = (ulonglong)uStack_32c;
    } while ((int)uStack_32c < *(int *)(auStack_340._8_8_ + 0x18));
    if (((char)local_310 != '\0') && (local_310._1_1_ != '\0')) {
      uVar11 = *(int *)&(local_318->Elements).field_0x8 - *(int *)&(local_318->Elements).field_0x34;
      if (uVar11 < 4) {
        iVar12 = 1;
      }
      else {
        uVar21 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
        lVar27 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar27 == 0; lVar27 = lVar27 + -1) {
          }
        }
        iVar12 = 1 << ((byte)lVar27 & 0x1f);
      }
      if (((0 < (int)uVar11) && (local_318->HashSize < iVar12)) || (iVar12 < local_318->HashSize)) {
        local_318->HashSize = iVar12;
        TSet<TTuple<FName,FLODMappingData>,TDefaultMapHashableKeyFuncs<FName,FLODMappingData,0>,FDefaultSetAllocator>
        ::Rehash(local_318);
      }
    }
  }
  UpdateLOD(local_3b0);
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              *)local_1d8);
  if (local_1e8 != (undefined1 *)0x0) {
    FMemory::Free(local_1e8);
  }
  return;
}

// OnRegister @ 1478e5e70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULODSyncComponent::OnRegister(ULODSyncComponent *this)

{
  int iVar1;
  int iVar2;
  
  UActorComponent::OnRegister((UActorComponent *)this);
  InitializeSyncComponents(this);
  if (5 < (byte)LogLODSync._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLODSync);
  }
  iVar2 = this->CurrentNumLODs + -1;
  if (this->CurrentLOD < iVar2) {
    iVar2 = this->CurrentLOD;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  this->CurrentLOD = iVar1;
  return;
}

// OnUnregister @ 1478e6500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULODSyncComponent::OnUnregister(ULODSyncComponent *this)

{
  UninitializeSyncComponents(this);
  if (5 < (byte)LogLODSync._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLODSync);
  }
  UActorComponent::OnUnregister((UActorComponent *)this);
  return;
}

// RefreshSyncComponents @ 1478e8e90

void __thiscall ULODSyncComponent::RefreshSyncComponents(ULODSyncComponent *this)

{
  UninitializeSyncComponents(this);
  InitializeSyncComponents(this);
  return;
}

// StaticRegisterNativesULODSyncComponent @ 1478f7f90

void __cdecl ULODSyncComponent::StaticRegisterNativesULODSyncComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_ULODSyncComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 1478fa280

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
ULODSyncComponent::TickComponent
          (ULODSyncComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  UpdateLOD(this);
  return;
}

// UninitializeSyncComponents @ 1478fae30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULODSyncComponent::UninitializeSyncComponents(ULODSyncComponent *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->SubComponents).AllocatorInstance.Data;
  iVar2 = (this->SubComponents).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->SubComponents).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UPrimitiveComponent>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(longlong *)pFVar3 != 0) {
      FTickFunction::RemovePrerequisite
                ((FTickFunction *)(*(longlong *)pFVar3 + 0x38),(UObject *)this,
                 (FTickFunction *)&this->_padding_);
    }
    pFVar3 = pFVar3 + 8;
  }
  (this->SubComponents).ArrayNum = 0;
  if ((this->SubComponents).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->SubComponents).AllocatorInstance,0,&(this->SubComponents).ArrayMax);
  }
  (this->DriveComponents).ArrayNum = 0;
  if ((this->DriveComponents).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->DriveComponents).AllocatorInstance,0,&(this->DriveComponents).ArrayMax)
    ;
  }
  return;
}

// UpdateLOD @ 1478fb8e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ULODSyncComponent::UpdateLOD(ULODSyncComponent *this)

{
  FName FVar1;
  UPrimitiveComponent *pUVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  UClass *pUVar14;
  longlong *plVar15;
  FLODMappingData *pFVar16;
  ILODSyncInterface *pIVar17;
  FString *pFVar18;
  IConsoleManager *pIVar19;
  ForElementType<int> FVar20;
  wchar_t *pwVar21;
  longlong lVar22;
  wchar_t *pwVar23;
  longlong lVar24;
  undefined1 auStackY_138 [32];
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  ForElementType<int> local_98;
  int local_50 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if ((this->DriveComponents).ArrayNum < 1) {
    return;
  }
  bVar7 = false;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar19 = IConsoleManager::Get();
    ForceLODCvar = (IConsoleVariable *)
                   (**(code **)((longlong)*pIVar19 + 0xc0))(pIVar19,L"r.ForceLOD",1);
    _Init_thread_footer(&::_TSS0);
  }
  if ((ForceLODCvar == (IConsoleVariable *)0x0) ||
     (iVar8 = (**(code **)(*(longlong *)ForceLODCvar + 200))(), iVar8 < 0)) {
    fVar4 = __real_3e4ccccd;
    uVar9 = this->ForcedLOD;
    if (((int)uVar9 < 0) || (this->CurrentNumLODs <= (int)uVar9)) {
      uVar11 = (this->DriveComponents).ArrayNum - 1;
      if ((int)uVar11 < 0) {
        return;
      }
      lVar22 = (longlong)(int)uVar11 * 8;
      uVar12 = 0xff;
      do {
        uVar9 = 0;
        if ((int)uVar11 < (this->DriveComponents).ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pUVar2 = *(UPrimitiveComponent **)((this->DriveComponents).AllocatorInstance.Data + lVar22);
        if (pUVar2 != (UPrimitiveComponent *)0x0) {
          pUVar14 = Z_Construct_UClass_ULODSyncInterface_NoRegister();
          plVar15 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar2,pUVar14);
          if (plVar15 == (longlong *)0x0) {
            pFVar18 = GetTypeName<ILODSyncInterface>(&local_c0);
            pwVar23 = L"";
            if ((pFVar18->Data).ArrayNum == 0) {
              pwVar21 = L"";
            }
            else {
              pwVar21 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
            }
            pFVar18 = GetFullNameForCastLogError<UPrimitiveComponent_const_>(&local_b0,pUVar2);
            if ((pFVar18->Data).ArrayNum != 0) {
              pwVar23 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(pwVar23,pwVar21);
          }
          uVar9 = (**(code **)(*plVar15 + 0x10))(plVar15);
          if ((-1 < (int)uVar9) && (iVar8 = (**(code **)(*plVar15 + 0x18))(plVar15), -1 < iVar8)) {
            FVar1.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
            FVar1.Number = *(uint *)&pUVar2->field_0x1c;
            pFVar16 = TMapBase<FName,FLODMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLODMappingData,0>_>
                      ::Find((TMapBase<FName,FLODMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLODMappingData,0>_>
                              *)&this->CustomLODMapping,FVar1);
            if ((pFVar16 != (FLODMappingData *)0x0) &&
               ((int)uVar9 < (pFVar16->InverseMapping).ArrayNum)) {
              uVar10 = 0;
              if ((int)uVar9 < (pFVar16->InverseMapping).ArrayNum) {
                uVar10 = ~uVar9 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              uVar9 = *(uint *)((pFVar16->InverseMapping).AllocatorInstance.Data +
                               (longlong)(int)uVar9 * 4);
            }
            bVar5 = UPrimitiveComponent::WasRecentlyRendered(pUVar2,fVar4);
            if (bVar5) {
              if (5 < (byte)LogLODSync._0_1_) {
                local_f0.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
                local_f0.Number = *(uint *)&pUVar2->field_0x1c;
                ::FName::ToString(&local_f0,&local_d0);
                UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLODSync);
                if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_d0.Data.AllocatorInstance.Data);
                }
              }
              goto LAB_1478fbc07;
            }
            if (!bVar7) {
              bVar7 = true;
              uVar12 = uVar9;
            }
            if (5 < (byte)LogLODSync._0_1_) {
              local_f8.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
              local_f8.Number = *(uint *)&pUVar2->field_0x1c;
              ::FName::ToString(&local_f8,&local_e0);
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLODSync);
              if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e0.Data.AllocatorInstance.Data);
              }
            }
          }
        }
        uVar9 = uVar12;
        lVar22 = lVar22 + -8;
        uVar11 = uVar11 - 1;
        uVar12 = uVar9;
      } while (-1 < (int)uVar11);
      if (!bVar7) {
        return;
      }
    }
    else if (5 < (byte)LogLODSync._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLODSync);
    }
  }
  else {
    uVar9 = (**(code **)(*(longlong *)ForceLODCvar + 200))();
    if (5 < (byte)LogLODSync._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLODSync);
    }
  }
LAB_1478fbc07:
  uVar11 = this->CurrentNumLODs - 1;
  if ((int)uVar9 < (int)uVar11) {
    uVar11 = uVar9;
  }
  uVar9 = this->MinLOD;
  if (this->MinLOD < (int)uVar11) {
    uVar9 = uVar11;
  }
  if (5 < (byte)LogLODSync._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLODSync);
  }
  uVar11 = (this->SubComponents).ArrayNum;
  local_98.SecondaryData = (ForElementType<int>)0x0;
  local_50[0] = 0;
  local_50[1] = 0x10;
  if ((int)uVar11 < 1) {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
  }
  else {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,uVar11,&local_98,local_50,local_50 + 1);
  }
  bVar7 = true;
  if ((int)uVar9 < this->CurrentNumLODs) {
    do {
      uVar11 = 0;
      bVar5 = true;
      if (0 < (this->SubComponents).ArrayNum) {
        lVar24 = 0;
        lVar22 = 0;
        bVar6 = bVar5;
        do {
          uVar12 = 0;
          if ((int)uVar11 < (this->SubComponents).ArrayNum) {
            uVar12 = ~uVar11 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pUVar2 = *(UPrimitiveComponent **)((this->SubComponents).AllocatorInstance.Data + lVar22);
          bVar5 = bVar6;
          if (pUVar2 != (UPrimitiveComponent *)0x0) {
            pIVar17 = CastChecked<ILODSyncInterface,UPrimitiveComponent>(pUVar2);
            local_e8.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
            local_e8.Number = *(uint *)&pUVar2->field_0x1c;
            iVar8 = GetCustomMappingLOD(this,&local_e8,uVar9);
            if (bVar7) {
              (**(code **)((longlong)*pIVar17 + 0x28))(pIVar17,iVar8);
            }
            iVar13 = (**(code **)((longlong)*pIVar17 + 0x18))(pIVar17);
            if ((iVar8 < iVar13) && (bVar5 = false, !bVar7)) break;
            bVar5 = false;
            if (iVar13 <= iVar8) {
              bVar5 = bVar6;
            }
            uVar12 = 0;
            if ((int)uVar11 < local_50[0]) {
              uVar12 = ~uVar11 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FVar20 = (ForElementType<int>)&local_98;
            if (local_98.SecondaryData != (ForElementType<int>)0x0) {
              FVar20 = local_98.SecondaryData;
            }
            *(int *)((longlong)FVar20 + lVar24) = iVar8;
          }
          uVar11 = uVar11 + 1;
          lVar22 = lVar22 + 8;
          lVar24 = lVar24 + 4;
          bVar6 = bVar5;
        } while ((int)uVar11 < (this->SubComponents).ArrayNum);
      }
      bVar7 = false;
      if (bVar5) {
        uVar9 = 0;
        if (0 < (this->SubComponents).ArrayNum) {
          lVar24 = 0;
          lVar22 = 0;
          do {
            uVar11 = 0;
            if ((int)uVar9 < (this->SubComponents).ArrayNum) {
              uVar11 = ~uVar9 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pUVar2 = *(UPrimitiveComponent **)
                      ((this->SubComponents).AllocatorInstance.Data + lVar22);
            if (pUVar2 != (UPrimitiveComponent *)0x0) {
              pIVar17 = CastChecked<ILODSyncInterface,UPrimitiveComponent>(pUVar2);
              pcVar3 = *(code **)((longlong)*pIVar17 + 0x30);
              uVar11 = 0;
              if ((int)uVar9 < local_50[0]) {
                uVar11 = ~uVar9 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              FVar20 = (ForElementType<int>)&local_98;
              if (local_98.SecondaryData != (ForElementType<int>)0x0) {
                FVar20 = local_98.SecondaryData;
              }
              (*pcVar3)(pIVar17,*(undefined4 *)(lVar24 + (longlong)FVar20));
            }
            uVar9 = uVar9 + 1;
            lVar22 = lVar22 + 8;
            lVar24 = lVar24 + 4;
          } while ((int)uVar9 < (this->SubComponents).ArrayNum);
        }
        break;
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < this->CurrentNumLODs);
  }
  if (local_98.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_98.SecondaryData);
  }
  return;
}

// execGetLODSyncDebugText @ 147903c60

void __cdecl
ULODSyncComponent::execGetLODSyncDebugText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GetLODSyncDebugText((ULODSyncComponent *)param_1,&local_18);
  if (param_3 != pFVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar1->Data).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar1->Data).ArrayMax;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

