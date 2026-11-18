// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 33

// FD3D12Viewport @ 145a918b0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12Viewport * __thiscall
FD3D12Viewport::FD3D12Viewport
          (FD3D12Viewport *this,FD3D12Adapter *param_1,HWND__ *param_2,uint param_3,uint param_4,
          bool param_5,EPixelFormat param_6,uint param_7)

{
  TArray<FD3D12Viewport::FBackBufferData,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  wchar_t *pwVar10;
  FD3D12Viewport *pFVar11;
  ForElementType<FD3D12Viewport::FBackBufferData> FVar12;
  ForAnyElementType *pFVar13;
  uint uVar14;
  FBackBufferData *_Dst;
  FD3D12Viewport *local_28 [2];
  
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_Viewport);
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7FD3D12Viewport__6B_;
  this->SizeY = param_4;
  this->PixelFormat = param_6;
  this->bIsFullscreen = param_5;
  this->WindowHandle = param_2;
  this->SizeX = param_3;
  this->bFullscreenLost = false;
  this->bIsValid = true;
  this->bAllowTearing = true;
  pwVar10 = FCommandLine::Get();
  bVar7 = FParse::Param(pwVar10,L"RenderOffScreen");
  pTVar1 = &this->BackBuffers;
  (this->SwapChain1).Reference = (IDXGISwapChain1 *)0x0;
  piVar2 = &(this->BackBuffers).ArrayNum;
  (this->SwapChain2).Reference = (IDXGISwapChain2 *)0x0;
  piVar3 = &(this->BackBuffers).ArrayMax;
  (this->SwapChain3).Reference = (IDXGISwapChain3 *)0x0;
  (this->SwapChain4).Reference = (IDXGISwapChain4 *)0x0;
  this->bNeedSwapChain = !bVar7;
  this->NumBackBuffers = param_7;
  (this->BackBuffers).AllocatorInstance.SecondaryData =
       (ForElementType<FD3D12Viewport::FBackBufferData>)0x0;
  this->CheckedPresentFailureCounter = 0;
  this->ColorSpace = DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709;
  *piVar2 = 0;
  *piVar3 = 3;
  (this->DummyBackBuffer_RenderThread).Reference = (FD3D12Texture *)0x0;
  this->CurrentBackBuffer_RHIThread = (FBackBufferData *)0x0;
  this->CurrentBackBuffer_RenderThread = (FBackBufferData *)0x0;
  this->CurrentBackBufferIndex_RHIThread = 0;
  this->ExpectedBackBufferIndex_RenderThread = 0;
  this->DisplayColorGamut = sRGB_D65;
  this->DisplayOutputFormat = SDR_sRGB;
  (this->FrameSyncPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameSyncPoints).ArrayNum = 0;
  (this->FrameSyncPoints).ArrayMax = 0;
  (this->CustomPresent).Reference = (FRHICustomPresent *)0x0;
  this->BackbufferMultiGPUBinding = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ExpectedBackBufferIndexLock,4000)
  ;
  if (this->NumBackBuffers == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBackBuffers > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Viewport.cpp"
                       ,0x24,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FD3D12Viewport *)(*pcVar6)();
      return pFVar11;
    }
  }
  uVar4 = this->NumBackBuffers;
  iVar9 = *piVar2;
  if (iVar9 < (int)uVar4) {
    iVar8 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12Viewport::FBackBufferData>_>
                      (0x10,8,uVar4 - iVar9,&pTVar1->AllocatorInstance,piVar2,piVar3);
    FVar12 = (this->BackBuffers).AllocatorInstance.SecondaryData;
    if (FVar12 == (ForElementType<FD3D12Viewport::FBackBufferData>)0x0) {
      FVar12 = (ForElementType<FD3D12Viewport::FBackBufferData>)pTVar1;
    }
    DefaultConstructItems<FD3D12Viewport::FBackBufferData,int>
              ((void *)((longlong)FVar12 + (longlong)iVar8 * 0x10),uVar4 - iVar9);
  }
  else {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if ((int)uVar4 < iVar9) {
      uVar14 = iVar9 - uVar4;
      if ((int)(uVar14 | uVar4) < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pFVar11 = (FD3D12Viewport *)(*pcVar6)();
          return pFVar11;
        }
      }
      if (uVar14 != 0) {
        FVar12 = (this->BackBuffers).AllocatorInstance.SecondaryData;
        if (FVar12 == (ForElementType<FD3D12Viewport::FBackBufferData>)0x0) {
          FVar12 = (ForElementType<FD3D12Viewport::FBackBufferData>)pTVar1;
        }
        _Dst = (FBackBufferData *)((longlong)(int)uVar4 * 0x10 + (longlong)FVar12);
        DestructItems<FD3D12Viewport::FBackBufferData,int>(_Dst,uVar14);
        iVar9 = (*piVar2 - uVar4) - uVar14;
        if (iVar9 != 0) {
          memmove(_Dst,_Dst + (int)uVar14,(longlong)iVar9 << 4);
        }
        *piVar2 = *piVar2 - uVar14;
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12Viewport::FBackBufferData>_>
                  (0x10,8,&pTVar1->AllocatorInstance,*piVar2,piVar3);
      }
    }
  }
  bVar7 = IsInGameThread();
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Viewport.cpp"
                       ,0x26,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FD3D12Viewport *)(*pcVar6)();
      return pFVar11;
    }
  }
  if (this->_padding_ == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FD3D12Viewport *)(*pcVar6)();
      return pFVar11;
    }
  }
  lVar5 = this->_padding_;
  pFVar13 = (ForAnyElementType *)(lVar5 + 0x538);
  local_28[0] = this;
  if ((pFVar13->Data <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 < pFVar13->Data + (longlong)*(int *)(lVar5 + 0x544) * 8))
  {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FD3D12Viewport *)(*pcVar6)();
      return pFVar11;
    }
  }
  iVar9 = *(int *)(lVar5 + 0x540);
  if (iVar9 == *(int *)(lVar5 + 0x544)) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar13,(int *)(lVar5 + 0x544));
  }
  *(int *)(lVar5 + 0x540) = iVar9 + 1;
  *(FD3D12Viewport **)(pFVar13->Data + (longlong)iVar9 * 8) = local_28[0];
  return this;
}

// ~FD3D12Viewport @ 145a95440

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12Viewport::~FD3D12Viewport(FD3D12Viewport *this)

