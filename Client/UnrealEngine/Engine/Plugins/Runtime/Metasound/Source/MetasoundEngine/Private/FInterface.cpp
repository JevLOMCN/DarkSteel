// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 10

// FInterface @ 14b346300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInterface * __thiscall
`Metasound::Engine::InputFormatFiveDotOneInterface::CreateInterface'::__l2::FInterface::FInterface
          (void *this)

{
  ForAnyElementType *pFVar1;
  longlong *plVar2;
  FName FVar3;
  FName FVar4;
  FMetasoundFrontendVersion *pFVar5;
  FVersion FVar6;
  UClass *pUVar7;
  FName *pFVar8;
  FText *pFVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStackY_5e8 [32];
  ForAnyElementType local_5a8;
  undefined8 local_5a0;
  initializer_list<Audio::FParameterInterface::FInput> local_598;
  FTopLevelAssetPath local_588;
  undefined2 local_578;
  undefined1 auStack_576 [6];
  FName FStack_570;
  undefined4 local_568;
  undefined2 uStack_564;
  undefined2 uStack_562;
  FInput local_558;
  FText local_478;
  FText local_468;
  FName local_458;
  FName local_450;
  undefined4 local_448;
  undefined1 local_444;
  undefined4 local_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined1 local_3d0;
  undefined8 local_3cc;
  undefined8 local_3c0;
  undefined8 local_3b8;
  ITextData *local_3b0;
  uint local_3a8;
  undefined4 local_3a0;
  FText local_398;
  FText local_388;
  FName local_378;
  FName local_370;
  undefined4 local_368;
  undefined1 local_364;
  undefined4 local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined1 local_2f0;
  undefined8 local_2ec;
  undefined8 local_2e0;
  undefined8 local_2d8;
  ITextData *local_2d0;
  uint local_2c8;
  undefined4 local_2c0;
  FText local_2b8;
  FText local_2a8;
  FName local_298;
  FName local_290;
  undefined4 local_288;
  undefined1 local_284;
  undefined4 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined1 local_210;
  undefined8 local_20c;
  undefined8 local_200;
  undefined8 local_1f8;
  ITextData *local_1f0;
  uint local_1e8;
  undefined4 local_1e0;
  FText local_1d8;
  FText local_1c8;
  FName local_1b8;
  FName local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a4;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_130;
  undefined8 local_12c;
  undefined8 local_120;
  undefined8 local_118;
  ITextData *local_110;
  uint local_108;
  undefined4 local_100;
  FText local_f8;
  FText local_e8;
  FName local_d8;
  FName local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_4c;
  undefined8 local_40;
  undefined8 local_38;
  ITextData *local_30;
  uint local_28;
  undefined4 local_20;
  TRefCountPtr<ITextData> local_18;
  
  local_18.Reference = (ITextData *)(__security_cookie.value ^ (ulonglong)auStackY_5e8);
  pFVar5 = Metasound::Engine::InputFormatFiveDotOneInterface::GetVersion();
  FVar6 = FMetasoundFrontendVersionNumber::ToInterfaceVersion(&pFVar5->Number);
  pFVar5 = Metasound::Engine::InputFormatFiveDotOneInterface::GetVersion();
  Audio::FParameterInterface::FParameterInterface(this,pFVar5->Name,(FVersion *)FVar6);
  pUVar7 = UMetaSoundPatch::StaticClass();
  UStruct::GetStructPathName((UStruct *)pUVar7,&local_588);
  local_578 = 1;
  pUVar7 = UMetaSoundSource::StaticClass();
  UStruct::GetStructPathName((UStruct *)pUVar7,(FTopLevelAssetPath *)(auStack_576 + 2));
  uStack_564 = 0;
  local_5a8.Data = (FScriptContainerElement *)0x0;
  local_5a0 = CONCAT44(local_5a0._4_4_,2);
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x14,4,2,0,&local_5a8,2,(int *)((longlong)&local_5a0 + 4));
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x40);
  *(FName *)local_5a8.Data = local_588.PackageName;
  *(FName *)(local_5a8.Data + 8) = local_588.AssetName;
  FVar3._2_6_ = auStack_576;
  FVar3.ComparisonIndex.Value._0_2_ = local_578;
  *(FName *)(local_5a8.Data + 0x10) = FVar3;
  *(FName *)(local_5a8.Data + 0x18) = FStack_570;
  FVar4.Number._0_2_ = uStack_564;
  FVar4.ComparisonIndex.Value = local_568;
  FVar4.Number._2_2_ = uStack_562;
  *(FName *)(local_5a8.Data + 0x20) = FVar4;
  if (pFVar1 != &local_5a8) {
    if (pFVar1->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1->Data);
    }
    pFVar1->Data = local_5a8.Data;
    *(undefined4 *)((longlong)this + 0x48) = (undefined4)local_5a0;
    *(undefined4 *)((longlong)this + 0x4c) = local_5a0._4_4_;
    local_5a0 = 0;
    local_5a8.Data = (FScriptContainerElement *)0x0;
  }
  if ((FName *)local_5a8.Data != (FName *)0x0) {
    FMemory::Free(local_5a8.Data);
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_558.DisplayName,L"MetasoundEngine",
             L"InputFormatFiveDotOneInterfaceInputFrontLeftName",L"In Front Left");
  FText::AsLocalizable_Advanced_LocText
            (&local_558.Description,L"MetasoundEngine",L"FiveDotOneIn_FrontLeft_AudioDescription",
             L"Front Left input audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_558.DataType = *pFVar8;
  local_558.InitValue.ParamName =
       Metasound::Engine::InputFormatFiveDotOneInterface::Inputs::FrontLeftIn;
  local_558.InitValue.FloatParam = 0.0;
  local_558.InitValue.BoolParam = false;
  local_558.InitValue.IntParam = 0;
  local_558.InitValue.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_558.InitValue.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_558.InitValue.StringParam.Data.ArrayNum = 0;
  local_558.InitValue.StringParam.Data.ArrayMax = 0;
  local_558.InitValue.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_558.InitValue.ArrayFloatParam.ArrayNum = 0;
  local_558.InitValue.ArrayFloatParam.ArrayMax = 0;
  local_558.InitValue.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_558.InitValue.ArrayBoolParam.ArrayNum = 0;
  local_558.InitValue.ArrayBoolParam.ArrayMax = 0;
  local_558.InitValue.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_558.InitValue.ArrayIntParam.ArrayNum = 0;
  local_558.InitValue.ArrayIntParam.ArrayMax = 0;
  local_558.InitValue.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_558.InitValue.ArrayObjectParam.ArrayNum = 0;
  local_558.InitValue.ArrayObjectParam.ArrayMax = 0;
  local_558.InitValue.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_558.InitValue.ArrayStringParam.ArrayNum = 0;
  local_558.InitValue.ArrayStringParam.ArrayMax = 0;
  local_558.InitValue.ParamType = None;
  local_558.InitValue.TypeName.ComparisonIndex.Value = 0;
  local_558.InitValue.TypeName.Number = 0;
  local_558.InitValue.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_558.InitValue.ObjectProxies.ArrayNum = 0;
  local_558.InitValue.ObjectProxies.ArrayMax = 0;
  pFVar9 = FText::GetEmpty();
  local_558.RequiredText.TextData.Reference = (pFVar9->TextData).Reference;
  if (local_558.RequiredText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_558.RequiredText.TextData.Reference + 8))
              (local_558.RequiredText.TextData.Reference,&local_598);
  }
  local_558.RequiredText.Flags = pFVar9->Flags;
  local_558.SortOrderIndex = 100;
  FText::AsLocalizable_Advanced_LocText
            (&local_478,L"MetasoundEngine",L"InputFormatFiveDotOneInterfaceInputFrontRightName",
             L"In Front Right");
  FText::AsLocalizable_Advanced_LocText
            (&local_468,L"MetasoundEngine",L"FiveDotOneIn_FrontRight_AudioDescription",
             L"Front Right input audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_458 = *pFVar8;
  local_450 = Metasound::Engine::InputFormatFiveDotOneInterface::Inputs::FrontRightIn;
  local_448 = 0;
  local_444 = 0;
  local_440 = 0;
  local_438 = 0;
  uStack_430 = 0;
  local_428 = 0;
  local_420 = 0;
  local_418 = 0;
  local_410 = 0;
  local_408 = 0;
  local_400 = 0;
  local_3f8 = 0;
  local_3f0 = 0;
  local_3e8 = 0;
  local_3e0 = 0;
  local_3d8 = 0;
  local_3d0 = 0;
  local_3cc = 0;
  local_3c0 = 0;
  local_3b8 = 0;
  pFVar9 = FText::GetEmpty();
  local_3b0 = (pFVar9->TextData).Reference;
  if (local_3b0 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3b0 + 8))(local_3b0,&local_598);
  }
  local_3a8 = pFVar9->Flags;
  local_3a0 = 0x65;
  FText::AsLocalizable_Advanced_LocText
            (&local_398,L"MetasoundEngine",L"InputFormatFiveDotOneInterfaceInputFrontCenterName",
             L"In Front Center");
  FText::AsLocalizable_Advanced_LocText
            (&local_388,L"MetasoundEngine",L"FiveDotOneIn_FrontCenter_AudioDescription",
             L"Front Center input audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_378 = *pFVar8;
  local_370 = Metasound::Engine::InputFormatFiveDotOneInterface::Inputs::FrontCenterIn;
  local_368 = 0;
  local_364 = 0;
  local_360 = 0;
  local_358 = 0;
  uStack_350 = 0;
  local_348 = 0;
  local_340 = 0;
  local_338 = 0;
  local_330 = 0;
  local_328 = 0;
  local_320 = 0;
  local_318 = 0;
  local_310 = 0;
  local_308 = 0;
  local_300 = 0;
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  pFVar9 = FText::GetEmpty();
  local_2d0 = (pFVar9->TextData).Reference;
  if (local_2d0 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2d0 + 8))(local_2d0,&local_598);
  }
  local_2c8 = pFVar9->Flags;
  local_2c0 = 0x66;
  FText::AsLocalizable_Advanced_LocText
            (&local_2b8,L"MetasoundEngine",L"InputFormatFiveDotOneInterfaceInputLowFrequencyName",
             L"In Low Frequency");
  FText::AsLocalizable_Advanced_LocText
            (&local_2a8,L"MetasoundEngine",L"FiveDotOneIn_LowFrequency_AudioDescription",
             L"Low Frequency input audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_298 = *pFVar8;
  local_290 = Metasound::Engine::InputFormatFiveDotOneInterface::Inputs::LowFrequencyIn;
  local_288 = 0;
  local_284 = 0;
  local_280 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_268 = 0;
  local_260 = 0;
  local_258 = 0;
  local_250 = 0;
  local_248 = 0;
  local_240 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_20c = 0;
  local_200 = 0;
  local_1f8 = 0;
  pFVar9 = FText::GetEmpty();
  local_1f0 = (pFVar9->TextData).Reference;
  if (local_1f0 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1f0 + 8))(local_1f0,&local_598);
  }
  local_1e8 = pFVar9->Flags;
  local_1e0 = 0x67;
  FText::AsLocalizable_Advanced_LocText
            (&local_1d8,L"MetasoundEngine",L"InputFormatFiveDotOneInterfaceInputSideLeftName",
             L"In Side Left");
  FText::AsLocalizable_Advanced_LocText
            (&local_1c8,L"MetasoundEngine",L"FiveDotOneIn_SideLeft_AudioDescription",
             L"Side Left input audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_1b8 = *pFVar8;
  local_1b0 = Metasound::Engine::InputFormatFiveDotOneInterface::Inputs::SideLeftIn;
  local_1a8 = 0;
  local_1a4 = 0;
  local_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_12c = 0;
  local_120 = 0;
  local_118 = 0;
  pFVar9 = FText::GetEmpty();
  local_110 = (pFVar9->TextData).Reference;
  if (local_110 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_110 + 8))(local_110,&local_598);
  }
  local_108 = pFVar9->Flags;
  local_100 = 0x68;
  FText::AsLocalizable_Advanced_LocText
            (&local_f8,L"MetasoundEngine",L"InputFormatFiveDotOneInterfaceInputSideRightName",
             L"In Side Right");
  FText::AsLocalizable_Advanced_LocText
            (&local_e8,L"MetasoundEngine",L"FiveDotOneIn_SideRight_AudioDescription",
             L"Side Right input audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_d8 = *pFVar8;
  local_d0 = Metasound::Engine::InputFormatFiveDotOneInterface::Inputs::SideRightIn;
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0;
  local_40 = 0;
  local_38 = 0;
  pFVar9 = FText::GetEmpty();
  local_30 = (pFVar9->TextData).Reference;
  if (local_30 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_30 + 8))(local_30,&local_598);
  }
  local_28 = pFVar9->Flags;
  local_598._First = &local_558;
  local_20 = 0x69;
  local_598._Last = (FInput *)&stack0xffffffffffffffe8;
  TArray<Audio::FParameterInterface::FInput,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Audio::FParameterInterface::FInput,TSizedDefaultAllocator<32>_> *)
             ((longlong)this + 0x10),&local_598);
  lVar11 = 6;
  plVar10 = (longlong *)&stack0xffffffffffffffe8;
  do {
    lVar11 = lVar11 + -1;
    if ((longlong *)plVar10[-3] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar10[-3] + 0x10))();
    }
    FAudioParameter::~FAudioParameter((FAudioParameter *)(plVar10 + -0x17));
    if ((longlong *)plVar10[-0x1a] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar10[-0x1a] + 0x10))();
    }
    plVar2 = (longlong *)plVar10[-0x1c];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    plVar10 = plVar10 + -0x1c;
  } while (lVar11 != 0);
  return this;
}

// FInterface @ 14b346b70

FInterface * __thiscall
`Metasound::Engine::InputFormatMonoInterface::CreateInterface'::__l2::FInterface::FInterface
          (void *this)

