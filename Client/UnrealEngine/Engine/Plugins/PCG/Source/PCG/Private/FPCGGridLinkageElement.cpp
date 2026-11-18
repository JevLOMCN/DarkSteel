// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// FPCGGridLinkageElement @ 149ca3ae0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

FPCGGridLinkageElement * __thiscall
PCGGraphExecutor::FPCGGridLinkageElement::FPCGGridLinkageElement
          (FPCGGridLinkageElement *this,TFunction<bool___cdecl(FPCGContext_*)> *param_1,
          TFunction<FPCGContext_*___cdecl(FPCGInitializeElementParams_const_&)> *param_2,
          EPCGHiGenGrid param_3,EPCGHiGenGrid param_4,EPCGHiGenGrid param_5,FString *param_6,
          UPCGPin *param_7)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  FWeakObjectPtr local_78;
  UPCGPin *local_70;
  longlong local_68;
  longlong local_58 [3];
  longlong *local_40;
  
  local_68 = *(longlong *)param_1;
  local_40 = (longlong *)0x0;
  if (local_68 != 0) {
    puVar2 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar2)(puVar2,local_58);
  }
  *(undefined ***)this = &___7FPCGGenericElement__6B_;
  *(longlong *)&this->field_0x10 = local_68;
  *(undefined8 *)&this->field_0x38 = 0;
  if (local_68 != 0) {
    plVar3 = local_58;
    if (local_40 != (longlong *)0x0) {
      plVar3 = local_40;
    }
    (**(code **)*plVar3)();
  }
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined2 *)&this->field_0x70 = 0x100;
  lVar1 = *(longlong *)param_2;
  *(longlong *)&this->field_0x80 = lVar1;
  *(undefined8 *)&this->field_0xa8 = 0;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar2)();
  }
  if (local_68 != 0) {
    plVar3 = local_58;
    if (local_40 != (longlong *)0x0) {
      plVar3 = local_40;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  this->FromGrid = param_3;
  *(undefined ***)this = &___7FPCGGridLinkageElement_PCGGraphExecutor__6B_;
  this->ToGrid = param_4;
  this->GenerationGrid = param_5;
  ::FString::FString(&this->ResourceKey,param_6);
  (this->UpstreamPin).WeakPtr = (FWeakObjectPtr)0x0;
  local_78.ObjectIndex = 0;
  local_78.ObjectSerialNumber = 0;
  FWeakObjectPtr::operator=(&(this->UpstreamPin).WeakPtr,(FObjectPtr)&local_78);
  if ((param_7 != (UPCGPin *)0x0) && (((uint)param_7->_padding_ >> 0x1e & 1) == 0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_7);
    }
    local_78.ObjectIndex = 0;
    local_78.ObjectSerialNumber = 0;
    local_70 = param_7;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_7);
    }
    FWeakObjectPtr::operator=(&local_78,(FObjectPtr)&local_70);
    (this->UpstreamPin).WeakPtr = local_78;
  }
  if (*(longlong *)param_1 != 0) {
    plVar3 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return this;
}

// IsGridLinkage @ 149ccd640

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall
PCGGraphExecutor::FPCGGridLinkageElement::IsGridLinkage(FPCGGridLinkageElement *this)

{
  return true;
}

// SupportsBasePointDataInputs @ 149cdda50

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
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
PCGGraphExecutor::FPCGGridLinkageElement::SupportsBasePointDataInputs
          (FPCGGridLinkageElement *this,FPCGContext *param_1)

{
  return true;
}

// SupportsGPUResidentData @ 149cdda70

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
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
PCGGraphExecutor::FPCGGridLinkageElement::SupportsGPUResidentData
          (FPCGGridLinkageElement *this,FPCGContext *param_1)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  
  pTVar1 = PCGSystemSwitches::CVarPassGPUDataThroughGridLinks.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1];
    }
  }
  return pTVar1->ShadowedValue[0];
}

