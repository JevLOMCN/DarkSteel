// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 6

// StaticStruct @ 148c72600

UScriptStruct * __cdecl FTraceQueryTestResultsInner::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTraceQueryTestResultsInner.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FunctionalTesting();
    Z_Registration_Info_UScriptStruct_FTraceQueryTestResultsInner.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTraceQueryTestResultsInner,(UObject *)pUVar1,
                         L"TraceQueryTestResultsInner");
  }
  return Z_Registration_Info_UScriptStruct_FTraceQueryTestResultsInner.OuterSingleton;
}

// FTraceQueryTestResultsInner @ 148c7f9b0

FTraceQueryTestResultsInner * __thiscall
FTraceQueryTestResultsInner::FTraceQueryTestResultsInner(FTraceQueryTestResultsInner *this)

{
  memset(this,0,0x100);
  (this->LineResults).SingleHit.Time = 1.0;
  (this->LineResults).SingleHit.MyItem = -1;
  (this->LineResults).SingleHit.HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->LineResults).SingleHit.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->LineResults).SingleHit.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->LineResults).SingleHit.HitObjectHandle.InstanceIndex = -1;
  (this->LineResults).SingleHit.HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->LineResults).SingleHit.HitObjectHandle.field_0x1d = 0;
  (this->LineResults).SingleNames.ComponentName.ComparisonIndex = 0;
  (this->LineResults).SingleNames.ComponentName.Number = 0;
  (this->LineResults).SingleNames.PhysicalMaterialName.ComparisonIndex = 0;
  (this->LineResults).SingleNames.PhysicalMaterialName.Number = 0;
  (this->LineResults).SingleNames.ActorName.ComparisonIndex = 0;
  (this->LineResults).SingleNames.ActorName.Number = 0;
  (this->LineResults).bSingleResult = false;
  (this->LineResults).MultiHits.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LineResults).MultiHits.ArrayNum = 0;
  (this->LineResults).MultiHits.ArrayMax = 0;
  (this->LineResults).MultiNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LineResults).MultiNames.ArrayNum = 0;
  (this->LineResults).MultiNames.ArrayMax = 0;
  (this->LineResults).bMultiResult = false;
  memset(&this->SphereResults,0,0x100);
  (this->SphereResults).SingleHit.Time = 1.0;
  (this->SphereResults).SingleHit.HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->SphereResults).SingleHit.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->SphereResults).SingleHit.MyItem = -1;
  (this->SphereResults).SingleHit.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->SphereResults).SingleHit.HitObjectHandle.InstanceIndex = -1;
  (this->SphereResults).SingleHit.HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->SphereResults).SingleHit.HitObjectHandle.field_0x1d = 0;
  (this->SphereResults).SingleNames.ComponentName.ComparisonIndex = 0;
  (this->SphereResults).SingleNames.ComponentName.Number = 0;
  (this->SphereResults).SingleNames.PhysicalMaterialName.ComparisonIndex = 0;
  (this->SphereResults).SingleNames.PhysicalMaterialName.Number = 0;
  (this->SphereResults).SingleNames.ActorName.ComparisonIndex = 0;
  (this->SphereResults).SingleNames.ActorName.Number = 0;
  (this->SphereResults).bSingleResult = false;
  (this->SphereResults).MultiHits.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SphereResults).MultiHits.ArrayNum = 0;
  (this->SphereResults).MultiHits.ArrayMax = 0;
  (this->SphereResults).MultiNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SphereResults).MultiNames.ArrayNum = 0;
  (this->SphereResults).MultiNames.ArrayMax = 0;
  (this->SphereResults).bMultiResult = false;
  memset(&this->CapsuleResults,0,0x100);
  (this->CapsuleResults).SingleHit.Time = 1.0;
  (this->CapsuleResults).SingleHit.HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->CapsuleResults).SingleHit.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->CapsuleResults).SingleHit.MyItem = -1;
  (this->CapsuleResults).SingleHit.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->CapsuleResults).SingleHit.HitObjectHandle.InstanceIndex = -1;
  (this->CapsuleResults).SingleHit.HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->CapsuleResults).SingleHit.HitObjectHandle.field_0x1d = 0;
  (this->CapsuleResults).SingleNames.ComponentName.ComparisonIndex = 0;
  (this->CapsuleResults).SingleNames.ComponentName.Number = 0;
  (this->CapsuleResults).SingleNames.PhysicalMaterialName.ComparisonIndex = 0;
  (this->CapsuleResults).SingleNames.PhysicalMaterialName.Number = 0;
  (this->CapsuleResults).SingleNames.ActorName.ComparisonIndex = 0;
  (this->CapsuleResults).SingleNames.ActorName.Number = 0;
  (this->CapsuleResults).bSingleResult = false;
  (this->CapsuleResults).MultiHits.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CapsuleResults).MultiHits.ArrayNum = 0;
  (this->CapsuleResults).MultiHits.ArrayMax = 0;
  (this->CapsuleResults).MultiNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CapsuleResults).MultiNames.ArrayNum = 0;
  (this->CapsuleResults).MultiNames.ArrayMax = 0;
  (this->CapsuleResults).bMultiResult = false;
  memset(&this->BoxResults,0,0x100);
  (this->BoxResults).SingleHit.Time = 1.0;
  (this->BoxResults).SingleHit.HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->BoxResults).SingleHit.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->BoxResults).SingleHit.MyItem = -1;
  (this->BoxResults).SingleHit.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->BoxResults).SingleHit.HitObjectHandle.InstanceIndex = -1;
  (this->BoxResults).SingleHit.HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->BoxResults).SingleHit.HitObjectHandle.field_0x1d = 0;
  (this->BoxResults).SingleNames.ComponentName.ComparisonIndex = 0;
  (this->BoxResults).SingleNames.ComponentName.Number = 0;
  (this->BoxResults).SingleNames.PhysicalMaterialName.ComparisonIndex = 0;
  (this->BoxResults).SingleNames.PhysicalMaterialName.Number = 0;
  (this->BoxResults).SingleNames.ActorName.ComparisonIndex = 0;
  (this->BoxResults).SingleNames.ActorName.Number = 0;
  (this->BoxResults).bSingleResult = false;
  (this->BoxResults).MultiHits.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoxResults).MultiHits.ArrayNum = 0;
  (this->BoxResults).MultiHits.ArrayMax = 0;
  (this->BoxResults).MultiNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoxResults).MultiNames.ArrayNum = 0;
  (this->BoxResults).MultiNames.ArrayMax = 0;
  (this->BoxResults).bMultiResult = false;
  return this;
}