{
  ForAnyElementType *pFVar1;
  FName FVar2;
  FName FVar3;
  FMetasoundFrontendVersion *pFVar4;
  FVersion FVar5;
  UClass *pUVar6;
  FName *pFVar7;
  ForAnyElementType local_138;
  undefined8 local_130;
  FTopLevelAssetPath local_128;
  undefined2 local_118;
  undefined1 auStack_116 [6];
  FName FStack_110;
  undefined4 local_108;
  undefined2 uStack_104;
  undefined2 uStack_102;
  initializer_list<Audio::FParameterInterface::FInput> local_f8;
  FInput local_e8;
  
  pFVar4 = Metasound::Engine::InputFormatMonoInterface::GetVersion();
  FVar5 = FMetasoundFrontendVersionNumber::ToInterfaceVersion(&pFVar4->Number);
  pFVar4 = Metasound::Engine::InputFormatMonoInterface::GetVersion();
  Audio::FParameterInterface::FParameterInterface(this,pFVar4->Name,(FVersion *)FVar5);
  pUVar6 = UMetaSoundPatch::StaticClass();
  UStruct::GetStructPathName((UStruct *)pUVar6,&local_128);
  local_118 = 1;
  pUVar6 = UMetaSoundSource::StaticClass();
  UStruct::GetStructPathName((UStruct *)pUVar6,(FTopLevelAssetPath *)(auStack_116 + 2));
  uStack_104 = 0;
  local_138.Data = (FScriptContainerElement *)0x0;
  local_130 = CONCAT44(local_130._4_4_,2);
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x14,4,2,0,&local_138,2,(int *)((longlong)&local_130 + 4));
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x40);
  *(FName *)local_138.Data = local_128.PackageName;
  *(FName *)(local_138.Data + 8) = local_128.AssetName;
  FVar2._2_6_ = auStack_116;
  FVar2.ComparisonIndex.Value._0_2_ = local_118;
  *(FName *)(local_138.Data + 0x10) = FVar2;
  *(FName *)(local_138.Data + 0x18) = FStack_110;
  FVar3.Number._0_2_ = uStack_104;
  FVar3.ComparisonIndex.Value = local_108;
  FVar3.Number._2_2_ = uStack_102;
  *(FName *)(local_138.Data + 0x20) = FVar3;
  if (pFVar1 != &local_138) {
    if (pFVar1->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1->Data);
    }
    pFVar1->Data = local_138.Data;
    *(undefined4 *)((longlong)this + 0x48) = (undefined4)local_130;
    *(undefined4 *)((longlong)this + 0x4c) = local_130._4_4_;
    local_130 = 0;
    local_138.Data = (FScriptContainerElement *)0x0;
  }
  if ((FName *)local_138.Data != (FName *)0x0) {
    FMemory::Free(local_138.Data);
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_e8.DisplayName,L"MetasoundEngine",L"InputFormatMonoInterfaceInputName",
             L"In Mono");
  FText::AsLocalizable_Advanced_LocText
            (&local_e8.Description,L"MetasoundEngine",
             L"OutputFormatStereoInterface_RightDescription",L"Mono input audio.");
  pFVar7 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_e8.DataType = *pFVar7;
  local_e8.InitValue.ParamName = Metasound::Engine::InputFormatMonoInterface::Inputs::MonoIn;
  local_e8.InitValue.FloatParam = 0.0;
  local_e8.InitValue.BoolParam = false;
  local_e8.InitValue.IntParam = 0;
  local_e8.InitValue.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_e8.InitValue.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.InitValue.StringParam.Data.ArrayNum = 0;
  local_e8.InitValue.StringParam.Data.ArrayMax = 0;
  local_e8.InitValue.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.InitValue.ArrayFloatParam.ArrayNum = 0;
  local_e8.InitValue.ArrayFloatParam.ArrayMax = 0;
  local_e8.InitValue.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.InitValue.ArrayBoolParam.ArrayNum = 0;
  local_e8.InitValue.ArrayBoolParam.ArrayMax = 0;
  local_e8.InitValue.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.InitValue.ArrayIntParam.ArrayNum = 0;
  local_e8.InitValue.ArrayIntParam.ArrayMax = 0;
  local_e8.InitValue.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.InitValue.ArrayObjectParam.ArrayNum = 0;
  local_e8.InitValue.ArrayObjectParam.ArrayMax = 0;
  local_e8.InitValue.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.InitValue.ArrayStringParam.ArrayNum = 0;
  local_e8.InitValue.ArrayStringParam.ArrayMax = 0;
  local_e8.InitValue.ParamType = None;
  local_e8.InitValue.TypeName.ComparisonIndex.Value = 0;
  local_e8.InitValue.TypeName.Number = 0;
  local_e8.InitValue.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.InitValue.ObjectProxies.ArrayNum = 0;
  local_e8.InitValue.ObjectProxies.ArrayMax = 0;
  FText::FText(&local_e8.RequiredText);
  local_f8._First = &local_e8;
  local_e8.SortOrderIndex = 0;
  local_f8._Last = (FInput *)&stack0xfffffffffffffff8;
  TArray<Audio::FParameterInterface::FInput,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Audio::FParameterInterface::FInput,TSizedDefaultAllocator<32>_> *)
             ((longlong)this + 0x10),&local_f8);
  if (local_e8.RequiredText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.RequiredText.TextData.Reference + 0x10))();
  }
  FAudioParameter::~FAudioParameter(&local_e8.InitValue);
  if (local_e8.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.Description.TextData.Reference + 0x10))();
  }
  if (local_e8.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.DisplayName.TextData.Reference + 0x10))();
  }
  return this;
}

