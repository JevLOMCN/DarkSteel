// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 4

// FRelationData @ 1471dbbb0

/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */

FRelationData * __thiscall
UE::Mass::FRelationData::FRelationData(FRelationData *this,FRelationTypeTraits *param_1)

{
  Relations::FRelationTypeTraits::FRelationTypeTraits(&this->Traits,param_1);
  *(undefined8 *)&this->RoleMap = 0;
  *(undefined8 *)&(this->RoleMap).field_0x8 = 0;
  *(undefined8 *)&(this->RoleMap).field_0x20 = 0;
  *(undefined4 *)&(this->RoleMap).field_0x28 = 0;
  *(undefined4 *)&(this->RoleMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RoleMap).field_0x34 = 0;
  *(undefined4 *)&(this->RoleMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RoleMap).field_0x40 = 0;
  *(undefined4 *)&(this->RoleMap).field_0x48 = 0;
  return this;
}

// ~FRelationData @ 1471e0830

/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */

void __thiscall UE::Mass::FRelationData::~FRelationData(FRelationData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  *(undefined4 *)&(this->RoleMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RoleMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RoleMap);
  pFVar2 = (this->Traits).DebugInFix.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (*(longlong *)&(this->Traits).RegisterObserversDelegate != 0) {
    plVar3 = *(longlong **)&(this->Traits).RegisterObserversDelegate.field_0x28;
    plVar4 = (longlong *)&(this->Traits).RegisterObserversDelegate.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return;
}

// GetParticipants @ 147224430

/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> * __thiscall
UE::Mass::FRelationData::GetParticipants
          (FRelationData *this,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FMassEntityManager *param_1,FMassEntityHandle param_2,ERelationRole param_3)

{
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *pTVar9;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *pTVar10;
  undefined1 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 local_res8 [8];
  ERelationRole *local_res10 [2];
  FMassEntityHandle local_res20;
  int local_48;
  int iStack_44;
  
  uVar7 = (uint)param_3;
  local_res20 = param_2;
  if ((this->Traits).RoleTraits.Elements[uVar7].RequiresExternalMapping != Default) {
    local_res10[0] = &param_3;
    `UE::Mass::FRelationData::GetParticipants'::__l2::<lambda_1>::operator()(local_res10);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  pTVar9 = TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
                   *)&this->RoleMap,&local_res20);
  puVar11 = &pTVar9->field_0x8;
  if (pTVar9 == (TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *)0x0) {
    puVar11 = (undefined1 *)0x0;
  }
  if (puVar11 != (undefined1 *)0x0) {
    plVar13 = (longlong *)(puVar11 + (ulonglong)uVar7 * 0x10);
    uVar7 = *(uint *)(plVar13 + 1);
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if (0 < (int)uVar7) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar7,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
    }
    lVar12 = *plVar13;
    lVar5 = plVar13[1];
    lVar2 = lVar12 + (longlong)(int)lVar5 * 8;
    while( true ) {
      if ((int)plVar13[1] != (int)lVar5) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FMassRelationRoleInstanceHandle_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (lVar12 == lVar2) break;
      FMassEntityManager::CreateEntityIndexHandle(param_1,(int)&local_48);
      if ((local_48 != 0) && (iStack_44 != 0)) {
        pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
           ((FScriptContainerElement *)&local_48 < pFVar3 + (longlong)*piVar1 * 8)) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            pTVar10 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar10;
          }
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
        }
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        *(ulonglong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
             CONCAT44(iStack_44,local_48);
      }
      lVar12 = lVar12 + 8;
    }
  }
  return __return_storage_ptr__;
}

// operator() @ 150502e70

bool __thiscall `UE::Mass::FRelationData::GetParticipants'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  wchar_t *pwVar4;
  bool bVar5;
  FString local_18;
  
  bVar5 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3784697294012547160>);
  if (bVar2) {
    if (**(char **)this == '\x02') {
      pwVar4 = L"INVALID";
    }
    else {
      pwVar4 = L"Object";
      if (**(char **)this == '\0') {
        pwVar4 = L"Subject";
      }
    }
    ::FString::FString(&local_18,pwVar4);
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3784697294012547160>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150502efc;
    }
  }
  bVar2 = false;
LAB_150502efc:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

