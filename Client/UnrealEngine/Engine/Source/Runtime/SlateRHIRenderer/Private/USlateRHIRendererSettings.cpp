// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 15

// StaticClass @ 145fd5d60

UClass * __cdecl USlateRHIRendererSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateRHIRendererSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SlateRHIRenderer",L"SlateRHIRendererSettings",
               &Z_Registration_Info_UClass_USlateRHIRendererSettings.InnerSingleton,
               StaticRegisterNativesUSlateRHIRendererSettings,0x88,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<USlateRHIRendererSettings>,
               InternalVTableHelperCtorCaller<USlateRHIRendererSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateRHIRendererSettings.InnerSingleton;
}

// USlateRHIRendererSettings @ 145fe8a70

USlateRHIRendererSettings * __thiscall
USlateRHIRendererSettings::USlateRHIRendererSettings
          (USlateRHIRendererSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7USlateRHIRendererSettings__6B_;
  *(undefined8 *)&this->SlatePostSettings = 0;
  *(undefined8 *)&(this->SlatePostSettings).field_0x8 = 0;
  *(undefined8 *)&(this->SlatePostSettings).field_0x20 = 0;
  *(undefined4 *)&(this->SlatePostSettings).field_0x28 = 0;
  *(undefined4 *)&(this->SlatePostSettings).field_0x2c = 0x80;
  *(undefined4 *)&(this->SlatePostSettings).field_0x34 = 0;
  *(undefined4 *)&(this->SlatePostSettings).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SlatePostSettings).field_0x40 = 0;
  *(undefined4 *)&(this->SlatePostSettings).field_0x48 = 0;
  return this;
}

// USlateRHIRendererSettings @ 145fe8ad0

