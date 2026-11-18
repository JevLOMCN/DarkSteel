// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// operator() @ 149c55df0

void __thiscall
`FPCGStaticMeshSpawnerElement::PrepareDataInternal'::__l42::<lambda_1>::operator()
          (void *this,UPCGManagedResource *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UPCGManagedResource *local_18 [2];
  
  if (param_1 != (UPCGManagedResource *)0x0) {
    pUVar6 = Z_Construct_UClass_UPCGManagedISMComponent_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((((iVar5 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
          &pUVar6->_padding_)) && ((param_1->Crc).bValid != false)) &&
       ((*(char *)(**(longlong **)((longlong)this + 8) + 0x11c) != '\0' &&
        ((param_1->Crc).Value == *(uint *)(**(longlong **)((longlong)this + 8) + 0x118))))) {
      pFVar2 = *(ForAnyElementType **)this;
      local_18[0] = param_1;
      if ((pFVar2->Data <= (FScriptContainerElement *)local_18) &&
         (((FScriptContainerElement *)local_18 <
           pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8 &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)))) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = *(int *)&pFVar2[1].Data;
      piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar2,piVar1);
      }
      *(int *)&pFVar2[1].Data = iVar5 + 1;
      *(UPCGManagedResource **)(pFVar2->Data + (longlong)iVar5 * 8) = local_18[0];
      return;
    }
  }
  return;
}

// operator() @ 149c595f0

void __thiscall
`FPCGStaticMeshSpawnerElement::PrepareDataInternal'::__l126::<lambda_2>::operator()
          (void *this,UPCGManagedResource *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UPCGManagedResource *local_18 [2];
  
  if (param_1 != (UPCGManagedResource *)0x0) {
    pUVar6 = Z_Construct_UClass_UPCGManagedISMComponent_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if (((((iVar5 <= *(int *)(param_1->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar6->_padding_)) && ((char)((ulonglong)param_1[0xe]._padding_ >> 0x20) != '\0')) &&
        (((char)(*(int **)((longlong)this + 8))[1] != '\0' &&
         ((int)param_1[0xe]._padding_ == **(int **)((longlong)this + 8))))) &&
       (((char)((ulonglong)param_1[0xe]._padding_ >> 0x20) != '\0' &&
        (((char)(*(int **)((longlong)this + 0x10))[1] != '\0' &&
         ((int)param_1[0xe]._padding_ == **(int **)((longlong)this + 0x10))))))) {
      pFVar2 = *(ForAnyElementType **)this;
      local_18[0] = param_1;
      if ((pFVar2->Data <= (FScriptContainerElement *)local_18) &&
         (((FScriptContainerElement *)local_18 <
           pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8 &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)))) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = *(int *)&pFVar2[1].Data;
      piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar2,piVar1);
      }
      *(int *)&pFVar2[1].Data = iVar5 + 1;
      *(UPCGManagedResource **)(pFVar2->Data + (longlong)iVar5 * 8) = local_18[0];
      return;
    }
  }
  return;
}

