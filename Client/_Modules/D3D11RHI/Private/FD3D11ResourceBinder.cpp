// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 12

// SetSRV @ 145999530

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FD3D11ResourceBinder<3>::SetSRV
          (FD3D11ResourceBinder<3> *this,FRHIShaderResourceView *param_1,uchar param_2)

{
  ID3D11ShaderResourceView *pIVar1;
  ID3D11DeviceContext *pIVar2;
  code *pcVar3;
  bool bVar4;
  FD3D11ViewableResource *pFVar5;
  uint uVar6;
  FD3D11ViewableResource **ppFVar7;
  FD3D11DynamicRHI *pFVar8;
  ID3D11ShaderResourceView *local_res8;
  
  if (param_1 == (FRHIShaderResourceView *)0x0) {
    pFVar8 = this->RHI;
    local_res8 = (ID3D11ShaderResourceView *)0x0;
    ppFVar7 = pFVar8->CurrentResourcesBoundAsSRVs[3] + param_2;
  }
  else {
    pFVar5 = FD3D11ShaderResourceView::GetBaseResource((FD3D11ShaderResourceView *)param_1);
    pFVar8 = this->RHI;
    local_res8 = *(ID3D11ShaderResourceView **)&param_1[1].field_0x18;
    if (pFVar5 == (FD3D11ViewableResource *)0x0) {
      if (local_res8 != (ID3D11ShaderResourceView *)0x0) goto LAB_14599958b;
LAB_1459995c0:
      if (local_res8 != (ID3D11ShaderResourceView *)0x0) {
        return;
      }
    }
    else {
      if (local_res8 == (ID3D11ShaderResourceView *)0x0) {
LAB_14599958b:
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Resource && SRV) || (!Resource && !SRV)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11RHI.cpp"
                           ,0xb5,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (pFVar5 == (FD3D11ViewableResource *)0x0) goto LAB_1459995c0;
      }
      if (local_res8 == (ID3D11ShaderResourceView *)0x0) {
        return;
      }
    }
    ppFVar7 = pFVar8->CurrentResourcesBoundAsSRVs[3] + param_2;
    if (pFVar5 != (FD3D11ViewableResource *)0x0) {
      uVar6 = (uint)param_2;
      if ((int)(uint)param_2 < pFVar8->MaxBoundShaderResourcesIndex[3]) {
        uVar6 = pFVar8->MaxBoundShaderResourcesIndex[3];
      }
      pFVar8->MaxBoundShaderResourcesIndex[3] = uVar6;
      *ppFVar7 = pFVar5;
      goto LAB_14599963a;
    }
  }
  if (*ppFVar7 != (FD3D11ViewableResource *)0x0) {
    *ppFVar7 = (FD3D11ViewableResource *)0x0;
    uVar6 = pFVar8->MaxBoundShaderResourcesIndex[3];
    if (uVar6 == param_2) {
      do {
        uVar6 = uVar6 - 1;
        pFVar8->MaxBoundShaderResourcesIndex[3] = uVar6;
        if ((int)uVar6 < 0) break;
      } while (pFVar8->CurrentResourcesBoundAsSRVs[3][(int)uVar6] == (FD3D11ViewableResource *)0x0);
    }
  }