USlateRHIRendererSettings * __thiscall
USlateRHIRendererSettings::USlateRHIRendererSettings(USlateRHIRendererSettings *this)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  FObjectInitializer *pFVar6;
  USlateRHIRendererSettings *pUVar7;
  undefined1 *puVar8;
  int iVar9;
  char *pcVar10;
  FString *pFVar11;
  char *pcVar12;
  undefined1 local_res8;
  TObjectPtr<UClass>_u_0 local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_1e8 [8];
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  byte local_190 [8];
  undefined8 local_188;
  void *local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  byte local_168;
  byte local_160 [8];
  undefined8 local_158;
  void *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  byte local_138;
  byte local_130 [8];
  undefined8 local_128;
  void *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  byte local_108;
  byte local_100 [8];
  undefined8 local_f8;
  void *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  byte local_d8;
  byte local_d0 [8];
  undefined8 local_c8;
  void *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  byte local_a8;
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  TPairInitializer<ESlatePostRT_&&,FSlatePostSettings_&&> local_90;
  byte *local_80;
  TObjectPtr<UClass>_u_0 *local_78;
  byte *local_70;
  undefined1 *local_68;
  byte *local_60;
  undefined1 *local_58;
  byte *local_50;
  undefined1 *local_48;
  byte *local_40;
  
  pFVar6 = FObjectInitializer::Get();
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,pFVar6);
  local_190[0] = local_190[0] & 0xfe;
  local_168 = local_168 & 0xfe;
  this->_padding_ = (longlong)&___7USlateRHIRendererSettings__6B_;
  pcVar12 = (char *)0x0;
  local_res8 = 1;
  *(undefined8 *)&this->SlatePostSettings = 0;
  local_90.Value = (FSlatePostSettings *)&local_res8;
  *(undefined8 *)&(this->SlatePostSettings).field_0x8 = 0;
  *(undefined8 *)&(this->SlatePostSettings).field_0x20 = 0;
  *(undefined4 *)&(this->SlatePostSettings).field_0x28 = 0;
  *(undefined4 *)&(this->SlatePostSettings).field_0x2c = 0x80;
  *(undefined4 *)&(this->SlatePostSettings).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SlatePostSettings).field_0x34 = 0;
  local_80 = local_190;
  *(undefined8 *)&(this->SlatePostSettings).field_0x40 = 0;
  *(undefined4 *)&(this->SlatePostSettings).field_0x48 = 0;
  local_190[1] = 0;
  local_188 = 0;
  local_180 = (void *)0x0;
  uStack_178 = 0;
  local_170 = 0;
  TSet<TTuple<enum_ESlatePostRT,FSlatePostSettings>,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,FSlatePostSettings,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_ESlatePostRT_&&,FSlatePostSettings_&&>_>
            (&this->SlatePostSettings,
             (TPairInitializer<ESlatePostRT_&&,FSlatePostSettings_&&> *)local_a0,
             (bool *)&local_90.Value);
  if (local_180 != (void *)0x0) {
    FMemory::Free(local_180);
  }
  local_160[0] = local_160[0] & 0xfe;
  local_78 = &local_res10;
  local_138 = local_138 & 0xfe;
  local_160[1] = 0;
  local_70 = local_160;
  local_158 = 0;
  local_150 = (void *)0x0;
  uStack_148 = 0;
  local_140 = 0;
  local_res10._0_1_ = 2;
  TSet<TTuple<enum_ESlatePostRT,FSlatePostSettings>,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,FSlatePostSettings,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_ESlatePostRT_&&,FSlatePostSettings_&&>_>
            (&this->SlatePostSettings,
             (TPairInitializer<ESlatePostRT_&&,FSlatePostSettings_&&> *)(local_a0 + 4),
             (bool *)&local_78);
  if (local_150 != (void *)0x0) {
    FMemory::Free(local_150);
  }
  local_130[0] = local_130[0] & 0xfe;
  local_68 = local_res18;
  local_108 = local_108 & 0xfe;
  local_130[1] = 0;
  local_60 = local_130;
  local_128 = 0;
  local_120 = (void *)0x0;
  uStack_118 = 0;
  local_110 = 0;
  local_res18[0] = 4;
  TSet<TTuple<enum_ESlatePostRT,FSlatePostSettings>,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,FSlatePostSettings,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_ESlatePostRT_&&,FSlatePostSettings_&&>_>
            (&this->SlatePostSettings,
             (TPairInitializer<ESlatePostRT_&&,FSlatePostSettings_&&> *)local_98,(bool *)&local_68);
  if (local_120 != (void *)0x0) {
    FMemory::Free(local_120);
  }
  local_100[0] = local_100[0] & 0xfe;
  local_58 = local_res20;
  local_d8 = local_d8 & 0xfe;
  local_100[1] = 0;
  local_50 = local_100;
  local_f8 = 0;
  local_f0 = (void *)0x0;
  uStack_e8 = 0;
  local_e0 = 0;
  local_res20[0] = 8;
  TSet<TTuple<enum_ESlatePostRT,FSlatePostSettings>,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,FSlatePostSettings,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_ESlatePostRT_&&,FSlatePostSettings_&&>_>
            (&this->SlatePostSettings,
             (TPairInitializer<ESlatePostRT_&&,FSlatePostSettings_&&> *)(local_98 + 4),
             (bool *)&local_58);
  if (local_f0 != (void *)0x0) {
    FMemory::Free(local_f0);
  }
  local_d0[0] = local_d0[0] & 0xfe;
  local_48 = local_1e8;
  local_a8 = local_a8 & 0xfe;
  local_d0[1] = 0;
  local_40 = local_d0;
  local_c8 = 0;
  local_c0 = (void *)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_1e8[0] = 0x10;
  TSet<TTuple<enum_ESlatePostRT,FSlatePostSettings>,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,FSlatePostSettings,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_ESlatePostRT_&&,FSlatePostSettings_&&>_>
            (&this->SlatePostSettings,&local_90,(bool *)&local_48);
  if (local_c0 != (void *)0x0) {
    FMemory::Free(local_c0);
  }
  pTVar4 = CVarDefaultEnablePostRenderTarget_0.Ref;
  bVar5 = IsInParallelGameThread();
  if (!bVar5) {
    bVar5 = IsInGameThread();
    pcVar10 = &DAT_00000004;
    if (!bVar5) goto LAB_145fe8d5f;
  }
  pcVar10 = pcVar12;
