// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 1291

// StyleInstance'' @ 1414512f0

void __cdecl `dynamic_initializer_for_'FSynthSlateStyleSet::StyleInstance__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSynthSlateStyleSet::StyleInstance__);
  return;
}

// TypeName'' @ 141451310

void __cdecl `dynamic_initializer_for_'FSynth2DSliderStyle::TypeName__(void)

{
  ::FName::FName(&FSynth2DSliderStyle::TypeName,L"Synth2DSliderStyle");
  return;
}

// TypeName'' @ 141451330

void __cdecl `dynamic_initializer_for_'FSynthKnobStyle::TypeName__(void)

{
  ::FName::FName(&FSynthKnobStyle::TypeName,L"SynthKnobStyle");
  return;
}

// TypeName'' @ 141451350

void __cdecl `dynamic_initializer_for_'FSynthSlateStyle::TypeName__(void)

{
  ::FName::FName(&FSynthSlateStyle::TypeName,L"FSynthUIStyle");
  return;
}

// `dynamic_initializer_for_'CVarDisableHardwareConvolution'' @ 141451370

void __cdecl _dynamic_initializer_for__CVarDisableHardwareConvolution__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDisableHardwareConvolution,L"au.DisableHardwareConvolution",
             &bDisabledHardwareConvolution,
             L"Disables hardware convolution. Will not change already instantiated hardware accelerated convolution.\n1: New instances of hardware-acclerated convolution is disabled. 0: Hardware convolution is not disabled."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDisableHardwareConvolution__);
  return;
}

// `dynamic_initializer_for_'FrontChannels'' @ 1414513c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Audio::SubmixChannelFormatConverterPrivate::_dynamic_initializer_for__FrontChannels__(void)

{
  undefined1 auStack_68 [32];
  initializer_list<EAudioMixerChannel::Type> local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18 [3];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48._First = (Type *)&local_38;
  local_48._Last = (Type *)local_18;
  local_38 = ___xmm_00000006000000020000000100000000;
  uStack_30 = _UNK_15314dd98;
  local_28 = ___xmm_0000000d0000000e0000000c00000007;
  uStack_20 = _UNK_15314ddd8;
  TSet<enum_EAudioMixerChannel::Type,DefaultKeyFuncs<enum_EAudioMixerChannel::Type,0>,FDefaultSetAllocator>
  ::
  TSet<enum_EAudioMixerChannel::Type,DefaultKeyFuncs<enum_EAudioMixerChannel::Type,0>,FDefaultSetAllocator>
            (&FrontChannels,&local_48);
  atexit(_dynamic_atexit_destructor_for__FrontChannels__);
  return;
}

// `dynamic_initializer_for_'LogSynthesis'' @ 141451440

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogSynthesis__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogSynthesis,L"LogSynthesis",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSynthesis__);
  return;
}

// `dynamic_initializer_for_'LogTapDelay'' @ 141451480

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogTapDelay__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogTapDelay,L"LogTapDelay",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogTapDelay__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantSynthesis'' @ 1414514c0

void __cdecl _dynamic_initializer_for__ModuleRegistrantSynthesis__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "Synthesis";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"Synthesis",9);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FSynthesisModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'PairedFlippedRearChannelTypes'' @ 141451510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Audio::SubmixChannelFormatConverterPrivate::
_dynamic_initializer_for__PairedFlippedRearChannelTypes__(void)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  int *piVar5;
  undefined1 auStack_e8 [32];
  Type local_c8 [8];
  initializer_list<TPairInitializer<EAudioMixerChannel::Type_const_&,TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>_const_&>_>
  local_a8;
  TPairInitializer<EAudioMixerChannel::Type_const_&,TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>_const_&>
  local_98;
  Type *local_88;
  int *local_80;
  Type *local_78;
  int *local_70;
  Type *local_68;
  int *local_60;
  Type *local_58;
  int *local_50;
  Type *local_48;
  int *local_40;
  Type *local_38;
  int *local_30;
  Type *local_28;
  int *local_20;
  TPairInitializer<EAudioMixerChannel::Type_const_&,TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>_const_&>
  local_18;
  
  local_18.Key = (Type *)(__security_cookie.value ^ (ulonglong)auStack_e8);
  local_c8[0] = DefaultChannel;
  if (PairedRearChannelTypes._8_4_ != PairedRearChannelTypes._52_4_) {
    lVar4 = 0x1553b3458;
    if (PairedRearChannelTypes._64_8_ != 0) {
      lVar4 = PairedRearChannelTypes._64_8_;
    }
    iVar1 = *(int *)(lVar4 + (ulonglong)(PairedRearChannelTypes._72_4_ - 1 & 1) * 4);
    while (iVar1 != -1) {
      piVar5 = (int *)((longlong)iVar1 * 0x20 + PairedRearChannelTypes._0_8_);
      if (*piVar5 == 1) {
        if (piVar5 != (int *)0x0) goto LAB_1414515d3;
        goto LAB_14145159f;
      }
      iVar1 = piVar5[6];
    }
  }
  piVar5 = (int *)0x0;
LAB_14145159f:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1414515d3:
  local_98.Key = local_c8;
  local_c8[1] = 1;
  local_98.Value = (TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *)(piVar5 + 2);
  if (PairedRearChannelTypes._8_4_ != PairedRearChannelTypes._52_4_) {
    piVar5 = (int *)&PairedRearChannelTypes.field_0x38;
    if (PairedRearChannelTypes._64_8_ != 0) {
      piVar5 = (int *)PairedRearChannelTypes._64_8_;
    }
    iVar1 = *piVar5;
    while (iVar1 != -1) {
      piVar5 = (int *)((longlong)iVar1 * 0x20 + PairedRearChannelTypes._0_8_);
      if (*piVar5 == 0) {
        if (piVar5 != (int *)0x0) goto LAB_141451661;
        goto LAB_14145162d;
      }
      iVar1 = piVar5[6];
    }
  }
  piVar5 = (int *)0x0;
LAB_14145162d:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_141451661:
  local_88 = local_c8 + 1;
  local_c8[2] = 2;
  local_80 = piVar5 + 2;
  if (PairedRearChannelTypes._8_4_ != PairedRearChannelTypes._52_4_) {
    lVar4 = 0x1553b3458;
    if (PairedRearChannelTypes._64_8_ != 0) {
      lVar4 = PairedRearChannelTypes._64_8_;
    }
    iVar1 = *(int *)(lVar4 + (ulonglong)(PairedRearChannelTypes._72_4_ - 1 & 2) * 4);
    while (iVar1 != -1) {
      piVar5 = (int *)((longlong)iVar1 * 0x20 + PairedRearChannelTypes._0_8_);
      if (*piVar5 == 2) {
        if (piVar5 != (int *)0x0) goto LAB_141451703;
        goto LAB_1414516cf;
      }
      iVar1 = piVar5[6];
    }
  }
  piVar5 = (int *)0x0;
LAB_1414516cf:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_141451703:
  local_78 = local_c8 + 2;
  local_c8[3] = 6;
  local_70 = piVar5 + 2;
  if (PairedRearChannelTypes._8_4_ != PairedRearChannelTypes._52_4_) {
    lVar4 = 0x1553b3458;
    if (PairedRearChannelTypes._64_8_ != 0) {
      lVar4 = PairedRearChannelTypes._64_8_;
    }
    iVar1 = *(int *)(lVar4 + (ulonglong)(PairedRearChannelTypes._72_4_ - 1 & 7) * 4);
    while (iVar1 != -1) {
      piVar5 = (int *)((longlong)iVar1 * 0x20 + PairedRearChannelTypes._0_8_);
      if (*piVar5 == 7) {
        if (piVar5 != (int *)0x0) goto LAB_1414517a3;
        goto LAB_14145176f;
      }
      iVar1 = piVar5[6];
    }
  }
  piVar5 = (int *)0x0;
LAB_14145176f:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1414517a3:
  local_68 = local_c8 + 3;
  local_c8[4] = 7;
  local_60 = piVar5 + 2;
  if (PairedRearChannelTypes._8_4_ != PairedRearChannelTypes._52_4_) {
    lVar4 = 0x1553b3458;
    if (PairedRearChannelTypes._64_8_ != 0) {
      lVar4 = PairedRearChannelTypes._64_8_;
    }
    iVar1 = *(int *)(lVar4 + (ulonglong)(PairedRearChannelTypes._72_4_ - 1 & 6) * 4);
    while (iVar1 != -1) {
      piVar5 = (int *)((longlong)iVar1 * 0x20 + PairedRearChannelTypes._0_8_);
      if (*piVar5 == 6) {
        if (piVar5 != (int *)0x0) goto LAB_141451843;
        goto LAB_14145180f;
      }
      iVar1 = piVar5[6];
    }
  }
  piVar5 = (int *)0x0;
LAB_14145180f:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_141451843:
  local_58 = local_c8 + 4;
  local_c8[5] = 0xc;
  local_50 = piVar5 + 2;
  if (PairedRearChannelTypes._8_4_ != PairedRearChannelTypes._52_4_) {
    lVar4 = 0x1553b3458;
    if (PairedRearChannelTypes._64_8_ != 0) {
      lVar4 = PairedRearChannelTypes._64_8_;
    }
    iVar1 = *(int *)(lVar4 + (ulonglong)(PairedRearChannelTypes._72_4_ - 1 & 0xe) * 4);
    while (iVar1 != -1) {
      piVar5 = (int *)((longlong)iVar1 * 0x20 + PairedRearChannelTypes._0_8_);
      if (*piVar5 == 0xe) {
        if (piVar5 != (int *)0x0) goto LAB_1414518e3;
        goto LAB_1414518af;
      }
      iVar1 = piVar5[6];
    }
  }
  piVar5 = (int *)0x0;
LAB_1414518af:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1414518e3:
  local_48 = local_c8 + 5;
  local_c8[6] = 0xe;
  local_40 = piVar5 + 2;
  if (PairedRearChannelTypes._8_4_ != PairedRearChannelTypes._52_4_) {
    lVar4 = 0x1553b3458;
    if (PairedRearChannelTypes._64_8_ != 0) {
      lVar4 = PairedRearChannelTypes._64_8_;
    }
    iVar1 = *(int *)(lVar4 + (ulonglong)(PairedRearChannelTypes._72_4_ - 1 & 0xc) * 4);
    while (iVar1 != -1) {
      piVar5 = (int *)((longlong)iVar1 * 0x20 + PairedRearChannelTypes._0_8_);
      if (*piVar5 == 0xc) {
        if (piVar5 != (int *)0x0) goto LAB_141451983;
        goto LAB_14145194f;
      }
      iVar1 = piVar5[6];
    }
  }
  piVar5 = (int *)0x0;
LAB_14145194f:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_141451983:
  local_38 = local_c8 + 6;
  local_c8[7] = 0xd;
  local_30 = piVar5 + 2;
  if (PairedRearChannelTypes._8_4_ != PairedRearChannelTypes._52_4_) {
    lVar4 = 0x1553b3458;
    if (PairedRearChannelTypes._64_8_ != 0) {
      lVar4 = PairedRearChannelTypes._64_8_;
    }
    iVar1 = *(int *)(lVar4 + (ulonglong)(PairedRearChannelTypes._72_4_ - 1 & 0xd) * 4);
    while (iVar1 != -1) {
      piVar5 = (int *)((longlong)iVar1 * 0x20 + PairedRearChannelTypes._0_8_);
      if (*piVar5 == 0xd) {
        if (piVar5 != (int *)0x0) goto LAB_141451a05;
        goto LAB_1414519df;
      }
      iVar1 = piVar5[6];
    }
  }
  piVar5 = (int *)0x0;
LAB_1414519df:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_141451a05:
  local_28 = local_c8 + 7;
  local_20 = piVar5 + 2;
  local_a8._First = &local_98;
  local_a8._Last = &local_18;
  TMap<enum_EAudioMixerChannel::Type,TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>,0>_>
  ::
  TMap<enum_EAudioMixerChannel::Type,TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>,0>_>
            (&PairedFlippedRearChannelTypes,&local_a8);
  atexit(_dynamic_atexit_destructor_for__PairedFlippedRearChannelTypes__);
  return;
}

// `dynamic_initializer_for_'PairedRearChannelTypes'' @ 141451ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Audio::SubmixChannelFormatConverterPrivate::_dynamic_initializer_for__PairedRearChannelTypes__(void)

{
  undefined1 auStackY_208 [32];
  Type local_1c8 [8];
  ForAnyElementType local_1a8;
  undefined4 local_1a0;
  int local_19c;
  ForAnyElementType local_198;
  undefined4 local_190;
  int local_18c;
  ForAnyElementType local_188;
  undefined4 local_180;
  int local_17c;
  ForAnyElementType local_178;
  undefined4 local_170;
  int local_16c;
  ForAnyElementType local_168;
  undefined4 local_160;
  int local_15c;
  ForAnyElementType local_158;
  undefined4 local_150;
  int local_14c;
  ForAnyElementType local_148;
  undefined4 local_140;
  int local_13c;
  TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> local_138;
  initializer_list<TPairInitializer<EAudioMixerChannel::Type_const_&,TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>_const_&>_>
  local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  TPairInitializer<EAudioMixerChannel::Type_const_&,TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>_const_&>
  local_98;
  Type *local_88;
  ForAnyElementType *local_80;
  Type *local_78;
  ForAnyElementType *local_70;
  Type *local_68;
  ForAnyElementType *local_60;
  Type *local_58;
  ForAnyElementType *local_50;
  Type *local_48;
  ForAnyElementType *local_40;
  Type *local_38;
  ForAnyElementType *local_30;
  Type *local_28;
  ForAnyElementType *local_20;
  TPairInitializer<EAudioMixerChannel::Type_const_&,TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>_const_&>
  local_18;
  
  local_18.Key = (Type *)(__security_cookie.value ^ (ulonglong)auStackY_208);
  local_118 = 4;
  local_1c8[0] = DefaultChannel;
  uStack_114 = 9;
  local_110 = 0xf;
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,3,0,&local_138.AllocatorInstance,3,&local_138.ArrayMax);
  local_108 = 5;
  *(ulonglong *)local_138.AllocatorInstance.Data = CONCAT44(uStack_114,local_118);
  *(undefined4 *)(local_138.AllocatorInstance.Data + 8) = local_110;
  local_98.Key = local_1c8;
  local_98.Value = &local_138;
  local_1c8[1] = 1;
  uStack_104 = 10;
  local_100 = 0x11;
  local_148.Data = (FScriptContainerElement *)0x0;
  local_140 = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,3,0,&local_148,3,&local_13c);
  local_f8 = 8;
  *(ulonglong *)local_148.Data = CONCAT44(uStack_104,local_108);
  *(undefined4 *)(local_148.Data + 8) = local_100;
  local_88 = local_1c8 + 1;
  local_80 = &local_148;
  local_1c8[2] = 2;
  uStack_f4 = 0xb;
  local_f0 = 0x10;
  local_158.Data = (FScriptContainerElement *)0x0;
  local_150 = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,3,0,&local_158,3,&local_14c);
  local_e8 = 4;
  *(ulonglong *)local_158.Data = CONCAT44(uStack_f4,local_f8);
  *(undefined4 *)(local_158.Data + 8) = local_f0;
  local_78 = local_1c8 + 2;
  local_70 = &local_158;
  local_1c8[3] = 6;
  uStack_e4 = 9;
  local_e0 = 0xf;
  local_168.Data = (FScriptContainerElement *)0x0;
  local_160 = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,3,0,&local_168,3,&local_15c);
  local_d8 = 5;
  *(ulonglong *)local_168.Data = CONCAT44(uStack_e4,local_e8);
  *(undefined4 *)(local_168.Data + 8) = local_e0;
  local_68 = local_1c8 + 3;
  local_60 = &local_168;
  local_1c8[4] = 7;
  uStack_d4 = 10;
  local_d0 = 0x11;
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170 = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,3,0,&local_178,3,&local_16c);
  local_c8 = 4;
  *(ulonglong *)local_178.Data = CONCAT44(uStack_d4,local_d8);
  *(undefined4 *)(local_178.Data + 8) = local_d0;
  local_58 = local_1c8 + 4;
  local_50 = &local_178;
  local_1c8[5] = 0xc;
  uStack_c4 = 9;
  local_c0 = 0xf;
  local_188.Data = (FScriptContainerElement *)0x0;
  local_180 = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,3,0,&local_188,3,&local_17c);
  local_b8 = 5;
  *(ulonglong *)local_188.Data = CONCAT44(uStack_c4,local_c8);
  *(undefined4 *)(local_188.Data + 8) = local_c0;
  local_48 = local_1c8 + 5;
  local_40 = &local_188;
  local_1c8[6] = 0xe;
  uStack_b4 = 10;
  local_b0 = 0x11;
  local_198.Data = (FScriptContainerElement *)0x0;
  local_190 = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,3,0,&local_198,3,&local_18c);
  local_a8 = 8;
  *(ulonglong *)local_198.Data = CONCAT44(uStack_b4,local_b8);
  *(undefined4 *)(local_198.Data + 8) = local_b0;
  local_38 = local_1c8 + 6;
  local_30 = &local_198;
  local_1c8[7] = 0xd;
  uStack_a4 = 0xb;
  local_a0 = 0x10;
  local_1a8.Data = (FScriptContainerElement *)0x0;
  local_1a0 = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,3,0,&local_1a8,3,&local_19c);
  *(ulonglong *)local_1a8.Data = CONCAT44(uStack_a4,local_a8);
  *(undefined4 *)(local_1a8.Data + 8) = local_a0;
  local_28 = local_1c8 + 7;
  local_20 = &local_1a8;
  local_128._First = &local_98;
  local_128._Last = &local_18;
  TMap<enum_EAudioMixerChannel::Type,TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>,0>_>
  ::
  TMap<enum_EAudioMixerChannel::Type,TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>,0>_>
            (&PairedRearChannelTypes,&local_128);
  if (local_1a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data);
  }
  if (local_198.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data);
  }
  if (local_188.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data);
  }
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data);
  }
  if (local_168.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data);
  }
  if (local_158.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data);
  }
  if (local_148.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data);
  }
  if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__PairedRearChannelTypes__);
  return;
}

// `dynamic_initializer_for_'Resources'' @ 141451fe0

void __cdecl _dynamic_initializer_for__Resources__(void)

{
  atexit(_dynamic_atexit_destructor_for__Resources__);
  return;
}

// `dynamic_initializer_for_'ReverbOutputFormats'' @ 141452000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Audio::ConvolutionReverbIntrinsics::_dynamic_initializer_for__ReverbOutputFormats__(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 auStackY_1a8 [32];
  TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> local_148;
  ForAnyElementType local_138;
  undefined4 local_130;
  int local_12c;
  ForAnyElementType local_128;
  undefined4 local_120;
  int local_11c;
  ForAnyElementType local_118;
  undefined4 local_110;
  int local_10c;
  ForAnyElementType local_108;
  undefined4 local_100;
  int local_fc;
  ForAnyElementType local_f8;
  undefined4 local_f0;
  int local_ec;
  ForAnyElementType local_e8;
  undefined4 local_e0;
  int local_dc;
  ForAnyElementType local_d8;
  undefined4 local_d0;
  int local_cc;
  ForAnyElementType local_c8;
  undefined4 local_c0;
  int local_bc;
  undefined1 local_b8 [16];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_130 = 1;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  local_138.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,1,0,&local_138,1,&local_12c);
  *(undefined4 *)local_138.Data = 2;
  local_128.Data = (FScriptContainerElement *)0x0;
  local_120 = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,2,0,&local_128,2,&local_11c);
  *(undefined8 *)local_128.Data = 0x100000000;
  local_118.Data = (FScriptContainerElement *)0x0;
  local_110 = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,3,0,&local_118,3,&local_10c);
  uVar3 = _UNK_15314ddb8;
  uVar2 = ___xmm_0000000a000000090000000100000000;
  *(undefined8 *)local_118.Data = 0x200000000;
  *(undefined4 *)(local_118.Data + 8) = 1;
  local_108.Data = (FScriptContainerElement *)0x0;
  local_100 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_108,4,&local_fc);
  local_70 = 10;
  *(undefined8 *)local_108.Data = uVar2;
  *(undefined8 *)(local_108.Data + 8) = uVar3;
  uVar3 = _UNK_15314dda8;
  uVar2 = ___xmm_00000009000000020000000100000000;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,5,0,&local_f8,5,&local_ec);
  lVar6 = 9;
  local_88 = 9;
  uStack_84 = 10;
  *(undefined8 *)local_f8.Data = uVar2;
  *(undefined8 *)(local_f8.Data + 8) = uVar3;
  *(undefined4 *)(local_f8.Data + 0x10) = local_70;
  uVar3 = _UNK_150631e08;
  uVar2 = __xmm_00000003000000020000000100000000;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 6;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,6,0,&local_e8,6,&local_dc);
  local_a8 = 5;
  uStack_a4 = 9;
  *(undefined8 *)local_e8.Data = uVar2;
  *(undefined8 *)(local_e8.Data + 8) = uVar3;
  uVar3 = _UNK_150631e28;
  uVar2 = ___xmm_00000004000000020000000100000000;
  local_a0 = 10;
  *(ulonglong *)(local_e8.Data + 0x10) = CONCAT44(uStack_84,local_88);
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 7;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,7,0,&local_d8,7,&local_cc);
  uVar5 = _UNK_15314ddc8;
  uVar4 = ___xmm_0000000a000000090000000500000004;
  *(undefined8 *)local_d8.Data = uVar2;
  *(undefined8 *)(local_d8.Data + 8) = uVar3;
  uVar3 = _UNK_150631e08;
  uVar2 = __xmm_00000003000000020000000100000000;
  *(ulonglong *)(local_d8.Data + 0x10) = CONCAT44(uStack_a4,local_a8);
  *(undefined4 *)(local_d8.Data + 0x18) = local_a0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 8;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,8,0,&local_c8,8,&local_bc);
  *(undefined8 *)local_c8.Data = uVar2;
  *(undefined8 *)(local_c8.Data + 8) = uVar3;
  *(undefined8 *)(local_c8.Data + 0x10) = uVar4;
  *(undefined8 *)(local_c8.Data + 0x18) = uVar5;
  ReverbOutputFormats.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ReverbOutputFormats.ArrayNum = 9;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,9,0,&ReverbOutputFormats.AllocatorInstance,9,&ReverbOutputFormats.ArrayMax);
  ConstructItems<TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>,TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>,int>
            (ReverbOutputFormats.AllocatorInstance.Data,&local_148,9);
  puVar7 = local_b8;
  do {
    puVar1 = (undefined8 *)(puVar7 + -0x10);
    puVar7 = puVar7 + -0x10;
    lVar6 = lVar6 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar6 != 0);
  atexit(_dynamic_atexit_destructor_for__ReverbOutputFormats__);
  return;
}

// `dynamic_initializer_for_'SourceEffectEnvFollowerNotifier'' @ 1414523b0

void __cdecl _dynamic_initializer_for__SourceEffectEnvFollowerNotifier__(void)

{
  atexit(_dynamic_atexit_destructor_for__SourceEffectEnvFollowerNotifier__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h__Script_Synthesis_2092154829'' @ 1414523d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h__Script_Synthesis_2092154829__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h__Script_Synthesis_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h__Script_Synthesis_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h__Script_Synthesis_1418423956'' @ 141452420

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h__Script_Synthesis_1418423956__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h__Script_Synthesis_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h__Script_Synthesis_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h__Script_Synthesis_1131124893'' @ 141452470

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h__Script_Synthesis_1131124893__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h__Script_Synthesis_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h__Script_Synthesis_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h__Script_Synthesis_3655795864'' @ 1414524c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h__Script_Synthesis_3655795864__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h__Script_Synthesis_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h__Script_Synthesis_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h__Script_Synthesis_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEQ_h__Script_Synthesis_2627170791'' @ 141452510

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEQ_h__Script_Synthesis_2627170791__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEQ_h__Script_Synthesis_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEQ_h__Script_Synthesis_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h__Script_Synthesis_1059047133'' @ 141452560

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h__Script_Synthesis_1059047133__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h__Script_Synthesis_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h__Script_Synthesis_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h__Script_Synthesis_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h__Script_Synthesis_1684958317'' @ 1414525b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h__Script_Synthesis_1684958317__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h__Script_Synthesis_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h__Script_Synthesis_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h__Script_Synthesis_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFoldbackDistortion_h__Script_Synthesis_1948987645'' @ 141452600

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFoldbackDistortion_h__Script_Synthesis_1948987645__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFoldbackDistortion_h__Script_Synthesis_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFoldbackDistortion_h__Script_Synthesis_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h__Script_Synthesis_3845005635'' @ 141452650

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h__Script_Synthesis_3845005635__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h__Script_Synthesis_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h__Script_Synthesis_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h__Script_Synthesis_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMotionFilter_h__Script_Synthesis_877512155'' @ 1414526a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMotionFilter_h__Script_Synthesis_877512155__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMotionFilter_h__Script_Synthesis_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMotionFilter_h__Script_Synthesis_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMotionFilter_h__Script_Synthesis_Statics
             ::EnumInfo,5);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPanner_h__Script_Synthesis_3187270437'' @ 1414526f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPanner_h__Script_Synthesis_3187270437__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPanner_h__Script_Synthesis_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPanner_h__Script_Synthesis_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPhaser_h__Script_Synthesis_3063426477'' @ 141452740

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPhaser_h__Script_Synthesis_3063426477__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPhaser_h__Script_Synthesis_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPhaser_h__Script_Synthesis_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPhaser_h__Script_Synthesis_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h__Script_Synthesis_1952428448'' @ 141452790

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h__Script_Synthesis_1952428448__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h__Script_Synthesis_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h__Script_Synthesis_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h__Script_Synthesis_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectSimpleDelay_h__Script_Synthesis_151251199'' @ 1414527e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectSimpleDelay_h__Script_Synthesis_151251199__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectSimpleDelay_h__Script_Synthesis_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectSimpleDelay_h__Script_Synthesis_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectStereoDelay_h__Script_Synthesis_61797393'' @ 141452830

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectStereoDelay_h__Script_Synthesis_61797393__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectStereoDelay_h__Script_Synthesis_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectStereoDelay_h__Script_Synthesis_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectStereoDelay_h__Script_Synthesis_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectWaveShaper_h__Script_Synthesis_1267356591'' @ 141452880

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectWaveShaper_h__Script_Synthesis_1267356591__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectWaveShaper_h__Script_Synthesis_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectWaveShaper_h__Script_Synthesis_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h__Script_Synthesis_2143267096'' @ 1414528d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h__Script_Synthesis_2143267096__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h__Script_Synthesis_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h__Script_Synthesis_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectDelay_h__Script_Synthesis_1515378798'' @ 141452920

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectDelay_h__Script_Synthesis_1515378798__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectDelay_h__Script_Synthesis_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectDelay_h__Script_Synthesis_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h__Script_Synthesis_431226041'' @ 141452970

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h__Script_Synthesis_431226041__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h__Script_Synthesis_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h__Script_Synthesis_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h__Script_Synthesis_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFlexiverb_h__Script_Synthesis_1014293411'' @ 1414529c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFlexiverb_h__Script_Synthesis_1014293411__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFlexiverb_h__Script_Synthesis_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFlexiverb_h__Script_Synthesis_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h__Script_Synthesis_831426478'' @ 141452a10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h__Script_Synthesis_831426478__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h__Script_Synthesis_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h__Script_Synthesis_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoDelay_h__Script_Synthesis_2391095333'' @ 141452a60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoDelay_h__Script_Synthesis_2391095333__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoDelay_h__Script_Synthesis_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoDelay_h__Script_Synthesis_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoToQuad_h__Script_Synthesis_2956733334'' @ 141452ab0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoToQuad_h__Script_Synthesis_2956733334__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoToQuad_h__Script_Synthesis_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoToQuad_h__Script_Synthesis_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h__Script_Synthesis_2302999929'' @ 141452b00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h__Script_Synthesis_2302999929__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h__Script_Synthesis_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h__Script_Synthesis_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h__Script_Synthesis_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h__Script_Synthesis_3443514460'' @ 141452b50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h__Script_Synthesis_3443514460__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h__Script_Synthesis_Statics
             ::ClassInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h__Script_Synthesis_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentGranulator_h__Script_Synthesis_2549554991'' @ 141452ba0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentGranulator_h__Script_Synthesis_2549554991__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentGranulator_h__Script_Synthesis_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentGranulator_h__Script_Synthesis_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h__Script_Synthesis_1060201693'' @ 141452bf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h__Script_Synthesis_1060201693__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h__Script_Synthesis_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h__Script_Synthesis_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentToneGenerator_h__Script_Synthesis_2479692059'' @ 141452c40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentToneGenerator_h__Script_Synthesis_2479692059__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentToneGenerator_h__Script_Synthesis_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h__Script_Synthesis_95357899'' @ 141452c80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h__Script_Synthesis_95357899__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h__Script_Synthesis_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h__Script_Synthesis_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EffectConvolutionReverb_h__Script_Synthesis_3970673814'' @ 141452cd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EffectConvolutionReverb_h__Script_Synthesis_3970673814__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EffectConvolutionReverb_h__Script_Synthesis_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EffectConvolutionReverb_h__Script_Synthesis_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EpicSynth1Types_h__Script_Synthesis_1073992433'' @ 141452d20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EpicSynth1Types_h__Script_Synthesis_1073992433__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EpicSynth1Types_h__Script_Synthesis_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EpicSynth1Types_h__Script_Synthesis_Statics
             ::EnumInfo,0xb);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_SynthesisBlueprintUtilities_h__Script_Synthesis_2134940388'' @ 141452d70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_SynthesisBlueprintUtilities_h__Script_Synthesis_2134940388__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_SynthesisBlueprintUtilities_h__Script_Synthesis_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSliderStyle_h__Script_Synthesis_1658412721'' @ 141452db0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSliderStyle_h__Script_Synthesis_1658412721__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSliderStyle_h__Script_Synthesis_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h__Script_Synthesis_3711409516'' @ 141452df0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h__Script_Synthesis_3711409516__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h__Script_Synthesis_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnobStyle_h__Script_Synthesis_4044759498'' @ 141452e30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnobStyle_h__Script_Synthesis_4044759498__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnobStyle_h__Script_Synthesis_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnobStyle_h__Script_Synthesis_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h__Script_Synthesis_131268248'' @ 141452e80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h__Script_Synthesis_131268248__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h__Script_Synthesis_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthSlateStyle_h__Script_Synthesis_3021065924'' @ 141452ec0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthSlateStyle_h__Script_Synthesis_3021065924__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Synthesis",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthSlateStyle_h__Script_Synthesis_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthSlateStyle_h__Script_Synthesis_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_Synthesis'' @ 141452f10

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_Synthesis__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xbc59b11b;
  local_res8[0].DeclarationsHash = 0x18735444;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_Synthesis,L"/Script/Synthesis",
             &Z_Registration_Info_UPackage__Script_Synthesis,local_res8);
  return;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_GetKeyFrameValuesForTable @ 14f09e040

UFunction * __cdecl
Z_Construct_UFunction_USynthComponentMonoWaveTable_GetKeyFrameValuesForTable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_GetKeyFrameValuesForTable_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetChorusFrequency @ 14f09e080

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetChorusFrequency(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetChorusFrequency_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_GetMaxTableIndex @ 14f09e0f0

UFunction * __cdecl Z_Construct_UFunction_USynthComponentMonoWaveTable_GetMaxTableIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_GetMaxTableIndex_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetDecayTime @ 14f09e170

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetDecayTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetDecayTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_LegatoEnabled_SetBit @ 14f09e220

void __cdecl
Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato_Statics::NewProp_LegatoEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_GetNumTableEntries @ 14f09e270

UFunction * __cdecl Z_Construct_UFunction_USynthComponentMonoWaveTable_GetNumTableEntries(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_GetNumTableEntries_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressPercent @ 14f09e2e0

UFunction * __cdecl Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressPercent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato @ 14f09e320

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOff @ 14f09e440

UFunction * __cdecl Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOff(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOff_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsEnabled_SetBit @ 14f09e480

void __cdecl
Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::NewProp_bIsEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14f09e490

void __cdecl
Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 5) = 1;
  return;
}

// Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressTime @ 14f09e4a0

UFunction * __cdecl Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressTime_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOn @ 14f09e4e0

UFunction * __cdecl Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOn(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOn_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch @ 14f09e520

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthSamplePlayer_GetSampleDuration @ 14f09e560

UFunction * __cdecl Z_Construct_UFunction_USynthSamplePlayer_GetSampleDuration(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthSamplePlayer_GetSampleDuration_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_RefreshAllWaveTables @ 14f09e5a0

UFunction * __cdecl Z_Construct_UFunction_USynthComponentMonoWaveTable_RefreshAllWaveTables(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_RefreshAllWaveTables_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnablePolyphony_SetBit @ 14f09e5e0

void __cdecl
Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony_Statics::
NewProp_bEnablePolyphony_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14f09e5f0

void __cdecl
Z_Construct_UFunction_USynthSamplePlayer_IsLoaded_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony @ 14f09e640

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthSamplePlayer_IsLoaded @ 14f09e680

UFunction * __cdecl Z_Construct_UFunction_USynthSamplePlayer_IsLoaded(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthSamplePlayer_IsLoaded_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_RefreshWaveTable @ 14f09e6c0

UFunction * __cdecl Z_Construct_UFunction_USynthComponentMonoWaveTable_RefreshWaveTable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_RefreshWaveTable_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_RetriggerEnabled_SetBit @ 14f09e700

void __cdecl
Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger_Statics::
NewProp_RetriggerEnabled_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bWrap_SetBit @ 14f09e710

void __cdecl
Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::NewProp_bWrap_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 5) = 1;
  return;
}

// Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger @ 14f09e7e0

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeAttackTime @ 14f09e820

UFunction * __cdecl
Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeAttackTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeAttackTime_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_EnableUnison_SetBit @ 14f09e860

void __cdecl
Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison_Statics::NewProp_EnableUnison_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_USynthSamplePlayer_SeekToTime @ 14f09e870

UFunction * __cdecl Z_Construct_UFunction_USynthSamplePlayer_SeekToTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison @ 14f09e8b0

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasDepth @ 14f09e8f0

UFunction * __cdecl Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasDepth(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasDepth_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USubmixEffectMultibandCompressorPreset @ 14f09e930

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USubmixEffectMultibandCompressorPreset(void)

{
  if (Z_Registration_Info_UClass_USubmixEffectMultibandCompressorPreset.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USubmixEffectMultibandCompressorPreset.OuterSingleton,
               &Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USubmixEffectMultibandCompressorPreset.OuterSingleton;
}

// Z_Construct_UScriptStruct_FDynamicsBandSettings @ 14f09e970

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDynamicsBandSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDynamicsBandSettings.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDynamicsBandSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDynamicsBandSettings.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FDynamicsBandSettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewProp_bInBiasInvert_SetBit @ 14f09e9f0

void __cdecl
Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasInvert_Statics::
NewProp_bInBiasInvert_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings @ 14f09ea00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSubmixEffectMultibandCompressorSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSubmixEffectMultibandCompressorSettings.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSubmixEffectMultibandCompressorSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSubmixEffectMultibandCompressorSettings.InnerSingleton
    ;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UFunction_USynthSamplePlayer_SetPitch @ 14f09ea80

UFunction * __cdecl Z_Construct_UFunction_USynthSamplePlayer_SetPitch(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthSamplePlayer_SetPitch_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14f09eac0

void * __cdecl Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDynamicsBandSettings,&UE::CoreUObject::Private::Construct<FDynamicsBandSettings>,&UE::CoreUObject::Private::ConstructForTests<FDynamicsBandSettings>,&UE::CoreUObject::Private::Destruct<FDynamicsBandSettings>,&UE::CoreUObject::Private::Copy<FDynamicsBandSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm @ 14f09eb00

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bScrubMode_SetBit @ 14f09eb40

void __cdecl
Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode_Statics::NewProp_bScrubMode_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasInvert @ 14f09eb50

UFunction * __cdecl
Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasInvert(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasInvert_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode @ 14f09eb90

UFunction * __cdecl Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequency @ 14f09ebd0

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequency(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequency_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDecayTime @ 14f09ec10

UFunction * __cdecl Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDecayTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDecayTime_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthSamplePlayer_SetScrubTimeWidth @ 14f09ec50

UFunction * __cdecl Z_Construct_UFunction_USynthSamplePlayer_SetScrubTimeWidth(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthSamplePlayer_SetScrubTimeWidth_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequencyMod @ 14f09ec90

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequencyMod(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequencyMod_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDepth @ 14f09ecd0

UFunction * __cdecl Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDepth(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDepth_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInInvert_SetBit @ 14f09eec0

void __cdecl
Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeInvert_Statics::
NewProp_bInInvert_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_USynthSamplePlayer_SetSoundWave @ 14f09ef50

UFunction * __cdecl Z_Construct_UFunction_USynthSamplePlayer_SetSoundWave(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthSamplePlayer_SetSoundWave_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USourceEffectSimpleDelayPreset @ 14f09f000

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USourceEffectSimpleDelayPreset(void)

{
  if (Z_Registration_Info_UClass_USourceEffectSimpleDelayPreset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USourceEffectSimpleDelayPreset.OuterSingleton,
               &Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USourceEffectSimpleDelayPreset.OuterSingleton;
}

// Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings @ 14f09f040

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSourceEffectSimpleDelaySettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSourceEffectSimpleDelaySettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSourceEffectSimpleDelaySettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSourceEffectSimpleDelaySettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewProp_bAnalogMode_SetBit @ 14f09f0c0

void __cdecl
Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::
NewProp_bAnalogMode_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bFourPole_SetBit @ 14f09f0d0

void __cdecl
Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bFourPole_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewProp_bBypass_SetBit @ 14f09f0e0

void __cdecl
Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bBypass_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  return;
}

// Z_Construct_UFunction_UModularSynthComponent_SetFilterQ @ 14f09f0f0

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetFilterQ(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetFilterQ_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bDelayBasedOnDistance_SetBit @ 14f09f130

void __cdecl
Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::
NewProp_bDelayBasedOnDistance_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 1;
  return;
}

// NewProp_bUseDistanceOverride_SetBit @ 14f09f190

void __cdecl
Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::
NewProp_bUseDistanceOverride_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 2;
  return;
}

// NewStructOps @ 14f09f1a0

void * __cdecl
Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSourceEffectSimpleDelaySettings,&UE::CoreUObject::Private::Construct<FSourceEffectSimpleDelaySettings>,&UE::CoreUObject::Private::ConstructForTests<FSourceEffectSimpleDelaySettings>,&UE::CoreUObject::Private::Destruct<FSourceEffectSimpleDelaySettings>,&UE::CoreUObject::Private::Copy<FSourceEffectSimpleDelaySettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeInvert @ 14f09f1e0

UFunction * __cdecl Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeInvert(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeInvert_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bKeyAudition_SetBit @ 14f09f220

void __cdecl
Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::
NewProp_bKeyAudition_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// NewStructOps @ 14f09f310

void * __cdecl
Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSubmixEffectMultibandCompressorSettings,&UE::CoreUObject::Private::Construct<FSubmixEffectMultibandCompressorSettings>,&UE::CoreUObject::Private::ConstructForTests<FSubmixEffectMultibandCompressorSettings>,&UE::CoreUObject::Private::Destruct<FSubmixEffectMultibandCompressorSettings>,&UE::CoreUObject::Private::Copy<FSubmixEffectMultibandCompressorSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UModularSynthComponent_SetFilterQMod @ 14f09f350

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetFilterQMod(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetFilterQMod_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeReleaseTime @ 14f09f390

UFunction * __cdecl
Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeReleaseTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeReleaseTime_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetFilterType @ 14f09f410

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetFilterType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetFilterType_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeSustainGain @ 14f09f450

UFunction * __cdecl
Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeSustainGain(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeSustainGain_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14f09f5d0

void __cdecl
Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveInterpolationType_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UModularSynthComponent_SetGainDb @ 14f09f5e0

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetGainDb(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetGainDb_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveInterpolationType @ 14f09f620

UFunction * __cdecl
Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveInterpolationType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveInterpolationType_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings @ 14f09f660

UFunction * __cdecl Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency @ 14f09f6a0

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14f09f6e0

void __cdecl
Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveTangent_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_ResetKey @ 14f09f6f0

UFunction * __cdecl Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_ResetKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_ResetKey_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USubmixEffectConvolutionReverbPreset @ 14f09f730

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USubmixEffectConvolutionReverbPreset(void)

{
  if (Z_Registration_Info_UClass_USubmixEffectConvolutionReverbPreset.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USubmixEffectConvolutionReverbPreset.OuterSingleton,
               &Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USubmixEffectConvolutionReverbPreset.OuterSingleton;
}

// Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings @ 14f09f770

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSubmixEffectConvolutionReverbSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSubmixEffectConvolutionReverbSettings.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSubmixEffectConvolutionReverbSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSubmixEffectConvolutionReverbSettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveTangent @ 14f09f7f0

UFunction * __cdecl Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveTangent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveTangent_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bBypass_SetBit @ 14f09f830

void __cdecl
Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bBypass_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bMixInputChannelFormatToImpulseResponseFormat_SetBit @ 14f09f9c0

void __cdecl
Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::
NewProp_bMixInputChannelFormatToImpulseResponseFormat_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  return;
}

// NewProp_bMixReverbOutputToOutputChannelFormat_SetBit @ 14f09f9d0

void __cdecl
Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::
NewProp_bMixReverbOutputToOutputChannelFormat_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xe) = 1;
  return;
}

// Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod @ 14f09f9e0

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bInvertRearChannelBleedPhase_SetBit @ 14f09fa20

void __cdecl
Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::
NewProp_bInvertRearChannelBleedPhase_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetAudioBus @ 14f09fa30

UFunction * __cdecl Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetAudioBus(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetAudioBus_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14f09fa70

void * __thiscall
FSynthesisModule::_scalar_deleting_destructor_(FSynthesisModule *this,uint param_1)

{
  *this = (FSynthesisModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// NewProp_bSurroundRearChannelFlip_SetBit @ 14f09fab0

void __cdecl
Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::
NewProp_bSurroundRearChannelFlip_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x15) = 1;
  return;
}

// NewProp_AllowHardwareAcceleration_SetBit @ 14f09fac0

void __cdecl
Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::
NewProp_AllowHardwareAcceleration_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewStructOps @ 14f09fad0

void * __cdecl
Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSubmixEffectConvolutionReverbSettings,&UE::CoreUObject::Private::Construct<FSubmixEffectConvolutionReverbSettings>,&UE::CoreUObject::Private::ConstructForTests<FSubmixEffectConvolutionReverbSettings>,&UE::CoreUObject::Private::Destruct<FSubmixEffectConvolutionReverbSettings>,&UE::CoreUObject::Private::Copy<FSubmixEffectConvolutionReverbSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 14f09fbd0

void __cdecl
Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveValue_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetExternalSubmix @ 14f09fcb0

UFunction * __cdecl
Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetExternalSubmix(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetExternalSubmix_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetLFOGain @ 14f09fcf0

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetLFOGain(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetLFOGain_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveValue @ 14f09fd30

UFunction * __cdecl Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveValue_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings @ 14f09fdb0

UFunction * __cdecl Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod @ 14f09fdf0

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeAttackTime @ 14f09fe30

UFunction * __cdecl
Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeAttackTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeAttackTime_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasDepth @ 14f09fe90

UFunction * __cdecl
Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasDepth(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasDepth_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetLFOMode @ 14f09fef0

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetLFOMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetLFOMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UGranularSynth @ 14f09ff40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGranularSynth(void)

{
  if (Z_Registration_Info_UClass_UGranularSynth.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGranularSynth.OuterSingleton,
               &Z_Construct_UClass_UGranularSynth_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGranularSynth.OuterSingleton;
}

// Z_Construct_UEnum_Synthesis_EGranularSynthEnvelopeType @ 14f09ffc0

UEnum * __cdecl Z_Construct_UEnum_Synthesis_EGranularSynthEnvelopeType(void)

{
  if (Z_Registration_Info_UEnum_EGranularSynthEnvelopeType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGranularSynthEnvelopeType.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_EGranularSynthEnvelopeType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGranularSynthEnvelopeType.InnerSingleton;
}

// Z_Construct_UEnum_Synthesis_EGranularSynthSeekType @ 14f0a0000

UEnum * __cdecl Z_Construct_UEnum_Synthesis_EGranularSynthSeekType(void)

{
  if (Z_Registration_Info_UEnum_EGranularSynthSeekType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGranularSynthSeekType.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_EGranularSynthSeekType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGranularSynthSeekType.InnerSingleton;
}

// EGranularSynthEnvelopeType_StaticEnum @ 14f0a0040

UEnum * __cdecl EGranularSynthEnvelopeType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGranularSynthEnvelopeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_EGranularSynthEnvelopeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_EGranularSynthEnvelopeType,(UObject *)pUVar1,
                       L"EGranularSynthEnvelopeType");
  }
  return Z_Registration_Info_UEnum_EGranularSynthEnvelopeType.OuterSingleton;
}

// NewProp_bInBiasInvert_SetBit @ 14f0a00e0

void __cdecl
Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasInvert_Statics::
NewProp_bInBiasInvert_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasInvert @ 14f0a0130

UFunction * __cdecl
Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasInvert(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasInvert_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse @ 14f0a03a0

UFunction * __cdecl
Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch @ 14f0a03e0

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EGranularSynthSeekType_StaticEnum @ 14f0a0420

UEnum * __cdecl EGranularSynthSeekType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGranularSynthSeekType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_EGranularSynthSeekType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_EGranularSynthSeekType,(UObject *)pUVar1,
                       L"EGranularSynthSeekType");
  }
  return Z_Registration_Info_UEnum_EGranularSynthSeekType.OuterSingleton;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeDepth @ 14f0a0460

UFunction * __cdecl Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeDepth(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeDepth_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings @ 14f0a04a0

UFunction * __cdecl Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetLFOType @ 14f0a04e0

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetLFOType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetLFOType_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInInvert_SetBit @ 14f0a0520

void __cdecl
Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeInvert_Statics::
NewProp_bInInvert_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bEnableHardwareAcceleration_SetBit @ 14f0a0530

void __cdecl
Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::
NewProp_bEnableHardwareAcceleration_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa1) = 1;
  return;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeInvert @ 14f0a0540

UFunction * __cdecl Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeInvert(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeInvert_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGranularSynth_GetCurrentPlayheadTime @ 14f0a0580

UFunction * __cdecl Z_Construct_UFunction_UGranularSynth_GetCurrentPlayheadTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGranularSynth_GetCurrentPlayheadTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime @ 14f0a0600

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bInvert_SetBit @ 14f0a0640

void __cdecl
Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert_Statics::NewProp_bInvert_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopenDecayTime @ 14f0a0650

UFunction * __cdecl
Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopenDecayTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopenDecayTime_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGranularSynth_GetSampleDuration @ 14f0a0690

UFunction * __cdecl Z_Construct_UFunction_UGranularSynth_GetSampleDuration(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGranularSynth_GetSampleDuration_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert @ 14f0a0790

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14f0a07d0

void __cdecl
Z_Construct_UFunction_UGranularSynth_IsLoaded_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeReleaseTime @ 14f0a07e0

UFunction * __cdecl
Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeReleaseTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeReleaseTime_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGranularSynth_IsLoaded @ 14f0a08e0

UFunction * __cdecl Z_Construct_UFunction_UGranularSynth_IsLoaded(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UGranularSynth_IsLoaded_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch @ 14f0a0920

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bKill_SetBit @ 14f0a0960

void __cdecl
Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::NewProp_bKill_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeSustainGain @ 14f0a0970

UFunction * __cdecl
Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeSustainGain(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeSustainGain_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGranularSynth_NoteOff @ 14f0a09b0

UFunction * __cdecl Z_Construct_UFunction_UGranularSynth_NoteOff(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime @ 14f0a09f0

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequency @ 14f0a0a30

UFunction * __cdecl Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequency(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequency_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USourceEffectChorusPreset @ 14f0a0a70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USourceEffectChorusPreset(void)

{
  if (Z_Registration_Info_UClass_USourceEffectChorusPreset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USourceEffectChorusPreset.OuterSingleton,
               &Z_Construct_UClass_USourceEffectChorusPreset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USourceEffectChorusPreset.OuterSingleton;
}

// Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings @ 14f0a0ab0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSourceEffectChorusBaseSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSourceEffectChorusBaseSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSourceEffectChorusBaseSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSourceEffectChorusBaseSettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FSourceEffectChorusSettings @ 14f0a0b30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSourceEffectChorusSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSourceEffectChorusSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSourceEffectChorusSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSourceEffectChorusSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSourceEffectChorusSettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth @ 14f0a0bb0

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGranularSynth_NoteOn @ 14f0a0bf0

UFunction * __cdecl Z_Construct_UFunction_UGranularSynth_NoteOn(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14f0a0c30

void * __cdecl Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSourceEffectChorusBaseSettings,&UE::CoreUObject::Private::Construct<FSourceEffectChorusBaseSettings>,&UE::CoreUObject::Private::ConstructForTests<FSourceEffectChorusBaseSettings>,&UE::CoreUObject::Private::Destruct<FSourceEffectChorusBaseSettings>,&UE::CoreUObject::Private::Copy<FSourceEffectChorusBaseSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyPitchBend @ 14f0a0cb0

UFunction * __cdecl Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyPitchBend(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyPitchBend_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInvert_SetBit @ 14f0a0d30

void __cdecl
Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert_Statics::NewProp_bInvert_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UEnum_Synthesis_ESynth1OscType @ 14f0a0d40

UEnum * __cdecl Z_Construct_UEnum_Synthesis_ESynth1OscType(void)

{
  if (Z_Registration_Info_UEnum_ESynth1OscType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESynth1OscType.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_ESynth1OscType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESynth1OscType.InnerSingleton;
}

// Z_Construct_UEnum_Synthesis_ESynth1PatchDestination @ 14f0a0d80

UEnum * __cdecl Z_Construct_UEnum_Synthesis_ESynth1PatchDestination(void)

{
  if (Z_Registration_Info_UEnum_ESynth1PatchDestination.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESynth1PatchDestination.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_ESynth1PatchDestination_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESynth1PatchDestination.InnerSingleton;
}

// Z_Construct_UEnum_Synthesis_ESynth1PatchSource @ 14f0a0dc0

UEnum * __cdecl Z_Construct_UEnum_Synthesis_ESynth1PatchSource(void)

{
  if (Z_Registration_Info_UEnum_ESynth1PatchSource.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESynth1PatchSource.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_ESynth1PatchSource_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESynth1PatchSource.InnerSingleton;
}

// Z_Construct_UEnum_Synthesis_ESynthFilterAlgorithm @ 14f0a0e00

UEnum * __cdecl Z_Construct_UEnum_Synthesis_ESynthFilterAlgorithm(void)

{
  if (Z_Registration_Info_UEnum_ESynthFilterAlgorithm.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESynthFilterAlgorithm.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_ESynthFilterAlgorithm_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESynthFilterAlgorithm.InnerSingleton;
}

// Z_Construct_UEnum_Synthesis_ESynthFilterType @ 14f0a0e40

UEnum * __cdecl Z_Construct_UEnum_Synthesis_ESynthFilterType(void)

{
  if (Z_Registration_Info_UEnum_ESynthFilterType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESynthFilterType.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_ESynthFilterType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESynthFilterType.InnerSingleton;
}

// Z_Construct_UEnum_Synthesis_ESynthLFOMode @ 14f0a0e80

UEnum * __cdecl Z_Construct_UEnum_Synthesis_ESynthLFOMode(void)

{
  if (Z_Registration_Info_UEnum_ESynthLFOMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESynthLFOMode.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_ESynthLFOMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESynthLFOMode.InnerSingleton;
}

// Z_Construct_UEnum_Synthesis_ESynthLFOPatchType @ 14f0a0ec0

UEnum * __cdecl Z_Construct_UEnum_Synthesis_ESynthLFOPatchType(void)

{
  if (Z_Registration_Info_UEnum_ESynthLFOPatchType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESynthLFOPatchType.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_ESynthLFOPatchType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESynthLFOPatchType.InnerSingleton;
}

// Z_Construct_UEnum_Synthesis_ESynthLFOType @ 14f0a0f00

UEnum * __cdecl Z_Construct_UEnum_Synthesis_ESynthLFOType(void)

{
  if (Z_Registration_Info_UEnum_ESynthLFOType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESynthLFOType.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_ESynthLFOType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESynthLFOType.InnerSingleton;
}

// Z_Construct_UEnum_Synthesis_ESynthModEnvBiasPatch @ 14f0a0f40

UEnum * __cdecl Z_Construct_UEnum_Synthesis_ESynthModEnvBiasPatch(void)

{
  if (Z_Registration_Info_UEnum_ESynthModEnvBiasPatch.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESynthModEnvBiasPatch.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_ESynthModEnvBiasPatch_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESynthModEnvBiasPatch.InnerSingleton;
}

// Z_Construct_UEnum_Synthesis_ESynthModEnvPatch @ 14f0a0f80

UEnum * __cdecl Z_Construct_UEnum_Synthesis_ESynthModEnvPatch(void)

{
  if (Z_Registration_Info_UEnum_ESynthModEnvPatch.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESynthModEnvPatch.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_ESynthModEnvPatch_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESynthModEnvPatch.InnerSingleton;
}

// Z_Construct_UEnum_Synthesis_ESynthStereoDelayMode @ 14f0a0fc0

UEnum * __cdecl Z_Construct_UEnum_Synthesis_ESynthStereoDelayMode(void)

{
  if (Z_Registration_Info_UEnum_ESynthStereoDelayMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESynthStereoDelayMode.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_ESynthStereoDelayMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESynthStereoDelayMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FPatchId @ 14f0a1000

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPatchId(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPatchId.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPatchId.InnerSingleton,
               &Z_Construct_UScriptStruct_FPatchId_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPatchId.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPatchId.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FSynth1PatchCable @ 14f0a1080

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSynth1PatchCable(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSynth1PatchCable.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSynth1PatchCable.InnerSingleton,
               &Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSynth1PatchCable.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSynth1PatchCable.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UPackage__Script_Synthesis @ 14f0a1100

UPackage * __cdecl Z_Construct_UPackage__Script_Synthesis(void)

{
  if (Z_Registration_Info_UPackage__Script_Synthesis.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_Synthesis.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_Synthesis.OuterSingleton;
}

// Z_Construct_UFunction_UGranularSynth_SetAttackTime @ 14f0a1140

UFunction * __cdecl Z_Construct_UFunction_UGranularSynth_SetAttackTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGranularSynth_SetAttackTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert @ 14f0a1180

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyWithMidiNote @ 14f0a11c0

UFunction * __cdecl
Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyWithMidiNote(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyWithMidiNote_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// ESynth1OscType_StaticEnum @ 14f0a1200

UEnum * __cdecl ESynth1OscType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESynth1OscType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESynth1OscType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynth1OscType,(UObject *)pUVar1,
                       L"ESynth1OscType");
  }
  return Z_Registration_Info_UEnum_ESynth1OscType.OuterSingleton;
}

// Z_Construct_UClass_USourceEffectStereoDelayPreset @ 14f0a12d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USourceEffectStereoDelayPreset(void)

{
  if (Z_Registration_Info_UClass_USourceEffectStereoDelayPreset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USourceEffectStereoDelayPreset.OuterSingleton,
               &Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USourceEffectStereoDelayPreset.OuterSingleton;
}

// Z_Construct_UEnum_Synthesis_EStereoDelayFiltertype @ 14f0a1310

UEnum * __cdecl Z_Construct_UEnum_Synthesis_EStereoDelayFiltertype(void)

{
  if (Z_Registration_Info_UEnum_EStereoDelayFiltertype.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStereoDelayFiltertype.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_EStereoDelayFiltertype_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EStereoDelayFiltertype.InnerSingleton;
}

// Z_Construct_UEnum_Synthesis_EStereoDelaySourceEffect @ 14f0a1350

UEnum * __cdecl Z_Construct_UEnum_Synthesis_EStereoDelaySourceEffect(void)

{
  if (Z_Registration_Info_UEnum_EStereoDelaySourceEffect.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStereoDelaySourceEffect.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_EStereoDelaySourceEffect_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EStereoDelaySourceEffect.InnerSingleton;
}

// Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings @ 14f0a1390

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSourceEffectStereoDelaySettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSourceEffectStereoDelaySettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSourceEffectStereoDelaySettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSourceEffectStereoDelaySettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UFunction_UGranularSynth_SetDecayTime @ 14f0a1410

UFunction * __cdecl Z_Construct_UFunction_UGranularSynth_SetDecayTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGranularSynth_SetDecayTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EStereoDelaySourceEffect_StaticEnum @ 14f0a1450

UEnum * __cdecl EStereoDelaySourceEffect_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStereoDelaySourceEffect.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_EStereoDelaySourceEffect.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_EStereoDelaySourceEffect,(UObject *)pUVar1,
                       L"EStereoDelaySourceEffect");
  }
  return Z_Registration_Info_UEnum_EStereoDelaySourceEffect.OuterSingleton;
}

// Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch @ 14f0a1490

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetLowPassFilterResonance @ 14f0a14d0

UFunction * __cdecl
Z_Construct_UFunction_USynthComponentMonoWaveTable_SetLowPassFilterResonance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetLowPassFilterResonance_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// ESynthLFOType_StaticEnum @ 14f0a1510

UEnum * __cdecl ESynthLFOType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESynthLFOType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESynthLFOType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthLFOType,(UObject *)pUVar1,L"ESynthLFOType")
    ;
  }
  return Z_Registration_Info_UEnum_ESynthLFOType.OuterSingleton;
}

// EStereoDelayFiltertype_StaticEnum @ 14f0a1590

UEnum * __cdecl EStereoDelayFiltertype_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStereoDelayFiltertype.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_EStereoDelayFiltertype.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_EStereoDelayFiltertype,(UObject *)pUVar1,
                       L"EStereoDelayFiltertype");
  }
  return Z_Registration_Info_UEnum_EStereoDelayFiltertype.OuterSingleton;
}

// Z_Construct_UFunction_UGranularSynth_SetGrainDuration @ 14f0a15d0

UFunction * __cdecl Z_Construct_UFunction_UGranularSynth_SetGrainDuration(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime @ 14f0a1610

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14f0a1650

void * __cdecl Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x228;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSourceEffectChorusSettings,&UE::CoreUObject::Private::Construct<FSourceEffectChorusSettings>,&UE::CoreUObject::Private::ConstructForTests<FSourceEffectChorusSettings>,&UE::CoreUObject::Private::Destruct<FSourceEffectChorusSettings>,&UE::CoreUObject::Private::Copy<FSourceEffectChorusSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeAttackTime @ 14f0a1690

UFunction * __cdecl
Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeAttackTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeAttackTime_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USourceEffectEQPreset @ 14f0a16d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USourceEffectEQPreset(void)

{
  if (Z_Registration_Info_UClass_USourceEffectEQPreset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USourceEffectEQPreset.OuterSingleton,
               &Z_Construct_UClass_USourceEffectEQPreset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USourceEffectEQPreset.OuterSingleton;
}

// Z_Construct_UScriptStruct_FSourceEffectEQBand @ 14f0a1710

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSourceEffectEQBand(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSourceEffectEQBand.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSourceEffectEQBand.InnerSingleton,
               &Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSourceEffectEQBand.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FSourceEffectEQBand.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FSourceEffectEQSettings @ 14f0a1790

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSourceEffectEQSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSourceEffectEQSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSourceEffectEQSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSourceEffectEQSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSourceEffectEQSettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// ESynthLFOMode_StaticEnum @ 14f0a18d0

UEnum * __cdecl ESynthLFOMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESynthLFOMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESynthLFOMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthLFOMode,(UObject *)pUVar1,L"ESynthLFOMode")
    ;
  }
  return Z_Registration_Info_UEnum_ESynthLFOMode.OuterSingleton;
}

// NewProp_bEnabled_SetBit @ 14f0a1910

void __cdecl
Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) | 1;
  return;
}

// NewStructOps @ 14f0a1920

void * __cdecl Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSourceEffectEQBand,&UE::CoreUObject::Private::Construct<FSourceEffectEQBand>,&UE::CoreUObject::Private::ConstructForTests<FSourceEffectEQBand>,&UE::CoreUObject::Private::Destruct<FSourceEffectEQBand>,&UE::CoreUObject::Private::Copy<FSourceEffectEQBand>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bFilterEnabled_SetBit @ 14f0a1960

void __cdecl
Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_bFilterEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain @ 14f0a1970

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType @ 14f0a19b0

UFunction * __cdecl Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasDepth @ 14f0a19f0

UFunction * __cdecl
Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasDepth(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasDepth_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14f0a1a30

void * __cdecl
Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x24;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSourceEffectStereoDelaySettings,&UE::CoreUObject::Private::Construct<FSourceEffectStereoDelaySettings>,&UE::CoreUObject::Private::ConstructForTests<FSourceEffectStereoDelaySettings>,&UE::CoreUObject::Private::Destruct<FSourceEffectStereoDelaySettings>,&UE::CoreUObject::Private::Copy<FSourceEffectStereoDelaySettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// ESynthLFOPatchType_StaticEnum @ 14f0a1a70

UEnum * __cdecl ESynthLFOPatchType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESynthLFOPatchType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESynthLFOPatchType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthLFOPatchType,(UObject *)pUVar1,
                       L"ESynthLFOPatchType");
  }
  return Z_Registration_Info_UEnum_ESynthLFOPatchType.OuterSingleton;
}

// NewProp_bInBiasInvert_SetBit @ 14f0a1ab0

void __cdecl
Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasInvert_Statics::
NewProp_bInBiasInvert_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UModularSynthComponent_SetOscCents @ 14f0a1b40

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetOscCents(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetOscCents_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGranularSynth_SetGrainPan @ 14f0a1b80

UFunction * __cdecl Z_Construct_UFunction_UGranularSynth_SetGrainPan(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasInvert @ 14f0a1bc0

UFunction * __cdecl
Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasInvert(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasInvert_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USynthesisUtilitiesBlueprintFunctionLibrary @ 14f0a1c00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USynthesisUtilitiesBlueprintFunctionLibrary(void)

{
  if (Z_Registration_Info_UClass_USynthesisUtilitiesBlueprintFunctionLibrary.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USynthesisUtilitiesBlueprintFunctionLibrary.
                OuterSingleton,
               &Z_Construct_UClass_USynthesisUtilitiesBlueprintFunctionLibrary_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_USynthesisUtilitiesBlueprintFunctionLibrary.OuterSingleton;
}

// ESynthModEnvPatch_StaticEnum @ 14f0a1c40

UEnum * __cdecl ESynthModEnvPatch_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESynthModEnvPatch.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESynthModEnvPatch.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthModEnvPatch,(UObject *)pUVar1,
                       L"ESynthModEnvPatch");
  }
  return Z_Registration_Info_UEnum_ESynthModEnvPatch.OuterSingleton;
}

// NewStructOps @ 14f0a1c80

void * __cdecl Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSourceEffectEQSettings,&UE::CoreUObject::Private::Construct<FSourceEffectEQSettings>,&UE::CoreUObject::Private::ConstructForTests<FSourceEffectEQSettings>,&UE::CoreUObject::Private::Destruct<FSourceEffectEQSettings>,&UE::CoreUObject::Private::Copy<FSourceEffectEQSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDecayTime @ 14f0a1cc0

UFunction * __cdecl
Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDecayTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDecayTime_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod @ 14f0a1d00

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGranularSynth_SetGrainPitch @ 14f0a1d40

UFunction * __cdecl Z_Construct_UFunction_UGranularSynth_SetGrainPitch(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics::FuncParams);
  }
  return ReturnFunction;
}

// ESynthModEnvBiasPatch_StaticEnum @ 14f0a1e40

UEnum * __cdecl ESynthModEnvBiasPatch_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESynthModEnvBiasPatch.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESynthModEnvBiasPatch.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthModEnvBiasPatch,(UObject *)pUVar1,
                       L"ESynthModEnvBiasPatch");
  }
  return Z_Registration_Info_UEnum_ESynthModEnvBiasPatch.OuterSingleton;
}

// Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth @ 14f0a1e80

UFunction * __cdecl Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency @ 14f0a1ec0

UFunction * __cdecl
Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDepth @ 14f0a1f00

UFunction * __cdecl
Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDepth(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDepth_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetOscGain @ 14f0a1fc0

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetOscGain(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetOscGain_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGranularSynth_SetGrainProbability @ 14f0a2000

UFunction * __cdecl Z_Construct_UFunction_UGranularSynth_SetGrainProbability(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGranularSynth_SetGrainProbability_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInInvert_SetBit @ 14f0a2040

void __cdecl
Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeInvert_Statics::
NewProp_bInInvert_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings @ 14f0a2050

UFunction * __cdecl Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator @ 14f0a2090

UFunction * __cdecl Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// ESynthFilterType_StaticEnum @ 14f0a20f0

UEnum * __cdecl ESynthFilterType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESynthFilterType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESynthFilterType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthFilterType,(UObject *)pUVar1,
                       L"ESynthFilterType");
  }
  return Z_Registration_Info_UEnum_ESynthFilterType.OuterSingleton;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeInvert @ 14f0a2220

UFunction * __cdecl
Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeInvert(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeInvert_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond @ 14f0a2260

UFunction * __cdecl Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency @ 14f0a22a0

UFunction * __cdecl
Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod @ 14f0a22e0

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod_Statics::FuncParams);
  }
  return ReturnFunction;
}

// ESynthFilterAlgorithm_StaticEnum @ 14f0a2350

UEnum * __cdecl ESynthFilterAlgorithm_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESynthFilterAlgorithm.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESynthFilterAlgorithm.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthFilterAlgorithm,(UObject *)pUVar1,
                       L"ESynthFilterAlgorithm");
  }
  return Z_Registration_Info_UEnum_ESynthFilterAlgorithm.OuterSingleton;
}

// Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators @ 14f0a2390

UFunction * __cdecl Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USourceEffectEQPreset_SetSettings @ 14f0a23d0

UFunction * __cdecl Z_Construct_UFunction_USourceEffectEQPreset_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectEQPreset_SetSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeReleaseTime @ 14f0a2410

UFunction * __cdecl
Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeReleaseTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeReleaseTime_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGranularSynth_SetGrainVolume @ 14f0a2450

UFunction * __cdecl Z_Construct_UFunction_UGranularSynth_SetGrainVolume(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetOscOctave @ 14f0a24d0

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetOscOctave(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetOscOctave_Statics::FuncParams);
  }
  return ReturnFunction;
}

// ESynthStereoDelayMode_StaticEnum @ 14f0a2510

UEnum * __cdecl ESynthStereoDelayMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESynthStereoDelayMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESynthStereoDelayMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthStereoDelayMode,(UObject *)pUVar1,
                       L"ESynthStereoDelayMode");
  }
  return Z_Registration_Info_UEnum_ESynthStereoDelayMode.OuterSingleton;
}

// Z_Construct_UFunction_USourceEffectChorusPreset_SetDry @ 14f0a2610

UFunction * __cdecl Z_Construct_UFunction_USourceEffectChorusPreset_SetDry(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeSustainGain @ 14f0a2650

UFunction * __cdecl
Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeSustainGain(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeSustainGain_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// ESynth1PatchSource_StaticEnum @ 14f0a2690

UEnum * __cdecl ESynth1PatchSource_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESynth1PatchSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESynth1PatchSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynth1PatchSource,(UObject *)pUVar1,
                       L"ESynth1PatchSource");
  }
  return Z_Registration_Info_UEnum_ESynth1PatchSource.OuterSingleton;
}

// Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed @ 14f0a26d0

UFunction * __cdecl Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth @ 14f0a2710

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USourceEffectFilterPreset @ 14f0a2750

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USourceEffectFilterPreset(void)

{
  if (Z_Registration_Info_UClass_USourceEffectFilterPreset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USourceEffectFilterPreset.OuterSingleton,
               &Z_Construct_UClass_USourceEffectFilterPreset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USourceEffectFilterPreset.OuterSingleton;
}

// Z_Construct_UEnum_Synthesis_ESourceEffectFilterCircuit @ 14f0a2790

UEnum * __cdecl Z_Construct_UEnum_Synthesis_ESourceEffectFilterCircuit(void)

{
  if (Z_Registration_Info_UEnum_ESourceEffectFilterCircuit.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESourceEffectFilterCircuit.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_ESourceEffectFilterCircuit_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESourceEffectFilterCircuit.InnerSingleton;
}

// Z_Construct_UEnum_Synthesis_ESourceEffectFilterParam @ 14f0a27d0

UEnum * __cdecl Z_Construct_UEnum_Synthesis_ESourceEffectFilterParam(void)

{
  if (Z_Registration_Info_UEnum_ESourceEffectFilterParam.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESourceEffectFilterParam.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_ESourceEffectFilterParam_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESourceEffectFilterParam.InnerSingleton;
}

// Z_Construct_UEnum_Synthesis_ESourceEffectFilterType @ 14f0a2810

UEnum * __cdecl Z_Construct_UEnum_Synthesis_ESourceEffectFilterType(void)

{
  if (Z_Registration_Info_UEnum_ESourceEffectFilterType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESourceEffectFilterType.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_ESourceEffectFilterType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESourceEffectFilterType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings @ 14f0a2850

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings.InnerSingleton
      == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings.InnerSingleton
      != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings.
           InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FSourceEffectFilterSettings @ 14f0a28d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSourceEffectFilterSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSourceEffectFilterSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSourceEffectFilterSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSourceEffectFilterSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSourceEffectFilterSettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// ESourceEffectFilterCircuit_StaticEnum @ 14f0a2950

UEnum * __cdecl ESourceEffectFilterCircuit_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESourceEffectFilterCircuit.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESourceEffectFilterCircuit.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectFilterCircuit,(UObject *)pUVar1,
                       L"ESourceEffectFilterCircuit");
  }
  return Z_Registration_Info_UEnum_ESourceEffectFilterCircuit.OuterSingleton;
}

// Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator @ 14f0a2990

UFunction * __cdecl Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoDepth @ 14f0a29d0

UFunction * __cdecl Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoDepth(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoDepth_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// ESynth1PatchDestination_StaticEnum @ 14f0a2a10

UEnum * __cdecl ESynth1PatchDestination_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESynth1PatchDestination.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESynth1PatchDestination.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynth1PatchDestination,(UObject *)pUVar1,
                       L"ESynth1PatchDestination");
  }
  return Z_Registration_Info_UEnum_ESynth1PatchDestination.OuterSingleton;
}

// Z_Construct_UFunction_UGranularSynth_SetPlayheadTime @ 14f0a2a50

UFunction * __cdecl Z_Construct_UFunction_UGranularSynth_SetPlayheadTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// ESourceEffectFilterType_StaticEnum @ 14f0a2a90

UEnum * __cdecl ESourceEffectFilterType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESourceEffectFilterType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESourceEffectFilterType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectFilterType,(UObject *)pUVar1,
                       L"ESourceEffectFilterType");
  }
  return Z_Registration_Info_UEnum_ESourceEffectFilterType.OuterSingleton;
}

// Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones @ 14f0a2ad0

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoFrequency @ 14f0a2b10

UFunction * __cdecl Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoFrequency(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoFrequency_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators @ 14f0a2b50

UFunction * __cdecl Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bIsSynced_SetBit @ 14f0a2b90

void __cdecl
Z_Construct_UFunction_UModularSynthComponent_SetOscSync_Statics::NewProp_bIsSynced_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UClass_USynth2DSlider @ 14f0a2ba0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USynth2DSlider(void)

{
  if (Z_Registration_Info_UClass_USynth2DSlider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USynth2DSlider.OuterSingleton,
               &Z_Construct_UClass_USynth2DSlider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USynth2DSlider.OuterSingleton;
}

// Z_Construct_UScriptStruct_FSynth2DSliderStyle @ 14f0a2be0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSynth2DSliderStyle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSynth2DSliderStyle.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSynth2DSliderStyle.InnerSingleton,
               &Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSynth2DSliderStyle.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FSynth2DSliderStyle.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// ESourceEffectFilterParam_StaticEnum @ 14f0a2c60

UEnum * __cdecl ESourceEffectFilterParam_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESourceEffectFilterParam.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESourceEffectFilterParam.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectFilterParam,(UObject *)pUVar1,
                       L"ESourceEffectFilterParam");
  }
  return Z_Registration_Info_UEnum_ESourceEffectFilterParam.OuterSingleton;
}

// Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec @ 14f0a2ca0

UFunction * __cdecl Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetOscSync @ 14f0a2ce0

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetOscSync(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetOscSync_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14f0a2d20

void * __cdecl Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSynth1PatchCable,&UE::CoreUObject::Private::Construct<FSynth1PatchCable>,&UE::CoreUObject::Private::ConstructForTests<FSynth1PatchCable>,&UE::CoreUObject::Private::Destruct<FSynth1PatchCable>,&UE::CoreUObject::Private::Copy<FSynth1PatchCable>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoType @ 14f0a2d60

UFunction * __cdecl Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoType_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bScrubMode_SetBit @ 14f0a2ea0

void __cdecl
Z_Construct_UFunction_UGranularSynth_SetScrubMode_Statics::NewProp_bScrubMode_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback @ 14f0a2eb0

UFunction * __cdecl Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_InSustainPedalState_SetBit @ 14f0a2ff0

void __cdecl
Z_Construct_UFunction_USynthComponentMonoWaveTable_SetSustainPedalState_Statics::
NewProp_InSustainPedalState_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14f0a3000

void * __cdecl
Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSourceEffectFilterAudioBusModulationSettings,&UE::CoreUObject::Private::Construct<FSourceEffectFilterAudioBusModulationSettings>,&UE::CoreUObject::Private::ConstructForTests<FSourceEffectFilterAudioBusModulationSettings>,&UE::CoreUObject::Private::Destruct<FSourceEffectFilterAudioBusModulationSettings>,&UE::CoreUObject::Private::Copy<FSourceEffectFilterAudioBusModulationSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UGranularSynth_SetScrubMode @ 14f0a3040

UFunction * __cdecl Z_Construct_UFunction_UGranularSynth_SetScrubMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGranularSynth_SetScrubMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetOscType @ 14f0a3080

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetOscType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetOscType_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetSustainPedalState @ 14f0a30c0

UFunction * __cdecl Z_Construct_UFunction_USynthComponentMonoWaveTable_SetSustainPedalState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetSustainPedalState_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator @ 14f0a3100

UFunction * __cdecl Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGranularSynth_SetSoundWave @ 14f0a3200

UFunction * __cdecl Z_Construct_UFunction_UGranularSynth_SetSoundWave(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGranularSynth_SetSoundWave_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetPan @ 14f0a3240

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetPan(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetPan_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_SetWaveTablePosition @ 14f0a3300

UFunction * __cdecl Z_Construct_UFunction_USynthComponentMonoWaveTable_SetWaveTablePosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetWaveTablePosition_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators @ 14f0a3360

UFunction * __cdecl Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGranularSynth_SetSustainGain @ 14f0a33f0

UFunction * __cdecl Z_Construct_UFunction_UGranularSynth_SetSustainGain(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGranularSynth_SetSustainGain_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetPitchBend @ 14f0a3430

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetPitchBend(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetPitchBend_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14f0a38a0

void * __cdecl Z_Construct_UScriptStruct_FPatchId_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPatchId,&UE::CoreUObject::Private::Construct<FPatchId>,&UE::CoreUObject::Private::ConstructForTests<FPatchId>,&UE::CoreUObject::Private::Destruct<FPatchId>,&UE::CoreUObject::Private::Copy<FPatchId>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_USynth2DSlider_GetValue @ 14f0a38e0

UFunction * __cdecl Z_Construct_UFunction_USynth2DSlider_GetValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_USynth2DSlider_GetValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency @ 14f0a3920

UFunction * __cdecl Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_InValue_SetBit @ 14f0a3980

void __cdecl
Z_Construct_UFunction_USynth2DSlider_SetIndentHandle_Statics::NewProp_InValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UModularSynthComponent_SetPortamento @ 14f0a39b0

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetPortamento(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetPortamento_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14f0a3a00

void * __cdecl Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSourceEffectFilterSettings,&UE::CoreUObject::Private::Construct<FSourceEffectFilterSettings>,&UE::CoreUObject::Private::ConstructForTests<FSourceEffectFilterSettings>,&UE::CoreUObject::Private::Destruct<FSourceEffectFilterSettings>,&UE::CoreUObject::Private::Copy<FSourceEffectFilterSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_USynth2DSlider_SetIndentHandle @ 14f0a3a40

UFunction * __cdecl Z_Construct_UFunction_USynth2DSlider_SetIndentHandle(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynth2DSlider_SetIndentHandle_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator @ 14f0a3a80

UFunction * __cdecl Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_InValue_SetBit @ 14f0a3b00

void __cdecl
Z_Construct_UFunction_USynth2DSlider_SetLocked_Statics::NewProp_InValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UModularSynthComponent_SetReleaseTime @ 14f0a3b10

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetReleaseTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetReleaseTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynth2DSlider_SetLocked @ 14f0a3bd0

UFunction * __cdecl Z_Construct_UFunction_USynth2DSlider_SetLocked(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_USynth2DSlider_SetLocked_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USubmixEffectDelayPreset @ 14f0a3c10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USubmixEffectDelayPreset(void)

{
  if (Z_Registration_Info_UClass_USubmixEffectDelayPreset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USubmixEffectDelayPreset.OuterSingleton,
               &Z_Construct_UClass_USubmixEffectDelayPreset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USubmixEffectDelayPreset.OuterSingleton;
}

// Z_Construct_UClass_USubmixEffectDelayStatics @ 14f0a3c50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USubmixEffectDelayStatics(void)

{
  if (Z_Registration_Info_UClass_USubmixEffectDelayStatics.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USubmixEffectDelayStatics.OuterSingleton,
               &Z_Construct_UClass_USubmixEffectDelayStatics_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USubmixEffectDelayStatics.OuterSingleton;
}

// Z_Construct_UScriptStruct_FSubmixEffectDelaySettings @ 14f0a3c90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSubmixEffectDelaySettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSubmixEffectDelaySettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSubmixEffectDelaySettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSubmixEffectDelaySettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSubmixEffectDelaySettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators @ 14f0a3d10

UFunction * __cdecl Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetSpread @ 14f0a3d50

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetSpread(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetSpread_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14f0a3d90

void * __cdecl Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSubmixEffectDelaySettings,&UE::CoreUObject::Private::Construct<FSubmixEffectDelaySettings>,&UE::CoreUObject::Private::ConstructForTests<FSubmixEffectDelaySettings>,&UE::CoreUObject::Private::Destruct<FSubmixEffectDelaySettings>,&UE::CoreUObject::Private::Copy<FSubmixEffectDelaySettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_USynth2DSlider_SetSliderHandleColor @ 14f0a3e10

UFunction * __cdecl Z_Construct_UFunction_USynth2DSlider_SetSliderHandleColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynth2DSlider_SetSliderHandleColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USourceEffectDynamicsProcessorPreset @ 14f0a3e50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USourceEffectDynamicsProcessorPreset(void)

{
  if (Z_Registration_Info_UClass_USourceEffectDynamicsProcessorPreset.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USourceEffectDynamicsProcessorPreset.OuterSingleton,
               &Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USourceEffectDynamicsProcessorPreset.OuterSingleton;
}

// Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode @ 14f0a3e90

UEnum * __cdecl Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode(void)

{
  if (Z_Registration_Info_UEnum_ESourceEffectDynamicsPeakMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESourceEffectDynamicsPeakMode.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESourceEffectDynamicsPeakMode.InnerSingleton;
}

// Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType @ 14f0a3ed0

UEnum * __cdecl Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType(void)

{
  if (Z_Registration_Info_UEnum_ESourceEffectDynamicsProcessorType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESourceEffectDynamicsProcessorType.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESourceEffectDynamicsProcessorType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings @ 14f0a3f10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSourceEffectDynamicsProcessorSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSourceEffectDynamicsProcessorSettings.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSourceEffectDynamicsProcessorSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSourceEffectDynamicsProcessorSettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// ESourceEffectDynamicsProcessorType_StaticEnum @ 14f0a3f90

UEnum * __cdecl ESourceEffectDynamicsProcessorType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESourceEffectDynamicsProcessorType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESourceEffectDynamicsProcessorType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType,
                       (UObject *)pUVar1,L"ESourceEffectDynamicsProcessorType");
  }
  return Z_Registration_Info_UEnum_ESourceEffectDynamicsProcessorType.OuterSingleton;
}

// Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayFeedback @ 14f0a3fd0

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayFeedback(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayFeedback_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings @ 14f0a4010

UFunction * __cdecl Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USourceEffectMotionFilterPreset @ 14f0a4110

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USourceEffectMotionFilterPreset(void)

{
  if (Z_Registration_Info_UClass_USourceEffectMotionFilterPreset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USourceEffectMotionFilterPreset.OuterSingleton,
               &Z_Construct_UClass_USourceEffectMotionFilterPreset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USourceEffectMotionFilterPreset.OuterSingleton;
}

// Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterCircuit @ 14f0a4150

UEnum * __cdecl Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterCircuit(void)

{
  if (Z_Registration_Info_UEnum_ESourceEffectMotionFilterCircuit.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESourceEffectMotionFilterCircuit.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterCircuit_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESourceEffectMotionFilterCircuit.InnerSingleton;
}

// NewProp_StereoDelayEnabled_SetBit @ 14f0a4190

void __cdecl
Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled_Statics::
NewProp_StereoDelayEnabled_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModDestination @ 14f0a41a0

UEnum * __cdecl Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModDestination(void)

{
  if (Z_Registration_Info_UEnum_ESourceEffectMotionFilterModDestination.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESourceEffectMotionFilterModDestination.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModDestination_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_ESourceEffectMotionFilterModDestination.InnerSingleton;
}

// Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModSource @ 14f0a42a0

UEnum * __cdecl Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModSource(void)

{
  if (Z_Registration_Info_UEnum_ESourceEffectMotionFilterModSource.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESourceEffectMotionFilterModSource.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModSource_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESourceEffectMotionFilterModSource.InnerSingleton;
}

// Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings @ 14f0a42e0

UFunction * __cdecl Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterTopology @ 14f0a4320

UEnum * __cdecl Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterTopology(void)

{
  if (Z_Registration_Info_UEnum_ESourceEffectMotionFilterTopology.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESourceEffectMotionFilterTopology.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterTopology_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESourceEffectMotionFilterTopology.InnerSingleton;
}

// Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterType @ 14f0a4360

UEnum * __cdecl Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterType(void)

{
  if (Z_Registration_Info_UEnum_ESourceEffectMotionFilterType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESourceEffectMotionFilterType.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESourceEffectMotionFilterType.InnerSingleton;
}

// Z_Construct_UDelegateFunction_Synthesis_NumTablesChanged__DelegateSignature @ 14f0a43a0

UFunction * __cdecl
Z_Construct_UDelegateFunction_Synthesis_NumTablesChanged__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Synthesis_NumTablesChanged__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings @ 14f0a43e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSourceEffectIndividualFilterSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSourceEffectIndividualFilterSettings.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSourceEffectIndividualFilterSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSourceEffectIndividualFilterSettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UDelegateFunction_Synthesis_OnControllerCaptureBeginEventSynth2D__DelegateSignature @ 14f0a4460

UFunction * __cdecl
Z_Construct_UDelegateFunction_Synthesis_OnControllerCaptureBeginEventSynth2D__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Synthesis_OnControllerCaptureBeginEventSynth2D__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings @ 14f0a44a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSourceEffectMotionFilterModulationSettings.InnerSingleton
      == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSourceEffectMotionFilterModulationSettings.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSourceEffectMotionFilterModulationSettings.InnerSingleton
      != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSourceEffectMotionFilterModulationSettings.
           InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UDelegateFunction_Synthesis_OnControllerCaptureEndEventSynth2D__DelegateSignature @ 14f0a4520

UFunction * __cdecl
Z_Construct_UDelegateFunction_Synthesis_OnControllerCaptureEndEventSynth2D__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Synthesis_OnControllerCaptureEndEventSynth2D__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings @ 14f0a4560

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSourceEffectMotionFilterSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSourceEffectMotionFilterSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSourceEffectMotionFilterSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSourceEffectMotionFilterSettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UFunction_USynth2DSlider_SetStepSize @ 14f0a45e0

UFunction * __cdecl Z_Construct_UFunction_USynth2DSlider_SetStepSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_USynth2DSlider_SetStepSize_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature @ 14f0a4620

UFunction * __cdecl
Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_Synthesis_OnFloatValueChangedEventSynth2D__DelegateSignature @ 14f0a4660

UFunction * __cdecl
Z_Construct_UDelegateFunction_Synthesis_OnFloatValueChangedEventSynth2D__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Synthesis_OnFloatValueChangedEventSynth2D__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_Synthesis_OnMouseCaptureBeginEventSynth2D__DelegateSignature @ 14f0a46a0

UFunction * __cdecl
Z_Construct_UDelegateFunction_Synthesis_OnMouseCaptureBeginEventSynth2D__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Synthesis_OnMouseCaptureBeginEventSynth2D__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// ESourceEffectMotionFilterModSource_StaticEnum @ 14f0a46e0

UEnum * __cdecl ESourceEffectMotionFilterModSource_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESourceEffectMotionFilterModSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESourceEffectMotionFilterModSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModSource,
                       (UObject *)pUVar1,L"ESourceEffectMotionFilterModSource");
  }
  return Z_Registration_Info_UEnum_ESourceEffectMotionFilterModSource.OuterSingleton;
}

// Z_Construct_UDelegateFunction_Synthesis_OnMouseCaptureEndEventSynth2D__DelegateSignature @ 14f0a4720

UFunction * __cdecl
Z_Construct_UDelegateFunction_Synthesis_OnMouseCaptureEndEventSynth2D__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Synthesis_OnMouseCaptureEndEventSynth2D__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_Synthesis_OnSampleLoaded__DelegateSignature @ 14f0a4760

UFunction * __cdecl Z_Construct_UDelegateFunction_Synthesis_OnSampleLoaded__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Synthesis_OnSampleLoaded__DelegateSignature_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature @ 14f0a47a0

UFunction * __cdecl
Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_Synthesis_OnTableAltered__DelegateSignature @ 14f0a47e0

UFunction * __cdecl Z_Construct_UDelegateFunction_Synthesis_OnTableAltered__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Synthesis_OnTableAltered__DelegateSignature_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// ESourceEffectDynamicsPeakMode_StaticEnum @ 14f0a4820

UEnum * __cdecl ESourceEffectDynamicsPeakMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESourceEffectDynamicsPeakMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESourceEffectDynamicsPeakMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode,(UObject *)pUVar1,
                       L"ESourceEffectDynamicsPeakMode");
  }
  return Z_Registration_Info_UEnum_ESourceEffectDynamicsPeakMode.OuterSingleton;
}

// Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings @ 14f0a48d0

UFunction * __cdecl Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled @ 14f0a4910

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USourceEffectWaveShaperPreset @ 14f0a4950

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USourceEffectWaveShaperPreset(void)

{
  if (Z_Registration_Info_UClass_USourceEffectWaveShaperPreset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USourceEffectWaveShaperPreset.OuterSingleton,
               &Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USourceEffectWaveShaperPreset.OuterSingleton;
}

// Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings @ 14f0a4990

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSourceEffectWaveShaperSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSourceEffectWaveShaperSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSourceEffectWaveShaperSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSourceEffectWaveShaperSettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14f0a4a10

void * __cdecl Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSourceEffectWaveShaperSettings,&UE::CoreUObject::Private::Construct<FSourceEffectWaveShaperSettings>,&UE::CoreUObject::Private::ConstructForTests<FSourceEffectWaveShaperSettings>,&UE::CoreUObject::Private::Destruct<FSourceEffectWaveShaperSettings>,&UE::CoreUObject::Private::Copy<FSourceEffectWaveShaperSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_USynth2DSlider_SetValue @ 14f0a4a50

UFunction * __cdecl Z_Construct_UFunction_USynth2DSlider_SetValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_USynth2DSlider_SetValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// ESourceEffectMotionFilterModDestination_StaticEnum @ 14f0a4a90

UEnum * __cdecl ESourceEffectMotionFilterModDestination_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESourceEffectMotionFilterModDestination.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESourceEffectMotionFilterModDestination.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModDestination,
                       (UObject *)pUVar1,L"ESourceEffectMotionFilterModDestination");
  }
  return Z_Registration_Info_UEnum_ESourceEffectMotionFilterModDestination.OuterSingleton;
}

// NewProp_bStereoLinked_SetBit @ 14f0a4b00

void __cdecl
Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::
NewProp_bStereoLinked_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) | 1;
  return;
}

// Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode @ 14f0a4b10

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread @ 14f0a4b50

UFunction * __cdecl Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAnalogMode_SetBit @ 14f0a4b90

void __cdecl
Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) | 2;
  return;
}

// NewProp_bBypass_SetBit @ 14f0a4ba0

void __cdecl
Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bBypass_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x28) = *(byte *)((longlong)param_1 + 0x28) | 1;
  return;
}

// NewStructOps @ 14f0a4bb0

void * __cdecl
Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSourceEffectDynamicsProcessorSettings,&UE::CoreUObject::Private::Construct<FSourceEffectDynamicsProcessorSettings>,&UE::CoreUObject::Private::ConstructForTests<FSourceEffectDynamicsProcessorSettings>,&UE::CoreUObject::Private::Destruct<FSourceEffectDynamicsProcessorSettings>,&UE::CoreUObject::Private::Copy<FSourceEffectDynamicsProcessorSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_USubmixEffectDelayStatics_SetDelayLength @ 14f0a4bf0

UFunction * __cdecl Z_Construct_UFunction_USubmixEffectDelayStatics_SetDelayLength(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectDelayStatics_SetDelayLength_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_IndentHandle_SetBit @ 14f0a4c30

void __cdecl Z_Construct_UClass_USynth2DSlider_Statics::NewProp_IndentHandle_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x590) = 1;
  return;
}

// NewProp_Locked_SetBit @ 14f0a4c40

void __cdecl Z_Construct_UClass_USynth2DSlider_Statics::NewProp_Locked_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x591) = 1;
  return;
}

// ESourceEffectMotionFilterTopology_StaticEnum @ 14f0a4c50

UEnum * __cdecl ESourceEffectMotionFilterTopology_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESourceEffectMotionFilterTopology.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESourceEffectMotionFilterTopology.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterTopology,
                       (UObject *)pUVar1,L"ESourceEffectMotionFilterTopology");
  }
  return Z_Registration_Info_UEnum_ESourceEffectMotionFilterTopology.OuterSingleton;
}

// NewProp_IsFocusable_SetBit @ 14f0a4c90

void __cdecl Z_Construct_UClass_USynth2DSlider_Statics::NewProp_IsFocusable_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x598) = 1;
  return;
}

// Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator @ 14f0a4ca0

UFunction * __cdecl Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayRatio @ 14f0a4ce0

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayRatio(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayRatio_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// ESourceEffectMotionFilterCircuit_StaticEnum @ 14f0a4d20

UEnum * __cdecl ESourceEffectMotionFilterCircuit_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESourceEffectMotionFilterCircuit.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESourceEffectMotionFilterCircuit.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterCircuit,
                       (UObject *)pUVar1,L"ESourceEffectMotionFilterCircuit");
  }
  return Z_Registration_Info_UEnum_ESourceEffectMotionFilterCircuit.OuterSingleton;
}

// Z_Construct_UFunction_USubmixEffectDelayStatics_SetInterpolationTime @ 14f0a4d60

UFunction * __cdecl Z_Construct_UFunction_USubmixEffectDelayStatics_SetInterpolationTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectDelayStatics_SetInterpolationTime_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayTime @ 14f0a4da0

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayTime_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// ESourceEffectMotionFilterType_StaticEnum @ 14f0a4de0

UEnum * __cdecl ESourceEffectMotionFilterType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESourceEffectMotionFilterType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESourceEffectMotionFilterType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterType,(UObject *)pUVar1,
                       L"ESourceEffectMotionFilterType");
  }
  return Z_Registration_Info_UEnum_ESourceEffectMotionFilterType.OuterSingleton;
}

// Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators @ 14f0a4e20

UFunction * __cdecl Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings @ 14f0a4ea0

UFunction * __cdecl Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USubmixEffectDelayStatics_SetMaximumDelayLength @ 14f0a4f00

UFunction * __cdecl Z_Construct_UFunction_USubmixEffectDelayStatics_SetMaximumDelayLength(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectDelayStatics_SetMaximumDelayLength_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayWetlevel @ 14f0a4f40

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayWetlevel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayWetlevel_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14f0a5070

void * __cdecl
Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSourceEffectIndividualFilterSettings,&UE::CoreUObject::Private::Construct<FSourceEffectIndividualFilterSettings>,&UE::CoreUObject::Private::ConstructForTests<FSourceEffectIndividualFilterSettings>,&UE::CoreUObject::Private::Destruct<FSourceEffectIndividualFilterSettings>,&UE::CoreUObject::Private::Copy<FSourceEffectIndividualFilterSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_USubmixEffectStereoDelayPreset @ 14f0a50b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USubmixEffectStereoDelayPreset(void)

{
  if (Z_Registration_Info_UClass_USubmixEffectStereoDelayPreset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USubmixEffectStereoDelayPreset.OuterSingleton,
               &Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USubmixEffectStereoDelayPreset.OuterSingleton;
}

// Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings @ 14f0a50f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSubmixEffectStereoDelaySettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSubmixEffectStereoDelaySettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSubmixEffectStereoDelaySettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSubmixEffectStereoDelaySettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UFunction_USourceEffectChorusPreset_SetWet @ 14f0a5170

UFunction * __cdecl Z_Construct_UFunction_USourceEffectChorusPreset_SetWet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bFilterEnabled_SetBit @ 14f0a51b0

void __cdecl
Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_bFilterEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewStructOps @ 14f0a51f0

void * __cdecl
Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x24;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSubmixEffectStereoDelaySettings,&UE::CoreUObject::Private::Construct<FSubmixEffectStereoDelaySettings>,&UE::CoreUObject::Private::ConstructForTests<FSubmixEffectStereoDelaySettings>,&UE::CoreUObject::Private::Destruct<FSubmixEffectStereoDelaySettings>,&UE::CoreUObject::Private::Copy<FSubmixEffectStereoDelaySettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UModularSynthComponent_SetSustainGain @ 14f0a5260

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetSustainGain(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetSustainGain_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator @ 14f0a52c0

UFunction * __cdecl Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings @ 14f0a5300

UFunction * __cdecl Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USourceEffectBitCrusherPreset @ 14f0a5500

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USourceEffectBitCrusherPreset(void)

{
  if (Z_Registration_Info_UClass_USourceEffectBitCrusherPreset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USourceEffectBitCrusherPreset.OuterSingleton,
               &Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USourceEffectBitCrusherPreset.OuterSingleton;
}

// Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings @ 14f0a5540

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSourceEffectBitCrusherBaseSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSourceEffectBitCrusherBaseSettings.InnerSingleton
               ,&Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FSourceEffectBitCrusherBaseSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSourceEffectBitCrusherBaseSettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings @ 14f0a55c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSourceEffectBitCrusherSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSourceEffectBitCrusherSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSourceEffectBitCrusherSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSourceEffectBitCrusherSettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset @ 14f0a5640

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14f0a5680

void * __cdecl
Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSourceEffectBitCrusherBaseSettings,&UE::CoreUObject::Private::Construct<FSourceEffectBitCrusherBaseSettings>,&UE::CoreUObject::Private::ConstructForTests<FSourceEffectBitCrusherBaseSettings>,&UE::CoreUObject::Private::Destruct<FSourceEffectBitCrusherBaseSettings>,&UE::CoreUObject::Private::Copy<FSourceEffectBitCrusherBaseSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators @ 14f0a56c0

UFunction * __cdecl Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USubmixEffectDelayPreset_GetMaxDelayInMilliseconds @ 14f0a5700

UFunction * __cdecl Z_Construct_UFunction_USubmixEffectDelayPreset_GetMaxDelayInMilliseconds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14f0a5740

void * __cdecl
Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSourceEffectMotionFilterModulationSettings,&UE::CoreUObject::Private::Construct<FSourceEffectMotionFilterModulationSettings>,&UE::CoreUObject::Private::ConstructForTests<FSourceEffectMotionFilterModulationSettings>,&UE::CoreUObject::Private::Destruct<FSourceEffectMotionFilterModulationSettings>,&UE::CoreUObject::Private::Copy<FSourceEffectMotionFilterModulationSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_USubmixEffectDelayPreset_SetDefaultSettings @ 14f0a5780

UFunction * __cdecl Z_Construct_UFunction_USubmixEffectDelayPreset_SetDefaultSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectDelayPreset_SetDefaultSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings @ 14f0a57c0

UFunction * __cdecl Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewStructOps @ 14f0a5800

void * __cdecl Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSourceEffectBitCrusherSettings,&UE::CoreUObject::Private::Construct<FSourceEffectBitCrusherSettings>,&UE::CoreUObject::Private::ConstructForTests<FSourceEffectBitCrusherSettings>,&UE::CoreUObject::Private::Destruct<FSourceEffectBitCrusherSettings>,&UE::CoreUObject::Private::Copy<FSourceEffectBitCrusherSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_USubmixEffectDelayPreset_SetDelay @ 14f0a5840

UFunction * __cdecl Z_Construct_UFunction_USubmixEffectDelayPreset_SetDelay(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectDelayPreset_SetDelay_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USubmixEffectDelayPreset_SetInterpolationTime @ 14f0a58d0

UFunction * __cdecl Z_Construct_UFunction_USubmixEffectDelayPreset_SetInterpolationTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectDelayPreset_SetInterpolationTime_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14f0a5910

void * __cdecl
Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSourceEffectMotionFilterSettings,&UE::CoreUObject::Private::Construct<FSourceEffectMotionFilterSettings>,&UE::CoreUObject::Private::ConstructForTests<FSourceEffectMotionFilterSettings>,&UE::CoreUObject::Private::Destruct<FSourceEffectMotionFilterSettings>,&UE::CoreUObject::Private::Copy<FSourceEffectMotionFilterSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings @ 14f0a59d0

UFunction * __cdecl Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator @ 14f0a5ad0

UFunction * __cdecl Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UEnvelopeFollowerListener_NoRegister @ 14f0a5b10

UClass * __cdecl Z_Construct_UClass_UEnvelopeFollowerListener_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvelopeFollowerListener.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"EnvelopeFollowerListener",
               &Z_Registration_Info_UClass_UEnvelopeFollowerListener.InnerSingleton,
               UEnvelopeFollowerListener::StaticRegisterNativesUEnvelopeFollowerListener,0xe8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvelopeFollowerListener>,
               InternalVTableHelperCtorCaller<UEnvelopeFollowerListener>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvelopeFollowerListener.InnerSingleton;
}

// Z_Construct_UFunction_USourceEffectMotionFilterPreset_SetSettings @ 14f0a5c10

UFunction * __cdecl Z_Construct_UFunction_USourceEffectMotionFilterPreset_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectMotionFilterPreset_SetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14f0a5db0

void * __cdecl Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x390;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSynth2DSliderStyle,&UE::CoreUObject::Private::Construct<FSynth2DSliderStyle>,&UE::CoreUObject::Private::ConstructForTests<FSynth2DSliderStyle>,&UE::CoreUObject::Private::Destruct<FSynth2DSliderStyle>,&UE::CoreUObject::Private::Copy<FSynth2DSliderStyle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_USourceEffectFoldbackDistortionPreset @ 14f0a5ef0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USourceEffectFoldbackDistortionPreset(void)

{
  if (Z_Registration_Info_UClass_USourceEffectFoldbackDistortionPreset.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USourceEffectFoldbackDistortionPreset.OuterSingleton,
               &Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USourceEffectFoldbackDistortionPreset.OuterSingleton;
}

// Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings @ 14f0a5f30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSourceEffectFoldbackDistortionSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSourceEffectFoldbackDistortionSettings.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSourceEffectFoldbackDistortionSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSourceEffectFoldbackDistortionSettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14f0a5fb0

void * __cdecl
Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSourceEffectFoldbackDistortionSettings,&UE::CoreUObject::Private::Construct<FSourceEffectFoldbackDistortionSettings>,&UE::CoreUObject::Private::ConstructForTests<FSourceEffectFoldbackDistortionSettings>,&UE::CoreUObject::Private::Destruct<FSourceEffectFoldbackDistortionSettings>,&UE::CoreUObject::Private::Copy<FSourceEffectFoldbackDistortionSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings @ 14f0a6200

UFunction * __cdecl Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USubmixEffectStereoToQuadPreset @ 14f0a6240

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USubmixEffectStereoToQuadPreset(void)

{
  if (Z_Registration_Info_UClass_USubmixEffectStereoToQuadPreset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USubmixEffectStereoToQuadPreset.OuterSingleton,
               &Z_Construct_UClass_USubmixEffectStereoToQuadPreset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USubmixEffectStereoToQuadPreset.OuterSingleton;
}

// Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings @ 14f0a6280

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSubmixEffectStereoToQuadSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSubmixEffectStereoToQuadSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSubmixEffectStereoToQuadSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSubmixEffectStereoToQuadSettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewProp_bFlipChannels_SetBit @ 14f0a6300

void __cdecl
Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings_Statics::NewProp_bFlipChannels_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14f0a6310

void * __cdecl
Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSubmixEffectStereoToQuadSettings,&UE::CoreUObject::Private::Construct<FSubmixEffectStereoToQuadSettings>,&UE::CoreUObject::Private::ConstructForTests<FSubmixEffectStereoToQuadSettings>,&UE::CoreUObject::Private::Destruct<FSubmixEffectStereoToQuadSettings>,&UE::CoreUObject::Private::Copy<FSubmixEffectStereoToQuadSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAudioImpulseResponse_NoRegister @ 14f0a6350

UClass * __cdecl Z_Construct_UClass_UAudioImpulseResponse_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioImpulseResponse.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"AudioImpulseResponse",
               &Z_Registration_Info_UClass_UAudioImpulseResponse.InnerSingleton,
               UAudioImpulseResponse::StaticRegisterNativesUAudioImpulseResponse,0x58,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UAudioImpulseResponse>,
               InternalVTableHelperCtorCaller<UAudioImpulseResponse>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioImpulseResponse.InnerSingleton;
}

// Z_Construct_UClass_UEnvelopeFollowerListener @ 14f0a64f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvelopeFollowerListener(void)

{
  if (Z_Registration_Info_UClass_UEnvelopeFollowerListener.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvelopeFollowerListener.OuterSingleton,
               &Z_Construct_UClass_UEnvelopeFollowerListener_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvelopeFollowerListener.OuterSingleton;
}

// Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset @ 14f0a6530

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset(void)

{
  if (Z_Registration_Info_UClass_USourceEffectEnvelopeFollowerPreset.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USourceEffectEnvelopeFollowerPreset.OuterSingleton,
               &Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USourceEffectEnvelopeFollowerPreset.OuterSingleton;
}

// Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode @ 14f0a6570

UEnum * __cdecl Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode(void)

{
  if (Z_Registration_Info_UEnum_EEnvelopeFollowerPeakMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EEnvelopeFollowerPeakMode.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EEnvelopeFollowerPeakMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings @ 14f0a65b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSourceEffectEnvelopeFollowerSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSourceEffectEnvelopeFollowerSettings.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSourceEffectEnvelopeFollowerSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSourceEffectEnvelopeFollowerSettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// EEnvelopeFollowerPeakMode_StaticEnum @ 14f0a6630

UEnum * __cdecl EEnvelopeFollowerPeakMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvelopeFollowerPeakMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_EEnvelopeFollowerPeakMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode,(UObject *)pUVar1,
                       L"EEnvelopeFollowerPeakMode");
  }
  return Z_Registration_Info_UEnum_EEnvelopeFollowerPeakMode.OuterSingleton;
}

// Z_Construct_UClass_UModularSynthPresetBank_NoRegister @ 14f0a6670

UClass * __cdecl Z_Construct_UClass_UModularSynthPresetBank_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModularSynthPresetBank.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"ModularSynthPresetBank",
               &Z_Registration_Info_UClass_UModularSynthPresetBank.InnerSingleton,
               UModularSynthPresetBank::StaticRegisterNativesUModularSynthPresetBank,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UModularSynthPresetBank>
               ,InternalVTableHelperCtorCaller<UModularSynthPresetBank>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModularSynthPresetBank.InnerSingleton;
}

// Z_Construct_UEnum_Synthesis_ESynthKnobSize @ 14f0a67a0

UEnum * __cdecl Z_Construct_UEnum_Synthesis_ESynthKnobSize(void)

{
  if (Z_Registration_Info_UEnum_ESynthKnobSize.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESynthKnobSize.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_ESynthKnobSize_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESynthKnobSize.InnerSingleton;
}

// ESynthKnobSize_StaticEnum @ 14f0a67e0

UEnum * __cdecl ESynthKnobSize_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESynthKnobSize.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESynthKnobSize.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthKnobSize,(UObject *)pUVar1,
                       L"ESynthKnobSize");
  }
  return Z_Registration_Info_UEnum_ESynthKnobSize.OuterSingleton;
}

// NewProp_bIsAnalogMode_SetBit @ 14f0a6820

void __cdecl
Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::
NewProp_bIsAnalogMode_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// Z_Construct_UFunction_USubmixEffectStereoToQuadPreset_SetSettings @ 14f0a6830

UFunction * __cdecl Z_Construct_UFunction_USubmixEffectStereoToQuadPreset_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectStereoToQuadPreset_SetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14f0a6870

void * __cdecl
Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSourceEffectEnvelopeFollowerSettings,&UE::CoreUObject::Private::Construct<FSourceEffectEnvelopeFollowerSettings>,&UE::CoreUObject::Private::ConstructForTests<FSourceEffectEnvelopeFollowerSettings>,&UE::CoreUObject::Private::Destruct<FSourceEffectEnvelopeFollowerSettings>,&UE::CoreUObject::Private::Copy<FSourceEffectEnvelopeFollowerSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14f0a68b0

void * __cdecl Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2e0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSynthKnobStyle,&UE::CoreUObject::Private::Construct<FSynthKnobStyle>,&UE::CoreUObject::Private::ConstructForTests<FSynthKnobStyle>,&UE::CoreUObject::Private::Destruct<FSynthKnobStyle>,&UE::CoreUObject::Private::Copy<FSynthKnobStyle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAudioImpulseResponse @ 14f0a6b90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioImpulseResponse(void)

{
  if (Z_Registration_Info_UClass_UAudioImpulseResponse.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioImpulseResponse.OuterSingleton,
               &Z_Construct_UClass_UAudioImpulseResponse_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioImpulseResponse.OuterSingleton;
}

// Z_Construct_UEnum_Synthesis_ESubmixEffectConvolutionReverbBlockSize @ 14f0a6bd0

UEnum * __cdecl Z_Construct_UEnum_Synthesis_ESubmixEffectConvolutionReverbBlockSize(void)

{
  if (Z_Registration_Info_UEnum_ESubmixEffectConvolutionReverbBlockSize.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESubmixEffectConvolutionReverbBlockSize.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_ESubmixEffectConvolutionReverbBlockSize_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_ESubmixEffectConvolutionReverbBlockSize.InnerSingleton;
}

// ESubmixEffectConvolutionReverbBlockSize_StaticEnum @ 14f0a6c10

UEnum * __cdecl ESubmixEffectConvolutionReverbBlockSize_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESubmixEffectConvolutionReverbBlockSize.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESubmixEffectConvolutionReverbBlockSize.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESubmixEffectConvolutionReverbBlockSize,
                       (UObject *)pUVar1,L"ESubmixEffectConvolutionReverbBlockSize");
  }
  return Z_Registration_Info_UEnum_ESubmixEffectConvolutionReverbBlockSize.OuterSingleton;
}

// Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener @ 14f0a6e50

UFunction * __cdecl
Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMonoWaveTableSynthPreset_NoRegister @ 14f0a6e90

UClass * __cdecl Z_Construct_UClass_UMonoWaveTableSynthPreset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMonoWaveTableSynthPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"MonoWaveTableSynthPreset",
               &Z_Registration_Info_UClass_UMonoWaveTableSynthPreset.InnerSingleton,
               UMonoWaveTableSynthPreset::StaticRegisterNativesUMonoWaveTableSynthPreset,0x170,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMonoWaveTableSynthPreset>,
               InternalVTableHelperCtorCaller<UMonoWaveTableSynthPreset>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMonoWaveTableSynthPreset.InnerSingleton;
}

// NewProp_bTrueStereo_SetBit @ 14f0a6f40

void __cdecl
Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_bTrueStereo_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  return;
}

// Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings @ 14f0a7100

UFunction * __cdecl Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USourceEffectMidSideSpreaderPreset @ 14f0a7140

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USourceEffectMidSideSpreaderPreset(void)

{
  if (Z_Registration_Info_UClass_USourceEffectMidSideSpreaderPreset.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USourceEffectMidSideSpreaderPreset.OuterSingleton,
               &Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USourceEffectMidSideSpreaderPreset.OuterSingleton;
}

// Z_Construct_UEnum_Synthesis_EStereoChannelMode @ 14f0a7180

UEnum * __cdecl Z_Construct_UEnum_Synthesis_EStereoChannelMode(void)

{
  if (Z_Registration_Info_UEnum_EStereoChannelMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStereoChannelMode.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_EStereoChannelMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EStereoChannelMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings @ 14f0a71c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSourceEffectMidSideSpreaderSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSourceEffectMidSideSpreaderSettings.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FSourceEffectMidSideSpreaderSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSourceEffectMidSideSpreaderSettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// EStereoChannelMode_StaticEnum @ 14f0a7240

UEnum * __cdecl EStereoChannelMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStereoChannelMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_EStereoChannelMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_EStereoChannelMode,(UObject *)pUVar1,
                       L"EStereoChannelMode");
  }
  return Z_Registration_Info_UEnum_EStereoChannelMode.OuterSingleton;
}

// Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulators @ 14f0a7280

UFunction * __cdecl Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulators(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulators_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener @ 14f0a7300

UFunction * __cdecl
Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEqualPower_SetBit @ 14f0a7340

void __cdecl
Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_bEqualPower_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 6) = 1;
  return;
}

// NewStructOps @ 14f0a7350

void * __cdecl
Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSourceEffectMidSideSpreaderSettings,&UE::CoreUObject::Private::Construct<FSourceEffectMidSideSpreaderSettings>,&UE::CoreUObject::Private::ConstructForTests<FSourceEffectMidSideSpreaderSettings>,&UE::CoreUObject::Private::Destruct<FSourceEffectMidSideSpreaderSettings>,&UE::CoreUObject::Private::Copy<FSourceEffectMidSideSpreaderSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBits @ 14f0a73d0

UFunction * __cdecl Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBits(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBits_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings @ 14f0a7410

UFunction * __cdecl Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USynthKnob @ 14f0a7450

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USynthKnob(void)

{
  if (Z_Registration_Info_UClass_USynthKnob.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USynthKnob.OuterSingleton,
               &Z_Construct_UClass_USynthKnob_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USynthKnob.OuterSingleton;
}

// Z_Construct_UScriptStruct_FSynthKnobStyle @ 14f0a7490

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSynthKnobStyle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSynthKnobStyle.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSynthKnobStyle.InnerSingleton,
               &Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSynthKnobStyle.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSynthKnobStyle.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UClass_USubmixEffectFilterPreset @ 14f0a7510

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USubmixEffectFilterPreset(void)

{
  if (Z_Registration_Info_UClass_USubmixEffectFilterPreset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USubmixEffectFilterPreset.OuterSingleton,
               &Z_Construct_UClass_USubmixEffectFilterPreset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USubmixEffectFilterPreset.OuterSingleton;
}

// Z_Construct_UEnum_Synthesis_ESubmixFilterAlgorithm @ 14f0a7550

UEnum * __cdecl Z_Construct_UEnum_Synthesis_ESubmixFilterAlgorithm(void)

{
  if (Z_Registration_Info_UEnum_ESubmixFilterAlgorithm.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESubmixFilterAlgorithm.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_ESubmixFilterAlgorithm_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESubmixFilterAlgorithm.InnerSingleton;
}

// Z_Construct_UEnum_Synthesis_ESubmixFilterType @ 14f0a7590

UEnum * __cdecl Z_Construct_UEnum_Synthesis_ESubmixFilterType(void)

{
  if (Z_Registration_Info_UEnum_ESubmixFilterType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESubmixFilterType.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_ESubmixFilterType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESubmixFilterType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FSubmixEffectFilterSettings @ 14f0a75d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSubmixEffectFilterSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSubmixEffectFilterSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSubmixEffectFilterSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSubmixEffectFilterSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSubmixEffectFilterSettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// ESubmixFilterType_StaticEnum @ 14f0a7650

UEnum * __cdecl ESubmixFilterType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESubmixFilterType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESubmixFilterType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESubmixFilterType,(UObject *)pUVar1,
                       L"ESubmixFilterType");
  }
  return Z_Registration_Info_UEnum_ESubmixFilterType.OuterSingleton;
}

// Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRate @ 14f0a76d0

UFunction * __cdecl Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRate_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthKnob_GetValue @ 14f0a7710

UFunction * __cdecl Z_Construct_UFunction_USynthKnob_GetValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_USynthKnob_GetValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings @ 14f0a7800

UFunction * __cdecl Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_InValue_SetBit @ 14f0a7840

void __cdecl
Z_Construct_UFunction_USynthKnob_SetLocked_Statics::NewProp_InValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// ESubmixFilterAlgorithm_StaticEnum @ 14f0a7850

UEnum * __cdecl ESubmixFilterAlgorithm_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESubmixFilterAlgorithm.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESubmixFilterAlgorithm.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESubmixFilterAlgorithm,(UObject *)pUVar1,
                       L"ESubmixFilterAlgorithm");
  }
  return Z_Registration_Info_UEnum_ESubmixFilterAlgorithm.OuterSingleton;
}

// Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator @ 14f0a7890

UFunction * __cdecl Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthKnob_SetLocked @ 14f0a78d0

UFunction * __cdecl Z_Construct_UFunction_USynthKnob_SetLocked(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_USynthKnob_SetLocked_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14f0a7910

void * __cdecl Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSubmixEffectFilterSettings,&UE::CoreUObject::Private::Construct<FSubmixEffectFilterSettings>,&UE::CoreUObject::Private::ConstructForTests<FSubmixEffectFilterSettings>,&UE::CoreUObject::Private::Destruct<FSubmixEffectFilterSettings>,&UE::CoreUObject::Private::Copy<FSubmixEffectFilterSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulators @ 14f0a7960

UFunction * __cdecl
Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulators(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulators_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthKnob_SetStepSize @ 14f0a79b0

UFunction * __cdecl Z_Construct_UFunction_USynthKnob_SetStepSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_USynthKnob_SetStepSize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthKnob_SetValue @ 14f0a7af0

UFunction * __cdecl Z_Construct_UFunction_USynthKnob_SetValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_USynthKnob_SetValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings @ 14f0a7b30

UFunction * __cdecl Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ShowTooltipInfo_SetBit @ 14f0a7b70

void __cdecl Z_Construct_UClass_USynthKnob_Statics::NewProp_ShowTooltipInfo_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x1c0) = *(uint *)((longlong)param_1 + 0x1c0) | 1;
  return;
}

// NewProp_Locked_SetBit @ 14f0a7b80

void __cdecl Z_Construct_UClass_USynthKnob_Statics::NewProp_Locked_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4e0) = 1;
  return;
}

// NewProp_IsFocusable_SetBit @ 14f0a7b90

void __cdecl Z_Construct_UClass_USynthKnob_Statics::NewProp_IsFocusable_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4e1) = 1;
  return;
}

// Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm @ 14f0a7ba0

UFunction * __cdecl Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequency @ 14f0a7be0

UFunction * __cdecl Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequency(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequency_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod @ 14f0a7c20

UFunction * __cdecl
Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQ @ 14f0a7c60

UFunction * __cdecl Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQ(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQ_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQMod @ 14f0a7ca0

UFunction * __cdecl Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQMod(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQMod_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType @ 14f0a7d60

UFunction * __cdecl Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings @ 14f0a7e10

UFunction * __cdecl Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_Synthesis_ESynthSlateColorStyle @ 14f0a80e0

UEnum * __cdecl Z_Construct_UEnum_Synthesis_ESynthSlateColorStyle(void)

{
  if (Z_Registration_Info_UEnum_ESynthSlateColorStyle.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESynthSlateColorStyle.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_ESynthSlateColorStyle_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESynthSlateColorStyle.InnerSingleton;
}

// Z_Construct_UEnum_Synthesis_ESynthSlateSizeType @ 14f0a8120

UEnum * __cdecl Z_Construct_UEnum_Synthesis_ESynthSlateSizeType(void)

{
  if (Z_Registration_Info_UEnum_ESynthSlateSizeType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESynthSlateSizeType.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_ESynthSlateSizeType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESynthSlateSizeType.InnerSingleton;
}

// ESynthSlateSizeType_StaticEnum @ 14f0a81a0

UEnum * __cdecl ESynthSlateSizeType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESynthSlateSizeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESynthSlateSizeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthSlateSizeType,(UObject *)pUVar1,
                       L"ESynthSlateSizeType");
  }
  return Z_Registration_Info_UEnum_ESynthSlateSizeType.OuterSingleton;
}

// ESynthSlateColorStyle_StaticEnum @ 14f0a82a0

UEnum * __cdecl ESynthSlateColorStyle_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESynthSlateColorStyle.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESynthSlateColorStyle.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthSlateColorStyle,(UObject *)pUVar1,
                       L"ESynthSlateColorStyle");
  }
  return Z_Registration_Info_UEnum_ESynthSlateColorStyle.OuterSingleton;
}

// NewStructOps @ 14f0a83d0

void * __cdecl Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSynthSlateStyle,&UE::CoreUObject::Private::Construct<FSynthSlateStyle>,&UE::CoreUObject::Private::ConstructForTests<FSynthSlateStyle>,&UE::CoreUObject::Private::Destruct<FSynthSlateStyle>,&UE::CoreUObject::Private::Copy<FSynthSlateStyle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_USourceEffectPannerPreset @ 14f0a87c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USourceEffectPannerPreset(void)

{
  if (Z_Registration_Info_UClass_USourceEffectPannerPreset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USourceEffectPannerPreset.OuterSingleton,
               &Z_Construct_UClass_USourceEffectPannerPreset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USourceEffectPannerPreset.OuterSingleton;
}

// Z_Construct_UScriptStruct_FSourceEffectPannerSettings @ 14f0a8800

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSourceEffectPannerSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSourceEffectPannerSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSourceEffectPannerSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FSourceEffectPannerSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSourceEffectPannerSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSourceEffectPannerSettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14f0a8880

void * __cdecl Z_Construct_UScriptStruct_FSourceEffectPannerSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSourceEffectPannerSettings,&UE::CoreUObject::Private::Construct<FSourceEffectPannerSettings>,&UE::CoreUObject::Private::ConstructForTests<FSourceEffectPannerSettings>,&UE::CoreUObject::Private::Destruct<FSourceEffectPannerSettings>,&UE::CoreUObject::Private::Copy<FSourceEffectPannerSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UModularSynthComponent @ 14f0a88c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UModularSynthComponent(void)

{
  if (Z_Registration_Info_UClass_UModularSynthComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UModularSynthComponent.OuterSingleton,
               &Z_Construct_UClass_UModularSynthComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UModularSynthComponent.OuterSingleton;
}

// Z_Construct_UClass_UModularSynthLibrary @ 14f0a8900

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UModularSynthLibrary(void)

{
  if (Z_Registration_Info_UClass_UModularSynthLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UModularSynthLibrary.OuterSingleton,
               &Z_Construct_UClass_UModularSynthLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UModularSynthLibrary.OuterSingleton;
}

// Z_Construct_UClass_UModularSynthPresetBank @ 14f0a8940

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UModularSynthPresetBank(void)

{
  if (Z_Registration_Info_UClass_UModularSynthPresetBank.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UModularSynthPresetBank.OuterSingleton,
               &Z_Construct_UClass_UModularSynthPresetBank_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UModularSynthPresetBank.OuterSingleton;
}

// Z_Construct_UScriptStruct_FEpicSynth1Patch @ 14f0a8980

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEpicSynth1Patch(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEpicSynth1Patch.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEpicSynth1Patch.InnerSingleton,
               &Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEpicSynth1Patch.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEpicSynth1Patch.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FModularSynthPreset @ 14f0a8a00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FModularSynthPreset(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FModularSynthPreset.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FModularSynthPreset.InnerSingleton,
               &Z_Construct_UScriptStruct_FModularSynthPreset_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FModularSynthPreset.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FModularSynthPreset.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FModularSynthPresetBankEntry @ 14f0a8a80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FModularSynthPresetBankEntry(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FModularSynthPresetBankEntry.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FModularSynthPresetBankEntry.InnerSingleton,
               &Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FModularSynthPresetBankEntry.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FModularSynthPresetBankEntry.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14f0a8b00

void * __cdecl Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEpicSynth1Patch,&UE::CoreUObject::Private::Construct<FEpicSynth1Patch>,&UE::CoreUObject::Private::ConstructForTests<FEpicSynth1Patch>,&UE::CoreUObject::Private::Destruct<FEpicSynth1Patch>,&UE::CoreUObject::Private::Copy<FEpicSynth1Patch>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_USubmixEffectTapDelayPreset @ 14f0a8b40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USubmixEffectTapDelayPreset(void)

{
  if (Z_Registration_Info_UClass_USubmixEffectTapDelayPreset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USubmixEffectTapDelayPreset.OuterSingleton,
               &Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USubmixEffectTapDelayPreset.OuterSingleton;
}

// Z_Construct_UEnum_Synthesis_ETapLineMode @ 14f0a8b80

UEnum * __cdecl Z_Construct_UEnum_Synthesis_ETapLineMode(void)

{
  if (Z_Registration_Info_UEnum_ETapLineMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETapLineMode.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_ETapLineMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETapLineMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings @ 14f0a8bc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSubmixEffectTapDelaySettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSubmixEffectTapDelaySettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSubmixEffectTapDelaySettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSubmixEffectTapDelaySettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UFunction_USourceEffectPannerPreset_SetSettings @ 14f0a8c40

UFunction * __cdecl Z_Construct_UFunction_USourceEffectPannerPreset_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectPannerPreset_SetSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FTapDelayInfo @ 14f0a8c80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTapDelayInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTapDelayInfo.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTapDelayInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FTapDelayInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTapDelayInfo.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTapDelayInfo.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// ETapLineMode_StaticEnum @ 14f0a8d00

UEnum * __cdecl ETapLineMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETapLineMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ETapLineMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ETapLineMode,(UObject *)pUVar1,L"ETapLineMode");
  }
  return Z_Registration_Info_UEnum_ETapLineMode.OuterSingleton;
}

// NewProp_bEnablePolyphony_SetBit @ 14f0a8d40

void __cdecl
Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnablePolyphony_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 8) = *(uint *)((longlong)param_1 + 8) | 1;
  return;
}

// NewStructOps @ 14f0a8d80

void * __cdecl Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTapDelayInfo,&UE::CoreUObject::Private::Construct<FTapDelayInfo>,&UE::CoreUObject::Private::ConstructForTests<FTapDelayInfo>,&UE::CoreUObject::Private::Destruct<FTapDelayInfo>,&UE::CoreUObject::Private::Copy<FTapDelayInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bEnableUnison_SetBit @ 14f0a8dd0

void __cdecl
Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnableUnison_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x40) = *(uint *)((longlong)param_1 + 0x40) | 1;
  return;
}

// NewProp_bEnableOscillatorSync_SetBit @ 14f0a8de0

void __cdecl
Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnableOscillatorSync_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x40) = *(uint *)((longlong)param_1 + 0x40) | 2;
  return;
}

// NewProp_bInvertModulationEnvelope_SetBit @ 14f0a8e20

void __cdecl
Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bInvertModulationEnvelope_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x7c) = *(uint *)((longlong)param_1 + 0x7c) | 1;
  return;
}

// NewProp_bInvertModulationEnvelopeBias_SetBit @ 14f0a8e30

void __cdecl
Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bInvertModulationEnvelopeBias_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x7c) = *(uint *)((longlong)param_1 + 0x7c) | 2;
  return;
}

// NewProp_bLegato_SetBit @ 14f0a8e60

void __cdecl
Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bLegato_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x94) = *(uint *)((longlong)param_1 + 0x94) | 1;
  return;
}

// NewProp_bRetrigger_SetBit @ 14f0a8e70

void __cdecl
Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bRetrigger_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x94) = *(uint *)((longlong)param_1 + 0x94) | 2;
  return;
}

// NewProp_bStereoDelayEnabled_SetBit @ 14f0a8eb0

void __cdecl
Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bStereoDelayEnabled_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) | 1;
  return;
}

// NewProp_bChorusEnabled_SetBit @ 14f0a8ec0

void __cdecl
Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bChorusEnabled_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xbc) = *(uint *)((longlong)param_1 + 0xbc) | 1;
  return;
}

// NewStructOps @ 14f0a8f60

void * __cdecl Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FModularSynthPreset,&UE::CoreUObject::Private::Construct<FModularSynthPreset>,&UE::CoreUObject::Private::ConstructForTests<FModularSynthPreset>,&UE::CoreUObject::Private::Destruct<FModularSynthPreset>,&UE::CoreUObject::Private::Copy<FModularSynthPreset>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14f0a8fa0

void * __cdecl Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSubmixEffectTapDelaySettings,&UE::CoreUObject::Private::Construct<FSubmixEffectTapDelaySettings>,&UE::CoreUObject::Private::ConstructForTests<FSubmixEffectTapDelaySettings>,&UE::CoreUObject::Private::Destruct<FSubmixEffectTapDelaySettings>,&UE::CoreUObject::Private::Copy<FSubmixEffectTapDelaySettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_USubmixEffectTapDelayPreset_AddTap @ 14f0a9060

UFunction * __cdecl Z_Construct_UFunction_USubmixEffectTapDelayPreset_AddTap(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectTapDelayPreset_AddTap_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds @ 14f0a91a0

UFunction * __cdecl
Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap @ 14f0a92a0

UFunction * __cdecl Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds @ 14f0a9320

UFunction * __cdecl Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USourceEffectConvolutionReverbPreset @ 14f0a9360

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USourceEffectConvolutionReverbPreset(void)

{
  if (Z_Registration_Info_UClass_USourceEffectConvolutionReverbPreset.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USourceEffectConvolutionReverbPreset.OuterSingleton,
               &Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USourceEffectConvolutionReverbPreset.OuterSingleton;
}

// Z_Construct_UFunction_USubmixEffectTapDelayPreset_RemoveTap @ 14f0a93a0

UFunction * __cdecl Z_Construct_UFunction_USubmixEffectTapDelayPreset_RemoveTap(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectTapDelayPreset_RemoveTap_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings @ 14f0a93e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSourceEffectConvolutionReverbSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSourceEffectConvolutionReverbSettings.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSourceEffectConvolutionReverbSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSourceEffectConvolutionReverbSettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewProp_bBypass_SetBit @ 14f0a9490

void __cdecl
Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewProp_bBypass_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewStructOps @ 14f0a9590

void * __cdecl
Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSourceEffectConvolutionReverbSettings,&UE::CoreUObject::Private::Construct<FSourceEffectConvolutionReverbSettings>,&UE::CoreUObject::Private::ConstructForTests<FSourceEffectConvolutionReverbSettings>,&UE::CoreUObject::Private::Destruct<FSourceEffectConvolutionReverbSettings>,&UE::CoreUObject::Private::Copy<FSourceEffectConvolutionReverbSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14f0a95e0

void * __cdecl Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xf0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FModularSynthPresetBankEntry,&UE::CoreUObject::Private::Construct<FModularSynthPresetBankEntry>,&UE::CoreUObject::Private::ConstructForTests<FModularSynthPresetBankEntry>,&UE::CoreUObject::Private::Destruct<FModularSynthPresetBankEntry>,&UE::CoreUObject::Private::Copy<FModularSynthPresetBankEntry>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetInterpolationTime @ 14f0a9670

UFunction * __cdecl Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetInterpolationTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetInterpolationTime_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings @ 14f0a9810

UFunction * __cdecl Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USourceEffectPhaserPreset @ 14f0a9850

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USourceEffectPhaserPreset(void)

{
  if (Z_Registration_Info_UClass_USourceEffectPhaserPreset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USourceEffectPhaserPreset.OuterSingleton,
               &Z_Construct_UClass_USourceEffectPhaserPreset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USourceEffectPhaserPreset.OuterSingleton;
}

// Z_Construct_UEnum_Synthesis_EPhaserLFOType @ 14f0a9890

UEnum * __cdecl Z_Construct_UEnum_Synthesis_EPhaserLFOType(void)

{
  if (Z_Registration_Info_UEnum_EPhaserLFOType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPhaserLFOType.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_EPhaserLFOType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPhaserLFOType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FSourceEffectPhaserSettings @ 14f0a98d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSourceEffectPhaserSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSourceEffectPhaserSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSourceEffectPhaserSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSourceEffectPhaserSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSourceEffectPhaserSettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// EPhaserLFOType_StaticEnum @ 14f0a9950

UEnum * __cdecl EPhaserLFOType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPhaserLFOType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_EPhaserLFOType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_EPhaserLFOType,(UObject *)pUVar1,
                       L"EPhaserLFOType");
  }
  return Z_Registration_Info_UEnum_EPhaserLFOType.OuterSingleton;
}

// Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap @ 14f0a9990

UFunction * __cdecl Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetImpulseResponse @ 14f0a99d0

UFunction * __cdecl
Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetImpulseResponse(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetImpulseResponse_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_UseQuadraturePhase_SetBit @ 14f0a9a10

void __cdecl
Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_UseQuadraturePhase_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  return;
}

// NewStructOps @ 14f0a9a20

void * __cdecl Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSourceEffectPhaserSettings,&UE::CoreUObject::Private::Construct<FSourceEffectPhaserSettings>,&UE::CoreUObject::Private::ConstructForTests<FSourceEffectPhaserSettings>,&UE::CoreUObject::Private::Destruct<FSourceEffectPhaserSettings>,&UE::CoreUObject::Private::Copy<FSourceEffectPhaserSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings @ 14f0a9ac0

UFunction * __cdecl Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USubmixEffectFlexiverbPreset @ 14f0a9b70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USubmixEffectFlexiverbPreset(void)

{
  if (Z_Registration_Info_UClass_USubmixEffectFlexiverbPreset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USubmixEffectFlexiverbPreset.OuterSingleton,
               &Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USubmixEffectFlexiverbPreset.OuterSingleton;
}

// Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings @ 14f0a9bb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSubmixEffectFlexiverbSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSubmixEffectFlexiverbSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSubmixEffectFlexiverbSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSubmixEffectFlexiverbSettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14f0a9c30

void * __cdecl Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSubmixEffectFlexiverbSettings,&UE::CoreUObject::Private::Construct<FSubmixEffectFlexiverbSettings>,&UE::CoreUObject::Private::ConstructForTests<FSubmixEffectFlexiverbSettings>,&UE::CoreUObject::Private::Destruct<FSubmixEffectFlexiverbSettings>,&UE::CoreUObject::Private::Copy<FSubmixEffectFlexiverbSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bEnableHardwareAcceleration_SetBit @ 14f0a9c70

void __cdecl
Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::
NewProp_bEnableHardwareAcceleration_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x81) = 1;
  return;
}

// Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset @ 14f0a9d40

UFunction * __cdecl
Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings @ 14f0a9d80

UFunction * __cdecl Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USynthComponentToneGenerator @ 14f0a9dc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USynthComponentToneGenerator(void)

{
  if (Z_Registration_Info_UClass_USynthComponentToneGenerator.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USynthComponentToneGenerator.OuterSingleton,
               &Z_Construct_UClass_USynthComponentToneGenerator_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USynthComponentToneGenerator.OuterSingleton;
}

// Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings @ 14f0a9e00

UFunction * __cdecl Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency @ 14f0a9e40

UFunction * __cdecl Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume @ 14f0a9ee0

UFunction * __cdecl Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableByDefault_SetBit @ 14f0aa260

void __cdecl
Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_bEnableByDefault_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UModularSynthComponent_CreatePatch @ 14f0aa2d0

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_CreatePatch(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMonoWaveTableSynthPreset @ 14f0aa330

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMonoWaveTableSynthPreset(void)

{
  if (Z_Registration_Info_UClass_UMonoWaveTableSynthPreset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMonoWaveTableSynthPreset.OuterSingleton,
               &Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMonoWaveTableSynthPreset.OuterSingleton;
}

// Z_Construct_UClass_USynthComponentMonoWaveTable @ 14f0aa370

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USynthComponentMonoWaveTable(void)

{
  if (Z_Registration_Info_UClass_USynthComponentMonoWaveTable.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USynthComponentMonoWaveTable.OuterSingleton,
               &Z_Construct_UClass_USynthComponentMonoWaveTable_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USynthComponentMonoWaveTable.OuterSingleton;
}

// Z_Construct_UEnum_Synthesis_CurveInterpolationType @ 14f0aa3b0

UEnum * __cdecl Z_Construct_UEnum_Synthesis_CurveInterpolationType(void)

{
  if (Z_Registration_Info_UEnum_CurveInterpolationType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_CurveInterpolationType.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_CurveInterpolationType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_CurveInterpolationType.InnerSingleton;
}

// NewProp_bLockKeyframesToGridBool_SetBit @ 14f0aa530

void __cdecl
Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics::NewProp_bLockKeyframesToGridBool_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x38) = *(byte *)((longlong)param_1 + 0x38) | 1;
  return;
}

// NewProp_bAllNotesOff_SetBit @ 14f0aa540

void __cdecl
Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::NewProp_bAllNotesOff_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewProp_bKillAllNotes_SetBit @ 14f0aa550

void __cdecl
Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::NewProp_bKillAllNotes_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 5) = 1;
  return;
}

// NewProp_bNormalizeWaveTables_SetBit @ 14f0aa560

void __cdecl
Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics::NewProp_bNormalizeWaveTables_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x58) = *(byte *)((longlong)param_1 + 0x58) | 1;
  return;
}

// Z_Construct_UClass_USourceEffectRingModulationPreset @ 14f0aa570

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USourceEffectRingModulationPreset(void)

{
  if (Z_Registration_Info_UClass_USourceEffectRingModulationPreset.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USourceEffectRingModulationPreset.OuterSingleton,
               &Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USourceEffectRingModulationPreset.OuterSingleton;
}

// Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect @ 14f0aa5b0

UEnum * __cdecl Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect(void)

{
  if (Z_Registration_Info_UEnum_ERingModulatorTypeSourceEffect.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERingModulatorTypeSourceEffect.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERingModulatorTypeSourceEffect.InnerSingleton;
}

// Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings @ 14f0aa5f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSourceEffectRingModulationSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSourceEffectRingModulationSettings.InnerSingleton
               ,&Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FSourceEffectRingModulationSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSourceEffectRingModulationSettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// ERingModulatorTypeSourceEffect_StaticEnum @ 14f0aa670

UEnum * __cdecl ERingModulatorTypeSourceEffect_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERingModulatorTypeSourceEffect.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ERingModulatorTypeSourceEffect.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect,(UObject *)pUVar1,
                       L"ERingModulatorTypeSourceEffect");
  }
  return Z_Registration_Info_UEnum_ERingModulatorTypeSourceEffect.OuterSingleton;
}

// Z_Construct_UFunction_UModularSynthComponent_NoteOff @ 14f0aa6b0

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_NoteOff(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14f0aa6f0

void * __cdecl
Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSourceEffectRingModulationSettings,&UE::CoreUObject::Private::Construct<FSourceEffectRingModulationSettings>,&UE::CoreUObject::Private::ConstructForTests<FSourceEffectRingModulationSettings>,&UE::CoreUObject::Private::Destruct<FSourceEffectRingModulationSettings>,&UE::CoreUObject::Private::Copy<FSourceEffectRingModulationSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UModularSynthComponent_NoteOn @ 14f0aa730

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_NoteOn(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetAttackTime @ 14f0aa770

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetAttackTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetAttackTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// CurveInterpolationType_StaticEnum @ 14f0aa870

UEnum * __cdecl CurveInterpolationType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_CurveInterpolationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_CurveInterpolationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_CurveInterpolationType,(UObject *)pUVar1,
                       L"CurveInterpolationType");
  }
  return Z_Registration_Info_UEnum_CurveInterpolationType.OuterSingleton;
}

// Z_Construct_UFunction_UModularSynthComponent_SetChorusDepth @ 14f0aa8b0

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetChorusDepth(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetChorusDepth_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_EnableChorus_SetBit @ 14f0aa8f0

void __cdecl
Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled_Statics::NewProp_EnableChorus_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings @ 14f0aa900

UFunction * __cdecl Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled @ 14f0aa940

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponentMonoWaveTable_GetCurveTangent @ 14f0aa980

UFunction * __cdecl Z_Construct_UFunction_USynthComponentMonoWaveTable_GetCurveTangent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponentMonoWaveTable_GetCurveTangent_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USynthSamplePlayer @ 14f0aa9c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USynthSamplePlayer(void)

{
  if (Z_Registration_Info_UClass_USynthSamplePlayer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USynthSamplePlayer.OuterSingleton,
               &Z_Construct_UClass_USynthSamplePlayer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USynthSamplePlayer.OuterSingleton;
}

// Z_Construct_UEnum_Synthesis_ESamplePlayerSeekType @ 14f0aaa00

UEnum * __cdecl Z_Construct_UEnum_Synthesis_ESamplePlayerSeekType(void)

{
  if (Z_Registration_Info_UEnum_ESamplePlayerSeekType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESamplePlayerSeekType.InnerSingleton,
               &Z_Construct_UEnum_Synthesis_ESamplePlayerSeekType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESamplePlayerSeekType.InnerSingleton;
}

// ESamplePlayerSeekType_StaticEnum @ 14f0aaa40

UEnum * __cdecl ESamplePlayerSeekType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESamplePlayerSeekType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESamplePlayerSeekType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESamplePlayerSeekType,(UObject *)pUVar1,
                       L"ESamplePlayerSeekType");
  }
  return Z_Registration_Info_UEnum_ESamplePlayerSeekType.OuterSingleton;
}

// Z_Construct_UFunction_UModularSynthComponent_SetChorusFeedback @ 14f0aaa80

UFunction * __cdecl Z_Construct_UFunction_UModularSynthComponent_SetChorusFeedback(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularSynthComponent_SetChorusFeedback_Statics::FuncParams);
  }
  return ReturnFunction;
}

// BinarySearchBy<TArray<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>,int,TSortedMap<int,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_> @ 14f0aaf00

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>,int,TSortedMap<int,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_>
          (TArray<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
           *param_1,int *param_2,FKeyForward param_3,TLess<int_const_> param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(int *)(pFVar2 + (longlong)iVar4 * 0x18) < *param_2) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar1 <= iVar5) {
    return -1;
  }
  iVar4 = -1;
  if (*(int *)(pFVar2 + (longlong)iVar5 * 0x18) <= *param_2) {
    iVar4 = iVar5;
  }
  return iVar4;
}

// CastChecked<USourceEffectConvolutionReverbPreset,USoundEffectPreset> @ 14f0aaf80

USourceEffectConvolutionReverbPreset * __cdecl
CastChecked<USourceEffectConvolutionReverbPreset,USoundEffectPreset>(USoundEffectPreset *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (USoundEffectPreset *)0x0) {
    pFVar3 = GetTypeName<USourceEffectConvolutionReverbPreset>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = USourceEffectConvolutionReverbPreset::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (USourceEffectConvolutionReverbPreset *)param_1;
  }
  pFVar3 = GetTypeName<USourceEffectConvolutionReverbPreset>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<USoundEffectPreset>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<USubmixEffectConvolutionReverbPreset,USoundEffectPreset> @ 14f0ab040

USubmixEffectConvolutionReverbPreset * __cdecl
CastChecked<USubmixEffectConvolutionReverbPreset,USoundEffectPreset>(USoundEffectPreset *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (USoundEffectPreset *)0x0) {
    pFVar3 = GetTypeName<USubmixEffectConvolutionReverbPreset>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = USubmixEffectConvolutionReverbPreset::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (USubmixEffectConvolutionReverbPreset *)param_1;
  }
  pFVar3 = GetTypeName<USubmixEffectConvolutionReverbPreset>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<USoundEffectPreset>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<FEpicSynth1Patch,FEpicSynth1Patch,int> @ 14f0ab100

void __cdecl
ConstructItems<FEpicSynth1Patch,FEpicSynth1Patch,int>
          (void *param_1,FEpicSynth1Patch *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  FEpicSynth1Patch *pFVar3;
  ForAnyElementType *pFVar4;
  TArray<FSynth1PatchCable,TSizedDefaultAllocator<32>_> *pTVar5;
  
  if (param_3 != 0) {
    pFVar4 = (ForAnyElementType *)((longlong)param_1 + 8);
    pFVar3 = param_2;
    do {
      pTVar5 = &pFVar3->PatchCables;
      *(undefined1 *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)pTVar5) =
           *(undefined1 *)((longlong)(pTVar5 + -1) + 8);
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      pFVar4->Data = (FScriptContainerElement *)0x0;
      iVar2 = pTVar5->ArrayNum;
      _Src = (pTVar5->AllocatorInstance).Data;
      *(int *)&pFVar4[1].Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar2,0,pFVar4,iVar2,piVar1);
        memcpy(pFVar4->Data,_Src,(longlong)iVar2 << 3);
      }
      pFVar3 = (FEpicSynth1Patch *)(pTVar5 + 1);
      pFVar4 = pFVar4 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<Audio::FPatchDestination,Audio::FPatchDestination,int> @ 14f0ab1d0

void __cdecl
ConstructItems<Audio::FPatchDestination,Audio::FPatchDestination,int>
          (void *param_1,FPatchDestination *param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  
  if (param_3 != 0) {
    pfVar1 = (float *)((longlong)param_1 + 8);
    pfVar2 = &param_2->Depth;
    do {
      pfVar1[-2] = *(float *)((longlong)pfVar1 + (longlong)param_2 + (-8 - (longlong)param_1));
      pfVar1[-1] = pfVar2[-1];
      *pfVar1 = *pfVar2;
      FString::FString((FString *)(pfVar1 + 2),(FString *)(pfVar2 + 2));
      pfVar2 = pfVar2 + 8;
      pfVar1 = pfVar1 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRuntimeFloatCurve,FRuntimeFloatCurve,int> @ 14f0ab250

void __cdecl
ConstructItems<FRuntimeFloatCurve,FRuntimeFloatCurve,int>
          (void *param_1,FRuntimeFloatCurve *param_2,int param_3)

{
  FRichCurve *this;
  UCurveFloat *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      this = (FRichCurve *)(lVar2 + (longlong)param_2);
      FRichCurve::FRichCurve(this,&param_2->EditorCurveData);
      pUVar1 = (param_2->ExternalCurve).field0_0x0.DebugPtr;
      this[1]._padding_ = (longlong)pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UCurveFloat *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FSourceEffectFilterAudioBusModulationSettings,FSourceEffectFilterAudioBusModulationSettings,int> @ 14f0ab2e0

void __cdecl
ConstructItems<FSourceEffectFilterAudioBusModulationSettings,FSourceEffectFilterAudioBusModulationSettings,int>
          (void *param_1,FSourceEffectFilterAudioBusModulationSettings *param_2,int param_3)

{
  float *pfVar1;
  UObject *pUVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0xc);
    piVar4 = &param_2->EnvelopeFollowerReleaseTimeMsec;
    do {
      pUVar2 = *(UObject **)((longlong)piVar3 + (longlong)param_2 + (-0xc - (longlong)param_1));
      *(UObject **)(piVar3 + -3) = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      piVar3[-1] = piVar4[-1];
      *piVar3 = *piVar4;
      piVar3[1] = piVar4[1];
      *(ESourceEffectFilterParam *)(piVar3 + 2) = *(ESourceEffectFilterParam *)(piVar4 + 2);
      piVar3[3] = piVar4[3];
      piVar3[4] = piVar4[4];
      piVar3[5] = piVar4[5];
      pfVar1 = (float *)(piVar4 + 6);
      piVar4 = piVar4 + 10;
      piVar3[6] = (int)*pfVar1;
      piVar3 = piVar3 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>,TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>,int> @ 14f0ab390

void __cdecl
ConstructItems<TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>,TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>,int>
          (void *param_1,TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *param_2,
          int param_3)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      ((ForAnyElementType *)param_1)->Data = (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)&((ForAnyElementType *)((longlong)param_1 + 8))->Data + 4);
      iVar2 = *(int *)(lVar3 + 8 + (longlong)param_1);
      _Src = *(void **)(lVar3 + (longlong)param_1);
      *(int *)&((ForAnyElementType *)((longlong)param_1 + 8))->Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,param_1,iVar2,piVar1);
        memcpy(((ForAnyElementType *)param_1)->Data,_Src,(longlong)iVar2 << 2);
      }
      param_1 = (void *)((longlong)param_1 + 0x10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FSourceEffectFilter::FAudioBusModulationData,int> @ 14f0ab440

void __cdecl
DefaultConstructItems<FSourceEffectFilter::FAudioBusModulationData,int>(void *param_1,int param_2)

{
  FEnvelopeFollower *this;
  
  if (param_2 != 0) {
    this = (FEnvelopeFollower *)((longlong)param_1 + 0x10);
    do {
      this[-1].Smoother.PriorEnvelopeValues.ArrayNum = 0;
      this[-1].Smoother.PriorEnvelopeValues.ArrayMax = 0;
      this[-1].NumChannels = 0;
      this[-1].EnvMode = MeanSquared;
      Audio::FEnvelopeFollower::FEnvelopeFollower(this);
      *(undefined8 *)((longlong)&this[1].WorkBuffer.AllocatorInstance.Data + 4) = 0;
      *(undefined8 *)&this[1].WorkBuffer.ArrayMax = 0;
      this[1].MeanSquaredProcessor.NumChannels = 0;
      this = (FEnvelopeFollower *)&this[1].MeanSquaredProcessor.ChannelValues.ArrayNum;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<Audio::FBaseChannelFormatConverter::FChannelMixEntry,int> @ 14f0ab4a0

void __cdecl
DefaultConstructItems<Audio::FBaseChannelFormatConverter::FChannelMixEntry,int>
          (void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FRuntimeFloatCurve,int> @ 14f0ab4d0

void __cdecl DefaultConstructItems<FRuntimeFloatCurve,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FRuntimeFloatCurve::FRuntimeFloatCurve(param_1);
    param_1 = (void *)((longlong)param_1 + 0x88);
  }
  return;
}

// DefaultConstructItems<FTapDelayInterpolationInfo,int> @ 14f0ab510

void __cdecl DefaultConstructItems<FTapDelayInterpolationInfo,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + 1) = 0x472c4400;
      *(undefined8 *)(puVar1 + 3) = 0;
      *(undefined1 *)(puVar1 + 5) = 1;
      *(undefined8 *)(puVar1 + 6) = 0;
      puVar1[8] = 0;
      *(undefined8 *)(puVar1 + 9) = 0x472c4400;
      *(undefined8 *)(puVar1 + 0xb) = 0;
      *(undefined1 *)(puVar1 + 0xd) = 1;
      puVar1 = puVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<Audio::FDelay,int> @ 14f0ab560

void __cdecl DefaultConstructItems<Audio::FDelay,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    Audio::FDelay::FDelay(param_1);
    param_1 = (void *)((longlong)param_1 + 0x58);
  }
  return;
}

// DefaultConstructItems<Audio::FDynamicsProcessor,int> @ 14f0ab5a0

void __cdecl DefaultConstructItems<Audio::FDynamicsProcessor,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    Audio::FDynamicsProcessor::FDynamicsProcessor(param_1);
    param_1 = (void *)((longlong)param_1 + 0xf8);
  }
  return;
}

// DestructItems<FSourceEffectFilter::FAudioBusModulationData,int> @ 14f0ab640

void __cdecl
DestructItems<FSourceEffectFilter::FAudioBusModulationData,int>
          (FAudioBusModulationData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &(param_1->AudioBusEnvelopeFollower).MeanSquaredProcessor.ChannelValues;
    do {
      if (*(void **)(pTVar2 + 3) != (void *)0x0) {
        FMemory::Free(*(void **)(pTVar2 + 3));
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)(pTVar2 + -2) != (void *)0x0) {
        FMemory::Free(*(void **)(pTVar2 + -2));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((longlong)(pTVar2 + -3) + 8));
      pTVar2 = pTVar2 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FEpicSynth1Patch,int> @ 14f0ab6b0

void __cdecl DestructItems<FEpicSynth1Patch,int>(FEpicSynth1Patch *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->PatchCables).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FEpicSynth1Patch *)(&param_1->PatchCables + 1);
  }
  return;
}

// DestructItems<FModularSynthPresetBankEntry,int> @ 14f0ab6f0

void __cdecl
DestructItems<FModularSynthPresetBankEntry,int>(FModularSynthPresetBankEntry *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FEpicSynth1Patch,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &(param_1->Preset).Patches;
    do {
      DestructItems<FEpicSynth1Patch,int>
                ((FEpicSynth1Patch *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      ((FModularSynthPreset *)(pTVar2 + -0xd))->_padding_ = (longlong)&___7FTableRowBase__6B_;
      if (*(void **)(pTVar2 + -0xe) != (void *)0x0) {
        FMemory::Free(*(void **)(pTVar2 + -0xe));
      }
      pTVar2 = pTVar2 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Audio::FPatchDestination,int> @ 14f0ab770

void __cdecl DestructItems<Audio::FPatchDestination,int>(FPatchDestination *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Name;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRuntimeFloatCurve,int> @ 14f0ab7b0

void __cdecl DestructItems<FRuntimeFloatCurve,int>(FRuntimeFloatCurve *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = &(param_1->EditorCurveData)._padding_;
    do {
      pFVar1 = (((TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *)(plVar2 + 4))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      ((FRichCurve *)(plVar2 + -10))->_padding_ = (longlong)&___7FIndexedCurve__6B_;
      if ((void *)plVar2[1] != (void *)0x0) {
        FMemory::Free((void *)plVar2[1]);
      }
      *(undefined4 *)plVar2 = 0;
      if ((void *)plVar2[-1] != (void *)0x0) {
        FMemory::Free((void *)plVar2[-1]);
      }
      TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(plVar2 + -9));
      plVar2 = plVar2 + 0x11;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<Audio::FLinearEase,TSizedDefaultAllocator<32>_>,int> @ 14f0ab840

void __cdecl
DestructItems<TArray<Audio::FLinearEase,TSizedDefaultAllocator<32>_>,int>
          (TArray<Audio::FLinearEase,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>,int> @ 14f0ab880

void __cdecl
DestructItems<TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>,int>
          (TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<Audio::TSampleBuffer<float>,int> @ 14f0ab8c0

void __cdecl
DestructItems<Audio::TSampleBuffer<float>,int>(TSampleBuffer<float> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->RawPCMData).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<Audio::FDelayAPF,int> @ 14f0ab900

void __cdecl DestructItems<Audio::FDelayAPF,int>(FDelayAPF *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    Audio::FDelayAPF::~FDelayAPF(param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<Audio::FDynamicsProcessor,int> @ 14f0ab940

void __cdecl DestructItems<Audio::FDynamicsProcessor,int>(FDynamicsProcessor *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    Audio::FDynamicsProcessor::~FDynamicsProcessor(param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// GetFullNameForCastLogError<USoundEffectPreset> @ 14f0ad670

FString * __cdecl
GetFullNameForCastLogError<USoundEffectPreset>
          (FString *__return_storage_ptr__,USoundEffectPreset *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<USourceEffectConvolutionReverbPreset> @ 14f0ad6a0

FString * __cdecl GetTypeName<USourceEffectConvolutionReverbPreset>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = USourceEffectConvolutionReverbPreset::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<USubmixEffectConvolutionReverbPreset> @ 14f0ad6e0

FString * __cdecl GetTypeName<USubmixEffectConvolutionReverbPreset>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = USubmixEffectConvolutionReverbPreset::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,`ISynthSlateResources::GetImagesAtPath'::__l2::<lambda_1>_>_> @ 14f0ad720

void __cdecl
AlgoImpl::
HeapSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,_ISynthSlateResources::GetImagesAtPath_::__l2::<lambda_1>_>_>
          (FString *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FString,_protected:_virtual_void___cdecl_ISynthSlateResources::GetImagesAtPath(FString_const_&,TArray<TSharedPtr<FSlateDynamicImageBrush,1>,TSizedDefaultAllocator<32>_>_&,float)_::_2_::<lambda_1>_>
          param_4)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  FString *pFVar13;
  FString *pFVar14;
  FString *pFVar15;
  
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar5 = (param_2 + -2) / 2;
  iVar8 = iVar5 * 2 + 1;
  iVar12 = iVar5;
  iVar9 = iVar8;
  do {
    while (param_2 <= iVar8) {
LAB_14f0ad865:
      if (iVar12 == 0) {
        iVar8 = param_2 + -1;
        lVar10 = (longlong)iVar8;
        if (0 < iVar8) {
          pFVar13 = param_1 + lVar10;
          do {
            iVar9 = (pFVar13->Data).ArrayNum;
            iVar12 = (pFVar13->Data).ArrayMax;
            pFVar2 = (param_1->Data).AllocatorInstance.Data;
            iVar5 = (param_1->Data).ArrayNum;
            iVar11 = (param_1->Data).ArrayMax;
            (param_1->Data).AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
            (param_1->Data).ArrayNum = iVar9;
            (param_1->Data).ArrayMax = iVar12;
            (pFVar13->Data).AllocatorInstance.Data = pFVar2;
            (pFVar13->Data).ArrayNum = iVar5;
            (pFVar13->Data).ArrayMax = iVar11;
            iVar9 = 0;
            if (1 < iVar8) {
              do {
                iVar5 = iVar9 * 2;
                iVar12 = iVar5 + 1;
                if (iVar5 + 2 < iVar8) {
                  iVar11 = ISynthSlateResources::GetNumberForImageName
                                     ((param_4.Predicate)->__this,param_1 + (iVar5 + 2));
                  iVar6 = ISynthSlateResources::GetNumberForImageName
                                    ((param_4.Predicate)->__this,param_1 + iVar12);
                  if (iVar11 < iVar6) {
                    iVar12 = iVar5;
                  }
                  iVar12 = iVar12 + 1;
                }
                pFVar14 = param_1 + iVar9;
                iVar9 = ISynthSlateResources::GetNumberForImageName
                                  ((param_4.Predicate)->__this,pFVar14);
                pFVar15 = param_1 + iVar12;
                iVar5 = ISynthSlateResources::GetNumberForImageName
                                  ((param_4.Predicate)->__this,pFVar15);
                if (iVar5 <= iVar9) break;
                pFVar2 = (pFVar14->Data).AllocatorInstance.Data;
                iVar11 = (pFVar14->Data).ArrayNum;
                iVar6 = (pFVar14->Data).ArrayMax;
                iVar9 = (pFVar15->Data).ArrayNum;
                iVar5 = (pFVar15->Data).ArrayMax;
                (pFVar14->Data).AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
                (pFVar14->Data).ArrayNum = iVar9;
                (pFVar14->Data).ArrayMax = iVar5;
                (pFVar15->Data).AllocatorInstance.Data = pFVar2;
                (pFVar15->Data).ArrayNum = iVar11;
                (pFVar15->Data).ArrayMax = iVar6;
                iVar9 = iVar12;
              } while (iVar12 * 2 + 1 < iVar8);
            }
            lVar10 = lVar10 + -1;
            iVar8 = iVar8 + -1;
            pFVar13 = pFVar13 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar5 = iVar12 + -1;
      iVar8 = iVar9 + -2;
      iVar12 = iVar5;
      iVar9 = iVar8;
    }
    iVar8 = iVar5 * 2;
    iVar11 = iVar8 + 1;
    if (iVar8 + 2 < param_2) {
      iVar6 = ISynthSlateResources::GetNumberForImageName
                        ((param_4.Predicate)->__this,param_1 + (iVar8 + 2));
      iVar7 = ISynthSlateResources::GetNumberForImageName
                        ((param_4.Predicate)->__this,param_1 + iVar11);
      if (iVar6 < iVar7) {
        iVar11 = iVar8;
      }
      iVar11 = iVar11 + 1;
    }
    pFVar14 = param_1 + iVar5;
    iVar8 = ISynthSlateResources::GetNumberForImageName((param_4.Predicate)->__this,pFVar14);
    pFVar13 = param_1 + iVar11;
    iVar5 = ISynthSlateResources::GetNumberForImageName((param_4.Predicate)->__this,pFVar13);
    if (iVar5 <= iVar8) goto LAB_14f0ad865;
    pFVar2 = (pFVar14->Data).AllocatorInstance.Data;
    iVar7 = (pFVar14->Data).ArrayNum;
    iVar3 = (pFVar14->Data).ArrayMax;
    iVar8 = iVar11 * 2 + 1;
    iVar5 = (pFVar13->Data).ArrayNum;
    iVar6 = (pFVar13->Data).ArrayMax;
    (pFVar14->Data).AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
    (pFVar14->Data).ArrayNum = iVar5;
    (pFVar14->Data).ArrayMax = iVar6;
    (pFVar13->Data).AllocatorInstance.Data = pFVar2;
    (pFVar13->Data).ArrayNum = iVar7;
    (pFVar13->Data).ArrayMax = iVar3;
    iVar5 = iVar11;
  } while( true );
}

// InternalConstructor<UAudioImpulseResponse> @ 14f0ad9a0

void __cdecl InternalConstructor<UAudioImpulseResponse>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined4 *)&this[1].field_0x18 = 0xc1c00000;
    *(undefined ***)this = &___7UAudioImpulseResponse__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
  }
  return;
}

// InternalConstructor<UEnvelopeFollowerListener> @ 14f0ad9f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UEnvelopeFollowerListener>(FObjectInitializer *param_1)

{
  UActorComponent *this;
  
  this = (UActorComponent *)param_1->Obj;
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0xffffffff;
    this->_padding_ = (longlong)&UEnvelopeFollowerListener::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UEnvelopeFollowerListener::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UEnvelopeFollowerListener::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UGranularSynth> @ 14f0ada70

void __cdecl InternalConstructor<UGranularSynth>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  USynthComponent *this;
  
  this = (USynthComponent *)param_1->Obj;
  if (this != (USynthComponent *)0x0) {
    USynthComponent::USynthComponent(this,param_1);
    this->_padding_ = (longlong)&UGranularSynth::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UGranularSynth::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UGranularSynth::_vftable__for__IAsyncPhysicsStateProcessor__;
    Audio::FGranularSynth::FGranularSynth((FGranularSynth *)&this[1]._padding_);
    Audio::FSoundWavePCMLoader::FSoundWavePCMLoader
              ((FSoundWavePCMLoader *)&this[1].AttenuationOverrides.CustomHighpassAirAbsorptionCurve
              );
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 | 2;
    *(undefined2 *)
     &this[1].AttenuationOverrides.CustomHighpassAirAbsorptionCurve.EditorCurveData._padding_ = 0;
  }
  return;
}

// InternalConstructor<UModularSynthComponent> @ 14f0adaf0

void __cdecl InternalConstructor<UModularSynthComponent>(FObjectInitializer *param_1)

{
  USynthComponent *this;
  
  this = (USynthComponent *)param_1->Obj;
  if (this != (USynthComponent *)0x0) {
    USynthComponent::USynthComponent(this,param_1);
    this->_padding_ = (longlong)&UModularSynthComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UModularSynthComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UModularSynthComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    Audio::FEpicSynth1::FEpicSynth1((FEpicSynth1 *)&this[1]._padding_);
    *(undefined4 *)&this[1]._padding_ = 8;
  }
  return;
}

// InternalConstructor<UModularSynthLibrary> @ 14f0adb50

void __cdecl InternalConstructor<UModularSynthLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UModularSynthLibrary__6B_;
  }
  return;
}

// InternalConstructor<UModularSynthPresetBank> @ 14f0adb80

void __cdecl InternalConstructor<UModularSynthPresetBank>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UModularSynthPresetBank__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UMonoWaveTableSynthPreset> @ 14f0adbc0

void __cdecl InternalConstructor<UMonoWaveTableSynthPreset>(FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  UObject *this;
  FRuntimeFloatCurve *pFVar5;
  code *pcVar6;
  bool bVar7;
  FRichCurve *this_00;
  undefined1 in_R9B;
  float in_XMM1_Da;
  FKeyHandle aFStackX_8 [4];
  FKeyHandle aFStackX_18 [4];
  uint in_stack_ffffffffffffff88;
  FKeyHandle FVar8;
  FKeyHandle aFStack_58 [2];
  FKeyHandle aFStack_50 [2];
  FKeyHandle aFStack_48 [4];
  
  this = param_1->Obj;
  if (this == (UObject *)0x0) {
    return;
  }
  UObject::UObject(this);
  *(undefined ***)this = &___7UMonoWaveTableSynthPreset__6B_;
  FString::FString((FString *)(this + 1),L"Default");
  *(undefined4 *)&this[1].field_0x14 = 0x10;
  puVar1 = &this[1].field_0x20;
  *(undefined4 *)&this[1].field_0x18 = 0x200;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)(this + 2) = 0;
  this[2].field_0x8 = this[2].field_0x8 | 1;
  *(undefined8 *)&this[2].field_0x20 = 0;
  *(undefined8 *)(this + 3) = 0;
  *(undefined8 *)&this[3].field_0x20 = 0;
  *(undefined8 *)&this[4].field_0x8 = 0;
  *(undefined8 *)&this[2].field_0x10 = 0;
  *(undefined8 *)&this[2].field_0x18 = 0;
  *(undefined8 *)&this[3].field_0x8 = 0;
  *(undefined4 *)&this[3].field_0x10 = 0;
  *(undefined4 *)&this[3].field_0x14 = 0x80;
  *(undefined4 *)&this[3].field_0x18 = 0xffffffff;
  *(undefined4 *)&this[3].field_0x1c = 0;
  *(undefined8 *)(this + 4) = 0;
  *(undefined8 *)&this[4].field_0x10 = 0;
  *(undefined8 *)&this[4].field_0x18 = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)&this[4].field_0x20);
  puVar3 = &this[8].field_0x18;
  puVar2 = &this[8].field_0x24;
  *(undefined4 *)&this[8].field_0x8 = *(undefined4 *)&this[1].field_0x14;
  *(undefined4 *)puVar2 = 0;
  *(undefined8 *)puVar3 = 0;
  *(undefined4 *)&this[8].field_0x20 = 0;
  this_00 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)&this[4].field_0x20);
  if (this_00 == (FRichCurve *)0x0) {
    in_R9B = 0x6c;
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("DefaultCurvePointer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SynthComponentMonoWaveTable.cpp"
                       ,0x13,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar8.Index = in_stack_ffffffffffffff88 & 0xffffff00;
  FRichCurve::AddKey(this_00,in_XMM1_Da,0.0,(bool)in_R9B,FVar8);
  FKeyHandle::FKeyHandle(aFStackX_18);
  FVar8.Index = FVar8.Index & 0xffffff00;
  FRichCurve::AddKey(this_00,in_XMM1_Da,__real_3e800000,(bool)in_R9B,FVar8);
  FKeyHandle::FKeyHandle(aFStack_58);
  FVar8.Index = FVar8.Index & 0xffffff00;
  FRichCurve::AddKey(this_00,in_XMM1_Da,__real_3f000000,(bool)in_R9B,FVar8);
  FKeyHandle::FKeyHandle(aFStack_50);
  FVar8.Index = FVar8.Index & 0xffffff00;
  FRichCurve::AddKey(this_00,in_XMM1_Da,__real_3f400000,(bool)in_R9B,FVar8);
  FKeyHandle::FKeyHandle(aFStack_48);
  FRichCurve::AddKey(this_00,in_XMM1_Da,__real_3f800000,(bool)in_R9B,
                     (FKeyHandle)(FVar8.Index & 0xffffff00));
  this[8].field_0xc = (this[1].field_0x10 ^ this[8].field_0xc) & 0xfe ^ this[1].field_0x10;
  *(byte *)(this + 9) = (*(byte *)(this + 9) ^ this[2].field_0x8) & 1 ^ *(byte *)(this + 9);
  if (puVar3 != puVar1) {
    DestructItems<FRuntimeFloatCurve,int>
              (*(FRuntimeFloatCurve **)puVar3,*(int *)&this[8].field_0x20);
    iVar4 = *(int *)(this + 2);
    pFVar5 = *(FRuntimeFloatCurve **)puVar1;
    *(int *)&this[8].field_0x20 = iVar4;
    if ((iVar4 == 0) && (*(int *)puVar2 == 0)) {
      *(undefined4 *)puVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x88,8,iVar4,*(int *)puVar2,(ForAnyElementType *)puVar3,iVar4,(int *)puVar2);
      ConstructItems<FRuntimeFloatCurve,FRuntimeFloatCurve,int>(*(void **)puVar3,pFVar5,iVar4);
    }
  }
  *(undefined4 *)&this[8].field_0x10 = *(undefined4 *)&this[1].field_0x18;
  return;
}

// InternalConstructor<USourceEffectBitCrusherPreset> @ 14f0adbe0

void __cdecl InternalConstructor<USourceEffectBitCrusherPreset>(FObjectInitializer *param_1)

{
  USoundEffectSourcePreset *this;
  
  this = (USoundEffectSourcePreset *)param_1->Obj;
  if (this != (USoundEffectSourcePreset *)0x0) {
    USoundEffectSourcePreset::USoundEffectSourcePreset(this,param_1);
    *(undefined ***)this = &___7USourceEffectBitCrusherPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(undefined8 *)&this[1].field_0x30 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined8 *)&this[1].field_0x50 = 0;
    *(undefined4 *)&this[1].field_0x58 = 0;
    *(undefined4 *)&this[1].field_0x5c = 0x80;
    *(undefined4 *)&this[1].field_0x60 = 0xffffffff;
    *(undefined4 *)&this[1].field_0x64 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
    *(undefined8 *)&this[2].field_0x40 = 0;
    *(undefined4 *)&this[2].field_0x48 = 0;
    *(undefined4 *)&this[2].field_0x4c = 0x80;
    *(undefined4 *)&this[2].field_0x50 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x54 = 0;
    *(undefined8 *)&this[2].field_0x60 = 0;
    *(undefined4 *)(this + 3) = 0;
    *(undefined4 *)&this[1].field_0x28 = 0x45fa0000;
    *(undefined4 *)&this[2].field_0x18 = 0x41000000;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x30 = 0;
    *(undefined4 *)&this[3].field_0x38 = 0;
    *(undefined4 *)&this[3].field_0x3c = 0x80;
    *(undefined4 *)&this[3].field_0x40 = 0xffffffff;
    *(undefined4 *)&this[3].field_0x44 = 0;
    *(undefined8 *)&this[3].field_0x50 = 0;
    *(undefined4 *)&this[3].field_0x58 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined4 *)&this[4].field_0x28 = 0;
    *(undefined4 *)&this[4].field_0x2c = 0x80;
    *(undefined4 *)&this[4].field_0x30 = 0xffffffff;
    *(undefined4 *)&this[4].field_0x34 = 0;
    *(undefined8 *)&this[4].field_0x40 = 0;
    *(undefined4 *)&this[4].field_0x48 = 0;
    *(undefined4 *)&this[3].field_0x8 = 0x45fa0000;
    *(undefined4 *)&this[3].field_0x60 = 0x41000000;
  }
  return;
}

// InternalConstructor<USourceEffectChorusPreset> @ 14f0add60

void __cdecl InternalConstructor<USourceEffectChorusPreset>(FObjectInitializer *param_1)

{
  USoundEffectSourcePreset *this;
  
  this = (USoundEffectSourcePreset *)param_1->Obj;
  if (this != (USoundEffectSourcePreset *)0x0) {
    USoundEffectSourcePreset::USoundEffectSourcePreset(this,param_1);
    *(undefined ***)this = &___7USourceEffectChorusPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    FSourceEffectChorusSettings::FSourceEffectChorusSettings
              ((FSourceEffectChorusSettings *)&this[1].field_0x28);
    FSourceEffectChorusSettings::FSourceEffectChorusSettings
              ((FSourceEffectChorusSettings *)&this[6].field_0x48);
    return;
  }
  return;
}

// InternalConstructor<USourceEffectConvolutionReverbPreset> @ 14f0addc0

void __cdecl InternalConstructor<USourceEffectConvolutionReverbPreset>(FObjectInitializer *param_1)

{
  USoundEffectSourcePreset *this;
  
  this = (USoundEffectSourcePreset *)param_1->Obj;
  if (this != (USoundEffectSourcePreset *)0x0) {
    USoundEffectSourcePreset::USoundEffectSourcePreset(this,param_1);
    *(undefined2 *)&this[1].field_0x18 = 0x102;
    *(undefined ***)this = &___7USourceEffectConvolutionReverbPreset__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined4 *)&this[1].field_0x8 = 0xc1c00000;
    *(undefined4 *)&this[1].field_0xc = 0;
    *(undefined4 *)&this[1].field_0x10 = 0xc2c00000;
    this[1].field_0x14 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[1].field_0x20,4000);
    *(undefined4 *)&this[1].field_0x48 = 0xc1c00000;
    *(undefined4 *)&this[1].field_0x4c = 0;
    *(undefined4 *)&this[1].field_0x50 = 0xc2c00000;
    this[1].field_0x54 = 0;
  }
  return;
}

// InternalConstructor<USourceEffectDynamicsProcessorPreset> @ 14f0ade50

void __cdecl InternalConstructor<USourceEffectDynamicsProcessorPreset>(FObjectInitializer *param_1)

{
  USoundEffectSourcePreset *this;
  
  this = (USoundEffectSourcePreset *)param_1->Obj;
  if (this != (USoundEffectSourcePreset *)0x0) {
    USoundEffectSourcePreset::USoundEffectSourcePreset(this,param_1);
    *(undefined ***)this = &___7USourceEffectDynamicsProcessorPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(uint *)&this[1].field_0x4c = *(uint *)&this[1].field_0x4c | 3;
    this[1].field_0x50 = this[1].field_0x50 & 0xfe;
    *(uint *)&this[2].field_0x10 = *(uint *)&this[2].field_0x10 | 3;
    this[2].field_0x14 = this[2].field_0x14 & 0xfe;
    *(undefined4 *)&this[1].field_0x48 = 0;
    *(undefined4 *)&this[2].field_0xc = 0;
    *(undefined2 *)&this[1].field_0x28 = 0x100;
    *(undefined4 *)&this[1].field_0x2c = 0x40400000;
    *(undefined4 *)&this[1].field_0x30 = 0x41200000;
    *(undefined4 *)&this[1].field_0x34 = 0x42c80000;
    *(undefined4 *)&this[1].field_0x38 = 0xc0c00000;
    *(undefined4 *)&this[1].field_0x3c = 0x3fc00000;
    *(undefined8 *)&this[1].field_0x40 = 0x41200000;
    *(undefined2 *)&this[1].field_0x54 = 0x100;
    *(undefined4 *)&this[1].field_0x58 = 0x40400000;
    *(undefined4 *)&this[1].field_0x5c = 0x41200000;
    *(undefined4 *)&this[1].field_0x60 = 0x42c80000;
    *(undefined4 *)&this[1].field_0x64 = 0xc0c00000;
    *(undefined4 *)(this + 2) = 0x3fc00000;
    *(undefined8 *)&this[2].field_0x4 = 0x41200000;
  }
  return;
}

// InternalConstructor<USourceEffectEQPreset> @ 14f0adf50

void __cdecl InternalConstructor<USourceEffectEQPreset>(FObjectInitializer *param_1)

{
  USoundEffectSourcePreset *this;
  
  this = (USoundEffectSourcePreset *)param_1->Obj;
  if (this != (USoundEffectSourcePreset *)0x0) {
    USoundEffectSourcePreset::USoundEffectSourcePreset(this,param_1);
    *(undefined ***)this = &___7USourceEffectEQPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined8 *)&this[1].field_0x40 = 0;
  }
  return;
}

// InternalConstructor<USourceEffectEnvelopeFollowerPreset> @ 14f0adfb0

void __cdecl InternalConstructor<USourceEffectEnvelopeFollowerPreset>(FObjectInitializer *param_1)

{
  USoundEffectSourcePreset *this;
  
  this = (USoundEffectSourcePreset *)param_1->Obj;
  if (this != (USoundEffectSourcePreset *)0x0) {
    USoundEffectSourcePreset::USoundEffectSourcePreset(this,param_1);
    *(undefined ***)this = &___7USourceEffectEnvelopeFollowerPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(undefined4 *)&this[1].field_0x28 = 0x41200000;
    *(undefined4 *)&this[1].field_0x2c = 0x42c80000;
    *(undefined2 *)&this[1].field_0x30 = 0x102;
    *(undefined4 *)&this[1].field_0x34 = 0x41200000;
    *(undefined4 *)&this[1].field_0x38 = 0x42c80000;
    *(undefined2 *)&this[1].field_0x3c = 0x102;
  }
  return;
}

// InternalConstructor<USourceEffectFilterPreset> @ 14f0ae030

void __cdecl InternalConstructor<USourceEffectFilterPreset>(FObjectInitializer *param_1)

{
  USoundEffectSourcePreset *this;
  
  this = (USoundEffectSourcePreset *)param_1->Obj;
  if (this != (USoundEffectSourcePreset *)0x0) {
    USoundEffectSourcePreset::USoundEffectSourcePreset(this,param_1);
    *(undefined ***)this = &___7USourceEffectFilterPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(undefined2 *)&this[1].field_0x28 = 1;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined8 *)&this[1].field_0x40 = 0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    *(undefined8 *)&this[1].field_0x60 = 0;
    *(undefined4 *)&this[1].field_0x2c = 0x44480000;
    *(undefined4 *)&this[1].field_0x30 = 0x40000000;
    *(undefined2 *)&this[1].field_0x48 = 1;
    *(undefined4 *)&this[1].field_0x4c = 0x44480000;
    *(undefined4 *)&this[1].field_0x50 = 0x40000000;
  }
  return;
}

// InternalConstructor<USourceEffectFoldbackDistortionPreset> @ 14f0ae0d0

void __cdecl InternalConstructor<USourceEffectFoldbackDistortionPreset>(FObjectInitializer *param_1)

{
  USoundEffectSourcePreset *this;
  
  this = (USoundEffectSourcePreset *)param_1->Obj;
  if (this != (USoundEffectSourcePreset *)0x0) {
    USoundEffectSourcePreset::USoundEffectSourcePreset(this,param_1);
    *(undefined ***)this = &___7USourceEffectFoldbackDistortionPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(undefined4 *)&this[1].field_0x2c = 0xc0c00000;
    *(undefined4 *)&this[1].field_0x28 = 0;
    *(undefined4 *)&this[1].field_0x34 = 0;
    *(undefined4 *)&this[1].field_0x30 = 0xc0400000;
    *(undefined4 *)&this[1].field_0x38 = 0xc0c00000;
    *(undefined4 *)&this[1].field_0x3c = 0xc0400000;
  }
  return;
}

// InternalConstructor<USourceEffectMidSideSpreaderPreset> @ 14f0ae150

void __cdecl InternalConstructor<USourceEffectMidSideSpreaderPreset>(FObjectInitializer *param_1)

{
  USoundEffectSourcePreset *this;
  
  this = (USoundEffectSourcePreset *)param_1->Obj;
  if (this != (USoundEffectSourcePreset *)0x0) {
    USoundEffectSourcePreset::USoundEffectSourcePreset(this,param_1);
    *(undefined ***)this = &___7USourceEffectMidSideSpreaderPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(undefined4 *)&this[1].field_0x28 = 0x3f000000;
    *(undefined2 *)&this[1].field_0x2c = 0x101;
    this[1].field_0x2e = 0;
    *(undefined4 *)&this[1].field_0x30 = 0x3f000000;
    *(undefined2 *)&this[1].field_0x34 = 0x101;
    this[1].field_0x36 = 0;
  }
  return;
}

// InternalConstructor<USourceEffectMotionFilterPreset> @ 14f0ae1d0

void __cdecl InternalConstructor<USourceEffectMotionFilterPreset>(FObjectInitializer *param_1)

{
  USoundEffectSourcePreset *this;
  
  this = (USoundEffectSourcePreset *)param_1->Obj;
  if (this != (USoundEffectSourcePreset *)0x0) {
    USoundEffectSourcePreset::USoundEffectSourcePreset(this,param_1);
    *(undefined ***)this = &___7USourceEffectMotionFilterPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    FSourceEffectMotionFilterSettings::FSourceEffectMotionFilterSettings
              ((FSourceEffectMotionFilterSettings *)&this[1].field_0x28);
    FSourceEffectMotionFilterSettings::FSourceEffectMotionFilterSettings
              ((FSourceEffectMotionFilterSettings *)&this[2].field_0x38);
    return;
  }
  return;
}

// InternalConstructor<USourceEffectPannerPreset> @ 14f0ae230

void __cdecl InternalConstructor<USourceEffectPannerPreset>(FObjectInitializer *param_1)

{
  USoundEffectSourcePreset *this;
  
  this = (USoundEffectSourcePreset *)param_1->Obj;
  if (this != (USoundEffectSourcePreset *)0x0) {
    USoundEffectSourcePreset::USoundEffectSourcePreset(this,param_1);
    *(undefined ***)this = &___7USourceEffectPannerPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(undefined8 *)&this[1].field_0x28 = 0x3f800000;
    *(undefined8 *)&this[1].field_0x30 = 0x3f800000;
  }
  return;
}

// InternalConstructor<USourceEffectPhaserPreset> @ 14f0ae290

void __cdecl InternalConstructor<USourceEffectPhaserPreset>(FObjectInitializer *param_1)

{
  USoundEffectSourcePreset *this;
  
  this = (USoundEffectSourcePreset *)param_1->Obj;
  if (this != (USoundEffectSourcePreset *)0x0) {
    USoundEffectSourcePreset::USoundEffectSourcePreset(this,param_1);
    *(undefined ***)this = &___7USourceEffectPhaserPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(undefined4 *)&this[1].field_0x28 = 0x3e4ccccd;
    *(undefined4 *)&this[1].field_0x2c = 0x40000000;
    *(undefined4 *)&this[1].field_0x30 = 0x3e99999a;
    *(undefined2 *)&this[1].field_0x34 = 0;
    *(undefined4 *)&this[1].field_0x38 = 0x3e4ccccd;
    *(undefined4 *)&this[1].field_0x3c = 0x40000000;
    *(undefined4 *)&this[1].field_0x40 = 0x3e99999a;
    *(undefined2 *)&this[1].field_0x44 = 0;
  }
  return;
}

// InternalConstructor<USourceEffectRingModulationPreset> @ 14f0ae320

void __cdecl InternalConstructor<USourceEffectRingModulationPreset>(FObjectInitializer *param_1)

{
  USoundEffectSourcePreset *this;
  
  this = (USoundEffectSourcePreset *)param_1->Obj;
  if (this != (USoundEffectSourcePreset *)0x0) {
    USoundEffectSourcePreset::USoundEffectSourcePreset(this,param_1);
    *(undefined ***)this = &___7USourceEffectRingModulationPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x40 = 0;
    this[1].field_0x48 = 0;
    *(undefined8 *)&this[1].field_0x60 = 0;
    *(undefined4 *)&this[1].field_0x2c = 0x42c80000;
    *(undefined8 *)&this[1].field_0x30 = 0x3f000000;
    *(undefined4 *)&this[1].field_0x38 = 0x3f800000;
    *(undefined4 *)&this[1].field_0x4c = 0x42c80000;
    *(undefined8 *)&this[1].field_0x50 = 0x3f000000;
    *(undefined4 *)&this[1].field_0x58 = 0x3f800000;
  }
  return;
}

// InternalConstructor<USourceEffectSimpleDelayPreset> @ 14f0ae3c0

void __cdecl InternalConstructor<USourceEffectSimpleDelayPreset>(FObjectInitializer *param_1)

{
  USoundEffectSourcePreset *this;
  
  this = (USoundEffectSourcePreset *)param_1->Obj;
  if (this != (USoundEffectSourcePreset *)0x0) {
    USoundEffectSourcePreset::USoundEffectSourcePreset(this,param_1);
    *(undefined ***)this = &___7USourceEffectSimpleDelayPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(uint *)&this[1].field_0x3c = *(uint *)&this[1].field_0x3c | 3;
    *(uint *)&this[1].field_0x54 = *(uint *)&this[1].field_0x54 | 3;
    *(undefined4 *)&this[1].field_0x30 = 0;
    *(undefined4 *)&this[1].field_0x48 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0x43ab8000;
    *(undefined8 *)&this[1].field_0x34 = 0x3f800000;
    *(undefined8 *)&this[1].field_0x40 = 0x43ab8000;
    *(undefined8 *)&this[1].field_0x4c = 0x3f800000;
  }
  return;
}

// InternalConstructor<USourceEffectStereoDelayPreset> @ 14f0ae450

void __cdecl InternalConstructor<USourceEffectStereoDelayPreset>(FObjectInitializer *param_1)

{
  USoundEffectSourcePreset *this;
  
  this = (USoundEffectSourcePreset *)param_1->Obj;
  if (this != (USoundEffectSourcePreset *)0x0) {
    USoundEffectSourcePreset::USoundEffectSourcePreset(this,param_1);
    *(undefined ***)this = &___7USourceEffectStereoDelayPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    this[1].field_0x28 = 2;
    *(undefined4 *)&this[1].field_0x2c = 0x43fa0000;
    *(undefined4 *)&this[1].field_0x30 = 0x3dcccccd;
    *(undefined4 *)&this[1].field_0x34 = 0x3e4ccccd;
    *(undefined4 *)&this[1].field_0x38 = 0x3ecccccd;
    *(undefined4 *)&this[1].field_0x3c = 0x3f800000;
    *(undefined2 *)&this[1].field_0x40 = 0;
    *(undefined4 *)&this[1].field_0x44 = 0x469c4000;
    *(undefined4 *)&this[1].field_0x48 = 0x40000000;
    this[1].field_0x4c = 2;
    *(undefined4 *)&this[1].field_0x50 = 0x43fa0000;
    *(undefined4 *)&this[1].field_0x54 = 0x3dcccccd;
    *(undefined4 *)&this[1].field_0x58 = 0x3e4ccccd;
    *(undefined4 *)&this[1].field_0x5c = 0x3ecccccd;
    *(undefined4 *)&this[1].field_0x60 = 0x3f800000;
    *(undefined2 *)&this[1].field_0x64 = 0;
    *(undefined4 *)(this + 2) = 0x469c4000;
    *(undefined4 *)&this[2].field_0x4 = 0x40000000;
  }
  return;
}

// InternalConstructor<USourceEffectWaveShaperPreset> @ 14f0ae540

void __cdecl InternalConstructor<USourceEffectWaveShaperPreset>(FObjectInitializer *param_1)

{
  USoundEffectSourcePreset *this;
  
  this = (USoundEffectSourcePreset *)param_1->Obj;
  if (this != (USoundEffectSourcePreset *)0x0) {
    USoundEffectSourcePreset::USoundEffectSourcePreset(this,param_1);
    *(undefined ***)this = &___7USourceEffectWaveShaperPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(undefined8 *)&this[1].field_0x28 = 0x3f800000;
    *(undefined8 *)&this[1].field_0x30 = 0x3f800000;
  }
  return;
}

// InternalConstructor<USubmixEffectConvolutionReverbPreset> @ 14f0ae5a0

void __cdecl InternalConstructor<USubmixEffectConvolutionReverbPreset>(FObjectInitializer *param_1)

{
  USoundEffectSubmixPreset *this;
  
  this = (USoundEffectSubmixPreset *)param_1->Obj;
  if (this != (USoundEffectSubmixPreset *)0x0) {
    USoundEffectSubmixPreset::USoundEffectSubmixPreset(this,param_1);
    *(undefined2 *)&this[1].field_0x38 = 0x102;
    *(undefined ***)this = &___7USubmixEffectConvolutionReverbPreset__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined4 *)&this[1].field_0x8 = 0xc1c00000;
    *(undefined4 *)&this[1].field_0xc = 0;
    *(undefined4 *)&this[1].field_0x10 = 0xc2c00000;
    *(undefined2 *)&this[1].field_0x14 = 0x100;
    this[1].field_0x16 = 1;
    *(undefined4 *)&this[1].field_0x18 = 0xc2700000;
    *(undefined2 *)&this[1].field_0x1c = 0;
    *(undefined4 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    this[1].field_0x30 = 1;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[1].field_0x40,4000);
    *(undefined4 *)&this[2].field_0x4 = 0;
    *(undefined2 *)&this[2].field_0x14 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0xc1c00000;
    *(undefined4 *)&this[2].field_0x8 = 0xc2c00000;
    *(undefined2 *)&this[2].field_0xc = 0x100;
    this[2].field_0xe = 1;
    *(undefined4 *)&this[2].field_0x10 = 0xc2700000;
    this[2].field_0x28 = 1;
  }
  return;
}

// InternalConstructor<USubmixEffectDelayPreset> @ 14f0ae690

void __cdecl InternalConstructor<USubmixEffectDelayPreset>(FObjectInitializer *param_1)

{
  USoundEffectSubmixPreset *this;
  
  this = (USoundEffectSubmixPreset *)param_1->Obj;
  if (this != (USoundEffectSubmixPreset *)0x0) {
    USoundEffectSubmixPreset::USoundEffectSubmixPreset(this,param_1);
    *(undefined ***)this = &___7USubmixEffectDelayPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(undefined4 *)&this[1].field_0x28 = 0x44fa0000;
    *(undefined4 *)&this[1].field_0x2c = 0x43c80000;
    *(undefined4 *)&this[1].field_0x30 = 0x447a0000;
    *(undefined4 *)&this[1].field_0x34 = 0x44fa0000;
    *(undefined4 *)&this[1].field_0x38 = 0x43c80000;
    *(undefined4 *)&this[1].field_0x3c = 0x447a0000;
    *(undefined4 *)&this[1].field_0x40 = 0x44fa0000;
    *(undefined4 *)&this[1].field_0x44 = 0x43c80000;
    *(undefined4 *)&this[1].field_0x48 = 0x447a0000;
  }
  return;
}

// InternalConstructor<USubmixEffectDelayStatics> @ 14f0ae730

void __cdecl InternalConstructor<USubmixEffectDelayStatics>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7USubmixEffectDelayStatics__6B_;
  }
  return;
}

// InternalConstructor<USubmixEffectFilterPreset> @ 14f0ae760

void __cdecl InternalConstructor<USubmixEffectFilterPreset>(FObjectInitializer *param_1)

{
  USoundEffectSubmixPreset *this;
  
  this = (USoundEffectSubmixPreset *)param_1->Obj;
  if (this != (USoundEffectSubmixPreset *)0x0) {
    USoundEffectSubmixPreset::USoundEffectSubmixPreset(this,param_1);
    *(undefined ***)this = &___7USubmixEffectFilterPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(undefined2 *)&this[1].field_0x28 = 0;
    *(undefined4 *)&this[1].field_0x2c = 0x469c4000;
    *(undefined4 *)&this[1].field_0x30 = 0x40000000;
    *(undefined2 *)&this[1].field_0x34 = 0;
    *(undefined4 *)&this[1].field_0x38 = 0x469c4000;
    *(undefined4 *)&this[1].field_0x3c = 0x40000000;
  }
  return;
}

// InternalConstructor<USubmixEffectFlexiverbPreset> @ 14f0ae7e0

void __cdecl InternalConstructor<USubmixEffectFlexiverbPreset>(FObjectInitializer *param_1)

{
  USoundEffectSubmixPreset *this;
  
  this = (USoundEffectSubmixPreset *)param_1->Obj;
  if (this != (USoundEffectSubmixPreset *)0x0) {
    USoundEffectSubmixPreset::USoundEffectSubmixPreset(this,param_1);
    *(undefined ***)this = &___7USubmixEffectFlexiverbPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(undefined4 *)&this[1].field_0x28 = 0x41200000;
    *(undefined4 *)&this[1].field_0x2c = 0x40e00000;
    *(undefined4 *)&this[1].field_0x30 = 0x435c0000;
    *(undefined4 *)&this[1].field_0x34 = 2;
    *(undefined4 *)&this[1].field_0x38 = 0x41200000;
    *(undefined4 *)&this[1].field_0x3c = 0x40e00000;
    *(undefined4 *)&this[1].field_0x40 = 0x435c0000;
    *(undefined4 *)&this[1].field_0x44 = 2;
  }
  return;
}

// InternalConstructor<USubmixEffectMultibandCompressorPreset> @ 14f0ae870

void __cdecl
InternalConstructor<USubmixEffectMultibandCompressorPreset>(FObjectInitializer *param_1)

{
  USoundEffectSubmixPreset *this;
  
  this = (USoundEffectSubmixPreset *)param_1->Obj;
  if (this != (USoundEffectSubmixPreset *)0x0) {
    USoundEffectSubmixPreset::USoundEffectSubmixPreset(this,param_1);
    *(undefined ***)this = &___7USubmixEffectMultibandCompressorPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(undefined2 *)&this[1].field_0x28 = 0x100;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined8 *)&this[1].field_0x40 = 0;
    *(undefined4 *)&this[1].field_0x48 = 0;
    this[1].field_0x4c = 0;
    *(undefined8 *)&this[1].field_0x50 = 0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    this[2].field_0x1c = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
    this[1].field_0x2a = 1;
    *(undefined4 *)&this[1].field_0x2c = 0x40400000;
    *(undefined4 *)&this[1].field_0x30 = 0x101;
    *(undefined2 *)&this[1].field_0x60 = 0x100;
    this[1].field_0x62 = 1;
    *(undefined4 *)&this[1].field_0x64 = 0x40400000;
    *(undefined4 *)(this + 2) = 0x101;
  }
  return;
}

// InternalConstructor<USubmixEffectStereoDelayPreset> @ 14f0ae950

void __cdecl InternalConstructor<USubmixEffectStereoDelayPreset>(FObjectInitializer *param_1)

{
  USoundEffectSubmixPreset *this;
  
  this = (USoundEffectSubmixPreset *)param_1->Obj;
  if (this != (USoundEffectSubmixPreset *)0x0) {
    USoundEffectSubmixPreset::USoundEffectSubmixPreset(this,param_1);
    *(undefined ***)this = &___7USubmixEffectStereoDelayPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    this[1].field_0x28 = 2;
    *(undefined4 *)&this[1].field_0x2c = 0x43fa0000;
    *(undefined4 *)&this[1].field_0x30 = 0x3dcccccd;
    *(undefined4 *)&this[1].field_0x34 = 0x3e4ccccd;
    *(undefined4 *)&this[1].field_0x38 = 0x3ecccccd;
    *(undefined4 *)&this[1].field_0x3c = 0x3f800000;
    *(undefined2 *)&this[1].field_0x40 = 0;
    *(undefined4 *)&this[1].field_0x44 = 0x469c4000;
    *(undefined4 *)&this[1].field_0x48 = 0x40000000;
    this[1].field_0x4c = 2;
    *(undefined4 *)&this[1].field_0x50 = 0x43fa0000;
    *(undefined4 *)&this[1].field_0x54 = 0x3dcccccd;
    *(undefined4 *)&this[1].field_0x58 = 0x3e4ccccd;
    *(undefined4 *)&this[1].field_0x5c = 0x3ecccccd;
    *(undefined4 *)&this[1].field_0x60 = 0x3f800000;
    *(undefined2 *)&this[1].field_0x64 = 0;
    *(undefined4 *)(this + 2) = 0x469c4000;
    *(undefined4 *)&this[2].field_0x4 = 0x40000000;
  }
  return;
}

// InternalConstructor<USubmixEffectStereoToQuadPreset> @ 14f0aea40

void __cdecl InternalConstructor<USubmixEffectStereoToQuadPreset>(FObjectInitializer *param_1)

{
  USoundEffectSubmixPreset *this;
  
  this = (USoundEffectSubmixPreset *)param_1->Obj;
  if (this != (USoundEffectSubmixPreset *)0x0) {
    USoundEffectSubmixPreset::USoundEffectSubmixPreset(this,param_1);
    *(undefined ***)this = &___7USubmixEffectStereoToQuadPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    this[1].field_0x28 = 0;
    *(undefined4 *)&this[1].field_0x2c = 0;
    this[1].field_0x30 = 0;
    *(undefined4 *)&this[1].field_0x34 = 0;
  }
  return;
}

// InternalConstructor<USubmixEffectTapDelayPreset> @ 14f0aeaa0

void __cdecl InternalConstructor<USubmixEffectTapDelayPreset>(FObjectInitializer *param_1)

{
  USoundEffectSubmixPreset *this;
  
  this = (USoundEffectSubmixPreset *)param_1->Obj;
  if (this != (USoundEffectSubmixPreset *)0x0) {
    USoundEffectSubmixPreset::USoundEffectSubmixPreset(this,param_1);
    *(undefined ***)this = &___7USubmixEffectTapDelayPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(undefined4 *)&this[1].field_0x28 = 0x461c4000;
    *(undefined8 *)&this[1].field_0x30 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined8 *)&this[1].field_0x48 = 0;
    *(undefined8 *)&this[1].field_0x50 = 0;
    *(undefined8 *)&this[1].field_0x60 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[1].field_0x2c = 0x43c80000;
    *(undefined4 *)&this[1].field_0x40 = 0x461c4000;
    *(undefined4 *)&this[1].field_0x44 = 0x43c80000;
    *(undefined4 *)&this[1].field_0x58 = 0x461c4000;
    *(undefined4 *)&this[1].field_0x5c = 0x43c80000;
  }
  return;
}

// InternalConstructor<USynth2DSlider> @ 14f0aeb50

void __cdecl InternalConstructor<USynth2DSlider>(FObjectInitializer *param_1)

{
  if ((USynth2DSlider *)param_1->Obj != (USynth2DSlider *)0x0) {
    USynth2DSlider::USynth2DSlider((USynth2DSlider *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<USynthComponentMonoWaveTable> @ 14f0aeb70

void __cdecl InternalConstructor<USynthComponentMonoWaveTable>(FObjectInitializer *param_1)

{
  USynthComponent *this;
  
  this = (USynthComponent *)param_1->Obj;
  if (this != (USynthComponent *)0x0) {
    USynthComponent::USynthComponent(this,param_1);
    this->_padding_ = (longlong)&USynthComponentMonoWaveTable::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&USynthComponentMonoWaveTable::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&USynthComponentMonoWaveTable::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    Audio::FMonoWaveTable::FMonoWaveTable((FMonoWaveTable *)&this[1]._padding_);
    return;
  }
  return;
}

// InternalConstructor<USynthComponentToneGenerator> @ 14f0aec00

void __cdecl InternalConstructor<USynthComponentToneGenerator>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  USynthComponent *this;
  
  this = (USynthComponent *)param_1->Obj;
  if (this != (USynthComponent *)0x0) {
    USynthComponent::USynthComponent(this,param_1);
    this->_padding_ = (longlong)&USynthComponentToneGenerator::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&USynthComponentToneGenerator::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&USynthComponentToneGenerator::_vftable__for__IAsyncPhysicsStateProcessor__;
    FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)&this[1]._padding_);
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 | 6;
    this[1]._padding_ = 0x40af400000000000;
    this[1]._padding_ = 0x40af400000000000;
    this[1]._padding_ = (longlong)&___7FLinearCurve_Audio__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0x4079000000000000;
    this[1]._padding_ = 0x4079000000000000;
    *(undefined4 *)&this[1]._padding_ = 0xc2700000;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
    *pbVar1 = *pbVar1 | 0x80;
    *(undefined1 *)&this->_padding_ = 2;
    *(undefined4 *)&this[1]._padding_ = 0xc2700000;
    *(undefined4 *)&this[1]._padding_ = 0x43dc0000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    this->NumChannels = 1;
  }
  return;
}

// InternalConstructor<USynthKnob> @ 14f0aed00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<USynthKnob>(FObjectInitializer *param_1)

{
  UWidget *this;
  code *pcVar1;
  UWidget *pUVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  FSlateStyleSet *this_00;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  FSynthKnobStyle *pFVar6;
  FArguments local_3b8;
  
  this = (UWidget *)param_1->Obj;
  if (this != (UWidget *)0x0) {
    UWidget::UWidget(this,param_1);
    this->_padding_ = (longlong)&USynthKnob::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&USynthKnob::_vftable__for__INotifyFieldValueChanged__;
    FText::FText((FText *)&this[1]._padding_);
    FText::FText((FText *)&this[1]._padding_);
    *(undefined8 *)&this[1].bIsEnabledDelegate = 0;
    *(undefined8 *)&this[1].bIsEnabledDelegate.field_0x8 = 0;
    *(undefined8 *)&this[1].bIsEnabledDelegate.field_0x10 = 0;
    FSynthKnobStyle::FSynthKnobStyle((FSynthKnobStyle *)&this[1].ToolTipTextDelegate);
    pUVar2 = this + 2;
    (pUVar2->EnabledFieldNotifications).AllocatorInstance.InlineData[0] = '\0';
    (pUVar2->EnabledFieldNotifications).AllocatorInstance.InlineData[1] = '\0';
    (pUVar2->EnabledFieldNotifications).AllocatorInstance.InlineData[2] = '\0';
    (pUVar2->EnabledFieldNotifications).AllocatorInstance.InlineData[3] = '\0';
    (pUVar2->EnabledFieldNotifications).AllocatorInstance.InlineData[4] = '\0';
    (pUVar2->EnabledFieldNotifications).AllocatorInstance.InlineData[5] = '\0';
    (pUVar2->EnabledFieldNotifications).AllocatorInstance.InlineData[6] = '\0';
    (pUVar2->EnabledFieldNotifications).AllocatorInstance.InlineData[7] = '\0';
    pTVar3 = &this[2].EnabledFieldNotifications;
    (pTVar3->AllocatorInstance).InlineData[8] = '\0';
    (pTVar3->AllocatorInstance).InlineData[9] = '\0';
    (pTVar3->AllocatorInstance).InlineData[10] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0xb] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0xc] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0xd] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0xe] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0xf] = '\0';
    this[2].EnabledFieldNotifications.AllocatorInstance.SecondaryData =
         (ForElementType<unsigned_int>)0x0;
    this[2].EnabledFieldNotifications.NumBits = 0;
    this[2].EnabledFieldNotifications.MaxBits = 0;
    *(undefined8 *)&this[2].bRoutedSynchronizeProperties = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3].Slot.field0_0x0.DebugPtr = (UPanelSlot *)0x0;
    *(undefined8 *)&this[3].bIsEnabledDelegate = 0;
    *(undefined8 *)&this[3].bIsEnabledDelegate.field_0x8 = 0;
    *(undefined8 *)&this[3].bIsEnabledDelegate.field_0x10 = 0;
    *(undefined8 *)&this[3].ToolTipTextDelegate = 0;
    *(undefined8 *)&this[3].ToolTipTextDelegate.field_0x8 = 0;
    FSynthSlateStyleSet::Initialize();
    FVar4 = FSynthSlateStyleSet::StyleInstance.SharedReferenceCount;
    this_00 = FSynthSlateStyleSet::StyleInstance.Object;
    if (FSynthSlateStyleSet::StyleInstance.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FSynthSlateStyleSet::StyleInstance.SharedReferenceCount.ReferenceController)->
      SharedReferenceCount =
           (atomic<int>)
           ((int)(FSynthSlateStyleSet::StyleInstance.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 == (FSlateStyleSet *)0x0) {
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar6 = FSynthKnobStyle::GetDefault();
    FSlateStyleSet::Set<FSynthKnobStyle>(this_00,FSynthKnobStyle::TypeName,pFVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar4.ReferenceController);
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3c23d70a;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3e4ccccd;
    SSynthKnob::FArguments::FArguments(&local_3b8);
    FSynthKnobStyle::operator=((FSynthKnobStyle *)&this[1].ToolTipTextDelegate,local_3b8._Style);
    *(undefined1 *)((longlong)&this[2].NativeBindings.ArrayNum + 1) = 1;
    SSynthKnob::FArguments::~FArguments(&local_3b8);
  }
  return;
}

// InternalConstructor<USynthSamplePlayer> @ 14f0aeed0

void __cdecl InternalConstructor<USynthSamplePlayer>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  USynthComponent *this;
  
  this = (USynthComponent *)param_1->Obj;
  if (this != (USynthComponent *)0x0) {
    USynthComponent::USynthComponent(this,param_1);
    this->_padding_ = (longlong)&USynthSamplePlayer::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&USynthSamplePlayer::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&USynthSamplePlayer::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    Audio::FSampleBufferReader::FSampleBufferReader((FSampleBufferReader *)&this[1]._padding_);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    Audio::FSoundWavePCMLoader::FSoundWavePCMLoader((FSoundWavePCMLoader *)&this[1]._padding_);
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 | 2;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<USynthesisUtilitiesBlueprintFunctionLibrary> @ 14f0aefb0

void __cdecl
InternalConstructor<USynthesisUtilitiesBlueprintFunctionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7USynthesisUtilitiesBlueprintFunctionLibrary__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAudioImpulseResponse> @ 14f0aefe0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioImpulseResponse>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioImpulseResponse::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAudioImpulseResponse__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvelopeFollowerListener> @ 14f0af0a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEnvelopeFollowerListener>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UActorComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvelopeFollowerListener::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&UEnvelopeFollowerListener::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UEnvelopeFollowerListener::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UEnvelopeFollowerListener::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGranularSynth> @ 14f0af180

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGranularSynth>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USynthComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGranularSynth::GetPrivateStaticClass();
  this = (USynthComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USynthComponent *)0x0) {
    USynthComponent::USynthComponent(this,param_1);
    this->_padding_ = (longlong)&UGranularSynth::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UGranularSynth::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UGranularSynth::_vftable__for__IAsyncPhysicsStateProcessor__;
    Audio::FGranularSynth::FGranularSynth((FGranularSynth *)&this[1]._padding_);
    Audio::FSoundWavePCMLoader::FSoundWavePCMLoader
              ((FSoundWavePCMLoader *)&this[1].AttenuationOverrides.CustomHighpassAirAbsorptionCurve
              );
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UModularSynthComponent> @ 14f0af260

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UModularSynthComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USynthComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UModularSynthComponent::GetPrivateStaticClass();
  this = (USynthComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USynthComponent *)0x0) {
    USynthComponent::USynthComponent(this,param_1);
    this->_padding_ = (longlong)&UModularSynthComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UModularSynthComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UModularSynthComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    Audio::FEpicSynth1::FEpicSynth1((FEpicSynth1 *)&this[1]._padding_);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UModularSynthLibrary> @ 14f0af330

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UModularSynthLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UModularSynthLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UModularSynthLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UModularSynthPresetBank> @ 14f0af3e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UModularSynthPresetBank>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UModularSynthPresetBank::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UModularSynthPresetBank__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMonoWaveTableSynthPreset> @ 14f0af4a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMonoWaveTableSynthPreset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMonoWaveTableSynthPreset::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMonoWaveTableSynthPreset__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined4 *)&pUVar1[3].field_0x10 = 0;
    *(undefined4 *)&pUVar1[3].field_0x14 = 0x80;
    *(undefined4 *)&pUVar1[3].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar1[3].field_0x1c = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined4 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)&pUVar1[4].field_0x20);
    *(undefined8 *)&pUVar1[8].field_0x18 = 0;
    *(undefined8 *)&pUVar1[8].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USourceEffectBitCrusherPreset> @ 14f0af5d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USourceEffectBitCrusherPreset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundEffectSourcePreset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USourceEffectBitCrusherPreset::GetPrivateStaticClass();
  this = (USoundEffectSourcePreset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundEffectSourcePreset *)0x0) {
    USoundEffectSourcePreset::USoundEffectSourcePreset(this,param_1);
    *(undefined ***)this = &___7USourceEffectBitCrusherPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(undefined8 *)&this[1].field_0x30 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined8 *)&this[1].field_0x50 = 0;
    *(undefined4 *)&this[1].field_0x58 = 0;
    *(undefined4 *)&this[1].field_0x5c = 0x80;
    *(undefined4 *)&this[1].field_0x60 = 0xffffffff;
    *(undefined4 *)&this[1].field_0x64 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
    *(undefined8 *)&this[2].field_0x40 = 0;
    *(undefined4 *)&this[2].field_0x48 = 0;
    *(undefined4 *)&this[2].field_0x4c = 0x80;
    *(undefined4 *)&this[2].field_0x50 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x54 = 0;
    *(undefined8 *)&this[2].field_0x60 = 0;
    *(undefined4 *)(this + 3) = 0;
    *(undefined4 *)&this[1].field_0x28 = 0x45fa0000;
    *(undefined4 *)&this[2].field_0x18 = 0x41000000;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x30 = 0;
    *(undefined4 *)&this[3].field_0x38 = 0;
    *(undefined4 *)&this[3].field_0x3c = 0x80;
    *(undefined4 *)&this[3].field_0x40 = 0xffffffff;
    *(undefined4 *)&this[3].field_0x44 = 0;
    *(undefined8 *)&this[3].field_0x50 = 0;
    *(undefined4 *)&this[3].field_0x58 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined4 *)&this[4].field_0x28 = 0;
    *(undefined4 *)&this[4].field_0x2c = 0x80;
    *(undefined4 *)&this[4].field_0x30 = 0xffffffff;
    *(undefined4 *)&this[4].field_0x34 = 0;
    *(undefined8 *)&this[4].field_0x40 = 0;
    *(undefined4 *)&this[4].field_0x48 = 0;
    *(undefined4 *)&this[3].field_0x8 = 0x45fa0000;
    *(undefined4 *)&this[3].field_0x60 = 0x41000000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USourceEffectChorusPreset> @ 14f0af7c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USourceEffectChorusPreset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundEffectSourcePreset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USourceEffectChorusPreset::GetPrivateStaticClass();
  this = (USoundEffectSourcePreset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundEffectSourcePreset *)0x0) {
    USoundEffectSourcePreset::USoundEffectSourcePreset(this,param_1);
    *(undefined ***)this = &___7USourceEffectChorusPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    FSourceEffectChorusSettings::FSourceEffectChorusSettings
              ((FSourceEffectChorusSettings *)&this[1].field_0x28);
    FSourceEffectChorusSettings::FSourceEffectChorusSettings
              ((FSourceEffectChorusSettings *)&this[6].field_0x48);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USourceEffectConvolutionReverbPreset> @ 14f0af8a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USourceEffectConvolutionReverbPreset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundEffectSourcePreset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USourceEffectConvolutionReverbPreset::GetPrivateStaticClass();
  this = (USoundEffectSourcePreset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundEffectSourcePreset *)0x0) {
    USoundEffectSourcePreset::USoundEffectSourcePreset(this,param_1);
    *(undefined ***)this = &___7USourceEffectConvolutionReverbPreset__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined4 *)&this[1].field_0x8 = 0xc1c00000;
    *(undefined4 *)&this[1].field_0xc = 0;
    *(undefined4 *)&this[1].field_0x10 = 0xc2c00000;
    this[1].field_0x14 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[1].field_0x20,4000);
    *(undefined4 *)&this[1].field_0x48 = 0xc1c00000;
    *(undefined4 *)&this[1].field_0x4c = 0;
    *(undefined4 *)&this[1].field_0x50 = 0xc2c00000;
    this[1].field_0x54 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USourceEffectDynamicsProcessorPreset> @ 14f0af9a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USourceEffectDynamicsProcessorPreset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundEffectSourcePreset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USourceEffectDynamicsProcessorPreset::GetPrivateStaticClass();
  this = (USoundEffectSourcePreset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundEffectSourcePreset *)0x0) {
    USoundEffectSourcePreset::USoundEffectSourcePreset(this,param_1);
    *(undefined ***)this = &___7USourceEffectDynamicsProcessorPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(uint *)&this[1].field_0x4c = *(uint *)&this[1].field_0x4c | 3;
    this[1].field_0x50 = this[1].field_0x50 & 0xfe;
    *(uint *)&this[2].field_0x10 = *(uint *)&this[2].field_0x10 | 3;
    this[2].field_0x14 = this[2].field_0x14 & 0xfe;
    *(undefined2 *)&this[1].field_0x28 = 0x100;
    *(undefined4 *)&this[1].field_0x2c = 0x40400000;
    *(undefined4 *)&this[1].field_0x30 = 0x41200000;
    *(undefined4 *)&this[1].field_0x34 = 0x42c80000;
    *(undefined4 *)&this[1].field_0x38 = 0xc0c00000;
    *(undefined4 *)&this[1].field_0x3c = 0x3fc00000;
    *(undefined8 *)&this[1].field_0x40 = 0x41200000;
    *(undefined4 *)&this[1].field_0x48 = 0;
    *(undefined2 *)&this[1].field_0x54 = 0x100;
    *(undefined4 *)&this[1].field_0x58 = 0x40400000;
    *(undefined4 *)&this[1].field_0x5c = 0x41200000;
    *(undefined4 *)&this[1].field_0x60 = 0x42c80000;
    *(undefined4 *)&this[1].field_0x64 = 0xc0c00000;
    *(undefined4 *)(this + 2) = 0x3fc00000;
    *(undefined8 *)&this[2].field_0x4 = 0x41200000;
    *(undefined4 *)&this[2].field_0xc = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USourceEffectEQPreset> @ 14f0afb20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USourceEffectEQPreset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundEffectSourcePreset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USourceEffectEQPreset::GetPrivateStaticClass();
  this = (USoundEffectSourcePreset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundEffectSourcePreset *)0x0) {
    USoundEffectSourcePreset::USoundEffectSourcePreset(this,param_1);
    *(undefined ***)this = &___7USourceEffectEQPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined8 *)&this[1].field_0x40 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USourceEffectEnvelopeFollowerPreset> @ 14f0afc00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USourceEffectEnvelopeFollowerPreset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundEffectSourcePreset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USourceEffectEnvelopeFollowerPreset::GetPrivateStaticClass();
  this = (USoundEffectSourcePreset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundEffectSourcePreset *)0x0) {
    USoundEffectSourcePreset::USoundEffectSourcePreset(this,param_1);
    *(undefined ***)this = &___7USourceEffectEnvelopeFollowerPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(undefined4 *)&this[1].field_0x28 = 0x41200000;
    *(undefined4 *)&this[1].field_0x2c = 0x42c80000;
    *(undefined2 *)&this[1].field_0x30 = 0x102;
    *(undefined4 *)&this[1].field_0x34 = 0x41200000;
    *(undefined4 *)&this[1].field_0x38 = 0x42c80000;
    *(undefined2 *)&this[1].field_0x3c = 0x102;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USourceEffectFilterPreset> @ 14f0afd00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USourceEffectFilterPreset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundEffectSourcePreset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USourceEffectFilterPreset::GetPrivateStaticClass();
  this = (USoundEffectSourcePreset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundEffectSourcePreset *)0x0) {
    USoundEffectSourcePreset::USoundEffectSourcePreset(this,param_1);
    *(undefined ***)this = &___7USourceEffectFilterPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(undefined2 *)&this[1].field_0x28 = 1;
    *(undefined4 *)&this[1].field_0x2c = 0x44480000;
    *(undefined4 *)&this[1].field_0x30 = 0x40000000;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined8 *)&this[1].field_0x40 = 0;
    *(undefined2 *)&this[1].field_0x48 = 1;
    *(undefined4 *)&this[1].field_0x4c = 0x44480000;
    *(undefined4 *)&this[1].field_0x50 = 0x40000000;
    *(undefined8 *)&this[1].field_0x58 = 0;
    *(undefined8 *)&this[1].field_0x60 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USourceEffectFoldbackDistortionPreset> @ 14f0afe20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USourceEffectFoldbackDistortionPreset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundEffectSourcePreset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USourceEffectFoldbackDistortionPreset::GetPrivateStaticClass();
  this = (USoundEffectSourcePreset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundEffectSourcePreset *)0x0) {
    USoundEffectSourcePreset::USoundEffectSourcePreset(this,param_1);
    *(undefined ***)this = &___7USourceEffectFoldbackDistortionPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(undefined4 *)&this[1].field_0x28 = 0;
    *(undefined4 *)&this[1].field_0x2c = 0xc0c00000;
    *(undefined4 *)&this[1].field_0x30 = 0xc0400000;
    *(undefined4 *)&this[1].field_0x34 = 0;
    *(undefined4 *)&this[1].field_0x38 = 0xc0c00000;
    *(undefined4 *)&this[1].field_0x3c = 0xc0400000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USourceEffectMidSideSpreaderPreset> @ 14f0aff10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USourceEffectMidSideSpreaderPreset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundEffectSourcePreset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USourceEffectMidSideSpreaderPreset::GetPrivateStaticClass();
  this = (USoundEffectSourcePreset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundEffectSourcePreset *)0x0) {
    USoundEffectSourcePreset::USoundEffectSourcePreset(this,param_1);
    *(undefined ***)this = &___7USourceEffectMidSideSpreaderPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(undefined4 *)&this[1].field_0x28 = 0x3f000000;
    *(undefined2 *)&this[1].field_0x2c = 0x101;
    this[1].field_0x2e = 0;
    *(undefined4 *)&this[1].field_0x30 = 0x3f000000;
    *(undefined2 *)&this[1].field_0x34 = 0x101;
    this[1].field_0x36 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USourceEffectMotionFilterPreset> @ 14f0b0000

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USourceEffectMotionFilterPreset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundEffectSourcePreset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USourceEffectMotionFilterPreset::GetPrivateStaticClass();
  this = (USoundEffectSourcePreset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundEffectSourcePreset *)0x0) {
    USoundEffectSourcePreset::USoundEffectSourcePreset(this,param_1);
    *(undefined ***)this = &___7USourceEffectMotionFilterPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    FSourceEffectMotionFilterSettings::FSourceEffectMotionFilterSettings
              ((FSourceEffectMotionFilterSettings *)&this[1].field_0x28);
    FSourceEffectMotionFilterSettings::FSourceEffectMotionFilterSettings
              ((FSourceEffectMotionFilterSettings *)&this[2].field_0x38);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USourceEffectPannerPreset> @ 14f0b00e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USourceEffectPannerPreset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundEffectSourcePreset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USourceEffectPannerPreset::GetPrivateStaticClass();
  this = (USoundEffectSourcePreset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundEffectSourcePreset *)0x0) {
    USoundEffectSourcePreset::USoundEffectSourcePreset(this,param_1);
    *(undefined ***)this = &___7USourceEffectPannerPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(undefined8 *)&this[1].field_0x28 = 0x3f800000;
    *(undefined8 *)&this[1].field_0x30 = 0x3f800000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USourceEffectPhaserPreset> @ 14f0b01b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USourceEffectPhaserPreset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundEffectSourcePreset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USourceEffectPhaserPreset::GetPrivateStaticClass();
  this = (USoundEffectSourcePreset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundEffectSourcePreset *)0x0) {
    USoundEffectSourcePreset::USoundEffectSourcePreset(this,param_1);
    *(undefined ***)this = &___7USourceEffectPhaserPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(undefined4 *)&this[1].field_0x28 = 0x3e4ccccd;
    *(undefined4 *)&this[1].field_0x2c = 0x40000000;
    *(undefined4 *)&this[1].field_0x30 = 0x3e99999a;
    *(undefined2 *)&this[1].field_0x34 = 0;
    *(undefined4 *)&this[1].field_0x38 = 0x3e4ccccd;
    *(undefined4 *)&this[1].field_0x3c = 0x40000000;
    *(undefined4 *)&this[1].field_0x40 = 0x3e99999a;
    *(undefined2 *)&this[1].field_0x44 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USourceEffectRingModulationPreset> @ 14f0b02c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USourceEffectRingModulationPreset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundEffectSourcePreset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USourceEffectRingModulationPreset::GetPrivateStaticClass();
  this = (USoundEffectSourcePreset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundEffectSourcePreset *)0x0) {
    USoundEffectSourcePreset::USoundEffectSourcePreset(this,param_1);
    *(undefined ***)this = &___7USourceEffectRingModulationPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    this[1].field_0x28 = 0;
    *(undefined4 *)&this[1].field_0x2c = 0x42c80000;
    *(undefined8 *)&this[1].field_0x30 = 0x3f000000;
    *(undefined4 *)&this[1].field_0x38 = 0x3f800000;
    *(undefined8 *)&this[1].field_0x40 = 0;
    this[1].field_0x48 = 0;
    *(undefined4 *)&this[1].field_0x4c = 0x42c80000;
    *(undefined8 *)&this[1].field_0x50 = 0x3f000000;
    *(undefined4 *)&this[1].field_0x58 = 0x3f800000;
    *(undefined8 *)&this[1].field_0x60 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USourceEffectSimpleDelayPreset> @ 14f0b03e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USourceEffectSimpleDelayPreset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundEffectSourcePreset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USourceEffectSimpleDelayPreset::GetPrivateStaticClass();
  this = (USoundEffectSourcePreset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundEffectSourcePreset *)0x0) {
    USoundEffectSourcePreset::USoundEffectSourcePreset(this,param_1);
    *(undefined ***)this = &___7USourceEffectSimpleDelayPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(uint *)&this[1].field_0x3c = *(uint *)&this[1].field_0x3c | 3;
    *(uint *)&this[1].field_0x54 = *(uint *)&this[1].field_0x54 | 3;
    *(undefined8 *)&this[1].field_0x28 = 0x43ab8000;
    *(undefined4 *)&this[1].field_0x30 = 0;
    *(undefined8 *)&this[1].field_0x34 = 0x3f800000;
    *(undefined8 *)&this[1].field_0x40 = 0x43ab8000;
    *(undefined4 *)&this[1].field_0x48 = 0;
    *(undefined8 *)&this[1].field_0x4c = 0x3f800000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USourceEffectStereoDelayPreset> @ 14f0b04f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USourceEffectStereoDelayPreset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundEffectSourcePreset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USourceEffectStereoDelayPreset::GetPrivateStaticClass();
  this = (USoundEffectSourcePreset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundEffectSourcePreset *)0x0) {
    USoundEffectSourcePreset::USoundEffectSourcePreset(this,param_1);
    *(undefined ***)this = &___7USourceEffectStereoDelayPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    this[1].field_0x28 = 2;
    *(undefined4 *)&this[1].field_0x2c = 0x43fa0000;
    *(undefined4 *)&this[1].field_0x30 = 0x3dcccccd;
    *(undefined4 *)&this[1].field_0x34 = 0x3e4ccccd;
    *(undefined4 *)&this[1].field_0x38 = 0x3ecccccd;
    *(undefined4 *)&this[1].field_0x3c = 0x3f800000;
    *(undefined2 *)&this[1].field_0x40 = 0;
    *(undefined4 *)&this[1].field_0x44 = 0x469c4000;
    *(undefined4 *)&this[1].field_0x48 = 0x40000000;
    this[1].field_0x4c = 2;
    *(undefined4 *)&this[1].field_0x50 = 0x43fa0000;
    *(undefined4 *)&this[1].field_0x54 = 0x3dcccccd;
    *(undefined4 *)&this[1].field_0x58 = 0x3e4ccccd;
    *(undefined4 *)&this[1].field_0x5c = 0x3ecccccd;
    *(undefined4 *)&this[1].field_0x60 = 0x3f800000;
    *(undefined2 *)&this[1].field_0x64 = 0;
    *(undefined4 *)(this + 2) = 0x469c4000;
    *(undefined4 *)&this[2].field_0x4 = 0x40000000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USourceEffectWaveShaperPreset> @ 14f0b0660

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USourceEffectWaveShaperPreset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundEffectSourcePreset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USourceEffectWaveShaperPreset::GetPrivateStaticClass();
  this = (USoundEffectSourcePreset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundEffectSourcePreset *)0x0) {
    USoundEffectSourcePreset::USoundEffectSourcePreset(this,param_1);
    *(undefined ***)this = &___7USourceEffectWaveShaperPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(undefined8 *)&this[1].field_0x28 = 0x3f800000;
    *(undefined8 *)&this[1].field_0x30 = 0x3f800000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USubmixEffectConvolutionReverbPreset> @ 14f0b0730

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USubmixEffectConvolutionReverbPreset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundEffectSubmixPreset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USubmixEffectConvolutionReverbPreset::GetPrivateStaticClass();
  this = (USoundEffectSubmixPreset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundEffectSubmixPreset *)0x0) {
    USoundEffectSubmixPreset::USoundEffectSubmixPreset(this,param_1);
    *(undefined ***)this = &___7USubmixEffectConvolutionReverbPreset__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined4 *)&this[1].field_0x8 = 0xc1c00000;
    *(undefined4 *)&this[1].field_0xc = 0;
    *(undefined4 *)&this[1].field_0x10 = 0xc2c00000;
    *(undefined2 *)&this[1].field_0x14 = 0x100;
    this[1].field_0x16 = 1;
    *(undefined4 *)&this[1].field_0x18 = 0xc2700000;
    *(undefined2 *)&this[1].field_0x1c = 0;
    *(undefined4 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    this[1].field_0x30 = 1;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[1].field_0x40,4000);
    *(undefined4 *)(this + 2) = 0xc1c00000;
    *(undefined4 *)&this[2].field_0x4 = 0;
    *(undefined4 *)&this[2].field_0x8 = 0xc2c00000;
    *(undefined2 *)&this[2].field_0xc = 0x100;
    this[2].field_0xe = 1;
    *(undefined4 *)&this[2].field_0x10 = 0xc2700000;
    *(undefined2 *)&this[2].field_0x14 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    this[2].field_0x28 = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USubmixEffectDelayPreset> @ 14f0b0890

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USubmixEffectDelayPreset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundEffectSubmixPreset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USubmixEffectDelayPreset::GetPrivateStaticClass();
  this = (USoundEffectSubmixPreset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundEffectSubmixPreset *)0x0) {
    USoundEffectSubmixPreset::USoundEffectSubmixPreset(this,param_1);
    *(undefined ***)this = &___7USubmixEffectDelayPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(undefined4 *)&this[1].field_0x28 = 0x44fa0000;
    *(undefined4 *)&this[1].field_0x2c = 0x43c80000;
    *(undefined4 *)&this[1].field_0x30 = 0x447a0000;
    *(undefined4 *)&this[1].field_0x34 = 0x44fa0000;
    *(undefined4 *)&this[1].field_0x38 = 0x43c80000;
    *(undefined4 *)&this[1].field_0x3c = 0x447a0000;
    *(undefined4 *)&this[1].field_0x40 = 0x44fa0000;
    *(undefined4 *)&this[1].field_0x44 = 0x43c80000;
    *(undefined4 *)&this[1].field_0x48 = 0x447a0000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USubmixEffectDelayStatics> @ 14f0b09b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USubmixEffectDelayStatics>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USubmixEffectDelayStatics::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USubmixEffectDelayStatics__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USubmixEffectFilterPreset> @ 14f0b0a60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USubmixEffectFilterPreset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundEffectSubmixPreset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USubmixEffectFilterPreset::GetPrivateStaticClass();
  this = (USoundEffectSubmixPreset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundEffectSubmixPreset *)0x0) {
    USoundEffectSubmixPreset::USoundEffectSubmixPreset(this,param_1);
    *(undefined ***)this = &___7USubmixEffectFilterPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(undefined2 *)&this[1].field_0x28 = 0;
    *(undefined4 *)&this[1].field_0x2c = 0x469c4000;
    *(undefined4 *)&this[1].field_0x30 = 0x40000000;
    *(undefined2 *)&this[1].field_0x34 = 0;
    *(undefined4 *)&this[1].field_0x38 = 0x469c4000;
    *(undefined4 *)&this[1].field_0x3c = 0x40000000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USubmixEffectFlexiverbPreset> @ 14f0b0b50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USubmixEffectFlexiverbPreset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundEffectSubmixPreset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USubmixEffectFlexiverbPreset::GetPrivateStaticClass();
  this = (USoundEffectSubmixPreset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundEffectSubmixPreset *)0x0) {
    USoundEffectSubmixPreset::USoundEffectSubmixPreset(this,param_1);
    *(undefined ***)this = &___7USubmixEffectFlexiverbPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(undefined4 *)&this[1].field_0x28 = 0x41200000;
    *(undefined4 *)&this[1].field_0x2c = 0x40e00000;
    *(undefined4 *)&this[1].field_0x30 = 0x435c0000;
    *(undefined4 *)&this[1].field_0x34 = 2;
    *(undefined4 *)&this[1].field_0x38 = 0x41200000;
    *(undefined4 *)&this[1].field_0x3c = 0x40e00000;
    *(undefined4 *)&this[1].field_0x40 = 0x435c0000;
    *(undefined4 *)&this[1].field_0x44 = 2;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USubmixEffectMultibandCompressorPreset> @ 14f0b0c60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USubmixEffectMultibandCompressorPreset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundEffectSubmixPreset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USubmixEffectMultibandCompressorPreset::GetPrivateStaticClass();
  this = (USoundEffectSubmixPreset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundEffectSubmixPreset *)0x0) {
    USoundEffectSubmixPreset::USoundEffectSubmixPreset(this,param_1);
    *(undefined ***)this = &___7USubmixEffectMultibandCompressorPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(undefined2 *)&this[1].field_0x28 = 0x100;
    this[1].field_0x2a = 1;
    *(undefined4 *)&this[1].field_0x2c = 0x40400000;
    *(undefined4 *)&this[1].field_0x30 = 0x101;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined8 *)&this[1].field_0x40 = 0;
    *(undefined4 *)&this[1].field_0x48 = 0;
    this[1].field_0x4c = 0;
    *(undefined8 *)&this[1].field_0x50 = 0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    *(undefined2 *)&this[1].field_0x60 = 0x100;
    this[1].field_0x62 = 1;
    *(undefined4 *)&this[1].field_0x64 = 0x40400000;
    *(undefined4 *)(this + 2) = 0x101;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    this[2].field_0x1c = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USubmixEffectStereoDelayPreset> @ 14f0b0dc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USubmixEffectStereoDelayPreset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundEffectSubmixPreset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USubmixEffectStereoDelayPreset::GetPrivateStaticClass();
  this = (USoundEffectSubmixPreset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundEffectSubmixPreset *)0x0) {
    USoundEffectSubmixPreset::USoundEffectSubmixPreset(this,param_1);
    *(undefined ***)this = &___7USubmixEffectStereoDelayPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    this[1].field_0x28 = 2;
    *(undefined4 *)&this[1].field_0x2c = 0x43fa0000;
    *(undefined4 *)&this[1].field_0x30 = 0x3dcccccd;
    *(undefined4 *)&this[1].field_0x34 = 0x3e4ccccd;
    *(undefined4 *)&this[1].field_0x38 = 0x3ecccccd;
    *(undefined4 *)&this[1].field_0x3c = 0x3f800000;
    *(undefined2 *)&this[1].field_0x40 = 0;
    *(undefined4 *)&this[1].field_0x44 = 0x469c4000;
    *(undefined4 *)&this[1].field_0x48 = 0x40000000;
    this[1].field_0x4c = 2;
    *(undefined4 *)&this[1].field_0x50 = 0x43fa0000;
    *(undefined4 *)&this[1].field_0x54 = 0x3dcccccd;
    *(undefined4 *)&this[1].field_0x58 = 0x3e4ccccd;
    *(undefined4 *)&this[1].field_0x5c = 0x3ecccccd;
    *(undefined4 *)&this[1].field_0x60 = 0x3f800000;
    *(undefined2 *)&this[1].field_0x64 = 0;
    *(undefined4 *)(this + 2) = 0x469c4000;
    *(undefined4 *)&this[2].field_0x4 = 0x40000000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USubmixEffectStereoToQuadPreset> @ 14f0b0f30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USubmixEffectStereoToQuadPreset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundEffectSubmixPreset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USubmixEffectStereoToQuadPreset::GetPrivateStaticClass();
  this = (USoundEffectSubmixPreset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundEffectSubmixPreset *)0x0) {
    USoundEffectSubmixPreset::USoundEffectSubmixPreset(this,param_1);
    *(undefined ***)this = &___7USubmixEffectStereoToQuadPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    this[1].field_0x28 = 0;
    *(undefined4 *)&this[1].field_0x2c = 0;
    this[1].field_0x30 = 0;
    *(undefined4 *)&this[1].field_0x34 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USubmixEffectTapDelayPreset> @ 14f0b1010

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USubmixEffectTapDelayPreset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundEffectSubmixPreset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USubmixEffectTapDelayPreset::GetPrivateStaticClass();
  this = (USoundEffectSubmixPreset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundEffectSubmixPreset *)0x0) {
    USoundEffectSubmixPreset::USoundEffectSubmixPreset(this,param_1);
    *(undefined ***)this = &___7USubmixEffectTapDelayPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(undefined4 *)&this[1].field_0x28 = 0x461c4000;
    *(undefined4 *)&this[1].field_0x2c = 0x43c80000;
    *(undefined8 *)&this[1].field_0x30 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined4 *)&this[1].field_0x40 = 0x461c4000;
    *(undefined4 *)&this[1].field_0x44 = 0x43c80000;
    *(undefined8 *)&this[1].field_0x48 = 0;
    *(undefined8 *)&this[1].field_0x50 = 0;
    *(undefined4 *)&this[1].field_0x58 = 0x461c4000;
    *(undefined4 *)&this[1].field_0x5c = 0x43c80000;
    *(undefined8 *)&this[1].field_0x60 = 0;
    *(undefined8 *)(this + 2) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USynth2DSlider> @ 14f0b1140

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USynth2DSlider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWidget *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USynth2DSlider::GetPrivateStaticClass();
  this = (UWidget *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWidget *)0x0) {
    UWidget::UWidget(this,param_1);
    this->_padding_ = (longlong)&USynth2DSlider::_vftable__for__UVisual__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&USynth2DSlider::_vftable__for__INotifyFieldValueChanged__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].Slot.field0_0x0.DebugPtr = (UPanelSlot *)0x0;
    FSynth2DSliderStyle::FSynth2DSliderStyle
              ((FSynth2DSliderStyle *)&this[1].bIsEnabledDelegate.field_0x8);
    *(undefined8 *)&this[3].ToolTipWidgetDelegate.field_0x10 = 0;
    *(undefined8 *)&this[3].VisibilityDelegate = 0;
    *(undefined8 *)&this[3].VisibilityDelegate.field_0x8 = 0;
    *(undefined8 *)&this[3].VisibilityDelegate.field_0x10 = 0;
    this[3].RenderTransform.Translation.field0_0x0._s_0.X = 0.0;
    this[3].RenderTransform.Translation.field0_0x0._s_0.Y = 0.0;
    this[3].RenderTransform.Scale.field0_0x0._s_0.X = 0.0;
    this[3].RenderTransform.Scale.field0_0x0._s_0.Y = 0.0;
    this[3].RenderTransform.Shear.field0_0x0._s_0.X = 0.0;
    this[3].RenderTransform.Shear.field0_0x0._s_0.Y = 0.0;
    *(undefined8 *)&this[3].RenderTransform.Angle = 0;
    this[3].RenderTransformPivot.field0_0x0._s_0.X = 0.0;
    this[3].RenderTransformPivot.field0_0x0._s_0.Y = 0.0;
    this[3].FlowDirectionPreference = Inherit;
    *(undefined2 *)&this[3].field_0xf9 = 0;
    this[3].Cursor = '\0';
    this[3].Clipping = Inherit;
    this[3].Visibility = Visible;
    this[3].PixelSnapping = Inherit;
    this[3].field_0xff = 0;
    *(undefined8 *)&this[3].RenderOpacity = 0;
    this[3].AccessibleWidgetData.field0_0x0.DebugPtr = (USlateAccessibleWidgetData *)0x0;
    this[3].Navigation.field0_0x0.DebugPtr = (UWidgetNavigation *)0x0;
    this[3].WidgetGeneratedByClass.WeakPtr = (FWeakObjectPtr)0x0;
    this[3].MyWidget.Object = (SWidget *)0x0;
    this[3].MyWidget.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USynthComponentMonoWaveTable> @ 14f0b12c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USynthComponentMonoWaveTable>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USynthComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USynthComponentMonoWaveTable::GetPrivateStaticClass();
  this = (USynthComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USynthComponent *)0x0) {
    USynthComponent::USynthComponent(this,param_1);
    this->_padding_ = (longlong)&USynthComponentMonoWaveTable::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&USynthComponentMonoWaveTable::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&USynthComponentMonoWaveTable::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    Audio::FMonoWaveTable::FMonoWaveTable((FMonoWaveTable *)&this[1]._padding_);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USynthComponentToneGenerator> @ 14f0b13c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USynthComponentToneGenerator>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USynthComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USynthComponentToneGenerator::GetPrivateStaticClass();
  this = (USynthComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USynthComponent *)0x0) {
    USynthComponent::USynthComponent(this,param_1);
    this->_padding_ = (longlong)&USynthComponentToneGenerator::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&USynthComponentToneGenerator::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&USynthComponentToneGenerator::_vftable__for__IAsyncPhysicsStateProcessor__;
    FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)&this[1]._padding_);
    *(undefined4 *)&this[1]._padding_ = 0xc2700000;
    this[1]._padding_ = 0x40af400000000000;
    this[1]._padding_ = 0x40af400000000000;
    this[1]._padding_ = (longlong)&___7FLinearCurve_Audio__6B_;
    this[1]._padding_ = 0x4079000000000000;
    this[1]._padding_ = 0x4079000000000000;
    *(undefined4 *)&this[1]._padding_ = 0xc2700000;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USynthKnob> @ 14f0b1500

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USynthKnob>(FVTableHelper *param_1)

{
  UWidget *pUVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UWidget *this;
  
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = USynthKnob::GetPrivateStaticClass();
  this = (UWidget *)
         StaticAllocateObject
                   (pUVar4,pUVar3,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWidget *)0x0) {
    UWidget::UWidget(this,param_1);
    this->_padding_ = (longlong)&USynthKnob::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&USynthKnob::_vftable__for__INotifyFieldValueChanged__;
    FText::FText((FText *)&this[1]._padding_);
    FText::FText((FText *)&this[1]._padding_);
    *(undefined8 *)&this[1].bIsEnabledDelegate = 0;
    *(undefined8 *)&this[1].bIsEnabledDelegate.field_0x8 = 0;
    *(undefined8 *)&this[1].bIsEnabledDelegate.field_0x10 = 0;
    FSynthKnobStyle::FSynthKnobStyle((FSynthKnobStyle *)&this[1].ToolTipTextDelegate);
    pUVar1 = this + 2;
    (pUVar1->EnabledFieldNotifications).AllocatorInstance.InlineData[0] = '\0';
    (pUVar1->EnabledFieldNotifications).AllocatorInstance.InlineData[1] = '\0';
    (pUVar1->EnabledFieldNotifications).AllocatorInstance.InlineData[2] = '\0';
    (pUVar1->EnabledFieldNotifications).AllocatorInstance.InlineData[3] = '\0';
    (pUVar1->EnabledFieldNotifications).AllocatorInstance.InlineData[4] = '\0';
    (pUVar1->EnabledFieldNotifications).AllocatorInstance.InlineData[5] = '\0';
    (pUVar1->EnabledFieldNotifications).AllocatorInstance.InlineData[6] = '\0';
    (pUVar1->EnabledFieldNotifications).AllocatorInstance.InlineData[7] = '\0';
    pTVar2 = &this[2].EnabledFieldNotifications;
    (pTVar2->AllocatorInstance).InlineData[8] = '\0';
    (pTVar2->AllocatorInstance).InlineData[9] = '\0';
    (pTVar2->AllocatorInstance).InlineData[10] = '\0';
    (pTVar2->AllocatorInstance).InlineData[0xb] = '\0';
    (pTVar2->AllocatorInstance).InlineData[0xc] = '\0';
    (pTVar2->AllocatorInstance).InlineData[0xd] = '\0';
    (pTVar2->AllocatorInstance).InlineData[0xe] = '\0';
    (pTVar2->AllocatorInstance).InlineData[0xf] = '\0';
    this[2].EnabledFieldNotifications.AllocatorInstance.SecondaryData =
         (ForElementType<unsigned_int>)0x0;
    this[2].EnabledFieldNotifications.NumBits = 0;
    this[2].EnabledFieldNotifications.MaxBits = 0;
    *(undefined8 *)&this[2].bRoutedSynchronizeProperties = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3].Slot.field0_0x0.DebugPtr = (UPanelSlot *)0x0;
    *(undefined8 *)&this[3].bIsEnabledDelegate = 0;
    *(undefined8 *)&this[3].bIsEnabledDelegate.field_0x8 = 0;
    *(undefined8 *)&this[3].bIsEnabledDelegate.field_0x10 = 0;
    *(undefined8 *)&this[3].ToolTipTextDelegate = 0;
    *(undefined8 *)&this[3].ToolTipTextDelegate.field_0x8 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USynthSamplePlayer> @ 14f0b1670

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USynthSamplePlayer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USynthComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USynthSamplePlayer::GetPrivateStaticClass();
  this = (USynthComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USynthComponent *)0x0) {
    USynthComponent::USynthComponent(this,param_1);
    this->_padding_ = (longlong)&USynthSamplePlayer::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&USynthSamplePlayer::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&USynthSamplePlayer::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    Audio::FSampleBufferReader::FSampleBufferReader((FSampleBufferReader *)&this[1]._padding_);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    Audio::FSoundWavePCMLoader::FSoundWavePCMLoader((FSoundWavePCMLoader *)&this[1]._padding_);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USynthesisUtilitiesBlueprintFunctionLibrary> @ 14f0b17a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USynthesisUtilitiesBlueprintFunctionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USynthesisUtilitiesBlueprintFunctionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USynthesisUtilitiesBlueprintFunctionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,`ISynthSlateResources::GetImagesAtPath'::__l2::<lambda_1>_>_> @ 14f0b1850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,_ISynthSlateResources::GetImagesAtPath_::__l2::<lambda_1>_>_>
          (FString *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FString,_protected:_virtual_void___cdecl_ISynthSlateResources::GetImagesAtPath(FString_const_&,TArray<TSharedPtr<FSlateDynamicImageBrush,1>,TSizedDefaultAllocator<32>_>_&,float)_::_2_::<lambda_1>_>
          param_4)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FString *pFVar10;
  FString **ppFVar11;
  FString *pFVar12;
  FString *pFVar13;
  FString *pFVar14;
  FString *pFVar15;
  FString *pFVar16;
  float fVar17;
  undefined1 auStack_388 [32];
  FIdentityFunctor local_368;
  int local_364;
  FString *local_350;
  FString *local_348;
  FString *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_368 = param_3;
    local_348 = param_1;
    fVar17 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar17;
    memset(local_330,0,0x2e8);
    ppFVar11 = &local_348;
    do {
      pFVar12 = ppFVar11[1];
      pFVar16 = *ppFVar11;
      local_350 = ppFVar11[2];
      iVar8 = (int)((longlong)pFVar12 - (longlong)pFVar16 >> 4) + 1;
      local_364 = (int)local_350;
      pFVar15 = pFVar16;
      if ((int)local_350 != 0) {
LAB_14f0b1915:
        if (8 < iVar8) {
          iVar9 = (pFVar15->Data).ArrayNum;
          iVar5 = (pFVar15->Data).ArrayMax;
          pFVar13 = pFVar12 + 1;
          pFVar16 = pFVar15 + iVar8 / 2;
          pFVar1 = (pFVar16->Data).AllocatorInstance.Data;
          iVar6 = (pFVar16->Data).ArrayNum;
          iVar7 = (pFVar16->Data).ArrayMax;
          pFVar16 = pFVar15 + iVar8 / 2;
          (pFVar16->Data).AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
          (pFVar16->Data).ArrayNum = iVar9;
          (pFVar16->Data).ArrayMax = iVar5;
          (pFVar15->Data).AllocatorInstance.Data = pFVar1;
          (pFVar15->Data).ArrayNum = iVar6;
          (pFVar15->Data).ArrayMax = iVar7;
          pFVar16 = pFVar15;
LAB_14f0b1942:
          pFVar10 = pFVar16;
          pFVar16 = pFVar10 + 1;
          if (pFVar16 <= pFVar12) goto code_r0x00014f0b194b;
          goto LAB_14f0b1967;
        }
        for (; pFVar13 = pFVar15, pFVar16 = pFVar15, pFVar15 < pFVar12; pFVar12 = pFVar12 + -1) {
          while (pFVar10 = pFVar13, pFVar16 = pFVar16 + 1, pFVar16 <= pFVar12) {
            iVar8 = ISynthSlateResources::GetNumberForImageName((param_4.Predicate)->__this,pFVar10)
            ;
            iVar9 = ISynthSlateResources::GetNumberForImageName((param_4.Predicate)->__this,pFVar16)
            ;
            pFVar13 = pFVar16;
            if (iVar9 <= iVar8) {
              pFVar13 = pFVar10;
            }
          }
          pFVar1 = (pFVar10->Data).AllocatorInstance.Data;
          iVar5 = (pFVar10->Data).ArrayNum;
          iVar6 = (pFVar10->Data).ArrayMax;
          iVar8 = (pFVar12->Data).ArrayNum;
          iVar9 = (pFVar12->Data).ArrayMax;
          (pFVar10->Data).AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
          (pFVar10->Data).ArrayNum = iVar8;
          (pFVar10->Data).ArrayMax = iVar9;
          (pFVar12->Data).AllocatorInstance.Data = pFVar1;
          (pFVar12->Data).ArrayNum = iVar5;
          (pFVar12->Data).ArrayMax = iVar6;
          param_3 = local_368;
        }
        goto LAB_14f0b1a48;
      }
LAB_14f0b1a37:
      HeapSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,_ISynthSlateResources::GetImagesAtPath_::__l2::<lambda_1>_>_>
                (pFVar16,iVar8,param_3,param_4);
LAB_14f0b1a48:
      ppFVar11 = ppFVar11 + -3;
    } while (&local_348 <= ppFVar11);
  }
  return;
code_r0x00014f0b194b:
  iVar8 = ISynthSlateResources::GetNumberForImageName((param_4.Predicate)->__this,pFVar15);
  iVar9 = ISynthSlateResources::GetNumberForImageName((param_4.Predicate)->__this,pFVar16);
  if (iVar9 <= iVar8) goto LAB_14f0b1942;
LAB_14f0b1967:
  do {
    pFVar14 = pFVar13;
    pFVar13 = pFVar14 + -1;
    if (pFVar13 <= pFVar15) break;
    iVar8 = ISynthSlateResources::GetNumberForImageName((param_4.Predicate)->__this,pFVar13);
    iVar9 = ISynthSlateResources::GetNumberForImageName((param_4.Predicate)->__this,pFVar15);
  } while (iVar9 <= iVar8);
  pFVar1 = (pFVar13->Data).AllocatorInstance.Data;
  uVar2 = pFVar14[-1].Data.ArrayNum;
  uVar3 = pFVar14[-1].Data.ArrayMax;
  if (pFVar16 <= pFVar13) {
    pFVar4 = (pFVar16->Data).AllocatorInstance.Data;
    iVar8 = pFVar10[1].Data.ArrayNum;
    iVar9 = pFVar10[1].Data.ArrayMax;
    (pFVar16->Data).AllocatorInstance.Data = pFVar1;
    pFVar10[1].Data.ArrayNum = uVar2;
    pFVar10[1].Data.ArrayMax = uVar3;
    (pFVar13->Data).AllocatorInstance.Data = pFVar4;
    pFVar14[-1].Data.ArrayNum = iVar8;
    pFVar14[-1].Data.ArrayMax = iVar9;
    goto LAB_14f0b1942;
  }
  pFVar4 = (pFVar15->Data).AllocatorInstance.Data;
  iVar8 = (pFVar15->Data).ArrayNum;
  iVar9 = (pFVar15->Data).ArrayMax;
  local_364 = local_364 + -1;
  (pFVar15->Data).AllocatorInstance.Data = pFVar1;
  (pFVar15->Data).ArrayNum = uVar2;
  (pFVar15->Data).ArrayMax = uVar3;
  (pFVar13->Data).AllocatorInstance.Data = pFVar4;
  pFVar14[-1].Data.ArrayNum = iVar8;
  pFVar14[-1].Data.ArrayMax = iVar9;
  if ((longlong)((longlong)pFVar13 + (-0x10 - (longlong)pFVar15) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar12 - (longlong)pFVar16 & 0xfffffffffffffff0U)) {
    if (pFVar16 < pFVar12) {
      *ppFVar11 = pFVar16;
      ppFVar11[1] = pFVar12;
      *(int *)(ppFVar11 + 2) = local_364;
      ppFVar11 = ppFVar11 + 3;
    }
    if (pFVar13 <= pFVar15 + 1) goto LAB_14f0b1a48;
    pFVar12 = pFVar14 + -2;
    pFVar16 = pFVar15;
  }
  else {
    if (pFVar15 + 1 < pFVar13) {
      *ppFVar11 = pFVar15;
      ppFVar11[1] = pFVar14 + -2;
      *(int *)(ppFVar11 + 2) = local_364;
      ppFVar11 = ppFVar11 + 3;
    }
    if (pFVar12 <= pFVar16) goto LAB_14f0b1a48;
  }
  iVar8 = (int)((longlong)pFVar12 - (longlong)pFVar16 >> 4) + 1;
  pFVar15 = pFVar16;
  if (local_364 == 0) goto LAB_14f0b1a37;
  goto LAB_14f0b1915;
}

// IsObjectPtrEqual<USoundWave,USoundWave_const_*,0> @ 14f0b1b20

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<USoundWave,USoundWave_const_*,0>
          (TObjectPtr<USoundWave> *param_1,USoundWave **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (USoundWave *)0x0) {
    return *param_2 == (USoundWave *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// LowerBoundInternal<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_const_,int,int,TSortedMap<int,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_> @ 14f0b1f60

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_const_,int,int,TSortedMap<int,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_>
          (TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_> *param_1,int param_2,int *param_3,
          FKeyForward param_4,TLess<int_const_> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(int *)(param_1 + iVar1) < *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// MakeShared<Audio::FEffectConvolutionReverb,1> @ 14f0b1fb0

TSharedRef<Audio::FEffectConvolutionReverb,1> * __cdecl
MakeShared<Audio::FEffectConvolutionReverb,1>
          (TSharedRef<Audio::FEffectConvolutionReverb,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = operator_new(0x120);
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    pTVar1 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar1->SharedReferenceCount = (atomic<int>)0x1;
    pTVar1->WeakReferenceCount = (atomic<int>)0x1;
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFEffectConvolutionReverb_Audio___00_SharedPointerInternals__6B_
    ;
    memset(pTVar1 + 3,0,0xf0);
    pTVar1[1]._padding_ = 0;
    pTVar1[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[2]._padding_ = 0;
    pTVar1[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[2].WeakReferenceCount = (atomic<int>)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar1 + 3),4000);
    pTVar1[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[5].WeakReferenceCount = (atomic<int>)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar1 + 6),4000);
    pTVar1[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[8].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar1[9]._padding_ = 1;
    *(undefined8 *)((longlong)&pTVar1[9]._padding_ + 4) = 0x100;
    *(undefined8 *)&pTVar1[9].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar1[10]._padding_ + 4) = 0;
    pTVar1[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[0xb]._padding_ = 0;
    pTVar1[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[0xb].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined2 *)((longlong)&pTVar1[0xc]._padding_ + 4) = 0x101;
    *(undefined1 *)((longlong)&pTVar1[0xc]._padding_ + 6) = 0;
    pTVar1[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[0xc].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[0xd]._padding_ = 0;
    pTVar1[0xd].SharedReferenceCount = (atomic<int>)0x2;
    pTVar1[0xd].WeakReferenceCount = (atomic<int>)0x2;
    *(undefined1 *)&pTVar1[0xe]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar1[0xe]._padding_ + 4) = 0xc1c00000;
    pTVar1[0xe].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar1[0xe].WeakReferenceCount = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar1 + 0xf),4000);
    *(undefined1 *)&pTVar1[0x11].SharedReferenceCount = 0;
    pTVar1[0x11].WeakReferenceCount = (atomic<int>)0x0;
  }
  TSharedRef<Audio::FEffectConvolutionReverb,1>::TSharedRef<Audio::FEffectConvolutionReverb,1>
            (__return_storage_ptr__,(FEffectConvolutionReverb *)(pTVar1 + 1),pTVar1);
  return __return_storage_ptr__;
}

// MakeTDecl<SSynth2DSlider,RequiredArgs::T0RequiredArgs> @ 14f0b2110

TSlateDecl<SSynth2DSlider,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SSynth2DSlider,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSynth2DSlider,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SSynth2DSlider,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSynth2DSlider,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SSynthKnob,RequiredArgs::T0RequiredArgs> @ 14f0b21c0

TSlateDecl<SSynthKnob,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SSynthKnob,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSynthKnob,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1
          ,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SSynthKnob,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSynthKnob,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// NewObject<USourceEffectBitCrusherPreset> @ 14f0b2270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USourceEffectBitCrusherPreset * __cdecl
NewObject<USourceEffectBitCrusherPreset>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  USourceEffectBitCrusherPreset *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = USourceEffectBitCrusherPreset::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (USourceEffectBitCrusherPreset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USourceEffectChorusPreset> @ 14f0b2370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USourceEffectChorusPreset * __cdecl
NewObject<USourceEffectChorusPreset>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  USourceEffectChorusPreset *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = USourceEffectChorusPreset::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (USourceEffectChorusPreset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USourceEffectConvolutionReverbPreset> @ 14f0b2470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USourceEffectConvolutionReverbPreset * __cdecl
NewObject<USourceEffectConvolutionReverbPreset>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  USourceEffectConvolutionReverbPreset *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = USourceEffectConvolutionReverbPreset::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (USourceEffectConvolutionReverbPreset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USourceEffectDynamicsProcessorPreset> @ 14f0b2570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USourceEffectDynamicsProcessorPreset * __cdecl
NewObject<USourceEffectDynamicsProcessorPreset>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  USourceEffectDynamicsProcessorPreset *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = USourceEffectDynamicsProcessorPreset::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (USourceEffectDynamicsProcessorPreset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USourceEffectEQPreset> @ 14f0b2670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USourceEffectEQPreset * __cdecl
NewObject<USourceEffectEQPreset>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  USourceEffectEQPreset *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = USourceEffectEQPreset::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (USourceEffectEQPreset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USourceEffectEnvelopeFollowerPreset> @ 14f0b2770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USourceEffectEnvelopeFollowerPreset * __cdecl
NewObject<USourceEffectEnvelopeFollowerPreset>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  USourceEffectEnvelopeFollowerPreset *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = USourceEffectEnvelopeFollowerPreset::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (USourceEffectEnvelopeFollowerPreset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USourceEffectFilterPreset> @ 14f0b2870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USourceEffectFilterPreset * __cdecl
NewObject<USourceEffectFilterPreset>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  USourceEffectFilterPreset *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = USourceEffectFilterPreset::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (USourceEffectFilterPreset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USourceEffectFoldbackDistortionPreset> @ 14f0b2970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USourceEffectFoldbackDistortionPreset * __cdecl
NewObject<USourceEffectFoldbackDistortionPreset>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  USourceEffectFoldbackDistortionPreset *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = USourceEffectFoldbackDistortionPreset::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (USourceEffectFoldbackDistortionPreset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USourceEffectMidSideSpreaderPreset> @ 14f0b2a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USourceEffectMidSideSpreaderPreset * __cdecl
NewObject<USourceEffectMidSideSpreaderPreset>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  USourceEffectMidSideSpreaderPreset *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = USourceEffectMidSideSpreaderPreset::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (USourceEffectMidSideSpreaderPreset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USourceEffectMotionFilterPreset> @ 14f0b2b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USourceEffectMotionFilterPreset * __cdecl
NewObject<USourceEffectMotionFilterPreset>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  USourceEffectMotionFilterPreset *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = USourceEffectMotionFilterPreset::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (USourceEffectMotionFilterPreset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USourceEffectPannerPreset> @ 14f0b2c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USourceEffectPannerPreset * __cdecl
NewObject<USourceEffectPannerPreset>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  USourceEffectPannerPreset *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = USourceEffectPannerPreset::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (USourceEffectPannerPreset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USourceEffectPhaserPreset> @ 14f0b2d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USourceEffectPhaserPreset * __cdecl
NewObject<USourceEffectPhaserPreset>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  USourceEffectPhaserPreset *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = USourceEffectPhaserPreset::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (USourceEffectPhaserPreset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USourceEffectRingModulationPreset> @ 14f0b2e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USourceEffectRingModulationPreset * __cdecl
NewObject<USourceEffectRingModulationPreset>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  USourceEffectRingModulationPreset *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = USourceEffectRingModulationPreset::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (USourceEffectRingModulationPreset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USourceEffectSimpleDelayPreset> @ 14f0b2f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USourceEffectSimpleDelayPreset * __cdecl
NewObject<USourceEffectSimpleDelayPreset>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  USourceEffectSimpleDelayPreset *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = USourceEffectSimpleDelayPreset::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (USourceEffectSimpleDelayPreset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USourceEffectStereoDelayPreset> @ 14f0b3070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USourceEffectStereoDelayPreset * __cdecl
NewObject<USourceEffectStereoDelayPreset>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  USourceEffectStereoDelayPreset *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = USourceEffectStereoDelayPreset::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (USourceEffectStereoDelayPreset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USourceEffectWaveShaperPreset> @ 14f0b3170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USourceEffectWaveShaperPreset * __cdecl
NewObject<USourceEffectWaveShaperPreset>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  USourceEffectWaveShaperPreset *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = USourceEffectWaveShaperPreset::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (USourceEffectWaveShaperPreset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USubmixEffectConvolutionReverbPreset> @ 14f0b3270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USubmixEffectConvolutionReverbPreset * __cdecl
NewObject<USubmixEffectConvolutionReverbPreset>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  USubmixEffectConvolutionReverbPreset *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = USubmixEffectConvolutionReverbPreset::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (USubmixEffectConvolutionReverbPreset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USubmixEffectDelayPreset> @ 14f0b3370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USubmixEffectDelayPreset * __cdecl
NewObject<USubmixEffectDelayPreset>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  USubmixEffectDelayPreset *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = USubmixEffectDelayPreset::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (USubmixEffectDelayPreset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USubmixEffectFilterPreset> @ 14f0b3470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USubmixEffectFilterPreset * __cdecl
NewObject<USubmixEffectFilterPreset>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  USubmixEffectFilterPreset *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = USubmixEffectFilterPreset::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (USubmixEffectFilterPreset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USubmixEffectFlexiverbPreset> @ 14f0b3570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USubmixEffectFlexiverbPreset * __cdecl
NewObject<USubmixEffectFlexiverbPreset>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  USubmixEffectFlexiverbPreset *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = USubmixEffectFlexiverbPreset::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (USubmixEffectFlexiverbPreset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USubmixEffectMultibandCompressorPreset> @ 14f0b3670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USubmixEffectMultibandCompressorPreset * __cdecl
NewObject<USubmixEffectMultibandCompressorPreset>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  USubmixEffectMultibandCompressorPreset *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = USubmixEffectMultibandCompressorPreset::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (USubmixEffectMultibandCompressorPreset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USubmixEffectStereoDelayPreset> @ 14f0b3770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USubmixEffectStereoDelayPreset * __cdecl
NewObject<USubmixEffectStereoDelayPreset>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  USubmixEffectStereoDelayPreset *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = USubmixEffectStereoDelayPreset::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (USubmixEffectStereoDelayPreset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USubmixEffectStereoToQuadPreset> @ 14f0b3870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USubmixEffectStereoToQuadPreset * __cdecl
NewObject<USubmixEffectStereoToQuadPreset>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  USubmixEffectStereoToQuadPreset *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = USubmixEffectStereoToQuadPreset::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (USubmixEffectStereoToQuadPreset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USubmixEffectTapDelayPreset> @ 14f0b3970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USubmixEffectTapDelayPreset * __cdecl
NewObject<USubmixEffectTapDelayPreset>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  USubmixEffectTapDelayPreset *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = USubmixEffectTapDelayPreset::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (USubmixEffectTapDelayPreset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// StaticEnum<enum_CurveInterpolationType> @ 14f0b3fd0

UEnum * __cdecl StaticEnum<enum_CurveInterpolationType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_CurveInterpolationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_CurveInterpolationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_CurveInterpolationType,(UObject *)pUVar1,
                       L"CurveInterpolationType");
  }
  return Z_Registration_Info_UEnum_CurveInterpolationType.OuterSingleton;
}

// StaticEnum<enum_EEnvelopeFollowerPeakMode> @ 14f0b4010

UEnum * __cdecl StaticEnum<enum_EEnvelopeFollowerPeakMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvelopeFollowerPeakMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_EEnvelopeFollowerPeakMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode,(UObject *)pUVar1,
                       L"EEnvelopeFollowerPeakMode");
  }
  return Z_Registration_Info_UEnum_EEnvelopeFollowerPeakMode.OuterSingleton;
}

// StaticEnum<enum_EGranularSynthEnvelopeType> @ 14f0b4050

UEnum * __cdecl StaticEnum<enum_EGranularSynthEnvelopeType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGranularSynthEnvelopeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_EGranularSynthEnvelopeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_EGranularSynthEnvelopeType,(UObject *)pUVar1,
                       L"EGranularSynthEnvelopeType");
  }
  return Z_Registration_Info_UEnum_EGranularSynthEnvelopeType.OuterSingleton;
}

// StaticEnum<enum_EGranularSynthSeekType> @ 14f0b4090

UEnum * __cdecl StaticEnum<enum_EGranularSynthSeekType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGranularSynthSeekType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_EGranularSynthSeekType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_EGranularSynthSeekType,(UObject *)pUVar1,
                       L"EGranularSynthSeekType");
  }
  return Z_Registration_Info_UEnum_EGranularSynthSeekType.OuterSingleton;
}

// StaticEnum<enum_EPhaserLFOType> @ 14f0b40d0

UEnum * __cdecl StaticEnum<enum_EPhaserLFOType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPhaserLFOType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_EPhaserLFOType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_EPhaserLFOType,(UObject *)pUVar1,
                       L"EPhaserLFOType");
  }
  return Z_Registration_Info_UEnum_EPhaserLFOType.OuterSingleton;
}

// StaticEnum<enum_ERingModulatorTypeSourceEffect> @ 14f0b4110

UEnum * __cdecl StaticEnum<enum_ERingModulatorTypeSourceEffect>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERingModulatorTypeSourceEffect.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ERingModulatorTypeSourceEffect.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect,(UObject *)pUVar1,
                       L"ERingModulatorTypeSourceEffect");
  }
  return Z_Registration_Info_UEnum_ERingModulatorTypeSourceEffect.OuterSingleton;
}

// StaticEnum<enum_ESamplePlayerSeekType> @ 14f0b4150

UEnum * __cdecl StaticEnum<enum_ESamplePlayerSeekType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESamplePlayerSeekType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESamplePlayerSeekType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESamplePlayerSeekType,(UObject *)pUVar1,
                       L"ESamplePlayerSeekType");
  }
  return Z_Registration_Info_UEnum_ESamplePlayerSeekType.OuterSingleton;
}

// StaticEnum<enum_ESourceEffectDynamicsPeakMode> @ 14f0b4190

UEnum * __cdecl StaticEnum<enum_ESourceEffectDynamicsPeakMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESourceEffectDynamicsPeakMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESourceEffectDynamicsPeakMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode,(UObject *)pUVar1,
                       L"ESourceEffectDynamicsPeakMode");
  }
  return Z_Registration_Info_UEnum_ESourceEffectDynamicsPeakMode.OuterSingleton;
}

// StaticEnum<enum_ESourceEffectDynamicsProcessorType> @ 14f0b41d0

UEnum * __cdecl StaticEnum<enum_ESourceEffectDynamicsProcessorType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESourceEffectDynamicsProcessorType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESourceEffectDynamicsProcessorType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType,
                       (UObject *)pUVar1,L"ESourceEffectDynamicsProcessorType");
  }
  return Z_Registration_Info_UEnum_ESourceEffectDynamicsProcessorType.OuterSingleton;
}

// StaticEnum<enum_ESourceEffectFilterCircuit> @ 14f0b4210

UEnum * __cdecl StaticEnum<enum_ESourceEffectFilterCircuit>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESourceEffectFilterCircuit.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESourceEffectFilterCircuit.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectFilterCircuit,(UObject *)pUVar1,
                       L"ESourceEffectFilterCircuit");
  }
  return Z_Registration_Info_UEnum_ESourceEffectFilterCircuit.OuterSingleton;
}

// StaticEnum<enum_ESourceEffectFilterParam> @ 14f0b4250

UEnum * __cdecl StaticEnum<enum_ESourceEffectFilterParam>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESourceEffectFilterParam.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESourceEffectFilterParam.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectFilterParam,(UObject *)pUVar1,
                       L"ESourceEffectFilterParam");
  }
  return Z_Registration_Info_UEnum_ESourceEffectFilterParam.OuterSingleton;
}

// StaticEnum<enum_ESourceEffectFilterType> @ 14f0b4290

UEnum * __cdecl StaticEnum<enum_ESourceEffectFilterType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESourceEffectFilterType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESourceEffectFilterType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectFilterType,(UObject *)pUVar1,
                       L"ESourceEffectFilterType");
  }
  return Z_Registration_Info_UEnum_ESourceEffectFilterType.OuterSingleton;
}

// StaticEnum<enum_ESourceEffectMotionFilterCircuit> @ 14f0b42d0

UEnum * __cdecl StaticEnum<enum_ESourceEffectMotionFilterCircuit>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESourceEffectMotionFilterCircuit.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESourceEffectMotionFilterCircuit.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterCircuit,
                       (UObject *)pUVar1,L"ESourceEffectMotionFilterCircuit");
  }
  return Z_Registration_Info_UEnum_ESourceEffectMotionFilterCircuit.OuterSingleton;
}

// StaticEnum<enum_ESourceEffectMotionFilterModDestination> @ 14f0b4310

UEnum * __cdecl StaticEnum<enum_ESourceEffectMotionFilterModDestination>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESourceEffectMotionFilterModDestination.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESourceEffectMotionFilterModDestination.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModDestination,
                       (UObject *)pUVar1,L"ESourceEffectMotionFilterModDestination");
  }
  return Z_Registration_Info_UEnum_ESourceEffectMotionFilterModDestination.OuterSingleton;
}

// StaticEnum<enum_ESourceEffectMotionFilterModSource> @ 14f0b4350

UEnum * __cdecl StaticEnum<enum_ESourceEffectMotionFilterModSource>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESourceEffectMotionFilterModSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESourceEffectMotionFilterModSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModSource,
                       (UObject *)pUVar1,L"ESourceEffectMotionFilterModSource");
  }
  return Z_Registration_Info_UEnum_ESourceEffectMotionFilterModSource.OuterSingleton;
}

// StaticEnum<enum_ESourceEffectMotionFilterTopology> @ 14f0b4390

UEnum * __cdecl StaticEnum<enum_ESourceEffectMotionFilterTopology>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESourceEffectMotionFilterTopology.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESourceEffectMotionFilterTopology.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterTopology,
                       (UObject *)pUVar1,L"ESourceEffectMotionFilterTopology");
  }
  return Z_Registration_Info_UEnum_ESourceEffectMotionFilterTopology.OuterSingleton;
}

// StaticEnum<enum_ESourceEffectMotionFilterType> @ 14f0b43d0

UEnum * __cdecl StaticEnum<enum_ESourceEffectMotionFilterType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESourceEffectMotionFilterType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESourceEffectMotionFilterType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterType,(UObject *)pUVar1,
                       L"ESourceEffectMotionFilterType");
  }
  return Z_Registration_Info_UEnum_ESourceEffectMotionFilterType.OuterSingleton;
}

// StaticEnum<enum_EStereoChannelMode> @ 14f0b4410

UEnum * __cdecl StaticEnum<enum_EStereoChannelMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStereoChannelMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_EStereoChannelMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_EStereoChannelMode,(UObject *)pUVar1,
                       L"EStereoChannelMode");
  }
  return Z_Registration_Info_UEnum_EStereoChannelMode.OuterSingleton;
}

// StaticEnum<enum_EStereoDelayFiltertype> @ 14f0b4450

UEnum * __cdecl StaticEnum<enum_EStereoDelayFiltertype>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStereoDelayFiltertype.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_EStereoDelayFiltertype.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_EStereoDelayFiltertype,(UObject *)pUVar1,
                       L"EStereoDelayFiltertype");
  }
  return Z_Registration_Info_UEnum_EStereoDelayFiltertype.OuterSingleton;
}

// StaticEnum<enum_EStereoDelaySourceEffect> @ 14f0b4490

UEnum * __cdecl StaticEnum<enum_EStereoDelaySourceEffect>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStereoDelaySourceEffect.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_EStereoDelaySourceEffect.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_EStereoDelaySourceEffect,(UObject *)pUVar1,
                       L"EStereoDelaySourceEffect");
  }
  return Z_Registration_Info_UEnum_EStereoDelaySourceEffect.OuterSingleton;
}

// StaticEnum<enum_ESubmixEffectConvolutionReverbBlockSize> @ 14f0b44d0

UEnum * __cdecl StaticEnum<enum_ESubmixEffectConvolutionReverbBlockSize>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESubmixEffectConvolutionReverbBlockSize.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESubmixEffectConvolutionReverbBlockSize.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESubmixEffectConvolutionReverbBlockSize,
                       (UObject *)pUVar1,L"ESubmixEffectConvolutionReverbBlockSize");
  }
  return Z_Registration_Info_UEnum_ESubmixEffectConvolutionReverbBlockSize.OuterSingleton;
}

// StaticEnum<enum_ESubmixFilterAlgorithm> @ 14f0b4510

UEnum * __cdecl StaticEnum<enum_ESubmixFilterAlgorithm>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESubmixFilterAlgorithm.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESubmixFilterAlgorithm.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESubmixFilterAlgorithm,(UObject *)pUVar1,
                       L"ESubmixFilterAlgorithm");
  }
  return Z_Registration_Info_UEnum_ESubmixFilterAlgorithm.OuterSingleton;
}

// StaticEnum<enum_ESubmixFilterType> @ 14f0b4550

UEnum * __cdecl StaticEnum<enum_ESubmixFilterType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESubmixFilterType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESubmixFilterType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESubmixFilterType,(UObject *)pUVar1,
                       L"ESubmixFilterType");
  }
  return Z_Registration_Info_UEnum_ESubmixFilterType.OuterSingleton;
}

// StaticEnum<enum_ESynth1OscType> @ 14f0b4590

UEnum * __cdecl StaticEnum<enum_ESynth1OscType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESynth1OscType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESynth1OscType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynth1OscType,(UObject *)pUVar1,
                       L"ESynth1OscType");
  }
  return Z_Registration_Info_UEnum_ESynth1OscType.OuterSingleton;
}

// StaticEnum<enum_ESynth1PatchDestination> @ 14f0b45d0

UEnum * __cdecl StaticEnum<enum_ESynth1PatchDestination>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESynth1PatchDestination.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESynth1PatchDestination.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynth1PatchDestination,(UObject *)pUVar1,
                       L"ESynth1PatchDestination");
  }
  return Z_Registration_Info_UEnum_ESynth1PatchDestination.OuterSingleton;
}

// StaticEnum<enum_ESynth1PatchSource> @ 14f0b4610

UEnum * __cdecl StaticEnum<enum_ESynth1PatchSource>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESynth1PatchSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESynth1PatchSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynth1PatchSource,(UObject *)pUVar1,
                       L"ESynth1PatchSource");
  }
  return Z_Registration_Info_UEnum_ESynth1PatchSource.OuterSingleton;
}

// StaticEnum<enum_ESynthFilterAlgorithm> @ 14f0b4650

UEnum * __cdecl StaticEnum<enum_ESynthFilterAlgorithm>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESynthFilterAlgorithm.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESynthFilterAlgorithm.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthFilterAlgorithm,(UObject *)pUVar1,
                       L"ESynthFilterAlgorithm");
  }
  return Z_Registration_Info_UEnum_ESynthFilterAlgorithm.OuterSingleton;
}

// StaticEnum<enum_ESynthFilterType> @ 14f0b4690

UEnum * __cdecl StaticEnum<enum_ESynthFilterType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESynthFilterType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESynthFilterType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthFilterType,(UObject *)pUVar1,
                       L"ESynthFilterType");
  }
  return Z_Registration_Info_UEnum_ESynthFilterType.OuterSingleton;
}

// StaticEnum<enum_ESynthKnobSize> @ 14f0b46d0

UEnum * __cdecl StaticEnum<enum_ESynthKnobSize>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESynthKnobSize.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESynthKnobSize.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthKnobSize,(UObject *)pUVar1,
                       L"ESynthKnobSize");
  }
  return Z_Registration_Info_UEnum_ESynthKnobSize.OuterSingleton;
}

// StaticEnum<enum_ESynthLFOMode> @ 14f0b4710

UEnum * __cdecl StaticEnum<enum_ESynthLFOMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESynthLFOMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESynthLFOMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthLFOMode,(UObject *)pUVar1,L"ESynthLFOMode")
    ;
  }
  return Z_Registration_Info_UEnum_ESynthLFOMode.OuterSingleton;
}

// StaticEnum<enum_ESynthLFOPatchType> @ 14f0b4750

UEnum * __cdecl StaticEnum<enum_ESynthLFOPatchType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESynthLFOPatchType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESynthLFOPatchType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthLFOPatchType,(UObject *)pUVar1,
                       L"ESynthLFOPatchType");
  }
  return Z_Registration_Info_UEnum_ESynthLFOPatchType.OuterSingleton;
}

// StaticEnum<enum_ESynthLFOType> @ 14f0b4790

UEnum * __cdecl StaticEnum<enum_ESynthLFOType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESynthLFOType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESynthLFOType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthLFOType,(UObject *)pUVar1,L"ESynthLFOType")
    ;
  }
  return Z_Registration_Info_UEnum_ESynthLFOType.OuterSingleton;
}

// StaticEnum<enum_ESynthModEnvBiasPatch> @ 14f0b47d0

UEnum * __cdecl StaticEnum<enum_ESynthModEnvBiasPatch>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESynthModEnvBiasPatch.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESynthModEnvBiasPatch.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthModEnvBiasPatch,(UObject *)pUVar1,
                       L"ESynthModEnvBiasPatch");
  }
  return Z_Registration_Info_UEnum_ESynthModEnvBiasPatch.OuterSingleton;
}

// StaticEnum<enum_ESynthModEnvPatch> @ 14f0b4810

UEnum * __cdecl StaticEnum<enum_ESynthModEnvPatch>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESynthModEnvPatch.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESynthModEnvPatch.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthModEnvPatch,(UObject *)pUVar1,
                       L"ESynthModEnvPatch");
  }
  return Z_Registration_Info_UEnum_ESynthModEnvPatch.OuterSingleton;
}

// StaticEnum<enum_ESynthSlateColorStyle> @ 14f0b4850

UEnum * __cdecl StaticEnum<enum_ESynthSlateColorStyle>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESynthSlateColorStyle.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESynthSlateColorStyle.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthSlateColorStyle,(UObject *)pUVar1,
                       L"ESynthSlateColorStyle");
  }
  return Z_Registration_Info_UEnum_ESynthSlateColorStyle.OuterSingleton;
}

// StaticEnum<enum_ESynthSlateSizeType> @ 14f0b4890

UEnum * __cdecl StaticEnum<enum_ESynthSlateSizeType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESynthSlateSizeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESynthSlateSizeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthSlateSizeType,(UObject *)pUVar1,
                       L"ESynthSlateSizeType");
  }
  return Z_Registration_Info_UEnum_ESynthSlateSizeType.OuterSingleton;
}

// StaticEnum<enum_ESynthStereoDelayMode> @ 14f0b48d0

UEnum * __cdecl StaticEnum<enum_ESynthStereoDelayMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESynthStereoDelayMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ESynthStereoDelayMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthStereoDelayMode,(UObject *)pUVar1,
                       L"ESynthStereoDelayMode");
  }
  return Z_Registration_Info_UEnum_ESynthStereoDelayMode.OuterSingleton;
}

// StaticEnum<enum_ETapLineMode> @ 14f0b4910

UEnum * __cdecl StaticEnum<enum_ETapLineMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETapLineMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UEnum_ETapLineMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Synthesis_ETapLineMode,(UObject *)pUVar1,L"ETapLineMode");
  }
  return Z_Registration_Info_UEnum_ETapLineMode.OuterSingleton;
}

// Transform<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>_&,``USourceEffectBitCrusherPreset::OnInit'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 14f0b4950

void __cdecl
Algo::
Transform<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>_&,__USourceEffectBitCrusherPreset::OnInit_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
           *param_1,
          TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
          *param_2,<lambda_1> param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  UObject *pUVar5;
  code *pcVar6;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  USoundModulatorBase *local_a8;
  UObject *local_a0;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar12 = *puVar14;
    while (uVar12 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14f0b49ed;
      uVar12 = puVar14[lVar9 + 1];
    }
    uStack_8c = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_7c = (int)lVar9 + -1 + local_78;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_14f0b49ed:
  uVar12 = *(uint *)&(param_1->Elements).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  iStack_70 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar12 != uVar4) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14f0b4af0;
      uVar12 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_14f0b4af0:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar12) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    break;
    pUVar5 = *(UObject **)
              (*(longlong *)&pTVar7->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_a0 = pUVar5;
    TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>::
    Emplace<USoundModulatorBase_*>(param_2,&local_a8,(bool *)&local_a0);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Transform<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>_&,``USourceEffectChorusPreset::OnInit'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 14f0b4b90

void __cdecl
Algo::
Transform<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>_&,__USourceEffectChorusPreset::OnInit_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
           *param_1,
          TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
          *param_2,<lambda_1> param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  UObject *pUVar5;
  code *pcVar6;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  USoundModulatorBase *local_a8;
  UObject *local_a0;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar12 = *puVar14;
    while (uVar12 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14f0b4c2d;
      uVar12 = puVar14[lVar9 + 1];
    }
    uStack_8c = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_7c = (int)lVar9 + -1 + local_78;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_14f0b4c2d:
  uVar12 = *(uint *)&(param_1->Elements).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  iStack_70 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar12 != uVar4) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14f0b4d30;
      uVar12 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_14f0b4d30:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar12) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    break;
    pUVar5 = *(UObject **)
              (*(longlong *)&pTVar7->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_a0 = pUVar5;
    TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>::
    Emplace<USoundModulatorBase_*>(param_2,&local_a8,(bool *)&local_a0);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Transform<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>_&,``FSourceEffectBitCrusher::Init'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 14f0b4dd0

void __cdecl
Algo::
Transform<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>_&,__FSourceEffectBitCrusher::Init_::__l5::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
           *param_1,
          TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
          *param_2,<lambda_1> param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  UObject *pUVar5;
  code *pcVar6;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  USoundModulatorBase *local_a8;
  UObject *local_a0;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar12 = *puVar14;
    while (uVar12 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14f0b4e6d;
      uVar12 = puVar14[lVar9 + 1];
    }
    uStack_8c = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_7c = (int)lVar9 + -1 + local_78;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_14f0b4e6d:
  uVar12 = *(uint *)&(param_1->Elements).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  iStack_70 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar12 != uVar4) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14f0b4f70;
      uVar12 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_14f0b4f70:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar12) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    break;
    pUVar5 = *(UObject **)
              (*(longlong *)&pTVar7->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_a0 = pUVar5;
    TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>::
    Emplace<USoundModulatorBase_*>(param_2,&local_a8,(bool *)&local_a0);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Transform<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>_&,``FSourceEffectChorus::Init'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 14f0b5010

void __cdecl
Algo::
Transform<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>_&,__FSourceEffectChorus::Init_::__l5::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
           *param_1,
          TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
          *param_2,<lambda_1> param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  UObject *pUVar5;
  code *pcVar6;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  USoundModulatorBase *local_a8;
  UObject *local_a0;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar12 = *puVar14;
    while (uVar12 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14f0b50ad;
      uVar12 = puVar14[lVar9 + 1];
    }
    uStack_8c = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_7c = (int)lVar9 + -1 + local_78;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_14f0b50ad:
  uVar12 = *(uint *)&(param_1->Elements).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  iStack_70 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar12 != uVar4) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14f0b51b0;
      uVar12 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_14f0b51b0:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar12) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    break;
    pUVar5 = *(UObject **)
              (*(longlong *)&pTVar7->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_a0 = pUVar5;
    TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>::
    Emplace<USoundModulatorBase_*>(param_2,&local_a8,(bool *)&local_a0);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// FThreadSafeStaticStat<`AudioConvReverbIntrinsics::FCreateConvolutionReverbTask::GetStatId'::__l2::FStat_CreateConvolutionReverbTask> @ 14f0b52f0

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_AudioConvReverbIntrinsics::FCreateConvolutionReverbTask::GetStatId(void)const_::_2_::FStat_CreateConvolutionReverbTask>
* __thiscall
FThreadSafeStaticStat<`AudioConvReverbIntrinsics::FCreateConvolutionReverbTask::GetStatId'::__l2::FStat_CreateConvolutionReverbTask>
::
FThreadSafeStaticStat<_AudioConvReverbIntrinsics::FCreateConvolutionReverbTask::GetStatId_::__l2::FStat_CreateConvolutionReverbTask>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"CreateConvolutionReverbTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"CreateConvolutionReverbTask","STATGROUP_ThreadPoolAsyncTasks",
               "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return this;
}

// ~TFunction_OwnedObject<`USoundEffectPreset::EffectCommand<FSubmixEffectDelay>'::__l2::<lambda_1>,0,1> @ 14f0bc560

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundEffectPreset::EffectCommand<FSubmixEffectDelay>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_USoundEffectPreset::EffectCommand<FSubmixEffectDelay>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____EffectCommand_VFSubmixEffectDelay___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectDelay___Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014f0bc583. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`USoundEffectPreset::EffectCommand<FSubmixEffectFilter>'::__l2::<lambda_1>,0,1> @ 14f0bc590

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundEffectPreset::EffectCommand<FSubmixEffectFilter>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_USoundEffectPreset::EffectCommand<FSubmixEffectFilter>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____EffectCommand_VFSubmixEffectFilter___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectFilter___Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014f0bc5b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`USoundEffectPreset::EffectCommand<FSubmixEffectMultibandCompressor>'::__l2::<lambda_1>,0,1> @ 14f0bc5c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundEffectPreset::EffectCommand<FSubmixEffectMultibandCompressor>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_USoundEffectPreset::EffectCommand<FSubmixEffectMultibandCompressor>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____EffectCommand_VFSubmixEffectMultibandCompressor___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectMultibandCompressor___Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014f0bc5e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`USoundEffectPreset::EffectCommand<FSubmixEffectTapDelay>'::__l2::<lambda_1>,0,1> @ 14f0bc5f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundEffectPreset::EffectCommand<FSubmixEffectTapDelay>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_USoundEffectPreset::EffectCommand<FSubmixEffectTapDelay>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____EffectCommand_VFSubmixEffectTapDelay___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectTapDelay___Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014f0bc613. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<``USoundEffectPreset::EffectCommand<FSubmixEffectDelay>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1> @ 14f0bc620

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``USoundEffectPreset::EffectCommand<FSubmixEffectDelay>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<__USoundEffectPreset::EffectCommand<FSubmixEffectDelay>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1____EffectCommand_VFSubmixEffectDelay___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectDelay___Z___Z_QEBA_AEAVFSubmixEffectDelay___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x00014f0bc643. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<``USoundEffectPreset::EffectCommand<FSubmixEffectFilter>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1> @ 14f0bc650

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``USoundEffectPreset::EffectCommand<FSubmixEffectFilter>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<__USoundEffectPreset::EffectCommand<FSubmixEffectFilter>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1____EffectCommand_VFSubmixEffectFilter___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectFilter___Z___Z_QEBA_AEAVFSubmixEffectFilter___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x00014f0bc673. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<``USoundEffectPreset::EffectCommand<FSubmixEffectMultibandCompressor>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1> @ 14f0bc680

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``USoundEffectPreset::EffectCommand<FSubmixEffectMultibandCompressor>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<__USoundEffectPreset::EffectCommand<FSubmixEffectMultibandCompressor>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1____EffectCommand_VFSubmixEffectMultibandCompressor___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectMultibandCompressor___Z___Z_QEBA_AEAVFSubmixEffectMultibandCompressor___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x00014f0bc6a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<``USoundEffectPreset::EffectCommand<FSubmixEffectTapDelay>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1> @ 14f0bc6b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``USoundEffectPreset::EffectCommand<FSubmixEffectTapDelay>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<__USoundEffectPreset::EffectCommand<FSubmixEffectTapDelay>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1____EffectCommand_VFSubmixEffectTapDelay___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectTapDelay___Z___Z_QEBA_AEAVFSubmixEffectTapDelay___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x00014f0bc6d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FSourceEffectEnvFollowerNotifier::AddEnvFollowerInstance'::__l2::<lambda_1>,0,0> @ 14f0bc6e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSourceEffectEnvFollowerNotifier::AddEnvFollowerInstance'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_FSourceEffectEnvFollowerNotifier::AddEnvFollowerInstance_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__AddEnvFollowerInstance_FSourceEffectEnvFollowerNotifier__QEAAXII_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`USubmixEffectTapDelayPreset::AddTap'::__l2::<lambda_1>,0,0> @ 14f0bc700

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectTapDelayPreset::AddTap'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USubmixEffectTapDelayPreset::AddTap_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubmixEffectTapDelayPreset::AddTap'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::Init'::__l2::<lambda_1>,0,0> @ 14f0bc720

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::Init'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::Init_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::Init'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::InitSynth'::__l2::<lambda_1>,0,0> @ 14f0bc740

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::InitSynth'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::InitSynth_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::InitSynth'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UGranularSynth::NoteOff'::__l2::<lambda_1>,0,0> @ 14f0bc760

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UGranularSynth::NoteOff'::__l2::<lambda_1>,0,0>
::~TFunction_OwnedObject<_UGranularSynth::NoteOff_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::NoteOff'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::NoteOff'::__l2::<lambda_1>,0,0> @ 14f0bc780

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::NoteOff'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::NoteOff_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::NoteOff'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::NoteOff'::__l2::<lambda_1>,0,0> @ 14f0bc7a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::NoteOff'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::NoteOff_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::NoteOff'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UGranularSynth::NoteOn'::__l2::<lambda_1>,0,1> @ 14f0bc7c0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UGranularSynth::NoteOn'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UGranularSynth::NoteOn_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::NoteOn'::`2'::<lambda_1>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::NoteOn'::__l2::<lambda_1>,0,1> @ 14f0bc7e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::NoteOn'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UModularSynthComponent::NoteOn_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::NoteOn'::`2'::<lambda_1>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::NoteOn'::__l2::<lambda_1>,0,0> @ 14f0bc800

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::NoteOn'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::NoteOn_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::NoteOn'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::RefreshWaveTable'::__l2::<lambda_1>,0,1> @ 14f0bc820

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::RefreshWaveTable'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::RefreshWaveTable_::__l2::<lambda_1>,0,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::RefreshWaveTable'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TFunction_OwnedObject<`FSourceEffectEnvFollowerNotifier::RemoveEnvFollowerInstance'::__l2::<lambda_1>,0,0> @ 14f0bc840

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSourceEffectEnvFollowerNotifier::RemoveEnvFollowerInstance'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_FSourceEffectEnvFollowerNotifier::RemoveEnvFollowerInstance_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__RemoveEnvFollowerInstance_FSourceEffectEnvFollowerNotifier__QEAAXII_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`USynthSamplePlayer::SeekToTime'::__l2::<lambda_1>,0,1> @ 14f0bc860

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthSamplePlayer::SeekToTime'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_USynthSamplePlayer::SeekToTime_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthSamplePlayer::SeekToTime'::`2'::<lambda_1>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeAttackTime'::__l2::<lambda_1>,0,0> @ 14f0bc880

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeAttackTime'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetAmpEnvelopeAttackTime_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeAttackTime'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeBiasDepth'::__l2::<lambda_1>,0,0> @ 14f0bc8a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeBiasDepth'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetAmpEnvelopeBiasDepth_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeBiasDepth'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeBiasInvert'::__l2::<lambda_1>,0,0> @ 14f0bc8c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeBiasInvert'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetAmpEnvelopeBiasInvert_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeBiasInvert'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeDecayTime'::__l2::<lambda_1>,0,0> @ 14f0bc8e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeDecayTime'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetAmpEnvelopeDecayTime_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeDecayTime'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeDepth'::__l2::<lambda_1>,0,0> @ 14f0bc900

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeDepth'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetAmpEnvelopeDepth_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeDepth'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeInvert'::__l2::<lambda_1>,0,0> @ 14f0bc920

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeInvert'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetAmpEnvelopeInvert_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeInvert'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeReleaseTime'::__l2::<lambda_1>,0,0> @ 14f0bc940

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeReleaseTime'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetAmpEnvelopeReleaseTime_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeReleaseTime'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeSustainGain'::__l2::<lambda_1>,0,0> @ 14f0bc960

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeSustainGain'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetAmpEnvelopeSustainGain_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeSustainGain'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UGranularSynth::SetAttackTime'::__l2::<lambda_1>,0,0> @ 14f0bc980

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetAttackTime'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UGranularSynth::SetAttackTime_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::SetAttackTime'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetAttackTime'::__l2::<lambda_1>,0,0> @ 14f0bc9a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetAttackTime'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetAttackTime_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetAttackTime'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetBitModulator'::__l2::<lambda_1>,0,0> @ 14f0bc9c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetBitModulator'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USourceEffectBitCrusherPreset::SetBitModulator_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetBitModulator'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetBitModulators'::__l2::<lambda_1>,0,0> @ 14f0bc9e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetBitModulators'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USourceEffectBitCrusherPreset::SetBitModulators_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetBitModulators'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetBits'::__l2::<lambda_1>,1,0> @ 14f0bca00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetBits'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_USourceEffectBitCrusherPreset::SetBits_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetBits'::`2'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetChorusDepth'::__l2::<lambda_1>,0,0> @ 14f0bca20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetChorusDepth'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetChorusDepth_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetChorusDepth'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetChorusEnabled'::__l2::<lambda_1>,0,0> @ 14f0bca40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetChorusEnabled'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetChorusEnabled_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetChorusEnabled'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetChorusFeedback'::__l2::<lambda_1>,0,0> @ 14f0bca60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetChorusFeedback'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetChorusFeedback_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetChorusFeedback'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetChorusFrequency'::__l2::<lambda_1>,0,0> @ 14f0bca80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetChorusFrequency'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetChorusFrequency_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetChorusFrequency'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UGranularSynth::SetDecayTime'::__l2::<lambda_1>,0,0> @ 14f0bcaa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetDecayTime'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UGranularSynth::SetDecayTime_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::SetDecayTime'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetDecayTime'::__l2::<lambda_1>,0,0> @ 14f0bcac0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetDecayTime'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetDecayTime_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetDecayTime'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`USubmixEffectDelayPreset::SetDelay'::__l2::<lambda_1>,0,0> @ 14f0bcae0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectDelayPreset::SetDelay'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USubmixEffectDelayPreset::SetDelay_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubmixEffectDelayPreset::SetDelay'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USourceEffectChorusPreset::SetDepth'::__l2::<lambda_1>,1,0> @ 14f0bcb00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetDepth'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_USourceEffectChorusPreset::SetDepth_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetDepth'::`2'::<lambda_1>,1,0>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`USourceEffectChorusPreset::SetDepthModulator'::__l2::<lambda_1>,0,0> @ 14f0bcb20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetDepthModulator'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USourceEffectChorusPreset::SetDepthModulator_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetDepthModulator'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`USourceEffectChorusPreset::SetDepthModulators'::__l2::<lambda_1>,0,0> @ 14f0bcb40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetDepthModulators'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USourceEffectChorusPreset::SetDepthModulators_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetDepthModulators'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FToneGenerator::SetDistance'::__l2::<lambda_1>,0,0> @ 14f0bcb60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FToneGenerator::SetDistance'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FToneGenerator::SetDistance_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FToneGenerator::SetDistance'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USourceEffectChorusPreset::SetDry'::__l2::<lambda_1>,1,0> @ 14f0bcb80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetDry'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_USourceEffectChorusPreset::SetDry_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetDry'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USourceEffectChorusPreset::SetDryModulator'::__l2::<lambda_1>,0,0> @ 14f0bcba0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetDryModulator'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USourceEffectChorusPreset::SetDryModulator_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetDryModulator'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`USourceEffectChorusPreset::SetDryModulators'::__l2::<lambda_1>,0,0> @ 14f0bcbc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetDryModulators'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USourceEffectChorusPreset::SetDryModulators_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetDryModulators'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetEnableLegato'::__l2::<lambda_1>,0,0> @ 14f0bcbe0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetEnableLegato'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetEnableLegato_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetEnableLegato'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetEnablePolyphony'::__l2::<lambda_1>,0,0> @ 14f0bcc00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetEnablePolyphony'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetEnablePolyphony_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetEnablePolyphony'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetEnableRetrigger'::__l2::<lambda_1>,0,0> @ 14f0bcc20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetEnableRetrigger'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetEnableRetrigger_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetEnableRetrigger'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetEnableUnison'::__l2::<lambda_1>,0,0> @ 14f0bcc40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetEnableUnison'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetEnableUnison_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetEnableUnison'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`USourceEffectChorusPreset::SetFeedback'::__l2::<lambda_1>,1,0> @ 14f0bcc60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetFeedback'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_USourceEffectChorusPreset::SetFeedback_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetFeedback'::`2'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`USourceEffectChorusPreset::SetFeedbackModulator'::__l2::<lambda_1>,0,0> @ 14f0bcc80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetFeedbackModulator'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USourceEffectChorusPreset::SetFeedbackModulator_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetFeedbackModulator'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USourceEffectChorusPreset::SetFeedbackModulators'::__l2::<lambda_1>,0,0> @ 14f0bcca0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetFeedbackModulators'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USourceEffectChorusPreset::SetFeedbackModulators_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetFeedbackModulators'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetFilterAlgorithm'::__l2::<lambda_1>,0,0> @ 14f0bccc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetFilterAlgorithm'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetFilterAlgorithm_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetFilterAlgorithm'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterAlgorithm'::__l2::<lambda_1>,0,0> @ 14f0bcce0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterAlgorithm'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USubmixEffectFilterPreset::SetFilterAlgorithm_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterAlgorithm'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterCutoffFrequency'::__l2::<lambda_1>,0,0> @ 14f0bcd00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterCutoffFrequency'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USubmixEffectFilterPreset::SetFilterCutoffFrequency_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterCutoffFrequency'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterCutoffFrequencyMod'::__l2::<lambda_1>,0,0> @ 14f0bcd20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterCutoffFrequencyMod'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_USubmixEffectFilterPreset::SetFilterCutoffFrequencyMod_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterCutoffFrequencyMod'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeAttackTime'::__l2::<lambda_1>,0,0> @ 14f0bcd40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeAttackTime'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetFilterEnvelopeAttackTime_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeAttackTime'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeBiasDepth'::__l2::<lambda_1>,0,0> @ 14f0bcd60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeBiasDepth'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetFilterEnvelopeBiasDepth_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeBiasDepth'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeBiasInvert'::__l2::<lambda_1>,0,0> @ 14f0bcd80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeBiasInvert'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetFilterEnvelopeBiasInvert_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeBiasInvert'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeDepth'::__l2::<lambda_1>,0,0> @ 14f0bcda0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeDepth'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetFilterEnvelopeDepth_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeDepth'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeInvert'::__l2::<lambda_1>,0,0> @ 14f0bcdc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeInvert'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetFilterEnvelopeInvert_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeInvert'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeReleaseTime'::__l2::<lambda_1>,0,0> @ 14f0bcde0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeReleaseTime'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetFilterEnvelopeReleaseTime_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeReleaseTime'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeSustainGain'::__l2::<lambda_1>,0,0> @ 14f0bce00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeSustainGain'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetFilterEnvelopeSustainGain_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeSustainGain'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopenDecayTime'::__l2::<lambda_1>,0,0> @ 14f0bce20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopenDecayTime'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetFilterEnvelopenDecayTime_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopenDecayTime'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetFilterFrequency'::__l2::<lambda_1>,0,0> @ 14f0bce40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetFilterFrequency'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetFilterFrequency_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetFilterFrequency'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetFilterFrequencyMod'::__l2::<lambda_1>,0,0> @ 14f0bce60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetFilterFrequencyMod'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetFilterFrequencyMod_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetFilterFrequencyMod'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetFilterQ'::__l2::<lambda_1>,0,0> @ 14f0bce80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetFilterQ'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetFilterQ_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetFilterQ'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterQ'::__l2::<lambda_1>,0,0> @ 14f0bcea0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterQ'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USubmixEffectFilterPreset::SetFilterQ_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterQ'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetFilterQMod'::__l2::<lambda_1>,0,0> @ 14f0bcec0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetFilterQMod'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetFilterQMod_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetFilterQMod'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterQMod'::__l2::<lambda_1>,0,0> @ 14f0bcee0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterQMod'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USubmixEffectFilterPreset::SetFilterQMod_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterQMod'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetFilterType'::__l2::<lambda_1>,0,0> @ 14f0bcf00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetFilterType'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetFilterType_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetFilterType'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterType'::__l2::<lambda_1>,0,0> @ 14f0bcf20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterType'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USubmixEffectFilterPreset::SetFilterType_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterType'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FToneGenerator::SetFrequency'::__l2::<lambda_1>,0,0> @ 14f0bcf40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FToneGenerator::SetFrequency'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FToneGenerator::SetFrequency_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FToneGenerator::SetFrequency'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USourceEffectChorusPreset::SetFrequency'::__l2::<lambda_1>,1,0> @ 14f0bcf60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetFrequency'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_USourceEffectChorusPreset::SetFrequency_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetFrequency'::`2'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFrequency'::__l2::<lambda_1>,0,0> @ 14f0bcf80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFrequency'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetFrequency_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFrequency'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`USourceEffectChorusPreset::SetFrequencyModulator'::__l2::<lambda_1>,0,0> @ 14f0bcfa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetFrequencyModulator'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USourceEffectChorusPreset::SetFrequencyModulator_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetFrequencyModulator'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USourceEffectChorusPreset::SetFrequencyModulators'::__l2::<lambda_1>,0,0> @ 14f0bcfc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetFrequencyModulators'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USourceEffectChorusPreset::SetFrequencyModulators_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetFrequencyModulators'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFrequencyPitchBend'::__l2::<lambda_1>,0,0> @ 14f0bcfe0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFrequencyPitchBend'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetFrequencyPitchBend_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFrequencyPitchBend'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetGainDb'::__l2::<lambda_1>,0,0> @ 14f0bd000

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetGainDb'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetGainDb_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetGainDb'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UGranularSynth::SetGrainDuration'::__l2::<lambda_1>,0,1> @ 14f0bd020

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainDuration'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UGranularSynth::SetGrainDuration_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::SetGrainDuration'::`2'::<lambda_1>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UGranularSynth::SetGrainEnvelopeType'::__l2::<lambda_1>,0,0> @ 14f0bd040

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainEnvelopeType'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UGranularSynth::SetGrainEnvelopeType_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::SetGrainEnvelopeType'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UGranularSynth::SetGrainPan'::__l2::<lambda_1>,0,1> @ 14f0bd060

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainPan'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UGranularSynth::SetGrainPan_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::SetGrainPan'::`2'::<lambda_1>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UGranularSynth::SetGrainPitch'::__l2::<lambda_1>,0,1> @ 14f0bd080

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainPitch'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UGranularSynth::SetGrainPitch_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::SetGrainPitch'::`2'::<lambda_1>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UGranularSynth::SetGrainProbability'::__l2::<lambda_1>,0,0> @ 14f0bd0a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainProbability'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UGranularSynth::SetGrainProbability_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::SetGrainProbability'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`UGranularSynth::SetGrainVolume'::__l2::<lambda_1>,0,1> @ 14f0bd0c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainVolume'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UGranularSynth::SetGrainVolume_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::SetGrainVolume'::`2'::<lambda_1>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UGranularSynth::SetGrainsPerSecond'::__l2::<lambda_1>,0,0> @ 14f0bd0e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainsPerSecond'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UGranularSynth::SetGrainsPerSecond_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::SetGrainsPerSecond'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USubmixEffectDelayPreset::SetInterpolationTime'::__l2::<lambda_1>,0,0> @ 14f0bd100

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectDelayPreset::SetInterpolationTime'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USubmixEffectDelayPreset::SetInterpolationTime_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubmixEffectDelayPreset::SetInterpolationTime'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USubmixEffectTapDelayPreset::SetInterpolationTime'::__l2::<lambda_1>,0,0> @ 14f0bd120

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectTapDelayPreset::SetInterpolationTime'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USubmixEffectTapDelayPreset::SetInterpolationTime_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubmixEffectTapDelayPreset::SetInterpolationTime'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetLFOFrequency'::__l2::<lambda_1>,0,0> @ 14f0bd140

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOFrequency'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetLFOFrequency_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetLFOFrequency'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetLFOFrequencyMod'::__l2::<lambda_1>,0,0> @ 14f0bd160

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOFrequencyMod'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetLFOFrequencyMod_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetLFOFrequencyMod'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetLFOGain'::__l2::<lambda_1>,0,0> @ 14f0bd180

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOGain'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetLFOGain_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetLFOGain'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetLFOGainMod'::__l2::<lambda_1>,0,0> @ 14f0bd1a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOGainMod'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetLFOGainMod_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetLFOGainMod'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetLFOMode'::__l2::<lambda_1>,0,0> @ 14f0bd1c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOMode'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetLFOMode_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetLFOMode'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetLFOPatch'::__l2::<lambda_1>,0,0> @ 14f0bd1e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOPatch'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetLFOPatch_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetLFOPatch'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetLFOType'::__l2::<lambda_1>,0,0> @ 14f0bd200

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOType'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetLFOType_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetLFOType'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetLowPassFilterFrequency'::__l2::<lambda_1>,0,0> @ 14f0bd220

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetLowPassFilterFrequency'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetLowPassFilterFrequency_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetLowPassFilterFrequency'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetLowPassFilterResonance'::__l2::<lambda_1>,0,0> @ 14f0bd240

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetLowPassFilterResonance'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetLowPassFilterResonance_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetLowPassFilterResonance'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetModEnvAttackTime'::__l2::<lambda_1>,0,0> @ 14f0bd260

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvAttackTime'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetModEnvAttackTime_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetModEnvAttackTime'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetModEnvBiasInvert'::__l2::<lambda_1>,0,0> @ 14f0bd280

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvBiasInvert'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetModEnvBiasInvert_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetModEnvBiasInvert'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetModEnvBiasPatch'::__l2::<lambda_1>,0,0> @ 14f0bd2a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvBiasPatch'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetModEnvBiasPatch_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetModEnvBiasPatch'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetModEnvDecayTime'::__l2::<lambda_1>,0,0> @ 14f0bd2c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvDecayTime'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetModEnvDecayTime_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetModEnvDecayTime'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetModEnvDepth'::__l2::<lambda_1>,0,0> @ 14f0bd2e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvDepth'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetModEnvDepth_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetModEnvDepth'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetModEnvInvert'::__l2::<lambda_1>,0,0> @ 14f0bd300

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvInvert'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetModEnvInvert_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetModEnvInvert'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetModEnvPatch'::__l2::<lambda_1>,0,0> @ 14f0bd320

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvPatch'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetModEnvPatch_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetModEnvPatch'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetModEnvReleaseTime'::__l2::<lambda_1>,0,0> @ 14f0bd340

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvReleaseTime'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetModEnvReleaseTime_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetModEnvReleaseTime'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetModEnvSustainGain'::__l2::<lambda_1>,0,0> @ 14f0bd360

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvSustainGain'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetModEnvSustainGain_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetModEnvSustainGain'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetOscCents'::__l2::<lambda_1>,0,0> @ 14f0bd380

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscCents'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetOscCents_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetOscCents'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetOscFrequencyMod'::__l2::<lambda_1>,0,0> @ 14f0bd3a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscFrequencyMod'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetOscFrequencyMod_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetOscFrequencyMod'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetOscGain'::__l2::<lambda_1>,0,0> @ 14f0bd3c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscGain'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetOscGain_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetOscGain'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetOscGainMod'::__l2::<lambda_1>,0,0> @ 14f0bd3e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscGainMod'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetOscGainMod_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetOscGainMod'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetOscOctave'::__l2::<lambda_1>,0,0> @ 14f0bd400

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscOctave'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetOscOctave_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetOscOctave'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetOscPulsewidth'::__l2::<lambda_1>,0,0> @ 14f0bd420

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscPulsewidth'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetOscPulsewidth_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetOscPulsewidth'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetOscSemitones'::__l2::<lambda_1>,0,0> @ 14f0bd440

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscSemitones'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetOscSemitones_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetOscSemitones'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetOscSync'::__l2::<lambda_1>,0,0> @ 14f0bd460

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscSync'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetOscSync_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetOscSync'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetOscType'::__l2::<lambda_1>,0,0> @ 14f0bd480

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscType'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetOscType_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetOscType'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetPan'::__l2::<lambda_1>,0,0> @ 14f0bd4a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetPan'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetPan_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetPan'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthSamplePlayer::SetPitch'::__l2::<lambda_1>,0,0> @ 14f0bd4c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthSamplePlayer::SetPitch'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USynthSamplePlayer::SetPitch_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthSamplePlayer::SetPitch'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetPitchBend'::__l2::<lambda_1>,0,0> @ 14f0bd4e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetPitchBend'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetPitchBend_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetPitchBend'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UGranularSynth::SetPlaybackSpeed'::__l2::<lambda_1>,0,0> @ 14f0bd500

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetPlaybackSpeed'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UGranularSynth::SetPlaybackSpeed_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::SetPlaybackSpeed'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UGranularSynth::SetPlayheadTime'::__l2::<lambda_1>,0,1> @ 14f0bd520

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetPlayheadTime'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UGranularSynth::SetPlayheadTime_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::SetPlayheadTime'::`2'::<lambda_1>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetPortamento'::__l2::<lambda_1>,0,0> @ 14f0bd540

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetPortamento'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetPortamento_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetPortamento'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPosLfoDepth'::__l2::<lambda_1>,0,0> @ 14f0bd560

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPosLfoDepth'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetPosLfoDepth_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPosLfoDepth'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPosLfoFrequency'::__l2::<lambda_1>,0,0> @ 14f0bd580

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPosLfoFrequency'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetPosLfoFrequency_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPosLfoFrequency'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPosLfoType'::__l2::<lambda_1>,0,0> @ 14f0bd5a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPosLfoType'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetPosLfoType_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPosLfoType'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeAttackTime'::__l2::<lambda_1>,0,0> @ 14f0bd5c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeAttackTime'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetPositionEnvelopeAttackTime_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeAttackTime'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeBiasDepth'::__l2::<lambda_1>,0,0> @ 14f0bd5e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeBiasDepth'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetPositionEnvelopeBiasDepth_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeBiasDepth'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeBiasInvert'::__l2::<lambda_1>,0,0> @ 14f0bd600

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeBiasInvert'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetPositionEnvelopeBiasInvert_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeBiasInvert'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeDecayTime'::__l2::<lambda_1>,0,0> @ 14f0bd620

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeDecayTime'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetPositionEnvelopeDecayTime_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeDecayTime'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeDepth'::__l2::<lambda_1>,0,0> @ 14f0bd640

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeDepth'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetPositionEnvelopeDepth_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeDepth'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeInvert'::__l2::<lambda_1>,0,0> @ 14f0bd660

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeInvert'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetPositionEnvelopeInvert_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeInvert'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeReleaseTime'::__l2::<lambda_1>,0,0> @ 14f0bd680

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeReleaseTime'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetPositionEnvelopeReleaseTime_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeReleaseTime'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeSustainGain'::__l2::<lambda_1>,0,0> @ 14f0bd6a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeSustainGain'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetPositionEnvelopeSustainGain_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeSustainGain'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetReleaseTime'::__l2::<lambda_1>,0,0> @ 14f0bd6c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetReleaseTime'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetReleaseTime_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetReleaseTime'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UGranularSynth::SetReleaseTimeMsec'::__l2::<lambda_1>,0,0> @ 14f0bd6e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetReleaseTimeMsec'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UGranularSynth::SetReleaseTimeMsec_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::SetReleaseTimeMsec'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSampleRate'::__l2::<lambda_1>,1,0> @ 14f0bd700

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSampleRate'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_USourceEffectBitCrusherPreset::SetSampleRate_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSampleRate'::`2'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSampleRateModulator'::__l2::<lambda_1>,0,0> @ 14f0bd720

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSampleRateModulator'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_USourceEffectBitCrusherPreset::SetSampleRateModulator_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSampleRateModulator'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSampleRateModulators'::__l2::<lambda_1>,0,0> @ 14f0bd740

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSampleRateModulators'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_USourceEffectBitCrusherPreset::SetSampleRateModulators_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSampleRateModulators'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UGranularSynth::SetScrubMode'::__l2::<lambda_1>,0,0> @ 14f0bd760

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetScrubMode'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UGranularSynth::SetScrubMode_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::SetScrubMode'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthSamplePlayer::SetScrubMode'::__l2::<lambda_1>,0,0> @ 14f0bd780

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthSamplePlayer::SetScrubMode'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USynthSamplePlayer::SetScrubMode_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthSamplePlayer::SetScrubMode'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthSamplePlayer::SetScrubTimeWidth'::__l2::<lambda_1>,0,0> @ 14f0bd7a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthSamplePlayer::SetScrubTimeWidth'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USynthSamplePlayer::SetScrubTimeWidth_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthSamplePlayer::SetScrubTimeWidth'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSettings'::__l2::<lambda_1>,1,0> @ 14f0bd7c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSettings'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_USourceEffectBitCrusherPreset::SetSettings_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSettings'::`2'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`USourceEffectChorusPreset::SetSettings'::__l2::<lambda_1>,1,1> @ 14f0bd7e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetSettings'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_USourceEffectChorusPreset::SetSettings_::__l2::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetSettings'::`2'::<lambda_1>,1,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`USubmixEffectMultibandCompressorPreset::SetSettings'::__l2::<lambda_1>,0,0> @ 14f0bd800

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectMultibandCompressorPreset::SetSettings'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USubmixEffectMultibandCompressorPreset::SetSettings_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubmixEffectMultibandCompressorPreset::SetSettings'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetSpread'::__l2::<lambda_1>,0,0> @ 14f0bd820

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetSpread'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetSpread_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetSpread'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USourceEffectChorusPreset::SetSpread'::__l2::<lambda_1>,1,0> @ 14f0bd840

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetSpread'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_USourceEffectChorusPreset::SetSpread_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetSpread'::`2'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`USourceEffectChorusPreset::SetSpreadModulator'::__l2::<lambda_1>,0,0> @ 14f0bd860

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetSpreadModulator'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USourceEffectChorusPreset::SetSpreadModulator_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetSpreadModulator'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USourceEffectChorusPreset::SetSpreadModulators'::__l2::<lambda_1>,0,0> @ 14f0bd880

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetSpreadModulators'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USourceEffectChorusPreset::SetSpreadModulators_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetSpreadModulators'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayFeedback'::__l2::<lambda_1>,0,0> @ 14f0bd8a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayFeedback'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetStereoDelayFeedback_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayFeedback'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayIsEnabled'::__l2::<lambda_1>,0,0> @ 14f0bd8c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayIsEnabled'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetStereoDelayIsEnabled_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayIsEnabled'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayMode'::__l2::<lambda_1>,0,0> @ 14f0bd8e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayMode'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetStereoDelayMode_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayMode'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayRatio'::__l2::<lambda_1>,0,0> @ 14f0bd900

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayRatio'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetStereoDelayRatio_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayRatio'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayTime'::__l2::<lambda_1>,0,0> @ 14f0bd920

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayTime'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetStereoDelayTime_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayTime'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayWetlevel'::__l2::<lambda_1>,0,0> @ 14f0bd940

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayWetlevel'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetStereoDelayWetlevel_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayWetlevel'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UGranularSynth::SetSustainGain'::__l2::<lambda_1>,0,0> @ 14f0bd960

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetSustainGain'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UGranularSynth::SetSustainGain_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::SetSustainGain'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetSustainGain'::__l2::<lambda_1>,0,0> @ 14f0bd980

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetSustainGain'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularSynthComponent::SetSustainGain_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetSustainGain'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetSustainPedalState'::__l2::<lambda_1>,0,0> @ 14f0bd9a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetSustainPedalState'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetSustainPedalState_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetSustainPedalState'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularSynthComponent::SetSynthPreset'::__l2::<lambda_1>,0,1> @ 14f0bd9c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetSynthPreset'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UModularSynthComponent::SetSynthPreset_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetSynthPreset'::`2'::<lambda_1>,0,1>::
        _vftable_;
  DestructItems<FEpicSynth1Patch,int>
            (*(FEpicSynth1Patch **)((longlong)this + 0xe0),*(int *)((longlong)this + 0xe8));
  if (*(void **)((longlong)this + 0xe0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xe0));
  }
  *(undefined ***)((longlong)this + 0x10) = &___7FTableRowBase__6B_;
  return;
}

// ~TFunction_OwnedObject<`FToneGenerator::SetVolume'::__l2::<lambda_1>,0,0> @ 14f0bda10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FToneGenerator::SetVolume'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FToneGenerator::SetVolume_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FToneGenerator::SetVolume'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetWaveTablePosition'::__l2::<lambda_1>,0,0> @ 14f0bda30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetWaveTablePosition'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetWaveTablePosition_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetWaveTablePosition'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USourceEffectChorusPreset::SetWet'::__l2::<lambda_1>,1,0> @ 14f0bda50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetWet'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_USourceEffectChorusPreset::SetWet_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetWet'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USourceEffectChorusPreset::SetWetModulator'::__l2::<lambda_1>,0,0> @ 14f0bda70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetWetModulator'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USourceEffectChorusPreset::SetWetModulator_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetWetModulator'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`USourceEffectChorusPreset::SetWetModulators'::__l2::<lambda_1>,0,0> @ 14f0bda90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetWetModulators'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USourceEffectChorusPreset::SetWetModulators_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetWetModulators'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FSourceEffectEnvFollowerNotifier::UpdateEnvFollowerInstance'::__l2::<lambda_1>,0,1> @ 14f0bdab0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSourceEffectEnvFollowerNotifier::UpdateEnvFollowerInstance'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_FSourceEffectEnvFollowerNotifier::UpdateEnvFollowerInstance_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__UpdateEnvFollowerInstance_FSourceEffectEnvFollowerNotifier__QEAAXIIM_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<``USynthSamplePlayer::LoadSoundWaveInternal'::__l5::<lambda_1>::operator()'::__l5::<lambda_1>,0,1> @ 14f0bdad0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``USynthSamplePlayer::LoadSoundWaveInternal'::__l5::<lambda_1>::operator()'::__l5::<lambda_1>,0,1>
::
~TFunction_OwnedObject<__USynthSamplePlayer::LoadSoundWaveInternal_::__l5::<lambda_1>::operator()_::__l5::<lambda_1>,0,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<``USynthSamplePlayer::LoadSoundWaveInternal'::`5'::<lambda_1>::operator()'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TFunction_OwnedObject<``UGranularSynth::SetSoundWave'::__l8::<lambda_1>::operator()'::__l5::<lambda_1>,0,1> @ 14f0bdaf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UGranularSynth::SetSoundWave'::__l8::<lambda_1>::operator()'::__l5::<lambda_1>,0,1>
::
~TFunction_OwnedObject<__UGranularSynth::SetSoundWave_::__l8::<lambda_1>::operator()_::__l5::<lambda_1>,0,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<``UGranularSynth::SetSoundWave'::`8'::<lambda_1>::operator()'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TFunction_OwnedObject<`USynthSamplePlayer::LoadSoundWaveInternal'::__l5::<lambda_1>,0,0> @ 14f0bdb10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthSamplePlayer::LoadSoundWaveInternal'::__l5::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USynthSamplePlayer::LoadSoundWaveInternal_::__l5::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthSamplePlayer::LoadSoundWaveInternal'::`5'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`USubmixEffectMultibandCompressorPreset::SetKey'::__l5::<lambda_1>,0,1> @ 14f0bdb30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectMultibandCompressorPreset::SetKey'::__l5::<lambda_1>,0,1>::
~TFunction_OwnedObject<_USubmixEffectMultibandCompressorPreset::SetKey_::__l5::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubmixEffectMultibandCompressorPreset::SetKey'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USubmixEffectTapDelayPreset::RemoveTap'::__l7::<lambda_1>,0,0> @ 14f0bdb50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectTapDelayPreset::RemoveTap'::__l7::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USubmixEffectTapDelayPreset::RemoveTap_::__l7::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubmixEffectTapDelayPreset::RemoveTap'::`7'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UGranularSynth::SetSoundWave'::__l8::<lambda_1>,0,0> @ 14f0bdb70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetSoundWave'::__l8::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UGranularSynth::SetSoundWave_::__l8::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::SetSoundWave'::`8'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USubmixEffectTapDelayPreset::SetTap'::__l9::<lambda_1>,0,1> @ 14f0bdb90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectTapDelayPreset::SetTap'::__l9::<lambda_1>,0,1>::
~TFunction_OwnedObject<_USubmixEffectTapDelayPreset::SetTap_::__l9::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubmixEffectTapDelayPreset::SetTap'::`9'::<lambda_1>,0,1>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetSynthPreset'::__l11::<lambda_1>,0,0> @ 14f0bdbb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetSynthPreset'::__l11::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USynthComponentMonoWaveTable::SetSynthPreset_::__l11::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetSynthPreset'::`11'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// operator() @ 14f0c3660

void __thiscall
``USynthSamplePlayer::LoadSoundWaveInternal'::__l5::<lambda_1>::operator()'::__l5::<lambda_1>::
operator()(void *this)

{
  uint uVar1;
  longlong lVar2;
  ForAnyElementType *pFVar3;
  
  lVar2 = *(longlong *)this;
  uVar1 = *(uint *)((longlong)this + 0x18);
  pFVar3 = (ForAnyElementType *)(lVar2 + 0x998);
  *(uint *)(lVar2 + 0x9a8) = uVar1;
  *(undefined4 *)(lVar2 + 0x9ac) = *(undefined4 *)((longlong)this + 0x1c);
  *(undefined4 *)(lVar2 + 0x9b0) = *(undefined4 *)((longlong)this + 0x20);
  *(undefined4 *)(lVar2 + 0x9b4) = *(undefined4 *)((longlong)this + 0x24);
  *(undefined4 *)(lVar2 + 0x9b8) = *(undefined4 *)((longlong)this + 0x28);
  if (-1 < (int)uVar1) {
    *(int *)(lVar2 + 0x9a0) = 0;
    if (*(int *)(lVar2 + 0x9a4) < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,pFVar3,0,(int *)(lVar2 + 0x9a4));
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,*(int *)(lVar2 + 0x9a8),pFVar3,(int *)(lVar2 + 0x9a0),(int *)(lVar2 + 0x9a4));
    memcpy(pFVar3->Data,*(void **)((longlong)this + 8),(longlong)*(int *)(lVar2 + 0x9a8) * 2);
    Audio::FSampleBufferReader::ClearBuffer((FSampleBufferReader *)(*(longlong *)this + 0x8f8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// `vector_deleting_destructor'`adjustor{40}' @ 14f0c3d18

/* [thunk]:public: virtual void * __ptr64 __cdecl UEnvelopeFollowerListener::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UEnvelopeFollowerListener::_vector_deleting_destructor__adjustor_40__
          (UEnvelopeFollowerListener *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UEnvelopeFollowerListener *)&this[-1].OnEnvelopeFollowerUpdate,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14f0c3d28

/* [thunk]:private: virtual void * __ptr64 __cdecl UGranularSynth::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGranularSynth::_vector_deleting_destructor__adjustor_40__(UGranularSynth *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGranularSynth *)&this[-1].SoundWaveLoader._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14f0c3d38

/* [thunk]:public: virtual void * __ptr64 __cdecl UModularSynthComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UModularSynthComponent::_vector_deleting_destructor__adjustor_40__
          (UModularSynthComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UModularSynthComponent *)&this[-1].EpicSynth1.Chorus.MaxDelayMsec,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14f0c3d48

/* [thunk]:public: virtual void * __ptr64 __cdecl USynth2DSlider::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
USynth2DSlider::_vector_deleting_destructor__adjustor_40__(USynth2DSlider *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((USynth2DSlider *)&this[-1].OnValueChangedY,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14f0c3d58

/* [thunk]:private: virtual void * __ptr64 __cdecl USynthComponentMonoWaveTable::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
USynthComponentMonoWaveTable::_vector_deleting_destructor__adjustor_40__
          (USynthComponentMonoWaveTable *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((USynthComponentMonoWaveTable *)&this[-1].Synth.NoteStack,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14f0c3d68

/* [thunk]:private: virtual void * __ptr64 __cdecl USynthComponentToneGenerator::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
USynthComponentToneGenerator::_vector_deleting_destructor__adjustor_40__
          (USynthComponentToneGenerator *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((USynthComponentToneGenerator *)
                      &this[-1].DistanceAttenuationSettings.AttenuationCurve.Points,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14f0c3d78

/* [thunk]:public: virtual void * __ptr64 __cdecl USynthKnob::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
USynthKnob::_vector_deleting_destructor__adjustor_40__(USynthKnob *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((USynthKnob *)&this[-1].OnValueChanged,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14f0c3d88

/* [thunk]:private: virtual void * __ptr64 __cdecl USynthSamplePlayer::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
USynthSamplePlayer::_vector_deleting_destructor__adjustor_40__
          (USynthSamplePlayer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((USynthSamplePlayer *)&this[-1].SoundWaveLoader.LoadingSoundWaves.ArrayNum,
                      param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14f0c3da0

void * __thiscall
FAutoDeleteAsyncTask<AudioConvReverbIntrinsics::FCreateConvolutionReverbTask>::
_scalar_deleting_destructor_
          (FAutoDeleteAsyncTask<AudioConvReverbIntrinsics::FCreateConvolutionReverbTask> *this,
          uint param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  undefined8 *puVar7;
  
  pFVar5 = (this->Task).InitData.GainMatrix.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->Task).InitData.Samples.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pTVar6 = (this->Task).EffectPtr.WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  this->_padding_ = (longlong)&___7IQueuedWork__6B_;
  puVar7 = (undefined8 *)this->_padding_;
  if (puVar7 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar7 + 1);
    LOCK();
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (piVar2 != (int *)0x0)) {
      (**(code **)*puVar7)(puVar7,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c3e50

void * __thiscall
TBaseRawMethodDelegateInstance<0,FSubmixEffectMultibandCompressor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FSubmixEffectMultibandCompressor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c3e80

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,USynth2DSlider,void___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,USynth2DSlider,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c3eb0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,USynth2DSlider,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,USynth2DSlider,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c3ee0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,USynthKnob,void___cdecl(float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,USynthKnob,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c3f10

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,USynthKnob,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,USynthKnob,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c3f40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FSubmixEffectMultibandCompressor_&),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(FSubmixEffectMultibandCompressor_&),0,0> *this,
          uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFSubmixEffectMultibandCompressor___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c3f80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundEffectPreset::EffectCommand<FSubmixEffectDelay>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____EffectCommand_VFSubmixEffectDelay___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectDelay___Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c3fe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundEffectPreset::EffectCommand<FSubmixEffectFilter>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____EffectCommand_VFSubmixEffectFilter___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectFilter___Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4040

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundEffectPreset::EffectCommand<FSubmixEffectMultibandCompressor>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____EffectCommand_VFSubmixEffectMultibandCompressor___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectMultibandCompressor___Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c40a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundEffectPreset::EffectCommand<FSubmixEffectTapDelay>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____EffectCommand_VFSubmixEffectTapDelay___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectTapDelay___Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4100

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``USoundEffectPreset::EffectCommand<FSubmixEffectDelay>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1____EffectCommand_VFSubmixEffectDelay___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectDelay___Z___Z_QEBA_AEAVFSubmixEffectDelay___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``USoundEffectPreset::EffectCommand<FSubmixEffectFilter>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1____EffectCommand_VFSubmixEffectFilter___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectFilter___Z___Z_QEBA_AEAVFSubmixEffectFilter___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c41c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``USoundEffectPreset::EffectCommand<FSubmixEffectMultibandCompressor>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1____EffectCommand_VFSubmixEffectMultibandCompressor___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectMultibandCompressor___Z___Z_QEBA_AEAVFSubmixEffectMultibandCompressor___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4220

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``USoundEffectPreset::EffectCommand<FSubmixEffectTapDelay>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1____EffectCommand_VFSubmixEffectTapDelay___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectTapDelay___Z___Z_QEBA_AEAVFSubmixEffectTapDelay___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4280

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSourceEffectEnvFollowerNotifier::AddEnvFollowerInstance'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__AddEnvFollowerInstance_FSourceEffectEnvFollowerNotifier__QEAAXII_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c42c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectTapDelayPreset::AddTap'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubmixEffectTapDelayPreset::AddTap'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4300

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::Init'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::Init'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4340

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::InitSynth'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::InitSynth'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4380

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UGranularSynth::NoteOff'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::NoteOff'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c43c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::NoteOff'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::NoteOff'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4400

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::NoteOff'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::NoteOff'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4440

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UGranularSynth::NoteOn'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::NoteOn'::`2'::<lambda_1>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4480

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::NoteOn'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::NoteOn'::`2'::<lambda_1>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c44c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::NoteOn'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::NoteOn'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4500

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::RefreshWaveTable'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::RefreshWaveTable'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSourceEffectEnvFollowerNotifier::RemoveEnvFollowerInstance'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__RemoveEnvFollowerInstance_FSourceEffectEnvFollowerNotifier__QEAAXII_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthSamplePlayer::SeekToTime'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthSamplePlayer::SeekToTime'::`2'::<lambda_1>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c45d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeAttackTime'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeAttackTime'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeBiasDepth'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeBiasDepth'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4650

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeBiasInvert'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeBiasInvert'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeDecayTime'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeDecayTime'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c46d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeDepth'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeDepth'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeInvert'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeInvert'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4750

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeReleaseTime'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeReleaseTime'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeSustainGain'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeSustainGain'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c47d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetAttackTime'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::SetAttackTime'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4810

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetAttackTime'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetAttackTime'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4850

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetBitModulator'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetBitModulator'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4890

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetBitModulators'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetBitModulators'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c48d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetBits'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetBits'::`2'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4910

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetChorusDepth'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetChorusDepth'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4950

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetChorusEnabled'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetChorusEnabled'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4990

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetChorusFeedback'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetChorusFeedback'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c49d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetChorusFrequency'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetChorusFrequency'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4a10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetDecayTime'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::SetDecayTime'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4a50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetDecayTime'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetDecayTime'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4a90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectDelayPreset::SetDelay'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubmixEffectDelayPreset::SetDelay'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4ad0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetDepth'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetDepth'::`2'::<lambda_1>,1,0>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4b10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetDepthModulator'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetDepthModulator'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4b50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetDepthModulators'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetDepthModulators'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4b90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FToneGenerator::SetDistance'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FToneGenerator::SetDistance'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4bd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetDry'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetDry'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4c10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetDryModulator'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetDryModulator'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4c50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetDryModulators'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetDryModulators'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4c90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetEnableLegato'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetEnableLegato'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4cd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetEnablePolyphony'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetEnablePolyphony'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4d10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetEnableRetrigger'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetEnableRetrigger'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4d50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetEnableUnison'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetEnableUnison'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4d90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetFeedback'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetFeedback'::`2'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4dd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetFeedbackModulator'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetFeedbackModulator'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4e10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetFeedbackModulators'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetFeedbackModulators'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4e50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetFilterAlgorithm'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetFilterAlgorithm'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4e90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterAlgorithm'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterAlgorithm'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4ed0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterCutoffFrequency'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterCutoffFrequency'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4f10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterCutoffFrequencyMod'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterCutoffFrequencyMod'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4f50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeAttackTime'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeAttackTime'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4f90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeBiasDepth'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeBiasDepth'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c4fd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeBiasInvert'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeBiasInvert'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5010

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeDepth'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeDepth'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5050

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeInvert'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeInvert'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeReleaseTime'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeReleaseTime'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c50d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeSustainGain'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeSustainGain'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5110

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopenDecayTime'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopenDecayTime'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5150

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetFilterFrequency'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetFilterFrequency'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5190

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetFilterFrequencyMod'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetFilterFrequencyMod'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c51d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetFilterQ'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetFilterQ'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5210

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterQ'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterQ'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5250

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetFilterQMod'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetFilterQMod'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5290

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterQMod'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterQMod'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c52d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetFilterType'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetFilterType'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5310

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterType'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterType'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5350

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FToneGenerator::SetFrequency'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FToneGenerator::SetFrequency'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5390

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetFrequency'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetFrequency'::`2'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c53d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFrequency'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFrequency'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5410

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetFrequencyModulator'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetFrequencyModulator'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5450

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetFrequencyModulators'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetFrequencyModulators'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5490

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFrequencyPitchBend'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFrequencyPitchBend'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c54d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetGainDb'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetGainDb'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainDuration'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::SetGrainDuration'::`2'::<lambda_1>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainEnvelopeType'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::SetGrainEnvelopeType'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainPan'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::SetGrainPan'::`2'::<lambda_1>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c55d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainPitch'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::SetGrainPitch'::`2'::<lambda_1>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainProbability'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::SetGrainProbability'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5650

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainVolume'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::SetGrainVolume'::`2'::<lambda_1>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainsPerSecond'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::SetGrainsPerSecond'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c56d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectDelayPreset::SetInterpolationTime'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubmixEffectDelayPreset::SetInterpolationTime'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectTapDelayPreset::SetInterpolationTime'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubmixEffectTapDelayPreset::SetInterpolationTime'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5750

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOFrequency'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetLFOFrequency'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOFrequencyMod'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetLFOFrequencyMod'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c57d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOGain'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetLFOGain'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5810

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOGainMod'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetLFOGainMod'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5850

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOMode'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetLFOMode'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5890

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOPatch'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetLFOPatch'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c58d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOType'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetLFOType'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5910

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetLowPassFilterFrequency'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetLowPassFilterFrequency'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5950

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetLowPassFilterResonance'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetLowPassFilterResonance'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5990

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvAttackTime'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetModEnvAttackTime'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c59d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvBiasInvert'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetModEnvBiasInvert'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5a10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvBiasPatch'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetModEnvBiasPatch'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5a50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvDecayTime'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetModEnvDecayTime'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5a90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvDepth'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetModEnvDepth'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5ad0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvInvert'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetModEnvInvert'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5b10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvPatch'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetModEnvPatch'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5b50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvReleaseTime'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetModEnvReleaseTime'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5b90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvSustainGain'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetModEnvSustainGain'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5bd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscCents'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetOscCents'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5c10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscFrequencyMod'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetOscFrequencyMod'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5c50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscGain'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetOscGain'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5c90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscGainMod'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetOscGainMod'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5cd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscOctave'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetOscOctave'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5d10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscPulsewidth'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetOscPulsewidth'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5d50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscSemitones'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetOscSemitones'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5d90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscSync'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetOscSync'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5dd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscType'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetOscType'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5e10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetPan'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetPan'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5e50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthSamplePlayer::SetPitch'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthSamplePlayer::SetPitch'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5e90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetPitchBend'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetPitchBend'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5ed0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetPlaybackSpeed'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::SetPlaybackSpeed'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5f10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetPlayheadTime'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::SetPlayheadTime'::`2'::<lambda_1>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5f50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetPortamento'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetPortamento'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5f90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPosLfoDepth'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPosLfoDepth'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c5fd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPosLfoFrequency'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPosLfoFrequency'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6010

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPosLfoType'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPosLfoType'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6050

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeAttackTime'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeAttackTime'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeBiasDepth'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeBiasDepth'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c60d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeBiasInvert'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeBiasInvert'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6110

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeDecayTime'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeDecayTime'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6150

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeDepth'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeDepth'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6190

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeInvert'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeInvert'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c61d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeReleaseTime'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeReleaseTime'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6210

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeSustainGain'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeSustainGain'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6250

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetReleaseTime'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetReleaseTime'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6290

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetReleaseTimeMsec'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::SetReleaseTimeMsec'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c62d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSampleRate'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSampleRate'::`2'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6310

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSampleRateModulator'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSampleRateModulator'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6350

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSampleRateModulators'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSampleRateModulators'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6390

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetScrubMode'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::SetScrubMode'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c63d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthSamplePlayer::SetScrubMode'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthSamplePlayer::SetScrubMode'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6410

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthSamplePlayer::SetScrubTimeWidth'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthSamplePlayer::SetScrubTimeWidth'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6450

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSettings'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSettings'::`2'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6490

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetSettings'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetSettings'::`2'::<lambda_1>,1,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c64d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectMultibandCompressorPreset::SetSettings'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubmixEffectMultibandCompressorPreset::SetSettings'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetSpread'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetSpread'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetSpread'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetSpread'::`2'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetSpreadModulator'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetSpreadModulator'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c65d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetSpreadModulators'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetSpreadModulators'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayFeedback'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayFeedback'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6650

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayIsEnabled'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayIsEnabled'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayMode'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayMode'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c66d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayRatio'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayRatio'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayTime'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayTime'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6750

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayWetlevel'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayWetlevel'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetSustainGain'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::SetSustainGain'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c67d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetSustainGain'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetSustainGain'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6810

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetSustainPedalState'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetSustainPedalState'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6850

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetSynthPreset'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularSynthComponent::SetSynthPreset'::`2'::<lambda_1>,0,1>::
        _vftable_;
  DestructItems<FEpicSynth1Patch,int>
            (*(FEpicSynth1Patch **)((longlong)this + 0xe0),*(int *)((longlong)this + 0xe8));
  if (*(void **)((longlong)this + 0xe0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xe0));
  }
  *(undefined ***)((longlong)this + 0x10) = &___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c68c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FToneGenerator::SetVolume'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FToneGenerator::SetVolume'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6900

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetWaveTablePosition'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetWaveTablePosition'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6940

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetWet'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetWet'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6980

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetWetModulator'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetWetModulator'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c69c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetWetModulators'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetWetModulators'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6a00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSourceEffectEnvFollowerNotifier::UpdateEnvFollowerInstance'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__UpdateEnvFollowerInstance_FSourceEffectEnvFollowerNotifier__QEAAXIIM_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6a40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``USynthSamplePlayer::LoadSoundWaveInternal'::__l5::<lambda_1>::operator()'::__l5::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``USynthSamplePlayer::LoadSoundWaveInternal'::`5'::<lambda_1>::operator()'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6a90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UGranularSynth::SetSoundWave'::__l8::<lambda_1>::operator()'::__l5::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UGranularSynth::SetSoundWave'::`8'::<lambda_1>::operator()'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6ae0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthSamplePlayer::LoadSoundWaveInternal'::__l5::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthSamplePlayer::LoadSoundWaveInternal'::`5'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6b20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectMultibandCompressorPreset::SetKey'::__l5::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubmixEffectMultibandCompressorPreset::SetKey'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6b60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectTapDelayPreset::RemoveTap'::__l7::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubmixEffectTapDelayPreset::RemoveTap'::`7'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6ba0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetSoundWave'::__l8::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGranularSynth::SetSoundWave'::`8'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6be0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectTapDelayPreset::SetTap'::__l9::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubmixEffectTapDelayPreset::SetTap'::`9'::<lambda_1>,0,1>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6c20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetSynthPreset'::__l11::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetSynthPreset'::`11'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6c60

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSynth2DSliderStyle,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FSynth2DSliderStyle,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6ca0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSynthKnobStyle,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FSynthKnobStyle,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6ce0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Audio::FEffectConvolutionReverb,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Audio::FEffectConvolutionReverb,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6d20

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSynth2DSlider,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SSynth2DSlider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6d60

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSynthKnob,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SSynthKnob,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x448);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6da0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Audio::FPatch,SharedPointerInternals::DefaultDeleter<Audio::FPatch>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<Audio::FPatch,SharedPointerInternals::DefaultDeleter<Audio::FPatch>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6de0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSourceEffectEnvFollowerNotifier,SharedPointerInternals::DefaultDeleter<FSourceEffectEnvFollowerNotifier>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSourceEffectEnvFollowerNotifier,SharedPointerInternals::DefaultDeleter<FSourceEffectEnvFollowerNotifier>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6e20

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FToneGenerator,SharedPointerInternals::DefaultDeleter<FToneGenerator>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FToneGenerator,SharedPointerInternals::DefaultDeleter<FToneGenerator>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6e60

void * __thiscall Audio::FEpicSynth1::_scalar_deleting_destructor_(FEpicSynth1 *this,uint param_1)

{
  ~FEpicSynth1(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x6f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6ea0

void * __thiscall
FModularSynthPreset::_scalar_deleting_destructor_(FModularSynthPreset *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FEpicSynth1Patch,int>
            ((FEpicSynth1Patch *)(this->Patches).AllocatorInstance.Data,(this->Patches).ArrayNum);
  pFVar1 = (this->Patches).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6f10

void * __thiscall
Audio::FSimpleRouter::_scalar_deleting_destructor_(FSimpleRouter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelPairs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutputChannelTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InputChannelTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c6f70

void * __thiscall
Audio::FSimpleUpmixer::_scalar_deleting_destructor_(FSimpleUpmixer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
            ((TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_> *)
             (this->PairedFlippedRearChannelIndices).Pairs.AllocatorInstance.Data,
             (this->PairedFlippedRearChannelIndices).Pairs.ArrayNum);
  pFVar1 = (this->PairedFlippedRearChannelIndices).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
            ((TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_> *)
             (this->PairedRearChannelIndices).Pairs.AllocatorInstance.Data,
             (this->PairedRearChannelIndices).Pairs.ArrayNum);
  pFVar1 = (this->PairedRearChannelIndices).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FrontChannelIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutputChannelTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InputChannelTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FBaseChannelFormatConverter::~FBaseChannelFormatConverter((FBaseChannelFormatConverter *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c7010

void * __thiscall
FSoundEffectSource::_scalar_deleting_destructor_(FSoundEffectSource *this,uint param_1)

{
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c7050

void * __thiscall
FSourceEffectBitCrusher::_scalar_deleting_destructor_(FSourceEffectBitCrusher *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BitMod).DestinationData.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SampleRateMod).DestinationData.SharedReferenceCount.ReferenceController);
  (this->SettingsCopy).BitModulation.Modulators.HashSize = 0;
  FVar1 = (this->SettingsCopy).BitModulation.Modulators.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SettingsCopy).BitModulation.Modulators.Elements);
  (this->SettingsCopy).SampleRateModulation.Modulators.HashSize = 0;
  FVar1 = (this->SettingsCopy).SampleRateModulation.Modulators.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SettingsCopy).SampleRateModulation.Modulators.Elements);
  Audio::FBitCrusher::~FBitCrusher(&this->BitCrusher);
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c7110

void * __thiscall
FSourceEffectChorus::_scalar_deleting_destructor_(FSourceEffectChorus *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SpreadMod).DestinationData.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DryMod).DestinationData.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WetMod).DestinationData.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->FrequencyMod).DestinationData.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->FeedbackMod).DestinationData.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DepthMod).DestinationData.SharedReferenceCount.ReferenceController);
  FSourceEffectChorusSettings::~FSourceEffectChorusSettings(&this->SettingsCopy);
  Audio::FChorus::~FChorus(&this->Chorus);
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x900);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c71b0

void * __thiscall
FSourceEffectConvolutionReverb::_scalar_deleting_destructor_
          (FSourceEffectConvolutionReverb *this,uint param_1)

{
  *(undefined ***)this = &___7FSourceEffectConvolutionReverb__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Reverb).SharedReferenceCount.ReferenceController);
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c7210

void * __thiscall
FSourceEffectDynamicsProcessor::_scalar_deleting_destructor_
          (FSourceEffectDynamicsProcessor *this,uint param_1)

{
  Audio::FDynamicsProcessor::~FDynamicsProcessor(&this->DynamicsProcessor);
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c7260

void * __thiscall FSourceEffectEQ::_scalar_deleting_destructor_(FSourceEffectEQ *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<Audio::FBiquadFilter,int>
            ((FBiquadFilter *)(this->Filters).AllocatorInstance.Data,(this->Filters).ArrayNum);
  pFVar1 = (this->Filters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c72d0

void * __thiscall
FSourceEffectEnvFollowerNotifier::_scalar_deleting_destructor_
          (FSourceEffectEnvFollowerNotifier *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->EnvelopeFollowerData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EnvelopeFollowerData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EnvelopeFollowerData);
  TQueue<TFunction<void___cdecl(void)>,1>::~TQueue<TFunction<void___cdecl(void)>,1>
            (&this->CommandQueue);
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c7340

void * __thiscall
FSourceEffectEnvelopeFollower::_scalar_deleting_destructor_
          (FSourceEffectEnvelopeFollower *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  code *local_38 [2];
  undefined **local_28;
  FSourceEffectEnvFollowerNotifier *local_20;
  uint local_18;
  uint local_14;
  undefined8 local_10;
  
  this->_padding_ = (longlong)&___7FSourceEffectEnvelopeFollower__6B_;
  if ((SourceEffectEnvFollowerNotifier.Object == (FSourceEffectEnvFollowerNotifier *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  local_10 = 0;
  local_28 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__RemoveEnvFollowerInstance_FSourceEffectEnvFollowerNotifier__QEAAXII_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_18 = this->OwningPresetUniqueId;
  local_14 = this->InstanceId;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FSourceEffectEnvFollowerNotifier::RemoveEnvFollowerInstance'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = SourceEffectEnvFollowerNotifier.Object;
  FSourceEffectEnvFollowerNotifier::PushToCommandQueue
            (SourceEffectEnvFollowerNotifier.Object,(TFunction<void___cdecl(void)> *)local_38);
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c7410

void * __thiscall
FSourceEffectFilter::_scalar_deleting_destructor_(FSourceEffectFilter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSourceEffectFilter__6B_;
  DestructItems<FSourceEffectFilter::FAudioBusModulationData,int>
            ((FAudioBusModulationData *)(this->ModData).AllocatorInstance.Data,
             (this->ModData).ArrayNum);
  pFVar1 = (this->ModData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScratchEnvFollowerBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScratchModBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  Audio::FOnePoleFilter::~FOnePoleFilter(&this->OnePoleFilter);
  Audio::FLadderFilter::~FLadderFilter(&this->LadderFilter);
  Audio::FStateVariableFilter::~FStateVariableFilter(&this->StateVariableFilter);
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x550);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c74d0

void * __thiscall
FSourceEffectFoldbackDistortion::_scalar_deleting_destructor_
          (FSourceEffectFoldbackDistortion *this,uint param_1)

{
  Audio::FFoldbackDistortion::~FFoldbackDistortion(&this->FoldbackDistortion);
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c7520

void * __thiscall
FSourceEffectMidSideSpreader::_scalar_deleting_destructor_
          (FSourceEffectMidSideSpreader *this,uint param_1)

{
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c7560

void * __thiscall
FSourceEffectMotionFilter::_scalar_deleting_destructor_
          (FSourceEffectMotionFilter *this,uint param_1)

{
  ~FSourceEffectMotionFilter(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c75a0

void * __thiscall
FSourceEffectPanner::_scalar_deleting_destructor_(FSourceEffectPanner *this,uint param_1)

{
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c75e0

void * __thiscall
FSourceEffectPhaser::_scalar_deleting_destructor_(FSourceEffectPhaser *this,uint param_1)

{
  Audio::FPhaser::~FPhaser(&this->Phaser);
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c7630

void * __thiscall
FSourceEffectRingModulation::_scalar_deleting_destructor_
          (FSourceEffectRingModulation *this,uint param_1)

{
  Audio::FRingModulation::~FRingModulation(&this->RingModulation);
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x210);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c7680

void * __thiscall
FSourceEffectSimpleDelay::_scalar_deleting_destructor_(FSourceEffectSimpleDelay *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->FeedbackSamples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Audio::FDelay,int>
            ((FDelay *)(this->Delays).AllocatorInstance.Data,(this->Delays).ArrayNum);
  pFVar1 = (this->Delays).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c7700

void * __thiscall
FSourceEffectStereoDelay::_scalar_deleting_destructor_(FSourceEffectStereoDelay *this,uint param_1)

{
  Audio::FDelayStereo::~FDelayStereo(&this->DelayStereo);
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c7750

void * __thiscall
FSourceEffectWaveShaper::_scalar_deleting_destructor_(FSourceEffectWaveShaper *this,uint param_1)

{
  Audio::FWaveShaper::~FWaveShaper(&this->WaveShaper);
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c77a0

void * __thiscall
FSubmixEffectConvolutionReverb::_scalar_deleting_destructor_
          (FSubmixEffectConvolutionReverb *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FSubmixEffectConvolutionReverb__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Reverb).SharedReferenceCount.ReferenceController);
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c7800

void * __thiscall
FSubmixEffectDelay::_scalar_deleting_destructor_(FSubmixEffectDelay *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSubmixEffectDelay__6B_;
  DestructItems<Audio::FDelay,int>
            ((FDelay *)(this->DelayLines).AllocatorInstance.Data,(this->DelayLines).ArrayNum);
  pFVar1 = (this->DelayLines).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->Params).CritSect);
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c7880

void * __thiscall
FSubmixEffectFilter::_scalar_deleting_destructor_(FSubmixEffectFilter *this,uint param_1)

{
  Audio::FLadderFilter::~FLadderFilter(&this->LadderFilter);
  Audio::FStateVariableFilter::~FStateVariableFilter(&this->StateVariableFilter);
  Audio::FOnePoleFilter::~FOnePoleFilter(&this->OnePoleFilter);
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x510);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c78f0

void * __thiscall
FSubmixEffectFlexiverb::_scalar_deleting_destructor_(FSubmixEffectFlexiverb *this,uint param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->Params).CritSect);
  Audio::FFlexiverb::~FFlexiverb(&this->Flexiverb);
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c7950

void * __thiscall
FSubmixEffectMultibandCompressor::_scalar_deleting_destructor_
          (FSubmixEffectMultibandCompressor *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7FSubmixEffectMultibandCompressor__6B_;
  ResetKey(this);
  TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
              *)&FAudioDeviceManagerDelegates::OnAudioDeviceCreated,
             (FDelegateHandle)(this->DeviceCreatedHandle).ID);
  TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
              *)&FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed,
             (FDelegateHandle)(this->DeviceDestroyedHandle).ID);
  pFVar1 = (this->PrevCrossovers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MultiBandBuffer).Buffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  Audio::FLinkwitzRileyBandSplitter::~FLinkwitzRileyBandSplitter(&this->BandSplitter);
  pFVar1 = (this->KeyMultiBandBuffer).Buffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  Audio::FLinkwitzRileyBandSplitter::~FLinkwitzRileyBandSplitter(&this->KeyBandSplitter);
  DestructItems<Audio::FDynamicsProcessor,int>
            ((FDynamicsProcessor *)(this->DynamicsProcessors).AllocatorInstance.Data,
             (this->DynamicsProcessors).ArrayNum);
  pFVar1 = (this->DynamicsProcessors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScratchBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->KeySource).Patch.SharedReferenceCount.ReferenceController);
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->KeySource).MutateSourceCritSection);
  pFVar1 = (this->AudioExternal).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x260);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c7a70

void * __thiscall
FSubmixEffectStereoDelay::_scalar_deleting_destructor_(FSubmixEffectStereoDelay *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7FSubmixEffectStereoDelay__6B_;
  Audio::FDelayStereo::~FDelayStereo(&this->DelayStereo);
  pFVar1 = (this->ScratchStereoBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c7ae0

void * __thiscall
FSubmixEffectStereoToQuad::_scalar_deleting_destructor_
          (FSubmixEffectStereoToQuad *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7FSubmixEffectStereoToQuad__6B_;
  pFVar1 = (this->ScratchStereoBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c7b40

void * __thiscall
FSubmixEffectTapDelay::_scalar_deleting_destructor_(FSubmixEffectTapDelay *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  Audio::FDelay::~FDelay(&this->DelayLine);
  pFVar1 = (this->CurrentTaps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TargetTaps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->Params).CritSect);
  pFVar1 = (this->Params).CurrentParams.Taps.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c7bd0

void * __thiscall
FSynth2DSliderStyle::_scalar_deleting_destructor_(FSynth2DSliderStyle *this,uint param_1)

{
  ~FSynth2DSliderStyle(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x390);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c7c10

void * __thiscall FSynthKnobStyle::_scalar_deleting_destructor_(FSynthKnobStyle *this,uint param_1)

{
  ~FSynthKnobStyle(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c7c50

void * __thiscall
FSynthSlateStyle::_scalar_deleting_destructor_(FSynthSlateStyle *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FSynthSlateStyle__6B_;
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c7ca0

void * __thiscall FToneGenerator::_scalar_deleting_destructor_(FToneGenerator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DistanceAttenuationSettings).AttenuationCurve.Points.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Buffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  Audio::FSineOsc::~FSineOsc(&this->SineOsc);
  ISoundGenerator::~ISoundGenerator((ISoundGenerator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c7d10

void * __thiscall
ISynthSlateResources::_scalar_deleting_destructor_(ISynthSlateResources *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ISynthSlateResources__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c7d50

void * __thiscall SSynth2DSlider::_scalar_deleting_destructor_(SSynth2DSlider *this,uint param_1)

{
  ~SSynth2DSlider(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c7db0

void * __thiscall SSynthKnob::_scalar_deleting_destructor_(SSynthKnob *this,uint param_1)

{
  ~SSynthKnob(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x438);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c7e10

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall SSynthTooltip::_scalar_deleting_destructor_(SSynthTooltip *this,uint param_1)

{
  TSharedPtr<SWindow,1> *pTVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->WindowContainer;
  this->_padding_ = (longlong)&___7SSynthTooltip__6B_;
  if (pTVar1->Object != (SWindow *)0x0) {
    SWindow::RequestDestroyWindow(pTVar1->Object);
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<SWindow,1> *)&local_18) {
    pTVar1->Object = (SWindow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->WindowContainer).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TooltipText).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WindowContainer).SharedReferenceCount.ReferenceController);
  SOverlay::~SOverlay((SOverlay *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x280);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c7ee0

void * __thiscall
UAudioImpulseResponse::_scalar_deleting_destructor_(UAudioImpulseResponse *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAudioImpulseResponse__6B_;
  pFVar1 = (this->IRData_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ImpulseResponse).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c7f60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UEnvelopeFollowerListener::_scalar_deleting_destructor_
          (UEnvelopeFollowerListener *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  if (this->EnvelopeFollowerNotifier != (IEnvelopeFollowerNotifier *)0x0) {
    if (this->PresetUniqueId == 0xffffffff) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PresetUniqueId != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Classes\\SourceEffects\\SourceEffectEnvelopeFollower.h"
                         ,0x67,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pvVar3 = (void *)(*pcVar1)();
        return pvVar3;
      }
    }
    (**(code **)*this->EnvelopeFollowerNotifier)
              (this->EnvelopeFollowerNotifier,this->PresetUniqueId,this);
  }
  pvVar3 = *(void **)&(this->OnEnvelopeFollowerUpdate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEnvelopeFollowerUpdate);
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c8060

void * __thiscall UGranularSynth::_scalar_deleting_destructor_(UGranularSynth *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  DestructItems<Audio::FSoundWavePCMLoader::FLoadingSoundWaveInfo,int>
            ((FLoadingSoundWaveInfo *)
             (this->SoundWaveLoader).LoadingSoundWaves.AllocatorInstance.Data,
             (this->SoundWaveLoader).LoadingSoundWaves.ArrayNum);
  pFVar1 = (this->SoundWaveLoader).LoadingSoundWaves.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->SoundWaveLoader)._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->SoundWaveLoader);
  Audio::FGranularSynth::~FGranularSynth(&this->GranularSynth);
  USynthComponent::~USynthComponent((USynthComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xcb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c8130

void * __thiscall
UModularSynthComponent::_scalar_deleting_destructor_(UModularSynthComponent *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  Audio::FEpicSynth1::~FEpicSynth1(&this->EpicSynth1);
  USynthComponent::~USynthComponent((USynthComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xfc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c81c0

void * __thiscall
UModularSynthLibrary::_scalar_deleting_destructor_(UModularSynthLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UModularSynthLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c8220

void * __thiscall
UModularSynthPresetBank::_scalar_deleting_destructor_(UModularSynthPresetBank *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UModularSynthPresetBank__6B_;
  DestructItems<FModularSynthPresetBankEntry,int>
            ((FModularSynthPresetBankEntry *)(this->Presets).AllocatorInstance.Data,
             (this->Presets).ArrayNum);
  pFVar1 = (this->Presets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c82a0

void * __thiscall
UMonoWaveTableSynthPreset::_scalar_deleting_destructor_
          (UMonoWaveTableSynthPreset *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMonoWaveTableSynthPreset__6B_;
  DestructItems<FRuntimeFloatCurve,int>
            ((FRuntimeFloatCurve *)(this->CachedWaveTable).AllocatorInstance.Data,
             (this->CachedWaveTable).ArrayNum);
  pFVar1 = (this->CachedWaveTable).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultCurve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->DefaultCurve).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->DefaultCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->DefaultCurve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->DefaultCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->DefaultCurve).EditorCurveData._padding_);
  pFVar1 = (this->CurveBiDirTangents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->PropertyChangedCallbacks).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PropertyChangedCallbacks).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PropertyChangedCallbacks);
  DestructItems<FRuntimeFloatCurve,int>
            ((FRuntimeFloatCurve *)(this->WaveTable).AllocatorInstance.Data,
             (this->WaveTable).ArrayNum);
  pFVar1 = (this->WaveTable).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PresetName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c83f0

void * __thiscall
USourceEffectBitCrusherPreset::_scalar_deleting_destructor_
          (USourceEffectBitCrusherPreset *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&___7USourceEffectBitCrusherPreset__6B_;
  (this->Settings).BitModulation.Modulators.HashSize = 0;
  FVar1 = (this->Settings).BitModulation.Modulators.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Settings).BitModulation.Modulators.Elements);
  (this->Settings).SampleRateModulation.Modulators.HashSize = 0;
  FVar1 = (this->Settings).SampleRateModulation.Modulators.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Settings).SampleRateModulation.Modulators.Elements);
  (this->SettingsCopy).BitModulation.Modulators.HashSize = 0;
  FVar1 = (this->SettingsCopy).BitModulation.Modulators.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SettingsCopy).BitModulation.Modulators.Elements);
  (this->SettingsCopy).SampleRateModulation.Modulators.HashSize = 0;
  FVar1 = (this->SettingsCopy).SampleRateModulation.Modulators.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SettingsCopy).SampleRateModulation.Modulators.Elements);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSourcePreset::~USoundEffectSourcePreset((USoundEffectSourcePreset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x1f0);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c8500

void * __thiscall
USourceEffectChorusPreset::_scalar_deleting_destructor_
          (USourceEffectChorusPreset *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USourceEffectChorusPreset__6B_;
  FSourceEffectChorusSettings::~FSourceEffectChorusSettings(&this->Settings);
  FSourceEffectChorusSettings::~FSourceEffectChorusSettings(&this->SettingsCopy);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSourcePreset::~USoundEffectSourcePreset((USoundEffectSourcePreset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x4e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c8590

void * __thiscall
USourceEffectConvolutionReverbPreset::_scalar_deleting_destructor_
          (USourceEffectConvolutionReverbPreset *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USourceEffectConvolutionReverbPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSourcePreset::~USoundEffectSourcePreset((USoundEffectSourcePreset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c8600

void * __thiscall
USourceEffectDynamicsProcessorPreset::_scalar_deleting_destructor_
          (USourceEffectDynamicsProcessorPreset *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USourceEffectDynamicsProcessorPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSourcePreset::~USoundEffectSourcePreset((USoundEffectSourcePreset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c8670

void * __thiscall
USourceEffectEQPreset::_scalar_deleting_destructor_(USourceEffectEQPreset *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USourceEffectEQPreset__6B_;
  pFVar1 = (this->Settings).EQBands.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SettingsCopy).EQBands.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSourcePreset::~USoundEffectSourcePreset((USoundEffectSourcePreset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c8700

void * __thiscall
USourceEffectEnvelopeFollowerPreset::_scalar_deleting_destructor_
          (USourceEffectEnvelopeFollowerPreset *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USourceEffectEnvelopeFollowerPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSourcePreset::~USoundEffectSourcePreset((USoundEffectSourcePreset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c8770

void * __thiscall
USourceEffectFilterPreset::_scalar_deleting_destructor_
          (USourceEffectFilterPreset *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USourceEffectFilterPreset__6B_;
  pFVar1 = (this->Settings).AudioBusModulation.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SettingsCopy).AudioBusModulation.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSourcePreset::~USoundEffectSourcePreset((USoundEffectSourcePreset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c8800

void * __thiscall
USourceEffectFoldbackDistortionPreset::_scalar_deleting_destructor_
          (USourceEffectFoldbackDistortionPreset *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USourceEffectFoldbackDistortionPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSourcePreset::~USoundEffectSourcePreset((USoundEffectSourcePreset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c8870

void * __thiscall
USourceEffectMidSideSpreaderPreset::_scalar_deleting_destructor_
          (USourceEffectMidSideSpreaderPreset *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USourceEffectMidSideSpreaderPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSourcePreset::~USoundEffectSourcePreset((USoundEffectSourcePreset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c88e0

void * __thiscall
USourceEffectMotionFilterPreset::_scalar_deleting_destructor_
          (USourceEffectMotionFilterPreset *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7USourceEffectMotionFilterPreset__6B_;
  *(undefined4 *)&(this->Settings).ModulationMappings.field_0x48 = 0;
  pvVar1 = *(void **)&(this->Settings).ModulationMappings.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Settings).ModulationMappings);
  *(undefined4 *)&(this->SettingsCopy).ModulationMappings.field_0x48 = 0;
  pvVar1 = *(void **)&(this->SettingsCopy).ModulationMappings.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SettingsCopy).ModulationMappings);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSourcePreset::~USoundEffectSourcePreset((USoundEffectSourcePreset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c89b0

void * __thiscall
USourceEffectPannerPreset::_scalar_deleting_destructor_
          (USourceEffectPannerPreset *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USourceEffectPannerPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSourcePreset::~USoundEffectSourcePreset((USoundEffectSourcePreset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c8a20

void * __thiscall
USourceEffectPhaserPreset::_scalar_deleting_destructor_
          (USourceEffectPhaserPreset *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USourceEffectPhaserPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSourcePreset::~USoundEffectSourcePreset((USoundEffectSourcePreset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c8a90

void * __thiscall
USourceEffectRingModulationPreset::_scalar_deleting_destructor_
          (USourceEffectRingModulationPreset *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USourceEffectRingModulationPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSourcePreset::~USoundEffectSourcePreset((USoundEffectSourcePreset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c8b00

void * __thiscall
USourceEffectSimpleDelayPreset::_scalar_deleting_destructor_
          (USourceEffectSimpleDelayPreset *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USourceEffectSimpleDelayPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSourcePreset::~USoundEffectSourcePreset((USoundEffectSourcePreset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c8b70

void * __thiscall
USourceEffectStereoDelayPreset::_scalar_deleting_destructor_
          (USourceEffectStereoDelayPreset *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USourceEffectStereoDelayPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSourcePreset::~USoundEffectSourcePreset((USoundEffectSourcePreset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c8be0

void * __thiscall
USourceEffectWaveShaperPreset::_scalar_deleting_destructor_
          (USourceEffectWaveShaperPreset *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USourceEffectWaveShaperPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSourcePreset::~USoundEffectSourcePreset((USoundEffectSourcePreset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c8c50

void * __thiscall
USubmixEffectConvolutionReverbPreset::_scalar_deleting_destructor_
          (USubmixEffectConvolutionReverbPreset *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USubmixEffectConvolutionReverbPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSubmixPreset::~USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c8cc0

void * __thiscall
USubmixEffectDelayPreset::_scalar_deleting_destructor_(USubmixEffectDelayPreset *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USubmixEffectDelayPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSubmixPreset::~USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c8d30

void * __thiscall
USubmixEffectDelayStatics::_scalar_deleting_destructor_
          (USubmixEffectDelayStatics *this,uint param_1)

{
  *(undefined ***)this = &___7USubmixEffectDelayStatics__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c8d90

void * __thiscall
USubmixEffectFilterPreset::_scalar_deleting_destructor_
          (USubmixEffectFilterPreset *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USubmixEffectFilterPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSubmixPreset::~USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c8e00

void * __thiscall
USubmixEffectFlexiverbPreset::_scalar_deleting_destructor_
          (USubmixEffectFlexiverbPreset *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USubmixEffectFlexiverbPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSubmixPreset::~USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c8e70

void * __thiscall
USubmixEffectMultibandCompressorPreset::_scalar_deleting_destructor_
          (USubmixEffectMultibandCompressorPreset *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USubmixEffectMultibandCompressorPreset__6B_;
  pFVar1 = (this->Settings).Bands.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SettingsCopy).Bands.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSubmixPreset::~USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c8f00

void * __thiscall
USubmixEffectStereoDelayPreset::_scalar_deleting_destructor_
          (USubmixEffectStereoDelayPreset *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USubmixEffectStereoDelayPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSubmixPreset::~USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c8f70

void * __thiscall
USubmixEffectStereoToQuadPreset::_scalar_deleting_destructor_
          (USubmixEffectStereoToQuadPreset *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USubmixEffectStereoToQuadPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSubmixPreset::~USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c8fe0

void * __thiscall
USubmixEffectTapDelayPreset::_scalar_deleting_destructor_
          (USubmixEffectTapDelayPreset *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USubmixEffectTapDelayPreset__6B_;
  pFVar1 = (this->DynamicSettings).Taps.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Settings).Taps.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SettingsCopy).Taps.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSubmixPreset::~USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c9080

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall USynth2DSlider::_scalar_deleting_destructor_(USynth2DSlider *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MySlider).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->OnValueChangedY).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueChangedY);
  pvVar1 = *(void **)&(this->OnValueChangedX).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueChangedX);
  pvVar1 = *(void **)&(this->OnControllerCaptureEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnControllerCaptureEnd);
  pvVar1 = *(void **)&(this->OnControllerCaptureBegin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnControllerCaptureBegin);
  pvVar1 = *(void **)&(this->OnMouseCaptureEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseCaptureEnd);
  pvVar1 = *(void **)&(this->OnMouseCaptureBegin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseCaptureBegin);
  FSynth2DSliderStyle::~FSynth2DSliderStyle(&this->WidgetStyle);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ValueYDelegate);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ValueXDelegate);
  UWidget::~UWidget((UWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x640);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c91e0

void * __thiscall
USynthComponentMonoWaveTable::_scalar_deleting_destructor_
          (USynthComponentMonoWaveTable *this,uint param_1)

{
  UMonoWaveTableSynthPreset *pUVar1;
  void *pvVar2;
  uint local_res10 [2];
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  pUVar1 = this->CachedPreset;
  if (pUVar1 != (UMonoWaveTableSynthPreset *)0x0) {
    local_res10[0] = *(uint *)&this->field_0xc;
    if (*(int *)&(pUVar1->PropertyChangedCallbacks).field_0x8 !=
        *(int *)&(pUVar1->PropertyChangedCallbacks).field_0x34) {
      TSet<TTuple<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned_int>
                ((TSet<TTuple<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>,0>,FDefaultSetAllocator>
                  *)&pUVar1->PropertyChangedCallbacks,local_res10[0],local_res10);
    }
  }
  Audio::FMonoWaveTable::~FMonoWaveTable(&this->Synth);
  pvVar2 = *(void **)&(this->OnNumTablesChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNumTablesChanged);
  pvVar2 = *(void **)&(this->OnTableAltered).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTableAltered);
  USynthComponent::~USynthComponent((USynthComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1020);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c92e0

void * __thiscall
USynthComponentToneGenerator::_scalar_deleting_destructor_
          (USynthComponentToneGenerator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ToneGenerator).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->DistanceAttenuationSettings).AttenuationCurve.Points.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DistanceAttenuationCurve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->DistanceAttenuationCurve).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->DistanceAttenuationCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->DistanceAttenuationCurve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->DistanceAttenuationCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->DistanceAttenuationCurve).EditorCurveData._padding_);
  USynthComponent::~USynthComponent((USynthComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x9b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c93e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall USynthKnob::_scalar_deleting_destructor_(USynthKnob *this,uint param_1)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MySynthKnob).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->OnValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueChanged);
  pvVar1 = *(void **)&(this->OnControllerCaptureEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnControllerCaptureEnd);
  pvVar1 = *(void **)&(this->OnControllerCaptureBegin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnControllerCaptureBegin);
  pvVar1 = *(void **)&(this->OnMouseCaptureEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseCaptureEnd);
  pvVar1 = *(void **)&(this->OnMouseCaptureBegin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseCaptureBegin);
  FSynthKnobStyle::~FSynthKnobStyle(&this->WidgetStyle);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ValueDelegate);
  pIVar2 = (this->ParameterUnits).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->ParameterName).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  UWidget::~UWidget((UWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x570);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c9540

void * __thiscall
USynthSamplePlayer::_scalar_deleting_destructor_(USynthSamplePlayer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  DestructItems<Audio::FSoundWavePCMLoader::FLoadingSoundWaveInfo,int>
            ((FLoadingSoundWaveInfo *)
             (this->SoundWaveLoader).LoadingSoundWaves.AllocatorInstance.Data,
             (this->SoundWaveLoader).LoadingSoundWaves.ArrayNum);
  pFVar1 = (this->SoundWaveLoader).LoadingSoundWaves.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->SoundWaveLoader)._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->SoundWaveLoader);
  pFVar1 = (this->SampleBuffer).RawPCMData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  Audio::FSampleBufferReader::~FSampleBufferReader(&this->SampleBufferReader);
  pvVar2 = *(void **)&(this->OnSamplePlaybackProgress).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSamplePlaybackProgress);
  pvVar2 = *(void **)&(this->OnSampleLoaded).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSampleLoaded);
  USynthComponent::~USynthComponent((USynthComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0c9660

void * __thiscall
USynthesisUtilitiesBlueprintFunctionLibrary::_scalar_deleting_destructor_
          (USynthesisUtilitiesBlueprintFunctionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7USynthesisUtilitiesBlueprintFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeEffectConvolutionReverb @ 14f0d6770

void __cdecl EmptyLinkFunctionForGeneratedCodeEffectConvolutionReverb(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEpicSynth1Component @ 14f0d6780

void __cdecl EmptyLinkFunctionForGeneratedCodeEpicSynth1Component(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEpicSynth1Types @ 14f0d6790

void __cdecl EmptyLinkFunctionForGeneratedCodeEpicSynth1Types(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSourceEffectBitCrusher @ 14f0d67a0

void __cdecl EmptyLinkFunctionForGeneratedCodeSourceEffectBitCrusher(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSourceEffectChorus @ 14f0d67b0

void __cdecl EmptyLinkFunctionForGeneratedCodeSourceEffectChorus(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSourceEffectConvolutionReverb @ 14f0d67c0

void __cdecl EmptyLinkFunctionForGeneratedCodeSourceEffectConvolutionReverb(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSourceEffectDynamicsProcessor @ 14f0d67d0

void __cdecl EmptyLinkFunctionForGeneratedCodeSourceEffectDynamicsProcessor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSourceEffectEQ @ 14f0d67e0

void __cdecl EmptyLinkFunctionForGeneratedCodeSourceEffectEQ(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSourceEffectEnvelopeFollower @ 14f0d67f0

void __cdecl EmptyLinkFunctionForGeneratedCodeSourceEffectEnvelopeFollower(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSourceEffectFilter @ 14f0d6800

void __cdecl EmptyLinkFunctionForGeneratedCodeSourceEffectFilter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSourceEffectFoldbackDistortion @ 14f0d6810

void __cdecl EmptyLinkFunctionForGeneratedCodeSourceEffectFoldbackDistortion(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSourceEffectMidSideSpreader @ 14f0d6820

void __cdecl EmptyLinkFunctionForGeneratedCodeSourceEffectMidSideSpreader(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSourceEffectMotionFilter @ 14f0d6830

void __cdecl EmptyLinkFunctionForGeneratedCodeSourceEffectMotionFilter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSourceEffectPanner @ 14f0d6840

void __cdecl EmptyLinkFunctionForGeneratedCodeSourceEffectPanner(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSourceEffectPhaser @ 14f0d6850

void __cdecl EmptyLinkFunctionForGeneratedCodeSourceEffectPhaser(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSourceEffectRingModulation @ 14f0d6860

void __cdecl EmptyLinkFunctionForGeneratedCodeSourceEffectRingModulation(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSourceEffectSimpleDelay @ 14f0d6870

void __cdecl EmptyLinkFunctionForGeneratedCodeSourceEffectSimpleDelay(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSourceEffectStereoDelay @ 14f0d6880

void __cdecl EmptyLinkFunctionForGeneratedCodeSourceEffectStereoDelay(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSourceEffectWaveShaper @ 14f0d6890

void __cdecl EmptyLinkFunctionForGeneratedCodeSourceEffectWaveShaper(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSubmixEffectConvolutionReverb @ 14f0d68a0

void __cdecl EmptyLinkFunctionForGeneratedCodeSubmixEffectConvolutionReverb(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSubmixEffectDelay @ 14f0d68b0

void __cdecl EmptyLinkFunctionForGeneratedCodeSubmixEffectDelay(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSubmixEffectFilter @ 14f0d68c0

void __cdecl EmptyLinkFunctionForGeneratedCodeSubmixEffectFilter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSubmixEffectFlexiverb @ 14f0d68d0

void __cdecl EmptyLinkFunctionForGeneratedCodeSubmixEffectFlexiverb(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSubmixEffectMultiBandCompressor @ 14f0d68e0

void __cdecl EmptyLinkFunctionForGeneratedCodeSubmixEffectMultiBandCompressor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSubmixEffectStereoDelay @ 14f0d68f0

void __cdecl EmptyLinkFunctionForGeneratedCodeSubmixEffectStereoDelay(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSubmixEffectStereoToQuad @ 14f0d6900

void __cdecl EmptyLinkFunctionForGeneratedCodeSubmixEffectStereoToQuad(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSubmixEffectTapDelay @ 14f0d6910

void __cdecl EmptyLinkFunctionForGeneratedCodeSubmixEffectTapDelay(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSynth2DSlider @ 14f0d6920

void __cdecl EmptyLinkFunctionForGeneratedCodeSynth2DSlider(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSynth2DSliderStyle @ 14f0d6930

void __cdecl EmptyLinkFunctionForGeneratedCodeSynth2DSliderStyle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSynthComponentGranulator @ 14f0d6940

void __cdecl EmptyLinkFunctionForGeneratedCodeSynthComponentGranulator(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSynthComponentMonoWaveTable @ 14f0d6950

void __cdecl EmptyLinkFunctionForGeneratedCodeSynthComponentMonoWaveTable(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSynthComponentToneGenerator @ 14f0d6960

void __cdecl EmptyLinkFunctionForGeneratedCodeSynthComponentToneGenerator(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSynthComponentWaveTable @ 14f0d6970

void __cdecl EmptyLinkFunctionForGeneratedCodeSynthComponentWaveTable(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSynthKnob @ 14f0d6980

void __cdecl EmptyLinkFunctionForGeneratedCodeSynthKnob(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSynthKnobStyle @ 14f0d6990

void __cdecl EmptyLinkFunctionForGeneratedCodeSynthKnobStyle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSynthSlateStyle @ 14f0d69a0

void __cdecl EmptyLinkFunctionForGeneratedCodeSynthSlateStyle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSynthesisBlueprintUtilities @ 14f0d69b0

void __cdecl EmptyLinkFunctionForGeneratedCodeSynthesisBlueprintUtilities(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSynthesis_init @ 14f0d69c0

void __cdecl EmptyLinkFunctionForGeneratedCodeSynthesis_init(void)

{
  return;
}

// FNumTablesChanged_DelegateWrapper @ 14f0d6ff0

void __cdecl
FNumTablesChanged_DelegateWrapper(TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FOnControllerCaptureBeginEventSynth2D_DelegateWrapper @ 14f0d7000

void __cdecl
FOnControllerCaptureBeginEventSynth2D_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FOnControllerCaptureEndEventSynth2D_DelegateWrapper @ 14f0d7010

void __cdecl
FOnControllerCaptureEndEventSynth2D_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FOnEnvelopeFollowerUpdate_DelegateWrapper @ 14f0d7020

void __cdecl
FOnEnvelopeFollowerUpdate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,float param_2)

{
  float local_res10 [6];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FOnFloatValueChangedEventSynth2D_DelegateWrapper @ 14f0d7040

void __cdecl
FOnFloatValueChangedEventSynth2D_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,float param_2)

{
  float local_res10 [6];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FOnMouseCaptureBeginEventSynth2D_DelegateWrapper @ 14f0d7060

void __cdecl
FOnMouseCaptureBeginEventSynth2D_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FOnMouseCaptureEndEventSynth2D_DelegateWrapper @ 14f0d7070

void __cdecl
FOnMouseCaptureEndEventSynth2D_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FOnSampleLoaded_DelegateWrapper @ 14f0d7080

void __cdecl
FOnSampleLoaded_DelegateWrapper(TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FOnSamplePlaybackProgress_DelegateWrapper @ 14f0d7090

void __cdecl
FOnSamplePlaybackProgress_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,float param_2,float param_3
          )

{
  float local_res20;
  float local_res24;
  
  local_res20 = param_2;
  local_res24 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_res20);
  return;
}

// FOnTableAltered_DelegateWrapper @ 14f0d70c0

void __cdecl
FOnTableAltered_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,int param_2)

{
  int local_res10 [6];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// GetMultichannelPan @ 14f0d9f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TapDelayUtils::GetMultichannelPan
          (float *param_1,float *param_2,float *param_3,int *param_4,float *param_5)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_78 [32];
  float local_58 [4];
  ulonglong local_48;
  
  fVar3 = __real_3f800000;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_78;
  fVar4 = *param_1 * *param_3;
  if (*param_4 == 2) {
    fVar5 = *param_2 * __real_3c0efa36;
    fVar3 = fVar5 + __real_4016cbe4;
    fVar5 = fVar5 + __real_3f490fdb;
    fVar3 = (__real_3fa2f983 -
            (float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff) * __real_3ecf817a) * fVar3
    ;
    if (__real_3f800000 <= fVar3) {
      fVar3 = __real_3f800000;
    }
    fVar5 = (__real_3fa2f983 -
            (float)((uint)fVar5 & __xmm_7fffffff7fffffff7fffffff7fffffff) * __real_3ecf817a) * fVar5
    ;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    if (__real_3f800000 <= fVar5) {
      fVar5 = __real_3f800000;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    *param_5 = fVar3 * fVar4 + *param_5;
    param_5[1] = fVar5 * fVar4 + param_5[1];
  }
  else {
    local_58[0] = 0.0;
    local_58[1] = 0.0;
    local_58[2] = 0.0;
    local_58[3] = 0.0;
    fVar5 = FGenericPlatformMath::Fmod
                      (*param_2 * __real_3b360b61 + ___real_3f900000,__real_3f800000);
    fVar5 = fVar5 * __real_40800000;
    iVar2 = (int)ROUND((fVar5 + fVar5) - __real_3f000000) >> 1;
    uVar1 = iVar2 + 1U & 0x80000003;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
    }
    Audio::GetStereoPan(((fVar5 - (float)iVar2) + (fVar5 - (float)iVar2)) - fVar3,local_58 + iVar2,
                        local_58 + (int)uVar1);
    iVar2 = *param_4;
    if ((iVar2 == 6) || (iVar2 == 8)) {
      *param_5 = local_58[0] * fVar4 + *param_5;
      param_5[1] = local_58[1] * fVar4 + param_5[1];
      param_5[5] = local_58[2] * fVar4 + param_5[5];
      param_5[4] = local_58[3] * fVar4 + param_5[4];
    }
    else if (3 < iVar2) {
      *param_5 = local_58[0] * fVar4 + *param_5;
      param_5[1] = local_58[1] * fVar4 + param_5[1];
      param_5[2] = local_58[2] * fVar4 + param_5[2];
      param_5[3] = local_58[3] * fVar4 + param_5[3];
    }
  }
  return;
}

// GetReverbOutputChannelTypesForNumChannels @ 14f0ddc80

bool __cdecl
Audio::ConvolutionReverbIntrinsics::GetReverbOutputChannelTypesForNumChannels
          (int param_1,TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *pTVar7;
  
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_2->AllocatorInstance,0,piVar1);
  }
  if ((param_1 < 0) || (ReverbOutputFormats.ArrayNum <= param_1)) {
    return false;
  }
  uVar6 = 0;
  if (param_1 < ReverbOutputFormats.ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pTVar7 = (TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *)
           (ReverbOutputFormats.AllocatorInstance.Data + (longlong)param_1 * 0x10);
  if (param_2 != pTVar7) {
    iVar2 = pTVar7->ArrayNum;
    _Src = (pTVar7->AllocatorInstance).Data;
    param_2->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return true;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,*piVar1,&param_2->AllocatorInstance,iVar2,piVar1);
    if (iVar2 != 0) {
      memcpy((param_2->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
    }
  }
  return true;
}

// GetStereoPan @ 14f0deb10

void __cdecl Audio::GetStereoPan(float param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = __real_3f800000;
  fVar2 = param_1 * __real_3f490fdb + __real_4016cbe4;
  fVar3 = param_1 * __real_3f490fdb + __real_3f490fdb;
  fVar2 = (__real_3f800000 -
          (float)((uint)fVar2 & __xmm_7fffffff7fffffff7fffffff7fffffff) * __real_3ea2f983) *
          fVar2 * __real_3fa2f983;
  if (__real_3f800000 <= fVar2) {
    fVar2 = __real_3f800000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *param_2 = fVar2;
  fVar2 = (fVar1 - (float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff) * __real_3ea2f983)
          * fVar3 * __real_3fa2f983;
  if (fVar1 <= fVar2) {
    fVar2 = fVar1;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *param_3 = fVar2;
  return;
}

// GetSubmixChannelOrderForNumChannels @ 14f0debc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
Audio::GetSubmixChannelOrderForNumChannels
          (int param_1,TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  piVar2 = &param_2->ArrayNum;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_2->AllocatorInstance,0,piVar1);
  }
  uVar10 = _UNK_15314ddc8;
  uVar9 = ___xmm_0000000a000000090000000500000004;
  uVar8 = _UNK_15314ddb8;
  uVar7 = ___xmm_0000000a000000090000000100000000;
  uVar6 = _UNK_150631e08;
  uVar5 = __xmm_00000003000000020000000100000000;
  if (param_1 == 1) {
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,1,&param_2->AllocatorInstance,piVar2,piVar1);
    *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar11 * 4) = 2;
  }
  else if (param_1 == 2) {
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,2,&param_2->AllocatorInstance,piVar2,piVar1);
    *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar11 * 4) = 0x100000000;
  }
  else if (param_1 == 4) {
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,4,&param_2->AllocatorInstance,piVar2,piVar1);
    pFVar3 = (param_2->AllocatorInstance).Data + (longlong)iVar11 * 4;
    *(undefined8 *)pFVar3 = uVar7;
    *(undefined8 *)(pFVar3 + 8) = uVar8;
  }
  else if (param_1 == 6) {
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,6,&param_2->AllocatorInstance,piVar2,piVar1);
    pFVar4 = (param_2->AllocatorInstance).Data;
    pFVar3 = pFVar4 + (longlong)iVar11 * 4;
    *(undefined8 *)pFVar3 = uVar5;
    *(undefined8 *)(pFVar3 + 8) = uVar6;
    *(undefined8 *)(pFVar4 + (longlong)iVar11 * 4 + 0x10) = 0xa00000009;
  }
  else {
    if (param_1 != 8) {
      return false;
    }
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,8,&param_2->AllocatorInstance,piVar2,piVar1);
    pFVar4 = (param_2->AllocatorInstance).Data;
    pFVar3 = pFVar4 + (longlong)iVar11 * 4;
    *(undefined8 *)pFVar3 = uVar5;
    *(undefined8 *)(pFVar3 + 8) = uVar6;
    pFVar4 = pFVar4 + (longlong)iVar11 * 4 + 0x10;
    *(undefined8 *)pFVar4 = uVar9;
    *(undefined8 *)(pFVar4 + 8) = uVar10;
  }
  return true;
}

// InitEnvelopeFollowerNotifier @ 14f0e66b0

void __cdecl InitEnvelopeFollowerNotifier(void)

{
  FSourceEffectEnvFollowerNotifier *this;
  TNode *pTVar1;
  TNode *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FSharedReferencer<1> local_10;
  
  if (SourceEffectEnvFollowerNotifier.Object == (FSourceEffectEnvFollowerNotifier *)0x0) {
    this = operator_new(0x80);
    if (this == (FSourceEffectEnvFollowerNotifier *)0x0) {
      this = (FSourceEffectEnvFollowerNotifier *)0x0;
    }
    else {
      FTickableGameObject::FTickableGameObject((FTickableGameObject *)this,NewObject);
      pTVar2 = (TNode *)0x0;
      this->_padding_ =
           (longlong)&FSourceEffectEnvFollowerNotifier::_vftable__for__FTickableGameObject__;
      this->NumListenersRegistered = 0;
      this->NumInstances = 0;
      this->_padding_ =
           (longlong)&FSourceEffectEnvFollowerNotifier::_vftable__for__IEnvelopeFollowerNotifier__;
      pTVar1 = operator_new(0x40);
      if (pTVar1 != (TNode *)0x0) {
        pTVar1->NextNode = (TNode *)0x0;
        pTVar1->_padding_ = 0;
        *(undefined8 *)&pTVar1->Item = 0;
        *(undefined8 *)&(pTVar1->Item).field_0x8 = 0;
        *(undefined8 *)&(pTVar1->Item).field_0x10 = 0;
        *(undefined8 *)&(pTVar1->Item).field_0x18 = 0;
        *(undefined8 *)&(pTVar1->Item).field_0x20 = 0;
        *(undefined8 *)&(pTVar1->Item).field_0x28 = 0;
        pTVar1->NextNode = (TNode *)0x0;
        *(undefined8 *)&pTVar1->Item = 0;
        *(undefined8 *)&(pTVar1->Item).field_0x28 = 0;
        pTVar2 = pTVar1;
      }
      (this->CommandQueue).Tail = pTVar2;
      (this->CommandQueue).Head = pTVar2;
      *(undefined8 *)&this->EnvelopeFollowerData = 0;
      *(undefined8 *)&(this->EnvelopeFollowerData).field_0x8 = 0;
      *(undefined8 *)&(this->EnvelopeFollowerData).field_0x20 = 0;
      *(undefined4 *)&(this->EnvelopeFollowerData).field_0x28 = 0;
      *(undefined4 *)&(this->EnvelopeFollowerData).field_0x2c = 0x80;
      *(undefined4 *)&(this->EnvelopeFollowerData).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->EnvelopeFollowerData).field_0x34 = 0;
      *(undefined8 *)&(this->EnvelopeFollowerData).field_0x40 = 0;
      *(undefined4 *)&(this->EnvelopeFollowerData).field_0x48 = 0;
    }
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    pTVar3 = operator_new(0x18);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      pTVar3->SharedReferenceCount = (atomic<int>)0x1;
      pTVar3->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_VFSourceEffectEnvFollowerNotifier__U__DefaultDeleter_VFSourceEffectEnvFollowerNotifier___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      pTVar3->WeakReferenceCount = (atomic<int>)0x1;
      pTVar3[1]._padding_ = (longlong)this;
      pTVar4 = pTVar3;
    }
    SourceEffectEnvFollowerNotifier.Object = this;
    local_10.ReferenceController = pTVar4;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&SourceEffectEnvFollowerNotifier.SharedReferenceCount,&local_10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_10.ReferenceController);
  }
  return;
}

// SetImpulseResponse @ 14f0fc870

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
Audio::ConvolutionReverbIntrinsics::SetImpulseResponse
          (IConvolutionAlgorithm *param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2,
          int param_3,float param_4,float param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  ISampleRateConverter *pIVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> local_58;
  TArray<float,TSizedDefaultAllocator<32>_> local_48;
  FScriptContainerElement *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TArrayView<float_const_,int> local_28 [2];
  
  uVar10 = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  if (param_4 != param_5) {
    pIVar6 = ISampleRateConverter::CreateSampleRateConverter();
    if (pIVar6 == (ISampleRateConverter *)0x0) {
      if (1 < (byte)LogSynthesis._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSynthesis);
      }
      bVar2 = false;
      goto LAB_14f0fca9a;
    }
    (**(code **)((longlong)*pIVar6 + 8))(pIVar6,param_4 / param_5,param_3);
    (**(code **)((longlong)*pIVar6 + 0x18))
              (pIVar6,(param_2->AllocatorInstance).Data,param_2->ArrayNum,&local_48);
    param_2 = &local_48;
    (**(code **)*pIVar6)(pIVar6,1);
  }
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar11 = param_2->ArrayNum / param_3;
  local_58.ArrayMax = 0;
  local_58.ArrayNum = 0;
  uVar7 = uVar10;
  uVar8 = uVar10;
  if (0 < param_3) {
    while( true ) {
      iVar4 = (int)uVar7;
      if (iVar4 == (int)uVar8) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_58.AllocatorInstance,&local_58.ArrayMax);
      }
      local_58.ArrayNum = iVar4 + 1;
      pFVar12 = local_58.AllocatorInstance.Data + (longlong)iVar4 * 0x10;
      *(FScriptContainerElement **)&pFVar12->field_0x0 = (FScriptContainerElement *)0x0;
      *(int *)(pFVar12 + 8) = 0;
      *(int *)(pFVar12 + 0xc) = 0;
      if (0 < iVar11) {
        UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,iVar11,(ForAnyElementType *)pFVar12,(int *)(pFVar12 + 8),
                   (int *)(pFVar12 + 0xc));
      }
      if (param_3 <= local_58.ArrayNum) break;
      uVar7 = (ulonglong)(uint)local_58.ArrayNum;
      uVar8 = (ulonglong)(uint)local_58.ArrayMax;
    }
  }
  local_38 = (param_2->AllocatorInstance).Data;
  iVar11 = param_2->ArrayNum;
  if ((iVar11 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_28[0]._12_4_ = uStack_2c;
  local_28[0].ArrayNum = iVar11;
  local_28[0].DataPtr = (float *)local_38;
  iStack_30 = iVar11;
  FConvolutionReverb::DeinterleaveBuffer(&local_58,local_28,param_3);
  uVar7 = uVar10;
  if (0 < local_58.ArrayNum) {
    do {
      uVar9 = (uint)uVar10;
      uVar5 = 0;
      if ((int)uVar9 < local_58.ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      (**(code **)((longlong)*param_1 + 0x48))
                (param_1,uVar10,*(undefined8 *)(local_58.AllocatorInstance.Data + uVar7),
                 *(undefined4 *)(local_58.AllocatorInstance.Data + uVar7 + 8));
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar7 = uVar7 + 0x10;
    } while ((int)(uVar9 + 1) < local_58.ArrayNum);
  }
  bVar2 = true;
  DestructItems<TArray<float,TAlignedHeapAllocator<16>_>,int>
            ((TArray<float,TAlignedHeapAllocator<16>_> *)local_58.AllocatorInstance.Data,
             local_58.ArrayNum);
  if ((TArray<float,TAlignedHeapAllocator<16>_> *)local_58.AllocatorInstance.Data !=
      (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
LAB_14f0fca9a:
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return bVar2;
}

// Z_Construct_UClass_UGranularSynth_NoRegister @ 14f109e90

UClass * __cdecl Z_Construct_UClass_UGranularSynth_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGranularSynth.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"GranularSynth",
               &Z_Registration_Info_UClass_UGranularSynth.InnerSingleton,
               UGranularSynth::StaticRegisterNativesUGranularSynth,0xcb0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UGranularSynth>,InternalVTableHelperCtorCaller<UGranularSynth>,
               local_res8,USynthComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGranularSynth.InnerSingleton;
}

// Z_Construct_UClass_UModularSynthComponent_NoRegister @ 14f109f50

UClass * __cdecl Z_Construct_UClass_UModularSynthComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModularSynthComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"ModularSynthComponent",
               &Z_Registration_Info_UClass_UModularSynthComponent.InnerSingleton,
               UModularSynthComponent::StaticRegisterNativesUModularSynthComponent,0xfc0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UModularSynthComponent>,
               InternalVTableHelperCtorCaller<UModularSynthComponent>,local_res8,
               USynthComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModularSynthComponent.InnerSingleton;
}

// Z_Construct_UClass_UModularSynthLibrary_NoRegister @ 14f10a010

UClass * __cdecl Z_Construct_UClass_UModularSynthLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModularSynthLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"ModularSynthLibrary",
               &Z_Registration_Info_UClass_UModularSynthLibrary.InnerSingleton,
               UModularSynthLibrary::StaticRegisterNativesUModularSynthLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UModularSynthLibrary>,
               InternalVTableHelperCtorCaller<UModularSynthLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModularSynthLibrary.InnerSingleton;
}

// Z_Construct_UClass_USourceEffectBitCrusherPreset_NoRegister @ 14f10a0d0

UClass * __cdecl Z_Construct_UClass_USourceEffectBitCrusherPreset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectBitCrusherPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectBitCrusherPreset",
               &Z_Registration_Info_UClass_USourceEffectBitCrusherPreset.InnerSingleton,
               USourceEffectBitCrusherPreset::StaticRegisterNativesUSourceEffectBitCrusherPreset,
               0x1f0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USourceEffectBitCrusherPreset>,
               InternalVTableHelperCtorCaller<USourceEffectBitCrusherPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectBitCrusherPreset.InnerSingleton;
}

// Z_Construct_UClass_USourceEffectChorusPreset_NoRegister @ 14f10a190

UClass * __cdecl Z_Construct_UClass_USourceEffectChorusPreset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectChorusPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectChorusPreset",
               &Z_Registration_Info_UClass_USourceEffectChorusPreset.InnerSingleton,
               USourceEffectChorusPreset::StaticRegisterNativesUSourceEffectChorusPreset,0x4e0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USourceEffectChorusPreset>,
               InternalVTableHelperCtorCaller<USourceEffectChorusPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectChorusPreset.InnerSingleton;
}

// Z_Construct_UClass_USourceEffectConvolutionReverbPreset_NoRegister @ 14f10a250

UClass * __cdecl Z_Construct_UClass_USourceEffectConvolutionReverbPreset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectConvolutionReverbPreset.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectConvolutionReverbPreset",
               &Z_Registration_Info_UClass_USourceEffectConvolutionReverbPreset.InnerSingleton,
               USourceEffectConvolutionReverbPreset::
               StaticRegisterNativesUSourceEffectConvolutionReverbPreset,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USourceEffectConvolutionReverbPreset>,
               InternalVTableHelperCtorCaller<USourceEffectConvolutionReverbPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectConvolutionReverbPreset.InnerSingleton;
}

// Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_NoRegister @ 14f10a310

UClass * __cdecl Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectDynamicsProcessorPreset.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectDynamicsProcessorPreset",
               &Z_Registration_Info_UClass_USourceEffectDynamicsProcessorPreset.InnerSingleton,
               USourceEffectDynamicsProcessorPreset::
               StaticRegisterNativesUSourceEffectDynamicsProcessorPreset,0xe8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USourceEffectDynamicsProcessorPreset>,
               InternalVTableHelperCtorCaller<USourceEffectDynamicsProcessorPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectDynamicsProcessorPreset.InnerSingleton;
}

// Z_Construct_UClass_USourceEffectEQPreset_NoRegister @ 14f10a3d0

UClass * __cdecl Z_Construct_UClass_USourceEffectEQPreset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectEQPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectEQPreset",
               &Z_Registration_Info_UClass_USourceEffectEQPreset.InnerSingleton,
               USourceEffectEQPreset::StaticRegisterNativesUSourceEffectEQPreset,0xb0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<USourceEffectEQPreset>,
               InternalVTableHelperCtorCaller<USourceEffectEQPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectEQPreset.InnerSingleton;
}

// Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_NoRegister @ 14f10a490

UClass * __cdecl Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectEnvelopeFollowerPreset.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectEnvelopeFollowerPreset",
               &Z_Registration_Info_UClass_USourceEffectEnvelopeFollowerPreset.InnerSingleton,
               USourceEffectEnvelopeFollowerPreset::
               StaticRegisterNativesUSourceEffectEnvelopeFollowerPreset,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USourceEffectEnvelopeFollowerPreset>,
               InternalVTableHelperCtorCaller<USourceEffectEnvelopeFollowerPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectEnvelopeFollowerPreset.InnerSingleton;
}

// Z_Construct_UClass_USourceEffectFilterPreset_NoRegister @ 14f10a550

UClass * __cdecl Z_Construct_UClass_USourceEffectFilterPreset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectFilterPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectFilterPreset",
               &Z_Registration_Info_UClass_USourceEffectFilterPreset.InnerSingleton,
               USourceEffectFilterPreset::StaticRegisterNativesUSourceEffectFilterPreset,0xd0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USourceEffectFilterPreset>,
               InternalVTableHelperCtorCaller<USourceEffectFilterPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectFilterPreset.InnerSingleton;
}

// Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_NoRegister @ 14f10a610

UClass * __cdecl Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectFoldbackDistortionPreset.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectFoldbackDistortionPreset",
               &Z_Registration_Info_UClass_USourceEffectFoldbackDistortionPreset.InnerSingleton,
               USourceEffectFoldbackDistortionPreset::
               StaticRegisterNativesUSourceEffectFoldbackDistortionPreset,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USourceEffectFoldbackDistortionPreset>,
               InternalVTableHelperCtorCaller<USourceEffectFoldbackDistortionPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectFoldbackDistortionPreset.InnerSingleton;
}

// Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_NoRegister @ 14f10a6d0

UClass * __cdecl Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectMidSideSpreaderPreset.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectMidSideSpreaderPreset",
               &Z_Registration_Info_UClass_USourceEffectMidSideSpreaderPreset.InnerSingleton,
               USourceEffectMidSideSpreaderPreset::
               StaticRegisterNativesUSourceEffectMidSideSpreaderPreset,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USourceEffectMidSideSpreaderPreset>,
               InternalVTableHelperCtorCaller<USourceEffectMidSideSpreaderPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectMidSideSpreaderPreset.InnerSingleton;
}

// Z_Construct_UClass_USourceEffectMotionFilterPreset_NoRegister @ 14f10a790

UClass * __cdecl Z_Construct_UClass_USourceEffectMotionFilterPreset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectMotionFilterPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectMotionFilterPreset",
               &Z_Registration_Info_UClass_USourceEffectMotionFilterPreset.InnerSingleton,
               USourceEffectMotionFilterPreset::StaticRegisterNativesUSourceEffectMotionFilterPreset
               ,0x180,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USourceEffectMotionFilterPreset>,
               InternalVTableHelperCtorCaller<USourceEffectMotionFilterPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectMotionFilterPreset.InnerSingleton;
}

// Z_Construct_UClass_USourceEffectPannerPreset_NoRegister @ 14f10a850

UClass * __cdecl Z_Construct_UClass_USourceEffectPannerPreset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectPannerPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectPannerPreset",
               &Z_Registration_Info_UClass_USourceEffectPannerPreset.InnerSingleton,
               USourceEffectPannerPreset::StaticRegisterNativesUSourceEffectPannerPreset,0xa0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USourceEffectPannerPreset>,
               InternalVTableHelperCtorCaller<USourceEffectPannerPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectPannerPreset.InnerSingleton;
}

// Z_Construct_UClass_USourceEffectPhaserPreset_NoRegister @ 14f10a910

UClass * __cdecl Z_Construct_UClass_USourceEffectPhaserPreset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectPhaserPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectPhaserPreset",
               &Z_Registration_Info_UClass_USourceEffectPhaserPreset.InnerSingleton,
               USourceEffectPhaserPreset::StaticRegisterNativesUSourceEffectPhaserPreset,0xb0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USourceEffectPhaserPreset>,
               InternalVTableHelperCtorCaller<USourceEffectPhaserPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectPhaserPreset.InnerSingleton;
}

// Z_Construct_UClass_USourceEffectRingModulationPreset_NoRegister @ 14f10a9d0

UClass * __cdecl Z_Construct_UClass_USourceEffectRingModulationPreset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectRingModulationPreset.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectRingModulationPreset",
               &Z_Registration_Info_UClass_USourceEffectRingModulationPreset.InnerSingleton,
               USourceEffectRingModulationPreset::
               StaticRegisterNativesUSourceEffectRingModulationPreset,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USourceEffectRingModulationPreset>,
               InternalVTableHelperCtorCaller<USourceEffectRingModulationPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectRingModulationPreset.InnerSingleton;
}

// Z_Construct_UClass_USourceEffectSimpleDelayPreset_NoRegister @ 14f10aa90

UClass * __cdecl Z_Construct_UClass_USourceEffectSimpleDelayPreset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectSimpleDelayPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectSimpleDelayPreset",
               &Z_Registration_Info_UClass_USourceEffectSimpleDelayPreset.InnerSingleton,
               USourceEffectSimpleDelayPreset::StaticRegisterNativesUSourceEffectSimpleDelayPreset,
               0xc0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USourceEffectSimpleDelayPreset>,
               InternalVTableHelperCtorCaller<USourceEffectSimpleDelayPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectSimpleDelayPreset.InnerSingleton;
}

// Z_Construct_UClass_USourceEffectStereoDelayPreset_NoRegister @ 14f10ab50

UClass * __cdecl Z_Construct_UClass_USourceEffectStereoDelayPreset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectStereoDelayPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectStereoDelayPreset",
               &Z_Registration_Info_UClass_USourceEffectStereoDelayPreset.InnerSingleton,
               USourceEffectStereoDelayPreset::StaticRegisterNativesUSourceEffectStereoDelayPreset,
               0xd8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USourceEffectStereoDelayPreset>,
               InternalVTableHelperCtorCaller<USourceEffectStereoDelayPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectStereoDelayPreset.InnerSingleton;
}

// Z_Construct_UClass_USourceEffectWaveShaperPreset_NoRegister @ 14f10ac10

UClass * __cdecl Z_Construct_UClass_USourceEffectWaveShaperPreset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectWaveShaperPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectWaveShaperPreset",
               &Z_Registration_Info_UClass_USourceEffectWaveShaperPreset.InnerSingleton,
               USourceEffectWaveShaperPreset::StaticRegisterNativesUSourceEffectWaveShaperPreset,
               0xa0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USourceEffectWaveShaperPreset>,
               InternalVTableHelperCtorCaller<USourceEffectWaveShaperPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectWaveShaperPreset.InnerSingleton;
}

// Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_NoRegister @ 14f10acd0

UClass * __cdecl Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectConvolutionReverbPreset.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SubmixEffectConvolutionReverbPreset",
               &Z_Registration_Info_UClass_USubmixEffectConvolutionReverbPreset.InnerSingleton,
               USubmixEffectConvolutionReverbPreset::
               StaticRegisterNativesUSubmixEffectConvolutionReverbPreset,0x100,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USubmixEffectConvolutionReverbPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectConvolutionReverbPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectConvolutionReverbPreset.InnerSingleton;
}

// Z_Construct_UClass_USubmixEffectDelayPreset_NoRegister @ 14f10ad90

UClass * __cdecl Z_Construct_UClass_USubmixEffectDelayPreset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectDelayPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SubmixEffectDelayPreset",
               &Z_Registration_Info_UClass_USubmixEffectDelayPreset.InnerSingleton,
               USubmixEffectDelayPreset::StaticRegisterNativesUSubmixEffectDelayPreset,0xb8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USubmixEffectDelayPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectDelayPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectDelayPreset.InnerSingleton;
}

// Z_Construct_UClass_USubmixEffectDelayStatics_NoRegister @ 14f10ae50

UClass * __cdecl Z_Construct_UClass_USubmixEffectDelayStatics_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectDelayStatics.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SubmixEffectDelayStatics",
               &Z_Registration_Info_UClass_USubmixEffectDelayStatics.InnerSingleton,
               USubmixEffectDelayStatics::StaticRegisterNativesUSubmixEffectDelayStatics,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USubmixEffectDelayStatics>,
               InternalVTableHelperCtorCaller<USubmixEffectDelayStatics>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectDelayStatics.InnerSingleton;
}

// Z_Construct_UClass_USubmixEffectFilterPreset_NoRegister @ 14f10af10

UClass * __cdecl Z_Construct_UClass_USubmixEffectFilterPreset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectFilterPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SubmixEffectFilterPreset",
               &Z_Registration_Info_UClass_USubmixEffectFilterPreset.InnerSingleton,
               USubmixEffectFilterPreset::StaticRegisterNativesUSubmixEffectFilterPreset,0xa8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USubmixEffectFilterPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectFilterPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectFilterPreset.InnerSingleton;
}

// Z_Construct_UClass_USubmixEffectFlexiverbPreset_NoRegister @ 14f10afd0

UClass * __cdecl Z_Construct_UClass_USubmixEffectFlexiverbPreset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectFlexiverbPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SubmixEffectFlexiverbPreset",
               &Z_Registration_Info_UClass_USubmixEffectFlexiverbPreset.InnerSingleton,
               USubmixEffectFlexiverbPreset::StaticRegisterNativesUSubmixEffectFlexiverbPreset,0xb0,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USubmixEffectFlexiverbPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectFlexiverbPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectFlexiverbPreset.InnerSingleton;
}

// Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_NoRegister @ 14f10b090

UClass * __cdecl Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectMultibandCompressorPreset.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SubmixEffectMultibandCompressorPreset",
               &Z_Registration_Info_UClass_USubmixEffectMultibandCompressorPreset.InnerSingleton,
               USubmixEffectMultibandCompressorPreset::
               StaticRegisterNativesUSubmixEffectMultibandCompressorPreset,0x100,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USubmixEffectMultibandCompressorPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectMultibandCompressorPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectMultibandCompressorPreset.InnerSingleton;
}

// Z_Construct_UClass_USubmixEffectStereoDelayPreset_NoRegister @ 14f10b150

UClass * __cdecl Z_Construct_UClass_USubmixEffectStereoDelayPreset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectStereoDelayPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SubmixEffectStereoDelayPreset",
               &Z_Registration_Info_UClass_USubmixEffectStereoDelayPreset.InnerSingleton,
               USubmixEffectStereoDelayPreset::StaticRegisterNativesUSubmixEffectStereoDelayPreset,
               0xd8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USubmixEffectStereoDelayPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectStereoDelayPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectStereoDelayPreset.InnerSingleton;
}

// Z_Construct_UClass_USubmixEffectStereoToQuadPreset_NoRegister @ 14f10b210

UClass * __cdecl Z_Construct_UClass_USubmixEffectStereoToQuadPreset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectStereoToQuadPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SubmixEffectStereoToQuadPreset",
               &Z_Registration_Info_UClass_USubmixEffectStereoToQuadPreset.InnerSingleton,
               USubmixEffectStereoToQuadPreset::StaticRegisterNativesUSubmixEffectStereoToQuadPreset
               ,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USubmixEffectStereoToQuadPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectStereoToQuadPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectStereoToQuadPreset.InnerSingleton;
}

// Z_Construct_UClass_USubmixEffectTapDelayPreset_NoRegister @ 14f10b2d0

UClass * __cdecl Z_Construct_UClass_USubmixEffectTapDelayPreset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectTapDelayPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SubmixEffectTapDelayPreset",
               &Z_Registration_Info_UClass_USubmixEffectTapDelayPreset.InnerSingleton,
               USubmixEffectTapDelayPreset::StaticRegisterNativesUSubmixEffectTapDelayPreset,0xd8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USubmixEffectTapDelayPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectTapDelayPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectTapDelayPreset.InnerSingleton;
}

// Z_Construct_UClass_USynth2DSlider_NoRegister @ 14f10b390

UClass * __cdecl Z_Construct_UClass_USynth2DSlider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USynth2DSlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"Synth2DSlider",
               &Z_Registration_Info_UClass_USynth2DSlider.InnerSingleton,
               USynth2DSlider::StaticRegisterNativesUSynth2DSlider,0x640,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USynth2DSlider>,
               InternalVTableHelperCtorCaller<USynth2DSlider>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USynth2DSlider.InnerSingleton;
}

// Z_Construct_UClass_USynthComponentMonoWaveTable_NoRegister @ 14f10b450

UClass * __cdecl Z_Construct_UClass_USynthComponentMonoWaveTable_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USynthComponentMonoWaveTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SynthComponentMonoWaveTable",
               &Z_Registration_Info_UClass_USynthComponentMonoWaveTable.InnerSingleton,
               USynthComponentMonoWaveTable::StaticRegisterNativesUSynthComponentMonoWaveTable,
               0x1020,0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USynthComponentMonoWaveTable>,
               InternalVTableHelperCtorCaller<USynthComponentMonoWaveTable>,local_res8,
               USynthComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USynthComponentMonoWaveTable.InnerSingleton;
}

// Z_Construct_UClass_USynthComponentToneGenerator_NoRegister @ 14f10b510

UClass * __cdecl Z_Construct_UClass_USynthComponentToneGenerator_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USynthComponentToneGenerator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SynthComponentToneGenerator",
               &Z_Registration_Info_UClass_USynthComponentToneGenerator.InnerSingleton,
               USynthComponentToneGenerator::StaticRegisterNativesUSynthComponentToneGenerator,0x9b0
               ,0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USynthComponentToneGenerator>,
               InternalVTableHelperCtorCaller<USynthComponentToneGenerator>,local_res8,
               USynthComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USynthComponentToneGenerator.InnerSingleton;
}

// Z_Construct_UClass_USynthKnob_NoRegister @ 14f10b5d0

UClass * __cdecl Z_Construct_UClass_USynthKnob_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USynthKnob.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SynthKnob",
               &Z_Registration_Info_UClass_USynthKnob.InnerSingleton,
               USynthKnob::StaticRegisterNativesUSynthKnob,0x570,0x10,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<USynthKnob>,InternalVTableHelperCtorCaller<USynthKnob>
               ,local_res8,UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USynthKnob.InnerSingleton;
}

// Z_Construct_UClass_USynthSamplePlayer_NoRegister @ 14f10b690

UClass * __cdecl Z_Construct_UClass_USynthSamplePlayer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USynthSamplePlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SynthSamplePlayer",
               &Z_Registration_Info_UClass_USynthSamplePlayer.InnerSingleton,
               USynthSamplePlayer::StaticRegisterNativesUSynthSamplePlayer,0xa00,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USynthSamplePlayer>,
               InternalVTableHelperCtorCaller<USynthSamplePlayer>,local_res8,
               USynthComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USynthSamplePlayer.InnerSingleton;
}

// Z_Construct_UClass_USynthesisUtilitiesBlueprintFunctionLibrary_NoRegister @ 14f10b750

UClass * __cdecl Z_Construct_UClass_USynthesisUtilitiesBlueprintFunctionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USynthesisUtilitiesBlueprintFunctionLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SynthesisUtilitiesBlueprintFunctionLibrary",
               &Z_Registration_Info_UClass_USynthesisUtilitiesBlueprintFunctionLibrary.
                InnerSingleton,
               USynthesisUtilitiesBlueprintFunctionLibrary::
               StaticRegisterNativesUSynthesisUtilitiesBlueprintFunctionLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USynthesisUtilitiesBlueprintFunctionLibrary>,
               InternalVTableHelperCtorCaller<USynthesisUtilitiesBlueprintFunctionLibrary>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USynthesisUtilitiesBlueprintFunctionLibrary.InnerSingleton;
}

// Z_Construct_UScriptStruct_FSynthSlateStyle @ 14f10b810

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSynthSlateStyle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSynthSlateStyle.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSynthSlateStyle.InnerSingleton,
               &Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSynthSlateStyle.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSynthSlateStyle.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// IMPLEMENT_MODULE_Synthesis @ 14f118850

void __cdecl IMPLEMENT_MODULE_Synthesis(void)

{
  return;
}

// StyleInstance'' @ 150471ba0

void __cdecl `dynamic_atexit_destructor_for_'FSynthSlateStyleSet::StyleInstance__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FSynthSlateStyleSet::StyleInstance.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableHardwareConvolution'' @ 150471bc0

void __cdecl _dynamic_atexit_destructor_for__CVarDisableHardwareConvolution__(void)

{
  CVarDisableHardwareConvolution._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDisableHardwareConvolution);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 150471be0

void __cdecl
`FSynth2DSliderStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__(void)

{
  ::Default._0_8_ = &___7FSynth2DSliderStyle__6B_;
  ::Default.BackgroundImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.BackgroundImage.ResourceHandle.Data.SharedReferenceCount.ReferenceController)
  ;
  ::Default.DisabledBarImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.DisabledBarImage.ResourceHandle.Data.SharedReferenceCount.ReferenceController
            );
  ::Default.NormalBarImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.NormalBarImage.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  ::Default.DisabledThumbImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.DisabledThumbImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  ::Default.NormalThumbImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.NormalThumbImage.ResourceHandle.Data.SharedReferenceCount.ReferenceController
            );
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 150471c80

void __cdecl `FSynthKnobStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__(void)

{
  ::Default._padding_ = (longlong)&___7FSynthKnobStyle__6B_;
  ::Default.MediumKnobOverlay._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.MediumKnobOverlay.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  ::Default.MediumKnob._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.MediumKnob.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  ::Default.LargeKnobOverlay._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.LargeKnobOverlay.ResourceHandle.Data.SharedReferenceCount.ReferenceController
            );
  ::Default.LargeKnob._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.LargeKnob.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 150471d00

void __cdecl `FSynthSlateStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__(void)

{
  ::Default._padding_ = (longlong)&___7FSynthSlateStyle__6B_;
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
  return;
}

// `dynamic_atexit_destructor_for_'Digitpattern'' @ 150471d20

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
`ISynthSlateResources::GetNumberForImageName'::__l2::_dynamic_atexit_destructor_for__Digitpattern__
          (void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (Digitpattern.Implementation.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'EmptyArray'' @ 150471d40

void __cdecl
`Audio::FSimpleUpmixer::GetPairedRearChannelIndices'::__l2::
_dynamic_atexit_destructor_for__EmptyArray__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::EmptyArray.AllocatorInstance.Data;
  if (::EmptyArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::EmptyArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'FrontChannels'' @ 150471d60

void __cdecl
Audio::SubmixChannelFormatConverterPrivate::_dynamic_atexit_destructor_for__FrontChannels__(void)

{
  FrontChannels.HashSize = 0;
  if (FrontChannels.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FrontChannels.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<enum_EAudioMixerChannel::Type>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<enum_EAudioMixerChannel::Type>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&FrontChannels);
  return;
}

// `dynamic_atexit_destructor_for_'LogSynthesis'' @ 150471da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogSynthesis__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSynthesis);
  return;
}

// `dynamic_atexit_destructor_for_'LogTapDelay'' @ 150471dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogTapDelay__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogTapDelay);
  return;
}

// `dynamic_atexit_destructor_for_'PairedFlippedRearChannelTypes'' @ 150471de0

void __cdecl
Audio::SubmixChannelFormatConverterPrivate::
_dynamic_atexit_destructor_for__PairedFlippedRearChannelTypes__(void)

{
  PairedFlippedRearChannelTypes._72_4_ = 0;
  if (PairedFlippedRearChannelTypes._64_8_ != 0) {
    FMemory::Free((void *)PairedFlippedRearChannelTypes._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EAudioMixerChannel::Type,TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EAudioMixerChannel::Type,TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&PairedFlippedRearChannelTypes);
  return;
}

// `dynamic_atexit_destructor_for_'PairedRearChannelTypes'' @ 150471e20

void __cdecl
Audio::SubmixChannelFormatConverterPrivate::_dynamic_atexit_destructor_for__PairedRearChannelTypes__
          (void)

{
  PairedRearChannelTypes._72_4_ = 0;
  if (PairedRearChannelTypes._64_8_ != 0) {
    FMemory::Free((void *)PairedRearChannelTypes._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EAudioMixerChannel::Type,TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EAudioMixerChannel::Type,TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&PairedRearChannelTypes);
  return;
}

// `dynamic_atexit_destructor_for_'Resources'' @ 150471e60

void __cdecl _dynamic_atexit_destructor_for__Resources__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (Resources.DefaultMediumKnobOverlay.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (Resources.DefaultMediumKnob.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (Resources.DefaultLargeKnobOverlay.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (Resources.DefaultLargeKnob.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'ReverbOutputFormats'' @ 150471ea0

void __cdecl
Audio::ConvolutionReverbIntrinsics::_dynamic_atexit_destructor_for__ReverbOutputFormats__(void)

{
  DestructItems<TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>,int>
            ((TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *)
             ReverbOutputFormats.AllocatorInstance.Data,ReverbOutputFormats.ArrayNum);
  if (ReverbOutputFormats.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(ReverbOutputFormats.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'SourceEffectEnvFollowerNotifier'' @ 150471ee0

void __cdecl _dynamic_atexit_destructor_for__SourceEffectEnvFollowerNotifier__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (SourceEffectEnvFollowerNotifier.SharedReferenceCount.ReferenceController);
  return;
}

