// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// FNavigationElement @ 14737b860

FNavigationElement * __thiscall
FNavigationElement::FNavigationElement
          (FNavigationElement *this,UObject *param_1,ulong64 param_2,bool param_3)

{
  UClass *pUVar1;
  INavRelevantInterface *pIVar2;
  
  FNavigationElement(this,param_1,param_2);
  if (param_3) {
    if (param_1 == (UObject *)0x0) {
      pIVar2 = (INavRelevantInterface *)0x0;
    }
    else {
      pUVar1 = Z_Construct_UClass_UNavRelevantInterface_NoRegister();
      pIVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
    }
    InitializeFromInterface(this,pIVar2);
  }
  return this;
}

// FNavigationElement @ 14737b8c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNavigationElement * __thiscall
FNavigationElement::FNavigationElement
          (FNavigationElement *this,INavRelevantInterface *param_1,ulong64 param_2)

{
  int iVar1;
  bool bVar2;
  UActorComponent *this_00;
  UClass *pUVar3;
  ULevel *this_01;
  UActorComponent *local_res8;
  
  this->SubElementId = param_2;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->NavigationDataExportDelegate = 0;
  *(undefined8 *)&(this->NavigationDataExportDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->NavigationDataExportDelegate).field_0x10 = 0;
  *(undefined8 *)&this->CustomGeometryExportDelegate = 0;
  *(undefined8 *)&(this->CustomGeometryExportDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->CustomGeometryExportDelegate).field_0x10 = 0;
  *(undefined8 *)&this->GeometrySliceExportDelegate = 0;
  *(undefined8 *)&(this->GeometrySliceExportDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->GeometrySliceExportDelegate).field_0x10 = 0;
  (this->OwnerUObject).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = (UActorComponent *)0x0;
  (this->BodySetup).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->BodySetup).WeakPtr,(FObjectPtr)&local_res8);
  *&(this->GeometryTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_res8 = (UActorComponent *)0x0;
  *&(this->GeometryTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->GeometryTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->GeometryTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->GeometryTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->GeometryTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->Bounds).IsValid = '\0';
  (this->NavigationParent).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->NavigationParent).WeakPtr,(FObjectPtr)&local_res8);
  this->GeometryExportType = No;
  this->GeometryGatheringMode = Default;
  this->bDirtyAreaOnRegistration = true;
  this->bIsInBaseNavigationData = false;
  this->bIsFromLevelVisibilityChange = false;
  if (param_1 == (INavRelevantInterface *)0x0) goto LAB_14737ba6a;
  this_00 = (UActorComponent *)(**(code **)((longlong)*param_1 + 8))(param_1);
  if (this_00 == (UActorComponent *)0x0) goto LAB_14737ba6a;
  local_res8 = this_00;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  FWeakObjectPtr::operator=(&(this->OwnerUObject).WeakPtr,(FObjectPtr)&local_res8);
  bVar2 = FNavigationSystem::IsInBaseNavmesh((UObject *)this_00);
  this->bIsInBaseNavigationData = bVar2;
  pUVar3 = Z_Construct_UClass_UActorComponent_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar3->_padding_)) {
    pUVar3 = AActor::GetPrivateStaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      pUVar3 = Z_Construct_UClass_ULevel_NoRegister();
      this_01 = (ULevel *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar3);
      goto LAB_14737ba1e;
    }
LAB_14737ba62:
    bVar2 = false;
  }
  else {
    this_01 = UActorComponent::GetComponentLevel(this_00);
LAB_14737ba1e:
    if (this_01 == (ULevel *)0x0) goto LAB_14737ba62;
    bVar2 = ULevel::HasVisibilityChangeRequestPending(this_01);
  }
  this->bIsFromLevelVisibilityChange = bVar2;
LAB_14737ba6a:
  InitializeFromInterface(this,param_1);
  return this;
}