LAB_145fe8d5f:
  uVar1 = *(undefined4 *)(pcVar10 + (longlong)pTVar4);
  pcVar10 = pcVar12;
  if (*(int *)&(this->SlatePostSettings).field_0x8 != *(int *)&(this->SlatePostSettings).field_0x34)
  {
    puVar8 = *(undefined1 **)&(this->SlatePostSettings).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->SlatePostSettings).field_0x38;
    }
    iVar9 = *(int *)(puVar8 + (ulonglong)(*(int *)&(this->SlatePostSettings).field_0x48 - 1U & 1) *
                              4);
    if (iVar9 != -1) {
      do {
        pcVar10 = (char *)((longlong)iVar9 * 0x40 + *(longlong *)&this->SlatePostSettings);
        if (*pcVar10 == '\x01') {
          if (pcVar10 != (char *)0x0) goto LAB_145fe8dd7;
          break;
        }
        iVar9 = *(int *)(pcVar10 + 0x38);
        pcVar10 = pcVar12;
      } while (iVar9 != -1);
    }
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    pUVar7 = (USlateRHIRendererSettings *)(*pcVar3)();
    return pUVar7;
  }
LAB_145fe8dd7:
  pcVar10[8] = pcVar10[8] ^ (pcVar10[8] ^ (byte)uVar1) & 1;
  ::FString::FString(&local_1e0,"/Engine/EngineResources/SlatePost0_RT.SlatePost0_RT");
  pcVar10 = pcVar12;
  if (*(int *)&(this->SlatePostSettings).field_0x8 != *(int *)&(this->SlatePostSettings).field_0x34)
  {
    puVar8 = *(undefined1 **)&(this->SlatePostSettings).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->SlatePostSettings).field_0x38;
    }
    iVar9 = *(int *)(puVar8 + (ulonglong)(*(int *)&(this->SlatePostSettings).field_0x48 - 1U & 1) *
                              4);
    if (iVar9 != -1) {
      do {
        pcVar10 = (char *)((longlong)iVar9 * 0x40 + *(longlong *)&this->SlatePostSettings);
        if (*pcVar10 == '\x01') {
          if (pcVar10 != (char *)0x0) goto LAB_145fe8e74;
          break;
        }
        iVar9 = *(int *)(pcVar10 + 0x38);
        pcVar10 = pcVar12;
      } while (iVar9 != -1);
    }
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    pUVar7 = (USlateRHIRendererSettings *)(*pcVar3)();
    return pUVar7;
  }
LAB_145fe8e74:
  pFVar11 = (FString *)(pcVar10 + 0x18);
  if (pFVar11 != &local_1e0) {
    pFVar2 = (pFVar11->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar11->Data).AllocatorInstance.Data = local_1e0.Data.AllocatorInstance.Data;
    local_1e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pcVar10 + 0x20) = local_1e0.Data.ArrayNum;
    *(int *)(pcVar10 + 0x24) = local_1e0.Data.ArrayMax;
    local_1e0.Data.ArrayNum = 0;
    local_1e0.Data.ArrayMax = 0;
  }
  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1d0,"/Engine/EngineResources/SlatePost1_RT.SlatePost1_RT");
  pcVar10 = pcVar12;
  if (*(int *)&(this->SlatePostSettings).field_0x8 != *(int *)&(this->SlatePostSettings).field_0x34)
  {
    puVar8 = *(undefined1 **)&(this->SlatePostSettings).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->SlatePostSettings).field_0x38;
    }
    iVar9 = *(int *)(puVar8 + (ulonglong)(*(int *)&(this->SlatePostSettings).field_0x48 - 1U & 2) *
                              4);
    if (iVar9 != -1) {
      do {
        pcVar10 = (char *)((longlong)iVar9 * 0x40 + *(longlong *)&this->SlatePostSettings);
        if (*pcVar10 == '\x02') {
          if (pcVar10 != (char *)0x0) goto LAB_145fe8f44;
          break;
        }
        iVar9 = *(int *)(pcVar10 + 0x38);
        pcVar10 = pcVar12;
      } while (iVar9 != -1);
    }
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    pUVar7 = (USlateRHIRendererSettings *)(*pcVar3)();
    return pUVar7;
  }
