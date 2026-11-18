// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 10

// Get @ 14d5a5d50

FCameraDebugColors * __cdecl UE::Cameras::FCameraDebugColors::Get(void)

{
  return &CurrentColorScheme;
}

// GetColorSchemeNames @ 14d5a6f40

void __cdecl
UE::Cameras::FCameraDebugColors::GetColorSchemeNames
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  TMapBase<FString,UE::Cameras::FCameraDebugColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Cameras::FCameraDebugColors,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FString,UE::Cameras::FCameraDebugColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Cameras::FCameraDebugColors,0>_>
              *)&ColorSchemes,param_1);
  return;
}

// GetFColorByName @ 14d5a81a0

TOptional<FColor> __cdecl UE::Cameras::FCameraDebugColors::GetFColorByName(FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  FString *in_RDX;
  wchar_t *pwVar6;
  
  if (ColorMap._8_4_ == ColorMap._52_4_) {
    UpdateColorMap(&CurrentColorScheme);
  }
  iVar2 = (in_RDX->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(in_RDX->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar6);
  iVar2 = TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>
                      *)&ColorMap,uVar1,in_RDX);
  if (iVar2 == -1) {
    *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 4) = 0;
  }
  else {
    lVar4 = (longlong)iVar2 * 0x20 + ColorMap._0_8_;
    *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 4) = 0;
    puVar5 = (undefined4 *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    if (puVar5 != (undefined4 *)0x0) {
      *(undefined4 *)&(param_1->Data).AllocatorInstance.Data = *puVar5;
      *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 4) = 1;
      return (TOptional<FColor>)param_1;
    }
  }
  return (TOptional<FColor>)param_1;
}

// GetName @ 14d5a87b0

FString * __cdecl UE::Cameras::FCameraDebugColors::GetName(void)

{
  return &CurrentColorSchemeName;
}

// RegisterBuiltinColorSchemes @ 14d5c96d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::Cameras::FCameraDebugColors::RegisterBuiltinColorSchemes(void)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  undefined1 local_58 [8];
  undefined1 local_50 [16];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_40 = 0xff268bd2;
  local_3c = 0xffeee8d5;
  local_38 = 0xff93a1a1;
  local_34 = 0xff839496;
  local_30 = 0xfffdf6e3;
  local_2c = 0xff2aa198;
  local_28 = 0xffd33682;
  local_24 = 0xff859900;
  local_20 = 0xffb58900;
  local_1c = 0xffdc322f;
  local_18 = 0xff002b36;
  ::FString::FString((FString *)local_68,L"SolarizedDark");
  local_50._0_8_ = local_68;
  local_50._8_8_ = &local_40;
  TSet<TTuple<FString,UE::Cameras::FCameraDebugColors>,TDefaultMapHashableKeyFuncs<FString,UE::Cameras::FCameraDebugColors,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,UE::Cameras::FCameraDebugColors_const_&>_>
            ((TSet<TTuple<FString,UE::Cameras::FCameraDebugColors>,TDefaultMapHashableKeyFuncs<FString,UE::Cameras::FCameraDebugColors,0>,FDefaultSetAllocator>
              *)&ColorSchemes,
             (TPairInitializer<FString_const_&,UE::Cameras::FCameraDebugColors_const_&> *)local_58,
             (bool *)local_50);
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  local_40 = 0xff268bd2;
  local_3c = 0xff586e75;
  local_38 = 0xff657b83;
  local_34 = 0xff839496;
  local_30 = 0xff002b36;
  local_2c = 0xff2aa198;
  local_28 = 0xffd33682;
  local_24 = 0xff859900;
  local_20 = 0xffb58900;
  local_1c = 0xffdc322f;
  local_18 = 0xfffdf6e3;
  ::FString::FString((FString *)local_50,L"SolarizedLight");
  local_68._0_8_ = local_50;
  local_68._8_8_ = &local_40;
  TSet<TTuple<FString,UE::Cameras::FCameraDebugColors>,TDefaultMapHashableKeyFuncs<FString,UE::Cameras::FCameraDebugColors,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,UE::Cameras::FCameraDebugColors_const_&>_>
            ((TSet<TTuple<FString,UE::Cameras::FCameraDebugColors>,TDefaultMapHashableKeyFuncs<FString,UE::Cameras::FCameraDebugColors,0>,FDefaultSetAllocator>
              *)&ColorSchemes,
             (TPairInitializer<FString_const_&,UE::Cameras::FCameraDebugColors_const_&> *)local_58,
             (bool *)local_68);
  if ((FCameraDebugColors *)local_50._0_8_ != (FCameraDebugColors *)0x0) {
    FMemory::Free((void *)local_50._0_8_);
  }
  ::FString::FString((FString *)local_68,L"SolarizedDark");
  Set((FString *)local_68);
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return;
}

