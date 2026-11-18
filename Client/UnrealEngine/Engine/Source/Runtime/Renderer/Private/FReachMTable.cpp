// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// ~FReachMTable @ 145127890

void __thiscall UE::Color::ACES::FReachMTable::~FReachMTable(FReachMTable *this)

{
  if (*(void **)&this->field_0x60 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x60);
  }
  FTextureWithSRV::~FTextureWithSRV((FTextureWithSRV *)this);
  return;
}

// GetPixelFormat @ 14514df40

EPixelFormat __thiscall UE::Color::ACES::FReachMTable::GetPixelFormat(FReachMTable *this)

{
  return PF_R32_FLOAT;
}

// GetSizeX @ 14514e570

uint __thiscall UE::Color::ACES::FReachMTable::GetSizeX(FReachMTable *this)

{
  return 0x168;
}

// Update @ 145164540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Color::ACES::FReachMTable::Update
          (FReachMTable *this,FRHICommandListImmediate *param_1,FColorSpace *param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  Table1D *_Src;
  undefined1 auStackY_bc8 [32];
  FUpdateTextureRegion2D local_b98;
  Table1D local_b80;
  uchar local_5d8 [1456];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_bc8;
  _Src = MakeReachMTable(&local_b80,param_3);
  memcpy(local_5d8,_Src,0x5a8);
  iVar3 = (**(code **)(*(longlong *)this + 0x30))(this);
  if (iVar3 != 0x168) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSizeX() == ReachTableData.Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\ACESUtils.cpp"
                       ,0x2e9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = (**(code **)(*(longlong *)this + 0x30))(this);
  uVar4 = (**(code **)(*(longlong *)this + 0x38))(this);
  local_b98.Width = (**(code **)(*(longlong *)this + 0x30))();
  local_b98.DestX = 0;
  local_b98.DestY = 0;
  local_b98.SrcX = 0;
  local_b98.SrcY = 0;
  local_b98.Height = uVar4;
  FRHICommandListBase::UpdateTexture2D
            ((FRHICommandListBase *)param_1,*(FRHITexture **)&this->field_0x20,0,&local_b98,
             iVar3 << 2,local_5d8);
  return;
}

