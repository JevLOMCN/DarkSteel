// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 7

// FTextureResource @ 145cd1a70

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FTextureResource * __thiscall
RHIValidation::FTextureResource::FTextureResource
          (FTextureResource *this,FRHITextureCreateDesc *param_1)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  memset(this,0,0xb8);
  this->_padding_ = (longlong)&___7FTextureResource_RHIValidation__6B_;
  (this->PRIVATE_TrackerResource).WholeResourceState.States.field_0xc = 1;
  *(undefined8 *)&(this->PRIVATE_TrackerResource).WholeResourceState.States =
       *(undefined8 *)&(this->PRIVATE_TrackerResource).WholeResourceState.States.field_0x8;
  *(undefined4 *)&(this->PRIVATE_TrackerResource).WholeResourceState.States.field_0x38 = 0;
  *(undefined2 *)&(this->PRIVATE_TrackerResource).WholeResourceState.States.field_0x3c = 0;
  *(undefined8 *)&(this->PRIVATE_TrackerResource).WholeResourceState.States.field_0x40 = 0;
  *(undefined8 *)&(this->PRIVATE_TrackerResource).WholeResourceState.States.field_0x48 = 0;
  bVar3 = false;
  *(undefined4 *)&(this->PRIVATE_TrackerResource).WholeResourceState.States.field_0x30 = 0;
  (this->PRIVATE_TrackerResource).WholeResourceState.States.field_0x34 = 1;
  *(undefined8 *)&(this->PRIVATE_TrackerResource).WholeResourceState.States.field_0x28 =
       *(undefined8 *)&(this->PRIVATE_TrackerResource).WholeResourceState.States.field_0x30;
  (this->PRIVATE_TrackerResource).SubresourceStates.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PRIVATE_TrackerResource).SubresourceStates.ArrayNum = 0;
  (this->PRIVATE_TrackerResource).SubresourceStates.ArrayMax = 0;
  (this->PRIVATE_TrackerResource).NumOpRefs.Counter = 0;
  (this->PRIVATE_TrackerResource).LoggingMode = None;
  this->_padding_ = (longlong)&___7FTextureResource_RHIValidation__6B_;
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 2);
  cVar2 = *(char *)((longlong)&param_1->_padding_ + 3);
  iVar5 = 1;
  if ((cVar1 == '\x03') || (cVar1 == '\x04')) {
    bVar3 = true;
  }
  iVar4 = 1;
  if (bVar3) {
    iVar4 = 6;
  }
  if (&this->PRIVATE_TrackerResource != (FResource *)0x0) {
    if ((cVar2 == '\v') || (cVar2 == ',')) {
      iVar5 = 2;
    }
    FResource::InitBarrierTracking
              (&this->PRIVATE_TrackerResource,(uint)(byte)param_1->_padding_,
               iVar4 * (uint)*(ushort *)((longlong)&param_1->_padding_ + 6),iVar5,
               param_1->InitialState,param_1->DebugName);
  }
  return this;
}

// CheckValidationLayout @ 145cd74c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
RHIValidation::FTextureResource::CheckValidationLayout
          (FTextureResource *this,int param_1,int param_2,EPixelFormat param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)(**(code **)(this->_padding_ + 8))();
  if (piVar4 == (int *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                       ,0x90,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*piVar4 != param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resource->NumMips == InNumMips",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                       ,0x92,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (piVar4[1] != param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resource->NumArraySlices == InNumArraySlices",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                       ,0x93,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_3 == PF_DepthStencil) || (iVar3 = 1, param_3 == PF_X24_G8)) {
    iVar3 = 2;
  }
  if (piVar4[2] != iVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resource->NumPlanes == GetNumPlanesFromFormat(PixelFormat)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                       ,0x94,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GetNumPlanesFromFormat @ 145cdce80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
RHIValidation::FTextureResource::GetNumPlanesFromFormat(FTextureResource *this,EPixelFormat param_1)

{
  int iVar1;
  
  if ((param_1 == PF_DepthStencil) || (iVar1 = 1, param_1 == PF_X24_G8)) {
    iVar1 = 2;
  }
  return iVar1;
}

// GetTransitionIdentity @ 145cdea90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FResourceIdentity * __thiscall
RHIValidation::FTextureResource::GetTransitionIdentity
          (FTextureResource *this,FResourceIdentity *__return_storage_ptr__,
          FRHITransitionInfo *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  FResource *pFVar4;
  FResourceIdentity *pFVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  pFVar4 = (FResource *)(**(code **)(this->_padding_ + 8))();
  uVar1 = (ushort)param_1->_padding_;
  __return_storage_ptr__->Resource = pFVar4;
  uVar6 = pFVar4->NumMips;
  uVar8 = 0;
  if (uVar1 == 0xffff) {
    uVar7 = 0;
  }
  else {
    if (uVar6 <= uVar1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Info.MipIndex < uint32(Resource->NumMips)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                         ,0xc5,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FResourceIdentity *)(*pcVar2)();
        return pFVar5;
      }
    }
    uVar7 = (uint)(ushort)param_1->_padding_;
    uVar6 = 1;
  }
  (__return_storage_ptr__->SubresourceRange).MipIndex = uVar7;
  (__return_storage_ptr__->SubresourceRange).NumMips = uVar6;
  uVar6 = pFVar4->NumArraySlices;
  uVar7 = (uint)*(ushort *)((longlong)&param_1->_padding_ + 2);
  if (uVar7 == 0xffff) {
    uVar7 = 0;
  }
  else {
    if (uVar6 <= uVar7) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Info.ArraySlice < uint32(Resource->NumArraySlices)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                         ,0xd1,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FResourceIdentity *)(*pcVar2)();
        return pFVar5;
      }
    }
    uVar7 = (uint)*(ushort *)((longlong)&param_1->_padding_ + 2);
    uVar6 = 1;
  }
  (__return_storage_ptr__->SubresourceRange).ArraySlice = uVar7;
  (__return_storage_ptr__->SubresourceRange).NumArraySlices = uVar6;
  uVar6 = pFVar4->NumPlanes;
  uVar7 = (uint)*(ushort *)((longlong)&param_1->_padding_ + 4);
  if (uVar7 != 0xffff) {
    if (uVar6 <= uVar7) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Info.PlaneSlice < uint32(Resource->NumPlanes)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                         ,0xdd,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FResourceIdentity *)(*pcVar2)();
        return pFVar5;
      }
    }
    uVar8 = (uint)*(ushort *)((longlong)&param_1->_padding_ + 4);
    uVar6 = 1;
  }
  (__return_storage_ptr__->SubresourceRange).PlaneIndex = uVar8;
  (__return_storage_ptr__->SubresourceRange).NumPlanes = uVar6;
  return __return_storage_ptr__;
}

