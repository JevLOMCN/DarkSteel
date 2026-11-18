// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 8

// StaticClass @ 1471b5480

UClass * __cdecl UMassRelationEntityGuardDog::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassRelationEntityGuardDog.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntity",L"MassRelationEntityGuardDog",
               &Z_Registration_Info_UClass_UMassRelationEntityGuardDog.InnerSingleton,
               StaticRegisterNativesUMassRelationEntityGuardDog,0x470,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassRelationEntityGuardDog>,
               InternalVTableHelperCtorCaller<UMassRelationEntityGuardDog>,local_res8,
               UMassRelationObserver::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassRelationEntityGuardDog.InnerSingleton;
}

// UMassRelationEntityGuardDog @ 1471ddf00

UMassRelationEntityGuardDog * __thiscall
UMassRelationEntityGuardDog::UMassRelationEntityGuardDog
          (UMassRelationEntityGuardDog *this,FVTableHelper *param_1)

{
  UMassRelationObserver::UMassRelationObserver((UMassRelationObserver *)this,param_1);
  *(undefined ***)this = &___7UMassRelationEntityGuardDog__6B_;
  return this;
}

// UMassRelationEntityGuardDog @ 1471ddf30

UMassRelationEntityGuardDog * __thiscall
UMassRelationEntityGuardDog::UMassRelationEntityGuardDog(UMassRelationEntityGuardDog *this)

{
  UMassRelationObserver::UMassRelationObserver((UMassRelationObserver *)this);
  this->field_0xf1 = 2;
  *(undefined ***)this = &___7UMassRelationEntityGuardDog__6B_;
  return this;
}

// ~UMassRelationEntityGuardDog @ 1471e1210

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
UMassRelationEntityGuardDog::~UMassRelationEntityGuardDog(UMassRelationEntityGuardDog *this)

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

// Execute @ 147216b10

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UMassRelationEntityGuardDog::Execute
          (UMassRelationEntityGuardDog *this,FMassEntityManager *param_1,
          FMassExecutionContext *param_2)

{
  FMassArchetypeData *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  FMassEntityQuery::CacheArchetypes((FMassEntityQuery *)&this->field_0x100);
  pFVar1 = (param_2->EntityCollection).Archetype.ArchetypeHandle.DataPtr.Object;
  pTVar2 = (param_2->EntityCollection).Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.
           ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  plVar3 = *(longlong **)&this->field_0x3f8;
  plVar4 = plVar3 + (longlong)*(int *)&this->field_0x400 * 2;
  if (plVar3 != plVar4) {
    while ((FMassArchetypeData *)*plVar3 != pFVar1) {
      plVar3 = plVar3 + 2;
      if (plVar3 == plVar4) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        return;
      }
    }
    `UMassRelationEntityGuardDog::Execute'::__l2::<lambda_1>::operator()(local_res8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// GetPrivateStaticClass @ 147224d60

UClass * __cdecl UMassRelationEntityGuardDog::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassRelationEntityGuardDog.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntity",L"MassRelationEntityGuardDog",
               &Z_Registration_Info_UClass_UMassRelationEntityGuardDog.InnerSingleton,
               StaticRegisterNativesUMassRelationEntityGuardDog,0x470,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassRelationEntityGuardDog>,
               InternalVTableHelperCtorCaller<UMassRelationEntityGuardDog>,local_res8,
               UMassRelationObserver::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassRelationEntityGuardDog.InnerSingleton;
}

// StaticRegisterNativesUMassRelationEntityGuardDog @ 147250780

void __cdecl UMassRelationEntityGuardDog::StaticRegisterNativesUMassRelationEntityGuardDog(void)

{
  return;
}

// operator() @ 150502df0

bool __thiscall `UMassRelationEntityGuardDog::Execute'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5842619672616239233>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5842619672616239233>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