LAB_145fe8f44:
  pFVar11 = (FString *)(pcVar10 + 0x18);
  if (pFVar11 != &local_1d0) {
    pFVar2 = (pFVar11->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar11->Data).AllocatorInstance.Data = local_1d0.Data.AllocatorInstance.Data;
    local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pcVar10 + 0x20) = local_1d0.Data.ArrayNum;
    *(int *)(pcVar10 + 0x24) = local_1d0.Data.ArrayMax;
    local_1d0.Data.ArrayNum = 0;
    local_1d0.Data.ArrayMax = 0;
  }
  if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1c0,"/Engine/EngineResources/SlatePost2_RT.SlatePost2_RT");
  pcVar10 = pcVar12;
  if (*(int *)&(this->SlatePostSettings).field_0x8 != *(int *)&(this->SlatePostSettings).field_0x34)
  {
    puVar8 = *(undefined1 **)&(this->SlatePostSettings).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->SlatePostSettings).field_0x38;
    }
    iVar9 = *(int *)(puVar8 + (ulonglong)(*(int *)&(this->SlatePostSettings).field_0x48 - 1U & 4) *
                              4);
    if (iVar9 != -1) {
      do {
        pcVar10 = (char *)((longlong)iVar9 * 0x40 + *(longlong *)&this->SlatePostSettings);
        if (*pcVar10 == '\x04') {
          if (pcVar10 != (char *)0x0) goto LAB_145fe9014;
          break;
        }
        iVar9 = *(int *)(pcVar10 + 0x38);
        pcVar10 = pcVar12;
      } while (iVar9 != -1);
    }
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    pUVar7 = (USlateRHIRendererSettings *)(*pcVar3)();
    return pUVar7;
  }
LAB_145fe9014:
  pFVar11 = (FString *)(pcVar10 + 0x18);
  if (pFVar11 != &local_1c0) {
    pFVar2 = (pFVar11->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar11->Data).AllocatorInstance.Data = local_1c0.Data.AllocatorInstance.Data;
    local_1c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pcVar10 + 0x20) = local_1c0.Data.ArrayNum;
    *(int *)(pcVar10 + 0x24) = local_1c0.Data.ArrayMax;
    local_1c0.Data.ArrayNum = 0;
    local_1c0.Data.ArrayMax = 0;
  }
  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1b0,"/Engine/EngineResources/SlatePost3_RT.SlatePost3_RT");
  pcVar10 = pcVar12;
  if (*(int *)&(this->SlatePostSettings).field_0x8 != *(int *)&(this->SlatePostSettings).field_0x34)
  {
    puVar8 = *(undefined1 **)&(this->SlatePostSettings).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->SlatePostSettings).field_0x38;
    }
    iVar9 = *(int *)(puVar8 + (ulonglong)(*(int *)&(this->SlatePostSettings).field_0x48 - 1U & 8) *
                              4);
    if (iVar9 != -1) {
      do {
        pcVar10 = (char *)((longlong)iVar9 * 0x40 + *(longlong *)&this->SlatePostSettings);
        if (*pcVar10 == '\b') {
          if (pcVar10 != (char *)0x0) goto LAB_145fe90e4;
          break;
        }
        iVar9 = *(int *)(pcVar10 + 0x38);
        pcVar10 = pcVar12;
      } while (iVar9 != -1);
    }
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    pUVar7 = (USlateRHIRendererSettings *)(*pcVar3)();
    return pUVar7;
  }
