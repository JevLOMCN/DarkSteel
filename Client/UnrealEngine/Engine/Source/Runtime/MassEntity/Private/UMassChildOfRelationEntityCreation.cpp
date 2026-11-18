// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 8

// StaticClass @ 1471b5c40

UClass * __cdecl UMassChildOfRelationEntityCreation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassChildOfRelationEntityCreation.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntity",L"MassChildOfRelationEntityCreation",
               &Z_Registration_Info_UClass_UMassChildOfRelationEntityCreation.InnerSingleton,
               StaticRegisterNativesUMassChildOfRelationEntityCreation,0x470,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassChildOfRelationEntityCreation>,
               InternalVTableHelperCtorCaller<UMassChildOfRelationEntityCreation>,local_res8,
               UMassRelationEntityCreation::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassChildOfRelationEntityCreation.InnerSingleton;
}

// UMassChildOfRelationEntityCreation @ 1471dc8e0

UMassChildOfRelationEntityCreation * __thiscall
UMassChildOfRelationEntityCreation::UMassChildOfRelationEntityCreation
          (UMassChildOfRelationEntityCreation *this,FVTableHelper *param_1)

{
  UMassRelationObserver::UMassRelationObserver((UMassRelationObserver *)this,param_1);
  *(undefined ***)this = &___7UMassChildOfRelationEntityCreation__6B_;
  return this;
}

// UMassChildOfRelationEntityCreation @ 1471dc910

UMassChildOfRelationEntityCreation * __thiscall
UMassChildOfRelationEntityCreation::UMassChildOfRelationEntityCreation
          (UMassChildOfRelationEntityCreation *this)

{
  UMassRelationObserver::UMassRelationObserver((UMassRelationObserver *)this);
  this->field_0xf1 = 8;
  *(undefined ***)this = &___7UMassChildOfRelationEntityCreation__6B_;
  *(undefined2 *)&this->field_0x64 = 0x400;
  return this;
}

// ~UMassChildOfRelationEntityCreation @ 1471e0c30

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
UMassChildOfRelationEntityCreation::~UMassChildOfRelationEntityCreation
          (UMassChildOfRelationEntityCreation *this)

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

