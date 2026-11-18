// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 23

// FD3D11Viewport @ 14596d040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FD3D11Viewport * __thiscall
FD3D11Viewport::FD3D11Viewport
          (FD3D11Viewport *this,FD3D11DynamicRHI *param_1,HWND__ *param_2,uint param_3,uint param_4,
          bool param_5,EPixelFormat param_6)

{
  int *piVar1;
  TRefCountPtr<IDXGIOutput> *pTVar2;
  ID3D11Device *pIVar3;
  FD3D11DynamicRHI *pFVar4;
  FScriptContainerElement *pFVar5;
  IDXGIFactory1 *pIVar6;
  IDXGISwapChain *pIVar7;
  FD3D11Texture *this_00;
  FCommandList *pFVar8;
  code *pcVar9;
  FName FVar10;
  IDXGIOutput *pIVar11;
  bool bVar12;
  EPixelFormat EVar13;
  char cVar14;
  int iVar15;
  DXGI_FORMAT_conflict DVar16;
  int iVar17;
  uint uVar18;
  FD3D11Viewport *pFVar19;
  IModularFeatures *pIVar20;
  longlong lVar21;
  wchar_t *pwVar22;
  FD3D11Texture *this_01;
  FRenderCommandList *this_02;
  FRenderCommandTag *pFVar23;
  ulonglong uVar24;
  IDXGIOutput *pIVar25;
  undefined ***pppuVar26;
  TArray<FD3D11Viewport_*,TSizedDefaultAllocator<32>_> *pTVar27;
  ForAnyElementType FVar28;
  uint uVar29;
  longlong *plVar31;
  TRefCountPtr<IDXGISwapChain> *pTVar32;
  undefined1 auStackY_298 [32];
  bool local_248 [8];
  ForAnyElementType local_240;
  uint local_238;
  uint uStack_234;
  uint local_230 [2];
  longlong *local_228;
  int local_220;
  EDisplayOutputFormat local_21c;
  EDisplayColorGamut local_218 [2];
  FD3D11Viewport *local_210;
  longlong *local_208;
  undefined8 *local_200;
  longlong *local_1f8;
  IDXGIOutput *local_1f0;
  IDXGISwapChain *local_1e8;
  longlong *local_1e0;
  undefined8 local_1d8;
  FD3D11DynamicRHI *local_1d0;
  TVector2<double>_u_0 local_1c8;
  TVector2<double>_u_0 local_1b8;
  FString local_1a8;
  uint local_198;
  uint local_194;
  undefined8 local_190;
  DXGI_FORMAT_conflict local_188;
  undefined8 local_184;
  undefined8 local_17c;
  undefined4 local_174;
  uint local_170;
  undefined4 local_16c;
  HWND__ *local_168;
  uint local_160;
  DXGI_SWAP_EFFECT local_15c;
  uint local_158;
  undefined4 local_154;
  tagRECT local_148;
  uint local_138;
  uint local_134;
  DXGI_FORMAT_conflict local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  DXGI_SCALING local_118;
  DXGI_SWAP_EFFECT local_114;
  undefined4 local_110;
  uint local_10c;
  undefined8 local_108;
  DXGI_FORMAT_conflict local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined8 local_e4;
  uint local_dc;
  code *local_d8 [2];
  undefined **local_c8;
  FD3D11Viewport *pFStack_c0;
  undefined8 local_b8;
  undefined ***local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  uint local_98;
  undefined1 local_88 [16];
  undefined **local_78;
  FD3D11Viewport *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  byte local_58;
  ulonglong local_48;
  longlong *plVar30;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_298;
  local_1d0 = param_1;
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_Viewport);
  plVar31 = (longlong *)0x0;
  this->SizeX = param_3;
  this->_padding_ = (longlong)&___7FD3D11Viewport__6B_;
  pTVar2 = &this->ForcedFullscreenOutput;
  this->SizeY = param_4;
  this->bIsFullscreen = param_5;
  this->D3DRHI = param_1;
  this->WindowHandle = param_2;
  this->PixelFormat = param_6;
  this->DisplayColorGamut = sRGB_D65;
  this->DisplayOutputFormat = SDR_sRGB;
  this->bAllowTearing = false;
  (this->SwapChain).Reference = (IDXGISwapChain *)0x0;
  (this->BackBuffer).Reference = (FD3D11Texture *)0x0;
  pTVar2->Reference = (IDXGIOutput *)0x0;
  this->LastFlipTime = 0;
  this->LastFrameComplete = 0;
  this->LastCompleteTime = 0;
  this->SyncCounter = 0;
  this->bSyncedLastFrame = false;
  this->MaximumFrameLatency = 3;
  this->PresentFailCount = 0;
  this->ValidState = (TAtomic<unsigned_int>)0x0;
  (this->FrameSyncEvent).D3DRHI = param_1;
  (this->FrameSyncEvent).Query.Reference = (ID3D11Query *)0x0;
  local_1d8 = 0;
  pIVar3 = (((this->FrameSyncEvent).D3DRHI)->Direct3DDevice).Reference;
  iVar15 = (**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,&local_1d8);
  if (iVar15 < 0) {
    VerifyD3D11Result(iVar15,"D3DRHI->GetDevice()->CreateQuery(&QueryDesc,Query.GetInitReference())"
                      ,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Query.cpp"
                      ,0x1b1,(((this->FrameSyncEvent).D3DRHI)->Direct3DDevice).Reference);
  }
  (this->CustomPresent).Reference = (FRHICustomPresent *)0x0;
  bVar12 = IsInGameThread();
  if ((!bVar12) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11Viewport.cpp"
                          ,0x35,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    pFVar19 = (FD3D11Viewport *)(*pcVar9)();
    return pFVar19;
  }
  pFVar4 = this->D3DRHI;
  pTVar27 = &pFVar4->Viewports;
  pFVar5 = (pTVar27->AllocatorInstance).Data;
  local_210 = this;
  if (((pFVar5 <= (FScriptContainerElement *)&local_210) &&
      ((FScriptContainerElement *)&local_210 < pFVar5 + (longlong)(pFVar4->Viewports).ArrayMax * 8))
     && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar12)) {
    pcVar9 = (code *)swi(3);
    pFVar19 = (FD3D11Viewport *)(*pcVar9)();
    return pFVar19;
  }
  iVar15 = (pFVar4->Viewports).ArrayNum;
  piVar1 = &(pFVar4->Viewports).ArrayMax;
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar27->AllocatorInstance,piVar1);
  }
  pFVar5 = (pTVar27->AllocatorInstance).Data;
  (pFVar4->Viewports).ArrayNum = iVar15 + 1;
  *(FD3D11Viewport **)(pFVar5 + (longlong)iVar15 * 8) = local_210;
  (**(code **)(this->D3DRHI->_padding_ + 0x540))();
  EVar13 = FD3D11DynamicRHI::GetDisplayFormat(param_1,param_6);
  this->PixelFormat = EVar13;
  pIVar20 = IModularFeatures::Get();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FName___cdecl_IDXGISwapchainProvider::GetModularFeatureName(void)'::
       __l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_IDXGISwapchainProvider::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_IDXGISwapchainProvider::GetModularFeatureName(void)'::__l2
     ::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_IDXGISwapchainProvider::GetModularFeatureName(void)'
                    ::__l2::FeatureName,L"DXGISwapchainProvider");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_IDXGISwapchainProvider::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar10 = `public:_static_class_FName___cdecl_IDXGISwapchainProvider::GetModularFeatureName(void)'
           ::__l2::FeatureName;
  local_240.Data = (FScriptContainerElement *)0x0;
  local_238 = 0;
  uStack_234 = 0;
  iVar15 = (**(code **)((longlong)*pIVar20 + 0x18))
                     (pIVar20,`public:_static_class_FName___cdecl_IDXGISwapchainProvider::GetModularFeatureName(void)'
                              ::__l2::FeatureName);
  plVar30 = plVar31;
  if (0 < iVar15) {
    do {
      lVar21 = (**(code **)((longlong)*pIVar20 + 0x20))(pIVar20,FVar10,plVar30);
      local_208 = (longlong *)(lVar21 + -8);
      if (lVar21 == 0) {
        local_208 = plVar31;
      }
      if (((local_240.Data <= (FScriptContainerElement *)&local_208) &&
          ((FScriptContainerElement *)&local_208 < local_240.Data + (longlong)(int)uStack_234 * 8))
         && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar12)) {
        pcVar9 = (code *)swi(3);
        pFVar19 = (FD3D11Viewport *)(*pcVar9)();
        return pFVar19;
      }
      if (local_238 == uStack_234) {
        local_238 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_240,(int *)&uStack_234);
      }
      uVar18 = local_238 + 1;
      uVar29 = (int)plVar30 + 1;
      plVar30 = (longlong *)(ulonglong)uVar29;
      *(longlong **)(local_240.Data + (longlong)(int)local_238 * 8) = local_208;
      local_238 = uVar18;
    } while ((int)uVar29 < iVar15);
  }
  uVar18 = local_238;
  uVar24 = (ulonglong)(int)local_238;
  pFVar5 = local_240.Data + uVar24 * 8;
  FVar28.Data = local_240.Data;
  while( true ) {
    if ((uint)uVar24 != uVar18) {
      local_248[1] = false;
      `TCheckedPointerIterator<IDXGISwapchainProvider_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_248 + 1);
    }
    plVar30 = plVar31;
    if (FVar28.Data == pFVar5) goto LAB_14596d407;
    plVar30 = *(longlong **)FVar28.Data;
    cVar14 = (**(code **)*plVar30)(plVar30,2);
    if (cVar14 != '\0') break;
    uVar24 = (ulonglong)local_238;
    FVar28.Data = FVar28.Data + 8;
  }
  if (bCustomSwapchainLogged == false) {
    if (4 < (byte)LogD3D11RHI._0_1_) {
      (**(code **)(*plVar30 + 8))(plVar30);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
    }
    bCustomSwapchainLogged = true;
  }
LAB_14596d407:
  local_1e0 = (longlong *)0x0;
  pIVar3 = (this->D3DRHI->Direct3DDevice).Reference;
  iVar15 = (**(code **)*pIVar3)(pIVar3,&_GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c,&local_1e0);
  if (iVar15 < 0) {
    VerifyD3D11Result(iVar15,
                      "D3DRHI->GetDevice()->QueryInterface(IID_PPV_ARGS(DXGIDevice.GetInitReference()))"
                      ,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11Viewport.cpp"
                      ,0x54,(this->D3DRHI->Direct3DDevice).Reference);
  }
  GSwapChainFlags = 2;
  GSwapEffect = DXGI_SWAP_EFFECT_DISCARD;
  GSwapScaling = DXGI_SCALING_STRETCH;
  pIVar6 = (this->D3DRHI->DXGIFactory1).Reference;
  local_1f8 = (longlong *)0x0;
  if (GD3D11UseAllowTearing != 0) {
    iVar15 = (**(code **)*pIVar6)(pIVar6,&_GUID_7632e1f5_ee65_4dca_87fd_84cd75f8838d,&local_1f8);
    if (iVar15 == 0) {
      local_220 = 0;
      iVar15 = (**(code **)(*local_1f8 + 0xe0))(local_1f8,0,&local_220,4);
      if ((iVar15 == 0) && (local_220 != 0)) {
        GSwapChainFlags = GSwapChainFlags | 0x800;
        this->bAllowTearing = true;
        GSwapEffect = DXGI_SWAP_EFFECT_FLIP_DISCARD;
        GSwapScaling = DXGI_SCALING_NONE;
        GSwapChainBufferCount = 2;
      }
    }
    if (local_1f8 != (longlong *)0x0) {
      (**(code **)(*local_1f8 + 0x10))();
    }
  }
  local_230[0] = 0;
  pwVar22 = FCommandLine::Get();
  bVar12 = FParse::Value(pwVar22,L"FullscreenDisplay=",local_230);
  this->bForcedFullscreenDisplay = bVar12;
  if (bVar12) {
    local_1f0 = (IDXGIOutput *)0x0;
    (**(code **)(*local_1e0 + 0x38))(local_1e0,&local_1f0);
    pIVar11 = local_1f0;
    pIVar25 = pTVar2->Reference;
    pcVar9 = *(code **)((longlong)*local_1f0 + 0x38);
    if (pIVar25 != (IDXGIOutput *)0x0) {
      pTVar2->Reference = (IDXGIOutput *)0x0;
      (**(code **)((longlong)*pIVar25 + 0x10))();
    }
    iVar15 = (*pcVar9)(pIVar11,local_230[0],pTVar2);
    if (iVar15 != 0) {
      if (4 < (byte)LogD3D11RHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
      }
      pIVar25 = pTVar2->Reference;
      if (pIVar25 != (IDXGIOutput *)0x0) {
        pTVar2->Reference = (IDXGIOutput *)0x0;
        (**(code **)((longlong)*pIVar25 + 0x10))();
      }
      this->bForcedFullscreenDisplay = false;
    }
    pIVar25 = local_1f0;
    if (local_1f0 != (IDXGIOutput *)0x0) {
LAB_14596d5c4:
      (**(code **)((longlong)*pIVar25 + 0x10))();
    }
  }
  else {
    pIVar25 = pTVar2->Reference;
    if (pIVar25 != (IDXGIOutput *)0x0) {
      pTVar2->Reference = (IDXGIOutput *)0x0;
      goto LAB_14596d5c4;
    }
  }
  DVar16 = GetRenderTargetFormat(this->PixelFormat);
  pwVar22 = FCommandLine::Get();
  bVar12 = FParse::Param(pwVar22,L"RenderOffScreen");
  this->bNeedSwapChain = !bVar12;
  if (bVar12) goto LAB_14596dbe9;
  local_228 = (longlong *)0x0;
  pIVar6 = (this->D3DRHI->DXGIFactory1).Reference;
  iVar15 = (**(code **)*pIVar6)(pIVar6,&_GUID_50c83a1c_e072_4c48_87b0_3630fa36a6d0,&local_228);
  if ((bIsQuadBufferStereoEnabled != false) && (-1 < iVar15)) {
    iVar17 = (**(code **)(*local_228 + 0x70))();
    if (iVar17 == 0) {
      if (4 < (byte)LogD3D11RHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
      }
      bIsQuadBufferStereoEnabled = false;
    }
    else {
      local_dc = GSwapChainFlags;
      local_108 = 0;
      local_e4 = 4;
      local_fc = 1;
      local_f8 = 1;
      local_f0 = 0x30;
      local_ec = 2;
      local_e8 = 1;
      local_1e8 = (IDXGISwapChain *)0x0;
      local_100 = DVar16;
      if (plVar30 == (longlong *)0x0) {
        iVar17 = (**(code **)(*local_228 + 0x78))
                           (local_228,(this->D3DRHI->Direct3DDevice).Reference,this->WindowHandle,
                            &local_108);
      }
      else {
        iVar17 = (**(code **)(*plVar30 + 0x10))
                           (plVar30,local_228,(this->D3DRHI->Direct3DDevice).Reference,
                            this->WindowHandle);
      }
      if (iVar17 < 0) {
        VerifyD3D11Result(iVar17,"CreateSwapChainForHwndResult",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11Viewport.cpp"
                          ,0xa8,(this->D3DRHI->Direct3DDevice).Reference);
      }
      pIVar7 = (this->SwapChain).Reference;
      if (pIVar7 != local_1e8) {
        (this->SwapChain).Reference = local_1e8;
        if (local_1e8 != (IDXGISwapChain *)0x0) {
          (**(code **)((longlong)*local_1e8 + 8))();
        }
        if (pIVar7 != (IDXGISwapChain *)0x0) {
          (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
        }
      }
    }
  }
  pTVar32 = &this->SwapChain;
  if (pTVar32->Reference == (IDXGISwapChain *)0x0) {
    if ((local_1d0->bDXGISupportsHDR != false) && (-1 < iVar15)) {
      local_138 = this->SizeX;
      local_134 = this->SizeY;
      this->BackBufferCount = 2;
      local_98 = (uint)(this->bIsFullscreen == false);
      local_114 = GSwapEffect;
      local_10c = GSwapChainFlags;
      local_118 = GSwapScaling;
      local_12c = 0;
      local_110 = 0;
      local_128 = 1;
      local_120 = 0x30;
      local_a8 = 0;
      local_a0 = 0;
      local_11c = 2;
      local_200 = (undefined8 *)0x0;
      local_130 = DVar16;
      if (plVar30 == (longlong *)0x0) {
        iVar15 = (**(code **)(*local_228 + 0x78))
                           (local_228,(this->D3DRHI->Direct3DDevice).Reference,this->WindowHandle,
                            &local_138);
      }
      else {
        iVar15 = (**(code **)(*plVar30 + 0x10))
                           (plVar30,local_228,(this->D3DRHI->Direct3DDevice).Reference,
                            this->WindowHandle);
      }
      if (iVar15 < 0) {
        if (4 < (byte)LogD3D11RHI._0_1_) {
          GetD3D11ErrorString(&local_1a8,iVar15,(this->D3DRHI->Direct3DDevice).Reference);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
          if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        pIVar7 = pTVar32->Reference;
        pcVar9 = *(code **)*local_200;
        if (pIVar7 != (IDXGISwapChain *)0x0) {
          pTVar32->Reference = (IDXGISwapChain *)0x0;
          (**(code **)((longlong)*pIVar7 + 0x10))();
        }
        (*pcVar9)(local_200,&_GUID_310d36a0_d2e7_4c0a_aa04_6a9d23b8886a,pTVar32);
        local_148.left = 0;
        local_148.top = 0;
        local_148.right = 0;
        local_148.bottom = 0;
        GetWindowRect((HWND)this->WindowHandle,&local_148);
        local_218[0] = this->DisplayColorGamut;
        local_21c = this->DisplayOutputFormat;
        local_248[0] = false;
        local_1b8._s_0.X = (double)local_148.left;
        local_1b8._s_0.Y = (double)local_148.top;
        local_1c8._s_0.X = (double)local_148.right;
        local_1c8._s_0.Y = (double)local_148.bottom;
        HDRGetMetaData(&local_21c,local_218,local_248,(TVector2<double> *)&local_1b8._s_0,
                       (TVector2<double> *)&local_1c8._s_0,this->WindowHandle);
        if (local_248[0] != false) {
          this->DisplayOutputFormat = local_21c;
          this->DisplayColorGamut = local_218[0];
          EnableHDR(this);
        }
      }
    }
    uVar18 = GSwapChainBufferCount;
    if (pTVar32->Reference == (IDXGISwapChain *)0x0) {
      local_198 = this->SizeX;
      local_194 = this->SizeY;
      this->BackBufferCount = GSwapChainBufferCount;
      local_16c = 0;
      local_154 = 0;
      local_190 = 0;
      local_188 = GetRenderTargetFormat(this->PixelFormat);
      pFVar4 = this->D3DRHI;
      local_168 = this->WindowHandle;
      local_184 = 0;
      local_160 = (uint)(this->bIsFullscreen == false);
      local_15c = GSwapEffect;
      local_158 = GSwapChainFlags;
      local_17c = 1;
      local_174 = 0x30;
      local_170 = uVar18;
      if (plVar30 == (longlong *)0x0) {
        pIVar6 = (pFVar4->DXGIFactory1).Reference;
        iVar15 = (**(code **)((longlong)*pIVar6 + 0x50))
                           (pIVar6,(pFVar4->Direct3DDevice).Reference,&local_198,pTVar32);
      }
      else {
        iVar15 = (**(code **)(*plVar30 + 0x18))
                           (plVar30,(pFVar4->DXGIFactory1).Reference,
                            (pFVar4->Direct3DDevice).Reference,&local_198);
      }
      if (iVar15 == -0x7ff8ffa9) {
        UE::DXGIUtilities::GetFormatString(local_188);
        if (1 < (byte)LogD3D11RHI._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
        }
        local_218[1] = 0;
        pIVar3 = (this->D3DRHI->Direct3DDevice).Reference;
        iVar17 = (**(code **)((longlong)*pIVar3 + 0xe8))(pIVar3,local_188,local_218 + 1);
        if (iVar17 < 0) {
          if (1 < (byte)LogD3D11RHI._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
          }
        }
        else if (1 < (byte)LogD3D11RHI._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
        }
      }
      else if (-1 < iVar15) goto LAB_14596dbb5;
      VerifyD3D11Result(iVar15,"CreateSwapChainResult",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11Viewport.cpp"
                        ,0x11a,(this->D3DRHI->Direct3DDevice).Reference);
    }
  }
LAB_14596dbb5:
  pIVar6 = (this->D3DRHI->DXGIFactory1).Reference;
  (**(code **)((longlong)*pIVar6 + 0x40))(pIVar6,this->WindowHandle,1);
  if (local_228 != (longlong *)0x0) {
    (**(code **)(*local_228 + 0x10))();
  }
LAB_14596dbe9:
  this_01 = GetSwapChainSurface(this->D3DRHI,this->PixelFormat,this->SizeX,this->SizeY,
                                (this->SwapChain).Reference);
  this_00 = (this->BackBuffer).Reference;
  if (this_00 != this_01) {
    (this->BackBuffer).Reference = this_01;
    if (this_01 != (FD3D11Texture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_01);
    }
    if (this_00 != (FD3D11Texture *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  PostMessageW((HWND)this->WindowHandle,0xf,0,0);
  local_b0 = (undefined ***)0x0;
  local_c8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FD3D11Viewport::FD3D11Viewport'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_d8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FD3D11Viewport::FD3D11Viewport'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_c0 = this;
  this_02 = FRenderCommandList::GetInstanceTLS();
  if (this_02 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FD3D11Viewport::FD3D11Viewport_::__l2::TSTR_FD3D11Viewport295>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_d8);
  }
  else {
    if (this_02->bInitialized == 0) {
      FRenderCommandList::Init(this_02);
    }
    iVar15 = (this_02->CommandLists).ArrayNum;
    uVar29 = iVar15 - 1;
    uVar18 = 0;
    if ((int)uVar29 < iVar15) {
      uVar18 = ~uVar29 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar9 = (code *)swi(3);
      pFVar19 = (FD3D11Viewport *)(*pcVar9)();
      return pFVar19;
    }
    iVar15 = (this_02->CommandLists).ArrayNum;
    local_78 = local_c8;
    pFStack_70 = pFStack_c0;
    local_68 = local_b8;
    local_58 = 2;
    pFVar8 = (this_02->CommandLists).AllocatorInstance.Data;
    local_88._0_8_ = local_d8[0];
    local_60 = local_b0;
    local_d8[0] = (code *)0x0;
    pFVar23 = (FRenderCommandTag *)
              TRenderCommandTag<`FD3D11Viewport::FD3D11Viewport'::__l2::TSTR_FD3D11Viewport295>::Get
                        ();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (pFVar8 + (iVar15 + -1),
               (TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                *)local_88,pFVar23);
    uVar24 = (ulonglong)local_58;
    if ((2 < uVar24) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      pFVar19 = (FD3D11Viewport *)(*pcVar9)();
      return pFVar19;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar24] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_88._0_8_ != (code *)0x0) {
        pppuVar26 = (undefined ***)(local_88 + 0x10);
        if (local_60 != (undefined ***)0x0) {
          pppuVar26 = local_60;
        }
        (*(code *)(*pppuVar26)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar24])(local_88);
    }
  }
  if (local_d8[0] != (code *)0x0) {
    pppuVar26 = &local_c8;
    if (local_b0 != (undefined ***)0x0) {
      pppuVar26 = local_b0;
    }
    (*(code *)(*pppuVar26)[2])();
  }
  if (local_1e0 != (longlong *)0x0) {
    (**(code **)(*local_1e0 + 0x10))();
  }
  if (local_240.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.Data);
  }
  return this;
}