LAB_145fe90e4:
  pFVar11 = (FString *)(pcVar10 + 0x18);
  if (pFVar11 != &local_1b0) {
    pFVar2 = (pFVar11->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar11->Data).AllocatorInstance.Data = local_1b0.Data.AllocatorInstance.Data;
    local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pcVar10 + 0x20) = local_1b0.Data.ArrayNum;
    *(int *)(pcVar10 + 0x24) = local_1b0.Data.ArrayMax;
    local_1b0.Data.ArrayNum = 0;
    local_1b0.Data.ArrayMax = 0;
  }
  if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1a0,"/Engine/EngineResources/SlatePost4_RT.SlatePost4_RT");
  pcVar10 = pcVar12;
  if (*(int *)&(this->SlatePostSettings).field_0x8 != *(int *)&(this->SlatePostSettings).field_0x34)
  {
    puVar8 = *(undefined1 **)&(this->SlatePostSettings).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->SlatePostSettings).field_0x38;
    }
    iVar9 = *(int *)(puVar8 + (ulonglong)(*(int *)&(this->SlatePostSettings).field_0x48 - 1U & 0x10)
                              * 4);
    if (iVar9 != -1) {
      do {
        pcVar10 = (char *)((longlong)iVar9 * 0x40 + *(longlong *)&this->SlatePostSettings);
        if (*pcVar10 == '\x10') {
          if (pcVar10 != (char *)0x0) goto LAB_145fe91b4;
          break;
        }
        iVar9 = *(int *)(pcVar10 + 0x38);
        pcVar10 = pcVar12;
      } while (iVar9 != -1);
    }
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    pUVar7 = (USlateRHIRendererSettings *)(*pcVar3)();
    return pUVar7;
  }
LAB_145fe91b4:
  pFVar11 = (FString *)(pcVar10 + 0x18);
  if (pFVar11 != &local_1a0) {
    pFVar2 = (pFVar11->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar11->Data).AllocatorInstance.Data = local_1a0.Data.AllocatorInstance.Data;
    local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pcVar10 + 0x20) = local_1a0.Data.ArrayNum;
    *(int *)(pcVar10 + 0x24) = local_1a0.Data.ArrayMax;
    local_1a0.Data.ArrayNum = 0;
    local_1a0.Data.ArrayMax = 0;
  }
  if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~USlateRHIRendererSettings @ 145feb5f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
USlateRHIRendererSettings::~USlateRHIRendererSettings(USlateRHIRendererSettings *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FUObjectItem *this_00;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  this->_padding_ = (longlong)&___7USlateRHIRendererSettings__6B_;
  if (GExitPurge == false) {
    puVar1 = &(this->SlatePostSettings).field_0x10;
    iVar11 = 0;
    iVar3 = *(int *)&(this->SlatePostSettings).field_0x28;
    iVar13 = 0;
    uVar7 = 1;
    iVar8 = 0;
    if (iVar3 != 0) {
      puVar14 = *(uint **)&(this->SlatePostSettings).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)puVar1;
      }
      uVar10 = *puVar14;
      while (uVar10 == 0) {
        lVar9 = (longlong)iVar11;
        iVar13 = iVar13 + 0x20;
        iVar11 = iVar11 + 1;
        iVar8 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145feb6ad;
        uVar10 = puVar14[lVar9 + 1];
      }
      uVar7 = -uVar10 & uVar10;
      uVar2 = (ulonglong)uVar7 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res10 = (int)lVar9;
      iVar8 = local_res10 + -1 + iVar13;
      if (iVar3 < iVar8) {
        iVar8 = iVar3;
      }
    }
