// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 1

// FTransformSubGizmoCommonParams @ 149638e40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FTransformSubGizmoCommonParams * __thiscall
UE::GizmoUtil::FTransformSubGizmoCommonParams::FTransformSubGizmoCommonParams
          (FTransformSubGizmoCommonParams *this,FTransformSubGizmoCommonParams *param_1)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  this->Component = param_1->Component;
  this->TransformProxy = param_1->TransformProxy;
  this->Axis = param_1->Axis;
  this->bAxisIsBasedOnRootComponent = param_1->bAxisIsBasedOnRootComponent;
  (this->TransactionName).field0_0x0.TypedValue.TextData.Reference = (ITextData *)0x0;
  (this->TransactionName).field0_0x0.TypedValue.Flags = 0;
  if ((param_1->TransactionName).field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (this->TransactionName).field0_0x0.TypedValue.TextData.Reference = (ITextData *)0x0;
    pIVar1 = *(ITextData **)&(param_1->TransactionName).field0_0x0;
    (this->TransactionName).field0_0x0.TypedValue.TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    (this->TransactionName).field0_0x0.TypedValue.Flags =
         (param_1->TransactionName).field0_0x0.TypedValue.Flags;
  }
  this->TransactionProvider = param_1->TransactionProvider;
  this->OuterForSubobjects = param_1->OuterForSubobjects;
  this->bManipulatesRootComponent = param_1->bManipulatesRootComponent;
  return this;
}

