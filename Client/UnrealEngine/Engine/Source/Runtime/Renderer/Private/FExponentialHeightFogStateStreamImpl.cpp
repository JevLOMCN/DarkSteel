// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// FExponentialHeightFogStateStreamImpl @ 1456dc6c0

FExponentialHeightFogStateStreamImpl * __thiscall
FExponentialHeightFogStateStreamImpl::FExponentialHeightFogStateStreamImpl
          (FExponentialHeightFogStateStreamImpl *this,FSceneInterface *param_1)

{
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  memset(&this->_padding_,0,0xa8);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  memset(&this->_padding_,0,0xa8);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = (longlong)&_vftable__for__IStateStream__;
  this->_padding_ = (longlong)&_vftable__for__IExponentialHeightFogStateStream__;
  this->_padding_ = (longlong)&_vftable__for__IStateStreamHandleOwner__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->Scene = param_1;
  *(undefined4 *)&this->_padding_ = 1;
  return this;
}

// Render_OnCreate @ 14571cc00

void __thiscall
FExponentialHeightFogStateStreamImpl::Render_OnCreate
          (FExponentialHeightFogStateStreamImpl *this,FExponentialHeightFogStaticState *param_1,
          FExponentialHeightFogDynamicState *param_2,FExponentialHeightFogSceneProxy **param_3,
          bool param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00014571cc0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->Scene->_padding_ + 0x2a0))();
  return;
}

// Render_OnDestroy @ 14571e5b0

void __thiscall
FExponentialHeightFogStateStreamImpl::Render_OnDestroy
          (FExponentialHeightFogStateStreamImpl *this,FExponentialHeightFogStaticState *param_1,
          FExponentialHeightFogDynamicState *param_2,FExponentialHeightFogSceneProxy **param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014571e5ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->Scene->_padding_ + 0x2a8))();
  return;
}

// Render_OnUpdate @ 14571e8b0

void __thiscall
FExponentialHeightFogStateStreamImpl::Render_OnUpdate
          (FExponentialHeightFogStateStreamImpl *this,FExponentialHeightFogStaticState *param_1,
          FExponentialHeightFogDynamicState *param_2,FExponentialHeightFogSceneProxy **param_3)

{
  return;
}