// GetViewIdentity @ 145cdee50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FResourceIdentity * __thiscall
RHIValidation::FTextureResource::GetViewIdentity
          (FTextureResource *this,FResourceIdentity *__return_storage_ptr__,uint param_1,
          uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  FResource *pFVar1;
  
  pFVar1 = (FResource *)(**(code **)(this->_padding_ + 8))();
  if (param_2 == 0) {
    param_2 = pFVar1->NumMips;
  }
  if (param_4 == 0) {
    param_4 = pFVar1->NumArraySlices;
  }
  if (param_6 == 0) {
    param_6 = pFVar1->NumPlanes;
  }
  __return_storage_ptr__->Resource = pFVar1;
  (__return_storage_ptr__->SubresourceRange).ArraySlice = param_3;
  (__return_storage_ptr__->SubresourceRange).PlaneIndex = param_5;
  (__return_storage_ptr__->SubresourceRange).MipIndex = param_1;
  (__return_storage_ptr__->SubresourceRange).NumMips = param_2;
  (__return_storage_ptr__->SubresourceRange).NumArraySlices = param_4;
  (__return_storage_ptr__->SubresourceRange).NumPlanes = param_6;
  return __return_storage_ptr__;
}

// InitBarrierTracking @ 145cdf4a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
RHIValidation::FTextureResource::InitBarrierTracking
          (FTextureResource *this,FRHITextureCreateDesc *param_1)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  ERHIAccess EVar4;
  wchar_t *pwVar5;
  bool bVar6;
  longlong lVar7;
  FResource *this_00;
  int iVar8;
  int iVar9;
  
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 2);
  pwVar5 = param_1->DebugName;
  EVar4 = param_1->InitialState;
  cVar2 = *(char *)((longlong)&param_1->_padding_ + 3);
  iVar8 = 1;
  if ((cVar1 == '\x03') || (cVar1 == '\x04')) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  lVar7 = param_1->_padding_;
  uVar3 = *(ushort *)((longlong)&param_1->_padding_ + 6);
  iVar9 = 1;
  if (bVar6) {
    iVar9 = 6;
  }
  this_00 = (FResource *)(**(code **)(this->_padding_ + 8))();
  if (this_00 != (FResource *)0x0) {
    if ((cVar2 == '\v') || (cVar2 == ',')) {
      iVar8 = 2;
    }
    FResource::InitBarrierTracking(this_00,(uint)(byte)lVar7,iVar9 * (uint)uVar3,iVar8,EVar4,pwVar5)
    ;
  }
  return;
}

// InitBarrierTracking @ 145cdf550

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
RHIValidation::FTextureResource::InitBarrierTracking
          (FTextureResource *this,int param_1,int param_2,EPixelFormat param_3,
          ETextureCreateFlags param_4,ERHIAccess param_5,wchar_t *param_6)

{
  FResource *this_00;
  int iVar1;
  
  this_00 = (FResource *)(**(code **)(this->_padding_ + 8))();
  if (this_00 != (FResource *)0x0) {
    if ((param_3 == PF_DepthStencil) || (iVar1 = 1, param_3 == PF_X24_G8)) {
      iVar1 = 2;
    }
    FResource::InitBarrierTracking(this_00,param_1,param_2,iVar1,param_5,param_6);
  }
  return;
}