// RegisterColorScheme @ 14d5c9a50

void __cdecl
UE::Cameras::FCameraDebugColors::RegisterColorScheme(FString *param_1,FCameraDebugColors *param_2)

{
  TPairInitializer<FString_const_&,UE::Cameras::FCameraDebugColors_const_&> local_res8 [2];
  FString *local_18;
  FCameraDebugColors *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FString,UE::Cameras::FCameraDebugColors>,TDefaultMapHashableKeyFuncs<FString,UE::Cameras::FCameraDebugColors,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,UE::Cameras::FCameraDebugColors_const_&>_>
            ((TSet<TTuple<FString,UE::Cameras::FCameraDebugColors>,TDefaultMapHashableKeyFuncs<FString,UE::Cameras::FCameraDebugColors,0>,FDefaultSetAllocator>
              *)&ColorSchemes,local_res8,(bool *)&local_18);
  return;
}

// Set @ 14d5ce010

void __cdecl UE::Cameras::FCameraDebugColors::Set(FCameraDebugColors *param_1)

{
  ::FString::operator=(&CurrentColorSchemeName,L"<Custom>");
  CurrentColorScheme.Title.field0_0x0 = (param_1->Title).field0_0x0;
  CurrentColorScheme.Default.field0_0x0 = (param_1->Default).field0_0x0;
  CurrentColorScheme.Passive.field0_0x0 = (param_1->Passive).field0_0x0;
  CurrentColorScheme.VeryPassive.field0_0x0 = (param_1->VeryPassive).field0_0x0;
  CurrentColorScheme.Hightlighted.field0_0x0 = (param_1->Hightlighted).field0_0x0;
  CurrentColorScheme.Notice.field0_0x0 = (param_1->Notice).field0_0x0;
  CurrentColorScheme.Notice2.field0_0x0 = (param_1->Notice2).field0_0x0;
  CurrentColorScheme.Good.field0_0x0 = (param_1->Good).field0_0x0;
  CurrentColorScheme.Warning.field0_0x0 = (param_1->Warning).field0_0x0;
  CurrentColorScheme.Error.field0_0x0 = (param_1->Error).field0_0x0;
  CurrentColorScheme.Background.field0_0x0 =
       (FColor_u_0)*(FColor_u_0 *)&(param_1->Background).field0_0x0._s_0;
  UpdateColorMap(&CurrentColorScheme);
  return;
}

// Set @ 14d5ce070