// FInterface @ 14b346dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInterface * __thiscall
`Metasound::Engine::InputFormatQuadInterface::CreateInterface'::__l2::FInterface::FInterface
          (void *this)

{
  ForAnyElementType *pFVar1;
  longlong *plVar2;
  FName FVar3;
  FName FVar4;
  FMetasoundFrontendVersion *pFVar5;
  FVersion FVar6;
  UClass *pUVar7;
  FName *pFVar8;
  FText *pFVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStackY_438 [32];
  ForAnyElementType local_3f8;
  undefined8 local_3f0;
  initializer_list<Audio::FParameterInterface::FInput> local_3e8;
  FTopLevelAssetPath local_3d8;
  undefined2 local_3c8;
  undefined1 auStack_3c6 [6];
  FName FStack_3c0;
  undefined4 local_3b8;
  undefined2 uStack_3b4;
  undefined2 uStack_3b2;
  FInput local_3a8;
  FText local_2c8;
  FText local_2b8;
  FName local_2a8;
  FName local_2a0;
  undefined4 local_298;
  undefined1 local_294;
  undefined4 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined1 local_220;
  undefined8 local_21c;
  undefined8 local_210;
  undefined8 local_208;
  ITextData *local_200;
  uint local_1f8;
  undefined4 local_1f0;
  FText local_1e8;
  FText local_1d8;
  FName local_1c8;
  FName local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b4;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined8 local_13c;
  undefined8 local_130;
  undefined8 local_128;
  ITextData *local_120;
  uint local_118;
  undefined4 local_110;
  FText local_108;
  FText local_f8;
  FName local_e8;
  FName local_e0;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_5c;
  undefined8 local_50;
  undefined8 local_48;
  ITextData *local_40;
  uint local_38;
  undefined4 local_30;
  TRefCountPtr<ITextData> local_28;
  
  local_28.Reference = (ITextData *)(__security_cookie.value ^ (ulonglong)auStackY_438);
  pFVar5 = Metasound::Engine::InputFormatQuadInterface::GetVersion();
  FVar6 = FMetasoundFrontendVersionNumber::ToInterfaceVersion(&pFVar5->Number);
  pFVar5 = Metasound::Engine::InputFormatQuadInterface::GetVersion();
  Audio::FParameterInterface::FParameterInterface(this,pFVar5->Name,(FVersion *)FVar6);
  pUVar7 = UMetaSoundPatch::StaticClass();
  UStruct::GetStructPathName((UStruct *)pUVar7,&local_3d8);
  local_3c8 = 1;
  pUVar7 = UMetaSoundSource::StaticClass();
  UStruct::GetStructPathName((UStruct *)pUVar7,(FTopLevelAssetPath *)(auStack_3c6 + 2));
  uStack_3b4 = 0;
  lVar11 = 4;
  local_3f8.Data = (FScriptContainerElement *)0x0;
  local_3f0 = CONCAT44(local_3f0._4_4_,2);
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x14,4,2,0,&local_3f8,2,(int *)((longlong)&local_3f0 + 4));
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x40);
  *(FName *)local_3f8.Data = local_3d8.PackageName;
  *(FName *)(local_3f8.Data + 8) = local_3d8.AssetName;
  FVar3._2_6_ = auStack_3c6;
  FVar3.ComparisonIndex.Value._0_2_ = local_3c8;
  *(FName *)(local_3f8.Data + 0x10) = FVar3;
  *(FName *)(local_3f8.Data + 0x18) = FStack_3c0;
  FVar4.Number._0_2_ = uStack_3b4;
  FVar4.ComparisonIndex.Value = local_3b8;
  FVar4.Number._2_2_ = uStack_3b2;
  *(FName *)(local_3f8.Data + 0x20) = FVar4;
  if (pFVar1 != &local_3f8) {
    if (pFVar1->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1->Data);
    }
    pFVar1->Data = local_3f8.Data;
    *(undefined4 *)((longlong)this + 0x48) = (undefined4)local_3f0;
    *(undefined4 *)((longlong)this + 0x4c) = local_3f0._4_4_;
    local_3f0 = 0;
    local_3f8.Data = (FScriptContainerElement *)0x0;
  }
  if ((FName *)local_3f8.Data != (FName *)0x0) {
    FMemory::Free(local_3f8.Data);
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_3a8.DisplayName,L"MetasoundEngine",L"InputFormatQuadInterfaceInputFrontLeftName"
             ,L"In Front Left");
  FText::AsLocalizable_Advanced_LocText
            (&local_3a8.Description,L"MetasoundEngine",L"QuadIn_FrontLeft_AudioDescription",
             L"Front Left input audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_3a8.DataType = *pFVar8;
  local_3a8.InitValue.ParamName = Metasound::Engine::InputFormatQuadInterface::Inputs::FrontLeftIn;
  local_3a8.InitValue.FloatParam = 0.0;
  local_3a8.InitValue.BoolParam = false;
  local_3a8.InitValue.IntParam = 0;
  local_3a8.InitValue.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_3a8.InitValue.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a8.InitValue.StringParam.Data.ArrayNum = 0;
  local_3a8.InitValue.StringParam.Data.ArrayMax = 0;
  local_3a8.InitValue.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a8.InitValue.ArrayFloatParam.ArrayNum = 0;
  local_3a8.InitValue.ArrayFloatParam.ArrayMax = 0;
  local_3a8.InitValue.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a8.InitValue.ArrayBoolParam.ArrayNum = 0;
  local_3a8.InitValue.ArrayBoolParam.ArrayMax = 0;
  local_3a8.InitValue.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a8.InitValue.ArrayIntParam.ArrayNum = 0;
  local_3a8.InitValue.ArrayIntParam.ArrayMax = 0;
  local_3a8.InitValue.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a8.InitValue.ArrayObjectParam.ArrayNum = 0;
  local_3a8.InitValue.ArrayObjectParam.ArrayMax = 0;
  local_3a8.InitValue.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a8.InitValue.ArrayStringParam.ArrayNum = 0;
  local_3a8.InitValue.ArrayStringParam.ArrayMax = 0;
  local_3a8.InitValue.ParamType = None;
  local_3a8.InitValue.TypeName.ComparisonIndex.Value = 0;
  local_3a8.InitValue.TypeName.Number = 0;
  local_3a8.InitValue.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a8.InitValue.ObjectProxies.ArrayNum = 0;
  local_3a8.InitValue.ObjectProxies.ArrayMax = 0;
  pFVar9 = FText::GetEmpty();
  local_3a8.RequiredText.TextData.Reference = (pFVar9->TextData).Reference;
  if (local_3a8.RequiredText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3a8.RequiredText.TextData.Reference + 8))
              (local_3a8.RequiredText.TextData.Reference,&local_3e8);
  }
  local_3a8.RequiredText.Flags = pFVar9->Flags;
  local_3a8.SortOrderIndex = 100;
  FText::AsLocalizable_Advanced_LocText
            (&local_2c8,L"MetasoundEngine",L"InputFormatQuadInterfaceInputFrontRightName",
             L"In Front Right");
  FText::AsLocalizable_Advanced_LocText
            (&local_2b8,L"MetasoundEngine",L"QuadIn_FrontRight_AudioDescription",
             L"Front Right input audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_2a8 = *pFVar8;
  local_2a0 = Metasound::Engine::InputFormatQuadInterface::Inputs::FrontRightIn;
  local_298 = 0;
  local_294 = 0;
  local_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  local_270 = 0;
  local_268 = 0;
  local_260 = 0;
  local_258 = 0;
  local_250 = 0;
  local_248 = 0;
  local_240 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_21c = 0;
  local_210 = 0;
  local_208 = 0;
  pFVar9 = FText::GetEmpty();
  local_200 = (pFVar9->TextData).Reference;
  if (local_200 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_200 + 8))(local_200,&local_3e8);
  }
  local_1f8 = pFVar9->Flags;
  local_1f0 = 0x65;
  FText::AsLocalizable_Advanced_LocText
            (&local_1e8,L"MetasoundEngine",L"InputFormatQuadInterfaceInputSideLeftName",
             L"In Side Left");
  FText::AsLocalizable_Advanced_LocText
            (&local_1d8,L"MetasoundEngine",L"QuadIn_SideLeft_AudioDescription",
             L"Side Left input audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_1c8 = *pFVar8;
  local_1c0 = Metasound::Engine::InputFormatQuadInterface::Inputs::SideLeftIn;
  local_1b8 = 0;
  local_1b4 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_13c = 0;
  local_130 = 0;
  local_128 = 0;
  pFVar9 = FText::GetEmpty();
  local_120 = (pFVar9->TextData).Reference;
  if (local_120 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_120 + 8))(local_120,&local_3e8);
  }
  local_118 = pFVar9->Flags;
  local_110 = 0x68;
  FText::AsLocalizable_Advanced_LocText
            (&local_108,L"MetasoundEngine",L"InputFormatQuadInterfaceInputSideRightName",
             L"In Side Right");
  FText::AsLocalizable_Advanced_LocText
            (&local_f8,L"MetasoundEngine",L"QuadIn_SideRight_AudioDescription",
             L"Side Right input audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_e8 = *pFVar8;
  local_e0 = Metasound::Engine::InputFormatQuadInterface::Inputs::SideRightIn;
  local_d8 = 0;
  local_d4 = 0;
  local_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0;
  local_50 = 0;
  local_48 = 0;
  pFVar9 = FText::GetEmpty();
  local_40 = (pFVar9->TextData).Reference;
  if (local_40 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40 + 8))(local_40,&local_3e8);
  }
  local_38 = pFVar9->Flags;
  local_3e8._First = &local_3a8;
  local_30 = 0x69;
  local_3e8._Last = (FInput *)&stack0xffffffffffffffd8;
  TArray<Audio::FParameterInterface::FInput,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Audio::FParameterInterface::FInput,TSizedDefaultAllocator<32>_> *)
             ((longlong)this + 0x10),&local_3e8);
  plVar10 = (longlong *)&stack0xffffffffffffffd8;
  do {
    lVar11 = lVar11 + -1;
    if ((longlong *)plVar10[-3] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar10[-3] + 0x10))();
    }
    FAudioParameter::~FAudioParameter((FAudioParameter *)(plVar10 + -0x17));
    if ((longlong *)plVar10[-0x1a] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar10[-0x1a] + 0x10))();
    }
    plVar2 = (longlong *)plVar10[-0x1c];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    plVar10 = plVar10 + -0x1c;
  } while (lVar11 != 0);
  return this;
}

// FInterface @ 14b347400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInterface * __thiscall
`Metasound::Engine::InputFormatSevenDotOneInterface::CreateInterface'::__l2::FInterface::FInterface
          (void *this)

