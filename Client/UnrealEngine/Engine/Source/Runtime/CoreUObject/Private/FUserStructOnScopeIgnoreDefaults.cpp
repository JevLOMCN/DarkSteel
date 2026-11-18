// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// FUserStructOnScopeIgnoreDefaults @ 141f66b50

FUserStructOnScopeIgnoreDefaults * __thiscall
FUserStructOnScopeIgnoreDefaults::FUserStructOnScopeIgnoreDefaults
          (FUserStructOnScopeIgnoreDefaults *this,UUserDefinedStruct *param_1)

{
  uint uVar1;
  UObject *pUVar2;
  void *pvVar3;
  UScriptStruct *this_00;
  uint uVar4;
  UUserDefinedStruct *local_res8;
  
  FStructOnScope::FStructOnScope((FStructOnScope *)this);
  *(undefined ***)this = &___7FUserStructOnScopeIgnoreDefaults__6B_;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UUserDefinedStruct *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x8,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->field_0x10 = 0;
  this->field_0x20 = 0;
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x8);
  if (pUVar2 != (UObject *)0x0) {
    uVar4 = *(int *)&pUVar2[2].field_0x8 + -1 + (int)*(short *)&pUVar2[2].field_0xc &
            ~((int)*(short *)&pUVar2[2].field_0xc - 1U);
    uVar1 = 1;
    if (uVar4 != 0) {
      uVar1 = uVar4;
    }
    pvVar3 = FMemory::Malloc((longlong)(int)uVar1,0);
    *(void **)&this->field_0x10 = pvVar3;
    this_00 = (UScriptStruct *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x8);
    UScriptStruct::InitializeStruct(this_00,*(void **)&this->field_0x10,1);
    this->field_0x20 = 1;
  }
  return this;
}

// FUserStructOnScopeIgnoreDefaults @ 141f66c20

FUserStructOnScopeIgnoreDefaults * __thiscall
FUserStructOnScopeIgnoreDefaults::FUserStructOnScopeIgnoreDefaults
          (FUserStructOnScopeIgnoreDefaults *this,UUserDefinedStruct *param_1,uchar *param_2)

{
  FStructOnScope::FStructOnScope((FStructOnScope *)this,(UStruct *)param_1,param_2);
  *(undefined ***)this = &___7FUserStructOnScopeIgnoreDefaults__6B_;
  return this;
}

// Initialize @ 141f8da60

void __thiscall FUserStructOnScopeIgnoreDefaults::Initialize(FUserStructOnScopeIgnoreDefaults *this)

{
  uint uVar1;
  UObject *pUVar2;
  void *pvVar3;
  UScriptStruct *this_00;
  uint uVar4;
  
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x8);
  if (pUVar2 != (UObject *)0x0) {
    uVar4 = *(int *)&pUVar2[2].field_0x8 + -1 + (int)*(short *)&pUVar2[2].field_0xc &
            ~((int)*(short *)&pUVar2[2].field_0xc - 1U);
    uVar1 = 1;
    if (uVar4 != 0) {
      uVar1 = uVar4;
    }
    pvVar3 = FMemory::Malloc((longlong)(int)uVar1,0);
    *(void **)&this->field_0x10 = pvVar3;
    this_00 = (UScriptStruct *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x8);
    UScriptStruct::InitializeStruct(this_00,*(void **)&this->field_0x10,1);
    this->field_0x20 = 1;
  }
  return;
}

// Recreate @ 141f95890

void __thiscall
FUserStructOnScopeIgnoreDefaults::Recreate
          (FUserStructOnScopeIgnoreDefaults *this,UUserDefinedStruct *param_1)

{
  UUserDefinedStruct *local_res8;
  
  (**(code **)(*(longlong *)this + 0x40))();
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UUserDefinedStruct *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x8,(FObjectPtr)&local_res8);
                    /* WARNING: Could not recover jumptable at 0x000141f958df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)this)(this);
  return;
}

