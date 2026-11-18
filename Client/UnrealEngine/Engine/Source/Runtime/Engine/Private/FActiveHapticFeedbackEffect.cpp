// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 14727ccf0

UScriptStruct * __cdecl FActiveHapticFeedbackEffect::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FActiveHapticFeedbackEffect.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FActiveHapticFeedbackEffect.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect,(UObject *)pUVar1,
                         L"ActiveHapticFeedbackEffect");
  }
  return Z_Registration_Info_UScriptStruct_FActiveHapticFeedbackEffect.OuterSingleton;
}

// Update @ 147c09d40

bool __thiscall
FActiveHapticFeedbackEffect::Update
          (FActiveHapticFeedbackEffect *this,float param_1,FHapticFeedbackValues *param_2)

{
  UHapticFeedbackEffect_Base *pUVar1;
  float fVar2;
  float fVar3;
  
  pUVar1 = (this->HapticEffect).field0_0x0.DebugPtr;
  if (pUVar1 != (UHapticFeedbackEffect_Base *)0x0) {
    fVar2 = (float)(**(code **)(*(longlong *)pUVar1 + 0x2c0))();
    fVar3 = param_1 + this->PlayTime;
    this->PlayTime = fVar3;
    if ((fVar3 <= fVar2) && (fVar2 != 0.0)) {
      (this->HapticBuffer).RawData = (uchar *)0x0;
      param_2->HapticBuffer = &this->HapticBuffer;
      pUVar1 = (this->HapticEffect).field0_0x0.DebugPtr;
      (**(code **)(*(longlong *)pUVar1 + 0x2b8))(pUVar1,this->PlayTime,param_2);
      if ((this->HapticBuffer).RawData == (uchar *)0x0) {
        param_2->HapticBuffer = (FHapticFeedbackBuffer *)0x0;
      }
      param_2->Amplitude = param_2->Amplitude * this->Scale;
      if ((param_2->HapticBuffer == (FHapticFeedbackBuffer *)0x0) ||
         (param_2->HapticBuffer->ScaleFactor = this->Scale,
         param_2->HapticBuffer->bFinishedPlaying == false)) {
        return true;
      }
      param_2->HapticBuffer = (FHapticFeedbackBuffer *)0x0;
    }
  }
  return false;
}

// FActiveHapticFeedbackEffect @ 14834a0f0

FActiveHapticFeedbackEffect * __thiscall
FActiveHapticFeedbackEffect::FActiveHapticFeedbackEffect
          (FActiveHapticFeedbackEffect *this,UHapticFeedbackEffect_Base *param_1,float param_2,
          bool param_3)

{
  UHapticFeedbackEffect_Base *pUVar1;
  
  (this->HapticEffect).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UHapticFeedbackEffect_Base *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  if (__real_41200000 <= param_2) {
    param_2 = __real_41200000;
  }
  this->bLoop = param_3;
  this->PlayTime = 0.0;
  (this->HapticBuffer).CurrentPtr = 0;
  (this->HapticBuffer).BufferLength = 0;
  (this->HapticBuffer).SamplesSent = 0;
  (this->HapticBuffer).bFinishedPlaying = false;
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  (this->HapticBuffer).SamplingRate = 0;
  (this->HapticBuffer).bUseStereo = false;
  (this->HapticBuffer).CurrentSampleIndex[0] = 0;
  (this->HapticBuffer).CurrentSampleIndex[1] = 0;
  pUVar1 = (this->HapticEffect).field0_0x0.DebugPtr;
  this->Scale = param_2;
  (**(code **)(*(longlong *)pUVar1 + 0x2b0))();
  return this;
}

