// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// ~FGamutCuspTable @ 145127860

void __thiscall UE::Color::ACES::FGamutCuspTable::~FGamutCuspTable(FGamutCuspTable *this)

{
  if (*(void **)&this->field_0x60 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x60);
  }
  FTextureWithSRV::~FTextureWithSRV((FTextureWithSRV *)this);
  return;
}

// GetPixelFormat @ 14514df30

EPixelFormat __thiscall UE::Color::ACES::FGamutCuspTable::GetPixelFormat(FGamutCuspTable *this)

{
  return PF_R32_FLOAT;
}

// GetSizeX @ 14514e560

uint __thiscall UE::Color::ACES::FGamutCuspTable::GetSizeX(FGamutCuspTable *this)

{
  return 3;
}

// GetSizeY @ 14514e590

uint __thiscall UE::Color::ACES::FGamutCuspTable::GetSizeY(FGamutCuspTable *this)

{
  return 0x16a;
}

// Update @ 145164440

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Color::ACES::FGamutCuspTable::Update
          (FGamutCuspTable *this,FRHICommandListImmediate *param_1,FColorSpace *param_2,
          float param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  Table3D *_Src;
  undefined1 auStackY_2268 [32];
  FUpdateTextureRegion2D local_2238;
  Table3D local_2220;
  uchar local_1128 [4352];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14516444e;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2268;
  _Src = MakeGamutTable(&local_2220,param_2,param_3);
  memcpy(local_1128,_Src,0x10f8);
  iVar3 = (**(code **)(*(longlong *)this + 0x38))(this);
  if (iVar3 != 0x16a) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSizeY() == GamutCuspTable.TotalSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\ACESUtils.cpp"
                       ,0x309,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar4 = (**(code **)(*(longlong *)this + 0x38))(this);
  local_2238.Width = (**(code **)(*(longlong *)this + 0x30))();
  local_2238.DestX = 0;
  local_2238.DestY = 0;
  local_2238.SrcX = 0;
  local_2238.SrcY = 0;
  local_2238.Height = uVar4;
  FRHICommandListBase::UpdateTexture2D
            ((FRHICommandListBase *)param_1,*(FRHITexture **)&this->field_0x20,0,&local_2238,0xc,
             local_1128);
  return;
}

