// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 22

// IsEnabled @ 1437973c0

bool __thiscall
Chaos::TIndexedContainerConstraintHandle<Chaos::FPBDJointConstraints>::IsEnabled
          (TIndexedContainerConstraintHandle<Chaos::FPBDJointConstraints> *this)

{
  bool bVar1;
  
  if (*(FPBDJointConstraints **)&this->field_0x8 != (FPBDJointConstraints *)0x0) {
    bVar1 = FPBDJointConstraints::IsConstraintEnabled
                      (*(FPBDJointConstraints **)&this->field_0x8,*(int *)&this->field_0x18);
    return bVar1;
  }
  return false;
}

// TIndexedContainerConstraintHandle<Chaos::FPBDJointConstraints> @ 143c42eb0

TIndexedContainerConstraintHandle<Chaos::FPBDJointConstraints> * __thiscall
Chaos::TIndexedContainerConstraintHandle<Chaos::FPBDJointConstraints>::
TIndexedContainerConstraintHandle<Chaos::FPBDJointConstraints>
          (TIndexedContainerConstraintHandle<Chaos::FPBDJointConstraints> *this,
          FPBDJointConstraints *param_1,int param_2)

{
  *(FPBDJointConstraints **)&this->field_0x8 = param_1;
  *(undefined ***)this =
       &___7__TIndexedContainerConstraintHandle_VFPBDJointConstraints_Chaos___Chaos__6B_;
  *(undefined8 *)&this->field_0x10 = 0;
  *(int *)&this->field_0x18 = param_2;
  return this;
}

// TIndexedContainerConstraintHandle<Chaos::FPBDJointConstraints> @ 143c42ee0

TIndexedContainerConstraintHandle<Chaos::FPBDJointConstraints> * __thiscall
Chaos::TIndexedContainerConstraintHandle<Chaos::FPBDJointConstraints>::
TIndexedContainerConstraintHandle<Chaos::FPBDJointConstraints>
          (TIndexedContainerConstraintHandle<Chaos::FPBDJointConstraints> *this)

{
  *(undefined4 *)&this->field_0x18 = 0xffffffff;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined ***)this =
       &___7__TIndexedContainerConstraintHandle_VFPBDJointConstraints_Chaos___Chaos__6B_;
  return this;
}

// ~TIndexedContainerConstraintHandle<Chaos::FPBDJointConstraints> @ 143c44ea0

void __thiscall
Chaos::TIndexedContainerConstraintHandle<Chaos::FPBDJointConstraints>::
~TIndexedContainerConstraintHandle<Chaos::FPBDJointConstraints>
          (TIndexedContainerConstraintHandle<Chaos::FPBDJointConstraints> *this)

{
  code *pcVar1;
  bool bVar2;
  
  *(undefined ***)this = &___7FConstraintHandle_Chaos__6B_;
  if (*(longlong *)&this->field_0x10 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GraphEdge == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConstraintHandle.h"
                       ,0x79,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ConcreteContainer @ 143c61fa0

FPBDJointConstraints * __thiscall
Chaos::TIndexedContainerConstraintHandle<Chaos::FPBDJointConstraints>::ConcreteContainer
          (TIndexedContainerConstraintHandle<Chaos::FPBDJointConstraints> *this)

{
  return *(FPBDJointConstraints **)&this->field_0x8;
}

// ConcreteContainer @ 143c61fb0

FPBDJointConstraints * __thiscall
Chaos::TIndexedContainerConstraintHandle<Chaos::FPBDJointConstraints>::ConcreteContainer
          (TIndexedContainerConstraintHandle<Chaos::FPBDJointConstraints> *this)

{
  return *(FPBDJointConstraints **)&this->field_0x8;
}

// RemoveConstraint @ 143c6e1a0

void __thiscall
Chaos::TIndexedContainerConstraintHandle<Chaos::FPBDJointConstraints>::RemoveConstraint
          (TIndexedContainerConstraintHandle<Chaos::FPBDJointConstraints> *this)

{
  FPBDJointConstraints::RemoveConstraint
            (*(FPBDJointConstraints **)&this->field_0x8,*(int *)&this->field_0x18);
  return;
}

// SetEnabled @ 143c73ea0

void __thiscall
Chaos::TIndexedContainerConstraintHandle<Chaos::FPBDJointConstraints>::SetEnabled
          (TIndexedContainerConstraintHandle<Chaos::FPBDJointConstraints> *this,bool param_1)

{
  if (*(FPBDJointConstraints **)&this->field_0x8 != (FPBDJointConstraints *)0x0) {
    FPBDJointConstraints::SetConstraintEnabled
              (*(FPBDJointConstraints **)&this->field_0x8,*(int *)&this->field_0x18,param_1);
    return;
  }
  return;
}

// IsEnabled @ 143ca3230

bool __thiscall
Chaos::TIndexedContainerConstraintHandle<Chaos::FPBDNullConstraints>::IsEnabled
          (TIndexedContainerConstraintHandle<Chaos::FPBDNullConstraints> *this)

{
  longlong *plVar1;
  undefined1 uVar2;
  
  plVar1 = *(longlong **)&this->field_0x8;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ca3242. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,*(undefined4 *)&this->field_0x18);
    return (bool)uVar2;
  }
  return false;
}

