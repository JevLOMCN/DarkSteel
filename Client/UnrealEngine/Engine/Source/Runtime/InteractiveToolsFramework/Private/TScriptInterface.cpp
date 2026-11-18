// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 5

// operator=<UGizmoAxisRotationParameterSource_*_&> @ 14962f2f0

TScriptInterface<IGizmoFloatParameterSource> * __thiscall
TScriptInterface<IGizmoFloatParameterSource>::operator=<UGizmoAxisRotationParameterSource_*_&>
          (TScriptInterface<IGizmoFloatParameterSource> *this,
          UGizmoAxisRotationParameterSource **param_1)

{
  UGizmoAxisRotationParameterSource *pUVar1;
  UGizmoAxisRotationParameterSource *pUVar2;
  longlong *plVar3;
  
  pUVar1 = *param_1;
  pUVar2 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 != (UGizmoAxisRotationParameterSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
    pUVar2 = *param_1;
  }
  plVar3 = &pUVar2->_padding_;
  if (pUVar2 == (UGizmoAxisRotationParameterSource *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UGizmoAxisRotationParameterSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UGizmoAxisRotationParameterSource **)this = pUVar1;
  *(longlong **)&this->field_0x8 = plVar3;
  return this;
}

// operator=<UGizmoAxisScaleParameterSource_*_&> @ 14962f370

TScriptInterface<IGizmoFloatParameterSource> * __thiscall
TScriptInterface<IGizmoFloatParameterSource>::operator=<UGizmoAxisScaleParameterSource_*_&>
          (TScriptInterface<IGizmoFloatParameterSource> *this,
          UGizmoAxisScaleParameterSource **param_1)

{
  UGizmoAxisScaleParameterSource *pUVar1;
  UGizmoAxisScaleParameterSource *pUVar2;
  longlong *plVar3;
  
  pUVar1 = *param_1;
  pUVar2 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 != (UGizmoAxisScaleParameterSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
    pUVar2 = *param_1;
  }
  plVar3 = &pUVar2->_padding_;
  if (pUVar2 == (UGizmoAxisScaleParameterSource *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UGizmoAxisScaleParameterSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UGizmoAxisScaleParameterSource **)this = pUVar1;
  *(longlong **)&this->field_0x8 = plVar3;
  return this;
}

// operator=<UGizmoComponentAxisSource_*_&> @ 149673540

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TScriptInterface<IGizmoAxisSource> * __thiscall
TScriptInterface<IGizmoAxisSource>::operator=<UGizmoComponentAxisSource_*_&>
          (TScriptInterface<IGizmoAxisSource> *this,UGizmoComponentAxisSource **param_1)

{
  UGizmoComponentAxisSource *pUVar1;
  UGizmoComponentAxisSource *pUVar2;
  longlong *plVar3;
  
  pUVar1 = *param_1;
  pUVar2 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UGizmoComponentAxisSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
    pUVar2 = *param_1;
  }
  plVar3 = &pUVar2->_padding_;
  if (pUVar2 == (UGizmoComponentAxisSource *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UGizmoComponentAxisSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UGizmoComponentAxisSource **)this = pUVar1;
  *(longlong **)&this->field_0x8 = plVar3;
  return this;
}

// operator=<UGizmoTransformChangeStateTarget_*_&> @ 1496735c0

TScriptInterface<IGizmoStateTarget> * __thiscall
TScriptInterface<IGizmoStateTarget>::operator=<UGizmoTransformChangeStateTarget_*_&>
          (TScriptInterface<IGizmoStateTarget> *this,UGizmoTransformChangeStateTarget **param_1)

{
  UGizmoTransformChangeStateTarget *pUVar1;
  UGizmoTransformChangeStateTarget *pUVar2;
  longlong *plVar3;
  
  pUVar1 = *param_1;
  pUVar2 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 != (UGizmoTransformChangeStateTarget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
    pUVar2 = *param_1;
  }
  plVar3 = &pUVar2->_padding_;
  if (pUVar2 == (UGizmoTransformChangeStateTarget *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UGizmoTransformChangeStateTarget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UGizmoTransformChangeStateTarget **)this = pUVar1;
  *(longlong **)&this->field_0x8 = plVar3;
  return this;
}

// operator=<UGizmoComponentAxisSource_*> @ 149673640

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TScriptInterface<IGizmoAxisSource> * __thiscall
TScriptInterface<IGizmoAxisSource>::operator=<UGizmoComponentAxisSource_*>
          (TScriptInterface<IGizmoAxisSource> *this,UGizmoComponentAxisSource **param_1)

{
  UGizmoComponentAxisSource *pUVar1;
  UGizmoComponentAxisSource *pUVar2;
  longlong *plVar3;
  
  pUVar1 = *param_1;
  pUVar2 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UGizmoComponentAxisSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
    pUVar2 = *param_1;
  }
  plVar3 = &pUVar2->_padding_;
  if (pUVar2 == (UGizmoComponentAxisSource *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UGizmoComponentAxisSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UGizmoComponentAxisSource **)this = pUVar1;
  *(longlong **)&this->field_0x8 = plVar3;
  return this;
}

