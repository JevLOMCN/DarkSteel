// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// InitializeComponentHeader @ 14d620250

void __thiscall
UE::MovieScene::TComponentTypeDebugInfo<FCameraFramingZone>::InitializeComponentHeader
          (TComponentTypeDebugInfo<FCameraFramingZone> *this,void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined ***)param_1 = &___7__TComponentHeader_UFCameraFramingZone___MovieScene_UE__6B_;
  *(undefined2 *)((longlong)param_1 + 0x36) = 0xffff;
  return;
}

// InitializeDebugComponentData @ 14d620670

void __thiscall
UE::MovieScene::TComponentTypeDebugInfo<FCameraFramingZone>::InitializeDebugComponentData
          (TComponentTypeDebugInfo<FCameraFramingZone> *this,FComponentHeader *param_1,uchar param_2
          )

{
  code *pcVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  ulong64 uVar6;
  ulonglong *puVar7;
  IComponentDebuggingTypedPtr *pIVar8;
  ulonglong uVar9;
  void **ppvVar10;
  IComponentDebuggingTypedPtr *pIVar11;
  int iVar12;
  
  uVar9 = CONCAT71(0,param_2);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar9;
  uVar5 = SUB168(ZEXT816(0x10) * auVar2,0);
  if (SUB168(ZEXT816(0x10) * auVar2,8) != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  uVar6 = uVar5 + 8;
  if (0xfffffffffffffff7 < uVar5) {
    uVar6 = 0xffffffffffffffff;
  }
  puVar7 = operator_new__(uVar6);
  iVar12 = 0;
  if (puVar7 == (ulonglong *)0x0) {
    pIVar11 = (IComponentDebuggingTypedPtr *)0x0;
  }
  else {
    *puVar7 = uVar9;
    pIVar11 = (IComponentDebuggingTypedPtr *)(puVar7 + 1);
    pIVar8 = pIVar11;
    if (param_2 != '\0') {
      do {
        pIVar8->_padding_ =
             (longlong)&___7__TComponentDebuggingTypedPtr_UFCameraFramingZone___MovieScene_UE__6B_;
        uVar9 = uVar9 - 1;
        pIVar8 = pIVar8 + 1;
      } while (uVar9 != 0);
    }
  }
  if (param_2 != '\0') {
    ppvVar10 = &pIVar11->Ptr;
    do {
      if (((param_1->Sizeof == '\0') || (param_1->Components == (uchar *)0x0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsTag() && Components != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                             ,0x221,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar4 = (uint)param_1->Sizeof * iVar12;
      iVar12 = iVar12 + 1;
      *ppvVar10 = param_1->Components + iVar4;
      ppvVar10 = ppvVar10 + 2;
    } while (iVar12 < (int)(uint)param_2);
  }
  param_1->DebugComponents = pIVar11;
  return;
}