LAB_145feb6ad:
    uVar10 = *(uint *)&(this->SlatePostSettings).field_0x28;
    uVar15 = uVar10 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar7,iVar11);
    TStack_60.CurrentBitIndex = iVar8;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar10 >> 5;
    TStack_60._28_4_ = iVar8;
    TStack_60.BaseBitIndex = iVar13;
    uStack_40 = CONCAT44(uStack_6c,
                         *(int *)&(this->SlatePostSettings).field_0x8 -
                         *(int *)&(this->SlatePostSettings).field_0x34);
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar7 = *(uint *)&(this->SlatePostSettings).field_0x28;
    if (uVar10 != uVar7) {
      puVar12 = *(undefined1 **)&(this->SlatePostSettings).field_0x20;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
      while (uVar10 == 0) {
        lVar9 = (longlong)iVar11;
        uVar15 = uVar15 + 0x20;
        iVar11 = iVar11 + 1;
        uVar10 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_145feb7c0;
        uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar10 = (int)lVar9 + -1 + uVar15;
      if ((int)uVar7 < (int)uVar10) {
        uVar10 = uVar7;
      }
    }
LAB_145feb7c0:
    while( true ) {
      if (*(int *)&(this->SlatePostSettings).field_0x8 -
          *(int *)&(this->SlatePostSettings).field_0x34 != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<enum_ESlatePostRT,FSlatePostSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_60.CurrentBitIndex == uVar10) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      lVar9 = *(longlong *)
               ((longlong)TStack_60.CurrentBitIndex * 0x40 + 0x28 +
               *(longlong *)&this->SlatePostSettings);
      if (lVar9 != 0) {
        this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar9 + 0xc));
        FUObjectItem::ClearRootFlags(this_00,RootSet);
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  *(undefined4 *)&(this->SlatePostSettings).field_0x48 = 0;
  pvVar4 = *(void **)&(this->SlatePostSettings).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_ESlatePostRT,FSlatePostSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_ESlatePostRT,FSlatePostSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->SlatePostSettings);
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// BeginDestroy @ 145ff6110

void __thiscall USlateRHIRendererSettings::BeginDestroy(USlateRHIRendererSettings *this)

{
  FlushRenderingCommands();
  UObject::BeginDestroy((UObject *)this);
  return;
}

// GetMutableSlatePostSetting @ 14600d210

FSlatePostSettings * __thiscall
USlateRHIRendererSettings::GetMutableSlatePostSetting
          (USlateRHIRendererSettings *this,ESlatePostRT param_1)

{
  FSlatePostSettings *pFVar1;
  
  pFVar1 = TMapBase<enum_ESlatePostRT,FSlatePostSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,FSlatePostSettings,0>_>
           ::FindChecked(&this->SlatePostSettings,param_1);
  return pFVar1;
}

// GetPrivateStaticClass @ 14600d6d0

UClass * __cdecl USlateRHIRendererSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateRHIRendererSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SlateRHIRenderer",L"SlateRHIRendererSettings",
               &Z_Registration_Info_UClass_USlateRHIRendererSettings.InnerSingleton,
               StaticRegisterNativesUSlateRHIRendererSettings,0x88,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<USlateRHIRendererSettings>,
               InternalVTableHelperCtorCaller<USlateRHIRendererSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateRHIRendererSettings.InnerSingleton;
}

// GetSlatePostBufferDownscaleFactor @ 14600ed50