// AbortInternal @ 149c5c390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGStaticMeshSpawnerElement::AbortInternal(FPCGStaticMeshSpawnerElement *this,FPCGContext *param_1)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  UObject *pUVar5;
  FWeakObjectPtr *pFVar6;
  bool bVar7;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [8];
  FWeakObjectPtr local_80;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId649,"FPCGStaticMeshSpawnerElement::AbortInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGStaticMeshSpawner.cpp"
               ,0x289);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId649);
  }
  if (param_1 != (FPCGContext *)0x0) {
    pFVar6 = *(FWeakObjectPtr **)&param_1[1].AsyncObjects.Elements.field_0x28;
    iVar2 = *(int *)&param_1[1].AsyncObjects.Elements.field_0x30;
    pFVar1 = pFVar6 + iVar2;
    while( true ) {
      if (*(int *)&param_1[1].AsyncObjects.Elements.field_0x30 != iVar2) {
        `TCheckedPointerIterator<TWeakObjectPtr<UPCGManagedISMComponent,FWeakObjectPtr>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_88);
      }
      if (pFVar6 == pFVar1) break;
      local_80 = *pFVar6;
      bVar4 = FWeakObjectPtr::IsValid(&local_80);
      if (bVar4) {
        local_78._0_8_ = (FScriptContainerElement *)0x0;
        local_78._8_8_ = 0;
        local_58 = (void *)0x0;
        local_50 = 0;
        local_4c = 0x80;
        local_48 = 0xffffffff;
        local_44 = 0;
        local_38 = (void *)0x0;
        local_30 = 0;
        pUVar5 = FWeakObjectPtr::Get(&local_80);
        (**(code **)(*(longlong *)pUVar5 + 0x2b8))(pUVar5,0,local_78);
        local_30 = 0;
        if (local_38 != (void *)0x0) {
          FMemory::Free(local_38);
        }
        TSparseArray<TSparseSetElement<TSoftObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TSoftObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_78,0,local_78._8_4_);
        iVar3 = SUB84(local_78._8_8_,4);
        local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
        if (iVar3 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
        }
        local_48 = 0xffffffff;
        local_44 = 0;
        local_50 = 0;
        if (0x80 < local_4c) {
          local_4c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
        }
        if (local_58 != (void *)0x0) {
          FMemory::Free(local_58);
        }
        if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_78._0_8_);
        }
      }
      pFVar6 = pFVar6 + 1;
    }
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CanExecuteOnlyOnMainThread @ 149c5d660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGStaticMeshSpawnerElement::CanExecuteOnlyOnMainThread
          (FPCGStaticMeshSpawnerElement *this,FPCGContext *param_1)

{
  if (((param_1 != (FPCGContext *)0x0) && (param_1->CurrentPhase != Execute)) &&
     (param_1->CurrentPhase != PrepareData)) {
    return false;
  }
  return true;
}

// CreateContext @ 149c5fd00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __thiscall
FPCGStaticMeshSpawnerElement::CreateContext(FPCGStaticMeshSpawnerElement *this)

{
  FPCGStaticMeshSpawnerContext *pFVar1;
  
  pFVar1 = ::operator_new(0x460);
  if (pFVar1 != (FPCGStaticMeshSpawnerContext *)0x0) {
    memset(pFVar1,0,0x460);
    pFVar1 = FPCGStaticMeshSpawnerContext::FPCGStaticMeshSpawnerContext(pFVar1);
    return (FPCGContext *)pFVar1;
  }
  return (FPCGContext *)0x0;
}

// ExecuteInternal @ 149c6e500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGStaticMeshSpawnerElement::ExecuteInternal
          (FPCGStaticMeshSpawnerElement *this,FPCGContext *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  double dVar7;
  char cVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  UPCGStaticMeshSpawnerSettings *pUVar13;
  UObject *pUVar14;
  UClass *pUVar15;
  UStaticMesh *this_00;
  AActor *pAVar16;
  UClass *pUVar17;
  double *pdVar18;
  ulonglong uVar19;
  uint uVar20;
  FPCGPackedCustomData *pFVar21;
  undefined1 *puVar22;
  undefined8 *puVar23;
  FPackedInstanceListData *pFVar24;
  FPCGAsyncState *this_01;
  int iVar25;
  FPCGMeshInstanceList *pFVar26;
  longlong lVar27;
  ForAnyElementType FVar28;
  TBitArray<FDefaultBitArrayAllocator> *pTVar29;
  longlong *plVar30;
  uint *puVar31;
  TArray<FPCGStaticMeshSpawnerContext::FPackedInstanceListData,TSizedDefaultAllocator<32>_> *this_02
  ;
  FPCGStaticMeshSpawnerContext *pFVar32;
  TBitArray<FDefaultBitArrayAllocator> *pTVar33;
  longlong *plVar34;
  bool bVar35;
  undefined1 auStackY_2f8 [32];
  undefined1 local_2b7;
  undefined1 local_2b6;
  undefined1 local_2b5 [5];
  FPCGStaticMeshSpawnerContext *local_2b0;
  TArray<UFunction_const_*,TSizedDefaultAllocator<32>_> local_2a8;
  longlong *local_298;
  UPCGStaticMeshSpawnerSettings *local_290;
  FPCGStaticMeshSpawnerElement *local_288;
  TArray<UFunction_*,TSizedDefaultAllocator<32>_> local_280;
  int local_270;
  int local_26c;
  TBitArray<FDefaultBitArrayAllocator> *local_268;
  FPackedInstanceListData *local_260;
  FPCGAsyncState *local_258;
  UObject *local_250;
  UObject *local_248;
  longlong *local_240;
  int iStack_238;
  uint uStack_234;
  TBitArray<FDefaultBitArrayAllocator> *local_230;
  undefined4 uStack_228;
  int iStack_224;
  int local_220;
  undefined4 uStack_21c;
  int iStack_218;
  undefined4 uStack_214;
  longlong *local_210;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_208;
  undefined8 uStack_1e8;
  longlong local_1e0;
  FSoftObjectPath local_1d8;
  wchar_t *local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  longlong local_1a8;
  FSoftObjectPath local_1a0;
  TStringView<wchar_t> local_178;
  longlong local_168;
  int local_160;
  int local_15c;
  int local_158;
  double local_150 [3];
  longlong local_138;
  int local_130;
  int local_12c;
  int local_128;
  double local_120 [3];
  longlong local_108;
  FSoftObjectPath local_100;
  undefined8 local_e0;
  FSoftObjectPath local_d8;
  longlong local_b8;
  FSoftObjectPath local_b0;
  undefined4 local_74;
  TVector<double>_u_0 local_70;
  double local_58;
  double dStack_50;
  double local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  bVar35 = -1 < CpuChannel->Enabled;
  local_2b0 = (FPCGStaticMeshSpawnerContext *)param_1;
  local_288 = this;
  if (bVar35) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId404,"FPCGStaticMeshSpawnerElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGStaticMeshSpawner.cpp"
               ,0x194);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId404);
  }
  pUVar13 = FPCGContext::GetInputSettings<UPCGStaticMeshSpawnerSettings>(param_1);
  local_290 = pUVar13;
  if (((pUVar13 == (UPCGStaticMeshSpawnerSettings *)0x0) ||
      (cVar8 = (**(code **)(pUVar13->_padding_ + 0x4a8))(pUVar13), cVar8 != '\0')) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings && !Settings->ShouldExecuteOnGPU()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGStaticMeshSpawner.cpp"
                         ,0x197,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    uVar10 = (*pcVar5)();
    return (bool)uVar10;
  }
  if (*(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data != 0) {
    this_01 = &param_1->AsyncState;
    this_02 = (TArray<FPCGStaticMeshSpawnerContext::FPackedInstanceListData,TSizedDefaultAllocator<32>_>
               *)&param_1[1].InputData.InactiveOutputPinBitmask;
    local_258 = this_01;
    do {
      uVar20 = this_02->ArrayNum - 1;
      uVar11 = 0;
      if ((int)uVar20 < this_02->ArrayNum) {
        uVar11 = ~uVar20 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      pFVar24 = (FPackedInstanceListData *)
                ((this_02->AllocatorInstance).Data + (longlong)this_02->ArrayNum * 0x40 + -0x40);
      local_260 = pFVar24;
      if (((pFVar24->bSkippedDueToReuse == false) &&
          ((pFVar24->MeshInstances).ArrayNum != (pFVar24->PackedCustomData).ArrayNum)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InstanceList.bSkippedDueToReuse || InstanceList.MeshInstances.Num() == InstanceList.PackedCustomData.Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGStaticMeshSpawner.cpp"
                             ,0x19c,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      if ((pFVar24->TargetActor == (AActor *)0x0) ||
         (((uint)pFVar24->TargetActor->_padding_ >> 0x1e & 1) != 0)) {
LAB_149c6eda7:
        uVar20 = (((FPCGStaticMeshSpawnerContext *)param_1)->MeshInstancesData).ArrayNum - 1;
        uVar11 = 0;
        if ((int)uVar20 < this_02->ArrayNum) {
          uVar11 = ~uVar20 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        TArray<FPCGStaticMeshSpawnerContext::FPackedInstanceListData,TSizedDefaultAllocator<32>_>::
        RemoveAtSwapImpl(this_02,uVar20);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,&this_02->AllocatorInstance,this_02->ArrayNum,&this_02->ArrayMax);
        ((FPCGStaticMeshSpawnerContext *)param_1)->CurrentDataIndex = 0;
      }
      else {
        uVar11 = ((FPCGStaticMeshSpawnerContext *)param_1)->CurrentDataIndex;
        if ((int)uVar11 < (pFVar24->MeshInstances).ArrayNum) {
          do {
            uVar20 = 0;
            if ((int)uVar11 < (pFVar24->MeshInstances).ArrayNum) {
              uVar20 = ~uVar11 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              uVar10 = (*pcVar5)();
              return (bool)uVar10;
            }
            iVar3 = ((FPCGStaticMeshSpawnerContext *)param_1)->CurrentDataIndex;
            pFVar26 = (FPCGMeshInstanceList *)
                      ((pFVar24->MeshInstances).AllocatorInstance.Data +
                      (longlong)(int)uVar11 * 0x2b0);
            if ((iVar3 < 0) || ((pFVar24->PackedCustomData).ArrayNum <= iVar3)) {
              pFVar21 = (FPCGPackedCustomData *)0x0;
            }
            else {
              pFVar21 = (FPCGPackedCustomData *)
                        ((pFVar24->PackedCustomData).AllocatorInstance.Data + (longlong)iVar3 * 0x18
                        );
            }
            SpawnStaticMeshInstances
                      (this,(FPCGStaticMeshSpawnerContext *)param_1,pFVar24,pFVar26,pFVar21);
            plVar34 = &(pFVar26->Descriptor)._padding_;
            pUVar14 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                ((TPersistentObjectPtr<FSoftObjectPath> *)plVar34);
            if (pUVar14 != (UObject *)0x0) {
              pUVar15 = Z_Construct_UClass_UStaticMesh_NoRegister();
              iVar3 = (int)pUVar15->_padding_;
              if (((iVar3 <= *(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38)) &&
                  ((longlong *)
                   *(undefined1 **)
                    (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) + (longlong)iVar3 * 8)
                   == &pUVar15->_padding_)) && (pUVar13->bApplyMeshBoundsToPoints != false)) {
                local_1a8 = *plVar34;
                FSoftObjectPath::FSoftObjectPath
                          (&local_1a0,(FSoftObjectPath *)&(pFVar26->Descriptor)._padding_);
                local_1e0 = local_1a8;
                FSoftObjectPath::FSoftObjectPath(&local_1d8,&local_1a0);
                local_108 = local_1e0;
                FSoftObjectPath::FSoftObjectPath(&local_100,&local_1d8);
                uVar11 = ::GetTypeHash(&local_100);
                if (local_100.SubPathString.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_100.SubPathString.Data.AllocatorInstance.Data);
                }
                if (*(int *)&(((FPCGStaticMeshSpawnerContext *)param_1)->MeshToOutPoints).field_0x8
                    != *(int *)&(((FPCGStaticMeshSpawnerContext *)param_1)->MeshToOutPoints).
                                field_0x34) {
                  puVar4 = *(undefined1 **)
                            &(((FPCGStaticMeshSpawnerContext *)param_1)->MeshToOutPoints).field_0x40
                  ;
                  puVar22 = &(((FPCGStaticMeshSpawnerContext *)param_1)->MeshToOutPoints).field_0x38
                  ;
                  if (puVar4 != (undefined1 *)0x0) {
                    puVar22 = puVar4;
                  }
                  for (iVar3 = *(int *)(puVar22 +
                                       (ulonglong)
                                       (*(int *)&(((FPCGStaticMeshSpawnerContext *)param_1)->
                                                 MeshToOutPoints).field_0x48 - 1U & uVar11) * 4);
                      iVar3 != -1;
                      iVar3 = *(int *)((longlong)iVar3 * 0x80 + 0x78 +
                                      *(longlong *)
                                       &((FPCGStaticMeshSpawnerContext *)param_1)->MeshToOutPoints))
                  {
                    local_b8 = local_1e0;
                    FSoftObjectPath::FSoftObjectPath(&local_b0,&local_1d8);
                    puVar23 = (undefined8 *)
                              (*(longlong *)
                                &((FPCGStaticMeshSpawnerContext *)param_1)->MeshToOutPoints +
                              (longlong)iVar3 * 0x80);
                    local_e0 = *puVar23;
                    FSoftObjectPath::FSoftObjectPath(&local_d8,(FSoftObjectPath *)(puVar23 + 1));
                    bVar9 = FSoftObjectPath::operator==(&local_d8,&local_b0);
                    if (local_d8.SubPathString.Data.AllocatorInstance.Data !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_d8.SubPathString.Data.AllocatorInstance.Data);
                    }
                    if (local_b0.SubPathString.Data.AllocatorInstance.Data !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_b0.SubPathString.Data.AllocatorInstance.Data);
                    }
                    if (bVar9) {
                      if (iVar3 != -1) {
                        lVar27 = (longlong)iVar3 * 0x80 +
                                 *(longlong *)
                                  &((FPCGStaticMeshSpawnerContext *)param_1)->MeshToOutPoints;
                        if (local_1d8.SubPathString.Data.AllocatorInstance.Data !=
                            (FScriptContainerElement *)0x0) {
                          FMemory::Free(local_1d8.SubPathString.Data.AllocatorInstance.Data);
                        }
                        if (lVar27 == 0) goto LAB_149c6e91c;
                        plVar30 = (longlong *)(lVar27 + 0x28);
                        local_298 = plVar30;
                        if (local_1a0.SubPathString.Data.AllocatorInstance.Data !=
                            (FScriptContainerElement *)0x0) {
                          FMemory::Free(local_1a0.SubPathString.Data.AllocatorInstance.Data);
                        }
                        goto LAB_149c6e932;
                      }
                      break;
                    }
                  }
                }
                if (local_1d8.SubPathString.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1d8.SubPathString.Data.AllocatorInstance.Data);
                }
LAB_149c6e91c:
                if (local_1a0.SubPathString.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1a0.SubPathString.Data.AllocatorInstance.Data);
                }
                plVar30 = (longlong *)0x0;
                local_298 = (longlong *)0x0;
LAB_149c6e932:
                pUVar13 = local_290;
                if (plVar30 != (longlong *)0x0) {
                  this_00 = (UStaticMesh *)
                            TPersistentObjectPtr<FSoftObjectPath>::Get
                                      ((TPersistentObjectPtr<FSoftObjectPath> *)plVar34);
                  if (this_00 == (UStaticMesh *)0x0) {
LAB_149c6e96e:
                    this_00 = (UStaticMesh *)0x0;
                  }
                  else {
                    pUVar15 = Z_Construct_UClass_UStaticMesh_NoRegister();
                    iVar3 = (int)pUVar15->_padding_;
                    if ((*(int *)(this_00->_padding_ + 0x38) < iVar3) ||
                       ((longlong *)
                        *(undefined1 **)
                         (*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
                        &pUVar15->_padding_)) goto LAB_149c6e96e;
                  }
                  UStaticMesh::GetBoundingBox(this_00,(TBox<double> *)&local_70._s_0);
                  iVar3 = (int)plVar30[5];
                  pTVar33 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar30 + 2);
                  iStack_238 = 0;
                  local_220 = 0;
                  uStack_234 = 1;
                  iStack_224 = 0;
                  if (iVar3 != 0) {
                    pTVar29 = pTVar33;
                    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar30[4] !=
                        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                      pTVar29 = (TBitArray<FDefaultBitArrayAllocator> *)plVar30[4];
                    }
                    uVar11 = *(uint *)(pTVar29->AllocatorInstance).InlineData;
                    while (uVar11 == 0) {
                      iStack_238 = iStack_238 + 1;
                      local_220 = local_220 + 0x20;
                      iStack_224 = iVar3;
                      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_238)
                      goto LAB_149c6ea00;
                      uVar11 = *(uint *)((pTVar29->AllocatorInstance).InlineData +
                                        (longlong)iStack_238 * 4);
                    }
                    uStack_234 = ~(uVar11 - 1) & uVar11;
                    uVar19 = (ulonglong)uStack_234 * 2 + 1;
                    lVar27 = 0x3f;
                    if (uVar19 != 0) {
                      for (; uVar19 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                      }
                    }
                    local_270 = (int)lVar27;
                    iStack_224 = local_220 + -1 + local_270;
                    if (iVar3 < iStack_224) {
                      iStack_224 = iVar3;
                    }
                  }
LAB_149c6ea00:
                  uVar11 = *(uint *)(plVar30 + 5);
                  uStack_21c = local_74;
                  uVar20 = uVar11 & 0xffffffe0;
                  iStack_218 = (int)plVar30[1] - *(int *)((longlong)plVar30 + 0x34);
                  TStack_208._padding_ = CONCAT44(uStack_234,iStack_238);
                  uStack_228 = 0xffffffff;
                  TStack_208.CurrentBitIndex = iStack_224;
                  TStack_208.UnvisitedBitMask = 0xffffffff;
                  iVar25 = (int)uVar11 >> 5;
                  TStack_208._28_4_ = local_74;
                  TStack_208.BaseBitIndex = local_220;
                  uStack_1e8 = CONCAT44(uStack_214,iStack_218);
                  local_268 = pTVar33;
                  local_240 = plVar30;
                  local_230 = pTVar33;
                  local_210 = plVar30;
                  TStack_208.Array = pTVar33;
                  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                         ,0x7af,L""), bVar9)) {
                    pcVar5 = (code *)swi(3);
                    uVar10 = (*pcVar5)();
                    return (bool)uVar10;
                  }
                  uVar12 = *(uint *)(plVar30 + 5);
                  if (uVar11 != uVar12) {
                    pTVar29 = pTVar33;
                    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar30[4] !=
                        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                      pTVar29 = (TBitArray<FDefaultBitArrayAllocator> *)plVar30[4];
                    }
                    uVar11 = -1 << ((byte)uVar11 & 0x1f) &
                             *(uint *)((pTVar29->AllocatorInstance).InlineData +
                                      (longlong)iVar25 * 4);
                    while (uVar11 == 0) {
                      iVar25 = iVar25 + 1;
                      uVar20 = uVar20 + 0x20;
                      uVar11 = uVar12;
                      if ((int)(((int)(uVar12 - 1) >> 0x1f & 0x1fU) + (uVar12 - 1)) >> 5 < iVar25)
                      goto LAB_149c6eb00;
                      uVar11 = *(uint *)((pTVar29->AllocatorInstance).InlineData +
                                        (longlong)iVar25 * 4);
                    }
                    uVar19 = (ulonglong)(~(uVar11 - 1) & uVar11) * 2 + 1;
                    lVar27 = 0x3f;
                    if (uVar19 != 0) {
                      for (; uVar19 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                      }
                    }
                    local_26c = (int)lVar27;
                    uVar11 = local_26c + -1 + uVar20;
                    if ((int)uVar12 < (int)uVar11) {
                      uVar11 = uVar12;
                    }
                  }
LAB_149c6eb00:
                  while( true ) {
                    plVar34 = local_210;
                    if ((int)local_210[1] - *(int *)((longlong)local_210 + 0x34) != (int)uStack_1e8)
                    {
                      local_2b7 = 0;
                      `TSparseArray<TSparseSetElement<TTuple<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2b7);
                    }
                    if (((TStack_208.CurrentBitIndex == uVar11) && (TStack_208.Array == pTVar33)) &&
                       (pFVar24 = local_260, param_1 = (FPCGContext *)local_2b0, pUVar13 = local_290
                       , plVar34 == plVar30)) break;
                    plVar34 = (longlong *)((longlong)TStack_208.CurrentBitIndex * 0x20 + *plVar34);
                    if ((*plVar34 == 0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("It.Key",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGStaticMeshSpawner.cpp"
                                           ,0x1b1,L""), bVar9)) {
                      pcVar5 = (code *)swi(3);
                      uVar10 = (*pcVar5)();
                      return (bool)uVar10;
                    }
                    (**(code **)(*(longlong *)*plVar34 + 0x4d0))((longlong *)*plVar34,&local_168,1);
                    (**(code **)(*(longlong *)*plVar34 + 0x4d8))((longlong *)*plVar34,&local_138,1);
                    puVar31 = (uint *)plVar34[1];
                    lVar27 = plVar34[2];
                    puVar1 = puVar31 + (int)lVar27;
                    while( true ) {
                      if ((int)plVar34[2] != (int)lVar27) {
                        local_2b6 = 0;
                        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::
                        operator()(&local_2b6);
                      }
                      if (puVar31 == puVar1) break;
                      uVar20 = *puVar31;
                      uVar12 = 0;
                      if ((int)uVar20 < local_158) {
                        uVar12 = ~uVar20 >> 0x1f;
                      }
                      if ((uVar12 == 0) &&
                         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < NumElements)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                             ,0x8b,
                                             L"Array index out of bounds: %lld from an array of size %lld"
                                            ), bVar9)) {
                        pcVar5 = (code *)swi(3);
                        uVar10 = (*pcVar5)();
                        return (bool)uVar10;
                      }
                      uVar6 = local_70._s_0.Y;
                      if (uVar20 == (int)uVar20 % local_15c) {
                        pdVar18 = (double *)
                                  ((longlong)((int)uVar20 % local_15c) * (longlong)local_160 +
                                  local_168);
                      }
                      else {
                        pdVar18 = local_150;
                      }
                      *pdVar18 = local_70._s_0.X;
                      pdVar18[1] = (double)uVar6;
                      pdVar18[2] = local_70._s_0.Z;
                      uVar12 = 0;
                      if ((int)uVar20 < local_128) {
                        uVar12 = ~uVar20 >> 0x1f;
                      }
                      if ((uVar12 == 0) &&
                         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < NumElements)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                             ,0x8b,
                                             L"Array index out of bounds: %lld from an array of size %lld"
                                            ), bVar9)) {
                        pcVar5 = (code *)swi(3);
                        uVar10 = (*pcVar5)();
                        return (bool)uVar10;
                      }
                      dVar7 = dStack_50;
                      if (uVar20 == (int)uVar20 % local_12c) {
                        pdVar18 = (double *)
                                  ((longlong)local_130 * (longlong)((int)uVar20 % local_12c) +
                                  local_138);
                      }
                      else {
                        pdVar18 = local_120;
                      }
                      puVar31 = puVar31 + 1;
                      *pdVar18 = local_58;
                      pdVar18[1] = dVar7;
                      pdVar18[2] = local_48;
                    }
                    TStack_208.UnvisitedBitMask =
                         TStack_208.UnvisitedBitMask & ~TStack_208._padding_._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_208);
                    plVar30 = local_298;
                    pTVar33 = local_268;
                  }
                }
              }
            }
            this_01 = local_258;
            ((FPCGStaticMeshSpawnerContext *)param_1)->CurrentDataIndex =
                 ((FPCGStaticMeshSpawnerContext *)param_1)->CurrentDataIndex + 1;
            bVar9 = FPCGAsyncState::ShouldStop(local_258);
            this = local_288;
          } while ((!bVar9) &&
                  (uVar11 = ((FPCGStaticMeshSpawnerContext *)param_1)->CurrentDataIndex,
                  (int)uVar11 < (pFVar24->MeshInstances).ArrayNum));
          this_02 = &((FPCGStaticMeshSpawnerContext *)param_1)->MeshInstancesData;
        }
        if (((FPCGStaticMeshSpawnerContext *)param_1)->CurrentDataIndex ==
            (pFVar24->MeshInstances).ArrayNum) goto LAB_149c6eda7;
      }
      bVar9 = FPCGAsyncState::ShouldStop(this_01);
    } while ((!bVar9) &&
            ((((FPCGStaticMeshSpawnerContext *)param_1)->MeshInstancesData).ArrayNum != 0));
  }
  iVar3 = (((FPCGStaticMeshSpawnerContext *)param_1)->MeshInstancesData).ArrayNum;
  if (iVar3 != 0) goto LAB_149c6f020;
  pUVar14 = TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&pUVar13->TargetActor);
  if (pUVar14 == (UObject *)0x0) {
LAB_149c6eedc:
    pFVar32 = local_2b0;
    pAVar16 = FPCGContext::GetTargetActor((FPCGContext *)local_2b0,(UPCGSpatialData *)0x0);
  }
  else {
    pUVar15 = Z_Construct_UClass_AActor_NoRegister();
    iVar25 = (int)pUVar15->_padding_;
    if ((*(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38) < iVar25) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) + (longlong)iVar25 * 8) !=
        &pUVar15->_padding_)) goto LAB_149c6eedc;
    pAVar16 = (AActor *)
              TPersistentObjectPtr<FSoftObjectPath>::Get
                        ((TPersistentObjectPtr<FSoftObjectPath> *)&pUVar13->TargetActor);
    if (pAVar16 == (AActor *)0x0) {
LAB_149c6eed3:
      pAVar16 = (AActor *)0x0;
      pFVar32 = local_2b0;
    }
    else {
      pUVar15 = Z_Construct_UClass_AActor_NoRegister();
      iVar25 = (int)pUVar15->_padding_;
      if ((*(int *)(pAVar16->_padding_ + 0x38) < iVar25) ||
         (pFVar32 = local_2b0,
         (longlong *)
         *(undefined1 **)(*(longlong *)(pAVar16->_padding_ + 0x30) + (longlong)iVar25 * 8) !=
         &pUVar15->_padding_)) goto LAB_149c6eed3;
    }
  }
  if (pAVar16 != (AActor *)0x0) {
    iStack_1b0 = 0x15;
    local_1b8 = L"PrototypeWithNoParams";
    pUVar15 = Z_Construct_UClass_UPCGFunctionPrototypes_NoRegister();
    pUVar17 = Z_Construct_UClass_UFunction_NoRegister();
    local_178._12_4_ = uStack_1ac;
    local_178.Size = iStack_1b0;
    local_178.DataPtr = local_1b8;
    local_250 = StaticFindObject(pUVar17,(UObject *)pUVar15,&local_178,None);
    local_2a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2a8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,1,0,&local_2a8.AllocatorInstance,1,&local_2a8.ArrayMax);
    *(UObject **)local_2a8.AllocatorInstance.Data = local_250;
    local_248 = (UObject *)pAVar16->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_248 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_248);
    }
    PCGHelpers::FindUserFunctions
              (&local_280,(TSubclassOf<UObject>)&local_248,&pUVar13->PostProcessFunctionNames,
               &local_2a8,(FPCGContext *)pFVar32);
    if (local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.AllocatorInstance.Data);
    }
    iVar25 = local_280.ArrayNum;
    uVar19 = (ulonglong)local_280.ArrayNum;
    pFVar2 = local_280.AllocatorInstance.Data + uVar19 * 8;
    FVar28.Data = local_280.AllocatorInstance.Data;
    while( true ) {
      if ((uint)uVar19 != iVar25) {
        `TCheckedPointerIterator<UFunction_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_2b5);
      }
      if (FVar28.Data == pFVar2) break;
      (**(code **)(pAVar16->_padding_ + 0x260))(pAVar16,*(undefined8 *)FVar28.Data,0);
      uVar19 = (ulonglong)(uint)local_280.ArrayNum;
      FVar28.Data = FVar28.Data + 8;
    }
    if (local_280.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.AllocatorInstance.Data);
    }
  }
LAB_149c6f020:
  if (bVar35) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return iVar3 == 0;
}

// IsCacheable @ 149c80680

bool __thiscall
FPCGStaticMeshSpawnerElement::IsCacheable(FPCGStaticMeshSpawnerElement *this,UPCGSettings *param_1)

{
  return false;
}

// PrepareDataInternal @ 149c82210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPCGStaticMeshSpawnerElement::PrepareDataInternal
          (FPCGStaticMeshSpawnerElement *this,FPCGContext *param_1)

{
  FPCGCrc *pFVar1;
  TArray<FPCGStaticMeshSpawnerContext::FPackedInstanceListData,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  UPCGMetadata *this_00;
  UPCGMeshSelectorBase *pUVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  code *pcVar10;
  TConsoleVariableData<bool> *pTVar11;
  FPCGStaticMeshSpawnerContext *pFVar12;
  FPCGStaticMeshSpawnerContext *pFVar13;
  FName FVar14;
  FPCGStaticMeshSpawnerElement *pFVar15;
  FPCGMetadataDomainID FVar16;
  undefined1 uVar17;
  FScriptContainerElement FVar18;
  uint uVar19;
  int iVar20;
  undefined4 uVar21;
  UPCGStaticMeshSpawnerSettings *pUVar22;
  FText *pFVar23;
  UPCGComponent *pUVar24;
  UClass *pUVar25;
  longlong lVar26;
  UPCGBasePointData *pUVar27;
  UObject *pUVar28;
  AActor *pAVar29;
  FPCGTaggedData *this_01;
  UPCGBasePointData *this_02;
  FText *pFVar30;
  FTextFormat *pFVar31;
  FString *pFVar32;
  TRefCountPtr<ITextData> TVar33;
  ulonglong uVar34;
  char cVar35;
  uint uVar36;
  uint uVar37;
  longlong *plVar38;
  int *piVar39;
  TArray<FPCGPackedCustomData,TSizedDefaultAllocator<32>_> *this_03;
  FScriptContainerElement *pFVar40;
  FObjectPtr_u_0 *pFVar41;
  bool bVar42;
  undefined1 auStackY_438 [32];
  FPCGStaticMeshSpawnerContext *local_3e8;
  uint local_3e0;
  char local_3dc;
  char local_3db;
  undefined1 local_3da;
  undefined1 local_3d9;
  UPCGComponent *local_3d8;
  UPCGStaticMeshSpawnerSettings *local_3d0;
  undefined1 local_3c8;
  undefined1 local_3c7;
  undefined1 local_3c6 [6];
  UPCGBasePointData *local_3c0;
  FPCGStaticMeshSpawnerContext *local_3b8;
  undefined4 local_3b0;
  uint uStack_3ac;
  undefined8 local_3a8;
  FName local_3a0;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_398;
  longlong *local_388;
  undefined8 local_380;
  longlong *local_378;
  undefined8 local_370;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_368;
  FObjectPtr_u_0 local_358;
  AActor *local_350;
  FPCGStaticMeshSpawnerContext *local_348;
  FPCGDataCollection local_340;
  FPCGStaticMeshSpawnerElement *local_310;
  code *local_308;
  longlong ***local_300;
  code *local_2f8;
  longlong ***local_2f0;
  FPCGDataCollection *local_2e8;
  UPCGStaticMeshSpawnerSettings *local_2e0;
  IPCGGraphExecutionSource *local_2d8;
  longlong **local_2d0;
  FPCGStaticMeshSpawnerContext **local_2c8;
  UPCGStaticMeshSpawnerSettings *local_2c0;
  FPCGDataCollection *local_2b8;
  UPCGStaticMeshSpawnerSettings *local_2b0;
  IPCGGraphExecutionSource *local_2a8;
  longlong **local_2a0;
  undefined8 *local_298;
  undefined4 *local_290;
  FPCGStaticMeshSpawnerContext **local_288;
  FString local_280;
  FText local_270;
  FString local_260;
  FString local_250;
  FText local_240;
  FText local_230;
  FString local_220;
  FString local_210;
  FText local_200;
  FText local_1f0;
  FString local_1e0;
  FString local_1d0;
  FText local_1c0;
  FString local_1b0;
  FString local_1a0;
  FText local_190;
  FName local_180;
  FPCGMetadataDomainID FStack_178;
  FPCGAttributeIdentifier local_168;
  FName local_148;
  FPCGMetadataDomainID FStack_140;
  FPCGAttributeIdentifier local_128;
  FText local_108;
  FString local_f8;
  FPCGInitializeFromDataParams local_e8;
  FText local_a8;
  FTextFormat local_98;
  FString local_88;
  TVector<double>_u_0 local_78;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_47;
  undefined2 local_43;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_438;
  uVar36 = 0;
  local_3e0 = 0;
  bVar42 = CpuChannel->Enabled < 0;
  local_310 = this;
  if (bVar42) {
    local_3dc = '\0';
  }
  else {
    local_3dc = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId121,"FPCGStaticMeshSpawnerElement::PrepareDataInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGStaticMeshSpawner.cpp"
               ,0x79);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId121);
  }
  cVar35 = !bVar42;
  local_3e8 = (FPCGStaticMeshSpawnerContext *)param_1;
  pUVar22 = FPCGContext::GetInputSettings<UPCGStaticMeshSpawnerSettings>(param_1);
  local_3d0 = pUVar22;
  if ((pUVar22 == (UPCGStaticMeshSpawnerSettings *)0x0) &&
     (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGStaticMeshSpawner.cpp"
                          ,0x7d,L""), bVar42)) {
    pcVar10 = (code *)swi(3);
    uVar17 = (*pcVar10)();
    return (bool)uVar17;
  }
  pFVar12 = local_3e8;
  if ((pUVar22->MeshSelectorParameters).field0_0x0.DebugPtr == (UPCGMeshSelectorBase *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      pFVar23 = FText::AsLocalizable_Advanced_LocText
                          (&local_190,L"PCGStaticMeshSpawnerElement",L"InvalidMeshSelectorInstance",
                           L"Invalid MeshSelector instance, try reselecting the MeshSelector type");
      FText::ToString(pFVar23);
      if (local_3e8 != (FPCGStaticMeshSpawnerContext *)0x0) {
        uVar36 = 1;
        FPCGContext::GetTaskName((FPCGContext *)local_3e8,&local_1a0);
        if (local_3e8 != (FPCGStaticMeshSpawnerContext *)0x0) {
          uVar36 = 3;
          FPCGContext::GetExecutionSourceName((FPCGContext *)local_3e8,&local_1b0);
        }
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (((uVar36 & 2) != 0) &&
         (uVar36 = uVar36 & 0xfffffffd,
         local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
      }
      if (((uVar36 & 1) != 0) &&
         (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
      }
      if (local_190.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
      }
    }
  }
  else if (((((IPCGGraphExecutionSource *)local_3e8->_padding_ != (IPCGGraphExecutionSource *)0x0)
            && (bVar42 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_3e8->_padding_), bVar42))
           && ((IPCGGraphExecutionSource *)pFVar12->_padding_ != (IPCGGraphExecutionSource *)0x0))
          && (pUVar24 = (UPCGComponent *)
                        (**(code **)((longlong)*(IPCGGraphExecutionSource *)pFVar12->_padding_ + 8))
                                  (), pUVar24 != (UPCGComponent *)0x0)) {
    pUVar25 = Z_Construct_UClass_UPCGComponent_NoRegister();
    iVar20 = (int)pUVar25->_padding_;
    if ((iVar20 <= *(int *)(pUVar24->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar20 * 8) ==
        &pUVar25->_padding_)) {
      if ((UPCGNode *)local_3e8->_padding_ == (UPCGNode *)0x0) {
LAB_149c824a0:
        local_3db = '\0';
      }
      else {
        bVar42 = UPCGNode::IsOutputPinConnected
                           ((UPCGNode *)local_3e8->_padding_,&PCGPinConstants::DefaultOutputLabel);
        local_3db = '\x01';
        if (!bVar42) goto LAB_149c824a0;
      }
      pTVar11 = CVarAllowISMReuse.Ref;
      local_3b8 = local_3e8;
      local_3d8 = pUVar24;
      if (local_3e8->bReuseCheckDone == false) {
        bVar42 = IsInParallelGameThread();
        if ((bVar42) || (bVar42 = IsInGameThread(), bVar42)) {
          lVar26 = 0;
        }
        else {
          lVar26 = 1;
        }
        pFVar12 = local_3e8;
        local_3d8 = pUVar24;
        if (pTVar11->ShadowedValue[lVar26] != false) {
          if (((FPCGCrc *)&local_3e8->_padding_)->bValid == false) {
            pFVar1 = (FPCGCrc *)&local_3e8->_padding_;
            pcVar10 = *(code **)((longlong)*this + 0x40);
            if (((IPCGGraphExecutionSource *)local_3e8->_padding_ == (IPCGGraphExecutionSource *)0x0
                ) || (bVar42 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_3e8->_padding_),
                     !bVar42)) {
              local_2d8 = (IPCGGraphExecutionSource *)0x0;
            }
            else {
              local_2d8 = (IPCGGraphExecutionSource *)pFVar12->_padding_;
            }
            local_2e8 = (FPCGDataCollection *)&local_3e8->_padding_;
            local_2e0 = pUVar22;
            if ((local_2e8 == (FPCGDataCollection *)0x0) &&
               (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InputData",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGElement.h"
                                    ,0x7c,L""), bVar42)) {
              pcVar10 = (code *)swi(3);
              uVar17 = (*pcVar10)();
              return (bool)uVar17;
            }
            (*pcVar10)(local_310,&local_2e8,pFVar1);
          }
          local_3d8 = pUVar24;
          if (((FPCGCrc *)&local_3e8->_padding_)->bValid != false) {
            local_388 = (longlong *)0x0;
            local_380 = 0;
            local_2d0 = &local_388;
            local_2c8 = &local_3e8;
            local_300 = &local_2d0;
            local_308 = UE::Core::Private::Function::
                        TFunctionRefCaller<`FPCGStaticMeshSpawnerElement::PrepareDataInternal'::__l42::<lambda_1>,void,UPCGManagedResource_*>
                        ::Call;
            local_2c0 = pUVar22;
            UPCGComponent::ForEachManagedResource
                      (pUVar24,(TFunctionRef<void___cdecl(UPCGManagedResource_*)> *)&local_308);
            iVar20 = (int)local_380;
            plVar3 = local_388 + (int)local_380;
            plVar38 = local_388;
            local_3d8 = pUVar24;
            while( true ) {
              if ((int)local_380 != iVar20) {
                local_3da = 0;
                `TCheckedPointerIterator<UPCGManagedISMComponent_*,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_3da);
              }
              pFVar12 = local_3e8;
              if (plVar38 == plVar3) break;
              plVar6 = (longlong *)*plVar38;
              if (((char)plVar6[6] == '\0') && (pUVar22->bWarnOnIdenticalSpawn != false)) {
                pFVar23 = FText::AsLocalizable_Advanced_LocText
                                    (&local_108,L"PCGStaticMeshSpawnerElement",L"IdenticalISMCSpawn"
                                     ,
                                     L"Identical ISM Component spawn occurred. It may be beneficial to re-check graph logic for identical spawn conditions (same mesh descriptor at same location, etc) or repeated nodes."
                                    );
                PCGLog::LogWarningOnGraph(pFVar23,(FPCGContext *)pFVar12);
                if (local_108.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
                }
              }
              (**(code **)(*plVar6 + 0x2e0))(plVar6);
              plVar38 = plVar38 + 1;
            }
            if ((int)local_380 != 0) {
              local_3b8->bSkippedDueToReuse = true;
            }
            uVar36 = local_3e0;
            if (local_388 != (longlong *)0x0) {
              FMemory::Free(local_388);
              uVar36 = local_3e0;
            }
          }
          local_3e8->bReuseCheckDone = true;
        }
      }
      pUVar24 = local_3d8;
      if ((local_3db != '\0') || (local_3b8->bSkippedDueToReuse == false)) {
        FPCGDataCollection::GetInputsByPin
                  ((FPCGDataCollection *)&local_3e8->_padding_,&local_398,
                   &PCGPinConstants::DefaultInputLabel);
        local_348 = (FPCGStaticMeshSpawnerContext *)&local_3e8->_padding_;
        if (local_3e8->CurrentInputIndex < local_398.ArrayNum) {
          do {
            if (local_3e8->bCurrentInputSetup == false) {
              uVar37 = local_3e8->CurrentInputIndex;
              uVar19 = 0;
              if ((int)uVar37 < local_398.ArrayNum) {
                uVar19 = ~uVar37 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar42)) {
                pcVar10 = (code *)swi(3);
                uVar17 = (*pcVar10)();
                return (bool)uVar17;
              }
              pFVar41 = (FObjectPtr_u_0 *)
                        (local_398.AllocatorInstance.Data + (longlong)(int)uVar37 * 0x78);
              local_358 = (FObjectPtr_u_0)pFVar41->Handle;
              if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c8279e:
                if ((UPCGSpatialData *)local_358.Handle == (UPCGSpatialData *)0x0)
                goto LAB_149c834e1;
                pUVar25 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
                bVar42 = FObjectPtr::IsA((FObjectPtr *)&local_358,pUVar25);
                if ((!bVar42) || ((UPCGSpatialData *)local_358.Handle == (UPCGSpatialData *)0x0))
                goto LAB_149c834e1;
                local_48 = 0;
                local_47 = 0;
                local_43 = 0;
                local_78._s_0.X = 0.0;
                local_78._s_0.Y = 0.0;
                local_41 = 0;
                local_78._s_0.Z = 0.0;
                uStack_60 = 0;
                local_58 = 0;
                uStack_50 = 0;
                pUVar27 = UPCGSpatialData::ToBasePointData
                                    ((UPCGSpatialData *)local_358.Handle,(FPCGContext *)local_3e8,
                                     (TBox<double> *)&local_78._s_0);
                pUVar22 = local_3d0;
                local_3c0 = pUVar27;
                if (pUVar27 == (UPCGBasePointData *)0x0) {
                  if ((byte)LogPCG._0_1_ < 2) goto LAB_149c835f4;
                  pFVar23 = FText::AsLocalizable_Advanced_LocText
                                      (&local_270,L"PCGStaticMeshSpawnerElement",
                                       L"NoPointDataInInput",L"Unable to get point data from input")
                  ;
                  FText::ToString(pFVar23);
                  uVar37 = uVar36;
                  if (local_3e8 != (FPCGStaticMeshSpawnerContext *)0x0) {
                    local_3e0 = uVar36 | 0x10;
                    FPCGContext::GetTaskName((FPCGContext *)local_3e8,&local_280);
                    uVar37 = uVar36 | 0x10;
                    if (local_3e8 != (FPCGStaticMeshSpawnerContext *)0x0) {
                      uVar37 = uVar36 | 0x30;
                      local_3e0 = uVar37;
                      FPCGContext::GetExecutionSourceName((FPCGContext *)local_3e8,&local_f8);
                    }
                  }
                  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                  if (((uVar37 & 0x20) != 0) &&
                     (uVar37 = uVar37 & 0xffffffdf, local_3e0 = uVar37,
                     local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
                  }
                  TVar33.Reference = local_270.TextData.Reference;
                  if (((uVar37 & 0x10) != 0) &&
                     (local_3e0 = uVar37 & 0xffffffef,
                     local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                    FMemory::Free(local_280.Data.AllocatorInstance.Data);
                    TVar33.Reference = local_270.TextData.Reference;
                  }
                  goto LAB_149c835e9;
                }
                pUVar28 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                    ((TPersistentObjectPtr<FSoftObjectPath> *)
                                     &local_3d0->TargetActor);
                if (pUVar28 == (UObject *)0x0) {
LAB_149c829c7:
                  pAVar29 = FPCGContext::GetTargetActor
                                      ((FPCGContext *)local_3e8,(UPCGSpatialData *)0x0);
                  local_350 = pAVar29;
                }
                else {
                  pUVar25 = Z_Construct_UClass_AActor_NoRegister();
                  iVar20 = (int)pUVar25->_padding_;
                  if ((*(int *)(*(longlong *)&pUVar28->field_0x10 + 0x38) < iVar20) ||
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(*(longlong *)&pUVar28->field_0x10 + 0x30) +
                       (longlong)iVar20 * 8) != &pUVar25->_padding_)) goto LAB_149c829c7;
                  pAVar29 = (AActor *)
                            TPersistentObjectPtr<FSoftObjectPath>::Get
                                      ((TPersistentObjectPtr<FSoftObjectPath> *)
                                       &pUVar22->TargetActor);
                  if (pAVar29 == (AActor *)0x0) {
LAB_149c829bf:
                    pAVar29 = (AActor *)0x0;
                    local_350 = (AActor *)0x0;
                    local_3d8 = pUVar24;
                  }
                  else {
                    local_3d8 = pUVar24;
                    local_350 = pAVar29;
                    pUVar25 = Z_Construct_UClass_AActor_NoRegister();
                    iVar20 = (int)pUVar25->_padding_;
                    if ((*(int *)(pAVar29->_padding_ + 0x38) < iVar20) ||
                       (local_3d8 = pUVar24,
                       (longlong *)
                       *(undefined1 **)
                        (*(longlong *)(pAVar29->_padding_ + 0x30) + (longlong)iVar20 * 8) !=
                       &pUVar25->_padding_)) goto LAB_149c829bf;
                  }
                }
                pUVar24 = local_3d8;
                pTVar11 = CVarAllowISMReuse.Ref;
                if (pAVar29 != (AActor *)0x0) {
                  local_3b0 = 0;
                  uStack_3ac = uStack_3ac & 0xffffff00;
                  if (local_3b8->bSkippedDueToReuse == false) {
                    bVar42 = IsInParallelGameThread();
                    if (bVar42) {
LAB_149c82b36:
                      lVar26 = 0;
                    }
                    else {
                      bVar42 = IsInGameThread();
                      lVar26 = 1;
                      if (bVar42) goto LAB_149c82b36;
                    }
                    if (pTVar11->ShadowedValue[lVar26] != false) {
                      if ((((FPCGCrc *)&local_3e8->_padding_)->bValid == false) &&
                         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Context->DependenciesCrc.IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGStaticMeshSpawner.cpp"
                                              ,0xec,L""), bVar42)) {
                        pcVar10 = (code *)swi(3);
                        uVar17 = (*pcVar10)();
                        return (bool)uVar17;
                      }
                      UPCGSettings::GetSettingsCrc((UPCGSettings *)local_3d0);
                      if ((local_3a8._4_1_ == '\0') &&
                         (bVar42 = UE::Assert::Private::ExecCheckImplInternal
                                             (&bGEnsureHasExecuted<3915437163654676719>,false,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGStaticMeshSpawner.cpp"
                                              ,0xef,"SettingsCrc.IsValid()"), bVar42)) {
                        pcVar10 = (code *)swi(3);
                        uVar17 = (*pcVar10)();
                        return (bool)uVar17;
                      }
                      local_340.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_340.TaggedData.ArrayNum = 0;
                      local_340.TaggedData.ArrayMax = 0;
                      local_340.bCancelExecutionOnEmpty = false;
                      local_340.bCancelExecution = false;
                      local_340.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_340.DataCrcs.ArrayNum = 0;
                      local_340.DataCrcs.ArrayMax = 0;
                      local_340.InactiveOutputPinBitmask = 0;
                      iVar20 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x878,(ForAnyElementType *)&local_340,
                                          &local_340.TaggedData.ArrayMax);
                      local_340.TaggedData.ArrayNum = iVar20 + 1;
                      FPCGTaggedData::FPCGTaggedData
                                ((FPCGTaggedData *)
                                 (local_340.TaggedData.AllocatorInstance.Data +
                                 (longlong)iVar20 * 0x78),(FPCGTaggedData *)pFVar41);
                      pFVar15 = local_310;
                      bVar42 = (bool)(**(code **)((longlong)*local_310 + 0x30))(local_310,local_3e8)
                      ;
                      FPCGDataCollection::ComputeCrcs(&local_340,bVar42);
                      pFVar12 = local_3e8;
                      pcVar10 = *(code **)((longlong)*pFVar15 + 0x40);
                      if (((IPCGGraphExecutionSource *)local_3e8->_padding_ ==
                           (IPCGGraphExecutionSource *)0x0) ||
                         (bVar42 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_3e8->_padding_),
                         !bVar42)) {
                        local_2a8 = (IPCGGraphExecutionSource *)0x0;
                      }
                      else {
                        local_2a8 = (IPCGGraphExecutionSource *)pFVar12->_padding_;
                      }
                      pUVar22 = local_3d0;
                      local_2b8 = &local_340;
                      local_2b0 = local_3d0;
                      (*pcVar10)(pFVar15,&local_2b8,&local_3b0);
                      if (local_340.DataCrcs.AllocatorInstance.Data !=
                          (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_340.DataCrcs.AllocatorInstance.Data);
                      }
                      DestructItems<FPCGTaggedData,int>
                                ((FPCGTaggedData *)local_340.TaggedData.AllocatorInstance.Data,
                                 local_340.TaggedData.ArrayNum);
                      if ((FPCGTaggedData *)local_340.TaggedData.AllocatorInstance.Data !=
                          (FPCGTaggedData *)0x0) {
                        FMemory::Free(local_340.TaggedData.AllocatorInstance.Data);
                      }
                      local_2a0 = &local_378;
                      local_378 = (longlong *)0x0;
                      local_298 = &local_3a8;
                      local_370 = 0;
                      local_290 = &local_3b0;
                      local_288 = &local_3e8;
                      local_2f0 = &local_2a0;
                      local_2f8 = UE::Core::Private::Function::
                                  TFunctionRefCaller<`FPCGStaticMeshSpawnerElement::PrepareDataInternal'::__l126::<lambda_2>,void,UPCGManagedResource_*>
                                  ::Call;
                      UPCGComponent::ForEachManagedResource
                                (pUVar24,(TFunctionRef<void___cdecl(UPCGManagedResource_*)> *)
                                         &local_2f8);
                      iVar20 = (int)local_370;
                      plVar3 = local_378 + (int)local_370;
                      plVar38 = local_378;
                      while( true ) {
                        if ((int)local_370 != iVar20) {
                          local_3d9 = 0;
                          `TCheckedPointerIterator<UPCGManagedISMComponent_*,int,0>::operator!='::
                          __l2::<lambda_1>::operator()(&local_3d9);
                        }
                        pFVar12 = local_3e8;
                        if (plVar38 == plVar3) break;
                        plVar6 = (longlong *)*plVar38;
                        if (((char)plVar6[6] == '\0') && (pUVar22->bWarnOnIdenticalSpawn != false))
                        {
                          pFVar23 = FText::AsLocalizable_Advanced_LocText
                                              (&local_230,L"PCGStaticMeshSpawnerElement",
                                               L"IdenticalISMCSpawn",
                                               L"Identical ISM Component spawn occurred. It may be beneficial to re-check graph logic for identical spawn conditions (same mesh descriptor at same location, etc) or repeated nodes."
                                              );
                          PCGLog::LogWarningOnGraph(pFVar23,(FPCGContext *)pFVar12);
                          pUVar22 = local_3d0;
                          if (local_230.TextData.Reference != (ITextData *)0x0) {
                            (**(code **)((longlong)*local_230.TextData.Reference + 0x10))();
                            pUVar22 = local_3d0;
                          }
                        }
                        (**(code **)(*plVar6 + 0x2e0))(plVar6);
                        plVar38 = plVar38 + 1;
                        *(FPCGCrc *)(plVar6 + 5) = *(FPCGCrc *)&local_3e8->_padding_;
                      }
                      if ((int)local_370 != 0) {
                        local_3e8->bCurrentDataSkippedDueToReuse = true;
                      }
                      pUVar27 = local_3c0;
                      uVar36 = local_3e0;
                      if (local_378 != (longlong *)0x0) {
                        FMemory::Free(local_378);
                        pUVar27 = local_3c0;
                        uVar36 = local_3e0;
                      }
                    }
                  }
                  pFVar12 = local_348;
                  if (local_3db == '\0') {
                    if (local_3e8->bCurrentDataSkippedDueToReuse != false) {
                      local_3e8->bSelectionDone = true;
                      goto LAB_149c83260;
                    }
                  }
                  else {
                    if ((((FObjectPtr_u_0 *)local_348->_padding_ <= pFVar41) &&
                        (pFVar41 < (FObjectPtr_u_0 *)local_348->_padding_ +
                                   (longlong)
                                   *(int *)((longlong)
                                            &(((FPCGDataCollection *)&local_348->_padding_)->
                                             TaggedData).AllocatorInstance.Data + 4) * 0xf)) &&
                       (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar42)) {
                      pcVar10 = (code *)swi(3);
                      uVar17 = (*pcVar10)();
                      return (bool)uVar17;
                    }
                    iVar20 = *(int *)&(((FPCGDataCollection *)&pFVar12->_padding_)->TaggedData).
                                      AllocatorInstance.Data;
                    piVar39 = (int *)((longlong)
                                      &(((FPCGDataCollection *)&pFVar12->_padding_)->TaggedData).
                                       AllocatorInstance.Data + 4);
                    if (iVar20 == *piVar39) {
                      iVar20 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x878,(ForAnyElementType *)pFVar12,piVar39);
                    }
                    *(int *)&(((FPCGDataCollection *)&pFVar12->_padding_)->TaggedData).
                             AllocatorInstance.Data = iVar20 + 1;
                    this_01 = FPCGTaggedData::FPCGTaggedData
                                        ((FPCGTaggedData *)
                                         ((longlong)iVar20 * 0x78 + pFVar12->_padding_),
                                         (FPCGTaggedData *)pFVar41);
                    this_02 = FPCGContext::NewPointData_AnyThread((FPCGContext *)local_3e8);
                    FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
                              (&local_e8,(UPCGSpatialData *)pUVar27);
                    local_e8.bInheritSpatialData = false;
                    UPCGSpatialData::InitializeFromDataWithParams
                              ((UPCGSpatialData *)this_02,&local_e8);
                    pcVar10 = *(code **)(this_02->_padding_ + 0x490);
                    uVar21 = (**(code **)(pUVar27->_padding_ + 0x488))(pUVar27);
                    (*pcVar10)(this_02,uVar21,1);
                    pcVar10 = *(code **)(this_02->_padding_ + 0x498);
                    uVar21 = (**(code **)(pUVar27->_padding_ + 0x640))(pUVar27,1);
                    (*pcVar10)(this_02,uVar21);
                    pUVar22 = local_3d0;
                    FStack_178 = PCGMetadataDomainID::Default;
                    FVar16 = FStack_178;
                    local_180 = local_3d0->OutAttributeName;
                    FStack_178._0_8_ = PCGMetadataDomainID::Default._0_8_;
                    local_168.MetadataDomain.Flag = FStack_178.Flag;
                    local_168.MetadataDomain._1_3_ = FStack_178._1_3_;
                    local_168.MetadataDomain.CustomFlag = FStack_178.CustomFlag;
                    local_168.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
                    FStack_178 = FVar16;
                    local_168.Name = local_180;
                    bVar42 = UPCGMetadata::HasAttribute
                                       ((UPCGMetadata *)this_02->_padding_,&local_168);
                    if (bVar42) {
                      local_148 = pUVar22->OutAttributeName;
                      FStack_140 = PCGMetadataDomainID::Default;
                      FVar16 = FStack_140;
                      FStack_140._0_8_ = PCGMetadataDomainID::Default._0_8_;
                      local_128.MetadataDomain.Flag = FStack_140.Flag;
                      local_128.MetadataDomain._1_3_ = FStack_140._1_3_;
                      local_128.MetadataDomain.CustomFlag = FStack_140.CustomFlag;
                      local_128.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
                      FStack_140 = FVar16;
                      local_128.Name = local_148;
                      UPCGMetadata::DeleteAttribute((UPCGMetadata *)this_02->_padding_,&local_128);
                      if (5 < (byte)LogPCG._0_1_) {
                        pFVar23 = FText::FromName(&local_a8,&pUVar22->OutAttributeName);
                        pFVar30 = FText::AsLocalizable_Advanced_LocText
                                            (&local_1f0,L"PCGStaticMeshSpawnerElement",
                                             L"AttributeOverwritten",
                                             L"Metadata attribute \'{0}\' is being overwritten in the output data"
                                            );
                        pFVar31 = FTextFormat::FTextFormat(&local_98,pFVar30,Default);
                        pFVar23 = FText::Format<FText>(&local_200,pFVar31,pFVar23);
                        FText::ToString(pFVar23);
                        uVar37 = uVar36;
                        if (local_3e8 != (FPCGStaticMeshSpawnerContext *)0x0) {
                          local_3e0 = uVar36 | 0x100;
                          FPCGContext::GetTaskName((FPCGContext *)local_3e8,&local_210);
                          uVar37 = uVar36 | 0x100;
                          if (local_3e8 != (FPCGStaticMeshSpawnerContext *)0x0) {
                            uVar37 = uVar36 | 0x300;
                            local_3e0 = uVar37;
                            FPCGContext::GetExecutionSourceName((FPCGContext *)local_3e8,&local_220)
                            ;
                          }
                        }
                        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG)
                        ;
                        if (((uVar37 >> 9 & 1) != 0) &&
                           (uVar37 = uVar37 & 0xfffffdff, local_3e0 = uVar37,
                           local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
                        {
                          FMemory::Free(local_220.Data.AllocatorInstance.Data);
                        }
                        if (((uVar37 >> 8 & 1) != 0) &&
                           (local_3e0 = uVar37 & 0xfffffeff,
                           local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
                        {
                          FMemory::Free(local_210.Data.AllocatorInstance.Data);
                        }
                        if (local_200.TextData.Reference != (ITextData *)0x0) {
                          (**(code **)((longlong)*local_200.TextData.Reference + 0x10))();
                        }
                        if (local_1f0.TextData.Reference != (ITextData *)0x0) {
                          (**(code **)((longlong)*local_1f0.TextData.Reference + 0x10))();
                        }
                      }
                    }
                    this_00 = (UPCGMetadata *)this_02->_padding_;
                    local_3a0.ComparisonIndex.Value = 0;
                    local_3a0.Number = 0;
                    pFVar32 = ::FName::ToString(&local_3a0,&local_88);
                    UPCGMetadata::CreateStringAttribute
                              (this_00,pUVar22->OutAttributeName,pFVar32,false,true);
                    FPCGDataPtrWrapper::operator=(&this_01->Data,(UPCGData *)this_02);
                    if ((local_3e8->CurrentOutputPointData != (UPCGBasePointData *)0x0) &&
                       (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                                           ("!Context->CurrentOutputPointData",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGStaticMeshSpawner.cpp"
                                            ,0x132,L""), bVar42)) {
                      pcVar10 = (code *)swi(3);
                      uVar17 = (*pcVar10)();
                      return (bool)uVar17;
                    }
                    local_3e8->CurrentOutputPointData = this_02;
                    DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                              ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                               local_e8.MetadataInitializeParams.DomainInitializeParams.
                               AllocatorInstance.Data,
                               local_e8.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
                    if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                        local_e8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.
                        Data != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                                0x0) {
                      FMemory::Free(local_e8.MetadataInitializeParams.DomainInitializeParams.
                                    AllocatorInstance.Data);
                    }
                    if (local_e8.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_e8.MetadataInitializeParams.DomainMapping.
                                    AllocatorInstance.Data);
                    }
                  }
                  pFVar12 = local_3e8;
                  pTVar2 = &local_3e8->MeshInstancesData;
                  iVar20 = (local_3e8->MeshInstancesData).ArrayNum;
                  piVar39 = &(local_3e8->MeshInstancesData).ArrayMax;
                  if (iVar20 == *piVar39) {
                    iVar20 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x840,&pTVar2->AllocatorInstance,piVar39);
                  }
                  pFVar40 = (pTVar2->AllocatorInstance).Data;
                  (pFVar12->MeshInstancesData).ArrayNum = iVar20 + 1;
                  lVar26 = (longlong)iVar20 * 0x40;
                  *(undefined8 *)(pFVar40 + lVar26 + 0x10) = 0;
                  *(undefined8 *)(pFVar40 + lVar26 + 0x18) = 0;
                  *(undefined8 *)(pFVar40 + lVar26 + 0x20) = 0;
                  *(undefined8 *)(pFVar40 + lVar26 + 0x28) = 0;
                  *(undefined4 *)(pFVar40 + lVar26 + 0x30) = 0;
                  pFVar40[lVar26 + 0x34] = (FScriptContainerElement)0x0;
                  pFVar40[lVar26 + 0x38] = (FScriptContainerElement)0x0;
                  *(AActor **)(pFVar40 + lVar26) = local_350;
                  *(UPCGBasePointData **)(pFVar40 + lVar26 + 8) = local_3c0;
                  *(ulonglong *)(pFVar40 + lVar26 + 0x30) = CONCAT44(uStack_3ac,local_3b0);
                  if ((local_3e8->bSkippedDueToReuse == false) &&
                     (local_3e8->bCurrentDataSkippedDueToReuse == false)) {
                    FVar18 = (FScriptContainerElement)0x0;
                  }
                  else {
                    FVar18 = (FScriptContainerElement)0x1;
                  }
                  pFVar40[lVar26 + 0x38] = FVar18;
                  local_3e8->CurrentPointData = local_3c0;
                  local_3e8->bCurrentInputSetup = true;
                  goto LAB_149c83260;
                }
                if (1 < (byte)LogPCG._0_1_) {
                  pFVar23 = FText::AsLocalizable_Advanced_LocText
                                      (&local_240,L"PCGStaticMeshSpawnerElement",
                                       L"InvalidTargetActor",
                                       L"Invalid target actor. Ensure TargetActor member is initialized when creating SpatialData."
                                      );
                  FText::ToString(pFVar23);
                  uVar37 = uVar36;
                  if (local_3e8 != (FPCGStaticMeshSpawnerContext *)0x0) {
                    local_3e0 = uVar36 | 0x40;
                    FPCGContext::GetTaskName((FPCGContext *)local_3e8,&local_250);
                    uVar37 = uVar36 | 0x40;
                    if (local_3e8 != (FPCGStaticMeshSpawnerContext *)0x0) {
                      uVar37 = uVar36 | 0xc0;
                      local_3e0 = uVar37;
                      FPCGContext::GetExecutionSourceName((FPCGContext *)local_3e8,&local_260);
                    }
                  }
                  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                  if (((char)uVar37 < '\0') &&
                     (uVar37 = uVar37 & 0xffffff7f, local_3e0 = uVar37,
                     local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                    FMemory::Free(local_260.Data.AllocatorInstance.Data);
                  }
                  TVar33.Reference = local_240.TextData.Reference;
                  if (((uVar37 & 0x40) != 0) &&
                     (local_3e0 = uVar37 & 0xffffffbf,
                     local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                    FMemory::Free(local_250.Data.AllocatorInstance.Data);
                    TVar33.Reference = local_240.TextData.Reference;
                  }
                  goto LAB_149c835e9;
                }
              }
              else {
                if ((UPCGSpatialData *)local_358.Handle != (UPCGSpatialData *)0x0) {
                  UE::GC::MarkAsReachable(local_358.Handle);
                  goto LAB_149c8279e;
                }
LAB_149c834e1:
                if (1 < (byte)LogPCG._0_1_) {
                  pFVar23 = FText::AsLocalizable_Advanced_LocText
                                      (&local_1c0,L"PCGStaticMeshSpawnerElement",L"InvalidInputData"
                                       ,L"Invalid input data");
                  FText::ToString(pFVar23);
                  uVar37 = uVar36;
                  if (local_3e8 != (FPCGStaticMeshSpawnerContext *)0x0) {
                    local_3e0 = uVar36 | 4;
                    FPCGContext::GetTaskName((FPCGContext *)local_3e8,&local_1d0);
                    uVar37 = uVar36 | 4;
                    if (local_3e8 != (FPCGStaticMeshSpawnerContext *)0x0) {
                      uVar37 = uVar36 | 0xc;
                      local_3e0 = uVar37;
                      FPCGContext::GetExecutionSourceName((FPCGContext *)local_3e8,&local_1e0);
                    }
                  }
                  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                  if (((uVar37 & 8) != 0) &&
                     (uVar37 = uVar37 & 0xfffffff7, local_3e0 = uVar37,
                     local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
                  }
                  TVar33.Reference = local_1c0.TextData.Reference;
                  if (((uVar37 & 4) != 0) &&
                     (local_3e0 = uVar37 & 0xfffffffb,
                     local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                    FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
                    TVar33.Reference = local_1c0.TextData.Reference;
                  }
LAB_149c835e9:
                  if (TVar33.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*TVar33.Reference + 0x10))();
                  }
                }
              }
LAB_149c835f4:
              local_3e8->CurrentInputIndex = local_3e8->CurrentInputIndex + 1;
            }
            else {
LAB_149c83260:
              if (local_3e8->bSelectionDone == false) {
                if ((local_3e8->CurrentPointData == (UPCGBasePointData *)0x0) &&
                   (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Context->CurrentPointData",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGStaticMeshSpawner.cpp"
                                        ,0x14c,L""), bVar42)) {
                  pcVar10 = (code *)swi(3);
                  uVar17 = (*pcVar10)();
                  return (bool)uVar17;
                }
                pUVar22 = local_3d0;
                iVar20 = (local_3e8->MeshInstancesData).ArrayNum;
                pUVar7 = (local_3d0->MeshSelectorParameters).field0_0x0.DebugPtr;
                uVar37 = iVar20 - 1;
                pcVar10 = *(code **)(*(longlong *)pUVar7 + 0x2b8);
                uVar36 = 0;
                if ((int)uVar37 < iVar20) {
                  uVar36 = ~uVar37 >> 0x1f;
                }
                if ((uVar36 == 0) &&
                   (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar42)) {
                  pcVar10 = (code *)swi(3);
                  uVar17 = (*pcVar10)();
                  return (bool)uVar17;
                }
                bVar42 = (bool)(*pcVar10)(pUVar7,local_3e8,pUVar22);
                local_3e8->bSelectionDone = bVar42;
              }
              pFVar12 = local_3e8;
              if (local_3e8->bSelectionDone == false) {
LAB_149c837f8:
                bVar42 = false;
                goto LAB_149c8398d;
              }
              if ((local_3b8->bSkippedDueToReuse == false) &&
                 (local_3e8->bCurrentDataSkippedDueToReuse == false)) {
                iVar20 = (local_3e8->MeshInstancesData).ArrayNum;
                uVar37 = iVar20 - 1;
                uVar36 = 0;
                if ((int)uVar37 < iVar20) {
                  uVar36 = ~uVar37 >> 0x1f;
                }
                if ((uVar36 == 0) &&
                   (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar42)) {
                  pcVar10 = (code *)swi(3);
                  uVar17 = (*pcVar10)();
                  return (bool)uVar17;
                }
                pFVar13 = local_3e8;
                iVar20 = (local_3e8->MeshInstancesData).ArrayNum;
                this_03 = (TArray<FPCGPackedCustomData,TSizedDefaultAllocator<32>_> *)
                          ((pFVar12->MeshInstancesData).AllocatorInstance.Data +
                          (longlong)(pFVar12->MeshInstancesData).ArrayNum * 0x40 + -0x20);
                uVar37 = iVar20 - 1;
                uVar36 = 0;
                if ((int)uVar37 < iVar20) {
                  uVar36 = ~uVar37 >> 0x1f;
                }
                if ((uVar36 == 0) &&
                   (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar42)) {
                  pcVar10 = (code *)swi(3);
                  uVar17 = (*pcVar10)();
                  return (bool)uVar17;
                }
                pFVar40 = (pFVar13->MeshInstancesData).AllocatorInstance.Data;
                uVar36 = this_03->ArrayNum;
                lVar26 = (longlong)(pFVar13->MeshInstancesData).ArrayNum * 0x40;
                uVar37 = *(uint *)(pFVar40 + lVar26 + -0x28);
                if (uVar36 != uVar37) {
                  if ((int)uVar36 < (int)uVar37) {
                    iVar20 = UE::Core::Private::
                             ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x18,8,uVar37 - uVar36,(ForAnyElementType *)this_03,
                                        &this_03->ArrayNum,&this_03->ArrayMax);
                    DefaultConstructItems<FPCGPackedCustomData,int>
                              ((this_03->AllocatorInstance).Data + (longlong)iVar20 * 0x18,
                               uVar37 - uVar36);
                  }
                  else {
                    if ((int)uVar37 < 0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar37);
                    }
                    if ((int)uVar37 < (int)uVar36) {
                      iVar20 = uVar36 - uVar37;
                      if (iVar20 < 0) {
                        bVar42 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x458,
                                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                           );
                        if (bVar42) {
                          pcVar10 = (code *)swi(3);
                          uVar17 = (*pcVar10)();
                          return (bool)uVar17;
                        }
                      }
                      else if (iVar20 == 0) goto LAB_149c83688;
                      TArray<FPCGPackedCustomData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                                (this_03,uVar37,iVar20);
                      UE::Core::Private::
                      ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x18,8,(ForAnyElementType *)this_03,this_03->ArrayNum,
                                 &this_03->ArrayMax);
                    }
                  }
                }
LAB_149c83688:
                if (((local_3d0->InstanceDataPackerParameters).field0_0x0.DebugPtr !=
                     (UPCGInstanceDataPackerBase *)0x0) &&
                   (uVar36 = 0, 0 < *(int *)(pFVar40 + lVar26 + -0x28))) {
                  do {
                    local_3c0 = (UPCGBasePointData *)
                                (local_3d0->InstanceDataPackerParameters).field0_0x0.DebugPtr;
                    uVar37 = 0;
                    if ((int)uVar36 < this_03->ArrayNum) {
                      uVar37 = ~uVar36 >> 0x1f;
                    }
                    if ((uVar37 == 0) &&
                       (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar42)) {
                      pcVar10 = (code *)swi(3);
                      uVar17 = (*pcVar10)();
                      return (bool)uVar17;
                    }
                    pFVar8 = (this_03->AllocatorInstance).Data;
                    uVar37 = 0;
                    if ((int)uVar36 < *(int *)(pFVar40 + lVar26 + -0x28)) {
                      uVar37 = ~uVar36 >> 0x1f;
                    }
                    if ((uVar37 == 0) &&
                       (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar42)) {
                      pcVar10 = (code *)swi(3);
                      uVar17 = (*pcVar10)();
                      return (bool)uVar17;
                    }
                    UPCGInstanceDataPackerBase::PackInstances
                              ((UPCGInstanceDataPackerBase *)local_3c0,(FPCGContext *)local_3e8,
                               (UPCGSpatialData *)local_3e8->CurrentPointData,
                               (FPCGMeshInstanceList *)
                               ((longlong)(int)uVar36 * 0x2b0 +
                               *(longlong *)(pFVar40 + lVar26 + -0x30)),
                               (FPCGPackedCustomData *)(pFVar8 + (longlong)(int)uVar36 * 0x18));
                    uVar36 = uVar36 + 1;
                    cVar35 = local_3dc;
                  } while ((int)uVar36 < *(int *)(pFVar40 + lVar26 + -0x28));
                }
              }
              local_3e8->CurrentInputIndex = local_3e8->CurrentInputIndex + 1;
              FPCGStaticMeshSpawnerContext::ResetInputIterationData(local_3e8);
              bVar42 = FPCGAsyncState::ShouldStop((FPCGAsyncState *)&local_3e8->_padding_);
              if ((bVar42) && (local_3e8->CurrentInputIndex < local_398.ArrayNum))
              goto LAB_149c837f8;
            }
            pUVar24 = local_3d8;
            uVar36 = local_3e0;
          } while (local_3e8->CurrentInputIndex < local_398.ArrayNum);
        }
        local_348 = local_3e8;
        local_3a8 = (IPCGAsyncLoadingContext *)&local_3e8->_padding_;
        if ((((local_3e8->CurrentInputIndex == local_398.ArrayNum) &&
             ((char)local_3e8->_padding_ == '\0')) && ((local_3e8->MeshInstancesData).ArrayNum != 0)
            ) && (local_3d0->bSynchronousLoad == false)) {
          local_368.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_368.ArrayNum = 0;
          local_368.ArrayMax = 0;
          local_3e0 = (local_3e8->MeshInstancesData).ArrayNum;
          uVar34 = (ulonglong)(int)local_3e0;
          pFVar40 = (local_3e8->MeshInstancesData).AllocatorInstance.Data;
          local_3a0 = (FName)(uVar34 * 0x40 + (longlong)pFVar40);
          pFVar40 = pFVar40 + 0x18;
          while( true ) {
            FVar14 = local_3a0;
            if ((local_348->MeshInstancesData).ArrayNum != (int)uVar34) {
              `TCheckedPointerIterator<FPCGStaticMeshSpawnerContext::FPackedInstanceListData,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(&local_3c8);
            }
            if ((FName)((longlong)pFVar40 + -0x18) == FVar14) break;
            lVar26 = *(longlong *)(pFVar40 + -8);
            iVar20 = *(int *)pFVar40;
            piVar39 = (int *)(lVar26 + 0x220);
            while( true ) {
              if (*(int *)pFVar40 != iVar20) {
                `TCheckedPointerIterator<FPCGMeshInstanceList_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_3c7);
              }
              if (piVar39 + -0x88 == (int *)((longlong)iVar20 * 0x2b0 + lVar26)) break;
              if (*(longlong *)(piVar39 + -10) != 0) {
                TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::
                AddUniqueImpl<FSoftObjectPath_const_&>
                          (&local_368,(FSoftObjectPath *)(piVar39 + -10));
              }
              lVar9 = *(longlong *)(piVar39 + -2);
              iVar5 = *piVar39;
              lVar4 = lVar9 + (longlong)iVar5 * 0x28;
              while( true ) {
                if (*piVar39 != iVar5) {
                  `TCheckedPointerIterator<TSoftObjectPtr<UMaterialInterface>_const_,int,0>::
                  operator!='::__l2::<lambda_1>::operator()(local_3c6);
                }
                if (lVar9 == lVar4) break;
                if ((((FSoftObjectPath *)(lVar9 + 8))->AssetPath).PackageName != (FName)0x0) {
                  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::
                  AddUniqueImpl<FSoftObjectPath_const_&>(&local_368,(FSoftObjectPath *)(lVar9 + 8));
                }
                lVar9 = lVar9 + 0x28;
              }
              piVar39 = piVar39 + 0xac;
            }
            pFVar40 = pFVar40 + 0x40;
            uVar34 = (ulonglong)local_3e0;
          }
          bVar42 = IPCGAsyncLoadingContext::RequestResourceLoad
                             (local_3a8,(FPCGContext *)local_3e8,&local_368,true);
          DestructItems<FSoftObjectPath,int>
                    ((FSoftObjectPath *)local_368.AllocatorInstance.Data,local_368.ArrayNum);
          cVar35 = local_3dc;
          if ((FSoftObjectPath *)local_368.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
            FMemory::Free(local_368.AllocatorInstance.Data);
          }
        }
        else {
          bVar42 = true;
        }
LAB_149c8398d:
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_398.AllocatorInstance.Data,local_398.ArrayNum);
        if ((FPCGTaggedData *)local_398.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_398.AllocatorInstance.Data);
        }
        goto LAB_149c823ee;
      }
    }
  }
  bVar42 = true;
