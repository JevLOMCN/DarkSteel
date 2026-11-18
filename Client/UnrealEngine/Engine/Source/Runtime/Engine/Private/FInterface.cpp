// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FInterface @ 148691cf0

FInterface * __thiscall
`Audio::ListenerOrientationInterface::GetInterface'::__l2::FInterface::FInterface(void *this)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int local_res8;
  int iStackX_c;
  initializer_list<Audio::FParameterInterface::FInput> local_1d8;
  FInput local_1c8;
  FText local_e8;
  FText local_d8;
  undefined8 local_c8;
  FName local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_3c;
  undefined8 local_30;
  undefined8 local_28;
  FText local_20;
  undefined4 local_10;
  
  local_res8 = 1;
  iStackX_c = 0;
  Audio::FParameterInterface::FParameterInterface
            (this,Audio::ListenerOrientationInterface::Name,(FVersion *)&stack0x00000008);
  FText::FText(&local_1c8.DisplayName);
  FText::AsLocalizable_Advanced_LocText
            (&local_1c8.Description,L"ListenerOrientation",L"AzimuthDescription",
             L"Horizontal viewing angle of the current listener in world.");
  local_1c8.InitValue.ParamName = Audio::ListenerOrientationInterface::Inputs::Azimuth;
  local_1c8.InitValue.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_1c8.InitValue.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.DataType.ComparisonIndex.Value = 0;
  local_1c8.DataType.Number = 0;
  local_1c8.InitValue.FloatParam = 0.0;
  local_1c8.InitValue.BoolParam = false;
  local_1c8.InitValue.IntParam = 0;
  local_1c8.InitValue.StringParam.Data.ArrayNum = 0;
  local_1c8.InitValue.StringParam.Data.ArrayMax = 0;
  local_1c8.InitValue.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.InitValue.ArrayFloatParam.ArrayNum = 0;
  local_1c8.InitValue.ArrayFloatParam.ArrayMax = 0;
  local_1c8.InitValue.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.InitValue.ArrayBoolParam.ArrayNum = 0;
  local_1c8.InitValue.ArrayBoolParam.ArrayMax = 0;
  local_1c8.InitValue.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.InitValue.ArrayIntParam.ArrayNum = 0;
  local_1c8.InitValue.ArrayIntParam.ArrayMax = 0;
  local_1c8.InitValue.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.InitValue.ArrayObjectParam.ArrayNum = 0;
  local_1c8.InitValue.ArrayObjectParam.ArrayMax = 0;
  local_1c8.InitValue.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.InitValue.ArrayStringParam.ArrayNum = 0;
  local_1c8.InitValue.ArrayStringParam.ArrayMax = 0;
  local_1c8.InitValue.ParamType = Float;
  local_1c8.InitValue.TypeName.ComparisonIndex.Value = 0;
  local_1c8.InitValue.TypeName.Number = 0;
  local_1c8.InitValue.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.InitValue.ObjectProxies.ArrayNum = 0;
  local_1c8.InitValue.ObjectProxies.ArrayMax = 0;
  FText::FText(&local_1c8.RequiredText);
  local_1c8.SortOrderIndex = 0;
  FText::FText(&local_e8);
  FText::AsLocalizable_Advanced_LocText
            (&local_d8,L"ListenerOrientation",L"ElevationDescription",
             L"Vertical viewing angle of the current listener in world.");
  local_c0 = Audio::ListenerOrientationInterface::Inputs::Elevation;
  local_a8 = 0;
  uStack_a0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_b0 = 0;
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
  local_48 = 0;
  local_40 = 3;
  local_3c = 0;
  local_30 = 0;
  local_28 = 0;
  FText::FText(&local_20);
  local_1d8._First = &local_1c8;
  local_10 = 0;
  local_1d8._Last = (FInput *)&stack0xfffffffffffffff8;
  TArray<Audio::FParameterInterface::FInput,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Audio::FParameterInterface::FInput,TSizedDefaultAllocator<32>_> *)
             ((longlong)this + 0x10),&local_1d8);
  lVar3 = 2;
  plVar2 = (longlong *)&stack0xfffffffffffffff8;
  do {
    lVar3 = lVar3 + -1;
    if ((longlong *)plVar2[-3] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[-3] + 0x10))();
    }
    FAudioParameter::~FAudioParameter((FAudioParameter *)(plVar2 + -0x17));
    if ((longlong *)plVar2[-0x1a] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[-0x1a] + 0x10))();
    }
    plVar1 = (longlong *)plVar2[-0x1c];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    plVar2 = plVar2 + -0x1c;
  } while (lVar3 != 0);
  return this;
}

// FInterface @ 148691f20

FInterface * __thiscall
`Audio::SourceOrientationInterface::GetInterface'::__l2::FInterface::FInterface(void *this)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int local_res8;
  int iStackX_c;
  initializer_list<Audio::FParameterInterface::FInput> local_1d8;
  FInput local_1c8;
  FText local_e8;
  FText local_d8;
  undefined8 local_c8;
  FName local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_3c;
  undefined8 local_30;
  undefined8 local_28;
  FText local_20;
  undefined4 local_10;
  
  local_res8 = 1;
  iStackX_c = 0;
  Audio::FParameterInterface::FParameterInterface
            (this,Audio::SourceOrientationInterface::Name,(FVersion *)&stack0x00000008);
  FText::FText(&local_1c8.DisplayName);
  FText::AsLocalizable_Advanced_LocText
            (&local_1c8.Description,L"SourceOrientation",L"AzimuthDescription",
             L"Horizontal angle between emitter forward and listener location in degrees.");
  local_1c8.InitValue.ParamName = Audio::SourceOrientationInterface::Inputs::Azimuth;
  local_1c8.InitValue.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_1c8.InitValue.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.DataType.ComparisonIndex.Value = 0;
  local_1c8.DataType.Number = 0;
  local_1c8.InitValue.FloatParam = 0.0;
  local_1c8.InitValue.BoolParam = false;
  local_1c8.InitValue.IntParam = 0;
  local_1c8.InitValue.StringParam.Data.ArrayNum = 0;
  local_1c8.InitValue.StringParam.Data.ArrayMax = 0;
  local_1c8.InitValue.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.InitValue.ArrayFloatParam.ArrayNum = 0;
  local_1c8.InitValue.ArrayFloatParam.ArrayMax = 0;
  local_1c8.InitValue.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.InitValue.ArrayBoolParam.ArrayNum = 0;
  local_1c8.InitValue.ArrayBoolParam.ArrayMax = 0;
  local_1c8.InitValue.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.InitValue.ArrayIntParam.ArrayNum = 0;
  local_1c8.InitValue.ArrayIntParam.ArrayMax = 0;
  local_1c8.InitValue.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.InitValue.ArrayObjectParam.ArrayNum = 0;
  local_1c8.InitValue.ArrayObjectParam.ArrayMax = 0;
  local_1c8.InitValue.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.InitValue.ArrayStringParam.ArrayNum = 0;
  local_1c8.InitValue.ArrayStringParam.ArrayMax = 0;
  local_1c8.InitValue.ParamType = Float;
  local_1c8.InitValue.TypeName.ComparisonIndex.Value = 0;
  local_1c8.InitValue.TypeName.Number = 0;
  local_1c8.InitValue.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.InitValue.ObjectProxies.ArrayNum = 0;
  local_1c8.InitValue.ObjectProxies.ArrayMax = 0;
  FText::FText(&local_1c8.RequiredText);
  local_1c8.SortOrderIndex = 0;
  FText::FText(&local_e8);
  FText::AsLocalizable_Advanced_LocText
            (&local_d8,L"SourceOrientation",L"ElevationDescription",
             L"Vertical angle between emitter forward and listener location in degrees.");
  local_c0 = Audio::SourceOrientationInterface::Inputs::Elevation;
  local_a8 = 0;
  uStack_a0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_b0 = 0;
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
  local_48 = 0;
  local_40 = 3;
  local_3c = 0;
  local_30 = 0;
  local_28 = 0;
  FText::FText(&local_20);
  local_1d8._First = &local_1c8;
  local_10 = 0;
  local_1d8._Last = (FInput *)&stack0xfffffffffffffff8;
  TArray<Audio::FParameterInterface::FInput,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Audio::FParameterInterface::FInput,TSizedDefaultAllocator<32>_> *)
             ((longlong)this + 0x10),&local_1d8);
  lVar3 = 2;
  plVar2 = (longlong *)&stack0xfffffffffffffff8;
  do {
    lVar3 = lVar3 + -1;
    if ((longlong *)plVar2[-3] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[-3] + 0x10))();
    }
    FAudioParameter::~FAudioParameter((FAudioParameter *)(plVar2 + -0x17));
    if ((longlong *)plVar2[-0x1a] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[-0x1a] + 0x10))();
    }
    plVar1 = (longlong *)plVar2[-0x1c];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    plVar2 = plVar2 + -0x1c;
  } while (lVar3 != 0);
  return this;
}