{
  ForAnyElementType *pFVar1;
  longlong *plVar2;
  FName FVar3;
  FName FVar4;
  FMetasoundFrontendVersion *pFVar5;
  FVersion FVar6;
  UClass *pUVar7;
  FName *pFVar8;
  FText *pFVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStackY_7a8 [32];
  ForAnyElementType local_768;
  undefined8 local_760;
  initializer_list<Audio::FParameterInterface::FInput> local_758;
  FTopLevelAssetPath local_748;
  undefined2 local_738;
  undefined1 auStack_736 [6];
  FName FStack_730;
  undefined4 local_728;
  undefined2 uStack_724;
  undefined2 uStack_722;
  FInput local_718;
  FText local_638;
  FText local_628;
  FName local_618;
  FName local_610;
  undefined4 local_608;
  undefined1 local_604;
  undefined4 local_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 local_5e0;
  undefined8 local_5d8;
  undefined8 local_5d0;
  undefined8 local_5c8;
  undefined8 local_5c0;
  undefined8 local_5b8;
  undefined8 local_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined1 local_590;
  undefined8 local_58c;
  undefined8 local_580;
  undefined8 local_578;
  ITextData *local_570;
  uint local_568;
  undefined4 local_560;
  FText local_558;
  FText local_548;
  FName local_538;
  FName local_530;
  undefined4 local_528;
  undefined1 local_524;
  undefined4 local_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined1 local_4b0;
  undefined8 local_4ac;
  undefined8 local_4a0;
  undefined8 local_498;
  ITextData *local_490;
  uint local_488;
  undefined4 local_480;
  FText local_478;
  FText local_468;
  FName local_458;
  FName local_450;
  undefined4 local_448;
  undefined1 local_444;
  undefined4 local_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined1 local_3d0;
  undefined8 local_3cc;
  undefined8 local_3c0;
  undefined8 local_3b8;
  ITextData *local_3b0;
  uint local_3a8;
  undefined4 local_3a0;
  FText local_398;
  FText local_388;
  FName local_378;
  FName local_370;
  undefined4 local_368;
  undefined1 local_364;
  undefined4 local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined1 local_2f0;
  undefined8 local_2ec;
  undefined8 local_2e0;
  undefined8 local_2d8;
  ITextData *local_2d0;
  uint local_2c8;
  undefined4 local_2c0;
  FText local_2b8;
  FText local_2a8;
  FName local_298;
  FName local_290;
  undefined4 local_288;
  undefined1 local_284;
  undefined4 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined1 local_210;
  undefined8 local_20c;
  undefined8 local_200;
  undefined8 local_1f8;
  ITextData *local_1f0;
  uint local_1e8;
  undefined4 local_1e0;
  FText local_1d8;
  FText local_1c8;
  FName local_1b8;
  FName local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a4;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_130;
  undefined8 local_12c;
  undefined8 local_120;
  undefined8 local_118;
  ITextData *local_110;
  uint local_108;
  undefined4 local_100;
  FText local_f8;
  FText local_e8;
  FName local_d8;
  FName local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_4c;
  undefined8 local_40;
  undefined8 local_38;
  ITextData *local_30;
  uint local_28;
  undefined4 local_20;
  TRefCountPtr<ITextData> local_18;
  
  local_18.Reference = (ITextData *)(__security_cookie.value ^ (ulonglong)auStackY_7a8);
  pFVar5 = Metasound::Engine::InputFormatSevenDotOneInterface::GetVersion();
  FVar6 = FMetasoundFrontendVersionNumber::ToInterfaceVersion(&pFVar5->Number);
  pFVar5 = Metasound::Engine::InputFormatSevenDotOneInterface::GetVersion();
  Audio::FParameterInterface::FParameterInterface(this,pFVar5->Name,(FVersion *)FVar6);
  pUVar7 = UMetaSoundPatch::StaticClass();
  UStruct::GetStructPathName((UStruct *)pUVar7,&local_748);
  local_738 = 1;
  pUVar7 = UMetaSoundSource::StaticClass();
  UStruct::GetStructPathName((UStruct *)pUVar7,(FTopLevelAssetPath *)(auStack_736 + 2));
  uStack_724 = 0;
  local_768.Data = (FScriptContainerElement *)0x0;
  local_760 = CONCAT44(local_760._4_4_,2);
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x14,4,2,0,&local_768,2,(int *)((longlong)&local_760 + 4));
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x40);
  *(FName *)local_768.Data = local_748.PackageName;
  *(FName *)(local_768.Data + 8) = local_748.AssetName;
  FVar3._2_6_ = auStack_736;
  FVar3.ComparisonIndex.Value._0_2_ = local_738;
  *(FName *)(local_768.Data + 0x10) = FVar3;
  *(FName *)(local_768.Data + 0x18) = FStack_730;
  FVar4.Number._0_2_ = uStack_724;
  FVar4.ComparisonIndex.Value = local_728;
  FVar4.Number._2_2_ = uStack_722;
  *(FName *)(local_768.Data + 0x20) = FVar4;
  if (pFVar1 != &local_768) {
    if (pFVar1->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1->Data);
    }
    pFVar1->Data = local_768.Data;
    *(undefined4 *)((longlong)this + 0x48) = (undefined4)local_760;
    *(undefined4 *)((longlong)this + 0x4c) = local_760._4_4_;
    local_760 = 0;
    local_768.Data = (FScriptContainerElement *)0x0;
  }
  if ((FName *)local_768.Data != (FName *)0x0) {
    FMemory::Free(local_768.Data);
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_718.DisplayName,L"MetasoundEngine",
             L"InputFormatSevenDotOneInterfaceInputFrontLeftName",L"In Front Left");
  FText::AsLocalizable_Advanced_LocText
            (&local_718.Description,L"MetasoundEngine",L"SevenDotOneIn_FrontLeft_AudioDescription",
             L"Front Left input audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_718.DataType = *pFVar8;
  local_718.InitValue.ParamName =
       Metasound::Engine::InputFormatSevenDotOneInterface::Inputs::FrontLeftIn;
  local_718.InitValue.FloatParam = 0.0;
  local_718.InitValue.BoolParam = false;
  local_718.InitValue.IntParam = 0;
  local_718.InitValue.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_718.InitValue.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_718.InitValue.StringParam.Data.ArrayNum = 0;
  local_718.InitValue.StringParam.Data.ArrayMax = 0;
  local_718.InitValue.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_718.InitValue.ArrayFloatParam.ArrayNum = 0;
  local_718.InitValue.ArrayFloatParam.ArrayMax = 0;
  local_718.InitValue.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_718.InitValue.ArrayBoolParam.ArrayNum = 0;
  local_718.InitValue.ArrayBoolParam.ArrayMax = 0;
  local_718.InitValue.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_718.InitValue.ArrayIntParam.ArrayNum = 0;
  local_718.InitValue.ArrayIntParam.ArrayMax = 0;
  local_718.InitValue.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_718.InitValue.ArrayObjectParam.ArrayNum = 0;
  local_718.InitValue.ArrayObjectParam.ArrayMax = 0;
  local_718.InitValue.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_718.InitValue.ArrayStringParam.ArrayNum = 0;
  local_718.InitValue.ArrayStringParam.ArrayMax = 0;
  local_718.InitValue.ParamType = None;
  local_718.InitValue.TypeName.ComparisonIndex.Value = 0;
  local_718.InitValue.TypeName.Number = 0;
  local_718.InitValue.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_718.InitValue.ObjectProxies.ArrayNum = 0;
  local_718.InitValue.ObjectProxies.ArrayMax = 0;
  pFVar9 = FText::GetEmpty();
  local_718.RequiredText.TextData.Reference = (pFVar9->TextData).Reference;
  if (local_718.RequiredText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_718.RequiredText.TextData.Reference + 8))
              (local_718.RequiredText.TextData.Reference,&local_758);
  }
  local_718.RequiredText.Flags = pFVar9->Flags;
  local_718.SortOrderIndex = 100;
  FText::AsLocalizable_Advanced_LocText
            (&local_638,L"MetasoundEngine",L"InputFormatSevenDotOneInterfaceInputFrontRightName",
             L"In Front Right");
  FText::AsLocalizable_Advanced_LocText
            (&local_628,L"MetasoundEngine",L"SevenDotOneIn_FrontRight_AudioDescription",
             L"Front Right input audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_618 = *pFVar8;
  local_610 = Metasound::Engine::InputFormatSevenDotOneInterface::Inputs::FrontRightIn;
  local_608 = 0;
  local_604 = 0;
  local_600 = 0;
  local_5f8 = 0;
  uStack_5f0 = 0;
  local_5e8 = 0;
  local_5e0 = 0;
  local_5d8 = 0;
  local_5d0 = 0;
  local_5c8 = 0;
  local_5c0 = 0;
  local_5b8 = 0;
  local_5b0 = 0;
  local_5a8 = 0;
  local_5a0 = 0;
  local_598 = 0;
  local_590 = 0;
  local_58c = 0;
  local_580 = 0;
  local_578 = 0;
  pFVar9 = FText::GetEmpty();
  local_570 = (pFVar9->TextData).Reference;
  if (local_570 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_570 + 8))(local_570,&local_758);
  }
  local_568 = pFVar9->Flags;
  local_560 = 0x65;
  FText::AsLocalizable_Advanced_LocText
            (&local_558,L"MetasoundEngine",L"InputFormatSevenDotOneInterfaceInputFrontCenterName",
             L"In Front Center");
  FText::AsLocalizable_Advanced_LocText
            (&local_548,L"MetasoundEngine",L"SevenDotOneIn_FrontCenter_AudioDescription",
             L"Front Center input audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_538 = *pFVar8;
  local_530 = Metasound::Engine::InputFormatSevenDotOneInterface::Inputs::FrontCenterIn;
  local_528 = 0;
  local_524 = 0;
  local_520 = 0;
  local_518 = 0;
  uStack_510 = 0;
  local_508 = 0;
  local_500 = 0;
  local_4f8 = 0;
  local_4f0 = 0;
  local_4e8 = 0;
  local_4e0 = 0;
  local_4d8 = 0;
  local_4d0 = 0;
  local_4c8 = 0;
  local_4c0 = 0;
  local_4b8 = 0;
  local_4b0 = 0;
  local_4ac = 0;
  local_4a0 = 0;
  local_498 = 0;
  pFVar9 = FText::GetEmpty();
  local_490 = (pFVar9->TextData).Reference;
  if (local_490 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_490 + 8))(local_490,&local_758);
  }
  local_488 = pFVar9->Flags;
  local_480 = 0x66;
  FText::AsLocalizable_Advanced_LocText
            (&local_478,L"MetasoundEngine",L"InputFormatSevenDotOneInterfaceInputLowFrequencyName",
             L"In Low Frequency");
  FText::AsLocalizable_Advanced_LocText
            (&local_468,L"MetasoundEngine",L"SevenDotOneIn_LowFrequency_AudioDescription",
             L"Low Frequency input audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_458 = *pFVar8;
  local_450 = Metasound::Engine::InputFormatSevenDotOneInterface::Inputs::LowFrequencyIn;
  local_448 = 0;
  local_444 = 0;
  local_440 = 0;
  local_438 = 0;
  uStack_430 = 0;
  local_428 = 0;
  local_420 = 0;
  local_418 = 0;
  local_410 = 0;
  local_408 = 0;
  local_400 = 0;
  local_3f8 = 0;
  local_3f0 = 0;
  local_3e8 = 0;
  local_3e0 = 0;
  local_3d8 = 0;
  local_3d0 = 0;
  local_3cc = 0;
  local_3c0 = 0;
  local_3b8 = 0;
  pFVar9 = FText::GetEmpty();
  local_3b0 = (pFVar9->TextData).Reference;
  if (local_3b0 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3b0 + 8))(local_3b0,&local_758);
  }
  local_3a8 = pFVar9->Flags;
  local_3a0 = 0x67;
  FText::AsLocalizable_Advanced_LocText
            (&local_398,L"MetasoundEngine",L"InputFormatSevenDotOneInterfaceInputSideLeftName",
             L"In Side Left");
  FText::AsLocalizable_Advanced_LocText
            (&local_388,L"MetasoundEngine",L"SevenDotOneIn_SideLeft_AudioDescription",
             L"Side Left input audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_378 = *pFVar8;
  local_370 = Metasound::Engine::InputFormatSevenDotOneInterface::Inputs::SideLeftIn;
  local_368 = 0;
  local_364 = 0;
  local_360 = 0;
  local_358 = 0;
  uStack_350 = 0;
  local_348 = 0;
  local_340 = 0;
  local_338 = 0;
  local_330 = 0;
  local_328 = 0;
  local_320 = 0;
  local_318 = 0;
  local_310 = 0;
  local_308 = 0;
  local_300 = 0;
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  pFVar9 = FText::GetEmpty();
  local_2d0 = (pFVar9->TextData).Reference;
  if (local_2d0 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2d0 + 8))(local_2d0,&local_758);
  }
  local_2c8 = pFVar9->Flags;
  local_2c0 = 0x68;
  FText::AsLocalizable_Advanced_LocText
            (&local_2b8,L"MetasoundEngine",L"InputFormatSevenDotOneInterfaceInputSideRightName",
             L"In Side Right");
  FText::AsLocalizable_Advanced_LocText
            (&local_2a8,L"MetasoundEngine",L"SevenDotOneIn_SideRight_AudioDescription",
             L"Side Right input audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_298 = *pFVar8;
  local_290 = Metasound::Engine::InputFormatSevenDotOneInterface::Inputs::SideRightIn;
  local_288 = 0;
  local_284 = 0;
  local_280 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_268 = 0;
  local_260 = 0;
  local_258 = 0;
  local_250 = 0;
  local_248 = 0;
  local_240 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_20c = 0;
  local_200 = 0;
  local_1f8 = 0;
  pFVar9 = FText::GetEmpty();
  local_1f0 = (pFVar9->TextData).Reference;
  if (local_1f0 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1f0 + 8))(local_1f0,&local_758);
  }
  local_1e8 = pFVar9->Flags;
  local_1e0 = 0x69;
  FText::AsLocalizable_Advanced_LocText
            (&local_1d8,L"MetasoundEngine",L"InputFormatSevenDotOneInterfaceInputBackLeftName",
             L"In Back Left");
  FText::AsLocalizable_Advanced_LocText
            (&local_1c8,L"MetasoundEngine",L"SevenDotOneIn_BackLeft_AudioDescription",
             L"Back Left input audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_1b8 = *pFVar8;
  local_1b0 = Metasound::Engine::InputFormatSevenDotOneInterface::Inputs::BackLeftIn;
  local_1a8 = 0;
  local_1a4 = 0;
  local_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_12c = 0;
  local_120 = 0;
  local_118 = 0;
  pFVar9 = FText::GetEmpty();
  local_110 = (pFVar9->TextData).Reference;
  if (local_110 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_110 + 8))(local_110,&local_758);
  }
  local_108 = pFVar9->Flags;
  local_100 = 0x6a;
  FText::AsLocalizable_Advanced_LocText
            (&local_f8,L"MetasoundEngine",L"InputFormatSevenDotOneInterfaceInputBackRightName",
             L"In Back Right");
  FText::AsLocalizable_Advanced_LocText
            (&local_e8,L"MetasoundEngine",L"SevenDotOneIn_BackRight_AudioDescription",
             L"Back Right input audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_d8 = *pFVar8;
  local_d0 = Metasound::Engine::InputFormatSevenDotOneInterface::Inputs::BackRightIn;
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0;
  local_40 = 0;
  local_38 = 0;
  pFVar9 = FText::GetEmpty();
  local_30 = (pFVar9->TextData).Reference;
  if (local_30 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_30 + 8))(local_30,&local_758);
  }
  local_28 = pFVar9->Flags;
  local_758._First = &local_718;
  local_20 = 0x6b;
  local_758._Last = (FInput *)&stack0xffffffffffffffe8;
  TArray<Audio::FParameterInterface::FInput,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Audio::FParameterInterface::FInput,TSizedDefaultAllocator<32>_> *)
             ((longlong)this + 0x10),&local_758);
  lVar11 = 8;
  plVar10 = (longlong *)&stack0xffffffffffffffe8;
  do {
    lVar11 = lVar11 + -1;
    if ((longlong *)plVar10[-3] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar10[-3] + 0x10))();
    }
    FAudioParameter::~FAudioParameter((FAudioParameter *)(plVar10 + -0x17));
    if ((longlong *)plVar10[-0x1a] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar10[-0x1a] + 0x10))();
    }
    plVar2 = (longlong *)plVar10[-0x1c];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    plVar10 = plVar10 + -0x1c;
  } while (lVar11 != 0);
  return this;
}

