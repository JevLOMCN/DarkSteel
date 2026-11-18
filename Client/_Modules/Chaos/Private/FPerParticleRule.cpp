// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 10

// Apply @ 143d407f0

void __thiscall
Chaos::FPerParticleRule::Apply
          (FPerParticleRule *this,TDynamicParticles<double,3> *param_1,double param_2)

{
  double local_res8 [4];
  code *local_38;
  FPerParticleRule **local_30;
  FPerParticleRule *local_28;
  TDynamicParticles<double,3> *local_20;
  double *local_18;
  
  local_18 = local_res8;
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Chaos::FPerParticleRule::ApplyPerParticle<Chaos::TDynamicParticles<double,3>_>'::__l2::<lambda_1>,void,int>
             ::Call;
  local_res8[0] = param_2;
  local_28 = this;
  local_20 = param_1;
  PhysicsParallelFor((int)param_1->_padding_,(TFunctionRef<void___cdecl(int)> *)&local_38,false);
  return;
}

// Apply @ 143d40840

void __thiscall
Chaos::FPerParticleRule::Apply
          (FPerParticleRule *this,TDynamicParticles<double,3> *param_1,double param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000143d40843. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x48))();
  return;
}

// Apply @ 143d40850

void __thiscall
Chaos::FPerParticleRule::Apply
          (FPerParticleRule *this,TPBDParticles<double,3> *param_1,double param_2)

{
  double local_res8 [4];
  code *local_38;
  FPerParticleRule **local_30;
  FPerParticleRule *local_28;
  TPBDParticles<double,3> *local_20;
  double *local_18;
  
  local_18 = local_res8;
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Chaos::FPerParticleRule::ApplyPerParticle<Chaos::TPBDParticles<double,3>_>'::__l2::<lambda_1>,void,int>
             ::Call;
  local_res8[0] = param_2;
  local_28 = this;
  local_20 = param_1;
  PhysicsParallelFor((int)param_1->_padding_,(TFunctionRef<void___cdecl(int)> *)&local_38,false);
  return;
}

// Apply @ 143d408a0

void __thiscall
Chaos::FPerParticleRule::Apply
          (FPerParticleRule *this,TPBDParticles<double,3> *param_1,double param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000143d408a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x40))();
  return;
}

// Apply @ 143d408b0

void __thiscall
Chaos::FPerParticleRule::Apply
          (FPerParticleRule *this,TPBDRigidParticleHandleImp<double,3,0> *param_1,double param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PerParticleRule.h"
                     ,0x32,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Apply @ 143d408f0

void __thiscall
Chaos::FPerParticleRule::Apply
          (FPerParticleRule *this,TPBDRigidParticles<double,3> *param_1,double param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000143d408f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x30))();
  return;
}

// Apply @ 143d40900

void __thiscall
Chaos::FPerParticleRule::Apply(FPerParticleRule *this,TParticles<double,3> *param_1,double param_2)

{
  double local_res8 [4];
  code *local_38;
  FPerParticleRule **local_30;
  FPerParticleRule *local_28;
  TParticles<double,3> *local_20;
  double *local_18;
  
  local_18 = local_res8;
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Chaos::FPerParticleRule::ApplyPerParticle<Chaos::TParticles<double,3>_>'::__l2::<lambda_1>,void,int>
             ::Call;
  local_res8[0] = param_2;
  local_28 = this;
  local_20 = param_1;
  PhysicsParallelFor((int)param_1->_padding_,(TFunctionRef<void___cdecl(int)> *)&local_38,false);
  return;
}

// Apply @ 143d40950

void __thiscall
Chaos::FPerParticleRule::Apply
          (FPerParticleRule *this,TParticles<double,3> *param_1,double param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PerParticleRule.h"
                     ,0x2b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Apply @ 143d40990

void __thiscall
Chaos::FPerParticleRule::Apply
          (FPerParticleRule *this,TRigidParticles<double,3> *param_1,double param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000143d40993. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x48))();
  return;
}

// Apply @ 143d409a0

void __thiscall
Chaos::FPerParticleRule::Apply
          (FPerParticleRule *this,TPBDRigidParticleHandleImp<double,3,1> *param_1,double param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PerParticleRule.h"
                     ,0x31,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

