// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 11

// Game_CreateInstance @ 1456bd5e0

FParticleSystemHandle * __thiscall
FParticleSystemStateStreamImpl::Game_CreateInstance
          (FParticleSystemStateStreamImpl *this,FParticleSystemHandle *__return_storage_ptr__,
          FParticleSystemStaticState *param_1,FParticleSystemDynamicState *param_2)

{
  IParticleSystemStateStream *pIVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FParticleSystemHandle *pFVar5;
  
  if ((param_2->SystemAsset).field0_0x0.DebugPtr != (UFXSystemAsset *)0x0) {
    pUVar4 = Z_Construct_UClass_UParticleSystem_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&param_2->SystemAsset,pUVar4);
    if ((bVar3) && ((param_2->SystemAsset).field0_0x0.DebugPtr != (UFXSystemAsset *)0x0)) {
      TStateStream<FParticleSystemStateStreamSettingsCascade>::Game_CreateInstance
                ((TStateStream<FParticleSystemStateStreamSettingsCascade> *)
                 &this->CascadeBackend->_padding_,__return_storage_ptr__,param_1,param_2);
      return __return_storage_ptr__;
    }
  }
  if ((this->OtherBackend == (IParticleSystemStateStream *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OtherBackend",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\StateStream\\ParticleSystemStateStreamImpl.cpp"
                         ,0x1a4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FParticleSystemHandle *)(*pcVar2)();
    return pFVar5;
  }
  pIVar1 = this->OtherBackend;
  if (pIVar1 == (IParticleSystemStateStream *)0x0) {
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  }
  else {
    (**(code **)*pIVar1)(pIVar1,__return_storage_ptr__,param_1,param_2);
  }
  return __return_storage_ptr__;
}

// SetOtherBackend @ 1456bd6c0

void __thiscall
FParticleSystemStateStreamImpl::SetOtherBackend
          (FParticleSystemStateStreamImpl *this,IParticleSystemStateStream *param_1)

{
  this->OtherBackend = param_1;
  return;
}

// Game_BeginTick @ 1456bd6d0

void __thiscall FParticleSystemStateStreamImpl::Game_BeginTick(FParticleSystemStateStreamImpl *this)

{
  return;
}

// Game_EndTick @ 1456bd6e0

void __thiscall
FParticleSystemStateStreamImpl::Game_EndTick(FParticleSystemStateStreamImpl *this,double param_1)

{
  return;
}

// Game_Exit @ 1456bd6f0

void __thiscall FParticleSystemStateStreamImpl::Game_Exit(FParticleSystemStateStreamImpl *this)

{
  return;
}

// Game_GetVoidPointer @ 1456bd700

void * __thiscall
FParticleSystemStateStreamImpl::Game_GetVoidPointer(FParticleSystemStateStreamImpl *this)

{
  return &this[-1].OtherBackend;
}

// Render_Update @ 1456bd710

void __thiscall
FParticleSystemStateStreamImpl::Render_Update(FParticleSystemStateStreamImpl *this,double param_1)

{
  return;
}

// Render_PostUpdate @ 1456bd720

void __thiscall
FParticleSystemStateStreamImpl::Render_PostUpdate(FParticleSystemStateStreamImpl *this)

{
  return;
}

// Render_Exit @ 1456bd730

void __thiscall FParticleSystemStateStreamImpl::Render_Exit(FParticleSystemStateStreamImpl *this)

{
  return;
}

// Render_GarbageCollect @ 1456bd740

void __thiscall
FParticleSystemStateStreamImpl::Render_GarbageCollect(FParticleSystemStateStreamImpl *this)

{
  return;
}

// GetId @ 1456bd750

uint __thiscall FParticleSystemStateStreamImpl::GetId(FParticleSystemStateStreamImpl *this)

{
  return 4;
}

