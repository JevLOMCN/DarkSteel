// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// InitRHI @ 1484df0e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FSharedSamplerState::InitRHI(FSharedSamplerState *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHISamplerState> *pTVar1;
  bool bVar2;
  int iVar3;
  FRHIResource *this_00;
  UDeviceProfileManager *this_01;
  UDeviceProfile *this_02;
  UTextureLODSettings *this_03;
  FTextureLODGroup *pFVar4;
  float fVar5;
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  TRefCountPtr<FRHISamplerState> local_58;
  ETextureSamplerFilter local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined1 local_38;
  
  fVar5 = UTexture2D::GetGlobalMipMapLODBias();
  this_01 = UDeviceProfileManager::Get(false);
  this_02 = UDeviceProfileManager::GetActiveProfile(this_01);
  this_03 = UDeviceProfile::GetTextureLODSettings(this_02);
  pFVar4 = UTextureLODSettings::GetTextureLODGroup(this_03,TEXTUREGROUP_World);
  bVar2 = this->bWrap;
  iVar3 = pFVar4->MaxAniso;
  local_50 = UTextureLODSettings::GetSamplerFilter(this_03,0);
  local_4f = bVar2 == false;
  local_48 = 0;
  local_44 = 0x7f7fffff;
  local_3c = 0;
  local_38 = 0;
  local_4e = local_4f;
  local_4d = local_4f;
  local_4c = fVar5;
  local_40 = iVar3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                    ::__l2::LLMScope_Name1147,L"RHIMisc/CreateSamplerState");
    _Init_thread_footer(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
             ::__l2::LLMScope_Name1147,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
              ::__l2::LLMScope_Name1147,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x48))(GDynamicRHI,&local_58,&local_50);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  pTVar1 = &this->SamplerStateRHI;
  if (pTVar1 != &local_58) {
    this_00 = (FRHIResource *)pTVar1->Reference;
    pTVar1->Reference = local_58.Reference;
    local_58.Reference = (FRHISamplerState *)0x0;
    if (this_00 == (FRHIResource *)0x0) {
      return;
    }
    FRHIResource::Release(this_00);
  }
  if ((FRHIResource *)local_58.Reference != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_58.Reference);
  }
  return;
}

// ReleaseRHI @ 1484f0630

void __thiscall FSharedSamplerState::ReleaseRHI(FSharedSamplerState *this)

{
  FRHIResource *this_00;
  
  this_00 = (FRHIResource *)(this->SamplerStateRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    (this->SamplerStateRHI).Reference = (FRHISamplerState *)0x0;
    FRHIResource::Release(this_00);
    return;
  }
  return;
}

