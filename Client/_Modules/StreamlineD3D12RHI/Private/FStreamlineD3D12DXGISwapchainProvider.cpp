// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineD3D12RHI
// Functions: 5

// ~FStreamlineD3D12DXGISwapchainProvider @ 14de67dd0

void __thiscall
FStreamlineD3D12DXGISwapchainProvider::~FStreamlineD3D12DXGISwapchainProvider
          (FStreamlineD3D12DXGISwapchainProvider *this)

{
  return;
}

// CreateSwapChain @ 14de683b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FStreamlineD3D12DXGISwapchainProvider::CreateSwapChain
          (FStreamlineD3D12DXGISwapchainProvider *this,IDXGIFactory *param_1,IUnknown *param_2,
          DXGI_SWAP_CHAIN_DESC *param_3,IDXGISwapChain **param_4)

{
  code *pcVar1;
  wchar_t *pwVar2;
  bool bVar3;
  Result RVar4;
  undefined4 uVar5;
  char *_Str;
  size_t sVar6;
  IDXGIFactory IVar7;
  undefined1 auStack_2b8 [32];
  wchar_t *local_298;
  wchar_t *local_290;
  IDXGIFactory *local_288 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  bVar3 = FStreamlineRHI::IsSwapchainHookingAllowed(this->StreamlineRHI);
  if (bVar3) {
    local_288[0] = param_1;
    RVar4 = SLUpgradeInterface(local_288);
    if (RVar4 != eOk) {
      _Str = sl::getResultAsStr(RVar4);
      local_278._padding_ = 0;
      if (_Str == (char *)0x0) {
        local_278.Ptr = (wchar_t *)0x0;
        local_278.StringLength = 0;
      }
      else {
        sVar6 = strlen(_Str);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_278,_Str,(int)sVar6,Yes);
      }
      pwVar2 = local_278.Ptr;
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"FStreamlineD3D12DXGISwapchainProvider::CreateSwapChain",0x36,Yes);
      local_298 = local_158.Ptr;
      local_290 = pwVar2;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SLResult == sl::Result::eOk",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineD3D12RHI\\Private\\StreamlineD3D12RHI.cpp"
                         ,0x74,L"%s: error upgrading IDXGIFactory (%s)");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return uVar5;
      }
    }
    IVar7 = *local_288[0];
    param_1 = local_288[0];
  }
  else {
    IVar7 = *param_1;
  }
  uVar5 = (**(code **)((longlong)IVar7 + 0x50))(param_1,param_2,param_3,param_4);
  FStreamlineRHI::OnSwapchainCreated(this->StreamlineRHI,*param_4);
  return uVar5;
}

// CreateSwapChainForHwnd @ 14de68540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FStreamlineD3D12DXGISwapchainProvider::CreateSwapChainForHwnd
          (FStreamlineD3D12DXGISwapchainProvider *this,IDXGIFactory2 *param_1,IUnknown *param_2,
          HWND__ *param_3,DXGI_SWAP_CHAIN_DESC1 *param_4,DXGI_SWAP_CHAIN_FULLSCREEN_DESC *param_5,
          IDXGIOutput *param_6,IDXGISwapChain1 **param_7)

{
  code *pcVar1;
  wchar_t *pwVar2;
  bool bVar3;
  Result RVar4;
  undefined4 uVar5;
  char *_Str;
  size_t sVar6;
  IDXGIFactory2 IVar7;
  undefined1 auStack_2e8 [32];
  DXGI_SWAP_CHAIN_FULLSCREEN_DESC *local_2c8;
  IDXGIOutput *local_2c0;
  IDXGISwapChain1 **local_2b8;
  IDXGIFactory2 *local_2a8 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  bVar3 = FStreamlineRHI::IsSwapchainHookingAllowed(this->StreamlineRHI);
  if (bVar3) {
    local_2a8[0] = param_1;
    RVar4 = SLUpgradeInterface(local_2a8);
    if (RVar4 != eOk) {
      _Str = sl::getResultAsStr(RVar4);
      local_298._padding_ = 0;
      if (_Str == (char *)0x0) {
        local_298.Ptr = (wchar_t *)0x0;
        local_298.StringLength = 0;
      }
      else {
        sVar6 = strlen(_Str);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_298,_Str,(int)sVar6,Yes);
      }
      pwVar2 = local_298.Ptr;
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"FStreamlineD3D12DXGISwapchainProvider::CreateSwapChainForHwnd",0x3d,Yes
                );
      local_2c8 = (DXGI_SWAP_CHAIN_FULLSCREEN_DESC *)local_178.Ptr;
      local_2c0 = (IDXGIOutput *)pwVar2;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SLResult == sl::Result::eOk",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineD3D12RHI\\Private\\StreamlineD3D12RHI.cpp"
                         ,0x60,L"%s: error upgrading IDXGIFactory (%s)");
      if ((void *)local_178._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
      if ((void *)local_298._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_298._padding_);
      }
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return uVar5;
      }
    }
    IVar7 = *local_2a8[0];
    param_1 = local_2a8[0];
  }
  else {
    IVar7 = *param_1;
  }
  local_2b8 = param_7;
  local_2c0 = param_6;
  local_2c8 = param_5;
  uVar5 = (**(code **)((longlong)IVar7 + 0x78))(param_1,param_2,param_3,param_4);
  FStreamlineRHI::OnSwapchainCreated(this->StreamlineRHI,*param_7);
  return uVar5;
}

// GetProviderName @ 14de68830

wchar_t * __thiscall
FStreamlineD3D12DXGISwapchainProvider::GetProviderName(FStreamlineD3D12DXGISwapchainProvider *this)

{
  return L"FStreamlineD3D12DXGISwapchainProvider";
}

// SupportsRHI @ 14de68bb0

bool __thiscall
FStreamlineD3D12DXGISwapchainProvider::SupportsRHI
          (FStreamlineD3D12DXGISwapchainProvider *this,ERHIInterfaceType param_1)

{
  return param_1 == D3D12;
}

