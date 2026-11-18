// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// FActiveListener @ 14d4e9b20

FActiveListener * __thiscall
FStateTreeDelegateActiveListeners::FActiveListener::FActiveListener
          (FActiveListener *this,FStateTreeDelegateListener *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2,FActiveFrameID param_3,
          FActiveStateID param_4,FStateTreeIndex16 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (param_1->Dispatcher).ID.B;
  uVar2 = (param_1->Dispatcher).ID.C;
  uVar3 = (param_1->Dispatcher).ID.D;
  (this->Listener).Dispatcher.ID.A = (param_1->Dispatcher).ID.A;
  (this->Listener).Dispatcher.ID.B = uVar1;
  (this->Listener).Dispatcher.ID.C = uVar2;
  (this->Listener).Dispatcher.ID.D = uVar3;
  (this->Listener).ID = param_1->ID;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->Delegate,param_2);
  (this->StateID).Value = param_4.Value;
  (this->OwningNodeIndex).Value = param_5.Value;
  (this->FrameID).Value = param_3.Value;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return this;
}

