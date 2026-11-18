// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 2

// ~FRHICommandCopyResource @ 14ea973f0

void __thiscall FRHICommandCopyResource::~FRHICommandCopyResource(FRHICommandCopyResource *this)

{
  FRHITexture *this_00;
  ID3D11Texture2D *pIVar1;
  
  this_00 = (this->SampleDestinationTexture).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  pIVar1 = (this->SampleTexture).RawPointer;
  if (pIVar1 != (ID3D11Texture2D *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return;
}

// Execute @ 14eaaa140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandCopyResource::Execute(FRHICommandCopyResource *this,FRHICommandListBase *param_1)

{
  ID3D11Texture2D *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  FLLMScope local_res18 [2];
  longlong *local_res20;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  FMemScope local_30;
  
  FLLMScope::FLLMScope(local_res18,MediaStreaming,false,None,Default,true);
  FMemScope::FMemScope(&local_30,MediaStreaming,true);
  iVar4 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
  if ((iVar4 != 2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GDynamicRHI->GetInterfaceType() == ERHIInterfaceType::D3D11",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Public\\ID3D11DynamicRHI.h"
                         ,0x30,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  plVar5 = (longlong *)(**(code **)(GDynamicRHI->_padding_ + 0x30))();
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x4c8))(plVar5);
  iVar4 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
  if ((iVar4 != 2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GDynamicRHI->GetInterfaceType() == ERHIInterfaceType::D3D11",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Public\\ID3D11DynamicRHI.h"
                         ,0x30,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  plVar6 = (longlong *)(**(code **)(GDynamicRHI->_padding_ + 0x30))();
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x4d0))(plVar6);
  if (plVar6 == (longlong *)0x0) goto LAB_14eaaa43b;
  iVar4 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
  if ((iVar4 != 2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GDynamicRHI->GetInterfaceType() == ERHIInterfaceType::D3D11",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Public\\ID3D11DynamicRHI.h"
                         ,0x30,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  plVar7 = (longlong *)(**(code **)(GDynamicRHI->_padding_ + 0x30))();
  lVar8 = (**(code **)(*plVar7 + 0x508))(plVar7,(this->SampleDestinationTexture).Reference);
  if (lVar8 == 0) goto LAB_14eaaa43b;
  local_40 = (longlong *)0x0;
  if (((this->SampleTexture).RawPointer == (ID3D11Texture2D *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar1 = (this->SampleTexture).RawPointer;
  (**(code **)*pIVar1)(pIVar1,&_GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,&local_40);
  if (local_40 != (longlong *)0x0) {
    local_38 = 0;
    iVar4 = (**(code **)(*local_40 + 0x40))(local_40,&local_38);
    if ((iVar4 == 0) && (local_38 != 0)) {
      local_48 = (longlong *)0x0;
      (**(code **)(*plVar5 + 0xe0))
                (plVar5,local_38,&_GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,&local_48);
      if (local_48 != (longlong *)0x0) {
        local_res20 = (longlong *)0x0;
        (**(code **)*local_48)(local_48,&_GUID_9d8e1289_d7b3_465f_8126_250e349af85d,&local_res20);
        if (local_res20 != (longlong *)0x0) {
          iVar4 = (**(code **)(*local_res20 + 0x40))(local_res20,1,0);
          if (iVar4 == 0) {
            (**(code **)(*plVar6 + 0x178))(plVar6,lVar8,local_48);
          }
          else {
            if ((local_res20 == (longlong *)0x0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("RawPointer != 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                   ,0x9f,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar4 = (**(code **)(*local_res20 + 0x40))(local_res20,2,0xffffffff);
            if (iVar4 != 0) goto LAB_14eaaa40f;
          }
          if ((local_res20 == (longlong *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("RawPointer != 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                 ,0x9f,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          (**(code **)(*local_res20 + 0x48))(local_res20,2);
        }
LAB_14eaaa40f:
        if (local_res20 != (longlong *)0x0) {
          (**(code **)(*local_res20 + 0x10))();
        }
      }
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
LAB_14eaaa43b:
  FMemScope::~FMemScope(&local_30);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