{
  int iVar1;
  IDXGISwapChain1 *pIVar2;
  longlong lVar3;
  longlong *plVar4;
  FRHIResource *this_00;
  FScriptContainerElement *pFVar5;
  FD3D12Texture *pFVar6;
  IDXGISwapChain4 *pIVar7;
  IDXGISwapChain3 *pIVar8;
  IDXGISwapChain2 *pIVar9;
  code *pcVar10;
  bool bVar11;
  FD3D12Viewport *pFVar12;
  ForElementType<FD3D12Viewport::FBackBufferData> FVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  FD3D12Viewport *local_38 [2];
  
  this->_padding_ = (longlong)&___7FD3D12Viewport__6B_;
  bVar11 = IsInRHIThread();
  if (((!bVar11) && (bVar11 = IsInRenderingThread(), !bVar11)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRHIThread() || IsInRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Viewport.cpp"
                          ,0xdb,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pIVar2 = (this->SwapChain1).Reference;
  if (pIVar2 != (IDXGISwapChain1 *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x50))(pIVar2,0,0);
  }
  if ((this->_padding_ == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParentAdapter != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x41,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  lVar3 = this->_padding_;
  local_38[0] = this;
  if (((*(FD3D12Viewport ***)(lVar3 + 0x538) <= local_38) &&
      (local_38 < *(FD3D12Viewport ***)(lVar3 + 0x538) + *(int *)(lVar3 + 0x544))) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar1 = *(int *)(lVar3 + 0x540);
  if (iVar1 != 0) {
    iVar17 = 0;
    plVar4 = *(longlong **)(lVar3 + 0x538);
    bVar11 = (FD3D12Viewport *)*plVar4 != local_38[0];
    lVar14 = 0;
    pFVar12 = local_38[0];
    iVar15 = 0;
    do {
      iVar16 = iVar15;
      do {
        lVar14 = lVar14 + 1;
        iVar16 = iVar16 + 1;
        if (iVar1 <= lVar14) break;
      } while (bVar11 == ((FD3D12Viewport *)plVar4[lVar14] != pFVar12));
      if (bVar11 != false) {
        if (iVar17 != iVar15) {
          memmove(plVar4 + iVar17,plVar4 + iVar15,(longlong)(iVar16 - iVar15) << 3);
          pFVar12 = local_38[0];
        }
        iVar17 = iVar17 + (iVar16 - iVar15);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      iVar15 = iVar16;
    } while (lVar14 < iVar1);
    *(int *)(lVar3 + 0x540) = iVar17;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ExpectedBackBufferIndexLock);
  this_00 = (FRHIResource *)(this->CustomPresent).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  DestructItems<TRefCountPtr<FD3D12SyncPoint>,int>
            ((TRefCountPtr<FD3D12SyncPoint> *)(this->FrameSyncPoints).AllocatorInstance.Data,
             (this->FrameSyncPoints).ArrayNum);
  pFVar5 = (this->FrameSyncPoints).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar6 = (this->DummyBackBuffer_RenderThread).Reference;
  if (pFVar6 != (FD3D12Texture *)0x0) {
    (**(code **)(pFVar6->_padding_ + 0x10))();
  }
  FVar13 = (this->BackBuffers).AllocatorInstance.SecondaryData;
  if (FVar13 == (ForElementType<FD3D12Viewport::FBackBufferData>)0x0) {
    FVar13 = (ForElementType<FD3D12Viewport::FBackBufferData>)&this->BackBuffers;
  }
  DestructItems<FD3D12Viewport::FBackBufferData,int>
            ((FBackBufferData *)FVar13,(this->BackBuffers).ArrayNum);
  FVar13 = (this->BackBuffers).AllocatorInstance.SecondaryData;
  if (FVar13 != (ForElementType<FD3D12Viewport::FBackBufferData>)0x0) {
    FMemory::Free((void *)FVar13);
  }
  pIVar7 = (this->SwapChain4).Reference;
  if (pIVar7 != (IDXGISwapChain4 *)0x0) {
    (**(code **)((longlong)*pIVar7 + 0x10))();
  }
  pIVar8 = (this->SwapChain3).Reference;
  if (pIVar8 != (IDXGISwapChain3 *)0x0) {
    (**(code **)((longlong)*pIVar8 + 0x10))();
  }
  pIVar9 = (this->SwapChain2).Reference;
  if (pIVar9 != (IDXGISwapChain2 *)0x0) {
    (**(code **)((longlong)*pIVar9 + 0x10))();
  }
  pIVar2 = (this->SwapChain1).Reference;
  if (pIVar2 != (IDXGISwapChain1 *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// AdvanceExpectedBackBufferIndex_RenderThread @ 145a9c4c0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D12Viewport::AdvanceExpectedBackBufferIndex_RenderThread(FD3D12Viewport *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHICustomPresent *pFVar1;
  char cVar2;
  DWORD DVar3;
  FString *pFVar4;
  FString local_18;
  
  pFVar1 = (this->CustomPresent).Reference;
  if (((pFVar1 != (FRHICustomPresent *)0x0) &&
      (cVar2 = (**(code **)(*(longlong *)pFVar1 + 0x18))(), cVar2 == '\0')) &&
     (cVar2 = (**(code **)(*(longlong *)(this->CustomPresent).Reference + 0x20))(), cVar2 == '\0'))
  {
    return;
  }
  cVar2 = (**(code **)(FD3D12DynamicRHI::SingleD3DRHI->_padding_ + 0x360))();
  if (cVar2 == '\0') {
    lpCriticalSection = &this->ExpectedBackBufferIndexLock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SetBackBufferIndex_RenderThread(this,this->ExpectedBackBufferIndex_RenderThread + 1);
    if (D3D12RHI::RHIConsoleVariables::LogViewportEvents != 0) {
      FThreadManager::Get();
      DVar3 = GetCurrentThreadId();
      pFVar4 = FThreadManager::GetThreadName(DVar3);
      ::FString::FString(&local_18,pFVar4);
      if (4 < (byte)LogD3D12RHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// CheckHDRSupport @ 145a9d010

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FD3D12Viewport::CheckHDRSupport(FD3D12Viewport *this)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  
  pTVar1 = CVarHDROutputEnabled.Ref;
  if (!GRHIGlobals.SupportsHDROutput) {
    return false;
  }
  bVar2 = IsInParallelGameThread();
  if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
    lVar3 = 0;
  }
  else {
    lVar3 = 4;
  }
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar3) == 0) {
    return false;
  }
  return true;
}

// ClearPresentQueue @ 145a9d690

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12Viewport::ClearPresentQueue(FD3D12Viewport *this)

{
  return;
}

// ConditionalResetSwapChain @ 145a9df00

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D12Viewport::ConditionalResetSwapChain(FD3D12Viewport *this,bool param_1)

{
  HWND hWnd;
  IDXGISwapChain1 *pIVar1;
  BOOL BVar2;
  int iVar3;
  HWND pHVar4;
  
  if (this->bIsValid == false) {
    if (this->bFullscreenLost != false) {
      FlushRenderingCommands();
      this->bFullscreenLost = false;
      Resize(this,this->SizeX,this->SizeY,false,this->PixelFormat);
      return;
    }
    pHVar4 = GetFocus();
    hWnd = (HWND)this->WindowHandle;
    BVar2 = IsIconic(hWnd);
    if ((param_1) || ((pHVar4 == hWnd && (BVar2 == 0)))) {
      FlushRenderingCommands();
      pIVar1 = (this->SwapChain1).Reference;
      iVar3 = (**(code **)((longlong)*pIVar1 + 0x50))(pIVar1,this->bIsFullscreen,0);
      if (iVar3 < 0) {
        if (iVar3 == -0x7785ffde) {
          return;
        }
        switch(iVar3) {
        case -0x7785fffd:
          break;
        case -0x7785fffc:
          break;
        default:
          break;
        case -0x7785fff5:
          break;
        case -0x7785ffde:
          break;
        case -0x7785ffdc:
          break;
        case -0x7785ffdb:
          break;
        case -0x7785ffda:
          break;
        case -0x7785ffd9:
          break;
        case -0x7785ffd8:
          break;
        case -0x7785ffd5:
          break;
        case -0x7785ffd2:
          break;
        case -0x7785ffcf:
          break;
        case -0x7785ffce:
          break;
        case -0x7785ffcd:
          break;
        case -0x7785ffcc:
          break;
        case -0x7785ffca:
        }
        if (1 < (byte)LogD3D12RHI._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
        }
        if (this->bIsFullscreen == false) {
          return;
        }
        pIVar1 = (this->SwapChain1).Reference;
        iVar3 = (**(code **)((longlong)*pIVar1 + 0x50))(pIVar1,0,0);
        if (iVar3 < 0) {
          return;
        }
        this->bIsFullscreen = false;
      }
      this->bIsValid = true;
    }
  }
  return;
}

// CreateDummyBackBufferTextures @ 145a9f110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FD3D12Texture * __thiscall
FD3D12Viewport::CreateDummyBackBufferTextures
          (FD3D12Viewport *this,FD3D12Adapter *param_1,EPixelFormat param_2,uint param_3,
          uint param_4)

{
  FD3D12Texture *pFVar1;
  undefined1 auStack_158 [32];
  TIntPoint<int>_u_0 local_138;
  <lambda_1> local_130;
  FRHITextureDesc local_118;
  wchar_t *local_c8;
  undefined8 local_c0;
  FResourceBulkDataInterface *local_b8;
  FName local_b0;
  FName local_a8;
  FRHITextureCreateDesc local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_118.ClearValue._0_8_ = 1;
  local_118.ClearValue.Value._4_8_ = 0;
  local_c8 = L"BackBufferReference";
  local_118.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_118.ExtData = 0;
  local_118.Dimension = bIsQuadBufferStereoEnabled;
  local_118.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_118.AliasableFormats.ArrayNum = 0;
  local_b8 = (FResourceBulkDataInterface *)0x0;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  local_118.ArraySize = bIsQuadBufferStereoEnabled + 1;
  local_138._s_0.Y = param_4;
  local_138._s_0.X = param_3;
  local_118.ClearValue.Value.Color[3] = 0.0;
  local_118.Depth = 1;
  local_118.NumMips = '\x01';
  local_118.NumSamples = '\x01';
  local_118.UAVFormat = PF_Unknown;
  local_118.FastVRAMPercentage = 0xff;
  local_118.AliasableFormats.ArrayMax = 1;
  local_c0 = 2;
  local_118.Extent.field0_0x0 = local_138;
  local_118.Flags = Presentable|ResolveTargetable|RenderTargetable;
  local_118.Format = param_2;
  FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)&local_98,&local_118);
  local_98.DebugName = local_c8;
  local_98.InitialState = (ERHIAccess)local_c0;
  local_98.InitAction = local_c0._4_4_;
  local_98.BulkData = local_b8;
  local_98.ClassName = local_b0;
  local_98.OwnerName = local_a8;
  if (local_118.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_118.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  local_130.CreateDesc = &local_98;
  local_138 = (TIntPoint<int>_u_0)param_1;
  local_130.__this = this;
  pFVar1 = FD3D12LinkedAdapterObject<FD3D12Texture>::
           CreateLinkedObjects<FD3D12Texture,_FD3D12Viewport::CreateDummyBackBufferTextures_::__l2::<lambda_1>,_FD3D12Adapter::CreateLinkedObject<FD3D12Texture,_FD3D12Viewport::CreateDummyBackBufferTextures_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                     ((FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1),
                      (<lambda_1> *)&local_138._s_0,&local_130);
  if ((void *)local_98._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_98._padding_);
  }
  return pFVar1;
}

// CurrentOutputSupportsHDR @ 145aa0820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

bool __thiscall FD3D12Viewport::CurrentOutputSupportsHDR(FD3D12Viewport *this)

{
  FD3D12Adapter *this_00;
  IDXGIFactory2 *pIVar1;
  IDXGISwapChain4 *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStackY_118 [32];
  longlong *local_e8;
  longlong *local_e0;
  FString local_d8;
  FString local_c8;
  undefined1 local_b8 [100];
  int local_54;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_118;
  bVar7 = false;
  if ((this->SwapChain4).Reference == (IDXGISwapChain4 *)0x0) {
    bVar7 = false;
  }
  else {
    if ((this->_padding_ == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParentAdapter != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x41,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    this_00 = (FD3D12Adapter *)this->_padding_;
    pIVar1 = (this_00->DxgiFactory2).Reference;
    if (pIVar1 != (IDXGIFactory2 *)0x0) {
      iVar6 = (**(code **)((longlong)*pIVar1 + 0x68))();
      if (iVar6 == 0) {
        FD3D12Adapter::CreateDXGIFactory(this_00,false);
      }
      iVar6 = (**(code **)((longlong)*(this_00->DxgiFactory2).Reference + 0x68))();
      if ((iVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Adapter->GetDXGIFactory2()->IsCurrent()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Viewport.cpp"
                             ,0x1bc,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pIVar2 = (this->SwapChain4).Reference;
      local_e0 = (longlong *)0x0;
      iVar6 = (**(code **)((longlong)*pIVar2 + 0x78))(pIVar2,&local_e0);
      if (iVar6 < 0) {
        local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.Data.ArrayNum = 0;
        local_d8.Data.ArrayMax = 0;
        D3D12RHI::VerifyD3D12Result
                  (iVar6,"SwapChain4->GetContainingOutput(Output.GetInitReference())",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Viewport.cpp"
                   ,0x1c0,(ID3D12Device *)0x0,&local_d8);
      }
      local_e8 = (longlong *)0x0;
      iVar6 = (**(code **)*local_e0)(local_e0,&_GUID_068346e8_aaec_4b84_add7_137f513f77a1,&local_e8)
      ;
      if (-1 < iVar6) {
        iVar6 = (**(code **)(*local_e8 + 0xd8))(local_e8,local_b8);
        if (iVar6 < 0) {
          local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c8.Data.ArrayNum = 0;
          local_c8.Data.ArrayMax = 0;
          D3D12RHI::VerifyD3D12Result
                    (iVar6,"Output6->GetDesc1(&OutputDesc)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Viewport.cpp"
                     ,0x1c6,(ID3D12Device *)0x0,&local_c8);
        }
        bVar7 = local_54 == 0xc;
      }
      if (local_e8 != (longlong *)0x0) {
        (**(code **)(*local_e8 + 0x10))();
      }
      if (local_e0 != (longlong *)0x0) {
        (**(code **)(*local_e0 + 0x10))();
      }
    }
  }
  return bVar7;
}

// EnableHDR @ 145aa65b0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FD3D12Viewport::EnableHDR(FD3D12Viewport *this)

{
  bool bVar1;
  
  if (GRHIGlobals.SupportsHDROutput) {
    bVar1 = IsHDREnabled();
    if (bVar1) {
      EnsureColorSpace(this,this->DisplayColorGamut,this->DisplayOutputFormat);
      return;
    }
  }
  return;
}

// EnsureColorSpace @ 145aa67a0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FD3D12Viewport::EnsureColorSpace
          (FD3D12Viewport *this,EDisplayColorGamut param_1,EDisplayOutputFormat param_2)

{
  IDXGISwapChain4 *pIVar1;
  int iVar2;
  wchar_t *pwVar3;
  DXGI_COLOR_SPACE_TYPE DVar4;
  uint local_res8 [2];
  FString local_28;
  FString local_18;
  
  pIVar1 = (this->SwapChain4).Reference;
  if (pIVar1 == (IDXGISwapChain4 *)0x0) {
    return;
  }
  DVar4 = DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709;
  switch(param_2) {
  case SDR_sRGB:
  case SDR_Rec709:
    if (param_1 == Rec2020_D65) {
      DVar4 = DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P2020;
    }
    break;
  case HDR_ACES_1000nit_ST2084:
  case HDR_ACES_2000nit_ST2084:
    DVar4 = DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020;
    break;
  case HDR_ACES_1000nit_ScRGB:
  case HDR_ACES_2000nit_ScRGB:
    DVar4 = DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709;
  }
  if (this->ColorSpace == DVar4) {
    return;
  }
  local_res8[0] = 0;
  iVar2 = (**(code **)((longlong)*pIVar1 + 0x128))(pIVar1,DVar4,local_res8);
  if (DVar4 == DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709) {
    pwVar3 = L"RGB_FULL_G22_NONE_P709";
  }
  else if (DVar4 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709) {
    pwVar3 = L"RGB_FULL_G10_NONE_P709";
  }
  else if (DVar4 == DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020) {
    pwVar3 = L"RGB_FULL_G2084_NONE_P2020";
  }
  else {
    if (DVar4 != DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P2020) {
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_28,DVar4);
      goto LAB_145aa687a;
    }
    pwVar3 = L"RGB_FULL_G22_NONE_P2020";
  }
  ::FString::FString(&local_28,pwVar3);
LAB_145aa687a:
  if ((iVar2 < 0) || ((local_res8[0] & 1) == 0)) {
    if (1 < (byte)LogD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
  }
  else {
    pIVar1 = (this->SwapChain4).Reference;
    iVar2 = (**(code **)((longlong)*pIVar1 + 0x130))(pIVar1,DVar4);
    if (iVar2 < 0) {
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      D3D12RHI::VerifyD3D12Result
                (iVar2,"SwapChain4->SetColorSpace1(NewColorSpace)",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Viewport.cpp"
                 ,0x20d,(ID3D12Device *)0x0,&local_18);
    }
    if (5 < (byte)LogD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    this->ColorSpace = DVar4;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// FinalDestroyInternal @ 145aa78d0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12Viewport::FinalDestroyInternal(FD3D12Viewport *this)

{
  return;
}

// GetCustomPresent @ 145aa8f30

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

FRHICustomPresent * __thiscall FD3D12Viewport::GetCustomPresent(FD3D12Viewport *this)

{
  return (this->CustomPresent).Reference;
}

// GetNativeBackBufferRT @ 145aaa230

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall FD3D12Viewport::GetNativeBackBufferRT(FD3D12Viewport *this)

{
  FD3D12Texture *pFVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_> FVar5;
  
  pFVar1 = (this->CurrentBackBuffer_RHIThread->Texture).Reference;
  if (pFVar1->bCreatedRTVsPerSlice != false) {
    if (0 < (pFVar1->RenderTargetViews).ArrayNum) goto LAB_145aaa281;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayIndex < RenderTargetViews.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.h"
                       ,0xbe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  if ((pFVar1->RenderTargetViews).ArrayNum < 1) {
    return (void *)0x0;
  }
LAB_145aaa281:
  FVar5 = (pFVar1->RenderTargetViews).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>)0x0) {
    FVar5 = (ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>)&pFVar1->RenderTargetViews;
  }
  return *(void **)FVar5;
}

// GetNativeBackBufferTexture @ 145aaa2b0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall FD3D12Viewport::GetNativeBackBufferTexture(FD3D12Viewport *this)

{
  return (void *)((this->CurrentBackBuffer_RHIThread->Texture).Reference)->_padding_;
}

// GetNativeSwapChain @ 145aaa2d0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall FD3D12Viewport::GetNativeSwapChain(FD3D12Viewport *this)

{
  return (this->SwapChain1).Reference;
}

// GetNativeWindow @ 145aaa2e0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall FD3D12Viewport::GetNativeWindow(FD3D12Viewport *this,void **param_1)

{
  return this->WindowHandle;
}

// GetStateString @ 145aaaed0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

FString * __thiscall
FD3D12Viewport::GetStateString(FD3D12Viewport *this,FString *__return_storage_ptr__)

{
  UE::DXGIUtilities::GetSwapChainFormat(this->PixelFormat);
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"Viewport=0x%p, Num=%d, Size=(%d,%d), PF=%d, DXGIFormat=0x%x, Fullscreen=%d, AllowTearing=%d"
            );
  return __return_storage_ptr__;
}

// Init @ 145aadfb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12Viewport::Init(FD3D12Viewport *this)

{
  uint uVar1;
  TRefCountPtr<IDXGISwapChain1> *pTVar2;
  FScriptContainerElement *pFVar3;
  FD3D12Adapter *this_00;
  IDXGIFactory5 *pIVar4;
  ID3D12CommandQueue *pIVar5;
  IDXGISwapChain1 *pIVar6;
  IDXGISwapChain2 *pIVar7;
  IDXGISwapChain3 *pIVar8;
  IDXGISwapChain4 *pIVar9;
  code *pcVar10;
  FName FVar11;
  IDXGIFactory2 *pIVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  IModularFeatures *pIVar16;
  longlong lVar17;
  FD3D12Queue *pFVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  ForAnyElementType FVar21;
  uint uVar22;
  longlong *plVar23;
  longlong *plVar24;
  undefined1 auStackY_108 [32];
  undefined1 local_b8 [8];
  ForAnyElementType local_b0;
  uint local_a8;
  uint uStack_a4;
  int local_a0 [2];
  longlong *local_98;
  IDXGIFactory2 *local_90;
  FString local_88;
  uint local_78;
  uint local_74;
  DXGI_FORMAT local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  uint local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if ((this->_padding_ == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParentAdapter != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x41,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  this_00 = (FD3D12Adapter *)this->_padding_;
  FlushRenderingCommands();
  FD3D12Adapter::BlockUntilIdle(this_00);
  local_90 = (this_00->DxgiFactory2).Reference;
  pIVar16 = IModularFeatures::Get();
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
  FVar11 = `public:_static_class_FName___cdecl_IDXGISwapchainProvider::GetModularFeatureName(void)'
           ::__l2::FeatureName;
  plVar24 = (longlong *)0x0;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = 0;
  uStack_a4 = 0;
  iVar15 = (**(code **)((longlong)*pIVar16 + 0x18))(pIVar16);
  plVar23 = plVar24;
  if (0 < iVar15) {
    do {
      lVar17 = (**(code **)((longlong)*pIVar16 + 0x20))(pIVar16,FVar11,plVar23);
      local_98 = (longlong *)(lVar17 + -8);
      if (lVar17 == 0) {
        local_98 = plVar24;
      }
      if (((local_b0.Data <= (FScriptContainerElement *)&local_98) &&
          ((FScriptContainerElement *)&local_98 < local_b0.Data + (longlong)(int)uStack_a4 * 8)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (local_a8 == uStack_a4) {
        local_a8 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_b0,(int *)&uStack_a4);
      }
      uVar1 = local_a8 + 1;
      uVar22 = (int)plVar23 + 1;
      *(longlong **)(local_b0.Data + (longlong)(int)local_a8 * 8) = local_98;
      plVar23 = (longlong *)(ulonglong)uVar22;
      local_a8 = uVar1;
    } while ((int)uVar22 < iVar15);
  }
  uVar1 = local_a8;
  uVar19 = (ulonglong)(int)local_a8;
  pFVar3 = local_b0.Data + uVar19 * 8;
  FVar21.Data = local_b0.Data;
  while( true ) {
    if ((uint)uVar19 != uVar1) {
      local_b8[0] = 0;
      `TCheckedPointerIterator<IDXGISwapchainProvider_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_b8);
    }
    plVar23 = plVar24;
    if (FVar21.Data == pFVar3) goto LAB_145aae1d6;
    plVar23 = *(longlong **)FVar21.Data;
    cVar14 = (**(code **)*plVar23)(plVar23);
    if (cVar14 != '\0') break;
    uVar19 = (ulonglong)local_a8;
    FVar21.Data = FVar21.Data + 8;
  }
  if (bCustomSwapchainLogged == false) {
    if (4 < (byte)LogD3D12RHI._0_1_) {
      (**(code **)(*plVar23 + 8))(plVar23);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    bCustomSwapchainLogged = true;
  }
LAB_145aae1d6:
  this->bAllowTearing = false;
  if ((GD3D12UseAllowTearing != 0) &&
     (pIVar4 = (this_00->DxgiFactory5).Reference, pIVar4 != (IDXGIFactory5 *)0x0)) {
    local_a0[0] = 0;
    (**(code **)((longlong)*pIVar4 + 0xe0))(pIVar4,0,local_a0,4);
    this->bAllowTearing = local_a0[0] != 0;
  }
  pIVar12 = local_90;
  uVar20 = 0;
  if (bIsQuadBufferStereoEnabled != false) {
    iVar15 = (**(code **)((longlong)*local_90 + 0x70))(local_90);
    if (iVar15 == 0) {
      if (4 < (byte)LogD3D12RHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
      bIsQuadBufferStereoEnabled = false;
      uVar20 = 0;
    }
    else {
      uVar20 = 1;
    }
  }
  InitializeBackBufferArrays(this);
  if (this->bNeedSwapChain != false) {
    if ((GNumExplicitGPUsForRendering == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("GPUIndex < GNumExplicitGPUsForRendering",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                            ,0x103,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar18 = FD3D12Device::GetQueue((this_00->Devices).Elements[0],Direct);
    pIVar5 = (pFVar18->D3DCommandQueue).Reference;
    local_78 = this->SizeX;
    local_74 = this->SizeY;
    local_70 = UE::DXGIUtilities::GetSwapChainFormat(this->PixelFormat);
    local_5c = this->NumBackBuffers;
    local_4c = 0x802;
    if (this->bAllowTearing == false) {
      local_4c = 2;
    }
    pTVar2 = &this->SwapChain1;
    pIVar6 = pTVar2->Reference;
    local_68 = 1;
    local_38 = (uint)(this->bIsFullscreen == false);
    local_60 = 0x30;
    local_58 = 1;
    local_54 = 4;
    local_48 = 0;
    local_40 = 0;
    local_6c = uVar20;
    if (plVar23 == (longlong *)0x0) {
      pcVar10 = *(code **)((longlong)*pIVar12 + 0x78);
      if (pIVar6 != (IDXGISwapChain1 *)0x0) {
        pTVar2->Reference = (IDXGISwapChain1 *)0x0;
        (**(code **)((longlong)*pIVar6 + 0x10))();
      }
      iVar15 = (*pcVar10)(pIVar12,pIVar5,this->WindowHandle,&local_78);
    }
    else {
      pcVar10 = *(code **)(*plVar23 + 0x10);
      if (pIVar6 != (IDXGISwapChain1 *)0x0) {
        pTVar2->Reference = (IDXGISwapChain1 *)0x0;
        (**(code **)((longlong)*pIVar6 + 0x10))();
      }
      iVar15 = (*pcVar10)(plVar23,pIVar12,pIVar5,this->WindowHandle);
    }
    if (iVar15 < 0) {
      if (((2 < (byte)LogD3D12RHI._0_1_) &&
          (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI),
          2 < (byte)LogD3D12RHI._0_1_)) &&
         (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI),
         2 < (byte)LogD3D12RHI._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
      if (2 < (byte)LogD3D12RHI._0_1_) {
        IsWindow((HWND)this->WindowHandle);
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u__Windows_handle_15109cc30,
                   (FLogCategoryBase *)&LogD3D12RHI);
        if (((2 < (byte)LogD3D12RHI._0_1_) &&
            (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI),
            2 < (byte)LogD3D12RHI._0_1_)) &&
           (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI),
           2 < (byte)LogD3D12RHI._0_1_)) {
          if (plVar23 != (longlong *)0x0) {
            (**(code **)(*plVar23 + 8))(plVar23);
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
        }
      }
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      D3D12RHI::VerifyD3D12Result
                (iVar15,"hr",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Viewport.cpp"
                 ,0x95,(ID3D12Device *)0x0,&local_88);
    }
    pIVar6 = pTVar2->Reference;
    if (pIVar6 != (IDXGISwapChain1 *)0x0) {
      pIVar7 = (this->SwapChain2).Reference;
      pcVar10 = *(code **)*pIVar6;
      if (pIVar7 != (IDXGISwapChain2 *)0x0) {
        (this->SwapChain2).Reference = (IDXGISwapChain2 *)0x0;
        (**(code **)((longlong)*pIVar7 + 0x10))();
      }
      (*pcVar10)(pIVar6,&_GUID_a8be2ac4_199f_4946_b331_79599fb98de7,&this->SwapChain2);
      pIVar6 = pTVar2->Reference;
      pIVar8 = (this->SwapChain3).Reference;
      pcVar10 = *(code **)*pIVar6;
      if (pIVar8 != (IDXGISwapChain3 *)0x0) {
        (this->SwapChain3).Reference = (IDXGISwapChain3 *)0x0;
        (**(code **)((longlong)*pIVar8 + 0x10))();
      }
      (*pcVar10)(pIVar6,&_GUID_94d99bdb_f1f8_4ab0_b236_7da0170edab1,&this->SwapChain3);
      pIVar6 = pTVar2->Reference;
      pIVar9 = (this->SwapChain4).Reference;
      pcVar10 = *(code **)*pIVar6;
      if (pIVar9 != (IDXGISwapChain4 *)0x0) {
        (this->SwapChain4).Reference = (IDXGISwapChain4 *)0x0;
        (**(code **)((longlong)*pIVar9 + 0x10))();
      }
      (*pcVar10)(pIVar6,&_GUID_3d585d5a_bd4a_489e_b1f4_3dbcb6452ffb,&this->SwapChain4);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DXGIBackBufferLock);
  (**(code **)((longlong)*local_90 + 0x40))(local_90,this->WindowHandle,1);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DXGIBackBufferLock);
  Resize(this,this->SizeX,this->SizeY,this->bIsFullscreen,this->PixelFormat);
  PostMessageW((HWND)this->WindowHandle,0xf,0,0);
  if (local_b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data);
  }
  return;
}

// InitializeBackBufferArrays @ 145aae940

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12Viewport::InitializeBackBufferArrays(FD3D12Viewport *this)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  int iVar5;
  ForElementType<FD3D12Viewport::FBackBufferData> FVar6;
  ForElementType<FD3D12Viewport::FBackBufferData> FVar7;
  undefined1 local_res8 [8];
  undefined1 local_28 [16];
  
  this->BackbufferMultiGPUBinding = 0;
  if (1 < GNumExplicitGPUsForRendering) {
    pwVar4 = FCommandLine::Get();
    bVar2 = FParse::Value(pwVar4,L"PresentGPU=",&this->BackbufferMultiGPUBinding);
    if (bVar2) {
      iVar5 = GNumExplicitGPUsForRendering - 1;
      if (this->BackbufferMultiGPUBinding < (int)(GNumExplicitGPUsForRendering - 1)) {
        iVar5 = this->BackbufferMultiGPUBinding;
      }
      iVar3 = -1;
      if (-1 < iVar5) {
        iVar3 = iVar5;
      }
      this->BackbufferMultiGPUBinding = iVar3;
    }
  }
  FVar6 = (this->BackBuffers).AllocatorInstance.SecondaryData;
  iVar5 = (this->BackBuffers).ArrayNum;
  if (FVar6 == (ForElementType<FD3D12Viewport::FBackBufferData>)0x0) {
    FVar6 = (ForElementType<FD3D12Viewport::FBackBufferData>)&this->BackBuffers;
  }
  FVar7 = (ForElementType<FD3D12Viewport::FBackBufferData>)
          ((longlong)iVar5 * 0x10 + (longlong)FVar6);
  while( true ) {
    if ((this->BackBuffers).ArrayNum != iVar5) {
      `TCheckedPointerIterator<FD3D12Viewport::FBackBufferData,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (FVar6 == FVar7) break;
    if (FVar6 != (ForElementType<FD3D12Viewport::FBackBufferData>)local_28) {
      lVar1 = *(longlong *)FVar6;
      *(longlong *)FVar6 = 0;
      if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + 0x138) + 0x10))();
      }
    }
    *(undefined4 *)((longlong)FVar6 + 8) = 0;
    FVar6 = (ForElementType<FD3D12Viewport::FBackBufferData>)((longlong)FVar6 + 0x10);
  }
  return;
}

// IsPresentAllowed @ 145aaebc0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

bool __thiscall FD3D12Viewport::IsPresentAllowed(FD3D12Viewport *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(FD3D12DynamicRHI::SingleD3DRHI->_padding_ + 0x360))();
  return cVar1 == '\0';
}

// IssueFrameEvent @ 145aaec10

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12Viewport::IssueFrameEvent(FD3D12Viewport *this)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong *plVar3;
  FD3D12ContextCommon *this_00;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  atomic<void_*> aVar9;
  TRefCountPtr<FBaseGraphTask> TVar10;
  longlong lVar11;
  longlong *plVar12;
  FLLMScope local_res8 [2];
  undefined8 *local_res10;
  FMemScope local_res18;
  TArray<FD3D12Payload_*,TSizedDefaultAllocator<32>_> local_48;
  
  lVar11 = (longlong)(int)GNumExplicitGPUsForRendering;
  plVar12 = (longlong *)(this->_padding_ + 0x800);
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  if (((int)GNumExplicitGPUsForRendering < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  plVar3 = plVar12 + lVar11;
  if (plVar12 != plVar3) {
    lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      this_00 = *(FD3D12ContextCommon **)(*plVar12 + 0xb40);
      if ((*(int *)(lVar11 + 0x9d4c) <
           `public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                        ::__l2::LLMScope_Name103,L"RHIMisc/CreateSyncPoint");
        _Init_thread_footer(&`public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      FLLMScope::FLLMScope
                (local_res8,
                 `public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                 ::__l2::LLMScope_Name103,false,None,Default,true);
      FMemScope::FMemScope
                (&local_res18,
                 &`public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                  ::__l2::LLMScope_Name103,true);
      uVar7 = FLockFreePointerListLIFORoot<64,1>::Pop
                        ((FLockFreePointerListLIFORoot<64,1> *)&FD3D12SyncPoint::MemoryPool);
      aVar9 = (atomic<void_*>)0x0;
      if (uVar7 != 0) {
        aVar9 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar7 >> 0xe][uVar7 & 0x3fff].Payload;
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar7);
      }
      if ((aVar9 != (atomic<void_*>)0x0) ||
         (aVar9 = (atomic<void_*>)FMemory::Malloc(0x38,8), aVar9 != (atomic<void_*>)0x0)) {
        *(undefined4 *)((longlong)aVar9 + 8) = 0;
        *(undefined ***)aVar9 = &___7FD3D12SyncPoint__6B_;
        puVar1 = (undefined8 *)((longlong)aVar9 + 0x28);
        *(undefined1 *)((longlong)aVar9 + 0x20) = 0;
        *(wchar_t **)((longlong)aVar9 + 0x30) = L"WaitPreviousFrameEvent";
        *puVar1 = 0;
        TVar10 = FBaseGraphTask::CreateGraphEvent();
        if ((FBaseGraphTask *)puVar1 != TVar10.Reference) {
          puVar4 = (undefined8 *)*puVar1;
          *puVar1 = *(undefined8 *)TVar10.Reference;
          *(undefined8 *)TVar10.Reference = 0;
          if (puVar4 != (undefined8 *)0x0) {
            LOCK();
            puVar1 = puVar4 + 6;
            iVar8 = *(int *)puVar1;
            *(int *)puVar1 = *(int *)puVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)*puVar4)(puVar4,1);
            }
          }
        }
        if (local_res10 != (undefined8 *)0x0) {
          LOCK();
          piVar2 = (int *)(local_res10 + 6);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if ((iVar8 == 1) && (local_res10 != (undefined8 *)0x0)) {
            (**(code **)*local_res10)(local_res10,1);
          }
        }
        LOCK();
        *(int *)((longlong)aVar9 + 8) = *(int *)((longlong)aVar9 + 8) + 1;
        UNLOCK();
      }
      FMemScope::~FMemScope(&local_res18);
      FLLMScope::~FLLMScope(local_res8);
      FD3D12ContextCommon::SignalSyncPoint(this_00,(FD3D12SyncPoint *)aVar9);
      (**(code **)(this_00->_padding_ + 0x28))(this_00,&local_48);
      iVar8 = (this->FrameSyncPoints).ArrayNum;
      if (iVar8 == (this->FrameSyncPoints).ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->FrameSyncPoints).AllocatorInstance,
                           &(this->FrameSyncPoints).ArrayMax);
      }
      plVar12 = plVar12 + 1;
      (this->FrameSyncPoints).ArrayNum = iVar8 + 1;
      *(atomic<void_*> *)((this->FrameSyncPoints).AllocatorInstance.Data + (longlong)iVar8 * 8) =
           aVar9;
    } while (plVar12 != plVar3);
  }
  FD3D12DynamicRHI::SubmitPayloads(FD3D12DynamicRHI::SingleD3DRHI,&local_48);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// OnResumeRendering @ 145ab0440

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12Viewport::OnResumeRendering(FD3D12Viewport *this)

{
  return;
}

// OnSuspendRendering @ 145ab0450

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12Viewport::OnSuspendRendering(FD3D12Viewport *this)

{
  return;
}

// Present @ 145ab0fb0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

bool __thiscall
FD3D12Viewport::Present(FD3D12Viewport *this,FD3D12CommandContextBase *param_1,bool param_2)

{
  longlong lVar1;
  FRHICustomPresent *pFVar2;
  IDXGISwapChain3 *pIVar3;
  int iVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  DWORD DVar10;
  FD3D12ContextCommon *this_00;
  uint uVar11;
  int iVar12;
  
  cVar6 = (**(code **)(FD3D12DynamicRHI::SingleD3DRHI->_padding_ + 0x360))();
  if (cVar6 != '\0') {
    return false;
  }
  if ((param_1->_padding_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  lVar1 = param_1->_padding_;
  if ((this->_padding_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if ((lVar1 != this->_padding_) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContextBase.GetParentAdapter() == GetParentAdapter()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Viewport.cpp"
                         ,0x25d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  uVar11 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  iVar4 = 0;
  if (uVar11 != 0) {
    for (; (uVar11 >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
    }
  }
  iVar12 = 0x20;
  if (uVar11 != 0) {
    iVar12 = iVar4;
  }
  uVar9 = 0;
  bVar7 = uVar11 != 0;
  while (bVar7) {
    this_00 = (FD3D12ContextCommon *)(**(code **)(param_1->_padding_ + 0x290))(param_1,iVar12);
    FD3D12ContextCommon::FlushResourceBarriers(this_00);
    FD3D12ContextCommon::FlushCommands(this_00,WaitForSubmission);
    uVar11 = uVar11 & ~(1 << ((byte)iVar12 & 0x1f));
    iVar12 = 0;
    bVar7 = uVar11 != 0;
    if (bVar7) {
      for (; (uVar11 >> iVar12 & 1) == 0; iVar12 = iVar12 + 1) {
      }
    }
  }
  if (param_2) {
    uVar9 = RHIGetSyncInterval();
  }
  bVar7 = PresentChecked(this,(IRHICommandContext *)param_1,uVar9);
  if (bVar7) {
    pIVar3 = (this->SwapChain3).Reference;
    if (pIVar3 != (IDXGISwapChain3 *)0x0) {
      uVar11 = (**(code **)((longlong)*pIVar3 + 0x120))();
      goto LAB_145ab1145;
    }
  }
  else {
    pFVar2 = (this->CustomPresent).Reference;
    if (pFVar2 == (FRHICustomPresent *)0x0) {
      return false;
    }
    cVar6 = (**(code **)(*(longlong *)pFVar2 + 0x20))();
    if (cVar6 == '\0') {
      return false;
    }
  }
  uVar11 = this->CurrentBackBufferIndex_RHIThread + 1;
LAB_145ab1145:
  SetBackBufferIndex_RHIThread(this,uVar11);
  if (D3D12RHI::RHIConsoleVariables::LogViewportEvents != 0) {
    DVar10 = GetCurrentThreadId();
    FThreadManager::GetThreadName(DVar10);
    if (4 < (byte)LogD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
  }
  return bVar7;
}

// PresentChecked @ 145ab11d0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

bool __thiscall
FD3D12Viewport::PresentChecked(FD3D12Viewport *this,IRHICommandContext *param_1,int param_2)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  IDXGISwapChain1 *pIVar2;
  FRHICustomPresent *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_D3D12CustomPresentTime> FVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar14;
  FName FVar15;
  int local_res8 [4];
  int local_res18;
  FColor_u_0 local_res20 [2];
  FString local_98;
  longlong *local_88;
  FName local_80;
  FName local_78;
  LARGE_INTEGER local_68;
  FStatMessage local_60;
  FName local_50;
  FString local_48;
  
  local_res18 = param_2;
  if ((this->bIsValid != false) &&
     (pIVar2 = (this->SwapChain1).Reference, pIVar2 != (IDXGISwapChain1 *)0x0)) {
    local_88 = (longlong *)0x0;
    (**(code **)((longlong)*pIVar2 + 0x58))(pIVar2,local_res8,&local_88);
    if ((local_res8[0] != 0) != this->bIsFullscreen) {
      this->bFullscreenLost = true;
      this->bIsValid = false;
    }
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 0x10))();
    }
  }
  if (this->bIsValid == false) {
    lpCriticalSection = &this->ExpectedBackBufferIndexLock;
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      uVar10 = this->ExpectedBackBufferIndex_RenderThread;
      if (uVar10 == 0) {
        uVar10 = this->NumBackBuffers;
      }
      SetBackBufferIndex_RenderThread(this,uVar10 - 1);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return false;
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  cVar7 = '\x01';
  if ((this->CustomPresent).Reference == (FRHICustomPresent *)0x0) goto LAB_145ab14b4;
  FVar13 = StatPtr_STAT_D3D12CustomPresentTime;
  if (StatPtr_STAT_D3D12CustomPresentTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12CustomPresentTime>)0x0) {
    pFVar12 = ::FName::FName(&local_50,"STAT_D3D12CustomPresentTime");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_D3D12CustomPresentTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12CustomPresentTime,*pFVar12,
                        L"CustomPresent time","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar13;
  bVar8 = false;
  bVar6 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar10 = FVar15.Number;
  if ((FVar14.Value == 0) && (uVar10 == 0)) {
LAB_145ab13be:
    bVar5 = false;
    FVar15 = local_78;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar8 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_80.ComparisonIndex.Value = FVar14.Value;
        local_80.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_80,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Viewport.cpp"
                   ,0x228);
        bVar8 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145ab13be;
    local_98.Data.AllocatorInstance.Data._0_4_ = FVar14.Value;
    local_98.Data.AllocatorInstance.Data._4_4_ = uVar10;
    FThreadStats::AddMessage(FVar15,CycleScopeStart);
    bVar5 = true;
  }
  pFVar3 = (this->CustomPresent).Reference;
  cVar7 = (**(code **)(*(longlong *)pFVar3 + 0x30))(pFVar3,param_1);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_60.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_68);
      local_60.StatData.Pad[4] = '\0';
      local_60.StatData.Pad[5] = '\0';
      local_60.StatData.Pad[6] = '\0';
      local_60.StatData.Pad[7] = '\0';
      local_60.StatData.Pad[0] = local_68.s.LowPart._0_1_;
      local_60.StatData.Pad[1] = local_68.s.LowPart._1_1_;
      local_60.StatData.Pad[2] = local_68.s.LowPart._2_1_;
      local_60.StatData.Pad[3] = local_68.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_60);
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
  if (cVar7 == '\0') {
    return false;
  }
LAB_145ab14b4:
  iVar11 = PresentInternal(this,local_res18);
  if (iVar11 < 0) {
    if (((iVar11 == -0x7ff8ffa9) || (iVar11 == -0x7785ffff)) &&
       (this->CheckedPresentFailureCounter = this->CheckedPresentFailureCounter + 1,
       this->CheckedPresentFailureCounter < 5)) {
      if (1 < (byte)LogD3D12RHI._0_1_) {
        GetStateString(this,&local_98);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
        if ((void *)CONCAT44(local_98.Data.AllocatorInstance.Data._4_4_,
                             local_98.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
          FMemory::Free((void *)CONCAT44(local_98.Data.AllocatorInstance.Data._4_4_,
                                         local_98.Data.AllocatorInstance.Data._0_4_));
        }
      }
    }
    else {
      GetStateString(this,&local_48);
      if ((this->_padding_ == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ParentAdapter != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                             ,0x41,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      D3D12RHI::VerifyD3D12Result
                (iVar11,"Result",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Viewport.cpp"
                 ,0x23c,*(ID3D12Device **)(this->_padding_ + 8),&local_48);
    }
  }
  else {
    this->CheckedPresentFailureCounter = 0;
  }
  pFVar3 = (this->CustomPresent).Reference;
  if (pFVar3 != (FRHICustomPresent *)0x0) {
    (**(code **)(*(longlong *)pFVar3 + 0x38))();
  }
  return (bool)cVar7;
}

// PresentInternal @ 145ab1600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

undefined4 __thiscall FD3D12Viewport::PresentInternal(FD3D12Viewport *this,int param_1)

{
  IDXGISwapChain1 *pIVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  FThreadHeartBeat *this_00;
  undefined1 auStack_a8 [32];
  uint local_88 [2];
  LARGE_INTEGER local_80;
  FScopeIdle local_78;
  int local_70;
  char local_6c;
  DWORD local_68;
  FRHIFlipDetails local_60;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_a8;
  uVar6 = 0;
  if (((param_1 == 0) && (uVar6 = 0, this->bIsFullscreen == false)) &&
     (uVar6 = 0, this->bAllowTearing != false)) {
    uVar6 = 0x200;
  }
  this_00 = FThreadHeartBeat::Get();
  FThreadHeartBeat::PresentFrame(this_00);
  if ((this->SwapChain1).Reference == (IDXGISwapChain1 *)0x0) {
    uVar6 = 0;
  }
  else {
    bVar4 = IsInRHIThread();
    UE::Stats::FThreadIdleStats::FScopeIdle::FScopeIdle(&local_78,!bVar4);
    local_70 = 2;
    bVar4 = IsInRenderingThread();
    if (bVar4) {
      local_6c = '\x01';
      QueryPerformanceCounter(&local_80);
      local_68 = local_80.s.LowPart;
    }
    else {
      local_6c = '\0';
      local_68 = 0;
    }
    pIVar1 = (this->SwapChain1).Reference;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    iVar5 = (**(code **)((longlong)*pIVar1 + 0x80))(pIVar1,&local_40);
    uVar2 = local_60.PresentIndex;
    uVar3 = local_60.VBlankTimeInCycles;
    local_60.VBlankTimeInCycles = local_30;
    while ((local_30 = local_60.VBlankTimeInCycles, -1 < iVar5 &&
           (local_60.PresentIndex = local_40 & 0xffffffff,
           LastFlipFrame.PresentIndex < local_60.PresentIndex))) {
      local_60.FlipTimeInSeconds = 0.0;
      local_60.VBlankTimeInSeconds = 0.0;
      RHISetVsyncDebugInfo(&local_60);
      LastFlipFrame.PresentIndex = local_60.PresentIndex;
      LastFlipFrame.FlipTimeInSeconds = local_60.FlipTimeInSeconds;
      LastFlipFrame.VBlankTimeInSeconds = local_60.VBlankTimeInSeconds;
      LastFlipFrame.VBlankTimeInCycles = local_60.VBlankTimeInCycles;
      pIVar1 = (this->SwapChain1).Reference;
      LastStats.PresentCount = (uint)local_40;
      LastStats.PresentRefreshCount = local_40._4_4_;
      LastStats.SyncRefreshCount = (uint)uStack_38;
      LastStats._12_4_ = uStack_38._4_4_;
      LastStats.SyncQPCTime._s_0.LowPart = (ulong)local_30;
      LastStats.SyncQPCTime._s_0.HighPart = local_30._4_4_;
      LastStats.SyncGPUTime._s_0.LowPart = (ulong)uStack_28;
      LastStats.SyncGPUTime._s_0.HighPart = uStack_28._4_4_;
      iVar5 = (**(code **)((longlong)*pIVar1 + 0x80))(pIVar1,&local_40);
      uVar2 = local_60.PresentIndex;
      uVar3 = local_60.VBlankTimeInCycles;
      local_60.VBlankTimeInCycles = local_30;
    }
    local_60.PresentIndex = uVar2;
    local_60.VBlankTimeInCycles = uVar3;
    if (CpuChannel->Enabled < 0) {
      pIVar1 = (this->SwapChain1).Reference;
      uVar6 = (**(code **)((longlong)*pIVar1 + 0x40))(pIVar1,param_1,uVar6);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId387,"D3D12_Present",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Viewport.cpp"
                 ,0x183);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId387);
      pIVar1 = (this->SwapChain1).Reference;
      uVar6 = (**(code **)((longlong)*pIVar1 + 0x40))(pIVar1,param_1,uVar6);
      FCpuProfilerTrace::OutputEndEvent();
    }
    pIVar1 = (this->SwapChain1).Reference;
    iVar5 = (**(code **)((longlong)*pIVar1 + 0x88))(pIVar1,local_88);
    if (iVar5 < 0) {
      GRHIGlobals.PresentCounter = GRHIGlobals.PresentCounter + 1;
    }
    else {
      GRHIGlobals.PresentCounter = (ulong64)local_88[0];
    }
    if (local_6c != '\0') {
      QueryPerformanceCounter(&local_80);
      GRenderThreadIdle[local_70] = GRenderThreadIdle[local_70] + (local_80.s.LowPart - local_68);
    }
    UE::Stats::FThreadIdleStats::FScopeIdle::~FScopeIdle(&local_78);
  }
  return uVar6;
}

// Resize @ 145ab62d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145ab64e0) */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FD3D12Viewport::Resize
          (FD3D12Viewport *this,uint param_1,uint param_2,bool param_3,EPixelFormat param_4)

{
  FRHICustomPresent *pFVar1;
  ForElementType<FD3D12Viewport::FBackBufferData> FVar2;
  IDXGISwapChain1 *pIVar3;
  IDXGISwapChain4 *pIVar4;
  code *pcVar5;
  FD3D12Adapter *pFVar6;
  bool bVar7;
  bool bVar8;
  DWORD DVar9;
  int iVar10;
  ForElementType<FD3D12Viewport::FBackBufferData> FVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auStackY_1b8 [32];
  bool local_166 [2];
  uint local_164;
  uint local_160;
  uint local_15c;
  int local_158;
  FD3D12Adapter *local_150;
  FScriptContainerElement *local_148;
  FString local_140;
  FString local_130;
  uint local_120;
  uint uStack_11c;
  undefined8 uStack_118;
  DXGI_FORMAT local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  uint local_100;
  uint uStack_fc;
  undefined8 uStack_f8;
  DXGI_FORMAT local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  uint local_e0;
  undefined4 local_dc;
  uint local_d8;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  TVector2<double>_u_0 local_a0;
  TVector2<double>_u_0 local_90;
  tagRECT local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_164 = param_2;
  local_160 = param_1;
  if ((this->_padding_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_150 = (FD3D12Adapter *)this->_padding_;
  if (D3D12RHI::RHIConsoleVariables::LogViewportEvents != 0) {
    DVar9 = GetCurrentThreadId();
    FThreadManager::GetThreadName(DVar9);
    if (4 < (byte)LogD3D12RHI._0_1_) {
      UE::DXGIUtilities::GetSwapChainFormat(this->PixelFormat);
      ::FString::PrintfImpl
                (&local_d0,
                 L"Viewport=0x%p, Num=%d, Size=(%d,%d), PF=%d, DXGIFormat=0x%x, Fullscreen=%d, AllowTearing=%d"
                );
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      param_1 = local_160;
      param_2 = local_164;
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        param_1 = local_160;
        param_2 = local_164;
      }
    }
  }
  pFVar6 = local_150;
  if ((this->bIsFullscreen == param_3) &&
     ((this->bIsFullscreen == false || ((param_1 == this->SizeX && (param_2 == this->SizeY)))))) {
    bVar7 = false;
    local_148 = (FScriptContainerElement *)0x0;
    local_158 = 0;
  }
  else {
    bVar7 = true;
    UE::DXGIUtilities::GetSwapChainFormat(this->PixelFormat);
    ::FString::PrintfImpl
              (&local_140,
               L"Viewport=0x%p, Num=%d, Size=(%d,%d), PF=%d, DXGIFormat=0x%x, Fullscreen=%d, AllowTearing=%d"
              );
    local_148 = local_140.Data.AllocatorInstance.Data;
    local_158 = local_140.Data.ArrayNum;
    local_140.Data.ArrayNum = 0;
    local_140.Data.ArrayMax = 0;
    local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  uVar12 = 0;
  FlushRenderingCommands();
  FD3D12Adapter::BlockUntilIdle(pFVar6);
  pFVar6 = local_150;
  uVar14 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_e0 = 0;
  if (uVar14 != 0) {
    for (; (uVar14 >> local_e0 & 1) == 0; local_e0 = local_e0 + 1) {
    }
  }
  uVar13 = 0x20;
  if (uVar14 != 0) {
    uVar13 = (ulonglong)local_e0;
  }
  local_dc = 0;
  if (uVar14 != 0) {
    while( true ) {
      if ((GNumExplicitGPUsForRendering <= (uint)uVar13) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("GPUIndex < GNumExplicitGPUsForRendering",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                             ,0x103,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FD3D12CommandContext::ClearState
                ((pFVar6->Devices).Elements[uVar13]->ImmediateCommandContext,TransientOnly);
      uVar14 = uVar14 & ~(1 << ((byte)uVar13 & 0x1f));
      local_d8 = 0;
      if (uVar14 != 0) {
        for (; (uVar14 >> local_d8 & 1) == 0; local_d8 = local_d8 + 1) {
        }
      }
      if (uVar14 == 0) break;
      uVar13 = (ulonglong)local_d8;
    }
  }
  pFVar1 = (this->CustomPresent).Reference;
  if (pFVar1 != (FRHICustomPresent *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x10))();
  }
  if (this->NumBackBuffers != 0) {
    do {
      uVar14 = 0;
      if ((int)uVar12 < (this->BackBuffers).ArrayNum) {
        uVar14 = ~uVar12 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar2 = (this->BackBuffers).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<FD3D12Viewport::FBackBufferData>)&this->BackBuffers;
      if (FVar2 != (ForElementType<FD3D12Viewport::FBackBufferData>)0x0) {
        FVar11 = FVar2;
      }
      ReleaseBackBufferResource<FD3D12Texture,FD3D12Texture>
                ((TRefCountPtr<FD3D12Texture> *)((longlong)(int)uVar12 * 0x10 + (longlong)FVar11),
                 L"BackBuffer",uVar12);
      uVar12 = uVar12 + 1;
    } while (uVar12 < this->NumBackBuffers);
  }
  FlushRenderingCommands();
  FD3D12Adapter::BlockUntilIdle(local_150);
  if (param_4 == PF_Unknown) {
    param_4 = this->PixelFormat;
  }
  this->bFullscreenLost = false;
  if (((this->SizeX != local_160) || (this->SizeY != local_164)) || (this->PixelFormat != param_4))
  {
    this->SizeX = local_160;
    this->SizeY = local_164;
    this->PixelFormat = param_4;
    if ((local_160 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SizeX > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Viewport.cpp"
                           ,0x17a,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((this->SizeY == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SizeY > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Viewport.cpp"
                           ,0x17b,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((this->bNeedSwapChain != false) && (param_3)) {
      local_120 = this->SizeX;
      uStack_11c = this->SizeY;
      uStack_118 = 0;
      uStack_10c = 0;
      uStack_108 = 0;
      local_110 = UE::DXGIUtilities::GetSwapChainFormat(this->PixelFormat);
      local_70 = CONCAT44(uStack_11c,local_120);
      pIVar3 = (this->SwapChain1).Reference;
      local_60 = CONCAT44(uStack_10c,local_110);
      uStack_68 = uStack_118;
      local_58 = uStack_108;
      iVar10 = (**(code **)((longlong)*pIVar3 + 0x70))(pIVar3,&local_70);
      if (iVar10 < 0) {
        ConditionalResetSwapChain(this,true);
      }
    }
  }
  if (this->bIsFullscreen != param_3) {
    this->bIsFullscreen = param_3;
    this->bIsValid = false;
    if ((this->bNeedSwapChain != false) &&
       (ConditionalResetSwapChain(this,true), this->bIsFullscreen == false)) {
      local_100 = this->SizeX;
      uStack_fc = this->SizeY;
      uStack_f8 = 0;
      uStack_ec = 0;
      uStack_e8 = 0;
      local_f0 = UE::DXGIUtilities::GetSwapChainFormat(this->PixelFormat);
      local_50 = CONCAT44(uStack_fc,local_100);
      pIVar3 = (this->SwapChain1).Reference;
      local_40 = CONCAT44(uStack_ec,local_f0);
      uStack_48 = uStack_f8;
      local_38 = uStack_e8;
      (**(code **)((longlong)*pIVar3 + 0x70))(pIVar3,&local_50);
    }
  }
  local_80.left = 0;
  local_80.top = 0;
  local_80.right = 0;
  local_80.bottom = 0;
  GetWindowRect((HWND)this->WindowHandle,&local_80);
  local_90._s_0.X = (double)local_80.left;
  local_90._s_0.Y = (double)local_80.top;
  local_a0._s_0.X = (double)local_80.right;
  local_a0._s_0.Y = (double)local_80.bottom;
  HDRGetMetaData(&this->DisplayOutputFormat,&this->DisplayColorGamut,local_166,
                 (TVector2<double> *)&local_90._s_0,(TVector2<double> *)&local_a0._s_0,
                 this->WindowHandle);
  ResizeInternal(this);
  if (local_166[0] == false) {
    pIVar4 = (this->SwapChain4).Reference;
    if ((pIVar4 != (IDXGISwapChain4 *)0x0) &&
       (this->ColorSpace != DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709)) {
      local_15c = 0;
      iVar10 = (**(code **)((longlong)*pIVar4 + 0x128))(pIVar4,0,&local_15c);
      ::FString::FString(&local_130,L"RGB_FULL_G22_NONE_P709");
      if ((iVar10 < 0) || ((local_15c & 1) == 0)) {
        if (1 < (byte)LogD3D12RHI._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
        }
      }
      else {
        pIVar4 = (this->SwapChain4).Reference;
        iVar10 = (**(code **)((longlong)*pIVar4 + 0x130))(pIVar4,0);
        if (iVar10 < 0) {
          local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c0.Data.ArrayNum = 0;
          local_c0.Data.ArrayMax = 0;
          D3D12RHI::VerifyD3D12Result
                    (iVar10,"SwapChain4->SetColorSpace1(NewColorSpace)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Viewport.cpp"
                     ,0x20d,(ID3D12Device *)0x0,&local_c0);
        }
        if (5 < (byte)LogD3D12RHI._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
        }
        this->ColorSpace = DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709;
      }
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
    }
  }
  else if ((GRHIGlobals.SupportsHDROutput != false) && (bVar8 = IsHDREnabled(), bVar8)) {
    EnsureColorSpace(this,this->DisplayColorGamut,this->DisplayOutputFormat);
  }
  if ((bVar7) && (4 < (byte)LogD3D12RHI._0_1_)) {
    UE::DXGIUtilities::GetSwapChainFormat(this->PixelFormat);
    ::FString::PrintfImpl
              (&local_b0,
               L"Viewport=0x%p, Num=%d, Size=(%d,%d), PF=%d, DXGIFormat=0x%x, Fullscreen=%d, AllowTearing=%d"
              );
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
  }
  if (local_148 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148);
  }
  return;
}

// ResizeInternal @ 145ab6f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall FD3D12Viewport::ResizeInternal(FD3D12Viewport *this)

{
  ForElementType<FD3D12Viewport::FBackBufferData> FVar1;
  undefined4 *puVar2;
  IDXGISwapChain3 *pIVar3;
  FD3D12Device *pFVar4;
  FD3D12Texture *pFVar5;
  IDXGISwapChain1 *pIVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FD3D12Texture *pFVar11;
  ForElementType<FD3D12Viewport::FBackBufferData> FVar12;
  undefined4 uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined1 auStackY_228 [32];
  undefined4 local_1d8 [2];
  ForAnyElementType local_1d0;
  undefined8 local_1c8;
  ForAnyElementType local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  FD3D12Device *local_1a0;
  uint local_198;
  uint uStack_194;
  undefined1 local_190 [4];
  undefined1 local_18c [4];
  undefined1 local_188 [8];
  undefined8 local_180;
  undefined8 local_178;
  longlong local_170;
  FString local_168;
  <lambda_1> local_158;
  FString local_148;
  FRHITextureDesc local_138;
  wchar_t *local_e8;
  undefined8 local_e0;
  FResourceBulkDataInterface *local_d8;
  FName local_d0;
  FName local_c8;
  FRHITextureCreateDesc local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_228;
  if ((this->_padding_ == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar16 = this->_padding_;
  local_1b0 = lVar16;
  InitializeBackBufferArrays(this);
  uVar13 = 0x802;
  if (this->bAllowTearing == false) {
    uVar13 = 2;
  }
  local_1a0 = (FD3D12Device *)CONCAT44(local_1a0._4_4_,uVar13);
  if (GNumExplicitGPUsForRendering < 2) {
    pIVar6 = (this->SwapChain1).Reference;
    if (pIVar6 != (IDXGISwapChain1 *)0x0) {
      UE::DXGIUtilities::GetSwapChainFormat(this->PixelFormat);
      iVar9 = (**(code **)((longlong)*pIVar6 + 0x68))
                        (pIVar6,this->NumBackBuffers,this->SizeX,this->SizeY);
      if (iVar9 < 0) {
        GetStateString(this,&local_148);
        D3D12RHI::VerifyD3D12Result
                  (iVar9,
                   "SwapChain1->ResizeBuffers(NumBackBuffers, SizeX, SizeY, UE::DXGIUtilities::GetSwapChainFormat(PixelFormat), SwapChainFlags)"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Viewport.cpp"
                   ,0x142,*(ID3D12Device **)(lVar16 + 8),&local_148);
      }
    }
    if ((GNumExplicitGPUsForRendering == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("GPUIndex < GNumExplicitGPUsForRendering",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                           ,0x103,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_1a0 = *(FD3D12Device **)(lVar16 + 0x800);
    uVar10 = 0;
    if (this->NumBackBuffers != 0) {
      do {
        pFVar4 = local_1a0;
        uVar14 = 0;
        if ((int)uVar10 < (this->BackBuffers).ArrayNum) {
          uVar14 = ~uVar10 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar1 = (this->BackBuffers).AllocatorInstance.SecondaryData;
        lVar16 = (longlong)(int)uVar10;
        FVar12 = (ForElementType<FD3D12Viewport::FBackBufferData>)&this->BackBuffers;
        if (FVar1 != (ForElementType<FD3D12Viewport::FBackBufferData>)0x0) {
          FVar12 = FVar1;
        }
        if ((*(longlong *)((longlong)FVar12 + lVar16 * 0x10) != 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("BackBuffers[i].Texture.GetReference() == nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Viewport.cpp"
                               ,0x148,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_178 = 0;
        pFVar11 = GetSwapChainSurface(pFVar4,this->PixelFormat,this->SizeX,this->SizeY,
                                      (IDXGISwapChain *)(this->SwapChain1).Reference,uVar10,
                                      (ID3D12Resource *)&local_178);
        uVar14 = 0;
        if ((int)uVar10 < (this->BackBuffers).ArrayNum) {
          uVar14 = ~uVar10 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar1 = (this->BackBuffers).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FD3D12Viewport::FBackBufferData>)&this->BackBuffers;
        if (FVar1 != (ForElementType<FD3D12Viewport::FBackBufferData>)0x0) {
          FVar12 = FVar1;
        }
        pFVar5 = *(FD3D12Texture **)((longlong)FVar12 + lVar16 * 0x10);
        if (pFVar5 != pFVar11) {
          *(FD3D12Texture **)((longlong)FVar12 + lVar16 * 0x10) = pFVar11;
          if (pFVar11 != (FD3D12Texture *)0x0) {
            (**(code **)(pFVar11->_padding_ + 8))(&pFVar11->_padding_,local_18c);
          }
          if (pFVar5 != (FD3D12Texture *)0x0) {
            (**(code **)(pFVar5->_padding_ + 0x10))();
          }
        }
        uVar10 = uVar10 + 1;
        lVar16 = local_1b0;
      } while (uVar10 < this->NumBackBuffers);
    }
  }
  else {
    uVar17 = 0;
    local_1c0.Data = (FScriptContainerElement *)0x0;
    local_1b8 = 0;
    local_1d0.Data = (FScriptContainerElement *)0x0;
    local_1c8 = 0;
    uVar10 = 0;
    uVar15 = uVar17;
    if (this->NumBackBuffers != 0) {
      do {
        iVar9 = this->BackbufferMultiGPUBinding;
        uVar10 = (uint)uVar15;
        if (iVar9 == -1) {
          iVar9 = (int)(uVar15 % (ulonglong)GNumExplicitGPUsForRendering);
        }
        uVar14 = 0;
        if ((int)uVar10 < (this->BackBuffers).ArrayNum) {
          uVar14 = ~uVar10 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar1 = (this->BackBuffers).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FD3D12Viewport::FBackBufferData>)&this->BackBuffers;
        if (FVar1 != (ForElementType<FD3D12Viewport::FBackBufferData>)0x0) {
          FVar12 = FVar1;
        }
        *(int *)((longlong)FVar12 + 8 + (longlong)(int)uVar10 * 0x10) = iVar9;
        uVar15 = (ulonglong)(uVar10 + 1);
      } while (uVar10 + 1 < this->NumBackBuffers);
      uVar10 = 0;
      uVar15 = uVar17;
      if (this->NumBackBuffers != 0) {
        do {
          uVar14 = (uint)uVar15;
          uVar10 = 0;
          if ((int)uVar14 < (this->BackBuffers).ArrayNum) {
            uVar10 = ~uVar14 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          FVar1 = (this->BackBuffers).AllocatorInstance.SecondaryData;
          FVar12 = (ForElementType<FD3D12Viewport::FBackBufferData>)&this->BackBuffers;
          if (FVar1 != (ForElementType<FD3D12Viewport::FBackBufferData>)0x0) {
            FVar12 = FVar1;
          }
          uVar10 = *(uint *)((longlong)FVar12 + 8 + (longlong)(int)uVar14 * 0x10);
          if ((GNumExplicitGPUsForRendering <= uVar10) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("GPUIndex < GNumExplicitGPUsForRendering",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                                 ,0x103,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          puVar2 = *(undefined4 **)(local_1b0 + 0x800 + (ulonglong)uVar10 * 8);
          if (((int)puVar2[0x4f0] < 1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_1a8 = *(undefined8 *)(puVar2 + 0x2e4);
          if (((local_1c0.Data <= (FScriptContainerElement *)&local_1a8) &&
              ((FScriptContainerElement *)&local_1a8 <
               local_1c0.Data + (longlong)local_1b8._4_4_ * 8)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar9 = (int)local_1b8;
          if ((int)local_1b8 == local_1b8._4_4_) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_1c0,(int *)((longlong)&local_1b8 + 4));
          }
          local_1b8 = CONCAT44(local_1b8._4_4_,iVar9 + 1);
          *(undefined8 *)(local_1c0.Data + (longlong)iVar9 * 8) = local_1a8;
          local_1d8[0] = 1;
          if (GVirtualMGPU == 0) {
            local_1d8[0] = *puVar2;
          }
          if (((local_1d0.Data <= (FScriptContainerElement *)local_1d8) &&
              ((FScriptContainerElement *)local_1d8 < local_1d0.Data + (longlong)local_1c8._4_4_ * 4
              )) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar9 = (int)local_1c8;
          if ((int)local_1c8 == local_1c8._4_4_) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_1d0,(int *)((longlong)&local_1c8 + 4));
          }
          uVar15 = (ulonglong)(uVar14 + 1);
          local_1c8 = CONCAT44(local_1c8._4_4_,iVar9 + 1);
          *(undefined4 *)(local_1d0.Data + (longlong)iVar9 * 4) = local_1d8[0];
          uVar10 = this->NumBackBuffers;
        } while (uVar14 + 1 < uVar10);
      }
    }
    pIVar3 = (this->SwapChain3).Reference;
    if (pIVar3 != (IDXGISwapChain3 *)0x0) {
      UE::DXGIUtilities::GetSwapChainFormat(this->PixelFormat);
      iVar9 = (**(code **)((longlong)*pIVar3 + 0x138))(pIVar3,uVar10,this->SizeX,this->SizeY);
      if (iVar9 < 0) {
        local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_168.Data.ArrayNum = 0;
        local_168.Data.ArrayMax = 0;
        D3D12RHI::VerifyD3D12Result
                  (iVar9,
                   "SwapChain3->ResizeBuffers1(NumBackBuffers, SizeX, SizeY, UE::DXGIUtilities::GetSwapChainFormat(PixelFormat), SwapChainFlags, NodeMasks.GetData(), (IUnknown**)CommandQueues.GetData())"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Viewport.cpp"
                   ,0x12f,*(ID3D12Device **)(local_1b0 + 8),&local_168);
      }
    }
    if (this->NumBackBuffers != 0) {
      do {
        uVar14 = (uint)uVar17;
        uVar18 = ~uVar14 >> 0x1f;
        uVar10 = 0;
        if ((int)uVar14 < (this->BackBuffers).ArrayNum) {
          uVar10 = uVar18;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar1 = (this->BackBuffers).AllocatorInstance.SecondaryData;
        lVar16 = (longlong)(int)uVar14;
        FVar12 = (ForElementType<FD3D12Viewport::FBackBufferData>)&this->BackBuffers;
        if (FVar1 != (ForElementType<FD3D12Viewport::FBackBufferData>)0x0) {
          FVar12 = FVar1;
        }
        uVar10 = *(uint *)((longlong)FVar12 + 8 + lVar16 * 0x10);
        if ((GNumExplicitGPUsForRendering <= uVar10) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("GPUIndex < GNumExplicitGPUsForRendering",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                               ,0x103,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar4 = *(FD3D12Device **)(local_1b0 + 0x800 + (ulonglong)uVar10 * 8);
        uVar10 = 0;
        if ((int)uVar14 < (this->BackBuffers).ArrayNum) {
          uVar10 = uVar18;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar1 = (this->BackBuffers).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FD3D12Viewport::FBackBufferData>)&this->BackBuffers;
        if (FVar1 != (ForElementType<FD3D12Viewport::FBackBufferData>)0x0) {
          FVar12 = FVar1;
        }
        if ((*(longlong *)((longlong)FVar12 + lVar16 * 0x10) != 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("BackBuffers[Index].Texture.GetReference() == nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Viewport.cpp"
                               ,0x136,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_180 = 0;
        pFVar11 = GetSwapChainSurface(pFVar4,this->PixelFormat,this->SizeX,this->SizeY,
                                      (IDXGISwapChain *)(this->SwapChain1).Reference,uVar14,
                                      (ID3D12Resource *)&local_180);
        uVar10 = 0;
        if ((int)uVar14 < (this->BackBuffers).ArrayNum) {
          uVar10 = uVar18;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar1 = (this->BackBuffers).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FD3D12Viewport::FBackBufferData>)&this->BackBuffers;
        if (FVar1 != (ForElementType<FD3D12Viewport::FBackBufferData>)0x0) {
          FVar12 = FVar1;
        }
        pFVar5 = *(FD3D12Texture **)((longlong)FVar12 + lVar16 * 0x10);
        if (pFVar5 != pFVar11) {
          *(FD3D12Texture **)((longlong)FVar12 + lVar16 * 0x10) = pFVar11;
          if (pFVar11 != (FD3D12Texture *)0x0) {
            (**(code **)(pFVar11->_padding_ + 8))(&pFVar11->_padding_,local_190);
          }
          if (pFVar5 != (FD3D12Texture *)0x0) {
            (**(code **)(pFVar5->_padding_ + 0x10))();
          }
        }
        uVar17 = (ulonglong)(uVar14 + 1);
      } while (uVar14 + 1 < this->NumBackBuffers);
    }
    if (local_1d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Data);
    }
    lVar16 = local_1b0;
    if (local_1c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data);
      lVar16 = local_1b0;
    }
  }
  pIVar3 = (this->SwapChain3).Reference;
  uVar10 = 0;
  if (pIVar3 != (IDXGISwapChain3 *)0x0) {
    uVar10 = (**(code **)((longlong)*pIVar3 + 0x120))();
  }
  SetBackBufferIndex_RHIThread(this,uVar10);
  local_138.ExtData = 0;
  local_138.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_138.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_138.Dimension = bIsQuadBufferStereoEnabled != false;
  local_138.AliasableFormats.ArrayNum = 0;
  local_d8 = (FResourceBulkDataInterface *)0x0;
  local_e8 = L"BackBufferReference";
  local_138.ClearValue._0_8_ = 1;
  local_198 = this->SizeX;
  uStack_194 = this->SizeY;
  local_138.Extent.field0_0x0._0_4_ = this->SizeX;
  local_138.Extent.field0_0x0._4_4_ = this->SizeY;
  local_138.ArraySize = (bIsQuadBufferStereoEnabled != false) + 1;
  local_138.Format = this->PixelFormat;
  local_138.ClearValue.Value._4_8_ = 0;
  local_138.ClearValue.Value.Color[3] = 0.0;
  local_138.Depth = 1;
  local_138.NumMips = '\x01';
  local_138.NumSamples = '\x01';
  local_138.UAVFormat = PF_Unknown;
  local_138.FastVRAMPercentage = 0xff;
  local_138.AliasableFormats.ArrayMax = 1;
  local_e0 = 2;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  local_138.Flags = Presentable|ResolveTargetable|RenderTargetable;
  FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)&local_b8,&local_138);
  local_b8.DebugName = local_e8;
  local_b8.InitialState = (ERHIAccess)local_e0;
  local_b8.InitAction = local_e0._4_4_;
  local_b8.BulkData = local_d8;
  local_b8.ClassName = local_d0;
  local_b8.OwnerName = local_c8;
  if (local_138.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_138.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  local_158.CreateDesc = &local_b8;
  local_170 = lVar16;
  local_158.__this = this;
  pFVar11 = FD3D12LinkedAdapterObject<FD3D12Texture>::
            CreateLinkedObjects<FD3D12Texture,_FD3D12Viewport::CreateDummyBackBufferTextures_::__l2::<lambda_1>,_FD3D12Adapter::CreateLinkedObject<FD3D12Texture,_FD3D12Viewport::CreateDummyBackBufferTextures_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                      ((FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1),
                       (<lambda_1> *)&local_170,&local_158);
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  pFVar5 = (this->DummyBackBuffer_RenderThread).Reference;
  if (pFVar5 != pFVar11) {
    (this->DummyBackBuffer_RenderThread).Reference = pFVar11;
    if (pFVar11 != (FD3D12Texture *)0x0) {
      (**(code **)(pFVar11->_padding_ + 8))(&pFVar11->_padding_,local_188);
    }
    if (pFVar5 != (FD3D12Texture *)0x0) {
      (**(code **)(pFVar5->_padding_ + 0x10))();
    }
  }
  return;
}

// SetBackBufferIndex_RHIThread @ 145ab85c0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12Viewport::SetBackBufferIndex_RHIThread(FD3D12Viewport *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ForElementType<FD3D12Viewport::FBackBufferData> FVar4;
  uint uVar5;
  
  uVar5 = param_1 % this->NumBackBuffers;
  this->CurrentBackBufferIndex_RHIThread = uVar5;
  uVar3 = 0;
  if ((int)uVar5 < (this->BackBuffers).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVar4 = (this->BackBuffers).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<FD3D12Viewport::FBackBufferData>)0x0) {
    FVar4 = (ForElementType<FD3D12Viewport::FBackBufferData>)&this->BackBuffers;
  }
  this->CurrentBackBuffer_RHIThread =
       (FBackBufferData *)((longlong)FVar4 + (longlong)(int)uVar5 * 0x10);
  return;
}

// SetBackBufferIndex_RenderThread @ 145ab8670

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12Viewport::SetBackBufferIndex_RenderThread(FD3D12Viewport *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ForElementType<FD3D12Viewport::FBackBufferData> FVar4;
  uint uVar5;
  
  uVar5 = param_1 % this->NumBackBuffers;
  this->ExpectedBackBufferIndex_RenderThread = uVar5;
  uVar3 = 0;
  if ((int)uVar5 < (this->BackBuffers).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVar4 = (this->BackBuffers).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<FD3D12Viewport::FBackBufferData>)0x0) {
    FVar4 = (ForElementType<FD3D12Viewport::FBackBufferData>)&this->BackBuffers;
  }
  this->CurrentBackBuffer_RenderThread =
       (FBackBufferData *)((longlong)FVar4 + (longlong)(int)uVar5 * 0x10);
  return;
}

// SetCustomPresent @ 145ab8720

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12Viewport::SetCustomPresent(FD3D12Viewport *this,FRHICustomPresent *param_1)

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

// ShutdownHDR @ 145ab9fc0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D12Viewport::ShutdownHDR(FD3D12Viewport *this)

{
  IDXGISwapChain4 *pIVar1;
  int iVar2;
  uint local_res8 [2];
  FString local_28;
  FString local_18;
  
  pIVar1 = (this->SwapChain4).Reference;
  if ((pIVar1 != (IDXGISwapChain4 *)0x0) &&
     (this->ColorSpace != DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709)) {
    local_res8[0] = 0;
    iVar2 = (**(code **)((longlong)*pIVar1 + 0x128))(pIVar1,0,local_res8);
    ::FString::FString(&local_28,L"RGB_FULL_G22_NONE_P709");
    if ((iVar2 < 0) || ((local_res8[0] & 1) == 0)) {
      if (1 < (byte)LogD3D12RHI._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
    }
    else {
      pIVar1 = (this->SwapChain4).Reference;
      iVar2 = (**(code **)((longlong)*pIVar1 + 0x130))(pIVar1,0);
      if (iVar2 < 0) {
        local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_18.Data.ArrayNum = 0;
        local_18.Data.ArrayMax = 0;
        D3D12RHI::VerifyD3D12Result
                  (iVar2,"SwapChain4->SetColorSpace1(NewColorSpace)",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Viewport.cpp"
                   ,0x20d,(ID3D12Device *)0x0,&local_18);
      }
      if (5 < (byte)LogD3D12RHI._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
      this->ColorSpace = DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// WaitForFrameEventCompletion @ 145abc6a0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12Viewport::WaitForFrameEventCompletion(FD3D12Viewport *this)

{
  int *piVar1;
  TArray<TRefCountPtr<FD3D12SyncPoint>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar4 = (this->FrameSyncPoints).ArrayNum;
  if (iVar4 != 0) {
    pTVar2 = &this->FrameSyncPoints;
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    pFVar3 = pFVar5 + (longlong)iVar4 * 8;
    while( true ) {
      if ((this->FrameSyncPoints).ArrayNum != iVar4) {
        `TCheckedPointerIterator<TRefCountPtr<FD3D12SyncPoint>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar5 == pFVar3) break;
      if (*(FD3D12SyncPoint **)pFVar5 != (FD3D12SyncPoint *)0x0) {
        FD3D12SyncPoint::Wait(*(FD3D12SyncPoint **)pFVar5);
      }
      pFVar5 = pFVar5 + 8;
    }
    piVar1 = &(this->FrameSyncPoints).ArrayMax;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    iVar4 = (this->FrameSyncPoints).ArrayNum;
    if (-1 < (this->FrameSyncPoints).ArrayMax) {
      DestructItems<TRefCountPtr<FD3D12SyncPoint>,int>
                ((TRefCountPtr<FD3D12SyncPoint> *)pFVar3,iVar4);
      (this->FrameSyncPoints).ArrayNum = 0;
      return;
    }
    DestructItems<TRefCountPtr<FD3D12SyncPoint>,int>((TRefCountPtr<FD3D12SyncPoint> *)pFVar3,iVar4);
    (this->FrameSyncPoints).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  return;
}