// ~FD3D11Viewport @ 14596f6f0

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D11Viewport::~FD3D11Viewport(FD3D11Viewport *this)

{
  IDXGISwapChain *pIVar1;
  FD3D11DynamicRHI *pFVar2;
  FScriptContainerElement *pFVar3;
  FRHIResource *this_00;
  ID3D11Query *pIVar4;
  IDXGIOutput *pIVar5;
  FD3D11Texture *this_01;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FD3D11Viewport *pFVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  FD3D11Viewport *local_38 [2];
  
  this->_padding_ = (longlong)&___7FD3D11Viewport__6B_;
  bVar7 = IsInRHIThread();
  if (((!bVar7) && (bVar7 = IsInRenderingThread(), !bVar7)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRHIThread() || IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Viewport.cpp"
                         ,0xd3,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pIVar1 = (this->SwapChain).Reference;
  if ((pIVar1 != (IDXGISwapChain *)0x0) &&
     (iVar8 = (**(code **)((longlong)*pIVar1 + 0x50))(pIVar1,0,0), iVar8 < 0)) {
    VerifyD3D11Result(iVar8,"SwapChain->SetFullscreenState(false, NULL)",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Viewport.cpp"
                      ,0xd9,(this->D3DRHI->Direct3DDevice).Reference);
  }
  pFVar2 = this->D3DRHI;
  pFVar3 = (pFVar2->Viewports).AllocatorInstance.Data;
  local_38[0] = this;
  if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)(pFVar2->Viewports).ArrayMax * 8))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = (pFVar2->Viewports).ArrayNum;
  if (iVar8 != 0) {
    iVar13 = 0;
    pFVar3 = (pFVar2->Viewports).AllocatorInstance.Data;
    bVar7 = *(FD3D11Viewport **)pFVar3 != local_38[0];
    lVar10 = 0;
    pFVar9 = local_38[0];
    iVar11 = 0;
    do {
      iVar12 = iVar11;
      do {
        lVar10 = lVar10 + 1;
        iVar12 = iVar12 + 1;
        if (iVar8 <= lVar10) break;
      } while (bVar7 == (*(FD3D11Viewport **)(pFVar3 + lVar10 * 8) != pFVar9));
      if (bVar7 != false) {
        if (iVar13 != iVar11) {
          memmove(pFVar3 + (longlong)iVar13 * 8,pFVar3 + (longlong)iVar11 * 8,
                  (longlong)(iVar12 - iVar11) << 3);
          pFVar9 = local_38[0];
        }
        iVar13 = iVar13 + (iVar12 - iVar11);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar11 = iVar12;
    } while (lVar10 < iVar8);
    (pFVar2->Viewports).ArrayNum = iVar13;
  }
  this_00 = (FRHIResource *)(this->CustomPresent).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  pIVar4 = (this->FrameSyncEvent).Query.Reference;
  if (pIVar4 != (ID3D11Query *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  pIVar5 = (this->ForcedFullscreenOutput).Reference;
  if (pIVar5 != (IDXGIOutput *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  this_01 = (this->BackBuffer).Reference;
  if (this_01 != (FD3D11Texture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  pIVar1 = (this->SwapChain).Reference;
  if (pIVar1 != (IDXGISwapChain *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// CheckHDRMonitorStatus @ 1459734b0

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D11Viewport::CheckHDRMonitorStatus(FD3D11Viewport *this)

{
  return;
}

// ConditionalResetSwapChain @ 145976250

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D11Viewport::ConditionalResetSwapChain(FD3D11Viewport *this,bool param_1)

{
  if (((uint)this->ValidState & 1) == 0) {
    return;
  }
  if (((uint)this->ValidState & 2) != 0) {
    FlushRenderingCommands();
    LOCK();
    this->ValidState = (TAtomic<unsigned_int>)((uint)this->ValidState & 0xfffffffd);
    UNLOCK();
    (**(code **)(this->_padding_ + 0x60))(this,this->SizeX,this->SizeY,0,this->PixelFormat);
    return;
  }
  ResetSwapChainInternal(this,param_1);
  return;
}

// EnableHDR @ 14597c610

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FD3D11Viewport::EnableHDR(FD3D11Viewport *this)

{
  bool bVar1;
  
  if (GRHIGlobals.SupportsHDROutput) {
    bVar1 = IsHDREnabled();
    if (bVar1) {
      EnsureColorSpace((this->SwapChain).Reference,this->DisplayColorGamut,this->DisplayOutputFormat
                       ,this->PixelFormat);
      return;
    }
  }
  return;
}

// GetCustomPresent @ 1459818d0

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FRHICustomPresent * __thiscall FD3D11Viewport::GetCustomPresent(FD3D11Viewport *this)

{
  return (this->CustomPresent).Reference;
}

// GetNativeBackBufferRT @ 145982550

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FD3D11Viewport::GetNativeBackBufferRT(FD3D11Viewport *this)

{
  ID3D11RenderTargetView *pIVar1;
  
  pIVar1 = FD3D11Texture::GetRenderTargetView((this->BackBuffer).Reference,0,0);
  return pIVar1;
}

// GetNativeBackBufferTexture @ 145982570

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FD3D11Viewport::GetNativeBackBufferTexture(FD3D11Viewport *this)

{
  ID3D11Texture2D *pIVar1;
  
  pIVar1 = FD3D11Texture::GetD3D11Texture2D((this->BackBuffer).Reference);
  return pIVar1;
}

// GetNativeSwapChain @ 1459825a0

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FD3D11Viewport::GetNativeSwapChain(FD3D11Viewport *this)

{
  return (this->SwapChain).Reference;
}

// GetNativeWindow @ 1459825b0

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FD3D11Viewport::GetNativeWindow(FD3D11Viewport *this,void **param_1)

{
  return this->WindowHandle;
}

// GetRenderTargetFormat @ 1459831e0

DXGI_FORMAT_conflict __cdecl FD3D11Viewport::GetRenderTargetFormat(EPixelFormat param_1)

{
  switch(GPixelFormats[param_1].PlatformFormat) {
  case 0x1b:
    return DXGI_FORMAT_R8G8B8A8_UNORM;
  default:
    return GPixelFormats[param_1].PlatformFormat;
  case 0x35:
    return DXGI_FORMAT_R16_UNORM;
  case 0x46:
    return DXGI_FORMAT_BC1_UNORM;
  case 0x49:
    return DXGI_FORMAT_BC2_UNORM;
  case 0x4c:
    return DXGI_FORMAT_BC3_UNORM;
  case 0x5a:
    return DXGI_FORMAT_B8G8R8A8_UNORM;
  }
}

// GetSwapChainFlags @ 1459838b0

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FD3D11Viewport::GetSwapChainFlags(FD3D11Viewport *this)

{
  uint uVar1;
  
  uVar1 = GSwapChainFlags ^ 0x800;
  if (this->bAllowTearing == (bool)((byte)(GSwapChainFlags >> 0xb) & 1)) {
    uVar1 = GSwapChainFlags;
  }
  return uVar1;
}

// GetSwapChainSurface @ 1459838e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FD3D11Texture * __cdecl
FD3D11Viewport::GetSwapChainSurface
          (FD3D11DynamicRHI *param_1,EPixelFormat param_2,uint param_3,uint param_4,
          IDXGISwapChain *param_5)

{
  TRefCountPtr<ID3D11Device> *pTVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  ID3D11Resource *pIVar5;
  ID3D11ShaderResourceView *pIVar6;
  bool bVar7;
  int iVar8;
  FD3D11Texture *pFVar9;
  FD3D11Texture *this;
  ID3D11Device *pIVar10;
  char *pcVar11;
  uint uVar12;
  undefined1 auStackY_2e8 [32];
  ForAnyElementType local_298;
  undefined8 local_290;
  ID3D11Resource *local_288;
  TRefCountPtr<ID3D11RenderTargetView> local_280;
  TRefCountPtr<ID3D11RenderTargetView> local_278;
  ID3D11ShaderResourceView *local_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 local_260;
  undefined8 local_25c;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_248;
  undefined8 local_244;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_230;
  undefined8 local_22c;
  undefined4 local_224;
  undefined4 local_218;
  undefined8 local_214;
  TRefCountPtr<ID3D11DepthStencilView> *local_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  FScriptContainerElement *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  TArrayView<TRefCountPtr<ID3D11DepthStencilView>_const_,int> local_1d8;
  TArrayView<TRefCountPtr<ID3D11RenderTargetView>_const_,int> local_1c8;
  undefined4 local_1b8;
  undefined4 local_1b4;
  FRHITextureDesc local_188;
  wchar_t *local_138;
  ERHIAccess local_130;
  ERHITextureInitAction local_12c;
  FResourceBulkDataInterface *local_128;
  FName local_120;
  FName local_118;
  uint local_108;
  uint local_104;
  undefined4 local_100;
  undefined4 local_fc;
  DXGI_FORMAT_conflict local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined8 local_e4;
  FRHITextureCreateDesc local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  pFVar9 = (FD3D11Texture *)0x0;
  pTVar1 = &param_1->Direct3DDevice;
  local_288 = (ID3D11Resource *)0x0;
  if (param_5 == (IDXGISwapChain *)0x0) {
    local_e4 = 0;
    local_100 = 1;
    local_fc = 1;
    local_108 = param_3;
    local_104 = param_4;
    local_f8 = GetRenderTargetFormat(param_2);
    local_f4 = 1;
    local_ec = 0;
    local_e8 = 0x28;
    iVar8 = (**(code **)((longlong)*pTVar1->Reference + 0x28))
                      (pTVar1->Reference,&local_108,0,&local_288);
    if (iVar8 < 0) {
      uVar12 = 0x8a;
      pcVar11 = 
      "D3DRHI->GetDevice()->CreateTexture2D(&TextureDesc, NULL, BackBufferResource.GetInitReference())"
      ;
      goto LAB_1459839e1;
    }
  }
  else {
    iVar8 = (**(code **)((longlong)*param_5 + 0x48))(param_5,0,&IID_ID3D11Texture2D,&local_288);
    if (iVar8 < 0) {
      uVar12 = 0x79;
      pcVar11 = 
      "SwapChain->GetBuffer(0, IID_ID3D11Texture2D, (void**)BackBufferResource.GetInitReference())";
LAB_1459839e1:
      VerifyD3D11Result(iVar8,pcVar11,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Viewport.cpp"
                        ,uVar12,pTVar1->Reference);
    }
  }
  bVar4 = bIsQuadBufferStereoEnabled;
  pIVar10 = pTVar1->Reference;
  local_278.Reference = (ID3D11RenderTargetView *)0x0;
  local_280.Reference = (ID3D11RenderTargetView *)0x0;
  if (bIsQuadBufferStereoEnabled == false) {
    local_218 = 0;
    local_214 = 4;
    iVar8 = (**(code **)((longlong)*pIVar10 + 0x48))(pIVar10,local_288,&local_218,&local_278);
    if (-1 < iVar8) goto LAB_145983b00;
    pIVar10 = pTVar1->Reference;
    pcVar11 = 
    "D3DRHI->GetDevice()->CreateRenderTargetView(BackBufferResource, &RTVDesc, BackBufferRenderTargetView.GetInitReference())"
    ;
    uVar12 = 0xa3;
  }
  else {
    local_260 = 0x18;
    local_25c = 5;
    local_254 = 0;
    local_250 = 1;
    iVar8 = (**(code **)((longlong)*pIVar10 + 0x48))(pIVar10,local_288,&local_260);
    if (iVar8 < 0) {
      VerifyD3D11Result(iVar8,
                        "D3DRHI->GetDevice()->CreateRenderTargetView(BackBufferResource, &RTVDescCD3D11_left, BackBufferRenderTargetView.GetInitReference())"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Viewport.cpp"
                        ,0x97,pTVar1->Reference);
    }
    pIVar10 = pTVar1->Reference;
    local_248 = 0x18;
    local_244 = 5;
    local_23c = 1;
    local_238 = 1;
    pcVar3 = *(code **)((longlong)*pIVar10 + 0x48);
    if (local_280.Reference != (ID3D11RenderTargetView *)0x0) {
      (**(code **)((longlong)*local_280.Reference + 0x10))();
    }
    iVar8 = (*pcVar3)(pIVar10,local_288,&local_248,&local_280);
    if (-1 < iVar8) goto LAB_145983b00;
    pIVar10 = (param_1->Direct3DDevice).Reference;
    pcVar11 = 
    "D3DRHI->GetDevice()->CreateRenderTargetView(BackBufferResource, &renderTargetViewRightDesc_right, BackBufferRenderTargetViewRight.GetInitReference())"
    ;
    uVar12 = 0x9b;
  }
  VerifyD3D11Result(iVar8,pcVar11,
                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Viewport.cpp"
                    ,uVar12,pIVar10);
LAB_145983b00:
  (**(code **)((longlong)*local_288 + 0x50))(local_288,&local_1b8);
  local_298.Data = (FScriptContainerElement *)0x0;
  local_290 = 0;
  iVar8 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x808,&local_298,(int *)((longlong)&local_290 + 4));
  *(undefined8 *)(local_298.Data + (longlong)iVar8 * 8) = 0;
  *(ID3D11RenderTargetView **)(local_298.Data + (longlong)iVar8 * 8) = local_278.Reference;
  local_290._0_4_ = iVar8 + 1;
  if (local_278.Reference != (ID3D11RenderTargetView *)0x0) {
    (**(code **)((longlong)*local_278.Reference + 8))();
  }
  if (bVar4 != false) {
    if (((local_298.Data <= (FScriptContainerElement *)&local_280) &&
        ((FScriptContainerElement *)&local_280 < local_298.Data + (longlong)local_290._4_4_ * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FD3D11Texture *)(*pcVar3)();
      return pFVar9;
    }
    if ((int)local_290 == local_290._4_4_) {
      local_290._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_298,(int *)((longlong)&local_290 + 4));
    }
    iVar8 = (int)local_290 + 1;
    *(undefined8 *)(local_298.Data + (longlong)(int)local_290 * 8) = 0;
    *(ID3D11RenderTargetView **)(local_298.Data + (longlong)(int)local_290 * 8) =
         local_280.Reference;
    local_290._0_4_ = iVar8;
    if (local_280.Reference != (ID3D11RenderTargetView *)0x0) {
      (**(code **)((longlong)*local_280.Reference + 8))();
    }
  }
  pIVar10 = (param_1->Direct3DDevice).Reference;
  local_270 = (ID3D11ShaderResourceView *)0x0;
  local_230 = 0;
  local_22c = 4;
  local_224 = 1;
  iVar8 = (**(code **)((longlong)*pIVar10 + 0x38))(pIVar10,local_288,&local_230,&local_270);
  if (iVar8 < 0) {
    VerifyD3D11Result(iVar8,
                      "D3DRHI->GetDevice()->CreateShaderResourceView(BackBufferResource,&SRVDesc,BackBufferShaderResourceView.GetInitReference())"
                      ,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Viewport.cpp"
                      ,0xb9,(param_1->Direct3DDevice).Reference);
  }
  local_188.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_188.ClearValue._0_8_ = 1;
  local_188.Dimension = bVar4 != false;
  local_188.ClearValue.Value._4_8_ = 0;
  local_138 = L"FD3D11Viewport::GetSwapChainSurface";
  local_188.ClearValue.Value.Color[3] = 0.0;
  local_188.ExtData = 0;
  local_188.Depth = 1;
  local_188.NumMips = '\x01';
  local_188.NumSamples = '\x01';
  local_188.ArraySize = (bVar4 != false) + 1;
  local_188.UAVFormat = PF_Unknown;
  local_188.FastVRAMPercentage = 0xff;
  local_268 = local_1b8;
  uStack_264 = local_1b4;
  local_188.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_188.AliasableFormats.ArrayNum = 0;
  local_188.AliasableFormats.ArrayMax = 1;
  local_12c = Default;
  local_128 = (FResourceBulkDataInterface *)0x0;
  local_120.ComparisonIndex.Value = 0;
  local_120.Number = 0;
  local_118.ComparisonIndex.Value = 0;
  local_118.Number = 0;
  local_188.Flags = RenderTargetable;
  local_188.Format = param_2;
  local_130 = RHIGetDefaultResourceState(RenderTargetable,false);
  FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)&local_d8,&local_188);
  local_d8.DebugName = local_138;
  local_d8.InitialState = local_130;
  local_d8.InitAction = local_12c;
  local_d8.BulkData = local_128;
  local_d8.ClassName = local_120;
  local_d8.OwnerName = local_118;
  if (local_188.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_188.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  this = ::operator_new(400);
  iVar8 = (int)local_290;
  if (this != (FD3D11Texture *)0x0) {
    local_1e8 = local_298.Data;
    local_1f8 = (TRefCountPtr<ID3D11DepthStencilView> *)0x0;
    iStack_1f0 = 0;
    if (((int)local_290 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FD3D11Texture *)(*pcVar3)();
      return pFVar9;
    }
    pIVar6 = local_270;
    pIVar5 = local_288;
    iStack_1e0 = iVar8;
    FRHITexture::FRHITexture((FRHITexture *)this,&local_d8);
    local_1d8._12_4_ = uStack_1ec;
    local_1d8.ArrayNum = iStack_1f0;
    local_1c8._12_4_ = uStack_1dc;
    local_1c8.ArrayNum = iStack_1e0;
    this->_padding_ = 0;
    (this->Resource).Reference = (ID3D11Resource *)0x0;
    (this->ShaderResourceView).Reference = (ID3D11ShaderResourceView *)0x0;
    (this->RenderTargetViews).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->RenderTargetViews).ArrayNum = 0;
    (this->RenderTargetViews).ArrayMax = 0;
    this->IHVResourceHandle = (void *)0x0;
    this->DepthStencilViews[0].Reference = (ID3D11DepthStencilView *)0x0;
    this->DepthStencilViews[1].Reference = (ID3D11DepthStencilView *)0x0;
    this->DepthStencilViews[2].Reference = (ID3D11DepthStencilView *)0x0;
    this->DepthStencilViews[3].Reference = (ID3D11DepthStencilView *)0x0;
    this->bCreatedRTVsPerSlice = '\0';
    this->bAlias = '\0';
    this->_padding_ = (longlong)&FD3D11Texture::_vftable__for__FRHIViewableResource__;
    this->RTVArraySize = 0;
    this->_padding_ = (longlong)&FD3D11Texture::_vftable__for__RHIValidation__FTextureResource__;
    local_1d8.DataPtr = local_1f8;
    local_1c8.DataPtr = (TRefCountPtr<ID3D11RenderTargetView> *)local_1e8;
    FD3D11Texture::FinalizeCreation
              (this,pIVar5,pIVar6,(bVar4 != false) + 1,false,&local_1c8,&local_1d8);
    pFVar9 = this;
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  if (local_270 != (ID3D11ShaderResourceView *)0x0) {
    (**(code **)((longlong)*local_270 + 0x10))();
  }
  DestructItems<TRefCountPtr<ID3D11RenderTargetView>,int>
            ((TRefCountPtr<ID3D11RenderTargetView> *)local_298.Data,(int)local_290);
  if (local_298.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data);
  }
  if (local_280.Reference != (ID3D11RenderTargetView *)0x0) {
    (**(code **)((longlong)*local_280.Reference + 0x10))();
  }
  if (local_278.Reference != (ID3D11RenderTargetView *)0x0) {
    (**(code **)((longlong)*local_278.Reference + 0x10))();
  }
  if (local_288 != (ID3D11Resource *)0x0) {
    (**(code **)((longlong)*local_288 + 0x10))();
  }
  return pFVar9;
}

// IssueFrameEvent @ 145985da0

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D11Viewport::IssueFrameEvent(FD3D11Viewport *this)

{
  FD3D11EventQuery::IssueEvent(&this->FrameSyncEvent);
  return;
}

// Present @ 145987400

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

bool __thiscall
FD3D11Viewport::Present(FD3D11Viewport *this,IRHICommandContext *param_1,bool param_2)

{
  IDXGISwapChain *pIVar1;
  ID3D11Device *pIVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong *local_res8;
  longlong *local_res20;
  
  uVar5 = 0;
  if ((this->ValidState != (TAtomic<unsigned_int>)0x0) &&
     (pIVar1 = (this->SwapChain).Reference, pIVar1 != (IDXGISwapChain *)0x0)) {
    local_res20 = (longlong *)0x0;
    iVar4 = (**(code **)((longlong)*pIVar1 + 0x58))(pIVar1,&local_res8,&local_res20);
    if (iVar4 < 0) {
      VerifyD3D11Result(iVar4,
                        "SwapChain->GetFullscreenState(&bSwapChainFullscreenState,SwapChainOutput.GetInitReference())"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Viewport.cpp"
                        ,0x28a,(this->D3DRHI->Direct3DDevice).Reference);
    }
    if (((int)local_res8 != 0) != this->bIsFullscreen) {
      LOCK();
      this->ValidState = (TAtomic<unsigned_int>)0x1;
      UNLOCK();
    }
    if (local_res20 != (longlong *)0x0) {
      (**(code **)(*local_res20 + 0x10))();
    }
  }
  if (this->MaximumFrameLatency != RHIConsoleVariables::MaximumFrameLatency) {
    this->MaximumFrameLatency = RHIConsoleVariables::MaximumFrameLatency;
    local_res8 = (longlong *)0x0;
    pIVar2 = (this->D3DRHI->Direct3DDevice).Reference;
    iVar4 = (**(code **)*pIVar2)(pIVar2,&IID_IDXGIDevice,&local_res8);
    if (iVar4 < 0) {
      VerifyD3D11Result(iVar4,
                        "D3DRHI->GetDevice()->QueryInterface(IID_IDXGIDevice, (void**)DXGIDevice.GetInitReference())"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Viewport.cpp"
                        ,0x295,(this->D3DRHI->Direct3DDevice).Reference);
    }
    (**(code **)(*local_res8 + 0x60))(local_res8,this->MaximumFrameLatency);
    if (local_res8 != (longlong *)0x0) {
      (**(code **)(*local_res8 + 0x10))();
    }
  }
  if (((uint)this->ValidState & 1) == 0) {
    if (param_2) {
      if ((this->bIsFullscreen == false) && (RHIConsoleVariables::bSyncWithDWM != 0)) {
        local_res8 = (longlong *)((ulonglong)local_res8 & 0xffffffff00000000);
        DwmIsCompositionEnabled((BOOL *)&local_res8);
        if ((int)local_res8 != 0) {
          PresentWithVsyncDWM(this,param_1);
          return true;
        }
      }
      uVar5 = RHIGetSyncInterval();
    }
    bVar3 = PresentChecked(this,param_1,uVar5);
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

// PresentChecked @ 1459875a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FD3D11Viewport::PresentChecked(FD3D11Viewport *this,IRHICommandContext *param_1,int param_2)

{
  int *piVar1;
  IDXGISwapChain *pIVar2;
  FScopeIdle FVar3;
  FRHICustomPresent *pFVar4;
  ID3D11DeviceContext *pIVar5;
  bool bVar6;
  ulong64 uVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  undefined4 uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_D3D11CustomPresentTime> FVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FThreadHeartBeat *pFVar14;
  uint uVar15;
  FScopeIdle FVar16;
  bool bVar17;
  undefined1 auStackY_158 [32];
  int local_f8 [2];
  LARGE_INTEGER local_f0;
  LARGE_INTEGER local_e8;
  FRHIFlipDetails local_e0;
  uint local_c0 [2];
  undefined1 local_b8 [80];
  FScopeIdle local_68;
  undefined1 auStack_60 [8];
  LARGE_INTEGER local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  cVar8 = '\x01';
  uVar15 = 0;
  local_f0.s.LowPart = 0;
  local_f8[0] = param_2;
  FVar3 = (FScopeIdle)local_e0.PresentIndex;
  uVar7 = local_e0.VBlankTimeInCycles;
  if ((this->SwapChain).Reference != (IDXGISwapChain *)0x0) {
    pIVar2 = (this->SwapChain).Reference;
    local_68.Start = 0;
    local_68.bIgnore = false;
    local_68.TraceEventScope.bEnabled = false;
    local_68._6_2_ = 0;
    auStack_60 = (undefined1  [8])0x0;
    local_58 = (LARGE_INTEGER)0x0;
    uStack_50 = 0;
    iVar10 = (**(code **)((longlong)*pIVar2 + 0x80))(pIVar2,&local_68);
    FVar3 = (FScopeIdle)local_e0.PresentIndex;
    uVar7 = local_e0.VBlankTimeInCycles;
    local_e0.VBlankTimeInCycles = (ulong64)local_58;
    while ((local_58 = (LARGE_INTEGER)local_e0.VBlankTimeInCycles, -1 < iVar10 &&
           (local_e0.PresentIndex = (ulonglong)local_68 & 0xffffffff,
           LastFlipFrame.PresentIndex < local_e0.PresentIndex))) {
      local_e0.FlipTimeInSeconds = 0.0;
      local_e0.VBlankTimeInSeconds = 0.0;
      RHISetVsyncDebugInfo(&local_e0);
      LastFlipFrame.PresentIndex = local_e0.PresentIndex;
      LastFlipFrame.FlipTimeInSeconds = local_e0.FlipTimeInSeconds;
      LastFlipFrame.VBlankTimeInSeconds = local_e0.VBlankTimeInSeconds;
      LastFlipFrame.VBlankTimeInCycles = local_e0.VBlankTimeInCycles;
      pIVar2 = (this->SwapChain).Reference;
      LastStats._0_8_ = local_68;
      LastStats._8_8_ = auStack_60;
      LastStats.SyncQPCTime._s_0.LowPart = local_58._0_4_;
      LastStats.SyncQPCTime._s_0.HighPart = local_58._4_4_;
      LastStats.SyncGPUTime._s_0.LowPart = (ulong)uStack_50;
      LastStats.SyncGPUTime._s_0.HighPart = uStack_50._4_4_;
      iVar10 = (**(code **)((longlong)*pIVar2 + 0x80))(pIVar2,&local_68);
      FVar3 = (FScopeIdle)local_e0.PresentIndex;
      uVar7 = local_e0.VBlankTimeInCycles;
      local_e0.VBlankTimeInCycles = (ulong64)local_58;
    }
  }
  local_e0.VBlankTimeInCycles = uVar7;
  local_e0.PresentIndex = (ulong64)FVar3;
  if ((this->CustomPresent).Reference != (FRHICustomPresent *)0x0) {
    FVar13 = StatPtr_STAT_D3D11CustomPresentTime;
    if (StatPtr_STAT_D3D11CustomPresentTime ==
        (FThreadSafeStaticStat<FStat_STAT_D3D11CustomPresentTime>)0x0) {
      pFVar12 = ::FName::FName((FName *)&local_e8.s,"STAT_D3D11CustomPresentTime");
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_D3D11CustomPresentTime>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D11CustomPresentTime,*pFVar12
                          ,L"CustomPresent time","STATGROUP_D3D11RHI","STATCAT_Advanced",L"D3D11RHI"
                          ,true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_68.Start = 0;
    local_68.bIgnore = false;
    local_68.TraceEventScope.bEnabled = false;
    local_68._6_2_ = 0;
    FVar3 = *(FScopeIdle *)FVar13;
    bVar9 = false;
    bVar6 = false;
    if ((FVar3.Start == 0) && (FVar3._4_4_ == 0)) {
      pFVar4 = (this->CustomPresent).Reference;
      cVar8 = (**(code **)(*(longlong *)pFVar4 + 0x30))(pFVar4,param_1,local_f8);
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_e0.PresentIndex = local_e0.PresentIndex & 0xffffffff00000000;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_e0,(char *)*(FName *)((longlong)FVar13 + 0x10));
        bVar9 = false;
        bVar6 = true;
        if (-1 < CpuChannel->Enabled) {
          local_e0.PresentIndex = (ulong64)FVar3;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    ((FName *)&local_e0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Viewport.cpp"
                     ,0x187);
          bVar9 = true;
          bVar6 = true;
        }
      }
      bVar17 = FThreadStats::bPrimaryEnable != false;
      FVar16 = local_68;
      if (bVar17) {
        local_e0.PresentIndex = (ulong64)FVar3;
        local_68 = FVar3;
        FThreadStats::AddMessage((FName)FVar3,CycleScopeStart);
        FVar16 = FVar3;
        uVar15 = local_68.Start;
      }
      pFVar4 = (this->CustomPresent).Reference;
      cVar8 = (**(code **)(*(longlong *)pFVar4 + 0x30))(pFVar4,param_1);
      if (bVar6) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar9) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar17) && (FVar16 != (FScopeIdle)0x0)) &&
          (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff))
      {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
          local_e0.FlipTimeInSeconds =
               (double)(CONCAT44(FVar16._4_4_,uVar15) & 0xffff6fffffffffff | 0x600000000000);
          QueryPerformanceCounter(&local_e8);
          local_e0.PresentIndex = local_e8.QuadPart & 0xffffffff;
          FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_e0);
          piVar1 = &this_00->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(this_00,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_00,false,false);
          }
        }
      }
    }
    uVar11 = local_f0.s.LowPart;
    if (cVar8 == '\0') goto LAB_145987abb;
  }
  pIVar2 = (this->SwapChain).Reference;
  uVar11 = local_f0.s.LowPart;
  if (pIVar2 != (IDXGISwapChain *)0x0) {
    local_e8.QuadPart = 0;
    (**(code **)((longlong)*pIVar2 + 0x58))(pIVar2,&local_e0,&local_e8);
    uVar11 = 0;
    if ((local_e0.PresentIndex._0_4_ != 0) == this->bIsFullscreen) {
      uVar15 = GSwapChainFlags ^ 0x800;
      if (this->bAllowTearing == (bool)((byte)(GSwapChainFlags >> 0xb) & 1)) {
        uVar15 = GSwapChainFlags;
      }
      if ((((uVar15 >> 0xb & 1) != 0) && (local_f8[0] == 0)) && (this->bIsFullscreen == false)) {
        uVar11 = 0x200;
      }
      bVar9 = IsInRHIThread();
      UE::Stats::FThreadIdleStats::FScopeIdle::FScopeIdle(&local_68,!bVar9);
      auStack_60._0_4_ = 2;
      bVar9 = IsInRenderingThread();
      if (bVar9) {
        auStack_60[4] = 1;
        QueryPerformanceCounter(&local_f0);
        local_58.s.LowPart = local_f0.s.LowPart;
      }
      else {
        auStack_60[4] = 0;
        local_58.s = local_58.s & 0xffffffff00000000;
      }
      bVar9 = -1 < CpuChannel->Enabled;
      if (bVar9) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId419,"D3D11_Present",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Viewport.cpp"
                   ,0x1a3);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId419);
      }
      pIVar2 = (this->SwapChain).Reference;
      uVar11 = (**(code **)((longlong)*pIVar2 + 0x40))(pIVar2,local_f8[0],uVar11);
      if (bVar9) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (auStack_60[4] != '\0') {
        QueryPerformanceCounter(&local_f0);
        GRenderThreadIdle[(int)auStack_60._0_4_] =
             GRenderThreadIdle[(int)auStack_60._0_4_] + (local_f0.s.LowPart - local_58._0_4_);
      }
      UE::Stats::FThreadIdleStats::FScopeIdle::~FScopeIdle(&local_68);
      if ((GLogDX11RTRebinds != 0) && (::Counter = ::Counter + 1, ::Counter == 0x3c)) {
        ::Counter = 0;
        LOCK();
        GDX11RTRebind.Counter = 0;
        UNLOCK();
        LOCK();
        GDX11CommitGraphicsResourceTables.Counter = 0;
        UNLOCK();
        FGenericPlatformMisc::LowLevelOutputDebugStringf
                  (L"RT Rebind %6.2f Commit Graphics Resource Tables %6.2f\n");
      }
    }
    else {
      LOCK();
      this->ValidState = (TAtomic<unsigned_int>)0x3;
      UNLOCK();
      uVar11 = local_f0.s.LowPart;
    }
    if ((longlong *)local_e8.QuadPart != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_e8 + 0x10))();
    }
  }
  pFVar4 = (this->CustomPresent).Reference;
  if (pFVar4 != (FRHICustomPresent *)0x0) {
    (**(code **)(*(longlong *)pFVar4 + 0x38))();
  }
