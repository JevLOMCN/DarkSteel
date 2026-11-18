// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 4

// CalculateRenderTargetSize @ 14cf83c80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FXRRenderTargetManager::CalculateRenderTargetSize
          (FXRRenderTargetManager *this,FViewport *param_1,uint *param_2,uint *param_3)

{
  IXRTrackingSystem *pIVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  int local_18;
  int local_14;
  
  bVar3 = IsInGameThread();
  if (((!bVar3) && (bVar3 = IsInRenderingThread(), !bVar3)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\XRRenderTargetManager.cpp"
                         ,0xe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((GEngine != (UEngine *)0x0) &&
      (pIVar1 = (GEngine->XRSystem).Object, pIVar1 != (IXRTrackingSystem *)0x0)) &&
     (plVar5 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x118))(), plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0xd0))(plVar5,&local_18);
    fVar6 = (float)(**(code **)(*plVar5 + 0xc0))(plVar5);
    fVar7 = __real_bf000000 - (float)local_14 * (fVar6 + fVar6);
    *param_2 = -((int)ROUND(__real_bf000000 - (float)local_18 * (fVar6 + fVar6)) >> 1);
    uVar4 = -((int)ROUND(fVar7) >> 1);
    *param_3 = uVar4;
    if (((*param_2 == 0) || (uVar4 == 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InOutSizeX != 0 && InOutSizeY != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\XRRenderTargetManager.cpp"
                           ,0x19,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// NeedReAllocateViewportRenderTarget @ 14cf93560

bool __thiscall
FXRRenderTargetManager::NeedReAllocateViewportRenderTarget
          (FXRRenderTargetManager *this,FViewport *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  int local_res8 [2];
  int local_res18 [2];
  int local_res20;
  int local_res24;
  int local_18;
  int local_14;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\XRRenderTargetManager.cpp"
                       ,0x20,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  cVar4 = (**(code **)*this)(this);
  if (cVar4 != '\0') {
    (**(code **)(param_1->_padding_ + 0x28))(param_1,&local_res20);
    (**(code **)(param_1->_padding_ + 0x1e0))(param_1,&local_18);
    local_res8[0] = local_res20;
    local_res18[0] = local_res24;
    (**(code **)((longlong)*this + 0x10))(this,param_1,local_res8,local_res18);
    if ((local_res8[0] != local_18) || (local_res18[0] != local_14)) {
      return true;
    }
  }
  return false;
}

// UpdateViewport @ 14cf9e230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FXRRenderTargetManager::UpdateViewport
          (FXRRenderTargetManager *this,bool param_1,FViewport *param_2,SViewport *param_3)

{
  FRHIViewport *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\XRRenderTargetManager.cpp"
                       ,0x3d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_2->ViewportRHI).Reference;
  if (pFVar1 != (FRHIViewport *)0x0) {
    if (param_3 != (SViewport *)0x0) {
      (**(code **)((longlong)*this + 0x98))(this,param_1,param_2,param_3);
    }
    cVar4 = (**(code **)*this)(this);
    if (cVar4 != '\0') {
      (**(code **)((longlong)*this + 0xa0))(this,param_1,param_2,pFVar1);
    }
  }
  return;
}

// UpdateViewportRHIBridge @ 14cf9e2f0

void __thiscall
FXRRenderTargetManager::UpdateViewportRHIBridge
          (FXRRenderTargetManager *this,bool param_1,FViewport *param_2,FRHIViewport *param_3)

{
  longlong *plVar1;
  undefined7 in_register_00000011;
  
  plVar1 = (longlong *)
           (**(code **)((longlong)*this + 0xa8))(this,CONCAT71(in_register_00000011,param_1));
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2,param_3);
    (**(code **)(*(longlong *)param_3 + 0x30))(param_3,plVar1);
  }
  return;
}