// FNavigationElement @ 14737baa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNavigationElement * __thiscall
FNavigationElement::FNavigationElement(FNavigationElement *this,UObject *param_1,ulong64 param_2)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  ULevel *this_00;
  UObject *local_res8;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->NavigationDataExportDelegate = 0;
  *(undefined8 *)&(this->NavigationDataExportDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->NavigationDataExportDelegate).field_0x10 = 0;
  *(undefined8 *)&this->CustomGeometryExportDelegate = 0;
  *(undefined8 *)&(this->CustomGeometryExportDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->CustomGeometryExportDelegate).field_0x10 = 0;
  *(undefined8 *)&this->GeometrySliceExportDelegate = 0;
  *(undefined8 *)&(this->GeometrySliceExportDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->GeometrySliceExportDelegate).field_0x10 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  (this->OwnerUObject).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&(this->OwnerUObject).WeakPtr,(FObjectPtr)&local_res8);
  this->SubElementId = param_2;
  (this->BodySetup).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = (UObject *)0x0;
  FWeakObjectPtr::operator=(&(this->BodySetup).WeakPtr,(FObjectPtr)&local_res8);
  *&(this->GeometryTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_res8 = (UObject *)0x0;
  *&(this->GeometryTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->GeometryTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->GeometryTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->GeometryTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->GeometryTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->Bounds).IsValid = '\0';
  (this->NavigationParent).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->NavigationParent).WeakPtr,(FObjectPtr)&local_res8);
  this->GeometryExportType = No;
  this->GeometryGatheringMode = Default;
  this->bDirtyAreaOnRegistration = true;
  bVar2 = FNavigationSystem::IsInBaseNavmesh(param_1);
  this->bIsInBaseNavigationData = bVar2;
  if (param_1 == (UObject *)0x0) goto LAB_14737bc54;
  pUVar3 = Z_Construct_UClass_UActorComponent_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar3->_padding_)) {
    if (param_1 == (UObject *)0x0) goto LAB_14737bc54;
    pUVar3 = AActor::GetPrivateStaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_14737bc54;
    pUVar3 = Z_Construct_UClass_ULevel_NoRegister();
    this_00 = (ULevel *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar3);
  }
  else {
    this_00 = UActorComponent::GetComponentLevel((UActorComponent *)param_1);
  }
  if (this_00 != (ULevel *)0x0) {
    bVar2 = ULevel::HasVisibilityChangeRequestPending(this_00);
    this->bIsFromLevelVisibilityChange = bVar2;
    return this;
  }
LAB_14737bc54:
  this->bIsFromLevelVisibilityChange = false;
  return this;
}

// FNavigationElement @ 14737bc80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNavigationElement * __thiscall
FNavigationElement::FNavigationElement
          (FNavigationElement *this,FPrivateToken param_1,UObject *param_2,ulong64 param_3)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  ULevel *this_00;
  UObject *local_res8;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->NavigationDataExportDelegate = 0;
  *(undefined8 *)&(this->NavigationDataExportDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->NavigationDataExportDelegate).field_0x10 = 0;
  *(undefined8 *)&this->CustomGeometryExportDelegate = 0;
  *(undefined8 *)&(this->CustomGeometryExportDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->CustomGeometryExportDelegate).field_0x10 = 0;
  *(undefined8 *)&this->GeometrySliceExportDelegate = 0;
  *(undefined8 *)&(this->GeometrySliceExportDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->GeometrySliceExportDelegate).field_0x10 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  (this->OwnerUObject).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  FWeakObjectPtr::operator=(&(this->OwnerUObject).WeakPtr,(FObjectPtr)&local_res8);
  this->SubElementId = param_3;
  (this->BodySetup).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = (UObject *)0x0;
  FWeakObjectPtr::operator=(&(this->BodySetup).WeakPtr,(FObjectPtr)&local_res8);
  *&(this->GeometryTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_res8 = (UObject *)0x0;
  *&(this->GeometryTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->GeometryTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->GeometryTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->GeometryTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->GeometryTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->Bounds).IsValid = '\0';
  (this->NavigationParent).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->NavigationParent).WeakPtr,(FObjectPtr)&local_res8);
  this->GeometryExportType = No;
  this->GeometryGatheringMode = Default;
  this->bDirtyAreaOnRegistration = true;
  bVar2 = FNavigationSystem::IsInBaseNavmesh(param_2);
  this->bIsInBaseNavigationData = bVar2;
  if (param_2 == (UObject *)0x0) goto LAB_14737be34;
  pUVar3 = Z_Construct_UClass_UActorComponent_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar3->_padding_)) {
    if (param_2 == (UObject *)0x0) goto LAB_14737be34;
    pUVar3 = AActor::GetPrivateStaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_14737be34;
    pUVar3 = Z_Construct_UClass_ULevel_NoRegister();
    this_00 = (ULevel *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_2,pUVar3);
  }
  else {
    this_00 = UActorComponent::GetComponentLevel((UActorComponent *)param_2);
  }
  if (this_00 != (ULevel *)0x0) {
    bVar2 = ULevel::HasVisibilityChangeRequestPending(this_00);
    this->bIsFromLevelVisibilityChange = bVar2;
    return this;
  }