// SetEnabled @ 143caa8e0

void __thiscall
Chaos::TIndexedContainerConstraintHandle<Chaos::FPBDNullConstraints>::SetEnabled
          (TIndexedContainerConstraintHandle<Chaos::FPBDNullConstraints> *this,bool param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)&this->field_0x8;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143caa8f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined4 *)&this->field_0x18,param_1);
    return;
  }
  return;
}

// IsEnabled @ 143d59c60

bool __thiscall
Chaos::TIndexedContainerConstraintHandle<Chaos::FPBDRigidSpringConstraints>::IsEnabled
          (TIndexedContainerConstraintHandle<Chaos::FPBDRigidSpringConstraints> *this)

{
  longlong *plVar1;
  undefined1 uVar2;
  
  plVar1 = *(longlong **)&this->field_0x8;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d59c72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,*(undefined4 *)&this->field_0x18);
    return (bool)uVar2;
  }
  return false;
}

// SetEnabled @ 143d6e900

void __thiscall
Chaos::TIndexedContainerConstraintHandle<Chaos::FPBDRigidSpringConstraints>::SetEnabled
          (TIndexedContainerConstraintHandle<Chaos::FPBDRigidSpringConstraints> *this,bool param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)&this->field_0x8;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d6e916. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined4 *)&this->field_0x18,param_1);
    return;
  }
  return;
}

// SetEnabled @ 143d6e930

void __thiscall
Chaos::TIndexedContainerConstraintHandle<Chaos::FPBDSuspensionConstraints>::SetEnabled
          (TIndexedContainerConstraintHandle<Chaos::FPBDSuspensionConstraints> *this,bool param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)&this->field_0x8;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d6e946. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined4 *)&this->field_0x18,param_1);
    return;
  }
  return;
}

// TIndexedContainerConstraintHandle<Chaos::FPBDSuspensionConstraints> @ 143d91250

TIndexedContainerConstraintHandle<Chaos::FPBDSuspensionConstraints> * __thiscall
Chaos::TIndexedContainerConstraintHandle<Chaos::FPBDSuspensionConstraints>::
TIndexedContainerConstraintHandle<Chaos::FPBDSuspensionConstraints>
          (TIndexedContainerConstraintHandle<Chaos::FPBDSuspensionConstraints> *this,
          FPBDSuspensionConstraints *param_1,int param_2)

{
  *(FPBDSuspensionConstraints **)&this->field_0x8 = param_1;
  *(undefined ***)this =
       &___7__TIndexedContainerConstraintHandle_VFPBDSuspensionConstraints_Chaos___Chaos__6B_;
  *(undefined8 *)&this->field_0x10 = 0;
  *(int *)&this->field_0x18 = param_2;
  return this;
}

// TIndexedContainerConstraintHandle<Chaos::FPBDSuspensionConstraints> @ 143d91280

