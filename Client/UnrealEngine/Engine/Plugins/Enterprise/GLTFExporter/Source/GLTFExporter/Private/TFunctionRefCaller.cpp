// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// Call @ 14e5e3760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGLTFBufferUtilities::ReadRHIBuffer'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  void *_Src;
  
  uVar2 = *(undefined4 *)((longlong)param_1 + 8);
  uVar3 = *(undefined8 *)param_1;
  if ((((!GRHICommandList.bLatchedBypass) || ((param_2->field_0x29b & 0x20) == 0)) &&
      (param_2->field_0x64 != '\0')) &&
     ((!GRHICommandList.bLatchedBypass || ((param_2->field_0x29b & 0x20) == 0)))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsTopOfPipe() || Bypass()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2ed,
                       L"Buffers may only be locked while recording RHI command lists, not during RHI command list execution."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar1 = param_2->field_0x6a;
  if ((bVar1 != 0) && ((bVar1 & bVar1 - 1) != 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2a5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = param_2->field_0x6a == '\0';
  if (bVar5) {
    FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_2,Graphics);
  }
  _Src = (void *)(**(code **)(GDynamicRHI->_padding_ + 0x148))(GDynamicRHI,param_2,uVar3,0,uVar2,0);
  if (bVar5) {
    FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_2,None);
  }
  memcpy(*(void **)((longlong)param_1 + 0x10),_Src,(ulonglong)*(uint *)((longlong)param_1 + 8));
  uVar3 = *(undefined8 *)param_1;
  if ((((GRHICommandList.bLatchedBypass == false) || ((param_2->field_0x29b & 0x20) == 0)) &&
      (param_2->field_0x64 != '\0')) &&
     ((GRHICommandList.bLatchedBypass == false || ((param_2->field_0x29b & 0x20) == 0)))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsTopOfPipe() || Bypass()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2f5,
                       L"Buffers may only be unlocked while recording RHI command lists, not during RHI command list execution."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar1 = param_2->field_0x6a;
  if ((bVar1 != 0) && ((bVar1 & bVar1 - 1) != 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2a5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_2->field_0x6a == '\0') {
    FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_2,Graphics);
    (**(code **)(GDynamicRHI->_padding_ + 0x158))(GDynamicRHI,param_2,uVar3);
    FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_2,None);
  }
  else {
    (**(code **)(GDynamicRHI->_padding_ + 0x158))(GDynamicRHI,param_2,uVar3);
  }
  return;
}