// FInterface @ 148692150

FInterface * __thiscall
`Audio::SpatializationInterface::GetInterface'::__l2::FInterface::FInterface(void *this)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int local_res8;
  int iStackX_c;
  initializer_list<Audio::FParameterInterface::FInput> local_1d8;
  FInput local_1c8;
  FText local_e8;
  FText local_d8;
  undefined8 local_c8;
  FName local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_3c;
  undefined8 local_30;
  undefined8 local_28;
  FText local_20;
  undefined4 local_10;
  
  local_res8 = 1;
  iStackX_c = 0;
  Audio::FParameterInterface::FParameterInterface
            (this,Audio::SpatializationInterface::Name,(FVersion *)&stack0x00000008);
  FText::FText(&local_1c8.DisplayName);
  FText::AsLocalizable_Advanced_LocText
            (&local_1c8.Description,L"Spatialization",L"AzimuthDescription",
             L"Horizontal angle between listener forward and sound location in degrees.");
  local_1c8.InitValue.ParamName = Audio::SpatializationInterface::Inputs::Azimuth;
  local_1c8.InitValue.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_1c8.InitValue.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.DataType.ComparisonIndex.Value = 0;
  local_1c8.DataType.Number = 0;
  local_1c8.InitValue.FloatParam = 0.0;
  local_1c8.InitValue.BoolParam = false;
  local_1c8.InitValue.IntParam = 0;
  local_1c8.InitValue.StringParam.Data.ArrayNum = 0;
  local_1c8.InitValue.StringParam.Data.ArrayMax = 0;
  local_1c8.InitValue.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.InitValue.ArrayFloatParam.ArrayNum = 0;
  local_1c8.InitValue.ArrayFloatParam.ArrayMax = 0;
  local_1c8.InitValue.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.InitValue.ArrayBoolParam.ArrayNum = 0;
  local_1c8.InitValue.ArrayBoolParam.ArrayMax = 0;
  local_1c8.InitValue.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.InitValue.ArrayIntParam.ArrayNum = 0;
  local_1c8.InitValue.ArrayIntParam.ArrayMax = 0;
  local_1c8.InitValue.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.InitValue.ArrayObjectParam.ArrayNum = 0;
  local_1c8.InitValue.ArrayObjectParam.ArrayMax = 0;
  local_1c8.InitValue.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.InitValue.ArrayStringParam.ArrayNum = 0;
  local_1c8.InitValue.ArrayStringParam.ArrayMax = 0;
  local_1c8.InitValue.ParamType = Float;
  local_1c8.InitValue.TypeName.ComparisonIndex.Value = 0;
  local_1c8.InitValue.TypeName.Number = 0;
  local_1c8.InitValue.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.InitValue.ObjectProxies.ArrayNum = 0;
  local_1c8.InitValue.ObjectProxies.ArrayMax = 0;
  FText::FText(&local_1c8.RequiredText);
  local_1c8.SortOrderIndex = 0;
  FText::FText(&local_e8);
  FText::AsLocalizable_Advanced_LocText
            (&local_d8,L"Spatialization",L"ElevationDescription",
             L"Vertical angle between listener forward and sound location in degrees.");
  local_c0 = Audio::SpatializationInterface::Inputs::Elevation;
  local_a8 = 0;
  uStack_a0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_b0 = 0;
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
  local_48 = 0;
  local_40 = 3;
  local_3c = 0;
  local_30 = 0;
  local_28 = 0;
  FText::FText(&local_20);
  local_1d8._First = &local_1c8;
  local_10 = 0;
  local_1d8._Last = (FInput *)&stack0xfffffffffffffff8;
  TArray<Audio::FParameterInterface::FInput,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Audio::FParameterInterface::FInput,TSizedDefaultAllocator<32>_> *)
             ((longlong)this + 0x10),&local_1d8);
  lVar3 = 2;
  plVar2 = (longlong *)&stack0xfffffffffffffff8;
  do {
    lVar3 = lVar3 + -1;
    if ((longlong *)plVar2[-3] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[-3] + 0x10))();
    }
    FAudioParameter::~FAudioParameter((FAudioParameter *)(plVar2 + -0x17));
    if ((longlong *)plVar2[-0x1a] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[-0x1a] + 0x10))();
    }
    plVar1 = (longlong *)plVar2[-0x1c];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    plVar2 = plVar2 + -0x1c;
  } while (lVar3 != 0);
  return this;
}