LAB_145987abb:
  pFVar14 = FThreadHeartBeat::Get();
  FThreadHeartBeat::PresentFrame(pFVar14);
  if ((int)uVar11 < 0) {
    this->PresentFailCount = this->PresentFailCount + 1;
    if ((1 < (byte)LogRHI._0_1_) &&
       (UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI),
       1 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    pIVar2 = (this->SwapChain).Reference;
    if ((((((pIVar2 != (IDXGISwapChain *)0x0) &&
           (iVar10 = (**(code **)((longlong)*pIVar2 + 0x60))(pIVar2,local_b8), -1 < iVar10)) &&
          (1 < (byte)LogRHI._0_1_)) &&
         (((UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI),
           1 < (byte)LogRHI._0_1_ &&
           (UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI),
           1 < (byte)LogRHI._0_1_)) &&
          ((UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI),
           1 < (byte)LogRHI._0_1_ &&
           ((UE::Logging::Private::BasicLog<2>
                       ((FStaticBasicLogRecord *)&PTR_u_SwapChainDesc_B_151061218,
                        (FLogCategoryBase *)&LogRHI), 1 < (byte)LogRHI._0_1_ &&
            (UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI),
            1 < (byte)LogRHI._0_1_)))))))) &&
        (UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI),
        1 < (byte)LogRHI._0_1_)) &&
       ((((UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI),
          1 < (byte)LogRHI._0_1_ &&
          (UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI),
          1 < (byte)LogRHI._0_1_)) &&
         (UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI),
         1 < (byte)LogRHI._0_1_)) &&
        (((UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI),
          1 < (byte)LogRHI._0_1_ &&
          (UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI),
          1 < (byte)LogRHI._0_1_)) &&
         ((UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI),
          1 < (byte)LogRHI._0_1_ &&
          ((UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI),
           1 < (byte)LogRHI._0_1_ &&
           (UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI),
           1 < (byte)LogRHI._0_1_)))))))))) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if (this->PresentFailCount < 0xb) {
      LOCK();
      this->ValidState = (TAtomic<unsigned_int>)0x3;
      UNLOCK();
    }
    else {
      VerifyD3D11Result(uVar11,"Result",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Viewport.cpp"
                        ,0x1df,(this->D3DRHI->Direct3DDevice).Reference);
    }
  }
  else {
    this->PresentFailCount = 0;
  }
  pFVar14 = FThreadHeartBeat::Get();
  FThreadHeartBeat::PresentFrame(pFVar14);
  pIVar5 = (this->D3DRHI->Direct3DDeviceIMContext).Reference;
  (**(code **)((longlong)*pIVar5 + 0x108))(pIVar5,0,0,0);
  pIVar2 = (this->SwapChain).Reference;
  if ((pIVar2 == (IDXGISwapChain *)0x0) ||
     (iVar10 = (**(code **)((longlong)*pIVar2 + 0x88))(pIVar2,local_c0), iVar10 < 0)) {
    GRHIGlobals.PresentCounter = GRHIGlobals.PresentCounter + 1;
  }
  else {
    GRHIGlobals.PresentCounter = (ulong64)local_c0[0];
  }
  return (bool)cVar8;
}

