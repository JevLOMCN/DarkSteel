// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 148676c20

UScriptStruct * __cdecl FSoundSubmixSendInfoBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSoundSubmixSendInfoBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSoundSubmixSendInfoBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase,(UObject *)pUVar1,
                         L"SoundSubmixSendInfoBase");
  }
  return Z_Registration_Info_UScriptStruct_FSoundSubmixSendInfoBase.OuterSingleton;
}

// FSoundSubmixSendInfoBase @ 148695d60

FSoundSubmixSendInfoBase * __thiscall
FSoundSubmixSendInfoBase::FSoundSubmixSendInfoBase(FSoundSubmixSendInfoBase *this)

{
  this->SendLevelControlMethod = Manual;
  (this->SoundSubmix).field0_0x0.DebugPtr = (USoundSubmixBase *)0x0;
  this->DisableManualSendClamp = false;
  this->MinSendLevel = 0.0;
  this->SendLevel = 1.0;
  this->MaxSendLevel = 1.0;
  this->MinSendDistance = 100.0;
  this->MaxSendDistance = 1000.0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->CustomSendLevelCurve);
  return this;
}

// operator= @ 14869cf70

FSoundSubmixSendInfoBase * __thiscall
FSoundSubmixSendInfoBase::operator=
          (FSoundSubmixSendInfoBase *this,FSoundSubmixSendInfoBase *param_1)

{
  USoundSubmixBase *pUVar1;
  
  this->SendLevelControlMethod = param_1->SendLevelControlMethod;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->SoundSubmix).field0_0x0.DebugPtr, pUVar1 != (USoundSubmixBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->SoundSubmix).field0_0x0 = (param_1->SoundSubmix).field0_0x0;
  this->SendLevel = param_1->SendLevel;
  this->DisableManualSendClamp = param_1->DisableManualSendClamp;
  this->MinSendLevel = param_1->MinSendLevel;
  this->MaxSendLevel = param_1->MaxSendLevel;
  this->MinSendDistance = param_1->MinSendDistance;
  this->MaxSendDistance = param_1->MaxSendDistance;
  FRuntimeFloatCurve::operator=(&this->CustomSendLevelCurve,&param_1->CustomSendLevelCurve);
  return this;
}

