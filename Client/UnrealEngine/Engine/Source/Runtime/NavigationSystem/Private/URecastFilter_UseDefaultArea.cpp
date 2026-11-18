// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 7

// StaticClass @ 146d62fc0

UClass * __cdecl URecastFilter_UseDefaultArea::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URecastFilter_UseDefaultArea.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"RecastFilter_UseDefaultArea",
               &Z_Registration_Info_UClass_URecastFilter_UseDefaultArea.InnerSingleton,
               StaticRegisterNativesURecastFilter_UseDefaultArea,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URecastFilter_UseDefaultArea>,
               InternalVTableHelperCtorCaller<URecastFilter_UseDefaultArea>,local_res8,
               UNavigationQueryFilter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URecastFilter_UseDefaultArea.InnerSingleton;
}

// URecastFilter_UseDefaultArea @ 146d77520

URecastFilter_UseDefaultArea * __thiscall
URecastFilter_UseDefaultArea::URecastFilter_UseDefaultArea
          (URecastFilter_UseDefaultArea *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined2 *)&this->field_0x38 = 0;
  *(undefined2 *)&this->field_0x3c = 0;
  *(undefined ***)this = &___7URecastFilter_UseDefaultArea__6B_;
  return this;
}

// URecastFilter_UseDefaultArea @ 146d77560

URecastFilter_UseDefaultArea * __thiscall
URecastFilter_UseDefaultArea::URecastFilter_UseDefaultArea
          (URecastFilter_UseDefaultArea *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->field_0x38 = 0xffff;
  *(uint *)&this->field_0x40 = *(uint *)&this->field_0x40 & 0xfffffffc;
  *(undefined ***)this = &___7URecastFilter_UseDefaultArea__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined2 *)&this->field_0x3c = 0;
  return this;
}

// ~URecastFilter_UseDefaultArea @ 146d79260

void __thiscall
URecastFilter_UseDefaultArea::~URecastFilter_UseDefaultArea(URecastFilter_UseDefaultArea *this)

{
  *(undefined ***)this = &___7UNavigationQueryFilter__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146da0f50

UClass * __cdecl URecastFilter_UseDefaultArea::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URecastFilter_UseDefaultArea.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"RecastFilter_UseDefaultArea",
               &Z_Registration_Info_UClass_URecastFilter_UseDefaultArea.InnerSingleton,
               StaticRegisterNativesURecastFilter_UseDefaultArea,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URecastFilter_UseDefaultArea>,
               InternalVTableHelperCtorCaller<URecastFilter_UseDefaultArea>,local_res8,
               UNavigationQueryFilter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URecastFilter_UseDefaultArea.InnerSingleton;
}

// InitializeFilter @ 146da3fc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
URecastFilter_UseDefaultArea::InitializeFilter
          (URecastFilter_UseDefaultArea *this,ANavigationData *param_1,UObject *param_2,
          FNavigationQueryFilter *param_3)

{
  FRecastQueryFilter *pFVar1;
  INavigationQueryFilterInterface *pIVar2;
  INavigationQueryFilterInterface *local_28;
  FSharedReferencer<1> local_20;
  
  pFVar1 = ARecastNavMesh::GetNamedFilter(FilterOutAreas);
  pIVar2 = (INavigationQueryFilterInterface *)(**(code **)(*(longlong *)pFVar1 + 0x80))(pFVar1);
  local_28 = pIVar2;
  local_20.ReferenceController = ::operator_new(0x18);
  if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_20.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_20.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VINavigationQueryFilterInterface__U__DefaultDeleter_VINavigationQueryFilterInterface___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_20.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_20.ReferenceController[1]._padding_ = (longlong)pIVar2;
  }
  if (&param_3->QueryFilterImpl != (TSharedPtr<INavigationQueryFilterInterface,1> *)&local_28) {
    (param_3->QueryFilterImpl).Object = pIVar2;
    local_28 = (INavigationQueryFilterInterface *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(param_3->QueryFilterImpl).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  UNavigationQueryFilter::InitializeFilter((UNavigationQueryFilter *)this,param_1,param_2,param_3);
  return;
}

// StaticRegisterNativesURecastFilter_UseDefaultArea @ 146dbaab0

void __cdecl URecastFilter_UseDefaultArea::StaticRegisterNativesURecastFilter_UseDefaultArea(void)

{
  return;
}