void __cdecl UE::Cameras::FCameraDebugColors::Set(FString *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  undefined8 *puVar6;
  bool bVar7;
  FString *local_res8;
  
  iVar3 = (param_1->Data).ArrayNum;
  if (iVar3 == CurrentColorSchemeName.Data.ArrayNum) {
    if (iVar3 < 2) {
      return;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                       (wchar_t *)CurrentColorSchemeName.Data.AllocatorInstance.Data);
    bVar7 = iVar3 == 0;
  }
  else {
    bVar7 = iVar3 + CurrentColorSchemeName.Data.ArrayNum == 1;
  }
  if (bVar7) {
    return;
  }
  iVar3 = (param_1->Data).ArrayNum;
  if (iVar3 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar3 = TSet<TTuple<FString,UE::Cameras::FCameraDebugColors>,TDefaultMapHashableKeyFuncs<FString,UE::Cameras::FCameraDebugColors,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,UE::Cameras::FCameraDebugColors>,TDefaultMapHashableKeyFuncs<FString,UE::Cameras::FCameraDebugColors,0>,FDefaultSetAllocator>
                      *)&ColorSchemes,uVar2,param_1);
  puVar6 = (undefined8 *)0x0;
  if (iVar3 != -1) {
    lVar1 = ColorSchemes._0_8_ + (longlong)iVar3 * 0x48;
    puVar6 = (undefined8 *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    if (puVar6 != (undefined8 *)0x0) goto LAB_14d5ce12d;
  }
  local_res8 = param_1;
  bVar7 = `UE::Cameras::FCameraDebugColors::Set'::__l6::<lambda_1>::operator()(&local_res8);
  if (!bVar7) {
    return;
  }
LAB_14d5ce12d:
  ::FString::operator=(&CurrentColorSchemeName,param_1);
  CurrentColorScheme._0_8_ = *puVar6;
  CurrentColorScheme._8_8_ = puVar6[1];
  CurrentColorScheme._16_8_ = puVar6[2];
  CurrentColorScheme._24_8_ = puVar6[3];
  CurrentColorScheme._32_8_ = puVar6[4];
  CurrentColorScheme.Background.field0_0x0 =
       (FColor_u_0)*(FColor_u_0 *)&((FColor_u_0 *)(puVar6 + 5))->_s_0;
  UpdateColorMap(&CurrentColorScheme);
  return;
}

// UpdateColorMap @ 14d5d35c0

void __cdecl UE::Cameras::FCameraDebugColors::UpdateColorMap(FCameraDebugColors *param_1)

{
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>::
  Reset((TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>
         *)&ColorMap);
  ::FString::FString((FString *)local_18,L"cam_title");
  local_28._0_8_ = local_18;
  local_28._8_8_ = param_1;
  TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FString_&&,FColor_const_&>_>
            ((TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>
              *)&ColorMap,(TPairInitializer<FString_&&,FColor_const_&> *)&stack0x00000008,
             (bool *)local_28);
  if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_18._0_8_);
  }
  ::FString::FString((FString *)local_28,L"cam_default");
  local_18._0_8_ = local_28;
  local_18._8_8_ = &param_1->Default;
  TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FString_&&,FColor_const_&>_>
            ((TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>
              *)&ColorMap,(TPairInitializer<FString_&&,FColor_const_&> *)&stack0x00000008,
             (bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,L"cam_passive");
  local_18._0_8_ = local_28;
  local_18._8_8_ = &param_1->Passive;
  TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FString_&&,FColor_const_&>_>
            ((TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>
              *)&ColorMap,(TPairInitializer<FString_&&,FColor_const_&> *)&stack0x00000008,
             (bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,L"cam_verypassive");
  local_18._0_8_ = local_28;
  local_18._8_8_ = &param_1->VeryPassive;
  TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FString_&&,FColor_const_&>_>
            ((TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>
              *)&ColorMap,(TPairInitializer<FString_&&,FColor_const_&> *)&stack0x00000008,
             (bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,L"cam_highlighted");
  local_18._0_8_ = local_28;
  local_18._8_8_ = &param_1->Hightlighted;
  TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FString_&&,FColor_const_&>_>
            ((TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>
              *)&ColorMap,(TPairInitializer<FString_&&,FColor_const_&> *)&stack0x00000008,
             (bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,L"cam_notice");
  local_18._0_8_ = local_28;
  local_18._8_8_ = &param_1->Notice;
  TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FString_&&,FColor_const_&>_>
            ((TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>
              *)&ColorMap,(TPairInitializer<FString_&&,FColor_const_&> *)&stack0x00000008,
             (bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,L"cam_notice2");
  local_18._0_8_ = local_28;
  local_18._8_8_ = &param_1->Notice2;
  TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FString_&&,FColor_const_&>_>
            ((TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>
              *)&ColorMap,(TPairInitializer<FString_&&,FColor_const_&> *)&stack0x00000008,
             (bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,L"cam_good");
  local_18._0_8_ = local_28;
  local_18._8_8_ = &param_1->Good;
  TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FString_&&,FColor_const_&>_>
            ((TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>
              *)&ColorMap,(TPairInitializer<FString_&&,FColor_const_&> *)&stack0x00000008,
             (bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,L"cam_warning");
  local_18._0_8_ = local_28;
  local_18._8_8_ = &param_1->Warning;
  TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FString_&&,FColor_const_&>_>
            ((TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>
              *)&ColorMap,(TPairInitializer<FString_&&,FColor_const_&> *)&stack0x00000008,
             (bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,L"cam_error");
  local_18._0_8_ = local_28;
  local_18._8_8_ = &param_1->Error;
  TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FString_&&,FColor_const_&>_>
            ((TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>
              *)&ColorMap,(TPairInitializer<FString_&&,FColor_const_&> *)&stack0x00000008,
             (bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,L"cam_background");
  local_18._0_8_ = local_28;
  local_18._8_8_ = &param_1->Background;
  TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FString_&&,FColor_const_&>_>
            ((TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>
              *)&ColorMap,(TPairInitializer<FString_&&,FColor_const_&> *)&stack0x00000008,
             (bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  return;
}

// operator() @ 150583130

bool __thiscall `UE::Cameras::FCameraDebugColors::Set'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4381383635723354144>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<4381383635723354144>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

