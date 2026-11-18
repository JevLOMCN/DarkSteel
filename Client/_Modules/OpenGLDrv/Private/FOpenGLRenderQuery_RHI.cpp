// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 1

// GetResult @ 145c044d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOpenGLRenderQuery_RHI::GetResult(FOpenGLRenderQuery_RHI *this,bool param_1,ulong64 *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  int iVar5;
  
  if (this->field_0x43 == this->field_0x41) {
    if (*(longlong *)&this->field_0x18 == 0) goto LAB_145c04642;
    iVar5 = 0x155;
  }
  else {
    if (!param_1) {
      *param_2 = 0;
      return false;
    }
    bVar2 = IsInRenderingThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (((GRHICommandList.bLatchedBypass == false) ||
        ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
       (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
      puVar4 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x20,8);
      GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
      *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar4;
      GRHICommandList.CommandListImmediate._48_8_ = puVar4 + 1;
      puVar4[1] = 0;
      *puVar4 = &TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLRenderQuery_RHI::GetResult'::`2'::<lambda_1>_>
                 ::_vftable_;
      puVar4[3] = L"TRHILambdaCommand";
      puVar4[2] = this;
    }
    else {
      FOpenGLRenderQuery::CacheResult((FOpenGLRenderQuery *)&this->field_0x18,true);
    }
    FRHICommandListImmediate::ImmediateFlush
              (&GRHICommandList.CommandListImmediate,FlushRHIThread,None);
    if (this->field_0x43 != this->field_0x41) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TOPCounter == LastCachedBOPCounter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLQuery.cpp"
                         ,0x173,
                         L"Attempting to get data from an RHI render query which was never issued.")
      ;
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (*(longlong *)&this->field_0x18 == 0) goto LAB_145c04642;
    iVar5 = 0x174;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLinked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLQuery.cpp"
                     ,iVar5,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
LAB_145c04642:
  *param_2 = *(ulong64 *)&this->field_0x28;
  return true;
}