LAB_14737be34:
  this->bIsFromLevelVisibilityChange = false;
  return this;
}

// CreateFromNavRelevantInterface @ 14738ca60

TSharedRef<FNavigationElement_const_,1> * __cdecl
FNavigationElement::CreateFromNavRelevantInterface
          (TSharedRef<FNavigationElement_const_,1> *__return_storage_ptr__,
          INavRelevantInterface *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = ::operator_new(0x130);
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    pTVar1 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar1->SharedReferenceCount = (atomic<int>)0x1;
    pTVar1->WeakReferenceCount = (atomic<int>)0x1;
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController___CBUFNavigationElement___00_SharedPointerInternals__6B_
    ;
    FNavigationElement((FNavigationElement *)(pTVar1 + 1),param_1,0xffffffffffffffff);
  }
  TSharedRef<FNavigationElement_const_,1>::TSharedRef<FNavigationElement_const_,1>
            (__return_storage_ptr__,(FNavigationElement *)(pTVar1 + 1),pTVar1);
  return __return_storage_ptr__;
}

// GetFullName @ 14739b900

FString * __thiscall
FNavigationElement::GetFullName(FNavigationElement *this,FString *__return_storage_ptr__)

{
  UObject *this_00;
  FString local_18;
  
  this_00 = FWeakObjectPtr::Get(&(this->OwnerUObject).WeakPtr);
  if (this->SubElementId == 0xffffffffffffffff) {
    if ((this_00 == (UObject *)0x0) || (*(longlong *)&this_00->field_0x10 == 0)) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0,None);
    }
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s");
  }
  else {
    if ((this_00 == (UObject *)0x0) || (*(longlong *)&this_00->field_0x10 == 0)) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0,None);
    }
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s - %llu");
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetHandle @ 14739c4b0

FNavigationElementHandle * __thiscall
FNavigationElement::GetHandle
          (FNavigationElement *this,FNavigationElementHandle *__return_storage_ptr__)

{
  (__return_storage_ptr__->OwnerUObject).WeakPtr = (this->OwnerUObject).WeakPtr;
  __return_storage_ptr__->SubElementId = this->SubElementId;
  return __return_storage_ptr__;
}

// GetName @ 14739e390

FString * __thiscall
FNavigationElement::GetName(FNavigationElement *this,FString *__return_storage_ptr__)

