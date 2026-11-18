// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineSettings
// Functions: 1

// SetValue @ 14ddb5e60

void __cdecl UE::MoviePipeline::SetValue(IConsoleVariable *param_1,float param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ForAnyElementType FVar7;
  FString local_e8;
  FString local_d8;
  uint local_c8;
  undefined1 local_c4;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  uint local_a8;
  undefined1 local_a4;
  undefined8 local_a0;
  undefined1 local_98;
  undefined4 local_94;
  undefined4 local_90;
  uint local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_68 [12];
  undefined1 local_5c [12];
  undefined1 local_50 [40];
  
  if ((param_1 == (IConsoleVariable *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCVar",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineSettings\\Private\\MoviePipelineConsoleVariableSetting.cpp"
                         ,0x1d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  cVar4 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1);
  if (cVar4 == '\0') {
    cVar4 = (**(code **)(*(longlong *)param_1 + 0x40))(param_1);
    if (cVar4 != '\0') {
      local_98 = 0;
      local_a4 = 1;
      local_90 = 0x2000000;
      local_94 = 0xf000000;
      local_a0 = 0;
      local_a8 = (**(code **)(*(longlong *)param_1 + 0x18))();
      lVar1 = *(longlong *)param_1;
      local_a8 = local_a8 & 0xff000000;
      uVar5 = (**(code **)(lVar1 + 0xa8))(param_1,local_5c,&local_a8);
      puVar6 = &u_0;
      if (param_2 != 0.0) {
        puVar6 = &u_1;
      }
      (**(code **)(lVar1 + 0xb0))(param_1,puVar6,uVar5);
      return;
    }
    local_80 = 0;
    local_78 = 0;
    local_84 = 1;
    local_70 = 0x2000000;
    local_74 = 0xf000000;
    local_88 = (**(code **)(*(longlong *)param_1 + 0x18))(param_1);
    local_88 = local_88 & 0xff000000;
    ::FString::PrintfImpl(&local_d8,L"%g");
    lVar1 = *(longlong *)param_1;
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar7.Data = local_d8.Data.AllocatorInstance.Data;
    }
    uVar5 = (**(code **)(lVar1 + 0xa8))(param_1,local_50,&local_88);
    (**(code **)(lVar1 + 0xb0))(param_1,FVar7.Data,uVar5);
    local_e8.Data.AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
  }
  else {
    local_c4 = 1;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0x2000000;
    local_b4 = 0xf000000;
    local_c8 = (**(code **)(*(longlong *)param_1 + 0x18))();
    local_c8 = local_c8 & 0xff000000;
    ::FString::PrintfImpl(&local_e8,L"%d");
    lVar1 = *(longlong *)param_1;
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_e8.Data.ArrayNum != 0) {
      FVar7.Data = local_e8.Data.AllocatorInstance.Data;
    }
    uVar5 = (**(code **)(lVar1 + 0xa8))(param_1,local_68,&local_c8);
    (**(code **)(lVar1 + 0xb0))(param_1,FVar7.Data,uVar5);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  return;
}

