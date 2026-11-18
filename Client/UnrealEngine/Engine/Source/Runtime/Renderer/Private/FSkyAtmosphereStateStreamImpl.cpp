// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// FSkyAtmosphereStateStreamImpl @ 1456dcbe0

FSkyAtmosphereStateStreamImpl * __thiscall
FSkyAtmosphereStateStreamImpl::FSkyAtmosphereStateStreamImpl
          (FSkyAtmosphereStateStreamImpl *this,FSceneInterface *param_1)

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
  this->_padding_ = (longlong)&_vftable__for__ISkyAtmosphereStateStream__;
  this->_padding_ = (longlong)&_vftable__for__IStateStreamHandleOwner__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->Scene = param_1;
  *(undefined4 *)&this->_padding_ = 1;
  return this;
}

// Render_OnCreate @ 14571dee0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FSkyAtmosphereStateStreamImpl::Render_OnCreate
          (FSkyAtmosphereStateStreamImpl *this,FSkyAtmosphereStaticState *param_1,
          FSkyAtmosphereDynamicState *param_2,FSkyAtmosphereSceneProxy **param_3,bool param_4)

{
  FSkyAtmosphereSceneProxy *pFVar1;
  
  pFVar1 = ::operator_new(0x128);
  if (pFVar1 == (FSkyAtmosphereSceneProxy *)0x0) {
    pFVar1 = (FSkyAtmosphereSceneProxy *)0x0;
  }
  else {
    pFVar1 = FSkyAtmosphereSceneProxy::FSkyAtmosphereSceneProxy(pFVar1,param_2);
  }
  *param_3 = pFVar1;
                    /* WARNING: Could not recover jumptable at 0x00014571df45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->Scene->_padding_ + 0x2d0))(this->Scene,pFVar1,param_2->bBuilt);
  return;
}

// Render_OnDestroy @ 14571e7c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FSkyAtmosphereStateStreamImpl::Render_OnDestroy
          (FSkyAtmosphereStateStreamImpl *this,FSkyAtmosphereStaticState *param_1,
          FSkyAtmosphereDynamicState *param_2,FSkyAtmosphereSceneProxy **param_3)

{
  FSkyAtmosphereSceneProxy *this_00;
  
  (**(code **)(this->Scene->_padding_ + 0x2d8))(this->Scene,*param_3);
  this_00 = *param_3;
  if (this_00 != (FSkyAtmosphereSceneProxy *)0x0) {
    FSkyAtmosphereSceneProxy::~FSkyAtmosphereSceneProxy(this_00);
    ::operator_delete(this_00,0x128);
  }
  *param_3 = (FSkyAtmosphereSceneProxy *)0x0;
  return;
}

// Render_OnUpdate @ 14571e900

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FSkyAtmosphereStateStreamImpl::Render_OnUpdate
          (FSkyAtmosphereStateStreamImpl *this,FSkyAtmosphereStaticState *param_1,
          FSkyAtmosphereDynamicState *param_2,FSkyAtmosphereSceneProxy **param_3)

{
  FSkyAtmosphereSceneProxy *pFVar1;
  
  (**(code **)(this->Scene->_padding_ + 0x2d8))();
  pFVar1 = *param_3;
  if (pFVar1 != (FSkyAtmosphereSceneProxy *)0x0) {
    FSkyAtmosphereSceneProxy::~FSkyAtmosphereSceneProxy(pFVar1);
    ::operator_delete(pFVar1,0x128);
  }
  pFVar1 = ::operator_new(0x128);
  if (pFVar1 == (FSkyAtmosphereSceneProxy *)0x0) {
    pFVar1 = (FSkyAtmosphereSceneProxy *)0x0;
  }
  else {
    pFVar1 = FSkyAtmosphereSceneProxy::FSkyAtmosphereSceneProxy(pFVar1,param_2);
  }
  *param_3 = pFVar1;
                    /* WARNING: Could not recover jumptable at 0x00014571e99f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->Scene->_padding_ + 0x2d0))(this->Scene,pFVar1,param_2->bBuilt);
  return;
}