// FInterface @ 14b347eb0

FInterface * __thiscall
`Metasound::Engine::InputFormatStereoInterface::CreateInterface'::__l2::FInterface::FInterface
          (void *this)

{
  ForAnyElementType *pFVar1;
  longlong *plVar2;
  FName FVar3;
  FName FVar4;
  FMetasoundFrontendVersion *pFVar5;
  FVersion FVar6;
  UClass *pUVar7;
  FName *pFVar8;
  FText *pFVar9;
  longlong *plVar10;
  longlong lVar11;
  ForAnyElementType local_228;
  undefined8 local_220;
  FTopLevelAssetPath local_218;
  undefined2 local_208;
  undefined1 auStack_206 [6];
  FName FStack_200;
  undefined4 local_1f8;
  undefined2 uStack_1f4;
  undefined2 uStack_1f2;
  initializer_list<Audio::FParameterInterface::FInput> local_1e8;
  FInput local_1d8;
  FText local_f8;
  FText local_e8;
  FName local_d8;
  FName local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_4c;
  undefined8 local_40;
  undefined8 local_38;
  ITextData *local_30;
  uint local_28;
  undefined4 local_20;
  
  pFVar5 = Metasound::Engine::InputFormatStereoInterface::GetVersion();
  FVar6 = FMetasoundFrontendVersionNumber::ToInterfaceVersion(&pFVar5->Number);
  pFVar5 = Metasound::Engine::InputFormatStereoInterface::GetVersion();
  Audio::FParameterInterface::FParameterInterface(this,pFVar5->Name,(FVersion *)FVar6);
  pUVar7 = UMetaSoundPatch::StaticClass();
  UStruct::GetStructPathName((UStruct *)pUVar7,&local_218);
  local_208 = 1;
  pUVar7 = UMetaSoundSource::StaticClass();
  UStruct::GetStructPathName((UStruct *)pUVar7,(FTopLevelAssetPath *)(auStack_206 + 2));
  lVar11 = 2;
  uStack_1f4 = 0;
  local_220 = CONCAT44(local_220._4_4_,2);
  local_228.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x14,4,2,0,&local_228,2,(int *)((longlong)&local_220 + 4));
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x40);
  *(FName *)local_228.Data = local_218.PackageName;
  *(FName *)(local_228.Data + 8) = local_218.AssetName;
  FVar3._2_6_ = auStack_206;
  FVar3.ComparisonIndex.Value._0_2_ = local_208;
  *(FName *)(local_228.Data + 0x10) = FVar3;
  *(FName *)(local_228.Data + 0x18) = FStack_200;
  FVar4.Number._0_2_ = uStack_1f4;
  FVar4.ComparisonIndex.Value = local_1f8;
  FVar4.Number._2_2_ = uStack_1f2;
  *(FName *)(local_228.Data + 0x20) = FVar4;
  if (pFVar1 != &local_228) {
    if (pFVar1->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1->Data);
    }
    pFVar1->Data = local_228.Data;
    *(undefined4 *)((longlong)this + 0x48) = (undefined4)local_220;
    *(undefined4 *)((longlong)this + 0x4c) = local_220._4_4_;
    local_220 = 0;
    local_228.Data = (FScriptContainerElement *)0x0;
  }
  if ((FName *)local_228.Data != (FName *)0x0) {
    FMemory::Free(local_228.Data);
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_1d8.DisplayName,L"MetasoundEngine",L"InputFormatStereoInterfaceInputLeftName",
             L"In Left");
  FText::AsLocalizable_Advanced_LocText
            (&local_1d8.Description,L"MetasoundEngine",L"StereoIn_Left_AudioDescription",
             L"Left stereo input audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_1d8.DataType = *pFVar8;
  local_1d8.InitValue.ParamName = Metasound::Engine::InputFormatStereoInterface::Inputs::LeftIn;
  local_1d8.InitValue.FloatParam = 0.0;
  local_1d8.InitValue.BoolParam = false;
  local_1d8.InitValue.IntParam = 0;
  local_1d8.InitValue.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_1d8.InitValue.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.InitValue.StringParam.Data.ArrayNum = 0;
  local_1d8.InitValue.StringParam.Data.ArrayMax = 0;
  local_1d8.InitValue.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.InitValue.ArrayFloatParam.ArrayNum = 0;
  local_1d8.InitValue.ArrayFloatParam.ArrayMax = 0;
  local_1d8.InitValue.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.InitValue.ArrayBoolParam.ArrayNum = 0;
  local_1d8.InitValue.ArrayBoolParam.ArrayMax = 0;
  local_1d8.InitValue.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.InitValue.ArrayIntParam.ArrayNum = 0;
  local_1d8.InitValue.ArrayIntParam.ArrayMax = 0;
  local_1d8.InitValue.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.InitValue.ArrayObjectParam.ArrayNum = 0;
  local_1d8.InitValue.ArrayObjectParam.ArrayMax = 0;
  local_1d8.InitValue.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.InitValue.ArrayStringParam.ArrayNum = 0;
  local_1d8.InitValue.ArrayStringParam.ArrayMax = 0;
  local_1d8.InitValue.ParamType = None;
  local_1d8.InitValue.TypeName.ComparisonIndex.Value = 0;
  local_1d8.InitValue.TypeName.Number = 0;
  local_1d8.InitValue.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.InitValue.ObjectProxies.ArrayNum = 0;
  local_1d8.InitValue.ObjectProxies.ArrayMax = 0;
  pFVar9 = FText::GetEmpty();
  local_1d8.RequiredText.TextData.Reference = (pFVar9->TextData).Reference;
  if (local_1d8.RequiredText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1d8.RequiredText.TextData.Reference + 8))
              (local_1d8.RequiredText.TextData.Reference,&stack0x00000008);
  }
  local_1d8.RequiredText.Flags = pFVar9->Flags;
  local_1d8.SortOrderIndex = 100;
  FText::AsLocalizable_Advanced_LocText
            (&local_f8,L"MetasoundEngine",L"InputFormatStereoInterfaceInputRightName",L"In Right");
  FText::AsLocalizable_Advanced_LocText
            (&local_e8,L"MetasoundEngine",L"StereoIn_Right_AudioDescription",
             L"Right stereo input audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_d8 = *pFVar8;
  local_d0 = Metasound::Engine::InputFormatStereoInterface::Inputs::RightIn;
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0;
  local_40 = 0;
  local_38 = 0;
  pFVar9 = FText::GetEmpty();
  local_30 = (pFVar9->TextData).Reference;
  if (local_30 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_30 + 8))(local_30,&stack0x00000008);
  }
  local_28 = pFVar9->Flags;
  local_1e8._First = &local_1d8;
  local_20 = 0x65;
  local_1e8._Last = (FInput *)&stack0xffffffffffffffe8;
  TArray<Audio::FParameterInterface::FInput,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Audio::FParameterInterface::FInput,TSizedDefaultAllocator<32>_> *)
             ((longlong)this + 0x10),&local_1e8);
  plVar10 = (longlong *)&stack0xffffffffffffffe8;
  do {
    lVar11 = lVar11 + -1;
    if ((longlong *)plVar10[-3] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar10[-3] + 0x10))();
    }
    FAudioParameter::~FAudioParameter((FAudioParameter *)(plVar10 + -0x17));
    if ((longlong *)plVar10[-0x1a] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar10[-0x1a] + 0x10))();
    }
    plVar2 = (longlong *)plVar10[-0x1c];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    plVar10 = plVar10 + -0x1c;
  } while (lVar11 != 0);
  return this;
}

// FInterface @ 14b348270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInterface * __thiscall
`Metasound::Engine::OutputFormatFiveDotOneInterface::CreateInterface'::__l2::FInterface::FInterface
          (void *this)

