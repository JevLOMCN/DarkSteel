// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 3

// FD3D11EventQuery @ 14596c420

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FD3D11EventQuery * __thiscall
FD3D11EventQuery::FD3D11EventQuery(FD3D11EventQuery *this,FD3D11DynamicRHI *param_1)

{
  ID3D11Device *pIVar1;
  int iVar2;
  undefined8 local_res8 [4];
  
  this->D3DRHI = param_1;
  (this->Query).Reference = (ID3D11Query *)0x0;
  local_res8[0] = 0;
  pIVar1 = (param_1->Direct3DDevice).Reference;
  iVar2 = (**(code **)((longlong)*pIVar1 + 0xc0))(pIVar1,local_res8);
  if (iVar2 < 0) {
    VerifyD3D11Result(iVar2,"D3DRHI->GetDevice()->CreateQuery(&QueryDesc,Query.GetInitReference())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Query.cpp"
                      ,0x1b1,(this->D3DRHI->Direct3DDevice).Reference);
  }
  return this;
}

// IssueEvent @ 145985cd0

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D11EventQuery::IssueEvent(FD3D11EventQuery *this)

{
  ID3D11Query *pIVar1;
  ID3D11DeviceContext *pIVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((!GRHICommandList.bLatchedBypass) ||
     ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) {
    if (GIsRunningRHIInSeparateThread_InternalUseOnly) {
      bVar3 = IsInRHIThread();
      if (bVar3) goto LAB_145985d71;
      if (GIsRunningRHIInSeparateThread_InternalUseOnly != false) goto LAB_145985d12;
    }
    bVar3 = IsInRenderingThread();
    if (!bVar3) {
LAB_145985d12:
      pIVar1 = (this->Query).Reference;
      if (pIVar1 != (ID3D11Query *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1);
      }
      puVar4 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x18,8);
      GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
      *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar4;
      GRHICommandList.CommandListImmediate._48_8_ = puVar4 + 1;
      *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
      *puVar4 = &TD3D11RHIGenericCommand<`FD3D11EventQuery::IssueEvent'::`7'::<lambda_1>,TEnableIf<0,void>_>
                 ::_vftable_;
      puVar4[2] = pIVar1;
      return;
    }
  }
LAB_145985d71:
  pIVar2 = (this->D3DRHI->Direct3DDeviceIMContext).Reference;
                    /* WARNING: Could not recover jumptable at 0x000145985d87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar2 + 0xe0))(pIVar2,(this->Query).Reference);
  return;
}

// WaitForCompletion @ 1459a11c0

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D11EventQuery::WaitForCompletion(FD3D11EventQuery *this)

{
  bool bVar1;
  int local_res8 [8];
  
  local_res8[0] = 0;
  do {
    bVar1 = FD3D11DynamicRHI::GetQueryData
                      (this->D3DRHI,(this->Query).Reference,local_res8,4,false,true,true);
    if (!bVar1) {
      return;
    }
  } while (local_res8[0] == 0);
  return;
}

