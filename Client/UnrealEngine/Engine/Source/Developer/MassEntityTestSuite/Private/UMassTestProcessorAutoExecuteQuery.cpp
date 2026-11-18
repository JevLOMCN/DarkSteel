// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 7

// StaticClass @ 1470cdac0

UClass * __cdecl UMassTestProcessorAutoExecuteQuery::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestProcessorAutoExecuteQuery.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestProcessorAutoExecuteQuery",
               &Z_Registration_Info_UClass_UMassTestProcessorAutoExecuteQuery.InnerSingleton,
               StaticRegisterNativesUMassTestProcessorAutoExecuteQuery,0x430,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassTestProcessorAutoExecuteQuery>,
               InternalVTableHelperCtorCaller<UMassTestProcessorAutoExecuteQuery>,local_res8,
               UMassProcessor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestProcessorAutoExecuteQuery.InnerSingleton;
}

// UMassTestProcessorAutoExecuteQuery @ 1470f5e40

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UMassTestProcessorAutoExecuteQuery * __thiscall
UMassTestProcessorAutoExecuteQuery::UMassTestProcessorAutoExecuteQuery
          (UMassTestProcessorAutoExecuteQuery *this,FVTableHelper *param_1)

{
  UMassProcessor::UMassProcessor((UMassProcessor *)this,param_1);
  this->_padding_ = (longlong)&___7UMassTestProcessorAutoExecuteQuery__6B_;
  FMassEntityQuery::FMassEntityQuery(&this->EntityQuery,(UMassProcessor *)this);
  return this;
}

// UMassTestProcessorAutoExecuteQuery @ 1470f5e80

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UMassTestProcessorAutoExecuteQuery * __thiscall
UMassTestProcessorAutoExecuteQuery::UMassTestProcessorAutoExecuteQuery
          (UMassTestProcessorAutoExecuteQuery *this)

{
  UMassProcessor::UMassProcessor((UMassProcessor *)this);
  this->_padding_ = (longlong)&___7UMassTestProcessorAutoExecuteQuery__6B_;
  FMassEntityQuery::FMassEntityQuery(&this->EntityQuery,(UMassProcessor *)this);
  *(byte *)((longlong)&this->_padding_ + 2) = *(byte *)((longlong)&this->_padding_ + 2) & 0xfe;
  return this;
}

// ~UMassTestProcessorAutoExecuteQuery @ 1470f8d00

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
UMassTestProcessorAutoExecuteQuery::~UMassTestProcessorAutoExecuteQuery
          (UMassTestProcessorAutoExecuteQuery *this)

{
  this->_padding_ = (longlong)&___7UMassTestProcessorAutoExecuteQuery__6B_;
  FMassEntityQuery::~FMassEntityQuery(&this->EntityQuery);
  UMassProcessor::~UMassProcessor((UMassProcessor *)this);
  return;
}

// GetPrivateStaticClass @ 147120c00

UClass * __cdecl UMassTestProcessorAutoExecuteQuery::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestProcessorAutoExecuteQuery.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestProcessorAutoExecuteQuery",
               &Z_Registration_Info_UClass_UMassTestProcessorAutoExecuteQuery.InnerSingleton,
               StaticRegisterNativesUMassTestProcessorAutoExecuteQuery,0x430,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassTestProcessorAutoExecuteQuery>,
               InternalVTableHelperCtorCaller<UMassTestProcessorAutoExecuteQuery>,local_res8,
               UMassProcessor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestProcessorAutoExecuteQuery.InnerSingleton;
}

// SetAutoExecuteQuery @ 14719d220

void __thiscall
UMassTestProcessorAutoExecuteQuery::SetAutoExecuteQuery
          (UMassTestProcessorAutoExecuteQuery *this,TSharedPtr<UE::Mass::FQueryExecutor,1> *param_1)

{
  FQueryExecutor *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pFVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pFVar1;
  this->_padding_ = (longlong)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// StaticRegisterNativesUMassTestProcessorAutoExecuteQuery @ 1471abb00

void __cdecl
UMassTestProcessorAutoExecuteQuery::StaticRegisterNativesUMassTestProcessorAutoExecuteQuery(void)

{
  return;
}