LAB_14599963a:
  uVar6 = (uint)param_2;
  if ((0x7f < uVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ResourceIndex < (sizeof(*RtlpNumberOf(CurrentShaderResourceViews[ShaderFrequency])))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11StateCachePrivate.h"
                         ,0xc2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pFVar8->StateCache).CurrentShaderResourceViews[3][uVar6] != local_res8) {
    if (local_res8 != (ID3D11ShaderResourceView *)0x0) {
      (**(code **)((longlong)*local_res8 + 8))(local_res8);
    }
    pIVar1 = (pFVar8->StateCache).CurrentShaderResourceViews[3][uVar6];
    if (pIVar1 != (ID3D11ShaderResourceView *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    (pFVar8->StateCache).CurrentShaderResourceViews[3][uVar6] = local_res8;
    pIVar2 = (pFVar8->StateCache).Direct3DDeviceIMContext;
    (**(code **)((longlong)*pIVar2 + 0x40))(pIVar2,uVar6,1,&local_res8);
  }
  return;
}

// SetSRV @ 1459996f0

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FD3D11ResourceBinder<4>::SetSRV
          (FD3D11ResourceBinder<4> *this,FRHIShaderResourceView *param_1,uchar param_2)

{
  ID3D11ShaderResourceView *pIVar1;
  ID3D11DeviceContext *pIVar2;
  code *pcVar3;
  bool bVar4;
  FD3D11ViewableResource *pFVar5;
  uint uVar6;
  FD3D11ViewableResource **ppFVar7;
  FD3D11DynamicRHI *pFVar8;
  ID3D11ShaderResourceView *local_res8;
  
  if (param_1 == (FRHIShaderResourceView *)0x0) {
    pFVar8 = this->RHI;
    local_res8 = (ID3D11ShaderResourceView *)0x0;
    ppFVar7 = pFVar8->CurrentResourcesBoundAsSRVs[4] + param_2;
  }
  else {
    pFVar5 = FD3D11ShaderResourceView::GetBaseResource((FD3D11ShaderResourceView *)param_1);
    pFVar8 = this->RHI;
    local_res8 = *(ID3D11ShaderResourceView **)&param_1[1].field_0x18;
    if (pFVar5 == (FD3D11ViewableResource *)0x0) {
      if (local_res8 != (ID3D11ShaderResourceView *)0x0) goto LAB_14599974b;
LAB_145999780:
      if (local_res8 != (ID3D11ShaderResourceView *)0x0) {
        return;
      }
    }
    else {
      if (local_res8 == (ID3D11ShaderResourceView *)0x0) {
LAB_14599974b:
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Resource && SRV) || (!Resource && !SRV)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11RHI.cpp"
                           ,0xb5,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (pFVar5 == (FD3D11ViewableResource *)0x0) goto LAB_145999780;
      }
      if (local_res8 == (ID3D11ShaderResourceView *)0x0) {
        return;
      }
    }
    ppFVar7 = pFVar8->CurrentResourcesBoundAsSRVs[4] + param_2;
    if (pFVar5 != (FD3D11ViewableResource *)0x0) {
      uVar6 = (uint)param_2;
      if ((int)(uint)param_2 < pFVar8->MaxBoundShaderResourcesIndex[4]) {
        uVar6 = pFVar8->MaxBoundShaderResourcesIndex[4];
      }
      pFVar8->MaxBoundShaderResourcesIndex[4] = uVar6;
      *ppFVar7 = pFVar5;
      goto LAB_1459997fa;
    }
  }
  if (*ppFVar7 != (FD3D11ViewableResource *)0x0) {
    *ppFVar7 = (FD3D11ViewableResource *)0x0;
    uVar6 = pFVar8->MaxBoundShaderResourcesIndex[4];
    if (uVar6 == param_2) {
      do {
        uVar6 = uVar6 - 1;
        pFVar8->MaxBoundShaderResourcesIndex[4] = uVar6;
        if ((int)uVar6 < 0) break;
      } while (pFVar8->CurrentResourcesBoundAsSRVs[4][(int)uVar6] == (FD3D11ViewableResource *)0x0);
    }
  }
LAB_1459997fa:
  uVar6 = (uint)param_2;
  if ((0x7f < uVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ResourceIndex < (sizeof(*RtlpNumberOf(CurrentShaderResourceViews[ShaderFrequency])))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11StateCachePrivate.h"
                         ,0xc2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pFVar8->StateCache).CurrentShaderResourceViews[4][uVar6] != local_res8) {
    if (local_res8 != (ID3D11ShaderResourceView *)0x0) {
      (**(code **)((longlong)*local_res8 + 8))(local_res8);
    }
    pIVar1 = (pFVar8->StateCache).CurrentShaderResourceViews[4][uVar6];
    if (pIVar1 != (ID3D11ShaderResourceView *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    (pFVar8->StateCache).CurrentShaderResourceViews[4][uVar6] = local_res8;
    pIVar2 = (pFVar8->StateCache).Direct3DDeviceIMContext;
    (**(code **)((longlong)*pIVar2 + 0xf8))(pIVar2,uVar6,1,&local_res8);
  }
  return;
}

// SetSRV @ 1459998c0

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FD3D11ResourceBinder<5>::SetSRV
          (FD3D11ResourceBinder<5> *this,FRHIShaderResourceView *param_1,uchar param_2)

{
  ID3D11ShaderResourceView *pIVar1;
  ID3D11DeviceContext *pIVar2;
  code *pcVar3;
  bool bVar4;
  FD3D11ViewableResource *pFVar5;
  uint uVar6;
  FD3D11ViewableResource **ppFVar7;
  int *piVar8;
  FD3D11DynamicRHI *pFVar9;
  ID3D11ShaderResourceView *local_res8;
  
  if (param_1 == (FRHIShaderResourceView *)0x0) {
    pFVar9 = this->RHI;
    local_res8 = (ID3D11ShaderResourceView *)0x0;
    ppFVar7 = pFVar9->CurrentResourcesBoundAsSRVs[5] + param_2;
    piVar8 = pFVar9->MaxBoundShaderResourcesIndex + 5;
  }
  else {
    pFVar5 = FD3D11ShaderResourceView::GetBaseResource((FD3D11ShaderResourceView *)param_1);
    pFVar9 = this->RHI;
    local_res8 = *(ID3D11ShaderResourceView **)&param_1[1].field_0x18;
    if (pFVar5 == (FD3D11ViewableResource *)0x0) {
      if (local_res8 != (ID3D11ShaderResourceView *)0x0) goto LAB_14599991b;
LAB_145999950:
      if (local_res8 != (ID3D11ShaderResourceView *)0x0) {
        return;
      }
    }
    else {
      if (local_res8 == (ID3D11ShaderResourceView *)0x0) {
LAB_14599991b:
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Resource && SRV) || (!Resource && !SRV)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11RHI.cpp"
                           ,0xb5,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (pFVar5 == (FD3D11ViewableResource *)0x0) goto LAB_145999950;
      }
      if (local_res8 == (ID3D11ShaderResourceView *)0x0) {
        return;
      }
    }
    ppFVar7 = pFVar9->CurrentResourcesBoundAsSRVs[5] + param_2;
    piVar8 = pFVar9->MaxBoundShaderResourcesIndex + 5;
    if (pFVar5 != (FD3D11ViewableResource *)0x0) {
      uVar6 = (uint)param_2;
      if ((int)(uint)param_2 < *piVar8) {
        uVar6 = *piVar8;
      }
      *piVar8 = uVar6;
      *ppFVar7 = pFVar5;
      goto LAB_1459999c6;
    }
  }
  if (*ppFVar7 != (FD3D11ViewableResource *)0x0) {
    *ppFVar7 = (FD3D11ViewableResource *)0x0;
    uVar6 = *piVar8;
    if (uVar6 == param_2) {
      do {
        uVar6 = uVar6 - 1;
        *piVar8 = uVar6;
        if ((int)uVar6 < 0) break;
      } while (pFVar9->CurrentResourcesBoundAsSRVs[5][(int)uVar6] == (FD3D11ViewableResource *)0x0);
    }
  }
LAB_1459999c6:
  uVar6 = (uint)param_2;
  if ((0x7f < uVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ResourceIndex < (sizeof(*RtlpNumberOf(CurrentShaderResourceViews[ShaderFrequency])))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11StateCachePrivate.h"
                         ,0xc2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pFVar9->StateCache).CurrentShaderResourceViews[5][uVar6] != local_res8) {
    if (local_res8 != (ID3D11ShaderResourceView *)0x0) {
      (**(code **)((longlong)*local_res8 + 8))(local_res8);
    }
    pIVar1 = (pFVar9->StateCache).CurrentShaderResourceViews[5][uVar6];
    if (pIVar1 != (ID3D11ShaderResourceView *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    (pFVar9->StateCache).CurrentShaderResourceViews[5][uVar6] = local_res8;
    pIVar2 = (pFVar9->StateCache).Direct3DDeviceIMContext;
    (**(code **)((longlong)*pIVar2 + 0x218))(pIVar2,uVar6,1,&local_res8);
  }
  return;
}

// SetSRV @ 145999a80

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FD3D11ResourceBinder<0>::SetSRV
          (FD3D11ResourceBinder<0> *this,FRHIShaderResourceView *param_1,uchar param_2)

{
  ID3D11ShaderResourceView *pIVar1;
  ID3D11DeviceContext *pIVar2;
  code *pcVar3;
  bool bVar4;
  FD3D11ViewableResource *pFVar5;
  uint uVar6;
  FD3D11ViewableResource **ppFVar7;
  FD3D11DynamicRHI *pFVar8;
  ID3D11ShaderResourceView *local_res8;
  
  if (param_1 == (FRHIShaderResourceView *)0x0) {
    pFVar8 = this->RHI;
    local_res8 = (ID3D11ShaderResourceView *)0x0;
    ppFVar7 = pFVar8->CurrentResourcesBoundAsSRVs[0] + param_2;
  }
  else {
    pFVar5 = FD3D11ShaderResourceView::GetBaseResource((FD3D11ShaderResourceView *)param_1);
    pFVar8 = this->RHI;
    local_res8 = *(ID3D11ShaderResourceView **)&param_1[1].field_0x18;
    if (pFVar5 == (FD3D11ViewableResource *)0x0) {
      if (local_res8 != (ID3D11ShaderResourceView *)0x0) goto LAB_145999adb;
LAB_145999b10:
      if (local_res8 != (ID3D11ShaderResourceView *)0x0) {
        return;
      }
    }
    else {
      if (local_res8 == (ID3D11ShaderResourceView *)0x0) {
LAB_145999adb:
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Resource && SRV) || (!Resource && !SRV)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11RHI.cpp"
                           ,0xb5,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (pFVar5 == (FD3D11ViewableResource *)0x0) goto LAB_145999b10;
      }
      if (local_res8 == (ID3D11ShaderResourceView *)0x0) {
        return;
      }
    }
    ppFVar7 = pFVar8->CurrentResourcesBoundAsSRVs[0] + param_2;
    if (pFVar5 != (FD3D11ViewableResource *)0x0) {
      uVar6 = (uint)param_2;
      if ((int)(uint)param_2 < pFVar8->MaxBoundShaderResourcesIndex[0]) {
        uVar6 = pFVar8->MaxBoundShaderResourcesIndex[0];
      }
      pFVar8->MaxBoundShaderResourcesIndex[0] = uVar6;
      *ppFVar7 = pFVar5;
      goto LAB_145999b8a;
    }
  }
  if (*ppFVar7 != (FD3D11ViewableResource *)0x0) {
    *ppFVar7 = (FD3D11ViewableResource *)0x0;
    uVar6 = pFVar8->MaxBoundShaderResourcesIndex[0];
    if (uVar6 == param_2) {
      do {
        uVar6 = uVar6 - 1;
        pFVar8->MaxBoundShaderResourcesIndex[0] = uVar6;
        if ((int)uVar6 < 0) break;
      } while (pFVar8->CurrentResourcesBoundAsSRVs[0][(int)uVar6] == (FD3D11ViewableResource *)0x0);
    }
  }
LAB_145999b8a:
  uVar6 = (uint)param_2;
  if ((0x7f < uVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ResourceIndex < (sizeof(*RtlpNumberOf(CurrentShaderResourceViews[ShaderFrequency])))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11StateCachePrivate.h"
                         ,0xc2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pFVar8->StateCache).CurrentShaderResourceViews[0][uVar6] != local_res8) {
    if (local_res8 != (ID3D11ShaderResourceView *)0x0) {
      (**(code **)((longlong)*local_res8 + 8))(local_res8);
    }
    pIVar1 = (pFVar8->StateCache).CurrentShaderResourceViews[0][uVar6];
    if (pIVar1 != (ID3D11ShaderResourceView *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    (pFVar8->StateCache).CurrentShaderResourceViews[0][uVar6] = local_res8;
    pIVar2 = (pFVar8->StateCache).Direct3DDeviceIMContext;
    (**(code **)((longlong)*pIVar2 + 200))(pIVar2,uVar6,1,&local_res8);
  }
  return;
}

// SetSampler @ 145999c40

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FD3D11ResourceBinder<3>::SetSampler
          (FD3D11ResourceBinder<3> *this,FRHISamplerState *param_1,uchar param_2)

{
  FD3D11DynamicRHI *pFVar1;
  ID3D11DeviceContext *pIVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  ID3D11SamplerState *local_res8;
  
  pFVar1 = this->RHI;
  local_res8 = *(ID3D11SamplerState **)(param_1 + 1);
  uVar4 = (ulonglong)param_2;
  if ((0xf < param_2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SamplerIndex < (sizeof(*RtlpNumberOf(CurrentSamplerStates[ShaderFrequency])))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11StateCachePrivate.h"
                         ,0xee,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pFVar1->StateCache).CurrentSamplerStates[3][uVar4] != local_res8) {
    (pFVar1->StateCache).CurrentSamplerStates[3][uVar4] = local_res8;
    pIVar2 = (pFVar1->StateCache).Direct3DDeviceIMContext;
    (**(code **)((longlong)*pIVar2 + 0x50))(pIVar2,uVar4,1,&local_res8);
  }
  return;
}

// SetSampler @ 145999cd0

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FD3D11ResourceBinder<4>::SetSampler
          (FD3D11ResourceBinder<4> *this,FRHISamplerState *param_1,uchar param_2)

{
  FD3D11DynamicRHI *pFVar1;
  ID3D11DeviceContext *pIVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  ID3D11SamplerState *local_res8;
  
  pFVar1 = this->RHI;
  local_res8 = *(ID3D11SamplerState **)(param_1 + 1);
  uVar4 = (ulonglong)param_2;
  if ((0xf < param_2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SamplerIndex < (sizeof(*RtlpNumberOf(CurrentSamplerStates[ShaderFrequency])))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11StateCachePrivate.h"
                         ,0xee,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pFVar1->StateCache).CurrentSamplerStates[4][uVar4] != local_res8) {
    (pFVar1->StateCache).CurrentSamplerStates[4][uVar4] = local_res8;
    pIVar2 = (pFVar1->StateCache).Direct3DDeviceIMContext;
    (**(code **)((longlong)*pIVar2 + 0x100))(pIVar2,uVar4,1,&local_res8);
  }
  return;
}

// SetSampler @ 145999d60

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FD3D11ResourceBinder<5>::SetSampler
          (FD3D11ResourceBinder<5> *this,FRHISamplerState *param_1,uchar param_2)

{
  FD3D11DynamicRHI *pFVar1;
  ID3D11DeviceContext *pIVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  ID3D11SamplerState *local_res8;
  
  pFVar1 = this->RHI;
  local_res8 = *(ID3D11SamplerState **)(param_1 + 1);
  uVar4 = (ulonglong)param_2;
  if ((0xf < param_2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SamplerIndex < (sizeof(*RtlpNumberOf(CurrentSamplerStates[ShaderFrequency])))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11StateCachePrivate.h"
                         ,0xee,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pFVar1->StateCache).CurrentSamplerStates[5][uVar4] != local_res8) {
    (pFVar1->StateCache).CurrentSamplerStates[5][uVar4] = local_res8;
    pIVar2 = (pFVar1->StateCache).Direct3DDeviceIMContext;
    (**(code **)((longlong)*pIVar2 + 0x230))(pIVar2,uVar4,1,&local_res8);
  }
  return;
}

// SetSampler @ 145999df0

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FD3D11ResourceBinder<0>::SetSampler
          (FD3D11ResourceBinder<0> *this,FRHISamplerState *param_1,uchar param_2)

{
  FD3D11DynamicRHI *pFVar1;
  ID3D11DeviceContext *pIVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  ID3D11SamplerState *local_res8;
  
  pFVar1 = this->RHI;
  local_res8 = *(ID3D11SamplerState **)(param_1 + 1);
  uVar4 = (ulonglong)param_2;
  if ((0xf < param_2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SamplerIndex < (sizeof(*RtlpNumberOf(CurrentSamplerStates[ShaderFrequency])))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11StateCachePrivate.h"
                         ,0xee,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pFVar1->StateCache).CurrentSamplerStates[0][uVar4] != local_res8) {
    (pFVar1->StateCache).CurrentSamplerStates[0][uVar4] = local_res8;
    pIVar2 = (pFVar1->StateCache).Direct3DDeviceIMContext;
    (**(code **)((longlong)*pIVar2 + 0xd0))(pIVar2,uVar4,1,&local_res8);
  }
  return;
}

// SetTexture @ 145999e80

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FD3D11ResourceBinder<3>::SetTexture
          (FD3D11ResourceBinder<3> *this,FRHITexture *param_1,uchar param_2)

{
  FD3D11DynamicRHI *pFVar1;
  ID3D11ShaderResourceView *pIVar2;
  ID3D11DeviceContext *pIVar3;
  code *pcVar4;
  bool bVar5;
  FD3D11View *pFVar6;
  uint uVar7;
  FD3D11ViewableResource FVar8;
  FD3D11View *pFVar9;
  FD3D11View *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  FD3D11View *local_res8;
  
  pFVar10 = (FD3D11View *)0x0;
  uVar12 = (ulonglong)param_2;
  FVar8.LinkedViews = pFVar10;
  pFVar6 = pFVar10;
  if (param_1 != (FRHITexture *)0x0) {
    pFVar6 = (FD3D11View *)(**(code **)(param_1->_padding_ + 0x48))(param_1);
    if ((pFVar6 == (FD3D11View *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11RHIPrivate.h"
                           ,0x193,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pFVar6 != (FD3D11View *)0x0) {
                    /* WARNING: Load size is inaccurate */
      FVar8.LinkedViews = pFVar6[0xe];
    }
  }
  pFVar1 = this->RHI;
  pFVar9 = pFVar6 + 0xd;
  if (pFVar6 == (FD3D11View *)0x0) {
    pFVar9 = pFVar10;
  }
  if (pFVar9 == (FD3D11View *)0x0) {
    if (FVar8.LinkedViews == (FD3D11View *)0x0) goto LAB_145999f59;
  }
  else if (FVar8.LinkedViews != (FD3D11View *)0x0) goto LAB_145999f59;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Resource && SRV) || (!Resource && !SRV)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11RHI.cpp"
                     ,0xb5,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (pFVar9 == (FD3D11View *)0x0) {
    if (FVar8.LinkedViews != (FD3D11View *)0x0) {
      return;
    }
  }
  else if (FVar8.LinkedViews == (FD3D11View *)0x0) {
    return;
  }
LAB_145999f59:
  uVar11 = (uint)param_2;
  if (pFVar9 == (FD3D11View *)0x0) {
    if (pFVar1->CurrentResourcesBoundAsSRVs[3][uVar12] != (FD3D11ViewableResource *)0x0) {
      pFVar1->CurrentResourcesBoundAsSRVs[3][uVar12] = (FD3D11ViewableResource *)0x0;
      uVar7 = pFVar1->MaxBoundShaderResourcesIndex[3];
      if (uVar7 == uVar11) {
        do {
          uVar7 = uVar7 - 1;
          pFVar1->MaxBoundShaderResourcesIndex[3] = uVar7;
          if ((int)uVar7 < 0) break;
        } while (pFVar1->CurrentResourcesBoundAsSRVs[3][(int)uVar7] == (FD3D11ViewableResource *)0x0
                );
      }
    }
  }
  else {
    uVar7 = (uint)param_2;
    if ((int)uVar11 < pFVar1->MaxBoundShaderResourcesIndex[3]) {
      uVar7 = pFVar1->MaxBoundShaderResourcesIndex[3];
    }
    pFVar1->MaxBoundShaderResourcesIndex[3] = uVar7;
    pFVar1->CurrentResourcesBoundAsSRVs[3][uVar12] = (FD3D11ViewableResource *)pFVar9;
  }
  local_res8 = FVar8.LinkedViews;
  if ((0x7f < uVar11) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ResourceIndex < (sizeof(*RtlpNumberOf(CurrentShaderResourceViews[ShaderFrequency])))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11StateCachePrivate.h"
                         ,0xc2,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((FD3D11View *)(pFVar1->StateCache).CurrentShaderResourceViews[3][uVar12] != local_res8) {
    if (local_res8 != (FD3D11View *)0x0) {
      (**(code **)(*(longlong *)local_res8 + 8))(local_res8);
    }
    pIVar2 = (pFVar1->StateCache).CurrentShaderResourceViews[3][uVar12];
    if (pIVar2 != (ID3D11ShaderResourceView *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    (pFVar1->StateCache).CurrentShaderResourceViews[3][uVar12] =
         (ID3D11ShaderResourceView *)local_res8;
    pIVar3 = (pFVar1->StateCache).Direct3DDeviceIMContext;
    (**(code **)((longlong)*pIVar3 + 0x40))(pIVar3,uVar12,1,&local_res8);
  }
  return;
}

// SetTexture @ 14599a070

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FD3D11ResourceBinder<4>::SetTexture
          (FD3D11ResourceBinder<4> *this,FRHITexture *param_1,uchar param_2)

{
  FD3D11DynamicRHI *pFVar1;
  ID3D11ShaderResourceView *pIVar2;
  ID3D11DeviceContext *pIVar3;
  code *pcVar4;
  bool bVar5;
  FD3D11View *pFVar6;
  uint uVar7;
  FD3D11ViewableResource FVar8;
  FD3D11View *pFVar9;
  FD3D11View *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  FD3D11View *local_res8;
  
  pFVar10 = (FD3D11View *)0x0;
  uVar12 = (ulonglong)param_2;
  FVar8.LinkedViews = pFVar10;
  pFVar6 = pFVar10;
  if (param_1 != (FRHITexture *)0x0) {
    pFVar6 = (FD3D11View *)(**(code **)(param_1->_padding_ + 0x48))(param_1);
    if ((pFVar6 == (FD3D11View *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11RHIPrivate.h"
                           ,0x193,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pFVar6 != (FD3D11View *)0x0) {
                    /* WARNING: Load size is inaccurate */
      FVar8.LinkedViews = pFVar6[0xe];
    }
  }
  pFVar1 = this->RHI;
  pFVar9 = pFVar6 + 0xd;
  if (pFVar6 == (FD3D11View *)0x0) {
    pFVar9 = pFVar10;
  }
  if (pFVar9 == (FD3D11View *)0x0) {
    if (FVar8.LinkedViews == (FD3D11View *)0x0) goto LAB_14599a149;
  }
  else if (FVar8.LinkedViews != (FD3D11View *)0x0) goto LAB_14599a149;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Resource && SRV) || (!Resource && !SRV)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11RHI.cpp"
                     ,0xb5,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (pFVar9 == (FD3D11View *)0x0) {
    if (FVar8.LinkedViews != (FD3D11View *)0x0) {
      return;
    }
  }
  else if (FVar8.LinkedViews == (FD3D11View *)0x0) {
    return;
  }
LAB_14599a149:
  uVar11 = (uint)param_2;
  if (pFVar9 == (FD3D11View *)0x0) {
    if (pFVar1->CurrentResourcesBoundAsSRVs[4][uVar12] != (FD3D11ViewableResource *)0x0) {
      pFVar1->CurrentResourcesBoundAsSRVs[4][uVar12] = (FD3D11ViewableResource *)0x0;
      uVar7 = pFVar1->MaxBoundShaderResourcesIndex[4];
      if (uVar7 == uVar11) {
        do {
          uVar7 = uVar7 - 1;
          pFVar1->MaxBoundShaderResourcesIndex[4] = uVar7;
          if ((int)uVar7 < 0) break;
        } while (pFVar1->CurrentResourcesBoundAsSRVs[4][(int)uVar7] == (FD3D11ViewableResource *)0x0
                );
      }
    }
  }
  else {
    uVar7 = (uint)param_2;
    if ((int)uVar11 < pFVar1->MaxBoundShaderResourcesIndex[4]) {
      uVar7 = pFVar1->MaxBoundShaderResourcesIndex[4];
    }
    pFVar1->MaxBoundShaderResourcesIndex[4] = uVar7;
    pFVar1->CurrentResourcesBoundAsSRVs[4][uVar12] = (FD3D11ViewableResource *)pFVar9;
  }
  local_res8 = FVar8.LinkedViews;
  if ((0x7f < uVar11) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ResourceIndex < (sizeof(*RtlpNumberOf(CurrentShaderResourceViews[ShaderFrequency])))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11StateCachePrivate.h"
                         ,0xc2,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((FD3D11View *)(pFVar1->StateCache).CurrentShaderResourceViews[4][uVar12] != local_res8) {
    if (local_res8 != (FD3D11View *)0x0) {
      (**(code **)(*(longlong *)local_res8 + 8))(local_res8);
    }
    pIVar2 = (pFVar1->StateCache).CurrentShaderResourceViews[4][uVar12];
    if (pIVar2 != (ID3D11ShaderResourceView *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    (pFVar1->StateCache).CurrentShaderResourceViews[4][uVar12] =
         (ID3D11ShaderResourceView *)local_res8;
    pIVar3 = (pFVar1->StateCache).Direct3DDeviceIMContext;
    (**(code **)((longlong)*pIVar3 + 0xf8))(pIVar3,uVar12,1,&local_res8);
  }
  return;
}

// SetTexture @ 14599a260

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FD3D11ResourceBinder<5>::SetTexture
          (FD3D11ResourceBinder<5> *this,FRHITexture *param_1,uchar param_2)

{
  FD3D11DynamicRHI *pFVar1;
  ID3D11ShaderResourceView *pIVar2;
  ID3D11DeviceContext *pIVar3;
  code *pcVar4;
  bool bVar5;
  FD3D11View *pFVar6;
  uint uVar7;
  FD3D11ViewableResource FVar8;
  FD3D11View *pFVar9;
  FD3D11View *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  FD3D11View *local_res8;
  
  pFVar10 = (FD3D11View *)0x0;
  uVar12 = (ulonglong)param_2;
  FVar8.LinkedViews = pFVar10;
  pFVar6 = pFVar10;
  if (param_1 != (FRHITexture *)0x0) {
    pFVar6 = (FD3D11View *)(**(code **)(param_1->_padding_ + 0x48))(param_1);
    if ((pFVar6 == (FD3D11View *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11RHIPrivate.h"
                           ,0x193,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pFVar6 != (FD3D11View *)0x0) {
                    /* WARNING: Load size is inaccurate */
      FVar8.LinkedViews = pFVar6[0xe];
    }
  }
  pFVar1 = this->RHI;
  pFVar9 = pFVar6 + 0xd;
  if (pFVar6 == (FD3D11View *)0x0) {
    pFVar9 = pFVar10;
  }
  if (pFVar9 == (FD3D11View *)0x0) {
    if (FVar8.LinkedViews == (FD3D11View *)0x0) goto LAB_14599a339;
  }
  else if (FVar8.LinkedViews != (FD3D11View *)0x0) goto LAB_14599a339;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Resource && SRV) || (!Resource && !SRV)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11RHI.cpp"
                     ,0xb5,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (pFVar9 == (FD3D11View *)0x0) {
    if (FVar8.LinkedViews != (FD3D11View *)0x0) {
      return;
    }
  }
  else if (FVar8.LinkedViews == (FD3D11View *)0x0) {
    return;
  }
LAB_14599a339:
  uVar11 = (uint)param_2;
  if (pFVar9 == (FD3D11View *)0x0) {
    if (pFVar1->CurrentResourcesBoundAsSRVs[5][uVar12] != (FD3D11ViewableResource *)0x0) {
      pFVar1->CurrentResourcesBoundAsSRVs[5][uVar12] = (FD3D11ViewableResource *)0x0;
      uVar7 = pFVar1->MaxBoundShaderResourcesIndex[5];
      if (uVar7 == uVar11) {
        do {
          uVar7 = uVar7 - 1;
          pFVar1->MaxBoundShaderResourcesIndex[5] = uVar7;
          if ((int)uVar7 < 0) break;
        } while (pFVar1->CurrentResourcesBoundAsSRVs[5][(int)uVar7] == (FD3D11ViewableResource *)0x0
                );
      }
    }
  }
  else {
    uVar7 = (uint)param_2;
    if ((int)uVar11 < pFVar1->MaxBoundShaderResourcesIndex[5]) {
      uVar7 = pFVar1->MaxBoundShaderResourcesIndex[5];
    }
    pFVar1->MaxBoundShaderResourcesIndex[5] = uVar7;
    pFVar1->CurrentResourcesBoundAsSRVs[5][uVar12] = (FD3D11ViewableResource *)pFVar9;
  }
  local_res8 = FVar8.LinkedViews;
  if ((0x7f < uVar11) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ResourceIndex < (sizeof(*RtlpNumberOf(CurrentShaderResourceViews[ShaderFrequency])))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11StateCachePrivate.h"
                         ,0xc2,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((FD3D11View *)(pFVar1->StateCache).CurrentShaderResourceViews[5][uVar12] != local_res8) {
    if (local_res8 != (FD3D11View *)0x0) {
      (**(code **)(*(longlong *)local_res8 + 8))(local_res8);
    }
    pIVar2 = (pFVar1->StateCache).CurrentShaderResourceViews[5][uVar12];
    if (pIVar2 != (ID3D11ShaderResourceView *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    (pFVar1->StateCache).CurrentShaderResourceViews[5][uVar12] =
         (ID3D11ShaderResourceView *)local_res8;
    pIVar3 = (pFVar1->StateCache).Direct3DDeviceIMContext;
    (**(code **)((longlong)*pIVar3 + 0x218))(pIVar3,uVar12,1,&local_res8);
  }
  return;
}

// SetTexture @ 14599a450

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FD3D11ResourceBinder<0>::SetTexture
          (FD3D11ResourceBinder<0> *this,FRHITexture *param_1,uchar param_2)

{
  FD3D11DynamicRHI *pFVar1;
  ID3D11ShaderResourceView *pIVar2;
  ID3D11DeviceContext *pIVar3;
  code *pcVar4;
  bool bVar5;
  FD3D11View *pFVar6;
  uint uVar7;
  FD3D11ViewableResource FVar8;
  FD3D11View *pFVar9;
  FD3D11View *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  FD3D11View *local_res8;
  
  pFVar10 = (FD3D11View *)0x0;
  uVar12 = (ulonglong)param_2;
  FVar8.LinkedViews = pFVar10;
  pFVar6 = pFVar10;
  if (param_1 != (FRHITexture *)0x0) {
    pFVar6 = (FD3D11View *)(**(code **)(param_1->_padding_ + 0x48))(param_1);
    if ((pFVar6 == (FD3D11View *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11RHIPrivate.h"
                           ,0x193,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pFVar6 != (FD3D11View *)0x0) {
                    /* WARNING: Load size is inaccurate */
      FVar8.LinkedViews = pFVar6[0xe];
    }
  }
  pFVar1 = this->RHI;
  pFVar9 = pFVar6 + 0xd;
  if (pFVar6 == (FD3D11View *)0x0) {
    pFVar9 = pFVar10;
  }
  if (pFVar9 == (FD3D11View *)0x0) {
    if (FVar8.LinkedViews == (FD3D11View *)0x0) goto LAB_14599a529;
  }
  else if (FVar8.LinkedViews != (FD3D11View *)0x0) goto LAB_14599a529;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Resource && SRV) || (!Resource && !SRV)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11RHI.cpp"
                     ,0xb5,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (pFVar9 == (FD3D11View *)0x0) {
    if (FVar8.LinkedViews != (FD3D11View *)0x0) {
      return;
    }
  }
  else if (FVar8.LinkedViews == (FD3D11View *)0x0) {
    return;
  }
LAB_14599a529:
  uVar11 = (uint)param_2;
  if (pFVar9 == (FD3D11View *)0x0) {
    if (pFVar1->CurrentResourcesBoundAsSRVs[0][uVar12] != (FD3D11ViewableResource *)0x0) {
      pFVar1->CurrentResourcesBoundAsSRVs[0][uVar12] = (FD3D11ViewableResource *)0x0;
      uVar7 = pFVar1->MaxBoundShaderResourcesIndex[0];
      if (uVar7 == uVar11) {
        do {
          uVar7 = uVar7 - 1;
          pFVar1->MaxBoundShaderResourcesIndex[0] = uVar7;
          if ((int)uVar7 < 0) break;
        } while (pFVar1->CurrentResourcesBoundAsSRVs[0][(int)uVar7] == (FD3D11ViewableResource *)0x0
                );
      }
    }
  }
  else {
    uVar7 = (uint)param_2;
    if ((int)uVar11 < pFVar1->MaxBoundShaderResourcesIndex[0]) {
      uVar7 = pFVar1->MaxBoundShaderResourcesIndex[0];
    }
    pFVar1->MaxBoundShaderResourcesIndex[0] = uVar7;
    pFVar1->CurrentResourcesBoundAsSRVs[0][uVar12] = (FD3D11ViewableResource *)pFVar9;
  }
  local_res8 = FVar8.LinkedViews;
  if ((0x7f < uVar11) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ResourceIndex < (sizeof(*RtlpNumberOf(CurrentShaderResourceViews[ShaderFrequency])))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11StateCachePrivate.h"
                         ,0xc2,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((FD3D11View *)(pFVar1->StateCache).CurrentShaderResourceViews[0][uVar12] != local_res8) {
    if (local_res8 != (FD3D11View *)0x0) {
      (**(code **)(*(longlong *)local_res8 + 8))(local_res8);
    }
    pIVar2 = (pFVar1->StateCache).CurrentShaderResourceViews[0][uVar12];
    if (pIVar2 != (ID3D11ShaderResourceView *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    (pFVar1->StateCache).CurrentShaderResourceViews[0][uVar12] =
         (ID3D11ShaderResourceView *)local_res8;
    pIVar3 = (pFVar1->StateCache).Direct3DDeviceIMContext;
    (**(code **)((longlong)*pIVar3 + 200))(pIVar3,uVar12,1,&local_res8);
  }
  return;
}

