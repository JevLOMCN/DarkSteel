// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 14732d9e0

UScriptStruct * __cdecl FSoundSourceBusSendInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSoundSourceBusSendInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSoundSourceBusSendInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSoundSourceBusSendInfo,(UObject *)pUVar1,
                         L"SoundSourceBusSendInfo");
  }
  return Z_Registration_Info_UScriptStruct_FSoundSourceBusSendInfo.OuterSingleton;
}

// FSoundSourceBusSendInfo @ 1473409c0

FSoundSourceBusSendInfo * __thiscall
FSoundSourceBusSendInfo::FSoundSourceBusSendInfo
          (FSoundSourceBusSendInfo *this,FSoundSourceBusSendInfo *param_1)

{
  USoundSourceBus *pUVar1;
  UAudioBus *pUVar2;
  UCurveFloat *pUVar3;
  
  this->SourceBusSendLevelControlMethod = param_1->SourceBusSendLevelControlMethod;
  pUVar1 = (param_1->SoundSourceBus).field0_0x0.DebugPtr;
  (this->SoundSourceBus).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (USoundSourceBus *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pUVar2 = (param_1->AudioBus).field0_0x0.DebugPtr;
  (this->AudioBus).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UAudioBus *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->SendLevel = param_1->SendLevel;
  this->MinSendLevel = param_1->MinSendLevel;
  this->MaxSendLevel = param_1->MaxSendLevel;
  this->MinSendDistance = param_1->MinSendDistance;
  this->MaxSendDistance = param_1->MaxSendDistance;
  FRichCurve::FRichCurve
            (&(this->CustomSendLevelCurve).EditorCurveData,
             &(param_1->CustomSendLevelCurve).EditorCurveData);
  pUVar3 = (param_1->CustomSendLevelCurve).ExternalCurve.field0_0x0.DebugPtr;
  (this->CustomSendLevelCurve).ExternalCurve.field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  return this;
}