// PresentWithVsyncDWM @ 145987e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FD3D11Viewport::PresentWithVsyncDWM(FD3D11Viewport *this,IRHICommandContext *param_1)

{
  ulonglong uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  double dVar6;
  undefined4 uVar7;
  int iVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_228 [32];
  uint local_208;
  double local_200;
  double local_1f8;
  DWM_FRAME_COUNT local_1f0;
  ulong64 local_1e8;
  LARGE_INTEGER local_1d8;
  LARGE_INTEGER local_1d0;
  DWM_TIMING_INFO local_1c8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_228;
  QueryPerformanceCounter(&local_1d8);
  memset(&local_1c8.rateRefresh,0,0x120);
  local_1c8.cbSize = 0x124;
  DwmGetCompositionTimingInfo((HWND)0x0,&local_1c8);
  dVar6 = __real_408f400000000000;
  uVar7 = local_1d8.s.LowPart;
  dVar10 = FGenericPlatformTime::SecondsPerCycle * __real_408f400000000000;
  fVar14 = (float)((double)(local_1d8.s.LowPart - (int)this->LastFlipTime) * dVar10);
  fVar13 = (float)((double)(uint)((int)local_1c8.qpcFrameComplete - (int)this->LastCompleteTime) *
                  dVar10);
  fVar11 = (float)((double)(uint)local_1c8.qpcRefreshPeriod * dVar10);
  if ((0 < RHIConsoleVariables::TargetRefreshRate) && (__real_3f800000 < fVar11)) {
    for (; fVar11 - __real_447a0000 / (float)RHIConsoleVariables::TargetRefreshRate <
           __real_bf800000; fVar11 = fVar11 + fVar11) {
    }
  }
  uVar1 = this->LastFrameComplete;
  bVar2 = uVar1 < local_1c8.cFrameComplete;
  if (uVar1 < local_1c8.cFrameComplete) {
    fVar13 = fVar13 / (float)(local_1c8.cFrameComplete - uVar1);
  }
  fVar12 = fVar13;
  if (fVar13 <= fVar14) {
    fVar12 = fVar14;
  }
  if (fVar12 < fVar11 * RHIConsoleVariables::SyncRefreshThreshold) {
    if (uVar1 < local_1c8.cFrameComplete) {
      this->SyncCounter = this->SyncCounter + 1;
    }
  }
  else {
    this->SyncCounter = this->SyncCounter + -1;
  }
  fVar14 = __real_3a83126f;
  iVar4 = RHIConsoleVariables::MaxSyncCounter;
  if (this->SyncCounter < RHIConsoleVariables::MaxSyncCounter) {
    iVar4 = this->SyncCounter;
  }
  iVar8 = 0;
  if (0 < iVar4) {
    iVar8 = iVar4;
  }
  this->SyncCounter = iVar8;
  bVar3 = RHIConsoleVariables::SyncThreshold <= iVar8;
  if (RHIConsoleVariables::SyncThreshold <= iVar8) {
    (**(code **)((longlong)*(this->D3DRHI->Direct3DDeviceIMContext).Reference + 0x378))();
    DwmFlush();
    fVar12 = fVar11 * RHIConsoleVariables::RefreshPercentageBeforePresent;
    while( true ) {
      QueryPerformanceCounter(&local_1d8);
      fVar9 = fVar12 - (float)((double)(local_1d8.s.LowPart - (int)this->LastFlipTime) *
                              FGenericPlatformTime::SecondsPerCycle * dVar6);
      if (fVar9 <= 0.0) break;
      FWindowsPlatformProcess::Sleep(fVar9 * fVar14);
    }
  }
  PresentChecked(this,param_1,0);
  if (bVar3) {
    bVar5 = false;
    while( true ) {
      QueryPerformanceCounter(&local_1d0);
      fVar12 = fVar11 - (float)((double)(local_1d0.s.LowPart - (int)this->LastFlipTime) *
                               FGenericPlatformTime::SecondsPerCycle * dVar6);
      if (fVar12 <= 0.0) break;
      bVar5 = true;
      FWindowsPlatformProcess::Sleep(fVar12 * fVar14);
    }
    if (bVar5) {
      local_1d8.s = local_1d0.s;
    }
  }
  else if (this->bSyncedLastFrame != false) {
    this->SyncCounter = 0;
  }
  if (((bVar3 != this->bSyncedLastFrame) || (6 < (byte)LogRHI._0_1_)) && (5 < (byte)LogRHI._0_1_)) {
    local_1e8 = local_1c8.cFrameComplete;
    local_1f0 = local_1c8.cFramePending;
    local_200 = (double)fVar13;
    local_1f8 = (double)(float)((double)(local_1d8.s.LowPart - uVar7) *
                               FGenericPlatformTime::SecondsPerCycle * dVar6);
    local_208 = (uint)bVar2;
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  this->LastFlipTime = (ulong64)local_1d8;
  this->LastFrameComplete = local_1c8.cFrameComplete;
  this->LastCompleteTime =
       CONCAT44(local_1c8.qpcFrameComplete._4_4_,(int)local_1c8.qpcFrameComplete);
  this->bSyncedLastFrame = bVar3;
  return;
}

// ResetSwapChainInternal @ 1459975a0

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D11Viewport::ResetSwapChainInternal(FD3D11Viewport *this,bool param_1)

{
  HWND hWnd;
  IDXGISwapChain *pIVar1;
  IDXGIOutput *pIVar2;
  code *pcVar3;
  BOOL BVar4;
  int iVar5;
  HWND pHVar6;
  char cVar7;
  
  if (((uint)this->ValidState & 1) != 0) {
    pHVar6 = GetFocus();
    hWnd = (HWND)this->WindowHandle;
    BVar4 = IsIconic(hWnd);
    if ((param_1) || ((pHVar6 == hWnd && (BVar4 == 0)))) {
      FlushRenderingCommands();
      cVar7 = this->bIsFullscreen;
      if (((bool)cVar7 == false) ||
         ((this->bForcedFullscreenDisplay == false && (this->PixelFormat != PF_FloatRGBA)))) {
        pIVar1 = (this->SwapChain).Reference;
        iVar5 = (**(code **)((longlong)*pIVar1 + 0x50))(pIVar1,cVar7,0);
      }
      else {
        pIVar1 = (this->SwapChain).Reference;
        pIVar2 = (this->ForcedFullscreenOutput).Reference;
        pcVar3 = *(code **)((longlong)*pIVar1 + 0x50);
        if (pIVar2 != (IDXGIOutput *)0x0) {
          (**(code **)((longlong)*pIVar2 + 8))(pIVar2);
          cVar7 = this->bIsFullscreen;
        }
        iVar5 = (*pcVar3)(pIVar1,cVar7,pIVar2);
        if (pIVar2 != (IDXGIOutput *)0x0) {
          (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
        }
      }
      if (iVar5 < 0) {
        if ((iVar5 != -0x7785ffde) && (1 < (byte)LogD3D11RHI._0_1_)) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
        }
      }
      else {
        LOCK();
        this->ValidState = (TAtomic<unsigned_int>)((uint)this->ValidState & 0xfffffffe);
        UNLOCK();
      }
    }
  }
  return;
}

// Resize @ 1459976b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FD3D11Viewport::Resize
          (FD3D11Viewport *this,uint param_1,uint param_2,bool param_3,EPixelFormat param_4)

{
  uint uVar1;
  uint uVar2;
  FRHICustomPresent *pFVar3;
  FD3D11Texture *pFVar4;
  ID3D11Resource *pIVar5;
  ID3D11ShaderResourceView *pIVar6;
  IDXGISwapChain *pIVar7;
  code *pcVar8;
  bool bVar9;
  EPixelFormat EVar10;
  int iVar11;
  ID3D11RenderTargetView *pIVar12;
  FD3D11Texture *this_00;
  undefined1 auStackY_148 [32];
  bool local_107 [3];
  uint local_104;
  uint local_100 [2];
  longlong *local_f8;
  FD3D11ResizeViewportState local_f0;
  FD3D11ResizeViewportState local_e0;
  FString local_d0;
  TVector2<double>_u_0 local_c0;
  TVector2<double>_u_0 local_b0;
  tagRECT local_a0;
  uint local_90;
  uint local_8c;
  undefined8 local_88;
  DXGI_FORMAT_conflict local_80;
  undefined8 local_7c;
  uint local_70;
  uint local_6c;
  undefined8 local_68;
  DXGI_FORMAT_conflict local_60;
  undefined8 local_5c;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_104 = param_2;
  FD3D11DynamicRHI::SetRenderTargets
            (this->D3DRHI,0,(FRHIRenderTargetView *)0x0,(FRHIDepthRenderTargetView *)0x0);
  FD3D11DynamicRHI::ClearState(this->D3DRHI);
  (**(code **)((longlong)*(this->D3DRHI->Direct3DDeviceIMContext).Reference + 0x378))();
  pFVar3 = (this->CustomPresent).Reference;
  if (pFVar3 != (FRHICustomPresent *)0x0) {
    (**(code **)(*(longlong *)pFVar3 + 0x10))();
  }
  pFVar4 = (this->BackBuffer).Reference;
  if (pFVar4 != (FD3D11Texture *)0x0) {
    if (((pFVar4->_padding_ & 0x3fffffff) != 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("BackBuffer->GetRefCount() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Viewport.cpp"
                           ,0xfd,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pIVar5 = (((this->BackBuffer).Reference)->Resource).Reference;
    if (pIVar5 != (ID3D11Resource *)0x0) {
      (**(code **)((longlong)*pIVar5 + 8))(pIVar5);
      iVar11 = (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
      if ((iVar11 != 1) && (1 < (byte)LogD3D11RHI._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
      }
    }
    pIVar12 = FD3D11Texture::GetRenderTargetView((this->BackBuffer).Reference,0,-1);
    if (pIVar12 != (ID3D11RenderTargetView *)0x0) {
      (**(code **)((longlong)*pIVar12 + 8))(pIVar12);
      iVar11 = (**(code **)((longlong)*pIVar12 + 0x10))(pIVar12);
      if ((iVar11 != 1) && (1 < (byte)LogD3D11RHI._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
      }
    }
    pIVar6 = (((this->BackBuffer).Reference)->ShaderResourceView).Reference;
    if (pIVar6 != (ID3D11ShaderResourceView *)0x0) {
      (**(code **)((longlong)*pIVar6 + 8))(pIVar6);
      iVar11 = (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6);
      if ((iVar11 != 1) && (1 < (byte)LogD3D11RHI._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
      }
    }
  }
  pFVar4 = (this->BackBuffer).Reference;
  if (pFVar4 != (FD3D11Texture *)0x0) {
    (this->BackBuffer).Reference = (FD3D11Texture *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  FlushRenderingCommands();
  EVar10 = FD3D11DynamicRHI::GetDisplayFormat(this->D3DRHI,param_4);
  uVar1 = this->SizeX;
  uVar2 = this->SizeY;
  local_e0.SizeX = uVar1;
  local_e0.SizeY = uVar2;
  local_e0.Format = GetRenderTargetFormat(this->PixelFormat);
  local_e0.bIsFullscreen = this->bIsFullscreen;
  local_f0.SizeY = local_104;
  local_f0.SizeX = param_1;
  local_f0.Format = GetRenderTargetFormat(EVar10);
  local_f0.bIsFullscreen = param_3;
  if (((uVar1 != param_1) || (uVar2 != local_104)) || (this->PixelFormat != EVar10)) {
    this->SizeX = param_1;
    this->SizeY = local_104;
    this->PixelFormat = EVar10;
    if ((param_1 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("SizeX > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Viewport.cpp"
                           ,0x114,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((this->SizeY == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("SizeY > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Viewport.cpp"
                           ,0x115,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (this->bNeedSwapChain != false) {
      GetRenderTargetFormat(this->PixelFormat);
      pIVar7 = (this->SwapChain).Reference;
      iVar11 = (**(code **)((longlong)*pIVar7 + 0x68))(pIVar7,0,this->SizeX,this->SizeY);
      if (iVar11 < 0) {
        VerifyD3D11ResizeViewportResult
                  (iVar11,
                   "SwapChain->ResizeBuffers(0, SizeX, SizeY, RenderTargetFormat, SwapChainFlags)",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Viewport.cpp"
                   ,0x11f,&local_e0,&local_f0,(this->D3DRHI->Direct3DDevice).Reference);
      }
      if (param_3) {
        local_90 = this->SizeX;
        local_8c = this->SizeY;
        local_88 = 0;
        local_80 = GetRenderTargetFormat(this->PixelFormat);
        pIVar7 = (this->SwapChain).Reference;
        local_7c = 0;
        iVar11 = (**(code **)((longlong)*pIVar7 + 0x70))(pIVar7,&local_90);
        if (iVar11 < 0) {
          ResetSwapChainInternal(this,true);
          pIVar7 = (this->SwapChain).Reference;
          iVar11 = (**(code **)((longlong)*pIVar7 + 0x68))(pIVar7,0,this->SizeX,this->SizeY);
          if (iVar11 < 0) {
            VerifyD3D11ResizeViewportResult
                      (iVar11,
                       "SwapChain->ResizeBuffers(0, SizeX, SizeY, RenderTargetFormat, SwapChainFlags)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Viewport.cpp"
                       ,0x128,&local_e0,&local_f0,(this->D3DRHI->Direct3DDevice).Reference);
          }
        }
      }
    }
  }
  if (this->bIsFullscreen != param_3) {
    this->bIsFullscreen = param_3;
    LOCK();
    this->ValidState = (TAtomic<unsigned_int>)0x1;
    UNLOCK();
    if (this->bNeedSwapChain != false) {
      ResetSwapChainInternal(this,true);
      if (this->bIsFullscreen == false) {
        local_70 = this->SizeX;
        local_6c = this->SizeY;
        local_68 = 0;
        local_60 = GetRenderTargetFormat(this->PixelFormat);
        pIVar7 = (this->SwapChain).Reference;
        local_5c = 0;
        (**(code **)((longlong)*pIVar7 + 0x70))(pIVar7,&local_70);
      }
      pIVar7 = (this->SwapChain).Reference;
      GetRenderTargetFormat(this->PixelFormat);
      iVar11 = (**(code **)((longlong)*pIVar7 + 0x68))(pIVar7,0,this->SizeX,this->SizeY);
      if (iVar11 < 0) {
        VerifyD3D11ResizeViewportResult
                  (iVar11,
                   "SwapChain->ResizeBuffers(0, SizeX, SizeY, RenderTargetFormat, GetSwapChainFlags())"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Viewport.cpp"
                   ,0x146,&local_e0,&local_f0,(this->D3DRHI->Direct3DDevice).Reference);
      }
    }
  }
  local_a0.left = 0;
  local_a0.top = 0;
  local_a0.right = 0;
  local_a0.bottom = 0;
  GetWindowRect((HWND)this->WindowHandle,&local_a0);
  local_b0._s_0.X = (double)local_a0.left;
  local_b0._s_0.Y = (double)local_a0.top;
  local_c0._s_0.X = (double)local_a0.right;
  local_c0._s_0.Y = (double)local_a0.bottom;
  HDRGetMetaData(&this->DisplayOutputFormat,&this->DisplayColorGamut,local_107,
                 (TVector2<double> *)&local_b0._s_0,(TVector2<double> *)&local_c0._s_0,
                 this->WindowHandle);
  if (local_107[0] == false) {
    pIVar7 = (this->SwapChain).Reference;
    if (pIVar7 != (IDXGISwapChain *)0x0) {
      local_f8 = (longlong *)0x0;
      iVar11 = (**(code **)*pIVar7)(pIVar7,&_GUID_94d99bdb_f1f8_4ab0_b236_7da0170edab1,&local_f8);
      if (-1 < iVar11) {
        local_100[0] = 0;
        iVar11 = (**(code **)(*local_f8 + 0x128))(local_f8,0,local_100);
        ::FString::FString(&local_d0,L"RGB_FULL_G22_NONE_P709");
        if ((iVar11 < 0) || ((local_100[0] & 1) == 0)) {
          if (1 < (byte)LogD3D11RHI._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&`void___cdecl_EnsureColorSpace(IDXGISwapChain*___ptr64,EDisplayColorGamut,EDisplayOutputFormat,EPixelFormat)'
                        ::__l35::LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
          }
        }
        else {
          (**(code **)(*local_f8 + 0x130))(local_f8,0);
          if (5 < (byte)LogD3D11RHI._0_1_) {
            UE::Logging::Private::BasicLog<6>
                      (&`void___cdecl_EnsureColorSpace(IDXGISwapChain*___ptr64,EDisplayColorGamut,EDisplayOutputFormat,EPixelFormat)'
                        ::__l15::LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
          }
        }
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
      }
      if (local_f8 != (longlong *)0x0) {
        (**(code **)(*local_f8 + 0x10))();
      }
    }
  }
  else if ((GRHIGlobals.SupportsHDROutput != false) && (bVar9 = IsHDREnabled(), bVar9)) {
    EnsureColorSpace((this->SwapChain).Reference,this->DisplayColorGamut,this->DisplayOutputFormat,
                     this->PixelFormat);
  }
  this_00 = GetSwapChainSurface(this->D3DRHI,this->PixelFormat,this->SizeX,this->SizeY,
                                (this->SwapChain).Reference);
  pFVar4 = (this->BackBuffer).Reference;
  if (pFVar4 != this_00) {
    (this->BackBuffer).Reference = this_00;
    if (this_00 != (FD3D11Texture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    if (pFVar4 != (FD3D11Texture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
  }
  return;
}

// SetCustomPresent @ 1459986d0

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D11Viewport::SetCustomPresent(FD3D11Viewport *this,FRHICustomPresent *param_1)

{
  FRHIResource *this_00;
  
  this_00 = (FRHIResource *)(this->CustomPresent).Reference;
  if (this_00 != (FRHIResource *)param_1) {
    (this->CustomPresent).Reference = param_1;
    if (param_1 != (FRHICustomPresent *)0x0) {
      FRHIResource::AddRef((FRHIResource *)param_1);
    }
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
      return;
    }
  }
  return;
}

// SetupDXGI_MODE_DESC @ 14599aeb0

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

DXGI_MODE_DESC * __thiscall
FD3D11Viewport::SetupDXGI_MODE_DESC(FD3D11Viewport *this,DXGI_MODE_DESC *__return_storage_ptr__)

{
  EPixelFormat EVar1;
  DXGI_FORMAT_conflict DVar2;
  
  __return_storage_ptr__->Width = this->SizeX;
  EVar1 = this->PixelFormat;
  __return_storage_ptr__->Height = this->SizeY;
  (__return_storage_ptr__->RefreshRate).Numerator = 0;
  (__return_storage_ptr__->RefreshRate).Denominator = 0;
  DVar2 = GetRenderTargetFormat(EVar1);
  __return_storage_ptr__->Format = DVar2;
  __return_storage_ptr__->ScanlineOrdering = DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED;
  __return_storage_ptr__->Scaling = DXGI_MODE_SCALING_UNSPECIFIED;
  return __return_storage_ptr__;
}

// ShutdownHDR @ 14599b4b0

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D11Viewport::ShutdownHDR(FD3D11Viewport *this)

{
  IDXGISwapChain *pIVar1;
  int iVar2;
  uint local_res8 [2];
  longlong *local_res10 [3];
  FString local_18;
  
  pIVar1 = (this->SwapChain).Reference;
  if (pIVar1 != (IDXGISwapChain *)0x0) {
    local_res10[0] = (longlong *)0x0;
    iVar2 = (**(code **)*pIVar1)(pIVar1,&_GUID_94d99bdb_f1f8_4ab0_b236_7da0170edab1,local_res10);
    if (-1 < iVar2) {
      local_res8[0] = 0;
      iVar2 = (**(code **)(*local_res10[0] + 0x128))(local_res10[0],0,local_res8);
      ::FString::FString(&local_18,L"RGB_FULL_G22_NONE_P709");
      if ((iVar2 < 0) || ((local_res8[0] & 1) == 0)) {
        if (1 < (byte)LogD3D11RHI._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&`void___cdecl_EnsureColorSpace(IDXGISwapChain*___ptr64,EDisplayColorGamut,EDisplayOutputFormat,EPixelFormat)'
                      ::__l35::LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
        }
      }
      else {
        (**(code **)(*local_res10[0] + 0x130))(local_res10[0],0);
        if (5 < (byte)LogD3D11RHI._0_1_) {
          UE::Logging::Private::BasicLog<6>
                    (&`void___cdecl_EnsureColorSpace(IDXGISwapChain*___ptr64,EDisplayColorGamut,EDisplayOutputFormat,EPixelFormat)'
                      ::__l15::LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
        }
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    if (local_res10[0] != (longlong *)0x0) {
      (**(code **)(*local_res10[0] + 0x10))();
    }
  }
  return;
}

// WaitForFrameEventCompletion @ 1459a1210

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D11Viewport::WaitForFrameEventCompletion(FD3D11Viewport *this)

{
  bool bVar1;
  int local_res8 [8];
  
  local_res8[0] = 0;
  do {
    bVar1 = FD3D11DynamicRHI::GetQueryData
                      ((this->FrameSyncEvent).D3DRHI,(this->FrameSyncEvent).Query.Reference,
                       local_res8,4,false,true,true);
    if (!bVar1) {
      return;
    }
  } while (local_res8[0] == 0);
  return;
}