int __thiscall
USlateRHIRendererSettings::GetSlatePostBufferDownscaleFactor
          (USlateRHIRendererSettings *this,ESlatePostRT param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FSlatePostSettings *pFVar4;
  
  pFVar4 = TMapBase<enum_ESlatePostRT,FSlatePostSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,FSlatePostSettings,0>_>
           ::FindChecked(&this->SlatePostSettings,param_1);
  if (pFVar4->Resolution != Full) {
    if (pFVar4->Resolution == Half) {
      return 2;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIRendererSettings.cpp"
                       ,0x80,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return 1;
}

// GetSlatePostSetting @ 14600eee0

FSlatePostSettings * __thiscall
USlateRHIRendererSettings::GetSlatePostSetting(USlateRHIRendererSettings *this,ESlatePostRT param_1)

{
  FSlatePostSettings *pFVar1;
  
  pFVar1 = TMapBase<enum_ESlatePostRT,FSlatePostSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,FSlatePostSettings,0>_>
           ::FindChecked(&this->SlatePostSettings,param_1);
  return pFVar1;
}

// GetSlatePostSettings @ 14600eef0

TMap<ESlatePostRT,FSlatePostSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ESlatePostRT,FSlatePostSettings,0>_>
* __thiscall USlateRHIRendererSettings::GetSlatePostSettings(USlateRHIRendererSettings *this)

{
  return &this->SlatePostSettings;
}

// LoadGetPostBufferRT @ 14601b8c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTextureRenderTarget2D * __thiscall
USlateRHIRendererSettings::LoadGetPostBufferRT(USlateRHIRendererSettings *this,ESlatePostRT param_1)

{
  FSlatePostSettings *pFVar1;
  size_t sVar2;
  UClass *pUVar3;
  UTextureRenderTarget2D *pUVar4;
  FUObjectItem *this_00;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  pFVar1 = TMapBase<enum_ESlatePostRT,FSlatePostSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,FSlatePostSettings,0>_>
           ::FindChecked(&this->SlatePostSettings,param_1);
  if (pFVar1->bEnabled == 0) {
    return (UTextureRenderTarget2D *)0x0;
  }
  pUVar4 = (pFVar1->CachedSlatePostRT).field0_0x0.DebugPtr;
  if (pUVar4 != (UTextureRenderTarget2D *)0x0) {
    return pUVar4;
  }
  if (pFVar1->bLoadAttempted) {
    return (UTextureRenderTarget2D *)0x0;
  }
  local_18.DataPtr = (wchar_t *)0x0;
  local_28.Size = 0;
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  if ((pFVar1->PathToSlatePostRT).Data.ArrayNum == 0) {
    local_28.DataPtr = L"";
  }
  else {
    local_28.DataPtr = (wchar_t *)(pFVar1->PathToSlatePostRT).Data.AllocatorInstance.Data;
    if ((FScriptContainerElement *)local_28.DataPtr == (FScriptContainerElement *)0x0)
    goto LAB_14601b929;
  }
  sVar2 = wcslen(local_28.DataPtr);
  local_28.Size = (int)sVar2;
LAB_14601b929:
  pUVar3 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
  pUVar4 = (UTextureRenderTarget2D *)
           StaticLoadObject(pUVar3,(UObject *)0x0,&local_28,&local_18,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  if (pUVar4 != (UTextureRenderTarget2D *)0x0) {
    this_00 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&pUVar4->_padding_ + 4));
    FUObjectItem::SetRootFlags(this_00,RootSet);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (pFVar1->CachedSlatePostRT).field0_0x0.DebugPtr = pUVar4;
  }
  pFVar1->bLoadAttempted = true;
  return pUVar4;
}

// StaticRegisterNativesUSlateRHIRendererSettings @ 14602c270

void __cdecl USlateRHIRendererSettings::StaticRegisterNativesUSlateRHIRendererSettings(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_USlateRHIRendererSettings_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TryGetPostBufferRT @ 14602c740

UTextureRenderTarget2D * __thiscall
USlateRHIRendererSettings::TryGetPostBufferRT(USlateRHIRendererSettings *this,ESlatePostRT param_1)

{
  FSlatePostSettings *pFVar1;
  
  pFVar1 = TMapBase<enum_ESlatePostRT,FSlatePostSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,FSlatePostSettings,0>_>
           ::FindChecked(&this->SlatePostSettings,param_1);
  return (pFVar1->CachedSlatePostRT).field0_0x0.DebugPtr;
}

// execGetMutableSlatePostSetting @ 14602f330

void __cdecl
USlateRHIRendererSettings::execGetMutableSlatePostSetting
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlatePostSettings *pFVar2;
  ESlatePostRT local_res8 [8];
  
  local_res8[0] = None;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = TMapBase<enum_ESlatePostRT,FSlatePostSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,FSlatePostSettings,0>_>
           ::FindChecked(&param_1[1].field_0x10,local_res8[0]);
  FSlatePostSettings::operator=(param_3,pFVar2);
  return;
}

// execGetSlatePostSetting @ 14602f470

void __cdecl
USlateRHIRendererSettings::execGetSlatePostSetting(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlatePostSettings *pFVar2;
  ESlatePostRT local_res8 [8];
  
  local_res8[0] = None;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = TMapBase<enum_ESlatePostRT,FSlatePostSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,FSlatePostSettings,0>_>
           ::FindChecked(&param_1[1].field_0x10,local_res8[0]);
  FSlatePostSettings::operator=(param_3,pFVar2);
  return;
}

