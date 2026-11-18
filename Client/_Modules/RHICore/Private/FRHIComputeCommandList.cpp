// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHICore
// Functions: 2

// SetShaderParameters @ 1446e4620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::SetShaderParameters
          (FRHIComputeCommandList *this,FRHIComputeShader *param_1,
          TArrayView<unsigned_char_const_,int> *param_2,
          TArrayView<FRHIShaderParameter_const_,int> *param_3,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_4,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  IRHIComputeContext *pIVar4;
  undefined8 *puVar5;
  void *_Dst;
  void *_Dst_00;
  void *_Dst_01;
  void *_Dst_02;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uStack_ec;
  undefined4 uStack_dc;
  undefined4 uStack_cc;
  undefined4 uStack_bc;
  FRHIShaderParameterResource *local_b8;
  undefined8 uStack_b0;
  FRHIShaderParameterResource *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  FRHIShaderParameterResource *local_78;
  undefined8 uStack_70;
  FRHIShaderParameterResource *local_68;
  undefined8 uStack_60;
  FRHIShaderParameter *local_58;
  undefined8 uStack_50;
  uchar *local_48;
  undefined8 uStack_40;
  
  if ((GRHICommandList.bLatchedBypass) && ((this->field_0x29b & 0x20) != 0)) {
    pIVar4 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)this);
    local_b8 = param_5->DataPtr;
    uStack_b0 = *(undefined8 *)&param_5->ArrayNum;
    local_98 = *(undefined4 *)&param_3->DataPtr;
    uStack_94 = *(undefined4 *)((longlong)&param_3->DataPtr + 4);
    iStack_90 = param_3->ArrayNum;
    uStack_8c = *(undefined4 *)&param_3->field_0xc;
    local_a8 = param_4->DataPtr;
    uStack_a0 = *(undefined8 *)&param_4->ArrayNum;
    local_88 = *(undefined4 *)&param_2->DataPtr;
    uStack_84 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
    iStack_80 = param_2->ArrayNum;
    uStack_7c = *(undefined4 *)&param_2->field_0xc;
    (**(code **)(pIVar4->_padding_ + 0xa0))(pIVar4,param_1,&local_88,&local_98,&local_a8,&local_b8);
    return;
  }
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)this,0x58,8);
  *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
  **(undefined8 **)&this->field_0x30 = puVar5;
  local_78 = param_5->DataPtr;
  uStack_70 = *(undefined8 *)&param_5->ArrayNum;
  uVar1 = *(undefined8 *)&param_5->ArrayNum;
  *(undefined8 **)&this->field_0x30 = puVar5 + 1;
  iVar8 = (int)uVar1;
  if (iVar8 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = FMemStackBase::Alloc((FMemStackBase *)this,(longlong)iVar8 << 4,8);
    memcpy(_Dst,param_5->DataPtr,(longlong)iVar8 << 4);
    if (iVar8 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  local_68 = param_4->DataPtr;
  uStack_60 = *(undefined8 *)&param_4->ArrayNum;
  iVar9 = (int)*(undefined8 *)&param_4->ArrayNum;
  if (iVar9 == 0) {
    _Dst_00 = (void *)0x0;
  }
  else {
    _Dst_00 = FMemStackBase::Alloc((FMemStackBase *)this,(longlong)iVar9 << 4,8);
    memcpy(_Dst_00,param_4->DataPtr,(longlong)iVar9 << 4);
    if (iVar9 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  local_58 = param_3->DataPtr;
  uStack_50 = *(undefined8 *)&param_3->ArrayNum;
  iVar6 = (int)*(undefined8 *)&param_3->ArrayNum;
  if (iVar6 == 0) {
    _Dst_01 = (void *)0x0;
  }
  else {
    _Dst_01 = FMemStackBase::Alloc((FMemStackBase *)this,(longlong)iVar6 << 3,2);
    memcpy(_Dst_01,param_3->DataPtr,(longlong)iVar6 << 3);
    if (iVar6 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  local_48 = param_2->DataPtr;
  uStack_40 = *(undefined8 *)&param_2->ArrayNum;
  iVar7 = (int)*(undefined8 *)&param_2->ArrayNum;
  if (iVar7 == 0) {
    _Dst_02 = (void *)0x0;
  }
  else {
    _Dst_02 = FMemStackBase::Alloc((FMemStackBase *)this,(longlong)iVar7,1);
    memcpy(_Dst_02,param_2->DataPtr,(longlong)iVar7);
    if (iVar7 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  *puVar5 = &___7__FRHICommandSetShaderParameters_VFRHIComputeShader____6B_;
  puVar5[5] = _Dst_01;
  puVar5[6] = CONCAT44(uStack_dc,iVar6);
  puVar5[1] = 0;
  puVar5[2] = param_1;
  puVar5[3] = _Dst_02;
  puVar5[4] = CONCAT44(uStack_ec,iVar7);
  puVar5[9] = _Dst;
  puVar5[10] = CONCAT44(uStack_bc,iVar8);
  puVar5[7] = _Dst_00;
  puVar5[8] = CONCAT44(uStack_cc,iVar9);
  return;
}

// SetShaderRootConstants @ 1446e4940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::SetShaderRootConstants
          (FRHIComputeCommandList *this,TIntVector4<unsigned_int> *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  IRHICommandContext *pIVar3;
  undefined8 *puVar4;
  
  if ((GRHICommandList.bLatchedBypass) && ((this->field_0x29b & 0x20) != 0)) {
    pIVar3 = FRHICommandListBase::GetContext((FRHICommandListBase *)this);
    UNRECOVERED_JUMPTABLE = *(code **)(pIVar3->_padding_ + 0x68);
                    /* WARNING: Could not recover jumptable at 0x0001446e497e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pIVar3,param_1,UNRECOVERED_JUMPTABLE);
    return;
  }
  puVar4 = FMemStackBase::Alloc((FMemStackBase *)this,0x20,8);
  *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
  **(undefined8 **)&this->field_0x30 = puVar4;
  *(undefined8 **)&this->field_0x30 = puVar4 + 1;
  uVar1 = *(undefined8 *)&param_1->field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  puVar4[1] = 0;
  *puVar4 = &___7FRHICommandSetShaderRootConstants__6B_;
  puVar4[2] = uVar1;
  puVar4[3] = uVar2;
  return;
}

