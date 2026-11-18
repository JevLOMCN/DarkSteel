// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 8

// StaticClass @ 1471b57a0

UClass * __cdecl UMassRelationEntityDestruction::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassRelationEntityDestruction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntity",L"MassRelationEntityDestruction",
               &Z_Registration_Info_UClass_UMassRelationEntityDestruction.InnerSingleton,
               StaticRegisterNativesUMassRelationEntityDestruction,0x470,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassRelationEntityDestruction>,
               InternalVTableHelperCtorCaller<UMassRelationEntityDestruction>,local_res8,
               UMassRelationObserver::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassRelationEntityDestruction.InnerSingleton;
}

// UMassRelationEntityDestruction @ 1471ddea0

UMassRelationEntityDestruction * __thiscall
UMassRelationEntityDestruction::UMassRelationEntityDestruction
          (UMassRelationEntityDestruction *this,FVTableHelper *param_1)

{
  UMassRelationObserver::UMassRelationObserver((UMassRelationObserver *)this,param_1);
  *(undefined ***)this = &___7UMassRelationEntityDestruction__6B_;
  return this;
}

// UMassRelationEntityDestruction @ 1471dded0

UMassRelationEntityDestruction * __thiscall
UMassRelationEntityDestruction::UMassRelationEntityDestruction(UMassRelationEntityDestruction *this)

{
  UMassRelationObserver::UMassRelationObserver((UMassRelationObserver *)this);
  this->field_0xf1 = 4;
  *(undefined ***)this = &___7UMassRelationEntityDestruction__6B_;
  return this;
}

// ~UMassRelationEntityDestruction @ 1471e11c0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
UMassRelationEntityDestruction::~UMassRelationEntityDestruction
          (UMassRelationEntityDestruction *this)

{
  *(undefined ***)this = &___7UMassRelationObserver__6B_;
  if (*(void **)&this->field_0x460 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x460);
  }
  FMassEntityQuery::~FMassEntityQuery((FMassEntityQuery *)&this->field_0x100);
  *(undefined ***)this = &___7UMassObserverProcessor__6B_;
  UMassProcessor::~UMassProcessor((UMassProcessor *)this);
  return;
}