// ~FTraceQueryTestResultsInner @ 148c80f10

void __thiscall
FTraceQueryTestResultsInner::~FTraceQueryTestResultsInner(FTraceQueryTestResultsInner *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->BoxResults).MultiNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoxResults).MultiHits.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CapsuleResults).MultiNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CapsuleResults).MultiHits.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SphereResults).MultiNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SphereResults).MultiHits.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LineResults).MultiNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LineResults).MultiHits.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AssertEqual @ 148c845c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FTraceQueryTestResultsInner::AssertEqual
          (FTraceQueryTestResultsInner *this,FTraceQueryTestResultsInner *param_1,FString *param_2,
          UObject *param_3,AFunctionalTest *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FString local_38;
  
  ::FString::PrintfImpl(&local_38,L"%s_Line");
  bVar1 = FTraceQueryTestResultsInnerMost::AssertEqual
                    (&this->LineResults,&param_1->LineResults,&local_38,param_3,param_4);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_38,L"%s_Sphere");
  bVar2 = FTraceQueryTestResultsInnerMost::AssertEqual
                    (&this->SphereResults,&param_1->SphereResults,&local_38,param_3,param_4);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_38,L"%s_Capsule");
  bVar3 = FTraceQueryTestResultsInnerMost::AssertEqual
                    (&this->CapsuleResults,&param_1->CapsuleResults,&local_38,param_3,param_4);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_38,L"%s_Box");
  bVar4 = FTraceQueryTestResultsInnerMost::AssertEqual
                    (&this->BoxResults,&param_1->BoxResults,&local_38,param_3,param_4);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((((bVar1) && (bVar2)) && (bVar3)) && (bVar4)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

// CaptureNames @ 148c8a830

void __thiscall FTraceQueryTestResultsInner::CaptureNames(FTraceQueryTestResultsInner *this)

{
  FTraceQueryTestResultsInnerMost::CaptureNames(&this->LineResults);
  FTraceQueryTestResultsInnerMost::CaptureNames(&this->SphereResults);
  FTraceQueryTestResultsInnerMost::CaptureNames(&this->CapsuleResults);
  FTraceQueryTestResultsInnerMost::CaptureNames(&this->BoxResults);
  return;
}

// ToString @ 148c9ec40

FString * __thiscall
FTraceQueryTestResultsInner::ToString
          (FTraceQueryTestResultsInner *this,FString *__return_storage_ptr__,
          FTraceChannelTestBatchOptions *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType FVar3;
  FString *pFVar4;
  byte bVar5;
  byte bVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  if (param_1->bLineTrace == false) {
    pFVar4 = ::FString::FString(&local_60,"");
    FVar7.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
  }
  else {
    FTraceQueryTestResultsInnerMost::ToString(&this->LineResults,&local_70);
    ::FString::PrintfImpl(&local_80,L"--LineResults:\n%s\n\n");
    FVar7.Data = local_80.Data.AllocatorInstance.Data;
    local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.Data.ArrayNum = 0;
    local_80.Data.ArrayMax = 0;
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  if (param_1->bSphereTrace == false) {
    pFVar4 = ::FString::FString(&local_60,"");
    bVar6 = 0x20;
  }
  else {
    FTraceQueryTestResultsInnerMost::ToString(&this->SphereResults,&local_50);
    ::FString::PrintfImpl(&local_70,L"--SphereResults:\n%s\n\n");
    pFVar4 = &local_70;
    bVar6 = 0x18;
  }
  local_80.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  if (((bVar6 & 0x20) != 0) &&
     (bVar6 = bVar6 & 0xdf, local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
  {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (((bVar6 & 0x10) != 0) &&
     (bVar6 = bVar6 & 0xef, local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
  {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (((bVar6 & 8) != 0) &&
     (bVar6 = bVar6 & 0xf7, local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
  {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  bVar8 = param_1->bCapsuleTrace == false;
  if (bVar8) {
    pFVar4 = ::FString::FString(&local_50,"");
    bVar5 = 0;
  }
  else {
    FTraceQueryTestResultsInnerMost::ToString(&this->CapsuleResults,&local_60);
    ::FString::PrintfImpl(&local_70,L"--CapsuleResults:\n%s\n\n");
    pFVar4 = &local_70;
    bVar5 = 0xc0;
  }
  pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  if ((bVar8) && (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  bVar6 = bVar6 | bVar5;
  if (((char)bVar6 < '\0') &&
     (bVar6 = bVar5 & 0x7f, local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
  {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (((bVar6 & 0x40) != 0) &&
     (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  bVar8 = param_1->bBoxTrace == false;
  if (bVar8) {
    pFVar4 = ::FString::FString(&local_50,"");
  }
  else {
    FTraceQueryTestResultsInnerMost::ToString(&this->BoxResults,&local_60);
    ::FString::PrintfImpl(&local_70,L"--BoxResults:\n%s\n\n");
    pFVar4 = &local_70;
  }
  pFVar2 = (pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  if ((bVar8) && (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if ((!bVar8) && (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if ((!bVar8) && (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  FVar3.Data = local_80.Data.AllocatorInstance.Data;
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s%s%s%s");
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  return __return_storage_ptr__;
}

