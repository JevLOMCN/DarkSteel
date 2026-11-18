// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplay
// Functions: 4

// Call @ 14d98a680

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAudioComponentGroup::SetTriggerParameter'::__l2::<lambda_1>,void,UAudioComponent_*>
::Call(void *param_1,UAudioComponent **param_2)

{
  UAudioComponent *pUVar1;
  char cVar2;
  
  pUVar1 = *param_2;
  cVar2 = (**(code **)(*(longlong *)&pUVar1->field_0x250 + 0xa8))(&pUVar1->field_0x250);
  if (cVar2 != '\0') {
    (**(code **)(*(longlong *)&pUVar1->field_0x250 + 0x18))
              (&pUVar1->field_0x250,*(undefined8 *)param_1);
  }
  return;
}

// Call @ 14d98a6d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAudioComponentGroup::UpdateComponentParameters'::__l8::<lambda_1>,void,UAudioComponent_*>
::Call(void *param_1,UAudioComponent **param_2)

{
  `UAudioComponentGroup::UpdateComponentParameters'::__l8::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14d98a6e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAudioParameterComponent::SetParameterInternal'::__l36::<lambda_1>,void,FActiveSound_&>
::Call(void *param_1,FActiveSound *param_2)

{
  int iVar1;
  IParameterTransmitter *pIVar2;
  FAudioParameter *pFVar3;
  ForAnyElementType FStack_18;
  int iStack_10;
  int iStack_c;
  
  pIVar2 = (param_2->InstanceTransmitter).Object;
  if (pIVar2 != (IParameterTransmitter *)0x0) {
    iVar1 = *(int *)((longlong)param_1 + 0x10);
    pFVar3 = *(FAudioParameter **)((longlong)param_1 + 8);
    FStack_18.Data = (FScriptContainerElement *)0x0;
    iStack_10 = iVar1;
    if (iVar1 == 0) {
      iStack_c = 0;
    }
    else {
      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa0,8,iVar1,0,&FStack_18,iVar1,&iStack_c);
      ConstructItems<FAudioParameter,FAudioParameter,int>(FStack_18.Data,pFVar3,iVar1);
    }
    (**(code **)((longlong)*pIVar2 + 0x40))(pIVar2,&FStack_18);
    DestructItems<FAudioParameter,int>((FAudioParameter *)FStack_18.Data,iStack_10);
    if ((FAudioParameter *)FStack_18.Data != (FAudioParameter *)0x0) {
      FMemory::Free(FStack_18.Data);
    }
  }
  return;
}

// Call @ 14d98a6f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAudioComponentGroup::UpdateExtensions'::__l12::<lambda_1>,void,UAudioComponent_*>
::Call(void *param_1,UAudioComponent **param_2)

{
  UAudioComponent *this;
  float *pfVar1;
  
  this = *param_2;
  pfVar1 = *(float **)((longlong)param_1 + 8);
  if (this != (UAudioComponent *)0x0) {
    UAudioComponent::SetVolumeMultiplier(this,*pfVar1);
    UAudioComponent::SetPitchMultiplier(this,pfVar1[1]);
    UAudioComponent::SetLowPassFilterFrequency(this,pfVar1[2]);
  }
  return;
}

