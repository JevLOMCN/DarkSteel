// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 10

// FRingModulation @ 1444f21f0

FRingModulation * __thiscall Audio::FRingModulation::FRingModulation(FRingModulation *this)

{
  (this->Patch).Object = (FPatchOutput *)0x0;
  (this->Patch).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FOsc::FOsc(&this->Osc);
  this->ModulationFrequency = 800.0;
  this->ModulationDepth = 0.5;
  this->DryLevel = 0.0;
  this->WetLevel = 1.0;
  this->Scale = 0.5;
  this->NumChannels = 0;
  (this->ModulationBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModulationBuffer).ArrayNum = 0;
  (this->ModulationBuffer).ArrayMax = 0;
  return this;
}

// ~FRingModulation @ 1444f4590

void __thiscall Audio::FRingModulation::~FRingModulation(FRingModulation *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ModulationBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Osc)._padding_ = (longlong)&___7FOsc_Audio__6B_;
  IOscBase::~IOscBase((IOscBase *)&this->Osc);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Patch).SharedReferenceCount.ReferenceController);
  return;
}

// Init @ 1445078f0

void __thiscall Audio::FRingModulation::Init(FRingModulation *this,float param_1,int param_2)

{
  (**(code **)((this->Osc)._padding_ + 8))(&this->Osc,param_1,0,0,1);
  if (this->ModulationFrequency != *(float *)&(this->Osc)._padding_) {
    *(float *)&(this->Osc)._padding_ = this->ModulationFrequency;
    *(undefined1 *)((longlong)&(this->Osc)._padding_ + 1) = 1;
  }
  (**(code **)((this->Osc)._padding_ + 0x28))(&this->Osc);
  (**(code **)((this->Osc)._padding_ + 0x10))(&this->Osc);
  this->NumChannels = param_2;
  return;
}

// ProcessAudio @ 14450e970

void __thiscall
Audio::FRingModulation::ProcessAudio
          (FRingModulation *this,float *param_1,int param_2,float *param_3)

{
  TArray<float,TSizedDefaultAllocator<32>_> *this_00;
  FPatchOutput *this_01;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uStack_bc;
  undefined4 uStack_ac;
  undefined4 uStack_9c;
  undefined4 uStack_8c;
  TArrayView<float,int> local_88;
  TArrayView<float_const_,int> local_78;
  TArrayView<float,int> local_68;
  TArrayView<float_const_,int> local_58;
  TArrayView<float_const_,int> local_48 [2];
  
  this_00 = &this->ModulationBuffer;
  lVar5 = 0;
  if ((this->ModulationBuffer).ArrayNum != param_2 * this->NumChannels) {
    (this->ModulationBuffer).ArrayNum = 0;
    if ((this->ModulationBuffer).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&this_00->AllocatorInstance,0,&(this->ModulationBuffer).ArrayMax);
    }
    TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed(this_00,param_2 * this->NumChannels);
  }
  this_01 = (this->Patch).Object;
  if (this_01 == (FPatchOutput *)0x0) {
    pFVar1 = (this_00->AllocatorInstance).Data;
    if (0 < param_2) {
      do {
        uVar6 = (**(code **)((this->Osc)._padding_ + 0x20))(&this->Osc,0);
        *(undefined4 *)(pFVar1 + lVar5 * 4) = uVar6;
        lVar5 = lVar5 + 1;
      } while (lVar5 < param_2);
    }
  }
  else {
    FPatchOutput::PopAudio
              (this_01,(float *)(this_00->AllocatorInstance).Data,(this->ModulationBuffer).ArrayNum,
               true);
  }
  if ((param_2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this_00->AllocatorInstance).Data;
  if ((param_2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_88._12_4_ = uStack_bc;
  local_88.ArrayNum = param_2;
  uVar3._4_4_ = uStack_9c;
  uVar3._0_4_ = param_2;
  local_88.DataPtr = (float *)pFVar1;
  local_78.DataPtr = param_1;
  local_78._8_8_ = uVar3;
  ArrayMultiplyInPlace(&local_78,&local_88);
  local_68._12_4_ = uStack_ac;
  local_68.ArrayNum = param_2;
  local_58._12_4_ = uStack_8c;
  local_58.ArrayNum = param_2;
  local_68.DataPtr = param_3;
  local_58.DataPtr = (float *)pFVar1;
  local_48[0].DataPtr = param_1;
  local_48[0]._8_8_ = uVar3;
  ArrayWeightedSum(local_48,this->DryLevel,&local_58,this->Scale,&local_68);
  return;
}

// SetExternalPatchSource @ 144519eb0

void __thiscall
Audio::FRingModulation::SetExternalPatchSource
          (FRingModulation *this,TSharedPtr<Audio::FPatchOutput,1> *param_1)

{
  FPatchOutput *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pFVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->Patch).SharedReferenceCount.ReferenceController;
  (this->Patch).Object = pFVar1;
  (this->Patch).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetModulationDepth @ 14451b870

void __thiscall Audio::FRingModulation::SetModulationDepth(FRingModulation *this,float param_1)

{
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= __real_bf800000) {
    param_1 = __real_bf800000;
  }
  this->ModulationDepth = param_1;
  this->Scale = param_1 * this->WetLevel;
  return;
}

// SetModulationFrequency @ 14451b8a0

void __thiscall Audio::FRingModulation::SetModulationFrequency(FRingModulation *this,float param_1)

{
  if (__real_461c4000 <= param_1) {
    param_1 = __real_461c4000;
  }
  if (param_1 <= __real_41200000) {
    param_1 = __real_41200000;
  }
  if (param_1 != *(float *)&(this->Osc)._padding_) {
    *(float *)&(this->Osc)._padding_ = param_1;
    *(undefined1 *)((longlong)&(this->Osc)._padding_ + 1) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014451b8ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->Osc)._padding_ + 0x28))(&this->Osc);
  return;
}

// SetModulatorWaveType @ 14451b8e0

void __thiscall Audio::FRingModulation::SetModulatorWaveType(FRingModulation *this,Type param_1)

{
  (this->Osc).OscType = param_1;
  return;
}

// SetWetLevel @ 14451d080

void __thiscall Audio::FRingModulation::SetWetLevel(FRingModulation *this,float param_1)

{
  this->WetLevel = param_1;
  this->Scale = param_1 * this->ModulationDepth;
  return;
}

// UpdateScale @ 1445201f0

void __thiscall Audio::FRingModulation::UpdateScale(FRingModulation *this)

{
  this->Scale = this->WetLevel * this->ModulationDepth;
  return;
}