LAB_149c823ee:
  if (cVar35 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar42;
}

// SpawnStaticMeshInstances @ 149c903c0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FPCGStaticMeshSpawnerElement::SpawnStaticMeshInstances
          (FPCGStaticMeshSpawnerElement *this,FPCGStaticMeshSpawnerContext *param_1,
          FPackedInstanceListData *param_2,FPCGMeshInstanceList *param_3,
          FPCGPackedCustomData *param_4)

{
  int *piVar1;
  longlong *plVar2;
  FWeakObjectPtr *this_00;
  int iVar3;
  TSoftObjectPtr<URuntimeVirtualTexture> *pTVar4;
  USceneComponent *pUVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  FPCGCrc FVar9;
  FPCGCrc FVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  UClass *pUVar14;
  FText *pFVar15;
  UObject *pUVar16;
  FText *pFVar17;
  FTextFormat *pFVar18;
  FPCGCrc FVar19;
  UPCGComponent *pUVar20;
  UPCGManagedISMComponent *this_01;
  UInstancedStaticMeshComponent *pUVar21;
  FString *pFVar22;
  FText *pFVar23;
  ulonglong uVar24;
  uint uVar25;
  UObject *pUVar26;
  FPCGCrc FVar27;
  UObject *pUVar28;
  FScriptContainerElement *pFVar29;
  longlong lVar30;
  uint uVar31;
  UObject *pUVar32;
  ForAnyElementType FVar33;
  UObject *pUVar34;
  longlong lVar35;
  bool bVar36;
  longlong lVar37;
  undefined1 local_4f7;
  undefined1 local_4f6 [2];
  uint local_4f4;
  FPCGCrc local_4e8;
  uint uStack_4e0;
  undefined4 uStack_4dc;
  int local_4d8;
  AActor *local_4d0;
  UPCGManagedISMComponent *local_4c8;
  FName local_4c0;
  FName local_4b8;
  TPersistentObjectPtr<FSoftObjectPath> local_4b0;
  FString local_488;
  FString local_478;
  FText local_468;
  FString local_458;
  FString local_448;
  FText local_438;
  FText local_428;
  void *local_418 [2];
  FPCGCrc local_408;
  uint uStack_400;
  undefined4 uStack_3fc;
  FString local_3f8;
  FString local_3e8;
  FText local_3d8;
  FText local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FText local_378;
  FText local_368 [2];
  undefined1 local_348 [496];
  longlong local_158;
  FSoftObjectPath local_150;
  TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> local_130;
  longlong local_120;
  FSoftObjectPath local_118;
  ForAnyElementType local_f8;
  int local_f0;
  int local_ec;
  TArray<FName,TSizedDefaultAllocator<32>_> local_e8;
  FString local_d8;
  int local_c8;
  uint uStack_c4;
  uint local_c0;
  FPCGCrc local_bc;
  undefined2 local_b4;
  FTextFormat local_a8;
  FText local_98;
  FText local_88;
  FTextFormat local_78;
  FText local_68;
  FTextFormat local_58;
  FText local_48;
  
  pUVar28 = (UObject *)0x0;
  local_4e8 = (FPCGCrc)((ulonglong)local_4e8 & 0xffffffff00000000);
  bVar36 = -1 < CpuChannel->Enabled;
  if (bVar36) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId494,"FPCGStaticMeshSpawnerElement::Execute::PopulateISMs",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGStaticMeshSpawner.cpp"
               ,0x1ee);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId494);
  }
  FVar27.bValid = local_408.bValid;
  FVar27._5_3_ = local_408._5_3_;
  FVar27.Value = local_408.Value;
  local_4d0 = param_2->TargetActor;
  bVar11 = param_2->bSkippedDueToReuse;
  if ((param_3->Instances).ArrayNum == 0) goto LAB_149c913c3;
  lVar37 = (param_3->Descriptor)._padding_;
  if ((lVar37 != 0) &&
     (pUVar14 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister(),
     pUVar14 != (UClass *)0x0)) {
    iVar13 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar37 + 0x38) < iVar13) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar37 + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar14->_padding_)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if ((bVar8) && (lVar37 = (param_3->Descriptor)._padding_, lVar37 != 0)) {
      pUVar14 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
      pUVar16 = pUVar28;
      if (pUVar14 != (UClass *)0x0) {
        iVar13 = (int)pUVar14->_padding_;
        if ((*(int *)(lVar37 + 0x38) < iVar13) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar37 + 0x30) + (longlong)iVar13 * 8) !=
            &pUVar14->_padding_)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          pUVar16 = (UObject *)(param_3->Descriptor)._padding_;
        }
      }
      pUVar14 = Z_Construct_UClass_UGrassInstancedStaticMeshComponent_NoRegister();
      if (pUVar14 != (UClass *)0x0) {
        iVar13 = (int)pUVar14->_padding_;
        if ((*(int *)&pUVar16[1].field_0x10 < iVar13) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar16[1].field_0x8 + (longlong)iVar13 * 8)
            != &pUVar14->_padding_)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          pFVar15 = FText::AsLocalizable_Advanced_LocText
                              (&local_468,L"PCGStaticMeshSpawnerElement",
                               L"NoSupportForGrassComponent",
                               L"Grass Instanced Static Mesh Component are not meant to be used outside of the landscape grass system, and are not supported by PCG."
                              );
          PCGLog::LogErrorOnGraph(pFVar15,(FPCGContext *)param_1);
          FVar27.bValid = local_408.bValid;
          FVar27._5_3_ = local_408._5_3_;
          FVar27.Value = local_408.Value;
          if (local_468.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_468.TextData.Reference + 0x10))();
            FVar27.bValid = local_408.bValid;
            FVar27._5_3_ = local_408._5_3_;
            FVar27.Value = local_408.Value;
          }
          goto LAB_149c913c3;
        }
      }
    }
  }
  pUVar16 = TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&(param_3->Descriptor)._padding_);
  if (pUVar16 == (UObject *)0x0) {
    plVar2 = &(param_3->Descriptor)._padding_;
    if (*plVar2 != 0) {
      FSoftObjectPath::TryLoad((FSoftObjectPath *)plVar2,(FUObjectSerializeContext *)0x0);
      pUVar16 = TPersistentObjectPtr<FSoftObjectPath>::Get
                          ((TPersistentObjectPtr<FSoftObjectPath> *)&(param_3->Descriptor)._padding_
                          );
      goto LAB_149c905a2;
    }
  }
  else {
LAB_149c905a2:
    if (pUVar16 != (UObject *)0x0) {
      pUVar14 = Z_Construct_UClass_UStaticMesh_NoRegister();
      FVar27.bValid = local_408.bValid;
      FVar27._5_3_ = local_408._5_3_;
      FVar27.Value = local_408.Value;
      iVar13 = (int)pUVar14->_padding_;
      if ((iVar13 <= *(int *)(*(longlong *)&pUVar16->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar16->field_0x10 + 0x30) + (longlong)iVar13 * 8) ==
          &pUVar14->_padding_)) {
        if (bVar11 == false) {
          iVar13 = (int)(param_3->Descriptor)._padding_;
          FVar27 = (FPCGCrc)(param_3->Descriptor)._padding_;
          local_4e8 = (FPCGCrc)((longlong)FVar27 + (longlong)iVar13 * 0x28);
          do {
            FVar19 = local_4e8;
            if ((int)(param_3->Descriptor)._padding_ != iVar13) {
              local_4f7 = 0;
              `TCheckedPointerIterator<TSoftObjectPtr<UMaterialInterface>_const_,int,0>::operator!='
              ::__l2::<lambda_1>::operator()(&local_4f7);
            }
            if (FVar27 == FVar19) {
              if (param_4 == (FPCGPackedCustomData *)0x0) {
                bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<3915437163654677022>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGStaticMeshSpawner.cpp"
                                    ,0x21e,"InPackedCustomData");
                FVar27.bValid = local_408.bValid;
                FVar27._5_3_ = local_408._5_3_;
                FVar27.Value = local_408.Value;
                if (bVar11) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              else {
                FPCGSoftISMComponentDescriptor::FPCGSoftISMComponentDescriptor
                          ((FPCGSoftISMComponentDescriptor *)local_348);
                local_c8 = 0;
                uStack_c4 = 0;
                local_c0 = local_c0 & 0xffffff00;
                local_bc = (FPCGCrc)((ulonglong)local_bc & 0xffffff0000000000);
                local_b4._0_1_ = true;
                local_b4._1_1_ = false;
                FISMComponentDescriptorBase::operator=
                          ((FISMComponentDescriptorBase *)local_348,
                           (FISMComponentDescriptorBase *)param_3);
                local_158 = (param_3->Descriptor)._padding_;
                FSoftObjectPath::operator=
                          (&local_150,(FSoftObjectPath *)&(param_3->Descriptor)._padding_);
                TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::operator=
                          (&local_130,
                           (TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *
                           )&(param_3->Descriptor)._padding_);
                local_120 = (param_3->Descriptor)._padding_;
                FSoftObjectPath::operator=
                          (&local_118,(FSoftObjectPath *)&(param_3->Descriptor)._padding_);
                plVar2 = &(param_3->Descriptor)._padding_;
                if (&local_f8 != (ForAnyElementType *)plVar2) {
                  DestructItems<TSoftObjectPtr<URuntimeVirtualTexture>,int>
                            ((TSoftObjectPtr<URuntimeVirtualTexture> *)local_f8.Data,local_f0);
                  iVar13 = (int)(param_3->Descriptor)._padding_;
                  pTVar4 = (TSoftObjectPtr<URuntimeVirtualTexture> *)*plVar2;
                  local_f0 = iVar13;
                  if ((iVar13 == 0) && (local_ec == 0)) {
                    local_ec = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x28,8,iVar13,local_ec,&local_f8,iVar13,&local_ec);
                    ConstructItems<TSoftObjectPtr<URuntimeVirtualTexture>,TSoftObjectPtr<URuntimeVirtualTexture>,int>
                              (local_f8.Data,pTVar4,iVar13);
                  }
                }
                TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                          (&local_e8,&(param_3->Descriptor).ComponentTags);
                ::FString::operator=(&local_d8,&(param_3->Descriptor).AdditionalCommaSeparatedTags);
                local_c8 = param_4->NumCustomDataFloats;
                pUVar5 = (local_4d0->RootComponent).field0_0x0.DebugPtr;
                if (pUVar5 != (USceneComponent *)0x0) {
                  local_348[0x18] = (pUVar5->Mobility).Value;
                }
                FVar27 = (FPCGCrc)FPCGContext::GetInputSettings<UPCGStaticMeshSpawnerSettings>
                                            ((FPCGContext *)param_1);
                local_4e8 = FVar27;
                if ((FVar27 == (FPCGCrc)0x0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Settings",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGStaticMeshSpawner.cpp"
                                        ,0x230,L""), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                FVar19 = UPCGSettings::GetSettingsCrc((UPCGSettings *)FVar27);
                uVar6 = *(undefined8 *)FVar19;
                uStack_c4 = (uint)uVar6;
                local_c0 = (uint)((ulonglong)uVar6 >> 0x20);
                if (((char)((ulonglong)uVar6 >> 0x20) == '\0') &&
                   (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<3915437163654677043>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGStaticMeshSpawner.cpp"
                                        ,0x233,"Params.SettingsCrc.IsValid()"), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                iVar13 = local_e8.ArrayNum;
                if (*(bool *)((longlong)FVar27 + 0x149) == false) {
                  local_bc = param_2->DataCrc;
                }
                uVar24 = (ulonglong)local_e8.ArrayNum;
                if ((local_e8.ArrayNum != 0) || (1 < local_d8.Data.ArrayNum)) {
                  if (local_e8.ArrayNum == 0) {
                    uVar25 = 1;
                  }
                  else {
                    pFVar29 = local_e8.AllocatorInstance.Data + uVar24 * 8;
                    FVar33.Data = local_e8.AllocatorInstance.Data;
                    uVar25 = 0;
                    while( true ) {
                      if ((uint)uVar24 != iVar13) {
                        local_4f6[0] = 0;
                        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>
                        ::operator()(local_4f6);
                      }
                      FVar27 = local_4e8;
                      if (FVar33.Data == pFVar29) break;
                      uVar6 = *(undefined8 *)FVar33.Data;
                      uVar12 = ::GetTypeHash((FNameEntryId)(uint)uVar6);
                      uVar24 = (ulonglong)(uint)local_e8.ArrayNum;
                      uVar25 = uVar25 ^ uVar12 + 0x9e3779b9 +
                                        (int)((ulonglong)uVar6 >> 0x20) + uVar25 * 0x40 +
                                        (uVar25 >> 2);
                      FVar33.Data = FVar33.Data + 8;
                    }
                  }
                  uVar12 = 1;
                  if (1 < local_d8.Data.ArrayNum) {
                    uVar12 = local_d8.Data.ArrayNum - 1;
                    FVar33.Data = local_d8.Data.AllocatorInstance.Data;
                    if (local_d8.Data.ArrayNum == 0) {
                      uVar12 = 0;
                      FVar33.Data = (FScriptContainerElement *)L"";
                    }
                    uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar12,(wchar_t *)FVar33.Data);
                  }
                  uVar31 = uVar25 - uVar12 ^ uVar12 >> 0xd;
                  uVar25 = (-0x61c88647 - uVar31) - uVar12 ^ uVar31 << 8;
                  uVar12 = (uVar12 - uVar25) - uVar31 ^ uVar25 >> 0xd;
                  uVar31 = (uVar31 - uVar12) - uVar25 ^ uVar12 >> 0xc;
                  uVar25 = (uVar25 - uVar12) - uVar31 ^ uVar31 << 0x10;
                  uVar12 = (uVar12 - uVar25) - uVar31 ^ uVar25 >> 5;
                  uVar31 = (uVar31 - uVar12) - uVar25 ^ uVar12 >> 3;
                  uVar25 = (uVar25 - uVar31) - uVar12 ^ uVar31 << 10;
                  uStack_c4 = uStack_c4 ^
                              (uStack_c4 >> 2) + 0x9e3779b9 +
                              ((uVar12 - uVar25) - uVar31 ^ uVar25 >> 0xf) + uStack_c4 * 0x40;
                }
                local_b4._0_1_ = *(bool *)((longlong)FVar27 + 0xd8);
                if ((((param_1->_padding_ == 0) ||
                     (bVar11 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->_padding_),
                     !bVar11)) || ((longlong *)param_1->_padding_ == (longlong *)0x0)) ||
                   (pUVar20 = (UPCGComponent *)(**(code **)(*(longlong *)param_1->_padding_ + 8))(),
                   pUVar20 == (UPCGComponent *)0x0)) {
LAB_149c911b8:
                  bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<3915437163654677065>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGStaticMeshSpawner.cpp"
                                      ,0x249,"SourceComponent");
                  if (bVar11) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                else {
                  pUVar14 = Z_Construct_UClass_UPCGComponent_NoRegister();
                  iVar13 = (int)pUVar14->_padding_;
                  if ((*(int *)(pUVar20->_padding_ + 0x38) < iVar13) ||
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(pUVar20->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
                      &pUVar14->_padding_)) goto LAB_149c911b8;
                  this_01 = UPCGActorHelpers::GetOrCreateManagedISMC
                                      (local_4d0,pUVar20,(FPCGISMComponentBuilderParams *)local_348,
                                       (FPCGContext *)param_1);
                  if ((this_01 == (UPCGManagedISMComponent *)0x0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("MISMC",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGStaticMeshSpawner.cpp"
                                          ,0x250,L""), bVar11)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  this_01->_padding_ = param_1->_padding_;
                  if (((*(bool *)((longlong)local_4e8 + 0x149) == false) &&
                      ((((this_01->DataCrc).bValid != false ||
                        (pUVar21 = UPCGManagedISMComponent::GetComponent(this_01),
                        pUVar21 == (UInstancedStaticMeshComponent *)0x0)) ||
                       (pUVar21 = UPCGManagedISMComponent::GetComponent(this_01),
                       (pUVar21->PerInstanceSMData).ArrayNum != 0)))) &&
                     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                         (&bGEnsureHasExecuted<3915437163654677075>,false,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGStaticMeshSpawner.cpp"
                                          ,0x253,
                                          "Settings->bAllowMergeDifferentDataInSameInstancedComponents || !MISMC->GetDataCrc().IsValid() && MISMC->GetComponent() && MISMC->GetComponent()->GetNumInstances() == 0"
                                         ), bVar11)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  FVar27 = this_01->DataCrc;
                  if (FVar27.bValid == false) {
                    FVar27 = param_2->DataCrc;
                  }
                  else {
                    local_4e8._4_4_ = FVar27._4_4_;
                    local_4e8.Value =
                         FVar27.Value * 0x40 + ((uint)((ulonglong)FVar27 >> 2) & 0x3fffffff) +
                         (param_2->DataCrc).Value + 0x9e3779b9 ^ FVar27.Value;
                    FVar27 = local_4e8;
                  }
                  this_01->DataCrc = FVar27;
                  iVar13 = (param_1->TouchedResources).ArrayNum;
                  piVar1 = &(param_1->TouchedResources).ArrayMax;
                  if (iVar13 == *piVar1) {
                    iVar13 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x408,&(param_1->TouchedResources).AllocatorInstance,piVar1)
                    ;
                  }
                  (param_1->TouchedResources).ArrayNum = iVar13 + 1;
                  this_00 = (FWeakObjectPtr *)
                            ((param_1->TouchedResources).AllocatorInstance.Data +
                            (longlong)iVar13 * 8);
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable((UObject *)this_01);
                  }
                  this_00->ObjectIndex = 0;
                  this_00->ObjectSerialNumber = 0;
                  local_4c8 = this_01;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable((UObject *)this_01);
                  }
                  FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_4c8);
                  pUVar21 = UPCGManagedISMComponent::GetComponent(this_01);
                  if ((pUVar21 == (UInstancedStaticMeshComponent *)0x0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("ISMC",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGStaticMeshSpawner.cpp"
                                          ,0x266,L""), bVar11)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  iVar13 = UInstancedStaticMeshComponent::GetInstanceCount(pUVar21);
                  local_4d8 = (param_3->Instances).ArrayNum;
                  uVar25 = param_4->NumCustomDataFloats;
                  local_4e8.Value = uVar25;
                  if (((pUVar21->NumCustomDataFloats != 0) || (iVar13 != 0)) &&
                     ((pUVar21->NumCustomDataFloats != uVar25 &&
                      (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(ISMC->NumCustomDataFloats == 0 && PreExistingInstanceCount == 0) || ISMC->NumCustomDataFloats == NumCustomDataFloats"
                                           ,
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGStaticMeshSpawner.cpp"
                                           ,0x26c,L""), bVar11)))) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  (**(code **)(pUVar21->_padding_ + 0xbd0))(pUVar21,uVar25);
                  lVar37 = 1;
                  local_4f4 = uVar25 * iVar13;
                  pUVar16 = (UObject *)0x1;
                  (**(code **)(pUVar21->_padding_ + 3000))
                            (pUVar21,local_418,&param_3->Instances,0,1,1);
                  if (local_418[0] != (void *)0x0) {
                    FMemory::Free(local_418[0]);
                  }
                  FVar19.bValid = local_408.bValid;
                  FVar19._5_3_ = local_408._5_3_;
                  FVar19.Value = local_408.Value;
                  if (0 < (int)uVar25) {
                    if ((local_4f4 + (param_4->CustomData).ArrayNum !=
                         (pUVar21->PerInstanceSMCustomData).ArrayNum) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("PreviousCustomDataOffset + PackedCustomData.CustomData.Num() == ISMC->PerInstanceSMCustomData.Num()"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGStaticMeshSpawner.cpp"
                                            ,0x278,L""), bVar11)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    FVar19 = local_408;
                    if (0 < local_4d8) {
                      uVar25 = local_4e8.Value;
                      lVar35 = (longlong)(int)local_4e8.Value;
                      local_4f4 = 0;
                      pUVar26 = pUVar28;
                      pUVar32 = pUVar28;
                      pUVar34 = pUVar28;
                      do {
                        iVar3 = (param_4->CustomData).ArrayNum;
                        lVar30 = (longlong)iVar3;
                        pcVar7 = *(code **)(pUVar21->_padding_ + 0xbe0);
                        uVar12 = 0;
                        if ((int)(uint)pUVar26 < iVar3) {
                          uVar12 = ~(uint)pUVar26 >> 0x1f;
                        }
                        if (uVar12 == 0) {
                          pUVar16 = pUVar32;
                          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             );
                          lVar37 = lVar30;
                          if (bVar11) {
                            pcVar7 = (code *)swi(3);
                            (*pcVar7)();
                            return;
                          }
                        }
                        uStack_4e0 = uVar25;
                        local_4e8 = (FPCGCrc)((longlong)(param_4->CustomData).AllocatorInstance.Data
                                             + (longlong)pUVar32 * 4);
                        uStack_400 = uVar25;
                        uStack_3fc = uStack_4dc;
                        local_408 = local_4e8;
                        (*pcVar7)(pUVar21,iVar13 + (int)pUVar34,&local_408,0,pUVar16,lVar37);
                        uVar12 = (int)pUVar34 + 1;
                        pUVar34 = (UObject *)(ulonglong)uVar12;
                        local_4f4 = local_4f4 + uVar25;
                        pUVar26 = (UObject *)(ulonglong)local_4f4;
                        pUVar32 = (UObject *)(&pUVar32->field_0x0 + lVar35);
                        FVar19 = local_408;
                      } while ((int)uVar12 < local_4d8);
                    }
                  }
                  local_408 = FVar19;
                  (**(code **)(pUVar21->_padding_ + 0x5b0))(pUVar21);
                  if (5 < (byte)LogPCG._0_1_) {
                    local_4c0 = (FName)local_4d0->_padding_;
                    pFVar22 = ::FName::ToString(&local_4c0,&local_3a8);
                    pFVar15 = FText::FromString(&local_98,pFVar22);
                    pUVar16 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                        ((TPersistentObjectPtr<FSoftObjectPath> *)
                                         &(param_3->Descriptor)._padding_);
                    if (pUVar16 == (UObject *)0x0) {
LAB_149c9107c:
                      pUVar16 = pUVar28;
                    }
                    else {
                      pUVar14 = Z_Construct_UClass_UStaticMesh_NoRegister();
                      iVar13 = (int)pUVar14->_padding_;
                      if ((*(int *)(*(longlong *)&pUVar16->field_0x10 + 0x38) < iVar13) ||
                         ((longlong *)
                          *(undefined1 **)
                           (*(longlong *)(*(longlong *)&pUVar16->field_0x10 + 0x30) +
                           (longlong)iVar13 * 8) != &pUVar14->_padding_)) goto LAB_149c9107c;
                    }
                    local_4b8.ComparisonIndex.Value = *(uint *)&pUVar16->field_0x18;
                    local_4b8.Number = *(uint *)&pUVar16->field_0x1c;
                    pFVar22 = ::FName::ToString(&local_4b8,&local_3b8);
                    pFVar17 = FText::FromString(&local_88,pFVar22);
                    iVar13 = (param_3->Instances).ArrayNum;
                    pFVar23 = FText::AsLocalizable_Advanced_LocText
                                        (&local_3c8,L"PCGStaticMeshSpawnerElement",L"GenerationInfo"
                                         ,L"Added {0} instances of \'{1}\' on actor \'{2}\'");
                    pFVar18 = FTextFormat::FTextFormat(&local_78,pFVar23,Default);
                    pFVar15 = FText::Format<int,FText,FText>
                                        (&local_3d8,pFVar18,iVar13,pFVar17,pFVar15);
                    FText::ToString(pFVar15);
                    FPCGContext::GetTaskName((FPCGContext *)param_1,&local_3e8);
                    FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_3f8);
                    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                    if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
                    }
                    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
                    }
                    if (local_3d8.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_3d8.TextData.Reference + 0x10))();
                    }
                    if (local_3c8.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_3c8.TextData.Reference + 0x10))();
                    }
                    if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
                    }
                    if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
                    }
                  }
                }
                if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_d8.Data.AllocatorInstance.Data);
                }
                if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_e8.AllocatorInstance.Data);
                }
                FSoftISMComponentDescriptor::~FSoftISMComponentDescriptor
                          ((FSoftISMComponentDescriptor *)local_348);
                FVar27 = local_408;
              }
              break;
            }
            local_4b0.WeakPtr = *(FWeakObjectPtr *)FVar27;
            FSoftObjectPath::FSoftObjectPath
                      (&local_4b0.ObjectID,(FSoftObjectPath *)((longlong)FVar27 + 8));
            pUVar16 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_4b0);
            if (pUVar16 != (UObject *)0x0) {
              pUVar14 = Z_Construct_UClass_UMaterialInterface_NoRegister();
              iVar3 = (int)pUVar14->_padding_;
              if ((iVar3 <= *(int *)(*(longlong *)&pUVar16->field_0x10 + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&pUVar16->field_0x10 + 0x30) + (longlong)iVar3 * 8)
                  == &pUVar14->_padding_)) {
                pUVar16 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_4b0);
                if (pUVar16 == (UObject *)0x0) {
                  if (local_4b0.ObjectID.AssetPath.PackageName == (FName)0x0) goto LAB_149c906db;
                  FSoftObjectPath::TryLoad(&local_4b0.ObjectID,(FUObjectSerializeContext *)0x0);
                  pUVar16 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_4b0);
                }
                if (pUVar16 == (UObject *)0x0) goto LAB_149c906db;
                pUVar14 = Z_Construct_UClass_UMaterialInterface_NoRegister();
                iVar3 = (int)pUVar14->_padding_;
                if ((*(int *)(*(longlong *)&pUVar16->field_0x10 + 0x38) < iVar3) ||
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)&pUVar16->field_0x10 + 0x30) + (longlong)iVar3 * 8)
                    != &pUVar14->_padding_)) goto LAB_149c906db;
              }
            }
            if (local_4b0.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_4b0.ObjectID.SubPathString.Data.AllocatorInstance.Data);
            }
            FVar27 = (FPCGCrc)((longlong)FVar27 + 0x28);
          } while( true );
        }
        goto LAB_149c913c3;
      }
    }
  }
  pUVar16 = TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&(param_3->Descriptor)._padding_);
  FVar27.bValid = local_408.bValid;
  FVar27._5_3_ = local_408._5_3_;
  FVar27.Value = local_408.Value;
  if (pUVar16 == (UObject *)0x0) goto LAB_149c913c3;
  pUVar14 = Z_Construct_UClass_UStaticMesh_NoRegister();
  FVar10.bValid = local_408.bValid;
  FVar10._5_3_ = local_408._5_3_;
  FVar10.Value = local_408.Value;
  FVar9.bValid = local_408.bValid;
  FVar9._5_3_ = local_408._5_3_;
  FVar9.Value = local_408.Value;
  FVar27.bValid = local_408.bValid;
  FVar27._5_3_ = local_408._5_3_;
  FVar27.Value = local_408.Value;
  iVar13 = (int)pUVar14->_padding_;
  if (((*(int *)(*(longlong *)&pUVar16->field_0x10 + 0x38) < iVar13) ||
      (FVar27 = FVar9,
      (longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&pUVar16->field_0x10 + 0x30) + (longlong)iVar13 * 8) !=
      &pUVar14->_padding_)) || (FVar27 = FVar10, (byte)LogPCG._0_1_ < 2)) goto LAB_149c913c3;
  FSoftObjectPath::ToString((FSoftObjectPath *)&(param_3->Descriptor)._padding_,&local_488);
  pFVar15 = FText::FromString(&local_68,&local_488);
  pFVar17 = FText::AsLocalizable_Advanced_LocText
                      (local_368,L"PCGStaticMeshSpawnerElement",L"MeshLoadFailed",
                       L"Unable to load mesh \'{0}\'");
  pFVar18 = FTextFormat::FTextFormat(&local_58,pFVar17,Default);
  pFVar15 = FText::Format<FText>(&local_378,pFVar18,pFVar15);
  FText::ToString(pFVar15);
  if (param_1 != (FPCGStaticMeshSpawnerContext *)0x0) {
    FPCGContext::GetTaskName((FPCGContext *)param_1,&local_388);
    pUVar28 = (UObject *)&DAT_00000003;
    FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_398);
  }
  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  if ((((ulonglong)pUVar28 & 2) != 0) &&
     (pUVar28 = (UObject *)(ulonglong)((uint)pUVar28 & 0xfffffffd),
     local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_398.Data.AllocatorInstance.Data);
  }
  if ((((ulonglong)pUVar28 & 1) != 0) &&
     (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_388.Data.AllocatorInstance.Data);
  }
  if (local_378.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_378.TextData.Reference + 0x10))();
  }
  local_4b0.ObjectID.SubPathString.Data.AllocatorInstance.Data =
       local_488.Data.AllocatorInstance.Data;
  if (local_368[0].TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_368[0].TextData.Reference + 0x10))();
    local_4b0.ObjectID.SubPathString.Data.AllocatorInstance.Data =
         local_488.Data.AllocatorInstance.Data;
  }
  goto LAB_149c913b1;
LAB_149c906db:
  if (1 < (byte)LogPCG._0_1_) {
    FSoftObjectPath::ToString(&local_4b0.ObjectID,&local_478);
    pFVar15 = FText::FromString(&local_48,&local_478);
    pFVar17 = FText::AsLocalizable_Advanced_LocText
                        (&local_428,L"PCGStaticMeshSpawnerElement",L"OverrideMaterialLoadFailed",
                         L"Unable to load override material \'{0}\'");
    pFVar18 = FTextFormat::FTextFormat(&local_a8,pFVar17,Default);
    pFVar15 = FText::Format<FText>(&local_438,pFVar18,pFVar15);
    FText::ToString(pFVar15);
    if (param_1 != (FPCGStaticMeshSpawnerContext *)0x0) {
      FPCGContext::GetTaskName((FPCGContext *)param_1,&local_448);
      pUVar28 = (UObject *)&DAT_0000000c;
      FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_458);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((((ulonglong)pUVar28 & 8) != 0) &&
       (pUVar28 = (UObject *)(ulonglong)((uint)pUVar28 & 0xfffffff7),
       local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_458.Data.AllocatorInstance.Data);
    }
    if ((((ulonglong)pUVar28 & 4) != 0) &&
       (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_448.Data.AllocatorInstance.Data);
    }
    if (local_438.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_438.TextData.Reference + 0x10))();
    }
    if (local_428.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_428.TextData.Reference + 0x10))();
    }
    if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_478.Data.AllocatorInstance.Data);
    }
  }
LAB_149c913b1:
  FVar27.bValid = local_408.bValid;
  FVar27._5_3_ = local_408._5_3_;
  FVar27.Value = local_408.Value;
  if (local_4b0.ObjectID.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_4b0.ObjectID.SubPathString.Data.AllocatorInstance.Data);
    FVar27.bValid = local_408.bValid;
    FVar27._5_3_ = local_408._5_3_;
    FVar27.Value = local_408.Value;
  }
LAB_149c913c3:
  if (bVar36) {
    local_408 = FVar27;
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// SupportsBasePointDataInputs @ 149c92900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGStaticMeshSpawnerElement::SupportsBasePointDataInputs
          (FPCGStaticMeshSpawnerElement *this,FPCGContext *param_1)

{
  return true;
}