// operator() @ 1471e3100

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UMassChildOfRelationEntityCreation::Execute'::__l2::<lambda_1>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FMassEntityHandle *pFVar8;
  longlong lVar9;
  longlong lVar10;
  TArrayView<FMassRelationFragment_const_,int> local_68;
  FMassEntityHandle local_58;
  FMassEntityHandle FStack_50;
  FMassEntityHandle local_48;
  FEntityIterator local_40;
  
  if (*(UScriptStruct **)((longlong)this + 8) == (UScriptStruct *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  FMassExecutionContext::GetFragmentView<FMassRelationFragment>
            (param_1,&local_68,*(UScriptStruct **)((longlong)this + 8));
  FMassExecutionContext::CreateEntityIterator(param_1,&local_40);
  while( true ) {
    if (local_40.SerialNumber == 0) {
      return;
    }
    lVar9 = (longlong)local_40.EntityIndex;
    if (local_40.NumEntities <= local_40.EntityIndex) {
      return;
    }
    pFVar2 = *(ForAnyElementType **)this;
    uVar6 = 0;
    if (local_40.EntityIndex < local_68.ArrayNum) {
      uVar6 = (uint)~local_40.EntityIndex >> 0x1f;
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
    lVar10 = (longlong)local_40.EntityIndex;
    local_58 = local_68.DataPtr[lVar9].Subject;
    uVar6 = 0;
    if (local_40.EntityIndex < local_68.ArrayNum) {
      uVar6 = (uint)~local_40.EntityIndex >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) break;
    FStack_50 = local_68.DataPtr[lVar10].Object;
    pFVar8 = TArrayView<FMassEntityHandle,int>::operator[]
                       (&param_1->EntityListView,local_40.EntityIndex);
    local_48 = *pFVar8;
    if ((((FMassEntityHandle *)pFVar2->Data <= &local_58) &&
        (&local_58 <
         (FMassEntityHandle *)pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 3))
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
                        (0x818,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar7 + 1;
    pFVar3 = pFVar2->Data;
    pFVar8 = (FMassEntityHandle *)(pFVar3 + (longlong)iVar7 * 0x18);
    *pFVar8 = local_58;
    pFVar8[1] = FStack_50;
    *(FMassEntityHandle *)(pFVar3 + (longlong)iVar7 * 0x18 + 0x10) = local_48;
    local_40.EntityIndex = local_40.EntityIndex + 1;
    if ((((local_40.QueryRuntime)->bCheckProcessorBreaks != false) ||
        ((local_40.QueryRuntime)->BreakFragmentsCount != 0)) &&
       (local_40.EntityIndex < local_40.NumEntities)) {
      FMassExecutionContext::FEntityIterator::TestBreakpoints(&local_40);
    }
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// Execute @ 147216100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UMassChildOfRelationEntityCreation::Execute
          (UMassChildOfRelationEntityCreation *this,FMassEntityManager *param_1,
          FMassExecutionContext *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  int iVar3;
  UObject *pUVar4;
  code *pcVar5;
  UScriptStruct *this_00;
  int iVar6;
  bool bVar7;
  UPackage *pUVar8;
  IEntityStorageInterface *pIVar9;
  FMassArchetypeData *this_01;
  ulonglong *puVar10;
  undefined ***pppuVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  undefined1 auStackY_d8 [32];
  undefined1 local_a8;
  StorageSelector local_a7 [7];
  ulonglong *local_a0;
  ulonglong local_98;
  FString local_90;
  code *local_78 [2];
  undefined **local_68;
  ulonglong **local_60;
  UObject *local_58;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pUVar4 = *(UObject **)&this->field_0xe8;
  local_a0 = (ulonglong *)0x0;
  local_98 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_50 = (undefined ***)0x0;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMassChildOfRelationEntityCreation::Execute'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_60 = &local_a0;
  local_58 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMassChildOfRelationEntityCreation::Execute'::__l2::<lambda_1>,void,FMassExecutionContext_&>
                ::Call;
  FMassEntityQuery::ForEachEntityChunk
            ((FMassEntityQuery *)&this->field_0x100,param_2,
             (TFunction<void___cdecl(FMassExecutionContext_&)> *)local_78);
  if (local_78[0] != (code *)0x0) {
    pppuVar11 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar11 = local_50;
    }
    (*(code *)(*pppuVar11)[2])();
  }
  iVar6 = (int)local_98;
  uVar12 = (ulonglong)(int)local_98;
  puVar2 = local_a0 + uVar12 * 3;
  puVar13 = local_a0;
LAB_1472161e0:
  do {
    if ((int)uVar12 != iVar6) {
      local_a8 = 0;
      `TCheckedPointerIterator<`UMassChildOfRelationEntityCreation::Execute'::__l2::FRelationInstanceRegistration,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_a8);
    }
    if (puVar13 == puVar2) {
      if (local_a0 != (ulonglong *)0x0) {
        FMemory::Free(local_a0);
      }
      return;
    }
    if (Z_Registration_Info_UScriptStruct_FMassChildOfFragment.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar8 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassChildOfFragment.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassChildOfFragment,(UObject *)pUVar8,
                           L"MassChildOfFragment");
    }
    this_00 = Z_Registration_Info_UScriptStruct_FMassChildOfFragment.OuterSingleton;
    uVar12 = *puVar13;
    if (Z_Registration_Info_UScriptStruct_FMassChildOfFragment.OuterSingleton ==
        (UScriptStruct *)0x0) {
      ::FString::FString(&local_90,L"None");
LAB_1472162ac:
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("UE::Mass::IsA<FMassFragment>(FragmentType)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityManager.h"
                         ,0x24b,L"GetFragmentDataStruct called with an invalid fragment type \'%s\'"
                        );
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton == (UScriptStruct *)0x0) {
        pUVar8 = Z_Construct_UPackage__Script_MassEntity();
        Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FMassFragment,(UObject *)pUVar8,
                             L"MassFragment");
        if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton != (UScriptStruct *)0x0)
        goto LAB_147216267;
LAB_14721628b:
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_90,(UObject *)0x0);
        goto LAB_1472162ac;
      }
LAB_147216267:
      iVar3 = (int)(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_;
      if (((int)this_00->_padding_ < iVar3) ||
         ((longlong *)*(undefined1 **)(this_00->_padding_ + (longlong)iVar3 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (!bVar7) goto LAB_14721628b;
    }
    local_a7[0] = (StorageSelector)0x0;
    pIVar9 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
               ::__l2::Invokers[(param_1->EntityStorage).TypeIndex])
                       (local_a7,&param_1->EntityStorage);
    this_01 = (FMassArchetypeData *)
              (**(code **)((longlong)*pIVar9 + 0x10))(pIVar9,uVar12 & 0xffffffff);
    if ((this_01 == (FMassArchetypeData *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentArchetype",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,0x771,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar10 = FMassArchetypeData::GetFragmentDataForEntity(this_01,this_00,(int)uVar12);
    if ((puVar10 != (ulonglong *)0x0) && (this_00 != (UScriptStruct *)0x0)) {
      if (Z_Registration_Info_UScriptStruct_FMassChildOfFragment.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar8 = Z_Construct_UPackage__Script_MassEntity();
        Z_Registration_Info_UScriptStruct_FMassChildOfFragment.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FMassChildOfFragment,(UObject *)pUVar8,
                             L"MassChildOfFragment");
      }
      if (this_00 != Z_Registration_Info_UScriptStruct_FMassChildOfFragment.OuterSingleton) {
        if (Z_Registration_Info_UScriptStruct_FMassChildOfFragment.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar8 = Z_Construct_UPackage__Script_MassEntity();
          Z_Registration_Info_UScriptStruct_FMassChildOfFragment.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FMassChildOfFragment,(UObject *)pUVar8,
                               L"MassChildOfFragment");
          if (Z_Registration_Info_UScriptStruct_FMassChildOfFragment.OuterSingleton ==
              (UScriptStruct *)0x0) goto LAB_14721640e;
        }
        iVar3 = (int)(Z_Registration_Info_UScriptStruct_FMassChildOfFragment.OuterSingleton)->
                     _padding_;
        if (((int)this_00->_padding_ < iVar3) ||
           ((longlong *)*(undefined1 **)(this_00->_padding_ + (longlong)iVar3 * 8) !=
            &(Z_Registration_Info_UScriptStruct_FMassChildOfFragment.OuterSingleton)->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (!bVar7) goto LAB_14721640e;
      }
      puVar1 = puVar13 + 1;
      puVar13 = puVar13 + 3;
      *puVar10 = *puVar1;
      uVar12 = local_98 & 0xffffffff;
      goto LAB_1472161e0;
    }
LAB_14721640e:
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2026785927291994208>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\Relations\\MassChildOf.cpp"
                       ,0x60,"ChildOfFragment");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar12 = local_98 & 0xffffffff;
    puVar13 = puVar13 + 3;
  } while( true );
}

// GetPrivateStaticClass @ 147224610

UClass * __cdecl UMassChildOfRelationEntityCreation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassChildOfRelationEntityCreation.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntity",L"MassChildOfRelationEntityCreation",
               &Z_Registration_Info_UClass_UMassChildOfRelationEntityCreation.InnerSingleton,
               StaticRegisterNativesUMassChildOfRelationEntityCreation,0x470,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassChildOfRelationEntityCreation>,
               InternalVTableHelperCtorCaller<UMassChildOfRelationEntityCreation>,local_res8,
               UMassRelationEntityCreation::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassChildOfRelationEntityCreation.InnerSingleton;
}

// StaticRegisterNativesUMassChildOfRelationEntityCreation @ 1472506e0

void __cdecl
UMassChildOfRelationEntityCreation::StaticRegisterNativesUMassChildOfRelationEntityCreation(void)

{
  return;
}