{
  ForAnyElementType *pFVar1;
  longlong *plVar2;
  FName FVar3;
  FName FVar4;
  FMetasoundFrontendVersion *pFVar5;
  FVersion FVar6;
  UClass *pUVar7;
  FName *pFVar8;
  FText *pFVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStackY_258 [32];
  ForAnyElementType local_218;
  undefined8 local_210;
  initializer_list<Audio::FParameterInterface::FOutput> local_208;
  FTopLevelAssetPath local_1f8;
  undefined2 local_1e8;
  undefined1 auStack_1e6 [6];
  FName FStack_1e0;
  undefined4 local_1d8;
  undefined2 uStack_1d4;
  undefined2 uStack_1d2;
  FOutput local_1c8;
  FText local_180;
  FText local_170;
  FName local_160;
  FName local_158;
  ITextData *local_150;
  uint local_148;
  undefined1 local_140;
  undefined4 local_13c;
  FText local_138;
  FText local_128;
  FName local_118;
  FName local_110;
  ITextData *local_108;
  uint local_100;
  undefined1 local_f8;
  undefined4 local_f4;
  FText local_f0;
  FText local_e0;
  FName local_d0;
  FName local_c8;
  ITextData *local_c0;
  uint local_b8;
  undefined1 local_b0;
  undefined4 local_ac;
  FText local_a8;
  FText local_98;
  FName local_88;
  FName local_80;
  ITextData *local_78;
  uint local_70;
  undefined1 local_68;
  undefined4 local_64;
  FText local_60;
  FText local_50;
  FName local_40;
  FName local_38;
  ITextData *local_30;
  uint local_28;
  undefined1 local_20;
  undefined4 local_1c;
  TRefCountPtr<ITextData> local_18;
  
  local_18.Reference = (ITextData *)(__security_cookie.value ^ (ulonglong)auStackY_258);
  pFVar5 = Metasound::Engine::OutputFormatFiveDotOneInterface::GetVersion();
  FVar6 = FMetasoundFrontendVersionNumber::ToInterfaceVersion(&pFVar5->Number);
  pFVar5 = Metasound::Engine::OutputFormatFiveDotOneInterface::GetVersion();
  Audio::FParameterInterface::FParameterInterface(this,pFVar5->Name,(FVersion *)FVar6);
  pUVar7 = UMetaSoundPatch::StaticClass();
  UStruct::GetStructPathName((UStruct *)pUVar7,&local_1f8);
  local_1e8 = 1;
  pUVar7 = UMetaSoundSource::StaticClass();
  UStruct::GetStructPathName((UStruct *)pUVar7,(FTopLevelAssetPath *)(auStack_1e6 + 2));
  uStack_1d4 = 0;
  local_218.Data = (FScriptContainerElement *)0x0;
  local_210 = CONCAT44(local_210._4_4_,2);
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x14,4,2,0,&local_218,2,(int *)((longlong)&local_210 + 4));
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x40);
  *(FName *)local_218.Data = local_1f8.PackageName;
  *(FName *)(local_218.Data + 8) = local_1f8.AssetName;
  FVar3._2_6_ = auStack_1e6;
  FVar3.ComparisonIndex.Value._0_2_ = local_1e8;
  *(FName *)(local_218.Data + 0x10) = FVar3;
  *(FName *)(local_218.Data + 0x18) = FStack_1e0;
  FVar4.Number._0_2_ = uStack_1d4;
  FVar4.ComparisonIndex.Value = local_1d8;
  FVar4.Number._2_2_ = uStack_1d2;
  *(FName *)(local_218.Data + 0x20) = FVar4;
  if (pFVar1 != &local_218) {
    if (pFVar1->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1->Data);
    }
    pFVar1->Data = local_218.Data;
    *(undefined4 *)((longlong)this + 0x48) = (undefined4)local_210;
    *(undefined4 *)((longlong)this + 0x4c) = local_210._4_4_;
    local_210 = 0;
    local_218.Data = (FScriptContainerElement *)0x0;
  }
  if ((FName *)local_218.Data != (FName *)0x0) {
    FMemory::Free(local_218.Data);
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_1c8.DisplayName,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedFrontLeftDisplayName",L"Out Front Left");
  FText::AsLocalizable_Advanced_LocText
            (&local_1c8.Description,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedFrontLeftDescription",
             L"The resulting front left channel output audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_1c8.DataType = *pFVar8;
  local_1c8.ParamName = Metasound::Engine::OutputFormatFiveDotOneInterface::Outputs::FrontLeftOut;
  pFVar9 = FText::GetEmpty();
  local_1c8.RequiredText.TextData.Reference = (pFVar9->TextData).Reference;
  if (local_1c8.RequiredText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1c8.RequiredText.TextData.Reference + 8))
              (local_1c8.RequiredText.TextData.Reference,&local_208);
  }
  local_1c8.RequiredText.Flags = pFVar9->Flags;
  local_1c8.ParamType = None;
  local_1c8.SortOrderIndex = 100;
  FText::AsLocalizable_Advanced_LocText
            (&local_180,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedFrontRightDisplayName",L"Out Front Right");
  FText::AsLocalizable_Advanced_LocText
            (&local_170,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedFrontRightDescription",
             L"The resulting front right channel output audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_160 = *pFVar8;
  local_158 = Metasound::Engine::OutputFormatFiveDotOneInterface::Outputs::FrontRightOut;
  pFVar9 = FText::GetEmpty();
  local_150 = (pFVar9->TextData).Reference;
  if (local_150 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_150 + 8))(local_150,&local_208);
  }
  local_148 = pFVar9->Flags;
  local_140 = 0;
  local_13c = 0x65;
  FText::AsLocalizable_Advanced_LocText
            (&local_138,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedCenterDisplayName",L"Out Front Center");
  FText::AsLocalizable_Advanced_LocText
            (&local_128,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedCenterDescription",
             L"The resulting front center channel output audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_118 = *pFVar8;
  local_110 = Metasound::Engine::OutputFormatFiveDotOneInterface::Outputs::FrontCenterOut;
  pFVar9 = FText::GetEmpty();
  local_108 = (pFVar9->TextData).Reference;
  if (local_108 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_108 + 8))(local_108,&local_208);
  }
  local_100 = pFVar9->Flags;
  local_f8 = 0;
  local_f4 = 0x66;
  FText::AsLocalizable_Advanced_LocText
            (&local_f0,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedLowFrequencyDisplayName",L"Out Low Frequency")
  ;
  FText::AsLocalizable_Advanced_LocText
            (&local_e0,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedLowFrequencyDescription",
             L"The resulting low frequency channel output audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_d0 = *pFVar8;
  local_c8 = Metasound::Engine::OutputFormatFiveDotOneInterface::Outputs::LowFrequencyOut;
  pFVar9 = FText::GetEmpty();
  local_c0 = (pFVar9->TextData).Reference;
  if (local_c0 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c0 + 8))(local_c0,&local_208);
  }
  local_b8 = pFVar9->Flags;
  local_b0 = 0;
  local_ac = 0x67;
  FText::AsLocalizable_Advanced_LocText
            (&local_a8,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedSideLeftDisplayName",L"Out Side Left");
  FText::AsLocalizable_Advanced_LocText
            (&local_98,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedSideLeftDescription",
             L"The resulting side left channel output audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_88 = *pFVar8;
  local_80 = Metasound::Engine::OutputFormatFiveDotOneInterface::Outputs::SideLeftOut;
  pFVar9 = FText::GetEmpty();
  local_78 = (pFVar9->TextData).Reference;
  if (local_78 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78 + 8))(local_78,&local_208);
  }
  local_70 = pFVar9->Flags;
  local_68 = 0;
  local_64 = 0x68;
  FText::AsLocalizable_Advanced_LocText
            (&local_60,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedSideRightDisplayName",L"Out Side Right");
  FText::AsLocalizable_Advanced_LocText
            (&local_50,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedSideRightDescription",
             L"The resulting side right channel output audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_40 = *pFVar8;
  local_38 = Metasound::Engine::OutputFormatFiveDotOneInterface::Outputs::SideRightOut;
  pFVar9 = FText::GetEmpty();
  local_30 = (pFVar9->TextData).Reference;
  if (local_30 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_30 + 8))(local_30,&local_208);
  }
  local_28 = pFVar9->Flags;
  local_208._First = &local_1c8;
  local_20 = 0;
  local_208._Last = (FOutput *)&stack0xffffffffffffffe8;
  local_1c = 0x69;
  TArray<Audio::FParameterInterface::FOutput,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Audio::FParameterInterface::FOutput,TSizedDefaultAllocator<32>_> *)
             ((longlong)this + 0x20),&local_208);
  lVar11 = 6;
  plVar10 = (longlong *)&stack0xffffffffffffffe8;
  do {
    lVar11 = lVar11 + -1;
    if ((longlong *)plVar10[-3] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar10[-3] + 0x10))();
    }
    if ((longlong *)plVar10[-7] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar10[-7] + 0x10))();
    }
    plVar2 = (longlong *)plVar10[-9];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    plVar10 = plVar10 + -9;
  } while (lVar11 != 0);
  return this;
}

// FInterface @ 14b3487d0

FInterface * __thiscall
`Metasound::Engine::OutputFormatMonoInterface::CreateInterface'::__l2::FInterface::FInterface
          (void *this)

{
  ForAnyElementType *pFVar1;
  FName FVar2;
  FMetasoundFrontendVersion *pFVar3;
  FVersion FVar4;
  UClass *pUVar5;
  FName *pFVar6;
  FText *pFVar7;
  ForAnyElementType local_78;
  undefined8 local_70;
  initializer_list<Audio::FParameterInterface::FOutput> local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  FName FStack_40;
  FName local_38;
  FName local_30;
  TRefCountPtr<ITextData> local_28;
  uint local_20;
  EAudioParameterType local_18;
  int local_14;
  
  pFVar3 = Metasound::Engine::OutputFormatMonoInterface::GetVersion();
  FVar4 = FMetasoundFrontendVersionNumber::ToInterfaceVersion(&pFVar3->Number);
  pFVar3 = Metasound::Engine::OutputFormatMonoInterface::GetVersion();
  Audio::FParameterInterface::FParameterInterface(this,pFVar3->Name,(FVersion *)FVar4);
  pUVar5 = UMetaSoundPatch::StaticClass();
  UStruct::GetStructPathName((UStruct *)pUVar5,(FTopLevelAssetPath *)local_58);
  local_48._0_2_ = 1;
  pUVar5 = UMetaSoundSource::StaticClass();
  UStruct::GetStructPathName((UStruct *)pUVar5,(FTopLevelAssetPath *)(local_48 + 4));
  local_38.Number._0_2_ = 0x100;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = CONCAT44(local_70._4_4_,2);
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x14,4,2,0,&local_78,2,(int *)((longlong)&local_70 + 4));
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x40);
  *(undefined8 *)local_78.Data = local_58._0_8_;
  *(undefined4 *)(local_78.Data + 8) = local_58._8_4_;
  *(undefined4 *)(local_78.Data + 0xc) = local_58._12_4_;
  FVar2._2_6_ = local_48._2_6_;
  FVar2.ComparisonIndex.Value._0_2_ = local_48._0_2_;
  *(FName *)(local_78.Data + 0x10) = FVar2;
  *(FName *)(local_78.Data + 0x18) = FStack_40;
  *(FName *)(local_78.Data + 0x20) = local_38;
  if (pFVar1 != &local_78) {
    if (pFVar1->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1->Data);
    }
    pFVar1->Data = local_78.Data;
    *(undefined4 *)((longlong)this + 0x48) = (undefined4)local_70;
    *(undefined4 *)((longlong)this + 0x4c) = local_70._4_4_;
    local_70 = 0;
    local_78.Data = (FScriptContainerElement *)0x0;
  }
  if ((FName *)local_78.Data != (FName *)0x0) {
    FMemory::Free(local_78.Data);
  }
  FText::AsLocalizable_Advanced_LocText
            ((FText *)local_58,L"MetasoundFrontend",L"GeneratedAudioDisplayName",L"Out Mono");
  FText::AsLocalizable_Advanced_LocText
            ((FText *)local_48,L"MetasoundFrontend",L"GeneratedAudioDescription",
             L"The resulting mono output.");
  pFVar6 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_38 = *pFVar6;
  local_30 = Metasound::Engine::OutputFormatMonoInterface::Outputs::MonoOut;
  pFVar7 = FText::GetEmpty();
  local_28.Reference = (pFVar7->TextData).Reference;
  if (local_28.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.Reference + 8))(local_28.Reference,&stack0x00000008);
  }
  local_20 = pFVar7->Flags;
  local_68._First = (FOutput *)local_58;
  local_18 = None;
  local_68._Last = (FOutput *)&stack0xfffffffffffffff0;
  local_14 = 100;
  TArray<Audio::FParameterInterface::FOutput,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Audio::FParameterInterface::FOutput,TSizedDefaultAllocator<32>_> *)
             ((longlong)this + 0x20),&local_68);
  if (local_28.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.Reference + 0x10))();
  }
  if ((longlong *)CONCAT62(local_48._2_6_,local_48._0_2_) != (longlong *)0x0) {
    (**(code **)(*(longlong *)CONCAT62(local_48._2_6_,local_48._0_2_) + 0x10))();
  }
  if ((FName)local_58._0_8_ != (FName)0x0) {
    (**(code **)(*(longlong *)local_58._0_8_ + 0x10))();
  }
  return this;
}

// FInterface @ 14b3489e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInterface * __thiscall
`Metasound::Engine::OutputFormatQuadInterface::CreateInterface'::__l2::FInterface::FInterface
          (void *this)

