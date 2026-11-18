// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// ~FUpperHullGammaTable @ 145127970

void __thiscall
UE::Color::ACES::FUpperHullGammaTable::~FUpperHullGammaTable(FUpperHullGammaTable *this)

{
  if (*(void **)&this->field_0x60 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x60);
  }
  FTextureWithSRV::~FTextureWithSRV((FTextureWithSRV *)this);
  return;
}

// GetPixelFormat @ 14514df50

EPixelFormat __thiscall
UE::Color::ACES::FUpperHullGammaTable::GetPixelFormat(FUpperHullGammaTable *this)

{
  return PF_R32_FLOAT;
}

// GetSizeX @ 14514e580

uint __thiscall UE::Color::ACES::FUpperHullGammaTable::GetSizeX(FUpperHullGammaTable *this)

{
  return 0x16a;
}

// Update @ 145164650

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Color::ACES::FUpperHullGammaTable::Update
          (FUpperHullGammaTable *this,FRHICommandListImmediate *param_1,FColorSpace *param_2,
          float param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  Table3D *_Src;
  JMhParams *pJVar5;
  Table1D *_Src_00;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float _Y;
  float fVar12;
  undefined1 auStackY_3088 [32];
  FUpdateTextureRegion2D local_3040;
  JMhParams local_3028;
  JMhParams local_2f78;
  Table1D local_2ec8;
  Table3D local_2920;
  JMhParams local_1828;
  uchar local_1778 [1456];
  Table3D local_11c8;
  ulonglong local_c8;
  undefined8 local_28;
  
  local_28 = 0x14516465f;
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_3088;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_UE::Color::ACES::FUpperHullGammaTable::Update(FRHICommandListImmediate&___ptr64,UE::Color::FColorSpace_const&___ptr64,float)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_UE::Color::ACES::FUpperHullGammaTable::Update(FRHICommandListImmediate&___ptr64,UE::Color::FColorSpace_const&___ptr64,float)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_UE::Color::ACES::FUpperHullGammaTable::Update(FRHICommandListImmediate&___ptr64,UE::Color::FColorSpace_const&___ptr64,float)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FColorSpace::FColorSpace
                (&`public:_virtual_void___cdecl_UE::Color::ACES::FUpperHullGammaTable::Update(FRHICommandListImmediate&___ptr64,UE::Color::FColorSpace_const&___ptr64,float)___ptr64'
                  ::__l2::ColorSpaceAP0,ACESAP0);
      _Init_thread_footer(&`public:_virtual_void___cdecl_UE::Color::ACES::FUpperHullGammaTable::Update(FRHICommandListImmediate&___ptr64,UE::Color::FColorSpace_const&___ptr64,float)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  _Src = MakeGamutTable(&local_2920,param_2,param_3);
  memcpy(&local_11c8,_Src,0x10f8);
  fVar9 = __real_3c23d70a;
  fVar11 = param_3 * __real_3c23d70a;
  pJVar5 = InitJMhParams(&local_3028,
                         &`public:_virtual_void___cdecl_UE::Color::ACES::FUpperHullGammaTable::Update(FRHICommandListImmediate&___ptr64,UE::Color::FColorSpace_const&___ptr64,float)___ptr64'
                          ::__l2::ColorSpaceAP0);
  local_1828.F_L = pJVar5->F_L;
  local_1828.z = pJVar5->z;
  local_1828.A_w = pJVar5->A_w;
  local_1828.A_w_J = pJVar5->A_w_J;
  local_1828.XYZ_w.field0_0x0._0_8_ = *(undefined8 *)&(pJVar5->XYZ_w).field0_0x0;
  local_1828._24_8_ = *(undefined8 *)((longlong)&(pJVar5->XYZ_w).field0_0x0 + 8);
  local_1828.D_RGB.field0_0x0._4_8_ = *(undefined8 *)((longlong)&(pJVar5->D_RGB).field0_0x0 + 4);
  local_1828._padding_ = pJVar5->_padding_;
  local_1828.MATRIX_RGB_to_CAM16.M[0]._0_8_ = *(undefined8 *)(pJVar5->MATRIX_RGB_to_CAM16).M[0];
  local_1828.MATRIX_RGB_to_CAM16.M[0]._8_8_ =
       *(undefined8 *)((pJVar5->MATRIX_RGB_to_CAM16).M[0] + 2);
  local_1828.MATRIX_RGB_to_CAM16.M[1]._0_8_ = *(undefined8 *)(pJVar5->MATRIX_RGB_to_CAM16).M[1];
  local_1828.MATRIX_RGB_to_CAM16.M[1]._8_8_ =
       *(undefined8 *)((pJVar5->MATRIX_RGB_to_CAM16).M[1] + 2);
  local_1828.MATRIX_RGB_to_CAM16.M[2]._0_8_ = *(undefined8 *)(pJVar5->MATRIX_RGB_to_CAM16).M[2];
  local_1828.MATRIX_RGB_to_CAM16.M[2]._8_8_ =
       *(undefined8 *)((pJVar5->MATRIX_RGB_to_CAM16).M[2] + 2);
  local_1828.MATRIX_RGB_to_CAM16.M[3]._0_8_ = *(undefined8 *)(pJVar5->MATRIX_RGB_to_CAM16).M[3];
  local_1828.MATRIX_RGB_to_CAM16.M[3]._8_8_ =
       *(undefined8 *)((pJVar5->MATRIX_RGB_to_CAM16).M[3] + 2);
  local_1828.MATRIX_CAM16_to_RGB.M[1]._0_8_ = *(undefined8 *)(pJVar5->MATRIX_CAM16_to_RGB).M[1];
  local_1828.MATRIX_CAM16_to_RGB.M[1]._8_8_ =
       *(undefined8 *)((pJVar5->MATRIX_CAM16_to_RGB).M[1] + 2);
  local_1828.MATRIX_CAM16_to_RGB.M[0]._0_8_ = *(undefined8 *)(pJVar5->MATRIX_CAM16_to_RGB).M[0];
  local_1828.MATRIX_CAM16_to_RGB.M[0]._8_8_ =
       *(undefined8 *)((pJVar5->MATRIX_CAM16_to_RGB).M[0] + 2);
  local_1828.MATRIX_CAM16_to_RGB.M[2]._0_8_ = *(undefined8 *)(pJVar5->MATRIX_CAM16_to_RGB).M[2];
  local_1828.MATRIX_CAM16_to_RGB.M[2]._8_8_ =
       *(undefined8 *)((pJVar5->MATRIX_CAM16_to_RGB).M[2] + 2);
  local_1828.MATRIX_CAM16_to_RGB.M[3]._0_8_ = *(undefined8 *)(pJVar5->MATRIX_CAM16_to_RGB).M[3];
  local_1828.MATRIX_CAM16_to_RGB.M[3]._8_8_ =
       *(undefined8 *)((pJVar5->MATRIX_CAM16_to_RGB).M[3] + 2);
  fVar6 = powf((float)((uint)param_3 & __xmm_7fffffff7fffffff7fffffff7fffffff) * local_1828.F_L *
               fVar9,__real_3ed70a3d);
  fVar10 = __real_3f800000;
  fVar7 = (float)copysignf(__real_3f800000,param_3);
  fVar12 = fVar10 / local_1828.A_w_J;
  _Y = local_1828.z * __real_3f170a3d;
  fVar8 = logf(fVar11);
  fVar8 = fVar8 * ___real_40016efa + ___real_4120353f;
  fVar9 = powf((float)((uint)fVar8 & __xmm_7fffffff7fffffff7fffffff7fffffff) * local_1828.F_L *
               fVar9,__real_3ed70a3d);
  fVar10 = (float)copysignf(fVar10,fVar8);
  fVar8 = log10f(fVar11);
  pJVar5 = InitJMhParams(&local_2f78,param_2);
  local_1828.F_L = pJVar5->F_L;
  local_1828.z = pJVar5->z;
  local_1828.A_w = pJVar5->A_w;
  local_1828.A_w_J = pJVar5->A_w_J;
  local_1828.XYZ_w.field0_0x0._0_8_ = *(undefined8 *)&(pJVar5->XYZ_w).field0_0x0;
  local_1828._24_8_ = *(undefined8 *)((longlong)&(pJVar5->XYZ_w).field0_0x0 + 8);
  local_1828.D_RGB.field0_0x0._4_8_ = *(undefined8 *)((longlong)&(pJVar5->D_RGB).field0_0x0 + 4);
  local_1828._padding_ = pJVar5->_padding_;
  local_1828.MATRIX_RGB_to_CAM16.M[1]._0_8_ = *(undefined8 *)(pJVar5->MATRIX_RGB_to_CAM16).M[1];
  local_1828.MATRIX_RGB_to_CAM16.M[1]._8_8_ =
       *(undefined8 *)((pJVar5->MATRIX_RGB_to_CAM16).M[1] + 2);
  local_1828.MATRIX_RGB_to_CAM16.M[0]._0_8_ = *(undefined8 *)(pJVar5->MATRIX_RGB_to_CAM16).M[0];
  local_1828.MATRIX_RGB_to_CAM16.M[0]._8_8_ =
       *(undefined8 *)((pJVar5->MATRIX_RGB_to_CAM16).M[0] + 2);
  local_1828.MATRIX_RGB_to_CAM16.M[2]._0_8_ = *(undefined8 *)(pJVar5->MATRIX_RGB_to_CAM16).M[2];
  local_1828.MATRIX_RGB_to_CAM16.M[2]._8_8_ =
       *(undefined8 *)((pJVar5->MATRIX_RGB_to_CAM16).M[2] + 2);
  local_1828.MATRIX_RGB_to_CAM16.M[3]._0_8_ = *(undefined8 *)(pJVar5->MATRIX_RGB_to_CAM16).M[3];
  local_1828.MATRIX_RGB_to_CAM16.M[3]._8_8_ =
       *(undefined8 *)((pJVar5->MATRIX_RGB_to_CAM16).M[3] + 2);
  local_1828.MATRIX_CAM16_to_RGB.M[0]._0_8_ = *(undefined8 *)(pJVar5->MATRIX_CAM16_to_RGB).M[0];
  local_1828.MATRIX_CAM16_to_RGB.M[0]._8_8_ =
       *(undefined8 *)((pJVar5->MATRIX_CAM16_to_RGB).M[0] + 2);
  local_1828.MATRIX_CAM16_to_RGB.M[1]._0_8_ = *(undefined8 *)(pJVar5->MATRIX_CAM16_to_RGB).M[1];
  local_1828.MATRIX_CAM16_to_RGB.M[1]._8_8_ =
       *(undefined8 *)((pJVar5->MATRIX_CAM16_to_RGB).M[1] + 2);
  local_1828.MATRIX_CAM16_to_RGB.M[2]._0_8_ = *(undefined8 *)(pJVar5->MATRIX_CAM16_to_RGB).M[2];
  local_1828.MATRIX_CAM16_to_RGB.M[2]._8_8_ =
       *(undefined8 *)((pJVar5->MATRIX_CAM16_to_RGB).M[2] + 2);
  local_1828.MATRIX_CAM16_to_RGB.M[3]._0_8_ = *(undefined8 *)(pJVar5->MATRIX_CAM16_to_RGB).M[3];
  local_1828.MATRIX_CAM16_to_RGB.M[3]._8_8_ =
       *(undefined8 *)((pJVar5->MATRIX_CAM16_to_RGB).M[3] + 2);
  fVar11 = fVar8 * ___real_3d8f5c29 + ___real_3f91eb85;
  fVar8 = fVar8 * ___real_40173333 + ___real_3faccccd;
  fVar9 = powf(((fVar9 * __real_43c80000) / (fVar9 + __real_41d90a3d)) * fVar12,_Y);
  fVar10 = fVar9 * fVar10 * __real_42c80000;
  fVar9 = powf(((fVar6 * __real_43c80000) / (fVar6 + __real_41d90a3d)) * fVar12,_Y);
  _Src_00 = MakeUpperHullGamma(&local_2ec8,&local_11c8,param_3,fVar9 * fVar7 * __real_42c80000,
                               fVar10,fVar8,fVar11,&local_1828);
  memcpy(local_1778,_Src_00,0x5a8);
  iVar3 = (**(code **)(*(longlong *)this + 0x30))(this);
  if (iVar3 != 0x16a) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSizeX() == UpperHullGammaTable.TotalSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\ACESUtils.cpp"
                       ,0x348,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = (**(code **)(*(longlong *)this + 0x30))(this);
  uVar4 = (**(code **)(*(longlong *)this + 0x38))(this);
  local_3040.Width = (**(code **)(*(longlong *)this + 0x30))(this);
  local_3040.DestX = 0;
  local_3040.DestY = 0;
  local_3040.SrcX = 0;
  local_3040.SrcY = 0;
  local_3040.Height = uVar4;
  FRHICommandListBase::UpdateTexture2D
            ((FRHICommandListBase *)param_1,*(FRHITexture **)&this->field_0x20,0,&local_3040,
             iVar3 << 2,local_1778);
  return;
}