// operator() @ 1471e3360

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UMassRelationEntityDestruction::Execute'::__l2::<lambda_1>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  FMassRelationFragment *pFVar9;
  longlong lVar10;
  TArrayView<FMassRelationFragment_const_,int> local_48;
  FMassEntityHandle local_38;
  FMassEntityHandle FStack_30;
  FEntityIterator local_28;
  
  if (*(UScriptStruct **)((longlong)this + 8) == (UScriptStruct *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  FMassExecutionContext::GetFragmentView<FMassRelationFragment>
            (param_1,&local_48,*(UScriptStruct **)((longlong)this + 8));
  FMassExecutionContext::CreateEntityIterator(param_1,&local_28);
  while( true ) {
    if (local_28.SerialNumber == 0) {
      return;
    }
    lVar8 = (longlong)local_28.EntityIndex;
    if (local_28.NumEntities <= local_28.EntityIndex) {
      return;
    }
    pFVar2 = *(ForAnyElementType **)this;
    uVar6 = 0;
    if (local_28.EntityIndex < local_48.ArrayNum) {
      uVar6 = (uint)~local_28.EntityIndex >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar10 = (longlong)local_28.EntityIndex;
    pFVar9 = local_48.DataPtr + lVar8;
    uVar6 = 0;
    if (local_28.EntityIndex < local_48.ArrayNum) {
      uVar6 = (uint)~local_28.EntityIndex >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) break;
    local_38 = pFVar9->Subject;
    FStack_30 = local_48.DataPtr[lVar10].Object;
    if ((((FMassEntityHandle *)pFVar2->Data <= &local_38) &&
        (&local_38 <
         (FMassEntityHandle *)pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 2))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar7 + 1;
    pFVar3 = pFVar2->Data;
    *(FMassEntityHandle *)(pFVar3 + (longlong)iVar7 * 0x10) = local_38;
    ((FMassEntityHandle *)(pFVar3 + (longlong)iVar7 * 0x10))[1] = FStack_30;
    local_28.EntityIndex = local_28.EntityIndex + 1;
    if ((((local_28.QueryRuntime)->bCheckProcessorBreaks != false) ||
        ((local_28.QueryRuntime)->BreakFragmentsCount != 0)) &&
       (local_28.EntityIndex < local_28.NumEntities)) {
      FMassExecutionContext::FEntityIterator::TestBreakpoints(&local_28);
    }
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// Execute @ 147216670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UMassRelationEntityDestruction::Execute
          (UMassRelationEntityDestruction *this,FMassEntityManager *param_1,
          FMassExecutionContext *param_2)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *pTVar5;
  ulonglong uVar6;
  TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *pTVar7;
  int iVar8;
  undefined ***pppuVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  FMassEntityHandle *pFVar14;
  FMassEntityHandle *pFVar15;
  longlong lVar16;
  TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
  *this_00;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  undefined1 local_b8 [8];
  FMassEntityHandle *local_b0;
  undefined8 local_a8;
  uint local_a0;
  FMassEntityHandle *local_98;
  FObjectKey local_90;
  TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
  *local_88;
  TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *local_80;
  code *local_78 [2];
  undefined **local_68;
  FMassEntityHandle **local_60;
  UObject *local_58;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pUVar1 = *(UObject **)&this->field_0xe8;
  local_b0 = (FMassEntityHandle *)0x0;
  local_a8 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_50 = (undefined ***)0x0;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMassRelationEntityDestruction::Execute'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_60 = &local_b0;
  local_58 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMassRelationEntityDestruction::Execute'::__l2::<lambda_1>,void,FMassExecutionContext_&>
                ::Call;
  FMassEntityQuery::ForEachEntityChunk
            ((FMassEntityQuery *)&this->field_0x100,param_2,
             (TFunction<void___cdecl(FMassExecutionContext_&)> *)local_78);
  if (local_78[0] != (code *)0x0) {
    pppuVar9 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar9 = local_50;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  if ((uint)local_a8 != 0) {
    local_90.ObjectIndex = *(int *)&this->field_0x450;
    local_90.ObjectSerialNumber = *(int *)&this->field_0x454;
    pTVar5 = TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
                     *)&(((param_2->EntityManager).Object)->RelationManager).RelationsDataMap,
                    (FTypeHandle *)&local_90);
    local_80 = pTVar5;
    if ((pTVar5 == (TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar6 = (ulonglong)(int)(uint)local_a8;
    pFVar15 = local_b0 + uVar6 * 2;
    local_a0 = (uint)local_a8;
    pFVar14 = local_b0;
    local_98 = pFVar15;
    while( true ) {
      if ((uint)local_a8 != (int)uVar6) {
        local_b8[0] = 0;
        `TCheckedPointerIterator<TTuple<FMassEntityHandle,FMassEntityHandle>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_b8);
      }
      if (pFVar14 == pFVar15) break;
      this_00 = (TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
                 *)&pTVar5->field_0xc0;
      local_88 = this_00;
      pTVar7 = TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
               ::Find(this_00,pFVar14);
      uVar12 = 0;
      puVar10 = &pTVar7->field_0x8;
      if (pTVar7 == (TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *)0x0)
      {
        puVar10 = (undefined1 *)0x0;
      }
      if (puVar10 != (undefined1 *)0x0) {
        iVar8 = *(int *)(puVar10 + 0x18);
        uVar13 = pFVar14[1].Index;
        if (0 < iVar8) {
          lVar16 = 0;
          do {
            uVar4 = 0;
            if ((int)uVar12 < iVar8) {
              uVar4 = ~uVar12 >> 0x1f;
            }
            if (uVar4 == 0) {
              local_c0 = (longlong)iVar8;
              local_c8 = (longlong)(int)uVar12;
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            if ((*(uint *)(*(longlong *)(puVar10 + 0x10) + 4 + lVar16) & 0x3fffffff) == uVar13) {
              uVar4 = 0;
              if ((int)uVar12 < *(int *)(puVar10 + 0x18)) {
                uVar4 = ~uVar12 >> 0x1f;
              }
              if (uVar4 == 0) {
                local_c8 = (longlong)(int)uVar12;
                local_c0 = (longlong)*(int *)(puVar10 + 0x18);
                bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar3) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              iVar8 = ~uVar12 + *(int *)(puVar10 + 0x18);
              if (1 < iVar8) {
                iVar8 = 1;
              }
              if (iVar8 != 0) {
                memmove((void *)(*(longlong *)(puVar10 + 0x10) + (longlong)(int)uVar12 * 8),
                        (void *)(*(longlong *)(puVar10 + 0x10) +
                                (longlong)(*(int *)(puVar10 + 0x18) - iVar8) * 8),
                        (longlong)iVar8 << 3);
              }
              *(int *)(puVar10 + 0x18) = *(int *)(puVar10 + 0x18) + -1;
            }
            else {
              uVar12 = uVar12 + 1;
              lVar16 = lVar16 + 8;
            }
            iVar8 = *(int *)(puVar10 + 0x18);
            pFVar15 = local_98;
            this_00 = local_88;
          } while ((int)uVar12 < iVar8);
        }
      }
      pTVar7 = TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
               ::Find(this_00,pFVar14 + 1);
      plVar11 = (longlong *)&pTVar7->field_0x8;
      if (pTVar7 == (TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *)0x0)
      {
        plVar11 = (longlong *)0x0;
      }
      if (plVar11 != (longlong *)0x0) {
        iVar8 = (int)plVar11[1];
        uVar13 = 0;
        uVar12 = pFVar14->Index;
        if (0 < iVar8) {
          lVar16 = 0;
          do {
            uVar4 = 0;
            if ((int)uVar13 < iVar8) {
              uVar4 = ~uVar13 >> 0x1f;
            }
            if (uVar4 == 0) {
              local_c0 = (longlong)iVar8;
              local_c8 = (longlong)(int)uVar13;
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            if ((*(uint *)(*plVar11 + 4 + lVar16) & 0x3fffffff) == uVar12) {
              uVar4 = 0;
              if ((int)uVar13 < (int)plVar11[1]) {
                uVar4 = ~uVar13 >> 0x1f;
              }
              if (uVar4 == 0) {
                local_c8 = (longlong)(int)uVar13;
                local_c0 = (longlong)(int)plVar11[1];
                bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar3) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              iVar8 = ~uVar13 + (int)plVar11[1];
              if (1 < iVar8) {
                iVar8 = 1;
              }
              if (iVar8 != 0) {
                memmove((void *)(*plVar11 + (longlong)(int)uVar13 * 8),
                        (void *)(*plVar11 + (longlong)((int)plVar11[1] - iVar8) * 8),
                        (longlong)iVar8 << 3);
              }
              *(int *)(plVar11 + 1) = (int)plVar11[1] + -1;
            }
            else {
              uVar13 = uVar13 + 1;
              lVar16 = lVar16 + 8;
            }
            iVar8 = (int)plVar11[1];
            pFVar15 = local_98;
          } while ((int)uVar13 < iVar8);
        }
      }
      uVar6 = (ulonglong)local_a0;
      pFVar14 = pFVar14 + 2;
      pTVar5 = local_80;
    }
  }
  if (local_b0 != (FMassEntityHandle *)0x0) {
    FMemory::Free(local_b0);
  }
  return;
}

// GetPrivateStaticClass @ 147224ca0

UClass * __cdecl UMassRelationEntityDestruction::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassRelationEntityDestruction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntity",L"MassRelationEntityDestruction",
               &Z_Registration_Info_UClass_UMassRelationEntityDestruction.InnerSingleton,
               StaticRegisterNativesUMassRelationEntityDestruction,0x470,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassRelationEntityDestruction>,
               InternalVTableHelperCtorCaller<UMassRelationEntityDestruction>,local_res8,
               UMassRelationObserver::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassRelationEntityDestruction.InnerSingleton;
}

// StaticRegisterNativesUMassRelationEntityDestruction @ 147250770

void __cdecl
UMassRelationEntityDestruction::StaticRegisterNativesUMassRelationEntityDestruction(void)

{
  return;
}