{
  ForAnyElementType *pFVar1;
  longlong *plVar2;
  FName FVar3;
  FName FVar4;
  FMetasoundFrontendVersion *pFVar5;
  FVersion FVar6;
  UClass *pUVar7;
  FName *pFVar8;
  FText *pFVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStackY_1d8 [32];
  ForAnyElementType local_198;
  undefined8 local_190;
  initializer_list<Audio::FParameterInterface::FOutput> local_188;
  FTopLevelAssetPath local_178;
  undefined2 local_168;
  undefined1 auStack_166 [6];
  FName FStack_160;
  undefined4 local_158;
  undefined2 uStack_154;
  undefined2 uStack_152;
  FOutput local_148;
  FText local_100;
  FText local_f0;
  FName local_e0;
  FName local_d8;
  ITextData *local_d0;
  uint local_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  FText local_b8;
  FText local_a8;
  FName local_98;
  FName local_90;
  ITextData *local_88;
  uint local_80;
  undefined1 local_78;
  undefined4 local_74;
  FText local_70;
  FText local_60;
  FName local_50;
  FName local_48;
  ITextData *local_40;
  uint local_38;
  undefined1 local_30;
  undefined4 local_2c;
  TRefCountPtr<ITextData> local_28;
  
  local_28.Reference = (ITextData *)(__security_cookie.value ^ (ulonglong)auStackY_1d8);
  pFVar5 = Metasound::Engine::OutputFormatQuadInterface::GetVersion();
  FVar6 = FMetasoundFrontendVersionNumber::ToInterfaceVersion(&pFVar5->Number);
  pFVar5 = Metasound::Engine::OutputFormatQuadInterface::GetVersion();
  Audio::FParameterInterface::FParameterInterface(this,pFVar5->Name,(FVersion *)FVar6);
  pUVar7 = UMetaSoundPatch::StaticClass();
  UStruct::GetStructPathName((UStruct *)pUVar7,&local_178);
  local_168 = 1;
  pUVar7 = UMetaSoundSource::StaticClass();
  UStruct::GetStructPathName((UStruct *)pUVar7,(FTopLevelAssetPath *)(auStack_166 + 2));
  uStack_154 = 0;
  lVar11 = 4;
  local_198.Data = (FScriptContainerElement *)0x0;
  local_190 = CONCAT44(local_190._4_4_,2);
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x14,4,2,0,&local_198,2,(int *)((longlong)&local_190 + 4));
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x40);
  *(FName *)local_198.Data = local_178.PackageName;
  *(FName *)(local_198.Data + 8) = local_178.AssetName;
  FVar3._2_6_ = auStack_166;
  FVar3.ComparisonIndex.Value._0_2_ = local_168;
  *(FName *)(local_198.Data + 0x10) = FVar3;
  *(FName *)(local_198.Data + 0x18) = FStack_160;
  FVar4.Number._0_2_ = uStack_154;
  FVar4.ComparisonIndex.Value = local_158;
  FVar4.Number._2_2_ = uStack_152;
  *(FName *)(local_198.Data + 0x20) = FVar4;
  if (pFVar1 != &local_198) {
    if (pFVar1->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1->Data);
    }
    pFVar1->Data = local_198.Data;
    *(undefined4 *)((longlong)this + 0x48) = (undefined4)local_190;
    *(undefined4 *)((longlong)this + 0x4c) = local_190._4_4_;
    local_190 = 0;
    local_198.Data = (FScriptContainerElement *)0x0;
  }
  if ((FName *)local_198.Data != (FName *)0x0) {
    FMemory::Free(local_198.Data);
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_148.DisplayName,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedFrontLeftDisplayName",L"Out Front Left");
  FText::AsLocalizable_Advanced_LocText
            (&local_148.Description,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedFrontLeftDescription",
             L"The resulting front left channel output audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_148.DataType = *pFVar8;
  local_148.ParamName = Metasound::Engine::OutputFormatQuadInterface::Outputs::FrontLeftOut;
  pFVar9 = FText::GetEmpty();
  local_148.RequiredText.TextData.Reference = (pFVar9->TextData).Reference;
  if (local_148.RequiredText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_148.RequiredText.TextData.Reference + 8))
              (local_148.RequiredText.TextData.Reference,&local_188);
  }
  local_148.RequiredText.Flags = pFVar9->Flags;
  local_148.ParamType = None;
  local_148.SortOrderIndex = 100;
  FText::AsLocalizable_Advanced_LocText
            (&local_100,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedFrontRightDisplayName",L"Out Front Right");
  FText::AsLocalizable_Advanced_LocText
            (&local_f0,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedFrontRightDescription",
             L"The resulting front right channel output audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_e0 = *pFVar8;
  local_d8 = Metasound::Engine::OutputFormatQuadInterface::Outputs::FrontRightOut;
  pFVar9 = FText::GetEmpty();
  local_d0 = (pFVar9->TextData).Reference;
  if (local_d0 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d0 + 8))(local_d0,&local_188);
  }
  local_c8 = pFVar9->Flags;
  local_c0 = 0;
  local_bc = 0x65;
  FText::AsLocalizable_Advanced_LocText
            (&local_b8,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedSideLeftDisplayName",L"Out Side Left");
  FText::AsLocalizable_Advanced_LocText
            (&local_a8,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedSideLeftDescription",
             L"The resulting side left channel output audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_98 = *pFVar8;
  local_90 = Metasound::Engine::OutputFormatQuadInterface::Outputs::SideLeftOut;
  pFVar9 = FText::GetEmpty();
  local_88 = (pFVar9->TextData).Reference;
  if (local_88 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88 + 8))(local_88,&local_188);
  }
  local_80 = pFVar9->Flags;
  local_78 = 0;
  local_74 = 0x68;
  FText::AsLocalizable_Advanced_LocText
            (&local_70,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedSideRightDisplayName",L"Out Side Right");
  FText::AsLocalizable_Advanced_LocText
            (&local_60,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedSideRightDescription",
             L"The resulting side right channel output audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_50 = *pFVar8;
  local_48 = Metasound::Engine::OutputFormatQuadInterface::Outputs::SideRightOut;
  pFVar9 = FText::GetEmpty();
  local_40 = (pFVar9->TextData).Reference;
  if (local_40 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40 + 8))(local_40,&local_188);
  }
  local_38 = pFVar9->Flags;
  local_188._First = &local_148;
  local_30 = 0;
  local_188._Last = (FOutput *)&stack0xffffffffffffffd8;
  local_2c = 0x69;
  TArray<Audio::FParameterInterface::FOutput,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Audio::FParameterInterface::FOutput,TSizedDefaultAllocator<32>_> *)
             ((longlong)this + 0x20),&local_188);
  plVar10 = (longlong *)&stack0xffffffffffffffd8;
  do {
    lVar11 = lVar11 + -1;
    if ((longlong *)plVar10[-3] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar10[-3] + 0x10))();
    }
    if ((longlong *)plVar10[-7] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar10[-7] + 0x10))();
    }
    plVar2 = (longlong *)plVar10[-9];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    plVar10 = plVar10 + -9;
  } while (lVar11 != 0);
  return this;
}