{
  UObject *pUVar1;
  FName local_res8;
  FString local_18;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->OwnerUObject).WeakPtr);
  if (this->SubElementId == 0xffffffffffffffff) {
    if (pUVar1 == (UObject *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
      local_res8.Number = *(uint *)&pUVar1->field_0x1c;
      ::FName::ToString(&local_res8,&local_18);
    }
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s");
  }
  else {
    if (pUVar1 == (UObject *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
      local_res8.Number = *(uint *)&pUVar1->field_0x1c;
      ::FName::ToString(&local_res8,&local_18);
    }
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s - %llu");
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPathName @ 14739fee0

FString * __thiscall
FNavigationElement::GetPathName(FNavigationElement *this,FString *__return_storage_ptr__)

{
  UObject *this_00;
  FString local_18;
  
  this_00 = FWeakObjectPtr::Get(&(this->OwnerUObject).WeakPtr);
  if (this->SubElementId == 0xffffffffffffffff) {
    if (this_00 == (UObject *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0);
    }
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s");
  }
  else {
    if (this_00 == (UObject *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0);
    }
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s - %llu");
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// InitializeFromInterface @ 1473a53e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNavigationElement::InitializeFromInterface(FNavigationElement *this,INavRelevantInterface *param_1)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  ENavDataGatheringMode EVar7;
  Type TVar8;
  double *pdVar9;
  UObject *pUVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  UObjectBaseUtility *pUVar13;
  FStaticBasicLogRecord *pFVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_c8 [32];
  FString local_a8;
  FDestructionSentinel local_98;
  undefined1 *local_80;
  ulonglong local_38;
  
  if (param_1 == (INavRelevantInterface *)0x0) {
    return;
  }
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  cVar6 = (**(code **)((longlong)*param_1 + 0x28))(param_1);
  this->bDirtyAreaOnRegistration = cVar6 == '\0';
  pdVar9 = (double *)(**(code **)((longlong)*param_1 + 0x18))(param_1,&local_98);
  dVar1 = pdVar9[1];
  (this->Bounds).Min.field0_0x0._s_0.X = *pdVar9;
  (this->Bounds).Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = pdVar9[3];
  (this->Bounds).Min.field0_0x0._s_0.Z = pdVar9[2];
  (this->Bounds).Max.field0_0x0._s_0.X = dVar1;
  uVar3 = *(undefined4 *)((longlong)pdVar9 + 0x24);
  uVar4 = *(undefined4 *)(pdVar9 + 5);
  uVar5 = *(undefined4 *)((longlong)pdVar9 + 0x2c);
  *(undefined4 *)((longlong)&(this->Bounds).Max.field0_0x0 + 8) = *(undefined4 *)(pdVar9 + 4);
  *(undefined4 *)((longlong)&(this->Bounds).Max.field0_0x0 + 0xc) = uVar3;
  *(undefined4 *)((longlong)&(this->Bounds).Max.field0_0x0 + 0x10) = uVar4;
  *(undefined4 *)((longlong)&(this->Bounds).Max.field0_0x0 + 0x14) = uVar5;
  *(double *)&(this->Bounds).IsValid = pdVar9[6];
  EVar7 = (**(code **)((longlong)*param_1 + 0x38))(param_1);
  this->GeometryGatheringMode = EVar7;
  local_a8.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)(**(code **)((longlong)*param_1 + 0x48))(param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)local_a8.Data.AllocatorInstance.Data != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a8.Data.AllocatorInstance.Data);
  }
  FWeakObjectPtr::operator=(&(this->BodySetup).WeakPtr,(FObjectPtr)&local_a8);
  pdVar9 = (double *)(**(code **)((longlong)*param_1 + 0x50))(param_1,&local_98);
  dVar1 = pdVar9[1];
  (this->GeometryTransform).Rotation.XY.m128d_f64[0] = *pdVar9;
  (this->GeometryTransform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = pdVar9[3];
  (this->GeometryTransform).Rotation.ZW.m128d_f64[0] = pdVar9[2];
  (this->GeometryTransform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = pdVar9[5];
  (this->GeometryTransform).Translation.XY.m128d_f64[0] = pdVar9[4];
  (this->GeometryTransform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = pdVar9[7];
  (this->GeometryTransform).Translation.ZW.m128d_f64[0] = pdVar9[6];
  (this->GeometryTransform).Translation.ZW.m128d_f64[1] = dVar1;
  uVar3 = *(undefined4 *)((longlong)pdVar9 + 0x44);
  uVar4 = *(undefined4 *)(pdVar9 + 9);
  uVar5 = *(undefined4 *)((longlong)pdVar9 + 0x4c);
  *(undefined4 *)(this->GeometryTransform).Scale3D.XY.m128d_f64 = *(undefined4 *)(pdVar9 + 8);
  *(undefined4 *)((longlong)(this->GeometryTransform).Scale3D.XY.m128d_f64 + 4) = uVar3;
  *(undefined4 *)((this->GeometryTransform).Scale3D.XY.m128d_f64 + 1) = uVar4;
  *(undefined4 *)((longlong)(this->GeometryTransform).Scale3D.XY.m128d_f64 + 0xc) = uVar5;
  uVar3 = *(undefined4 *)((longlong)pdVar9 + 0x54);
  uVar4 = *(undefined4 *)(pdVar9 + 0xb);
  uVar5 = *(undefined4 *)((longlong)pdVar9 + 0x5c);
  *(undefined4 *)(this->GeometryTransform).Scale3D.ZW.m128d_f64 = *(undefined4 *)(pdVar9 + 10);
  *(undefined4 *)((longlong)(this->GeometryTransform).Scale3D.ZW.m128d_f64 + 4) = uVar3;
  *(undefined4 *)((this->GeometryTransform).Scale3D.ZW.m128d_f64 + 1) = uVar4;
  *(undefined4 *)((longlong)(this->GeometryTransform).Scale3D.ZW.m128d_f64 + 0xc) = uVar5;
  TVar8 = (**(code **)((longlong)*param_1 + 0x58))(param_1);
  this->GeometryExportType = TVar8;
  local_a8.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)(**(code **)((longlong)*param_1 + 0x78))(param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)local_a8.Data.AllocatorInstance.Data != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a8.Data.AllocatorInstance.Data);
  }
  FWeakObjectPtr::operator=(&(this->NavigationParent).WeakPtr,(FObjectPtr)&local_a8);
  pUVar10 = (UObject *)(**(code **)((longlong)*param_1 + 8))(param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->NavigationDataExportDelegate,(FWriteAccessScope *)&local_98);
  local_80 = &(this->NavigationDataExportDelegate).field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_80);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBUFNavigationElement__AEAUFNavigationRelevantData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::`2'::<lambda_1>_>
                ::_vftable_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar10);
    }
    puVar11[3] = 0;
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)pUVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar10);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_a8);
    puVar11[4] = param_1;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  pUVar10 = (UObject *)(**(code **)((longlong)*param_1 + 8))(param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->CustomGeometryExportDelegate,(FWriteAccessScope *)&local_98);
  local_80 = &(this->CustomGeometryExportDelegate).field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_80);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBUFNavigationElement__AEAUFNavigableGeometryExport__AEA_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::`2'::<lambda_2>_>
                ::_vftable_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar10);
    }
    puVar11[3] = 0;
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)pUVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar10);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_a8);
    puVar11[4] = param_1;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  cVar6 = (**(code **)((longlong)*param_1 + 0x20))(param_1);
  if (cVar6 != '\0') {
    pUVar10 = (UObject *)(**(code **)((longlong)*param_1 + 8))(param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->GeometrySliceExportDelegate,(FWriteAccessScope *)&local_98);
    local_80 = &(this->GeometrySliceExportDelegate).field_0x8;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_80);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEBUFNavigationElement__AEAUFNavigableGeometryExport__AEBU__TBox_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::`8'::<lambda_3>_>
                  ::_vftable_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar10);
      }
      puVar11[3] = 0;
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)pUVar10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar10);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_a8);
      puVar11[4] = param_1;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
  }
  if (UE::NavigationElement::Private::bValidateNavigationElementInitialization == false) {
    return;
  }
  if ((this->Bounds).IsValid == '\0') {
    if ((byte)LogNavigation._0_1_ < 3) goto LAB_1473a5883;
    pUVar13 = (UObjectBaseUtility *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if (pUVar13 == (UObjectBaseUtility *)0x0) {
      ::FString::FString(&local_a8,L"None");
      pFVar14 = &::LOG_Static;
    }
    else {
      UObjectBaseUtility::GetPathName(pUVar13,&local_a8,(UObject *)0x0);
      pFVar14 = &::LOG_Static;
    }
  }
  else {
    if (this->bDirtyAreaOnRegistration == false) goto LAB_1473a5883;
    dVar1 = (this->Bounds).Max.field0_0x0._s_0.X - (this->Bounds).Min.field0_0x0._s_0.X;
    dVar2 = (this->Bounds).Max.field0_0x0._s_0.Y - (this->Bounds).Min.field0_0x0._s_0.Y;
    uVar15 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar16 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar16,uVar15) &&
          (double)CONCAT44(uVar16,uVar15) != __real_3f1a36e2e0000000) ||
        (uVar15 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar16 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar16,uVar15) &&
        (double)CONCAT44(uVar16,uVar15) != __real_3f1a36e2e0000000)) ||
       ((byte)LogNavigation._0_1_ < 3)) goto LAB_1473a5883;
    pUVar13 = (UObjectBaseUtility *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if (pUVar13 == (UObjectBaseUtility *)0x0) {
      ::FString::FString(&local_a8,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName(pUVar13,&local_a8,(UObject *)0x0);
    }
    pFVar14 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar14,(FLogCategoryBase *)&LogNavigation);
  if ((UObject *)local_a8.Data.AllocatorInstance.Data != (UObject *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
LAB_1473a5883:
  cVar6 = (**(code **)((longlong)*param_1 + 0x70))(param_1);
  if ((cVar6 == '\0') && (2 < (byte)LogNavigation._0_1_)) {
    pUVar13 = (UObjectBaseUtility *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if (pUVar13 == (UObjectBaseUtility *)0x0) {
      ::FString::FString(&local_a8,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName(pUVar13,&local_a8,(UObject *)0x0);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    if ((UObject *)local_a8.Data.AllocatorInstance.Data != (UObject *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetBodySetup @ 1473b5e00

void __thiscall FNavigationElement::SetBodySetup(FNavigationElement *this,UBodySetup *param_1)

{
  UBodySetup *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UBodySetup *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->BodySetup).WeakPtr,(FObjectPtr)local_res8);
  return;
}