TIndexedContainerConstraintHandle<Chaos::FPBDSuspensionConstraints> * __thiscall
Chaos::TIndexedContainerConstraintHandle<Chaos::FPBDSuspensionConstraints>::
TIndexedContainerConstraintHandle<Chaos::FPBDSuspensionConstraints>
          (TIndexedContainerConstraintHandle<Chaos::FPBDSuspensionConstraints> *this)

{
  *(undefined4 *)&this->field_0x18 = 0xffffffff;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined ***)this =
       &___7__TIndexedContainerConstraintHandle_VFPBDSuspensionConstraints_Chaos___Chaos__6B_;
  return this;
}

// ~TIndexedContainerConstraintHandle<Chaos::FPBDSuspensionConstraints> @ 143d92610

void __thiscall
Chaos::TIndexedContainerConstraintHandle<Chaos::FPBDSuspensionConstraints>::
~TIndexedContainerConstraintHandle<Chaos::FPBDSuspensionConstraints>
          (TIndexedContainerConstraintHandle<Chaos::FPBDSuspensionConstraints> *this)

{
  code *pcVar1;
  bool bVar2;
  
  *(undefined ***)this = &___7FConstraintHandle_Chaos__6B_;
  if (*(longlong *)&this->field_0x10 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GraphEdge == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConstraintHandle.h"
                       ,0x79,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ConcreteContainer @ 143da3b00

FPBDSuspensionConstraints * __thiscall
Chaos::TIndexedContainerConstraintHandle<Chaos::FPBDSuspensionConstraints>::ConcreteContainer
          (TIndexedContainerConstraintHandle<Chaos::FPBDSuspensionConstraints> *this)

{
  return *(FPBDSuspensionConstraints **)&this->field_0x8;
}

// ConcreteContainer @ 143da3b10

FPBDSuspensionConstraints * __thiscall
Chaos::TIndexedContainerConstraintHandle<Chaos::FPBDSuspensionConstraints>::ConcreteContainer
          (TIndexedContainerConstraintHandle<Chaos::FPBDSuspensionConstraints> *this)

{
  return *(FPBDSuspensionConstraints **)&this->field_0x8;
}

// IsEnabled @ 143daf590

bool __thiscall
Chaos::TIndexedContainerConstraintHandle<Chaos::FPBDSuspensionConstraints>::IsEnabled
          (TIndexedContainerConstraintHandle<Chaos::FPBDSuspensionConstraints> *this)

{
  longlong *plVar1;
  undefined1 uVar2;
  
  plVar1 = *(longlong **)&this->field_0x8;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143daf5a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,*(undefined4 *)&this->field_0x18);
    return (bool)uVar2;
  }
  return false;
}

// RemoveConstraint @ 143db3b60

void __thiscall
Chaos::TIndexedContainerConstraintHandle<Chaos::FPBDSuspensionConstraints>::RemoveConstraint
          (TIndexedContainerConstraintHandle<Chaos::FPBDSuspensionConstraints> *this)

{
  FPBDSuspensionConstraints::RemoveConstraint
            (*(FPBDSuspensionConstraints **)&this->field_0x8,*(int *)&this->field_0x18);
  return;
}

// IsEnabled @ 1440e8430

bool __thiscall
Chaos::TIndexedContainerConstraintHandle<Chaos::FPBDPositionConstraints>::IsEnabled
          (TIndexedContainerConstraintHandle<Chaos::FPBDPositionConstraints> *this)

{
  longlong *plVar1;
  undefined1 uVar2;
  
  plVar1 = *(longlong **)&this->field_0x8;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440e8442. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,*(undefined4 *)&this->field_0x18);
    return (bool)uVar2;
  }
  return false;
}

// SetEnabled @ 1440f0aa0

void __thiscall
Chaos::TIndexedContainerConstraintHandle<Chaos::FPBDPositionConstraints>::SetEnabled
          (TIndexedContainerConstraintHandle<Chaos::FPBDPositionConstraints> *this,bool param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)&this->field_0x8;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440f0ab6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined4 *)&this->field_0x18,param_1);
    return;
  }
  return;
}