// FInterface @ 14b348df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInterface * __thiscall
`Metasound::Engine::OutputFormatSevenDotOneInterface::CreateInterface'::__l2::FInterface::FInterface
          (void *this)

{
  ForAnyElementType *pFVar1;
  longlong *plVar2;
  FName FVar3;
  FName FVar4;
  FMetasoundFrontendVersion *pFVar5;
  FVersion FVar6;
  UClass *pUVar7;
  FName *pFVar8;
  FText *pFVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStackY_2e8 [32];
  ForAnyElementType local_2a8;
  undefined8 local_2a0;
  initializer_list<Audio::FParameterInterface::FOutput> local_298;
  FTopLevelAssetPath local_288;
  undefined2 local_278;
  undefined1 auStack_276 [6];
  FName FStack_270;
  undefined4 local_268;
  undefined2 uStack_264;
  undefined2 uStack_262;
  FOutput local_258;
  FText local_210;
  FText local_200;
  FName local_1f0;
  FName local_1e8;
  ITextData *local_1e0;
  uint local_1d8;
  undefined1 local_1d0;
  undefined4 local_1cc;
  FText local_1c8;
  FText local_1b8;
  FName local_1a8;
  FName local_1a0;
  ITextData *local_198;
  uint local_190;
  undefined1 local_188;
  undefined4 local_184;
  FText local_180;
  FText local_170;
  FName local_160;
  FName local_158;
  ITextData *local_150;
  uint local_148;
  undefined1 local_140;
  undefined4 local_13c;
  FText local_138;
  FText local_128;
  FName local_118;
  FName local_110;
  ITextData *local_108;
  uint local_100;
  undefined1 local_f8;
  undefined4 local_f4;
  FText local_f0;
  FText local_e0;
  FName local_d0;
  FName local_c8;
  ITextData *local_c0;
  uint local_b8;
  undefined1 local_b0;
  undefined4 local_ac;
  FText local_a8;
  FText local_98;
  FName local_88;
  FName local_80;
  ITextData *local_78;
  uint local_70;
  undefined1 local_68;
  undefined4 local_64;
  FText local_60;
  FText local_50;
  FName local_40;
  FName local_38;
  ITextData *local_30;
  uint local_28;
  undefined1 local_20;
  undefined4 local_1c;
  TRefCountPtr<ITextData> local_18;
  
  local_18.Reference = (ITextData *)(__security_cookie.value ^ (ulonglong)auStackY_2e8);
  pFVar5 = Metasound::Engine::OutputFormatSevenDotOneInterface::GetVersion();
  FVar6 = FMetasoundFrontendVersionNumber::ToInterfaceVersion(&pFVar5->Number);
  pFVar5 = Metasound::Engine::OutputFormatSevenDotOneInterface::GetVersion();
  Audio::FParameterInterface::FParameterInterface(this,pFVar5->Name,(FVersion *)FVar6);
  pUVar7 = UMetaSoundPatch::StaticClass();
  UStruct::GetStructPathName((UStruct *)pUVar7,&local_288);
  local_278 = 1;
  pUVar7 = UMetaSoundSource::StaticClass();
  UStruct::GetStructPathName((UStruct *)pUVar7,(FTopLevelAssetPath *)(auStack_276 + 2));
  uStack_264 = 0;
  local_2a8.Data = (FScriptContainerElement *)0x0;
  local_2a0 = CONCAT44(local_2a0._4_4_,2);
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x14,4,2,0,&local_2a8,2,(int *)((longlong)&local_2a0 + 4));
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x40);
  *(FName *)local_2a8.Data = local_288.PackageName;
  *(FName *)(local_2a8.Data + 8) = local_288.AssetName;
  FVar3._2_6_ = auStack_276;
  FVar3.ComparisonIndex.Value._0_2_ = local_278;
  *(FName *)(local_2a8.Data + 0x10) = FVar3;
  *(FName *)(local_2a8.Data + 0x18) = FStack_270;
  FVar4.Number._0_2_ = uStack_264;
  FVar4.ComparisonIndex.Value = local_268;
  FVar4.Number._2_2_ = uStack_262;
  *(FName *)(local_2a8.Data + 0x20) = FVar4;
  if (pFVar1 != &local_2a8) {
    if (pFVar1->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1->Data);
    }
    pFVar1->Data = local_2a8.Data;
    *(undefined4 *)((longlong)this + 0x48) = (undefined4)local_2a0;
    *(undefined4 *)((longlong)this + 0x4c) = local_2a0._4_4_;
    local_2a0 = 0;
    local_2a8.Data = (FScriptContainerElement *)0x0;
  }
  if ((FName *)local_2a8.Data != (FName *)0x0) {
    FMemory::Free(local_2a8.Data);
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_258.DisplayName,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedFrontLeftDisplayName",L"Out Front Left");
  FText::AsLocalizable_Advanced_LocText
            (&local_258.Description,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedFrontLeftDescription",
             L"The resulting front left channel output audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_258.DataType = *pFVar8;
  local_258.ParamName = Metasound::Engine::OutputFormatSevenDotOneInterface::Outputs::FrontLeftOut;
  pFVar9 = FText::GetEmpty();
  local_258.RequiredText.TextData.Reference = (pFVar9->TextData).Reference;
  if (local_258.RequiredText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_258.RequiredText.TextData.Reference + 8))
              (local_258.RequiredText.TextData.Reference,&local_298);
  }
  local_258.RequiredText.Flags = pFVar9->Flags;
  local_258.ParamType = None;
  local_258.SortOrderIndex = 100;
  FText::AsLocalizable_Advanced_LocText
            (&local_210,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedFrontRightDisplayName",L"Out Front Right");
  FText::AsLocalizable_Advanced_LocText
            (&local_200,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedFrontRightDescription",
             L"The resulting front right channel output audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_1f0 = *pFVar8;
  local_1e8 = Metasound::Engine::OutputFormatSevenDotOneInterface::Outputs::FrontRightOut;
  pFVar9 = FText::GetEmpty();
  local_1e0 = (pFVar9->TextData).Reference;
  if (local_1e0 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1e0 + 8))(local_1e0,&local_298);
  }
  local_1d8 = pFVar9->Flags;
  local_1d0 = 0;
  local_1cc = 0x65;
  FText::AsLocalizable_Advanced_LocText
            (&local_1c8,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedCenterDisplayName",L"Out Front Center");
  FText::AsLocalizable_Advanced_LocText
            (&local_1b8,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedCenterDescription",
             L"The resulting front center channel output audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_1a8 = *pFVar8;
  local_1a0 = Metasound::Engine::OutputFormatSevenDotOneInterface::Outputs::FrontCenterOut;
  pFVar9 = FText::GetEmpty();
  local_198 = (pFVar9->TextData).Reference;
  if (local_198 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_198 + 8))(local_198,&local_298);
  }
  local_190 = pFVar9->Flags;
  local_188 = 0;
  local_184 = 0x66;
  FText::AsLocalizable_Advanced_LocText
            (&local_180,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedLowFrequencyDisplayName",L"Out Low Frequency")
  ;
  FText::AsLocalizable_Advanced_LocText
            (&local_170,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedLowFrequencyDescription",
             L"The resulting low frequency channel output audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_160 = *pFVar8;
  local_158 = Metasound::Engine::OutputFormatSevenDotOneInterface::Outputs::LowFrequencyOut;
  pFVar9 = FText::GetEmpty();
  local_150 = (pFVar9->TextData).Reference;
  if (local_150 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_150 + 8))(local_150,&local_298);
  }
  local_148 = pFVar9->Flags;
  local_140 = 0;
  local_13c = 0x67;
  FText::AsLocalizable_Advanced_LocText
            (&local_138,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedSideLeftDisplayName",L"Out Side Left");
  FText::AsLocalizable_Advanced_LocText
            (&local_128,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedSideLeftDescription",
             L"The resulting side left channel output audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_118 = *pFVar8;
  local_110 = Metasound::Engine::OutputFormatSevenDotOneInterface::Outputs::SideLeftOut;
  pFVar9 = FText::GetEmpty();
  local_108 = (pFVar9->TextData).Reference;
  if (local_108 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_108 + 8))(local_108,&local_298);
  }
  local_100 = pFVar9->Flags;
  local_f8 = 0;
  local_f4 = 0x68;
  FText::AsLocalizable_Advanced_LocText
            (&local_f0,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedSideRightDisplayName",L"Out Side Right");
  FText::AsLocalizable_Advanced_LocText
            (&local_e0,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedSideRightDescription",
             L"The resulting side right channel output audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_d0 = *pFVar8;
  local_c8 = Metasound::Engine::OutputFormatSevenDotOneInterface::Outputs::SideRightOut;
  pFVar9 = FText::GetEmpty();
  local_c0 = (pFVar9->TextData).Reference;
  if (local_c0 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c0 + 8))(local_c0,&local_298);
  }
  local_b8 = pFVar9->Flags;
  local_b0 = 0;
  local_ac = 0x69;
  FText::AsLocalizable_Advanced_LocText
            (&local_a8,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedBackLeftDisplayName",L"Out Back Left");
  FText::AsLocalizable_Advanced_LocText
            (&local_98,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedBackLeftDescription",
             L"The resulting back left channel output audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_88 = *pFVar8;
  local_80 = Metasound::Engine::OutputFormatSevenDotOneInterface::Outputs::BackLeftOut;
  pFVar9 = FText::GetEmpty();
  local_78 = (pFVar9->TextData).Reference;
  if (local_78 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78 + 8))(local_78,&local_298);
  }
  local_70 = pFVar9->Flags;
  local_68 = 0;
  local_64 = 0x6a;
  FText::AsLocalizable_Advanced_LocText
            (&local_60,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedBackRightDisplayName",L"Out Back Right");
  FText::AsLocalizable_Advanced_LocText
            (&local_50,L"MetasoundFrontend",
             L"OutputFormatSurroundInterface_GeneratedBackRightDescription",
             L"The resulting back right channel output audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_40 = *pFVar8;
  local_38 = Metasound::Engine::OutputFormatSevenDotOneInterface::Outputs::BackRightOut;
  pFVar9 = FText::GetEmpty();
  local_30 = (pFVar9->TextData).Reference;
  if (local_30 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_30 + 8))(local_30,&local_298);
  }
  local_28 = pFVar9->Flags;
  local_298._First = &local_258;
  local_20 = 0;
  local_298._Last = (FOutput *)&stack0xffffffffffffffe8;
  local_1c = 0x6b;
  TArray<Audio::FParameterInterface::FOutput,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Audio::FParameterInterface::FOutput,TSizedDefaultAllocator<32>_> *)
             ((longlong)this + 0x20),&local_298);
  lVar11 = 8;
  plVar10 = (longlong *)&stack0xffffffffffffffe8;
  do {
    lVar11 = lVar11 + -1;
    if ((longlong *)plVar10[-3] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar10[-3] + 0x10))();
    }
    if ((longlong *)plVar10[-7] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar10[-7] + 0x10))();
    }
    plVar2 = (longlong *)plVar10[-9];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    plVar10 = plVar10 + -9;
  } while (lVar11 != 0);
  return this;
}

// FInterface @ 14b349490

FInterface * __thiscall
`Metasound::Engine::OutputFormatStereoInterface::CreateInterface'::__l2::FInterface::FInterface
          (void *this)

{
  ForAnyElementType *pFVar1;
  longlong *plVar2;
  FName FVar3;
  FName FVar4;
  FMetasoundFrontendVersion *pFVar5;
  FVersion FVar6;
  UClass *pUVar7;
  FName *pFVar8;
  FText *pFVar9;
  longlong *plVar10;
  longlong lVar11;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  FTopLevelAssetPath local_e8;
  undefined2 local_d8;
  undefined1 auStack_d6 [6];
  FName FStack_d0;
  undefined4 local_c8;
  undefined2 uStack_c4;
  undefined2 uStack_c2;
  initializer_list<Audio::FParameterInterface::FOutput> local_b8;
  FOutput local_a8;
  FText local_60;
  FText local_50;
  FName local_40;
  FName local_38;
  ITextData *local_30;
  uint local_28;
  undefined1 local_20;
  undefined4 local_1c;
  
  pFVar5 = Metasound::Engine::OutputFormatStereoInterface::GetVersion();
  FVar6 = FMetasoundFrontendVersionNumber::ToInterfaceVersion(&pFVar5->Number);
  pFVar5 = Metasound::Engine::OutputFormatStereoInterface::GetVersion();
  Audio::FParameterInterface::FParameterInterface(this,pFVar5->Name,(FVersion *)FVar6);
  pUVar7 = UMetaSoundPatch::StaticClass();
  UStruct::GetStructPathName((UStruct *)pUVar7,&local_e8);
  local_d8 = 1;
  pUVar7 = UMetaSoundSource::StaticClass();
  UStruct::GetStructPathName((UStruct *)pUVar7,(FTopLevelAssetPath *)(auStack_d6 + 2));
  lVar11 = 2;
  uStack_c4 = 0;
  local_f0 = CONCAT44(local_f0._4_4_,2);
  local_f8.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x14,4,2,0,&local_f8,2,(int *)((longlong)&local_f0 + 4));
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x40);
  *(FName *)local_f8.Data = local_e8.PackageName;
  *(FName *)(local_f8.Data + 8) = local_e8.AssetName;
  FVar3._2_6_ = auStack_d6;
  FVar3.ComparisonIndex.Value._0_2_ = local_d8;
  *(FName *)(local_f8.Data + 0x10) = FVar3;
  *(FName *)(local_f8.Data + 0x18) = FStack_d0;
  FVar4.Number._0_2_ = uStack_c4;
  FVar4.ComparisonIndex.Value = local_c8;
  FVar4.Number._2_2_ = uStack_c2;
  *(FName *)(local_f8.Data + 0x20) = FVar4;
  if (pFVar1 != &local_f8) {
    if (pFVar1->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1->Data);
    }
    pFVar1->Data = local_f8.Data;
    *(undefined4 *)((longlong)this + 0x48) = (undefined4)local_f0;
    *(undefined4 *)((longlong)this + 0x4c) = local_f0._4_4_;
    local_f0 = 0;
    local_f8.Data = (FScriptContainerElement *)0x0;
  }
  if ((FName *)local_f8.Data != (FName *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_a8.DisplayName,L"MetasoundFrontend",
             L"OutputFormatStereoInterface_GeneratedLeftDisplayName",L"Out Left");
  FText::AsLocalizable_Advanced_LocText
            (&local_a8.Description,L"MetasoundFrontend",
             L"OutputFormatStereoInterface_GeneratedLeftDescription",
             L"The resulting left channel output audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_a8.DataType = *pFVar8;
  local_a8.ParamName = Metasound::Engine::OutputFormatStereoInterface::Outputs::LeftOut;
  pFVar9 = FText::GetEmpty();
  local_a8.RequiredText.TextData.Reference = (pFVar9->TextData).Reference;
  if (local_a8.RequiredText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.RequiredText.TextData.Reference + 8))
              (local_a8.RequiredText.TextData.Reference,&stack0x00000008);
  }
  local_a8.RequiredText.Flags = pFVar9->Flags;
  local_a8.ParamType = None;
  local_a8.SortOrderIndex = 100;
  FText::AsLocalizable_Advanced_LocText
            (&local_60,L"MetasoundFrontend",L"OutputFormatStereoInterface_GeneratedRightDisplayName"
             ,L"Out Right");
  FText::AsLocalizable_Advanced_LocText
            (&local_50,L"MetasoundFrontend",L"OutputFormatStereoInterface_GeneratedRightDescription"
             ,L"The resulting right channel output audio.");
  pFVar8 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_40 = *pFVar8;
  local_38 = Metasound::Engine::OutputFormatStereoInterface::Outputs::RightOut;
  pFVar9 = FText::GetEmpty();
  local_30 = (pFVar9->TextData).Reference;
  if (local_30 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_30 + 8))(local_30,&stack0x00000008);
  }
  local_28 = pFVar9->Flags;
  local_b8._First = &local_a8;
  local_20 = 0;
  local_b8._Last = (FOutput *)&stack0xffffffffffffffe8;
  local_1c = 0x65;
  TArray<Audio::FParameterInterface::FOutput,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Audio::FParameterInterface::FOutput,TSizedDefaultAllocator<32>_> *)
             ((longlong)this + 0x20),&local_b8);
  plVar10 = (longlong *)&stack0xffffffffffffffe8;
  do {
    lVar11 = lVar11 + -1;
    if ((longlong *)plVar10[-3] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar10[-3] + 0x10))();
    }
    if ((longlong *)plVar10[-7] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar10[-7] + 0x10))();
    }
    plVar2 = (longlong *)plVar10[-9];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    plVar10 = plVar10 + -9;
  } while (lVar11 != 0);
  return this;
}

